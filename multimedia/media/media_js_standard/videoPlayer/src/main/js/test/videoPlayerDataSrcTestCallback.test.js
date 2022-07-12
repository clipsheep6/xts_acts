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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js';

describe('videoPlayerDataSrcTestCallback', function () {
    let dataSrc = null;
    let videoPlayer;
    let readStreamSync = undefined;
    let mySteps = [];
    let pos_ = 0;
    let timeoutTimer = undefined;
    let isPrepared = false;
    const VIDEO_SOURCE = '/files/H264_AAC.mp4';
    const PLAY_TIME = 3000;
    const DURATION_TIME = 219600;
    const SEEK_TIME = 5000;

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
    const TIME_OUT = 300000;
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
        await mediaTestBase.toNewPage(pagePath1, pagePath2, pageId);
        await sleep(1000);
        surfaceID = globalThis.value;
        console.info('case new surfaceID is ' + surfaceID);
    })

    beforeEach(function () {
        isPrepared = false;
        console.info(' beforeEach case');
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
    })

    afterAll(async function () {
        console.info(' afterAll case');
        await mediaTestBase.clearRouter();
    })

    function sleep(time) {
        return new Promise(resolve => {
            setTimeout(() => {
                resolve('sleep finished');
            }, time);
        })
    }

    async function nextStep(done) {
        if (mySteps[0] == END_STATE) {
            console.info(' case to done');
            removeTimeoutTimer();
            expect(true).assertTrue();
            done();
            return;
        }
        console.info(' case to nextStep; videoPlayer: ' + videoPlayer);
        switch (mySteps[0]) {
            case SET_DS_STATE:
                console.info(` case to setDisplaySurface; surfaceID: ` + surfaceID);
                videoPlayer.setDisplaySurface(surfaceID, (err) => {
                    if (!err) {
                        console.info(` setDisplaySurface success;`);
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` setDisplaySurface failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case PREPARE_STATE:
                console.info(` case to prepare`);
                videoPlayer.prepare((err) => {
                    if (!err) {
                        isPrepared = true;
                        console.info(` case to prepare finished`);
                    } else {
                        console.info(` prepare failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case PLAY_STATE:
                console.info(` case to play`);
                videoPlayer.play((err) => {
                    if (!err) {
                        expect(videoPlayer.state).assertEqual('playing');
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` play failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case PAUSE_STATE:
                console.info(` case to pause`);
                videoPlayer.pause((err) => {
                    if (!err) {
                        expect(videoPlayer.state).assertEqual('paused');
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` pause failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case STOP_STATE:
                console.info(` case to stop`);
                videoPlayer.stop((err) => {
                    if (!err) {
                        console.info(` case to stop finished`);
                        expect(videoPlayer.state).assertEqual('stopped');
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` stop failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case RESET_STATE:
                console.info(` case to reset`);
                videoPlayer.reset((err) => {
                    if (!err) {
                        console.info(` case to reset finished`);
                        expect(videoPlayer.state).assertEqual('idle');
                        console.info(` case to after reset; videoPlayer.url: ` + videoPlayer.url);
                        console.info(` case to after reset; videoPlayer.state: ` + videoPlayer.state);
                    } else {
                        console.info(` reset failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case SEEK_STATE:
                console.info(` case seek to time is ${mySteps[SECOND_INDEX]}`);
                videoPlayer.seek(mySteps[SECOND_INDEX], (err) => {
                    if (!err) {
                        console.info(` case seek to time finished`);
                        expect(videoPlayer.currentTime).assertClose(mySteps[SECOND_INDEX], DELTA_TIME * 2);
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` seek to time failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case VOLUME_STATE:
                console.info(` case to setVolume`);
                videoPlayer.setVolume(mySteps[SECOND_INDEX], (err) => {
                    if (!err) {
                        console.info(` case to setVolume finished`);
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` setVolume failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case RELEASE_STATE:
                console.info(` case to release`);
                videoPlayer.release((err) => {
                    if (!err) {
                        console.info(` case to release finished`);
                        videoPlayer = undefined;
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` release failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case SPEED_STATE:
                console.info(` case to set speed`);
                videoPlayer.setSpeed(mySteps[SECOND_INDEX], (err) => {
                    if (!err) {
                        console.info(` case to set speed finished`);
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` set speed failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case SRC_STATE:
                console.info(` case to data source`);
                console.info(' videoPlayer: ' + videoPlayer);
                videoPlayer.dataSrc = dataSrc;
                mySteps.shift();
                nextStep(done);
                break;
            case SEEK_MODE_STATE:
                console.info(` case seek to time is ${mySteps[SECOND_INDEX]}`);
                console.info(` case seek mode is ${mySteps[THIRD_INDEX]}`);
                videoPlayer.seek(mySteps[SECOND_INDEX], mySteps[THIRD_INDEX], (err) => {
                    if (!err) {
                        console.info(` case to seek mode finished`);
                        expect(videoPlayer.currentTime).assertClose(mySteps[SECOND_INDEX], DELTA_TIME * 2);
                        mySteps.shift();
                        mySteps.shift();
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` seek mode failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case CREATE_STATE:
                console.info(` case to create`);
                media.createVideoPlayer((err, videoPlayerObj) => {
                    if (!err) {
                        console.info(` case to create finished; videoPlayer: ` + JSON.stringify(videoPlayerObj));
                        if (typeof (videoPlayerObj) == 'undefined') {
                            console.info(' case create player is failed');
                            expect().assertFail();
                            done();
                        }
                        videoPlayer = videoPlayerObj;
                        console.info(` case to create finished; videoPlayer: ` + JSON.stringify(videoPlayer));
                        setCommonCallback(done);
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` set create failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            case GET_TD_STATE:
                console.info(` case to getTrackDescription`);
                videoPlayer.getTrackDescription((err, data) => {
                    if (!err) {
                        console.info('getTrackDescription: ' + data);
                        if (!data) {
                            console.info('getTrackDescription failed');
                            expect().assertFail();
                            done();
                        }
                        mySteps.shift();
                        nextStep(done);
                    } else {
                        console.info(` getTrackDescription failed;`);
                        expect().assertFail();
                        done();
                    }
                });
                break;
            default:
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
            let size_ = dataSrc.size;
            console.info('MusicPlayer[PlayerModel] readAt: length: ' + length + ' pos : ' + pos + ' size_ : ' + size_);
            if (isPrepared) {
                console.info('MusicPlayer[PlayerModel] readAt already prepared');
                mySteps.shift();
                nextStep(done);
                return;
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
        console.info(`case setCallback2; videoPlayer: ` + JSON.stringify(videoPlayer));
        videoPlayer.on('playbackCompleted', () => {
            console.info('case playbackCompleted');
            mySteps.shift();
            nextStep(done);
        });
        console.info(`case setCallback3`);
        videoPlayer.on('startRenderFrame', () => {
            console.info('case startRenderFrame');
        });
        console.info(`case setCallback4`);
        videoPlayer.on('videoSizeChanged', (width, height) => {
            console.info('case videoSizeChanged, width: ' + width + ' ;height:' + height);
        });
        console.info(`case setCallback5`);
        videoPlayer.on('error', (err) => {
            console.info(`case error called,errName is ${err.name}`);
            console.info(`case error called,errCode is ${err.code}`);
            console.info(`case error called,errMessage is ${err.message}`);
            if (mySteps[0] !== ERROR_STATE) {
                expect().assertFail();
                done();
            } else if ((mySteps[0] == SEEK_STATE) || (mySteps[0] == VOLUME_STATE)) {
                mySteps.shift();
                mySteps.shift();
            } else if (mySteps[0] == SEEK_MODE_STATE) {
                mySteps.shift();
                mySteps.shift();
                mySteps.shift();
            } else {
                mySteps.shift();
            }
            nextStep(done);
        });
        console.info(`case setCallback1`);
        videoPlayer.on('bufferingUpdate', (infoType, value) => {
            console.info('case bufferingUpdate success infoType is ' + infoType);
            console.info('case bufferingUpdate success value is ' + value);
            if (infoType == 2) {
                mySteps.shift();
                nextStep(done);
            }
        });
        console.info(`case setCallback finished`);
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
        context.getOrCreateLocalDir(async (err, data) => {
            console.info("getOrCreateLocalDir back, data: " + data + ' ;err: ' + err);
            console.info("getOrCreateLocalDir back, data: " + JSON.stringify(data) + ' ;err: ' + JSON.stringify(err));
            if (!!data) {
                console.info("data=" + data);
                publicPath = data + VIDEO_SOURCE;
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
            } else {
                console.info("getOrCreateLocalDir failed; err: " + err);
                expect().assertFail();
                done();
            }
        });
//        media.createAVDataSource((err, dataSrc) => {
//            console.info('media.createAVDataSource back; err: ' + err);
//            if (!err) {
//                dataSrc = dataSrc;
//                var context = featureAbility.getContext();
//                let publicPath = '';
//                console.info('context.getOrCreateLocalDir start; dataSrc: ' + JSON.stringify(dataSrc));
//                context.getOrCreateLocalDir(async (err, data) => {
//                    if (!err) {
//                        console.info("data=" + data);
//                        publicPath = data + VIDEO_SOURCE;
//                        console.info('FileIO.createStreamSync start; publicPath: ' + publicPath);
//                        readStreamSync = FileIO.createStreamSync(publicPath, 'r+');
//                        console.info('FileIO.createStreamSync end;');
//                        if (!readStreamSync) {
//                            console.info(' case MusicPlayer Launcher FileUtil is null');
//                            expect().assertFail();
//                            done();
//                        }
//                        console.info('FileIO.createStreamSync success');
//                        getTotalLen();
//                        console.info('dataSrc size: ' + dataSrc.size);
//                        setReadAtCallBack(done);
//                        console.info('yf---001');
//                        await sleep(SLEEP_TIME);
//                        console.info('yf---002');
//                        addTimeoutTimer(done);
//                        console.info('yf---008');
//                        nextStep(done);
//                        console.info('yf---009');
//                    } else {
//                        console.info("getOrCreateLocalDir failed; err: " + err);
//                        expect().assertFail();
//                        done();
//                    }
//                });
//            } else {
//                console.info('media.createAVDataSource failed; err: ' + err);
//            }
//        });
        console.info('yf---003.11');
    }
   
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,PAUSE_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PAUSE_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,PAUSE_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,
		PAUSE_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		PAUSE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		PAUSE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PAUSE_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,PAUSE_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PAUSE_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,PAUSE_STATE,
		PAUSE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,PLAY_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,PLAY_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,PLAY_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,PLAY_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PLAY_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,PLAY_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PLAY_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PLAY_STATE,PLAY_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PREPARE_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,PREPARE_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,PREPARE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,SRC_STATE,
		PREPARE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,PREPARE_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,PREPARE_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,PREPARE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_PREPARE_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PREPARE_STATE,PREPARE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RELEASE_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,STOP_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_RESET_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RESET_STATE,RESET_STATE,RESET_STATE,
		RELEASE_STATE,END_EVEN];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,SPEED_STATE,2,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,SPEED_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,SPEED_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,SPEED_STATE,2,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,GET_TD_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,SPEED_STATE,2,
		SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,-1,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETSPEED_CALLBACK_1400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,5,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,VOLUME_STATE,0.5,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,GET_TD_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,VOLUME_STATE,0.5,
		VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,-1,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_SETVOLUME_CALLBACK_1400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,STOP_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,STOP_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,STOP_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_NOSEEK_STOP_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,STOP_STATE,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,PAUSE_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PAUSE_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,PAUSE_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,PAUSE_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,-1,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,2,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,PAUSE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,PAUSE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PAUSE_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,PAUSE_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PAUSE_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,PAUSE_STATE,PAUSE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,PLAY_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,PLAY_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,PLAY_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,PLAY_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,GET_TD_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,VOLUME_STATE,0.5,
		VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PLAY_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,PLAY_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PLAY_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PLAY_STATE,PLAY_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PREPARE_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,PREPARE_STATE,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,PREPARE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,SRC_STATE,PREPARE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,VOLUME_STATE,0.5,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,PREPARE_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,PREPARE_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,PREPARE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_PREPARE_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PREPARE_STATE,PREPARE_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,SPEED_STATE,2,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RELEASE_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,STOP_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,RESET_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,RESET_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_RESET_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,RESET_STATE,RESET_STATE,RESET_STATE,
		RELEASE_STATE,END_EVEN];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,SPEED_STATE,2,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,SPEED_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,SPEED_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,SPEED_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,SPEED_STATE,2,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,GET_TD_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,SPEED_STATE,2,
		SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,-1,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETSPEED_CALLBACK_1400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,5,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,VOLUME_STATE,0.5,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,GET_TD_STATE,VOLUME_STATE,0.5,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,VOLUME_STATE,0.5,
		VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,-1,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_SETVOLUME_CALLBACK_1400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,2,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,STOP_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,RESET_STATE,STOP_STATE,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SPEED_STATE,2,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,STOP_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,STOP_STATE,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,GET_TD_STATE,STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_1200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_DATASRC_STOP_CALLBACK_1200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,STOP_STATE,
		STOP_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0100', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,VOLUME_STATE,0.5,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0200
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0200', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,GET_TD_STATE,
		VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,0.5,VOLUME_STATE,0.5,
		VOLUME_STATE,0.5,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,-1,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0500
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0500', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,VOLUME_STATE,2,ERROR_STATE,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0600
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0600', 0, async function (done) {
        mySteps = [CREATE_STATE,SPEED_STATE,2,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0800
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0800', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0900
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_0900', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1000
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1000', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,SPEED_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1100
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1100', 0, async function (done) {
        mySteps = [CREATE_STATE,SPEED_STATE,2,ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1300
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1300', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,SPEED_STATE,2,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1400
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SEEK_CALLBACK_1400', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SETSPEED_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SETSPEED_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,STOP_STATE,SPEED_STATE,2,
		ERROR_STATE,RELEASE_STATE,END_STATE];
        actFun(done);
    })
	
    /* *
            * @tc.number    : SUB_MEDIA_VIDEO_PLAYER_SETVOLUME_CALLBACK_0700
            * @tc.name      : 001.play
            * @tc.desc      : Audio playback control test
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
    */
    it('SUB_MEDIA_VIDEO_PLAYER_SETVOLUME_CALLBACK_0700', 0, async function (done) {
        mySteps = [CREATE_STATE,SRC_STATE,SET_DS_STATE,PREPARE_STATE,PLAY_STATE,PAUSE_STATE,SPEED_STATE,2,
		RELEASE_STATE,END_STATE];
        actFun(done);
    })
})
