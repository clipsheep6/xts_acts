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
    const MINUS_ONE = -1;
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
    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';
    let pageId = 0;

    beforeAll(async function () {
        console.info(' beforeAll case');
    })

    beforeEach(async function () {
        isPrepared = false;
        console.info(' beforeEach case');
        await mediaTestBase.toNewPage(pagePath1, pagePath2, pageId);
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
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0100
        * @tc.name      : play->prepare
        * @tc.desc      : play->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PREPARE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0200
        * @tc.name      : pause->prepare
        * @tc.desc      : pause->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            PAUSE_STATE, PREPARE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0300
        * @tc.name      : reset->prepare
        * @tc.desc      : reset->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, SRC_STATE, PREPARE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0400
        * @tc.name      : setvolume->prepare
        * @tc.desc      : setvolume->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 0.5, PREPARE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0500
        * @tc.name      : setspeed->prepare
        * @tc.desc      : setspeed->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_PROMISE_RELIABILITY_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, SPEED_FORWARD_0_75_X, PREPARE_STATE,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0100
        * @tc.name      : create->play
        * @tc.desc      : create->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, PLAY_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0200
        * @tc.name      : stop->play
        * @tc.desc      : stop->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, PLAY_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0300
        * @tc.name      : reset->play
        * @tc.desc      : reset->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, PLAY_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0400
        * @tc.name      : setdisplaysurface->play
        * @tc.desc      : setdisplaysurface->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PLAY_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0100
        * @tc.name      : create->pause
        * @tc.desc      : create->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0200
        * @tc.name      : prepare->pause
        * @tc.desc      : prepare->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PAUSE_STATE,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0300
        * @tc.name      : stop->pause
        * @tc.desc      : stop->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0400
        * @tc.name      : reset->pause
        * @tc.desc      : reset->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0500
        * @tc.name      : setdisplaysurface->pause
        * @tc.desc      : setdisplaysurface->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PAUSE_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0600
        * @tc.name      : gettrackdescription->pause
        * @tc.desc      : gettrackdescription->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_PROMISE_RELIABILITY_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE,
            PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_RELIABILITY_0100
        * @tc.name      : create->stop
        * @tc.desc      : create->stop test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, STOP_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_RELIABILITY_0200
        * @tc.name      : reset->stop
        * @tc.desc      : reset->stop test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, RESET_STATE, STOP_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_RELIABILITY_0300
        * @tc.name      : setdisplaysurface->stop
        * @tc.desc      : setdisplaysurface->stop test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, STOP_STATE,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
         * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_RELIABILITY_0100
         * @tc.name      : create->reset
         * @tc.desc      : create->reset test error state
         * @tc.size      : MediumTest
         * @tc.type      : Function test
         * @tc.level     : Level2
     */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, RESET_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_RELIABILITY_0100
        * @tc.name      : setvolume(<0)
        * @tc.desc      : setvolume(<0) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, -1, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_RELIABILITY_0200
        * @tc.name      : setvolume(> 1)
        * @tc.desc      : setvolume(> 1) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 2, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
     * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0100
     * @tc.name      : create->setspeed
     * @tc.desc      : create->setspeed test error state
     * @tc.size      : MediumTest
     * @tc.type      : Function test
     * @tc.level     : Level2
 */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SPEED_STATE, SPEED_FORWARD_1_00_X, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0200
        * @tc.name      : stop->setspeed
        * @tc.desc      : stop->setspeed test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, STOP_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0300
        * @tc.name      : reset->setspeed
        * @tc.desc      : reset->setspeed test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, RESET_STATE, SPEED_STATE, SPEED_FORWARD_1_25_X,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0400
        * @tc.name      : setdisplaysurface->setspeed
        * @tc.desc      : setdisplaysurface->setspeed test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, SPEED_STATE,
            SPEED_FORWARD_2_00_X, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0500
        * @tc.name      : setspeed(< 0)
        * @tc.desc      : setspeed(< 0) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, -1, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0600
        * @tc.name      : setspeed(> 4)
        * @tc.desc      : setspeed(> 4) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_PROMISE_RELIABILITY_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, 5, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PREPARE_PROMISE_RELIABILITY_0100
        * @tc.name      : seek->prepare
        * @tc.desc      : seek->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_PREPARE_DATASRC_SEEK_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, SEEK_STATE,
            durationTime * 0.2, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PREPARE_PROMISE_RELIABILITY_0200
        * @tc.name      : seek(mode)->prepare
        * @tc.desc      : seek(mode)->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PREPARE_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, SEEK_MODE_STATE,
            durationTime * 0.2, SEEK_CLOSEST, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_SETVOLUME_PROMISE_RELIABILITY_0100
        * @tc.name      : seek->setvolume
        * @tc.desc      : seek->setvolume test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_SETVOLUME_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SEEK_STATE, durationTime * 0.7,
            VOLUME_STATE, 0, VOLUME_STATE, 0.5, VOLUME_STATE, 1,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0100
        * @tc.name      : play->prepare
        * @tc.desc      : play->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PREPARE_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0200
        * @tc.name      : pause->prepare
        * @tc.desc      : pause->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, PAUSE_STATE, PREPARE_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0300
        * @tc.name      : reset->prepare
        * @tc.desc      : reset->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, RESET_STATE, SRC_STATE, PREPARE_STATE,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0400
        * @tc.name      : setvolume->prepare
        * @tc.desc      : setvolume->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, VOLUME_STATE, 0.7, PREPARE_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0500
        * @tc.name      : setspeed->prepare
        * @tc.desc      : setspeed->prepare test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_PROMISE_RELIABILITY_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE,
            PLAY_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X, PREPARE_STATE,
            ERROR_STATE, RELEASE_STATE, END_STATE];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0100
        * @tc.name      : create->play
        * @tc.desc      : create->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, PLAY_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0200
        * @tc.name      : stop->play
        * @tc.desc      : stop->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
        */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, PLAY_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0300
        * @tc.name      : reset->play
        * @tc.desc      : reset->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, PLAY_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0400
        * @tc.name      : setdisplaysurface->play
        * @tc.desc      : setdisplaysurface->play test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PLAY_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0100
        * @tc.name      : create->pause
        * @tc.desc      : create->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0200
        * @tc.name      : prepare->pause
        * @tc.desc      : prepare->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PAUSE_STATE,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0300
        * @tc.name      : stop->pause
        * @tc.desc      : stop->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0400
        * @tc.name      : reset->pause
        * @tc.desc      : reset->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0500
        * @tc.name      : setdisplaysurface->pause
        * @tc.desc      : setdisplaysurface->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PAUSE_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0600
        * @tc.name      : gettrackdescription->pause
        * @tc.desc      : gettrackdescription->pause test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_PROMISE_RELIABILITY_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, GET_TD_STATE,
            PAUSE_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_RELIABILITY_0100
        * @tc.name      : create->stop
        * @tc.desc      : create->stop test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, STOP_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_RELIABILITY_0200
        * @tc.name      : reset->stop
        * @tc.desc      : reset->stop test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, STOP_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_RELIABILITY_0300
        * @tc.name      : setdisplaysurface->stop
        * @tc.desc      : setdisplaysurface->stop test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, STOP_STATE, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_RELIABILITY_0100
        * @tc.name      : create->reset
        * @tc.desc      : create->reset test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, RESET_STATE, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_RELIABILITY_0100
        * @tc.name      : setvolume(<0)
        * @tc.desc      : setvolume(<0) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, -1, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_RELIABILITY_0200
        * @tc.name      : setvolume(> 1)
        * @tc.desc      : setvolume(> 1) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            VOLUME_STATE, 2, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0100
        * @tc.name      : create->setspeed
        * @tc.desc      : create->setspeed test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0200
        * @tc.name      : stop->setspeed
        * @tc.desc      : stop->setspeed test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0300
        * @tc.name      : reset->setspeed
        * @tc.desc      : reset->setspeed test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0400
        * @tc.name      : setdisplaysurface->setspeed
        * @tc.desc      : setdisplaysurface->setspeed test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, SPEED_STATE, SPEED_FORWARD_2_00_X,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0500
        * @tc.name      : setspeed(< 0)
        * @tc.desc      : setspeed(< 0) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, -1, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0600
        * @tc.name      : setspeed(> 4)
        * @tc.desc      : setspeed(> 4) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_PROMISE_RELIABILITY_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SPEED_STATE, 5, ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0100
        * @tc.name      : create->seek
        * @tc.desc      : create->seek test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0100', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SEEK_STATE, durationTime * 0.8,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0200
        * @tc.name      : stop->seek
        * @tc.desc      : stop->seek test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0200', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            STOP_STATE, SEEK_STATE, durationTime * 0.7, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0300
        * @tc.name      : reset->seek
        * @tc.desc      : reset->seek test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0300', 0, async function (done) {
        mySteps = [CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            RESET_STATE, SEEK_STATE, durationTime * 0.5, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0400
        * @tc.name      : setdisplaysurface->seek
        * @tc.desc      : setdisplaysurface->seek test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0400', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, SEEK_STATE, durationTime * 0.1,
            ERROR_STATE, RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0500
        * @tc.name      : seek(-1)
        * @tc.desc      : seek(-1) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0500', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SEEK_STATE, MINUS_ONE, ERROR_STATE,
            RELEASE_STATE, END_STATE
        ];
        await actFun(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0600
        * @tc.name      : seek(out of duration)
        * @tc.desc      : seek(out of duration) test error state
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SEEK_PROMISE_RELIABILITY_0600', 0, async function (done) {
        mySteps = [
            CREATE_STATE, SRC_STATE, SET_DS_STATE, PREPARE_STATE, PLAY_STATE,
            SEEK_STATE, durationTime * DELTA_TIME, ERROR_STATE,
            FINISH_STATE, END_STATE
        ];
        await actFun(done);
    })
})
