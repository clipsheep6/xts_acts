/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import media from '@ohos.multimedia.media'
import Fileio from '@ohos.fileio'
import featureAbility from '@ohos.ability.featureAbility'
import {toNewPage, clearRouter} from '../../../../../VideoPlayerTestBase.js';
import * as mediaTestBase from '../../../../../MediaTestBase.js';

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('VideoPlayerNSAPICallback', function () {

    let readStreamSync = undefined;
    const VIDEO_SOURCE = '/files/H264_AAC.mp4';
    const PLAY_TIME = 1000;
    const SEEK_TIME = 5000;
    const WIDTH_VALUE = 720;
    const HEIGHT_VALUE = 480;
    const DURATION_TIME = 10034;
    const CREATE_EVENT = 'create';
    const SETURL_EVENT = 'setUrl';
    const SETFDSRC_EVENT = 'setfdSrc';
    const SETSURFACE_EVENT = 'setDisplaySurface';
    const GETDESCRIPTION = 'getTrackDescription';
    const PREPARE_EVENT = 'prepare';
    const PLAY_EVENT = 'play';
    const PAUSE_EVENT = 'pause';
    const STOP_EVENT = 'stop';
    const RESET_EVENT = 'reset';
    const RELEASE_EVENT = 'release';
    const SEEK_EVENT = 'seek';
    const SEEK_MODE_EVENT = 'seekMode';
    const SETVOLUME_EVENT = 'volume';
    const SETSPEED_EVENT = 'speed';
    const ERROR_EVENT = 'error';
    const END_EVENT = 'end';
    const VOLUME_VALUE = 1;
    const SPEED_VALUE = 1;
    const NEXT_FRAME_TIME = 8333;
    const PREV_FRAME_TIME = 4166;
    const DELTA_TIME = 100;
    let surfaceID = '';
    let fileDescriptor = undefined;
    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';
    let pageId = 0;
    let fdHead = 'fd://';
    let events = require('events');
    let eventEmitter = new events.EventEmitter();

    beforeAll(async function() {
        console.info('beforeAll case');
    })

    beforeEach(async function() {
        await toNewPage(pagePath1, pagePath2, pageId);
        pageId = (pageId + 1) % 2;
        await mediaTestBase.msleepAsync(1000).then(
            () => {}, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        surfaceID = globalThis.value;
        console.info('case new surfaceID is ' + surfaceID);
        console.info('beforeEach case');
    })

    afterEach(async function() {
        await clearRouter();
        console.info('afterEach case');
    })

    afterAll(async function() {
        console.info('afterAll case');
    })

    function toNextStep(videoPlayer, steps, done) {
        if (steps[0] == END_EVENT) {
            console.info('case success!!');
            done();
        } else {
            eventEmitter.emit(steps[0], videoPlayer, steps, done);
        }
    }
    function getTotalLen() {
        let buf = new ArrayBuffer(READ_DATA_SIZE_MAX);
        let totalLength = readStreamSync.readSync(buf);
        dataSrc.size = totalLength;
    }

    function getContent(mem, len, pos) {
        let lenReal = -1;
        if (pos == -1) {
            lenReal = readStreamSync.readSync(mem, {
                length: len,
            });
        } else {
            lenReal= readStreamSync.readSync(mem, {
                position: pos,
                length: len,
            });

        }
        return lenReal;
    }

    function readFile(path) {
        console.info('case MusicPlayer[PlayerModel] Launcher FileUtil readFile start execution');
        try {
            let publicPath = path + VIDEO_SOURCE;
            console.info('case MusicPlayer[PlayerModel] readFile: ' + publicPath);
            readStreamSync = Fileio.createStreamSync(publicPath, 'r+');
        } catch (e) {
            console.info('case MusicPlayer Launcher FileUtil readFile ' + e);
        }
    }

    function setDataSrcSeekAble() {
        var context = featureAbility.getContext();
        context.getOrCreateLocalDir((err, data) => {
            console.info("data=" + data);
            readFile(data);
            if (readStreamSync == undefined) {
                console.info('case MusicPlayer Launcher FileUtil is null');
                return;
            }
            getTotalLen();
            dataSrc.on('readAt', (length, mem, pos) => {
                console.info('MusicPlayer[PlayerModel] readAt:' + length + 'pos' + pos);
                datasrcLen = getContent(mem, length, pos);
                if (datasrcLen > 0) {
                    console.info('case MusicPlayer[PlayerModel] readAt end:' + datasrcLen);
                    return datasrcLen;
                }
                return -1;
            });
        })
    }

    function setOnCallback(videoPlayer, steps, done) {

        videoPlayer.on('playbackCompleted', () => {
            console.info('case playbackCompleted success');
        });

        videoPlayer.on('bufferingUpdate', (infoType, value) => {
            console.info('case bufferingUpdate success infoType is ' + infoType);
            console.info('case bufferingUpdate success value is ' + value);
        });

        videoPlayer.on('startRenderFrame', () => {
            console.info('case startRenderFrame success');
        });

        videoPlayer.on('videoSizeChanged', (width, height) => {
            console.info('case videoSizeChanged success');
        });

        videoPlayer.on('error', (error) => {
            console.info(`case error called, errMessage is ${error.message}`);
            if (steps[0] == ERROR_EVENT) {
                done();
            }
        });
    }

    eventEmitter.on(CREATE_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        let dataSrc = media.createAVDataSource();
        media.createVideoPlayer((err, video) => {
            if (typeof (video) != 'undefined') {
                videoPlayer = video;
                expect(videoPlayer.state).assertEqual('idle');
                console.info('case createVideoPlayer success!!');
                setDataSrcSeekAble();
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }

        });
    });

    eventEmitter.on(SETURL_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.dataSrc = dataSrc;
        toNextStep(videoPlayer, steps, done);
    });
    eventEmitter.on(SETSURFACE_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.setDisplaySurface(surfaceID, (err) => {
            if (typeof (err) == 'undefined') {
                expect(videoPlayer.state).assertEqual('idle');
                console.info('case setDisplaySurface success!!');
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        })
    });

    eventEmitter.on(PREPARE_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        setOnCallback(videoPlayer, steps, done);
        videoPlayer.prepare((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoPlayer.state).assertEqual('prepared');
                expect(videoPlayer.duration).assertEqual(DURATION_TIME);
                expect(videoPlayer.width).assertEqual(WIDTH_VALUE);
                expect(videoPlayer.height).assertEqual(HEIGHT_VALUE);
                console.info('case prepare success!!');
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(GETDESCRIPTION, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.getTrackDescription((err, arrlist) => {
            if (typeof (err) == 'undefined') {
                for (let i = 0; i < arrlist.length; i++) {
                    mediaTestBase.printDescription(arrlist[i]);
                }
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(PLAY_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.play((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoPlayer.state).assertEqual('playing');
                console.info('case play success!!');
                mediaTestBase.msleep(PLAY_TIME);
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(PAUSE_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.pause((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoPlayer.state).assertEqual('paused');
                console.info('case pause success!!');
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(STOP_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.stop((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoPlayer.state).assertEqual('stopped');
                console.info('case stop success!!');
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(RESET_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.reset((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoPlayer.state).assertEqual('idle');
                console.info('case reset success!!');
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(RELEASE_EVENT, (videoPlayer, steps, done) => {
        steps.shift();
        videoPlayer.release((err) => {
            if (typeof (err) == 'undefined') {
                console.info('case release success!!');
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(SEEK_EVENT, (videoPlayer, steps, done) => {
        let seekTime = steps[1];
        steps.shift();
        steps.shift();
        videoPlayer.seek(seekTime, (err, seekDoneTime) => {
            if (typeof (err) == 'undefined') {
                console.info('case seek success and seekDoneTime is '+ seekDoneTime);
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    function checkSeekTime(seekMode, seekTime, seekDoneTime) {
        switch (seekMode) {
            case media.SeekMode.SEEK_NEXT_SYNC:
                if (seekTime == 0) {
                    expect(seekDoneTime + DELTA_TIME).assertClose(DELTA_TIME, DELTA_TIME);
                } else if (seekTime == DURATION_TIME) {
                    expect(seekDoneTime).assertClose(DURATION_TIME, DELTA_TIME);
                } else {
                    expect(seekDoneTime).assertClose(NEXT_FRAME_TIME, DELTA_TIME);
                }
                break;
            case media.SeekMode.SEEK_PREV_SYNC:
                if (seekTime == 0) {
                    expect(seekDoneTime + DELTA_TIME).assertClose(DELTA_TIME, DELTA_TIME);
                } else if (seekTime == DURATION_TIME) {
                    expect(seekDoneTime).assertClose(NEXT_FRAME_TIME, DELTA_TIME);
                } else {
                    expect(seekDoneTime).assertClose(PREV_FRAME_TIME, DELTA_TIME);
                }
                break;
            default:
                break;
        }
    }

    eventEmitter.on(SEEK_MODE_EVENT, (videoPlayer, steps, done) => {
        let seekTime = steps[1];
        steps.shift();
        steps.shift();
        videoPlayer.seek(seekTime, media.SeekMode.SEEK_NEXT_SYNC, (err, seekDoneTime) => {
            if (typeof (err) == 'undefined') {
                checkSeekTime(media.SeekMode.SEEK_NEXT_SYNC, seekTime, seekDoneTime);
                console.info('case seek success and seekDoneTime is '+ seekDoneTime);
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(SETVOLUME_EVENT, (videoPlayer, steps, done) => {
        let volumeValue = steps[1];
        steps.shift();
        steps.shift();
        videoPlayer.setVolume(volumeValue, (err) => {
            if (typeof (err) == 'undefined') {
                console.info('case setVolume success');
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });

    eventEmitter.on(SETSPEED_EVENT, (videoPlayer, steps, done) => {
        let speedValue = steps[1];
        steps.shift();
        steps.shift();
        videoPlayer.setSpeed(speedValue, (err, speedMode) => {
            if (typeof (err) == 'undefined') {
                expect(speedValue).assertEqual(speedMode);
                console.info('case setSpeed success and speedMode is '+ speedMode);
                toNextStep(videoPlayer, steps, done);
            } else if ((typeof (err) != 'undefined') && (steps[0] == ERROR_EVENT)) {
                steps.shift();
                toNextStep(videoPlayer, steps, done);
            } else {
                mediaTestBase.printError(err, done);
            }
        });
    });


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0100
        * @tc.name      : 01.create->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0200
        * @tc.name      : 02.play->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, PLAY_EVENT,
            PREPARE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0300
        * @tc.name      : 03.pause->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, PLAY_EVENT,
            PAUSE_EVENT, PREPARE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0400
        * @tc.name      : 04.stop->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, PLAY_EVENT,
            STOP_EVENT, PREPARE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0500
        * @tc.name      : 05.reset->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, PLAY_EVENT,
            RESET_EVENT, SETURL_EVENT, PREPARE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })



    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0600
        * @tc.name      : 06.setvolume->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, PLAY_EVENT,
            SETVOLUME_EVENT, VOLUME_VALUE, PREPARE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0700
        * @tc.name      : 07.setspeed->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, PLAY_EVENT,
            SETSPEED_EVENT, SPEED_VALUE, PREPARE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0800
        * @tc.name      : 08.setDisplaySurface->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0900
        * @tc.name      : 09.getTrackDescription->prepare
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, GETDESCRIPTION,
            PREPARE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1000
        * @tc.name      : 10.prepare 3 times
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, PREPARE_EVENT, PREPARE_EVENT,
            PREPARE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1100
        * @tc.name      : 11.create->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, PLAY_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1200
        * @tc.name      : 12.prepare->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1300
        * @tc.name      : 13.pause->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, PLAY_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1400
        * @tc.name      : 14.stop->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, PLAY_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1500
        * @tc.name      : 15.reset->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RESET_EVENT, PLAY_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1600
        * @tc.name      : 16.setvolume->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1700
        * @tc.name      : 17.setspeed->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1800
        * @tc.name      : 18.setDisplaySurface->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PLAY_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1900
        * @tc.name      : 19.getTrackDescription->play
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, GETDESCRIPTION, PLAY_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_2000
        * @tc.name      : 20.play 3 times
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_2000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PLAY_EVENT, PLAY_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2100
        * @tc.name      : 21.create->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, PAUSE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2200
        * @tc.name      : 22.prepare->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PAUSE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2300
        * @tc.name      : 23.play->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2400
        * @tc.name      : 24.stop->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, PAUSE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2500
        * @tc.name      : 55.reset->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RESET_EVENT, PAUSE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2600
        * @tc.name      : 26.setvolume->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, PAUSE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2700
        * @tc.name      : 27.setspeed->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, PAUSE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2800
        * @tc.name      : 28.setDisplaySurface->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PAUSE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2900
        * @tc.name      : 29.getTrackDescription->pause
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_2900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, GETDESCRIPTION, PAUSE_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_3000
        * @tc.name      : 30.pause 3 times
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_3000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, PAUSE_EVENT, PAUSE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3100
        * @tc.name      : 31.create->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, STOP_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3200
        * @tc.name      : 32.prepare->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3300
        * @tc.name      : 33.play->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3400
        * @tc.name      : 34.pause->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3500
        * @tc.name      : 35.reset->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RESET_EVENT, STOP_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })



    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3600
        * @tc.name      : 36.setvolume->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3700
        * @tc.name      : 37.setspeed->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3800
        * @tc.name      : 38.setDisplaySurface->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            STOP_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3900
        * @tc.name      : 39.getTrackDescription->stop
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_3900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, GETDESCRIPTION, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_4000
        * @tc.name      : 40.stop 3 times
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_4000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, STOP_EVENT, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4100
        * @tc.name      : 41.create->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, STOP_EVENT, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4200
        * @tc.name      : 42.prepare->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4300
        * @tc.name      : 43.play->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4400
        * @tc.name      : 44.pause->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4500
        * @tc.name      : 45.stop->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4600
        * @tc.name      : 46.setvolume->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4700
        * @tc.name      : 47.setspeed->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4800
        * @tc.name      : 48.setDisplaySurface->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4900
        * @tc.name      : 49.getTrackDescription->reset
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_4900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, GETDESCRIPTION, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_5000
        * @tc.name      : 50.reset 3 times
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_5000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, RESET_EVENT, RESET_EVENT, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5100
        * @tc.name      : 51.create->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5200
        * @tc.name      : 52.prepare->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5300
        * @tc.name      : 53.play->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5400
        * @tc.name      : 54.pause->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5500
        * @tc.name      : 55.stop->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5600
        * @tc.name      : 56.setvolume->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5700
        * @tc.name      : 57.setspeed->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5800
        * @tc.name      : 58.setDisplaySurface->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5900
        * @tc.name      : 59.getTrackDescription->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_5900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, GETDESCRIPTION, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_6000
        * @tc.name      : 60.reset->release
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_6000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, RESET_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6100
        * @tc.name      : 61.create->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6200
        * @tc.name      : 62.prepare->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6300
        * @tc.name      : 63.play->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6400
        * @tc.name      : 64.pause->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6500
        * @tc.name      : 65.stop->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6600
        * @tc.name      : 66.reset->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RESET_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })



    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6700
        * @tc.name      : 67.setspeed->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, SETVOLUME_EVENT,
            VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6800
        * @tc.name      : 68.setDisplaySurface->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            SETVOLUME_EVENT, VOLUME_VALUE, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6900
        * @tc.name      : 69.getTrackDescription->setvolume
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_6900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, GETDESCRIPTION, SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_7000
        * @tc.name      : 70.setvolume 3 times
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_7000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, SETVOLUME_EVENT, VOLUME_VALUE,
            SETVOLUME_EVENT, VOLUME_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_7100
        * @tc.name      : 71.setvolume(<0)
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_7100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, -1, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_7200
        * @tc.name      : 72.setvolume(> 1)
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_7200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, 2, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7300
        * @tc.name      : 73.create->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETSPEED_EVENT, SPEED_VALUE,ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7400
        * @tc.name      : 74.prepare->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, SETSPEED_EVENT, SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7500
        * @tc.name      : 75.play->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7500', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7600
        * @tc.name      : 76.pause->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7600', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, PAUSE_EVENT, SETSPEED_EVENT, SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7700
        * @tc.name      : 77.stop->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7700', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, STOP_EVENT, SETSPEED_EVENT, SPEED_VALUE,
            ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7800
        * @tc.name      : 78.reset->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7800', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, RESET_EVENT, SETSPEED_EVENT, SPEED_VALUE,
            ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7900
        * @tc.name      : 79.setvolume->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_7900', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETVOLUME_EVENT, VOLUME_VALUE, SETSPEED_EVENT,
            SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8000
        * @tc.name      : 80.setDisplaySurface->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8000', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            SETSPEED_EVENT, SPEED_VALUE, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8100
        * @tc.name      : 81.getTrackDescription->setspeed
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8100', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, GETDESCRIPTION, SETSPEED_EVENT, SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8200
        * @tc.name      : 82.setspeed 3 times
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8200', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, SPEED_VALUE, SETSPEED_EVENT, SPEED_VALUE,
            SETSPEED_EVENT, SPEED_VALUE, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8300
        * @tc.name      : 83.setspeed(< 0)
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8300', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, -1, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8300
        * @tc.name      : 84.setspeed(> 4)
        * @tc.desc      : Video playback control test
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_8400', 0, async function (done) {
        
        let videoPlayer = null;
        let mySteps = new Array(CREATE_EVENT, SETURL_EVENT, SETSURFACE_EVENT,
            PREPARE_EVENT, PLAY_EVENT, SETSPEED_EVENT, 5, ERROR_EVENT, RELEASE_EVENT, END_EVENT);
        eventEmitter.emit(mySteps[0], videoPlayer, mySteps, done);
        done();
    })
})
