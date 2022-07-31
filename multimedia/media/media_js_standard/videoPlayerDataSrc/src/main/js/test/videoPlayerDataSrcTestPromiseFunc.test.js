/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import media from '@ohos.multimedia.media'
import FileIO from '@ohos.fileio'
import featureAbility from '@ohos.ability.featureAbility'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js';

describe('PlayerDataSrcPromise', function () {
    let dataSrc = null;
    let videoPlayer = media.createVideoPlayer();
    let readStreamSync = undefined;
    let mySteps = [];
    let pos_ = 0;
    let timeoutTimer = undefined;
    let isPrepared = false;
    let videoSource = '/files/H264_AAC.mp4';
    const PLAY_TIME = 3000;
    let durationTime = 10034;
    const SEEK_TIME = 5000;
    const SPEED_FORWARD_0_75_X = media.PlaybackSpeed.SPEED_FORWARD_0_75_X;
    const SPEED_FORWARD_1_00_X = media.PlaybackSpeed.SPEED_FORWARD_1_00_X;
    const SPEED_FORWARD_1_25_X = media.PlaybackSpeed.SPEED_FORWARD_1_25_X;
    const SPEED_FORWARD_1_75_X = media.PlaybackSpeed.SPEED_FORWARD_1_75_X;
    const SPEED_FORWARD_2_00_X = media.PlaybackSpeed.SPEED_FORWARD_2_00_X;
    const SEEK_NEXT_SYNC = media.SeekMode.SEEK_NEXT_SYNC;
    const SEEK_PREV_SYNC = media.SeekMode.SEEK_PREV_SYNC;
    const SEEK_CLOSEST_SYNC = media.SeekMode.SEEK_CLOSEST_SYNC;
    const SEEK_CLOSEST = media.SeekMode.SEEK_CLOSEST;

    const SET_DS_STATE = 0;
    const PREPARE_STATE = 1;
    const PLAY_STATE = 2;
    const PAUSE_STATE = 3;
    const STOP_STATE = 4;
    const RESET_STATE = 5;
    const SEEK_STATE = 6;
    const VOLUME_STATE = 7;
    const RELEASE_STATE = 8;
    const SPEED_STATE = 13;
    const FINISH_STATE = 14;
    const ERROR_STATE = 15;
    const SRC_STATE = 16;
    const END_STATE = 17;
    const SEEK_MODE_STATE = 18;
    const CREATE_STATE = 19;
    const GET_TD_STATE = 20;

    const SECOND_INDEX = 1;
    const THIRD_INDEX = 2;
    const RAND_NUM = 5;
    const TIME_OUT = 60000;
    const MAX_VOLUME = 1;
    const READ_DATA_SIZE_MAX = 4096 * 10000;
    const TIME_OUT_FLAG = false;
    const SLEEP_TIME = 1500;

    const DELTA_TIME = 1000;
    const NEXT_FRAME_TIME = 8333;
    const PREV_FRAME_TIME = 4166;
    const DELTA_SEEK_TIME = 100;
    let surfaceID = '';
    const PAGE_PATH1 = 'pages/surfaceTest/surfaceTest';
    const PAGE_PATH2 = 'pages/surfaceTest2/surfaceTest2';
    let pageId = 0;

    beforeAll(async function () {
        console.info(' beforeAll case');
    })

    beforeEach(async function () {
        isPrepared = false;
        console.info(' beforeEach case');
        await mediaTestBase.toNewPage(PAGE_PATH1, PAGE_PATH2, pageId);
        pageId = (pageId + 1) % 2;
        await sleep(1000);
        surfaceID = globalThis.value;
        console.info('case new surfaceID is ' + surfaceID);
    })

    afterEach(async function () {
        console.info(' afterEach case1');
        if (typeof (videoPlayer) != 'undefined') {
            console.info(' afterEach case2');
            videoPlayer.release();
            console.info(' afterEach case3');
            videoPlayer = undefined;
            await sleep(SLEEP_TIME);
        }
        console.info(' afterEach case4');
        if (!!readStreamSync) {
            readStreamSync.close();
        }
        console.info(' afterEach case5');
        removeTimeoutTimer();
        console.info(' afterEach case6');
        await mediaTestBase.clearRouter();
    })

    afterAll(async function () {
        console.info(' afterAll case');
    })

    function sleep(time) {
        return new Promise(resolve => {
            setTimeout(() => {
                resolve('sleep finished');
            }, time);
        })
    }

    function failureCallback(error, done) {
        console.info(`failureCallback called,errMessage is ${error.message}`);
        if (mySteps[0] == ERROR_STATE) {
            console.info('case error state');
            mySteps.shift();
            // nextStep(done);
        } else {
            expect().assertFail();
            done();
        }
    }

    async function nextStep(done) {
        if (mySteps[0] == END_STATE) {
            console.info(' case to done');
            removeTimeoutTimer();
            expect(true).assertTrue();
            done();
            return;
        }
        let seekTime = 0;
        switch (mySteps[0]) {
            case SET_DS_STATE:
                console.info(` case to setDisplaySurface; surfaceID: ` + surfaceID);
                mySteps.shift();
                await videoPlayer.setDisplaySurface(surfaceID).then(() => {
                    console.info(`setDisplaySurface success`);
                }, (err) => {
                    console.info(` setDisplaySurface failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case PREPARE_STATE:
                console.info(` case to prepare`);
                mySteps.shift();
                await videoPlayer.prepare().then(() => {
                    console.info(`prepare success`);
                    durationTime = videoPlayer.duration;
                }, (err) => {
                    console.info(` prepare failed;`);
                    durationTime = 0;
                    failureCallback(err, done);
                });
                isPrepared = true;
                console.info(` case to prepare finished`);
                nextStep(done);
                break;
            case PLAY_STATE:
                console.info(` case to play`);
                mySteps.shift();
                await videoPlayer.play().then(() => {
                    console.info(`play success`);
                    expect(videoPlayer.state).assertEqual('playing');
                }, (err) => {
                    console.info(` play failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case PAUSE_STATE:
                console.info(` case to pause`);
                mySteps.shift();
                await videoPlayer.pause().then(() => {
                    console.info(`pause success`);
                    expect(videoPlayer.state).assertEqual('paused');
                }, (err) => {
                    console.info(` pause failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case STOP_STATE:
                console.info(` case to stop`);
                mySteps.shift();
                await videoPlayer.stop().then(() => {
                    console.info(`stop success`);
                    expect(videoPlayer.state).assertEqual('stopped');
                }, (err) => {
                    console.info(` stop failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case RESET_STATE:
                console.info(` case to reset`);
                mySteps.shift();
                await videoPlayer.reset().then(() => {
                    console.info(`reset success`);
                    expect(videoPlayer.state).assertEqual('idle');
                }, (err) => {
                    console.info(` reset failed;`);
                    failureCallback(err, done);
                });
                console.info(` case to after reset; videoPlayer.url: ` + videoPlayer.url);
                console.info(` case to after reset; videoPlayer.state: ` + videoPlayer.state);
                nextStep(done);
                break;
            case SEEK_STATE:
                console.info(` case seek to time is ${mySteps[SECOND_INDEX]}`);
                mySteps.shift();
                seekTime = mySteps.shift();
                await videoPlayer.seek(seekTime).then((result) => {
                    console.info(`seek success; result: ` + result);
                    expect(videoPlayer.currentTime).assertClose(seekTime, DELTA_TIME * 2);
                }, (err) => {
                    console.info(`seek failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case VOLUME_STATE:
                console.info(` case to setVolume`);
                mySteps.shift();
                let volumeValue = mySteps.shift();
                await videoPlayer.setVolume(volumeValue).then(() => {
                    console.info(`setVolume success`);
                }, (err) => {
                    console.info(`setVolume failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case RELEASE_STATE:
                console.info(` case to release`);
                mySteps.shift();
                await videoPlayer.release().then(() => {
                    console.info(`release success`);
                }, (err) => {
                    console.info(`release failed;`);
                    failureCallback(err, done);
                });
                videoPlayer = undefined;
                nextStep(done);
                break;
            case SPEED_STATE:
                console.info(` case to set speed`);
                mySteps.shift();
                let speedValue = mySteps.shift();
                await videoPlayer.setSpeed(speedValue).then(() => {
                    console.info(`set speed success`);
                }, (err) => {
                    console.info(`set speed failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case SRC_STATE:
                console.info(` case to data source`);
                videoPlayer.dataSrc = dataSrc;
                mySteps.shift();
                nextStep(done);
                break;
            case SEEK_MODE_STATE:
                console.info(` case seek to time is ${mySteps[SECOND_INDEX]}`);
                console.info(` case seek mode is ${mySteps[THIRD_INDEX]}`);
                mySteps.shift();
                seekTime = mySteps.shift();
                let seekMode = mySteps.shift();
                await videoPlayer.seek(seekTime, seekMode).then((result) => {
                    console.info(`seek mode success;result: ` + result);
                    expect(videoPlayer.currentTime).assertClose(seekTime, DELTA_TIME * 2);
                }, (err) => {
                    console.info(`seek mode failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            case CREATE_STATE:
                console.info(` case to create`);
                mySteps.shift();
                await media.createVideoPlayer().then((videoPlayerObj) => {
                    console.info(`create success`);
                    videoPlayer = videoPlayerObj;
                }, (err) => {
                    console.info(`create failed;`);
                    failureCallback(err, done);
                });
                if (typeof (videoPlayer) == 'undefined') {
                    console.info(' case create player is failed');
                    expect().assertFail();
                    done();
                }
                setCommonCallback(done);
                console.info('yf---003.1');
                await sleep(SLEEP_TIME);
                console.info('yf---003.2');
                nextStep(done);
                break;
            case GET_TD_STATE:
                console.info(` case to getTrackDescription`);
                mySteps.shift();
                await videoPlayer.getTrackDescription().then((data) => {
                    console.info('getTrackDescription: ' + JSON.stringify(data));
                }, (err) => {
                    console.info(`getTrackDescription failed;`);
                    failureCallback(err, done);
                });
                nextStep(done);
                break;
            default:
                console.info(`unexpect step: ` + mySteps[0]);
                mySteps.shift();
                nextStep(done);
                break;
        }
    }

    function getTotalLen() {
        let buf = new ArrayBuffer(READ_DATA_SIZE_MAX);
        let totalLength = readStreamSync.readSync(buf);
        dataSrc.size = totalLength;
    }

    function setReadAtCallBack(done) {
        console.info('MusicPlayer[PlayerModel] readAt on start');
        dataSrc.on('readAt', (length, buf, pos) => {
            console.info('MusicPlayer[PlayerModel] readAt: length: ' + length + ' pos : ' + pos + ' size_ : ' + dataSrc.size);
            if (isPrepared) {
                console.info('MusicPlayer[PlayerModel] readAt already prepared');
                //                mySteps.shift();
                //                nextStep(done);
                //                return;
            }
            // 判断异常
            if (!buf) {
                console.info('buf not exist');
                return 0;
            }
            //            if (pos != pos_) {
            //                pos = pos_;
            //                console.info('pos error');
            //            }
            //            if (pos > size_) {
            //                console.info('pos > size_');
            //                return;
            //            }
            //            if ((pos + length) > size_) {
            //                length = size_ - pos;
            //                console.info('next size bigger than total size');
            //            }
            console.info('buf byteLength: ' + buf.byteLength);
            if (length > buf.byteLength) {
                length = buf.byteLength;
                console.info('buf length less than length');
            }
            console.info('MusicPlayer[PlayerModel] readAt: ' + length + ';pos: ' + pos);
            let lenReal = readStreamSync.readSync(buf, {
                position: pos,
                length: length,
            });
            console.info('case MusicPlayer[PlayerModel] readAt end, lenReal: ' + lenReal);
            console.info('playerXTS ========================================================================');
            return lenReal;
        });
        console.info('MusicPlayer[PlayerModel] readAt on end');
    }

    function setCommonCallback(done) {
        console.info(`case setCallback`);
        videoPlayer.on('bufferingUpdate', (infoType, value) => {
            console.info('case bufferingUpdate success infoType is ' + infoType);
            console.info('case bufferingUpdate success value is ' + value);
        });
        videoPlayer.on('playbackCompleted', () => {
            console.info('case playbackCompleted');
        });
        videoPlayer.on('startRenderFrame', () => {
            console.info('case startRenderFrame');
        });
        videoPlayer.on('videoSizeChanged', (width, height) => {
            console.info('case videoSizeChanged, width: ' + width + ' ;height:' + height);
        });
        videoPlayer.on('error', (err) => {
            console.info(`case error called,errName is ${err.name}`);
            console.info(`case error called,errCode is ${err.code}`);
            console.info(`case error called,errMessage is ${err.message}`);
            //            if (mySteps[0] !== ERROR_STATE) {
            //                expect().assertFail();
            //                done();
            //            } else if ((mySteps[0] == SEEK_STATE) || (mySteps[0] == VOLUME_STATE)) {
            //                mySteps.shift();
            //                mySteps.shift();
            //            } else if (mySteps[0] == SEEK_MODE_STATE) {
            //                mySteps.shift();
            //                mySteps.shift();
            //                mySteps.shift();
            //            } else {
            //                mySteps.shift();
            //            }
            //            nextStep(done);
        });
    }

    function addTimeoutTimer(done) {
        console.info('yf---005');
        removeTimeoutTimer();
        console.info('yf---006');
        timeoutTimer = setTimeout(() => {
            console.info(' case time out');
            expect().assertFail();
            done();
        }, TIME_OUT);
        console.info('yf---007');
    }

    function removeTimeoutTimer() {
        if (!!timeoutTimer) {
            clearTimeout(timeoutTimer);
            timeoutTimer = undefined;
        }
    }

    async function actFun(done) {
        console.info('yf---003');
        dataSrc = await media.createAVDataSource();
        var context = featureAbility.getContext();
        let publicPath = '';
        console.info('context.getOrCreateLocalDir start; dataSrc: ' + JSON.stringify(dataSrc));
        await context.getOrCreateLocalDir().then((data) => {
            console.info("data=" + data);
            publicPath = data + videoSource;
        }, (err) => {
            console.info("getOrCreateLocalDir failed; err: " + err);
            expect().assertFail();
            done();
        });
        console.info('FileIO.createStreamSync start; publicPath: ' + publicPath);
        readStreamSync = FileIO.createStreamSync(publicPath, 'r+');
        console.info('FileIO.createStreamSync end;');
        if (!readStreamSync) {
            console.info(' case MusicPlayer Launcher FileUtil is null');
            expect().assertFail();
            done();
        }
        console.info('FileIO.createStreamSync success');
        getTotalLen();
        console.info('dataSrc size: ' + dataSrc.size);
        setReadAtCallBack(done);
        console.info('yf---001');
        await sleep(SLEEP_TIME);
        console.info('yf---002');
        addTimeoutTimer(done);
        console.info('yf---008');
        nextStep(done);
        console.info('yf---009');
    }

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0100
        * @tc.name      : create->prepare
        * @tc.desc      : test create->prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0300
        * @tc.name      : setdisplaysurface->prepare
        * @tc.desc      : test setdisplaysurface->prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0400
        * @tc.name      : gettrackdescription->prepare
        * @tc.desc      : test gettrackdescription->prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            GET_TD_STATE, PREPARE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0500
        * @tc.name      : prepare 3 times
        * @tc.desc      : test prepare 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PREPARE_STATE, PREPARE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0100
        * @tc.name      : prepare->play
        * @tc.desc      : test prepare->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0200
        * @tc.name      : pause->play
        * @tc.desc      : test pause->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, PLAY_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0300
        * @tc.name      : setvolume->play
        * @tc.desc      : test setvolume->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.5, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0400
        * @tc.name      : setspeed->play
        * @tc.desc      : test setspeed->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_0_75_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0500
        * @tc.name      : gettrackdescription->play
        * @tc.desc      : test gettrackdescription->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE,
            PLAY_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0600
        * @tc.name      : play 3 times
        * @tc.desc      : test play 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PLAY_STATE, PLAY_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0100
        * @tc.name      : play->pause
        * @tc.desc      : test play->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0200
        * @tc.name      : setvolume->pause
        * @tc.desc      : test setvolume->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.1, PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0300
        * @tc.name      : setspeed->pause
        * @tc.desc      : test setspeed->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_1_00_X, PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0400
        * @tc.name      : pause 3 times
        * @tc.desc      : test pause 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PAUSE_STATE, PAUSE_STATE, PAUSE_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0100
        * @tc.name      : prepare->stop
        * @tc.desc      : test prepare->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0200
        * @tc.name      : play->stop
        * @tc.desc      : test play->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0300
        * @tc.name      : pause->stop
        * @tc.desc      : test pause->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PAUSE_STATE, STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0400
        * @tc.name      : setvolume->stop
        * @tc.desc      : test setvolume->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 0.1, STOP_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0500
        * @tc.name      : setspeed->stop
        * @tc.desc      : test setspeed->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, SPEED_FORWARD_1_25_X,
            STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0600
        * @tc.name      : gettrackdescription->stop
        * @tc.desc      : test gettrackdescription->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            GET_TD_STATE, STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0700
        * @tc.name      : stop 3 times
        * @tc.desc      : test stop 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, STOP_STATE, STOP_STATE, STOP_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0100
        * @tc.name      : prepare->reset
        * @tc.desc      : test prepare->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, RESET_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0200
        * @tc.name      : play->reset
        * @tc.desc      : test play->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0300
        * @tc.name      : pause->reset
        * @tc.desc      : test pause->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PAUSE_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0400
        * @tc.name      : stop->reset
        * @tc.desc      : test stop->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, STOP_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0500
        * @tc.name      : setvolume->reset
        * @tc.desc      : test setvolume->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 0.2, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0600
        * @tc.name      : setspeed->reset
        * @tc.desc      : test setspeed->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, SPEED_FORWARD_1_75_X, RESET_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0700
        * @tc.name      : setdisplaysurface->reset
        * @tc.desc      : test setdisplaysurface->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, RESET_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0800
        * @tc.name      : gettrackdescription->reset
        * @tc.desc      : test gettrackdescription->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0800', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            GET_TD_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0900
        * @tc.name      : reset 3 times
        * @tc.desc      : test reset 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_0900', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            RESET_STATE, RESET_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0100
        * @tc.name      : create->release
        * @tc.desc      : test create->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0200
        * @tc.name      : prepare->release
        * @tc.desc      : test prepare->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0300
        * @tc.name      : play->release
        * @tc.desc      : test play->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0400
        * @tc.name      : pause->release
        * @tc.desc      : test pause->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0500
        * @tc.name      : stop->release
        * @tc.desc      : test stop->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0600
        * @tc.name      : setvolume->release
        * @tc.desc      : test setvolume->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 0.2, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0700
        * @tc.name      : setspeed->release
        * @tc.desc      : test setspeed->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, SPEED_FORWARD_1_00_X,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0800
        * @tc.name      : setdisplaysurface->release
        * @tc.desc      : test setdisplaysurface->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0800', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0900
    * @tc.name      : gettrackdescription->release
    * @tc.desc      : test gettrackdescription->release
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level1
*/
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_0900', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            GET_TD_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_1000
        * @tc.name      : reset->release
        * @tc.desc      : test reset->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_PROMISE_1000', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
         * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0100
         * @tc.name      : create->setvolume
         * @tc.desc      : test create->setvolume
         * @tc.size      : MediumTest
         * @tc.type      : Function test
         * @tc.level     : Level1
     */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, VOLUME_STATE, 0.3, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0200
        * @tc.name      : prepare->setvolume
        * @tc.desc      : test prepare->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            VOLUME_STATE, 0.3, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0300
        * @tc.name      : play->setvolume
        * @tc.desc      : test play->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0300', 0, async function (done) {
        mySteps = [CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 0.4, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0400
        * @tc.name      : pause->setvolume
        * @tc.desc      : test pause->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PAUSE_STATE, VOLUME_STATE, 0.4,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0500
        * @tc.name      : stop->setvolume
        * @tc.desc      : test stop->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, STOP_STATE, VOLUME_STATE, 0.5,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0600
        * @tc.name      : reset->setvolume
        * @tc.desc      : test reset->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, RESET_STATE, VOLUME_STATE, 0.5,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0700
        * @tc.name      : setspeed->setvolume
        * @tc.desc      : test setspeed->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            VOLUME_STATE, 0.5, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0800
        * @tc.name      : setdisplaysurface->setvolume
        * @tc.desc      : test setdisplaysurface->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0800', 0, async function (done) {
        mySteps = [CREATE_STATE, SRC_STATE, SET_DS_STATE, VOLUME_STATE, 0.5, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0900
        * @tc.name      : gettrackdescription->setvolume
        * @tc.desc      : test gettrackdescription->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_0900', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, GET_TD_STATE, VOLUME_STATE, 0.6,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_1000
        * @tc.name      : setvolume 3 times
        * @tc.desc      : test setvolume 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_1000', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 0, VOLUME_STATE, 0.5,
            VOLUME_STATE, 1, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0100
        * @tc.name      : prepare->setspeed
        * @tc.desc      : test prepare->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0200
        * @tc.name      : play->setspeed
        * @tc.desc      : test play->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_1_75_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0300
        * @tc.name      : pause->setspeed
        * @tc.desc      : test pause->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PAUSE_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0400
        * @tc.name      : setvolume->setspeed
        * @tc.desc      : test setvolume->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 0.6, SPEED_STATE, SPEED_FORWARD_2_00_X,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0500
        * @tc.name      : gettrackdescription->setspeed
        * @tc.desc      : test gettrackdescription->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, GET_TD_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0600
        * @tc.name      : setspeed 3 times
        * @tc.desc      : test setspeed 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, SPEED_FORWARD_0_75_X, SPEED_STATE, SPEED_FORWARD_1_25_X,
            SPEED_STATE, SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PLAY_PROMISE_0100
        * @tc.name      : seek->play
        * @tc.desc      : test seek->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PLAY_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            SEEK_STATE, durationTime * 0.5, PLAY_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PLAY_PROMISE_0200
        * @tc.name      : seek(mode)->play
        * @tc.desc      : test seek(mode)->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PLAY_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            SEEK_MODE_STATE, durationTime * 0.3, SEEK_CLOSEST, PLAY_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })


    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PAUSE_PROMISE_0100
        * @tc.name      : seek->pause
        * @tc.desc      : test seek->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PAUSE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_STATE, durationTime * 0.4, PAUSE_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYERDATASRC_SEEK__PAUSE_PROMISE_0200
        * @tc.name      : seek(mode)->pause
        * @tc.desc      : test seek(mode)->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PAUSE_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_MODE_STATE, durationTime * 0.4, SEEK_CLOSEST,
            PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_STOP_PROMISE_0100
        * @tc.name      : seek->stop
        * @tc.desc      : test seek->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_STOP_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_STATE, durationTime * 0.5, STOP_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_STOP_PROMISE_0200
        * @tc.name      : seek(mode)->stop
        * @tc.desc      : test seek(mode)->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_STOP_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_MODE_STATE, durationTime * 0.5, SEEK_CLOSEST,
            STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RESET_PROMISE_0100
        * @tc.name      : seek->reset
        * @tc.desc      : test seek->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RESET_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_STATE, durationTime * 0.6,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RESET_PROMISE_0200
        * @tc.name      : seek(mode)->reset
        * @tc.desc      : test seek(mode)->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RESET_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_MODE_STATE, durationTime * 0.6, SEEK_CLOSEST,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RELEASE_PROMISE_0100
        * @tc.name      : seek->release
        * @tc.desc      : test seek->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RELEASE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_STATE, durationTime * 0.7,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RELEASE_PROMISE_0200
        * @tc.name      : seek(mode)->release
        * @tc.desc      : test seek(mode)->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_RELEASE_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_MODE_STATE, durationTime * 0.5, SEEK_CLOSEST,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_SETSPEED_PROMISE_0100
        * @tc.name      : seek->setspeed
        * @tc.desc      : test seek->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_SETSPEED_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_STATE, durationTime * 0.8,
            SPEED_STATE, SPEED_FORWARD_2_00_X,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0100
    * @tc.name      : create->prepare
    * @tc.desc      : test create->prepare
    * @tc.size      : MediumTest
    * @tc.type      : Function test
    * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0300
        * @tc.name      : setdisplaysurface->prepare
        * @tc.desc      : test setdisplaysurface->prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0400
        * @tc.name      : gettrackdescription->prepare
        * @tc.desc      : test gettrackdescription->prepare
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            GET_TD_STATE, PREPARE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0500
        * @tc.name      : prepare 3 times
        * @tc.desc      : test prepare 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PREPARE_STATE, PREPARE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0100
        * @tc.name      : prepare->play
        * @tc.desc      : test prepare->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0200
        * @tc.name      : pause->play
        * @tc.desc      : test pause->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, PLAY_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0300
        * @tc.name      : setvolume->play
        * @tc.desc      : test setvolume->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.7, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0400
        * @tc.name      : setspeed->play
        * @tc.desc      : test setspeed->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0400', 0, async function (done) {
        mySteps = [CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0500
        * @tc.name      : gettrackdescription->play
        * @tc.desc      : test gettrackdescription->play
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE,
            PLAY_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0600
        * @tc.name      : play 3 times
        * @tc.desc      : test play 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PLAY_STATE, PLAY_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0100
        * @tc.name      : play->pause
        * @tc.desc      : test play->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0200
        * @tc.name      : setvolume->pause
        * @tc.desc      : test setvolume->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.8, PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0300
        * @tc.name      : setspeed->pause
        * @tc.desc      : test setspeed->pause
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X, PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0400
        * @tc.name      : pause 3 times
        * @tc.desc      : test pause 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, PAUSE_STATE, PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0100
        * @tc.name      : prepare->stop
        * @tc.desc      : test prepare->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, STOP_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0200
        * @tc.name      : play->stop
        * @tc.desc      : test play->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0300
        * @tc.name      : pause->stop
        * @tc.desc      : test pause->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0400
        * @tc.name      : setvolume->stop
        * @tc.desc      : test setvolume->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.8, STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0500
        * @tc.name      : setspeed->stop
        * @tc.desc      : test setspeed->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X, STOP_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0600
        * @tc.name      : gettrackdescription->stop
        * @tc.desc      : test gettrackdescription->stop
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE,
            STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0700
        * @tc.name      : stop 3 times
        * @tc.desc      : test stop 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, STOP_STATE, STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0100
        * @tc.name      : prepare->reset
        * @tc.desc      : test prepare->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, RESET_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0200
        * @tc.name      : play->reset
        * @tc.desc      : test play->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0300
        * @tc.name      : pause->reset
        * @tc.desc      : test pause->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0400
        * @tc.name      : stop->reset
        * @tc.desc      : test stop->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0500
        * @tc.name      : setvolume->reset
        * @tc.desc      : test setvolume->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.9, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0600
        * @tc.name      : setspeed->reset
        * @tc.desc      : test setspeed->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X,
            RESET_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0700
        * @tc.name      : setdisplaysurface->reset
        * @tc.desc      : test setdisplaysurface->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0700', 0, async function (done) {
        mySteps = [CREATE_STATE, SRC_STATE, SET_DS_STATE, RESET_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0800
        * @tc.name      : gettrackdescription->reset
        * @tc.desc      : test gettrackdescription->reset
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0800', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE,
            RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0900
        * @tc.name      : reset 3 times
        * @tc.desc      : test reset 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_0900', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, RESET_STATE,
            RESET_STATE, RESET_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0100
        * @tc.name      : create->release
        * @tc.desc      : test create->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0200
        * @tc.name      : prepare->release
        * @tc.desc      : test prepare->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0300
        * @tc.name      : play->release
        * @tc.desc      : test play->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0400
        * @tc.name      : pause->release
        * @tc.desc      : test pause->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0500
        * @tc.name      : stop->release
        * @tc.desc      : test stop->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0600
        * @tc.name      : setvolume->release
        * @tc.desc      : test setvolume->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.9, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0700
        * @tc.name      : setspeed->release
        * @tc.desc      : test setspeed->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0800
        * @tc.name      : setdisplaysurface->release
        * @tc.desc      : test setdisplaysurface->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0800', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0900
        * @tc.name      : gettrackdescription->release
        * @tc.desc      : test gettrackdescription->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_0900', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_1000
        * @tc.name      : reset->release
        * @tc.desc      : test reset->release
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_PROMISE_1000', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, RESET_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0100
        * @tc.name      : create->setvolume
        * @tc.desc      : test create->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, VOLUME_STATE, 0.6, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0200
        * @tc.name      : prepare->setvolume
        * @tc.desc      : test prepare->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, VOLUME_STATE, 0.5,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0300
        * @tc.name      : play->setvolume
        * @tc.desc      : test play->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.5, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0400
        * @tc.name      : pause->setvolume
        * @tc.desc      : test pause->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, VOLUME_STATE, 0.4, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0500
        * @tc.name      : stop->setvolume
        * @tc.desc      : test stop->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, VOLUME_STATE, 0.4, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0600
        * @tc.name      : reset->setvolume
        * @tc.desc      : test reset->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, VOLUME_STATE, 0.5, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0700
        * @tc.name      : setspeed->setvolume
        * @tc.desc      : test setspeed->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X, VOLUME_STATE, 0.5,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0800
        * @tc.name      : setdisplaysurface->setvolume
        * @tc.desc      : test setdisplaysurface->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0800', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, VOLUME_STATE, 0.1, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0900
        * @tc.name      : gettrackdescription->setvolume
        * @tc.desc      : test gettrackdescription->setvolume
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_0900', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            GET_TD_STATE, VOLUME_STATE, 0.5, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_1000
        * @tc.name      : setvolume 3 times
        * @tc.desc      : test setvolume 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_1000', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0, VOLUME_STATE, 0.5, VOLUME_STATE, 1,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0100
        * @tc.name      : prepare->setspeed
        * @tc.desc      : test prepare->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, SPEED_STATE,
            SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0200
        * @tc.name      : play->setspeed
        * @tc.desc      : test play->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0300
        * @tc.name      : pause->setspeed
        * @tc.desc      : test pause->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0400
        * @tc.name      : setvolume->setspeed
        * @tc.desc      : test setvolume->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.5, SPEED_STATE, SPEED_FORWARD_2_00_X,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0500
        * @tc.name      : gettrackdescription->setspeed
        * @tc.desc      : test gettrackdescription->setspeed
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            GET_TD_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0600
        * @tc.name      : setspeed 3 times
        * @tc.desc      : test setspeed 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_0_75_X, SPEED_STATE, SPEED_FORWARD_1_25_X,
            SPEED_STATE, SPEED_FORWARD_2_00_X, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0100
        * @tc.name      : prepare->seek
        * @tc.desc      : test prepare->seek
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            SEEK_STATE, durationTime * 0.6, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0200
        * @tc.name      : play->seek
        * @tc.desc      : test play->seek
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SEEK_STATE, durationTime * 0.6, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0300
        * @tc.name      : pause->seek
        * @tc.desc      : test pause->seek
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, SEEK_STATE, durationTime * 0.5,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0400
        * @tc.name      : setvolume->seek
        * @tc.desc      : test setvolume->seek
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.5, SEEK_STATE, durationTime * 0.5,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0500
        * @tc.name      : setspeed->seek
        * @tc.desc      : test setspeed->seek
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, SPEED_FORWARD_1_00_X,
            SEEK_STATE, durationTime * 0.2,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0600
        * @tc.name      : gettrackdescription->seek
        * @tc.desc      : test gettrackdescription->seek
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SEEK_STATE, durationTime * 0.5, GET_TD_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0700
        * @tc.name      : seek 3 times
        * @tc.desc      : test seek 3 times
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_0700', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SEEK_STATE, durationTime * 0.2, SEEK_STATE, durationTime * 0.4,
            SEEK_STATE, durationTime * 0.6, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })
})
