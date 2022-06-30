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
import mediaDemo from '@ohos.multimedia.mediademo'
import fileIo from '@ohos.fileio';
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as videoRecorderTestBase from '../../../../../VideoRecorderTestBase.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('VideoRecorderSpliterCompatibilityPromiseTest', function () {
    let fdPath;
    let fileAsset;
    let fdNumber = null;
    let isStreamRunning = false;
    let surfaceId = '';
    let playerSurfaceId = '';
    let mediaDummyTest;
    let recodeCount = 0;
    let judgeCallback = null;
    let videoRecorder = undefined;
    let videoCount = 0;
    let preFdNumber = '';
    let timeoutTimer = null;
    let mySteps = [];
    let isAnomalySet = false;
    let frameCount = 0;
    let videoArr = [];
    let isUnExpectSetSub = false;
    let pageId = 0;
    let isIgnoreStream = false;

    const INFO_MAX_SIZE_APPROACHING = media.RecorderInfoType.INFO_MAX_SIZE_APPROACHING;
    const INFO_MAX_DURATION_APPROACHING = media.RecorderInfoType.INFO_MAX_DURATION_APPROACHING;
    const INFO_MAX_SIZE_REACHED = media.RecorderInfoType.INFO_MAX_SIZE_REACHED;
    const INFO_MAX_DURATION_REACHED = media.RecorderInfoType.INFO_MAX_DURATION_REACHED;
    const INFO_NEXT_FILE_STARTED = media.RecorderInfoType.INFO_NEXT_FILE_STARTED;
    const SIZE_BUFFER = 0.2 * 1024 * 1024;

    const VIDEO_PER_STR = 'VideoRecorderFuncPromise';
    const VIDEO_SUB_STR = 'Sub';
    const WAIT_STATE = 0;
    const CREATE_STATE = 1;
    const PREPARE_STATE = 2;
    const SET_SUB_STATE = 3;
    const PAUSE_STATE = 4;
    const STOP_STATE = 5;
    const RELEASE_STATE = 6;
    const START_STATE = 7;
    const RESUME_STATE = 8;
    const RESET_STATE = 9;
    const END_STATE = 10;
    const CHECK_FILE_STATE = 11;
    const CHECK_PRE_FILE_STATE = 12;
    const CHECK_VIDEO_STATE = 13;
    const WRONG_SET_SUB_STATE = 14;
    const GET_NEW_PATH_STATE = 15;
    const SET_NEW_URL_STATE = 16;
    const SET_NEW_STREAM_STATE = 17;

    const IGNORE_SIZE_STATE = '-1';
    const APPROACHING_SIZE_STATE = '-2';
    const REACHED_SIZE_STATE = '-3';
    const BEYOND_SIZE_STATE = '-4';

    const SIZE_UPPER_LIMIT = 1024 * 1024 * 1024;
    const SIZE_LOWER_LIMIT = 5 * 1024 * 1024;
    const DURATION_UPPER_LIMIT = 3600000;
    const DURATION_LOWER_LIMIT = 60000;
    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';

    let videoProfile = {
        durationTime: 1000,
        fileFormat: 'mp4',
        videoBitrate: 100000000,
        videoCodec: 'video/mp4v-es',
        videoFrameWidth: 1280,
        videoFrameHeight: 768,
        videoFrameRate: 30
    };

    let videoConfig = {
        videoSourceType: 0,
        profile: videoProfile,
        url: 'file:///data/media/01.mp4',
        rotation: 0,
        location: { latitude: 30, longitude: 130 },
        maxSize: 0,
        maxDuration: 0
    };

    beforeAll(async function () {
        console.info('beforeAll start');
        let permissionNames = [
            'ohos.permission.MICROPHONE',
            'ohos.permission.MEDIA_LOCATION',
            'ohos.permission.READ_MEDIA',
            'ohos.permission.WRITE_MEDIA'
        ];
        let applicationName = 'ohos.acts.multimedia.video.videorecorder';
        await mediaTestBase.applyPermission(applicationName, permissionNames);
    })

    beforeEach(async function () {
        isStreamRunning = false;
        isAnomalySet = false;
        mediaDummyTest = null;
        videoConfig.maxSize = 0;
        videoConfig.maxDuration = 0;
        judgeCallback = null;
        fdNumber = null;
        videoRecorder = undefined;
        videoCount = 0;
        frameCount = 0;
        preFdNumber = '';
        isUnExpectSetSub = false;
        isIgnoreStream = false;
        videoArr = [];
        await mediaTestBase.toNewPage(pagePath1, pagePath2, pageId);
        pageId = (pageId + 1) % 2;
        await mediaTestBase.msleepAsync(1000).then(
            () => {}, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        playerSurfaceId = globalThis.value;
        console.info('beforeEach end');
    })

    afterEach(async function () {
        await mediaTestBase.closeFd(fileAsset, fdNumber);
        if (!!timeoutTimer) {
            clearTimeout(timeoutTimer);
            timeoutTimer = null;
        }
        mySteps = [];
        recodeCount++;
        await mediaTestBase.clearRouter();
        console.info('afterEach end');
    })

    afterAll(function () {
    })

    function toCreateStream() {
        mediaDummyTest = mediaDemo.createMediaTest();
    }

    function toSetStreamParam(width, height, frameRate, frameTotal) {
        console.info('toSetStreamParam width: ' + width);
        console.info('toSetStreamParam height: ' + height);
        console.info('toSetStreamParam frameRate: ' + frameRate);
        console.info('toSetStreamParam frameTotal: ' + frameTotal);
        mediaDummyTest.setResolution(width, height);
        mediaDummyTest.setFrameRate(frameRate);
        mediaDummyTest.setFrameCount(frameTotal);
    }

    function getFrameCount() {
        let frameTotal = videoConfig.maxSize / 1024 / 1024 * 350 * 2;
        return frameTotal;
    }

    function toStartStream() {
        if (isStreamRunning == false) {
            mediaDummyTest.startStream(surfaceId);
            isStreamRunning = true;
        }
    }

    function toStopStream() {
        if (isStreamRunning == true) {
            mediaDummyTest.closeStream(surfaceId);
            isStreamRunning = false;
        }
    }

    function failureCallback(error, done) {
        console.info(`failureCallback called,errMessage is ${error.message}`);
        if (isUnExpectSetSub) {
            expect(true).assertTrue();
            checkNextStep(done);
        } else if ((!!videoConfig.maxSize && videoConfig.maxSize < SIZE_LOWER_LIMIT) ||
        (!!videoConfig.maxDuration && videoConfig.maxDuration < DURATION_LOWER_LIMIT) ||
        videoConfig.maxSize > SIZE_UPPER_LIMIT ||
        videoConfig.maxDuration > DURATION_UPPER_LIMIT) {
            expect(true).assertTrue();
            done();
        } else {
            expect().assertFail();
            done();
        }
    }

    function catchCallback(error, done) {
        console.info(`catchCallback called,errMessage is ${error.message}`);
        expect().assertFail();
        done();
    }

    function unExpectFail(done) {
        console.info('unExpectFail called');
        expect().assertFail();
        done();
    }

    function onInfoCallBack(videoRecorder, done) {
        videoRecorder.on('info', async (infoType) => {
            console.info('info listener is called; infoType: ' + infoType);
            recodeCount++;
            if (judgeCallback != null) {
                judgeCallback(infoType, done);
            }
        });
    }


    async function toGetFd(pathName, done) {
        console.info('toGetFd start');
        if (fdNumber !== null) {
            preFdNumber = fdNumber
        }
        recodeCount++;
        let displayName = VIDEO_PER_STR + pathName;
        let fdObject = await mediaTestBase.getFd(displayName);
        if (fdObject.fileAsset == null || fdObject.fdNumber == null) {
            expect().assertFail();
            done();
        } else {
            videoCount++;
            fileAsset = fdObject.fileAsset;
            fdNumber = fdObject.fdNumber;
            fdPath = 'fd://' + fdNumber.toString();
            videoArr.push({
                fdPath: fdPath,
                duration: videoConfig.maxDuration,
            });
            console.info('fdPath: ' + fdPath);
        }
    }

    function checkNextStep(done) {
        mySteps.shift();
        if (mySteps.length == 0) {
            console.info(`mySteps is empty`);
            expect().assertFail();
            done();
        }
        if (mySteps[0] === WAIT_STATE) {
            console.info(`wait is called`);
            mySteps.shift();
        } else {
            nextStep(done);
        }
    }

    async function nextStep(done) {
        if (mySteps[0] === END_STATE) {
            done();
        }
        switch (mySteps[0]) {
            case CREATE_STATE:
                toCreateRecorder(done);
                break;
            case PREPARE_STATE:
                toPrepare(done);
                break;
            case SET_SUB_STATE:
                toSetSubsequentFile(done);
                break;
            case PAUSE_STATE:
                toPause(done);
                break;
            case STOP_STATE:
                toStop(done);
                break;
            case RELEASE_STATE:
                toRelease(done);
                break;
            case START_STATE:
                toStart(done);
                break;
            case RESUME_STATE:
                toResume(done);
                break;
            case RESET_STATE:
                toReset(done);
                break;
            case CHECK_FILE_STATE:
                toCheckFile(fdNumber, done);
                break;
            case CHECK_PRE_FILE_STATE:
                toCheckFile(preFdNumber, done);
                break;
            case CHECK_VIDEO_STATE:
                toCheckVideo(done);
                break;
            case WRONG_SET_SUB_STATE:
                isUnExpectSetSub = true;
                checkNextStep(done);
                break;
            case GET_NEW_PATH_STATE:
                await toGetFd(VIDEO_SUB_STR + recodeCount + '.mp4');
                checkNextStep(done);
                break;
            case SET_NEW_URL_STATE:
                videoConfig.url = fdPath;
                checkNextStep(done);
                break;
            case SET_NEW_STREAM_STATE:
                toCreateStream();
                toSetStreamParam(videoConfig.profile.videoFrameWidth, videoConfig.profile.videoFrameHeight,
                    videoConfig.profile.videoFrameRate, frameCount);
                checkNextStep(done);
                break;
            default:
                console.info('unExpect step');
                break;
        }
    }

    function toCreateRecorder(done) {
        console.info('videoRecorder createVideoRecorder called');
        media.createVideoRecorder().then((recorder) => {
            if (typeof (recorder) != 'undefined') {
                videoRecorder = recorder;
                onInfoCallBack(videoRecorder, done);
                toCreateStream();
                toSetStreamParam(videoConfig.profile.videoFrameWidth, videoConfig.profile.videoFrameHeight,
                    videoConfig.profile.videoFrameRate, frameCount);
                expect(videoRecorder.state).assertEqual('idle');
                checkNextStep(done);
            } else {
                console.info('videoRecorder is undefined');
                expect().assertFail();
                done()
            }
        }, (err) => {
            failureCallback(err, done)
        });
    }

    function toPrepare(done) {
        console.info('prepare is called');
        videoRecorder.prepare(videoConfig).then(() => {
            expect(videoRecorder.state).assertEqual('prepared');
            videoRecorder.getInputSurface().then((outPutSurface) => {
                surfaceId = outPutSurface;
                console.info('recorder surfaceId: ' + surfaceId);
                toStartStream();
                checkNextStep(done);
            }, (err) => {
                failureCallback(err, done)
            })
        }, (err) => {
            failureCallback(err, done)
        });
    }

    function toSetSubsequentFile(done) {
        console.info('setSubsequentFile is called');
        videoRecorder.setSubsequentFile(fdPath).then(() => {
            checkNextStep(done);
        }, (err) => {
            failureCallback(err, done)
        })
    }

    function toPause(done) {
        console.info('pause is called');
        videoRecorder.pause().then(() => {
            expect(videoRecorder.state).assertEqual('paused');
            if (!isIgnoreStream) {
                toStopStream();
            }
            checkNextStep(done);
        }, (err) => {
            failureCallback(err, done)
        });
    }

    function toStop(done) {
        console.info('stop is called');
        videoRecorder.stop().then(() => {
            expect(videoRecorder.state).assertEqual('stopped');
            toStopStream();
            checkNextStep(done);
        }, (err) => {
            failureCallback(err, done)
        })
    }

    function toRelease(done) {
        console.info('release is called');
        videoRecorder.release().then(() => {
            expect(videoRecorder.state).assertEqual('idle');
            console.info('videoRecorder release called');
            checkNextStep(done)
        }, (err) => {
            failureCallback(err, done)
        });
    }

    function toStart(done) {
        console.info('start is called');
        videoRecorder.start().then(() => {
            expect(videoRecorder.state).assertEqual('playing');
            checkNextStep(done)
        }, (err) => {
            failureCallback(err, done)
        });
    }

    function toResume(done) {
        console.info('resume is called');
        videoRecorder.resume().then(() => {
            expect(videoRecorder.state).assertEqual('playing');
            if (!isIgnoreStream) {
                toStartStream();
            }
            checkNextStep(done)
        }, (err) => {
            failureCallback(err, done)
        });
    }

    function toReset(done) {
        console.info('reset is called');
        videoRecorder.reset().then(() => {
            expect(videoRecorder.state).assertEqual('idle');
            checkNextStep(done)
        }, (err) => {
            failureCallback(err, done)
        });
    }

    function toCheckFile(fdNumber, done) {
        fileIo.fstat(fdNumber, (err, state) => {
            if (!state) {
                console.info('fileIo fstat error, type: ' + type)
                failureCallback(err, done)
            } else {
                mySteps.shift();
                switch (mySteps[0]) {
                    case APPROACHING_SIZE_STATE:
                        expect(state.size).assertClose(videoConfig.maxSize * 0.9, SIZE_BUFFER);
                        break;
                    case REACHED_SIZE_STATE:
                        expect(state.size).assertClose(videoConfig.maxSize, SIZE_BUFFER);
                        break;
                    case BEYOND_SIZE_STATE:
                        expect(state.size).assertLess(videoConfig.maxSize + SIZE_BUFFER);
                        break;
                    default:
                        break;
                }
                console.info('fileIo fstat success, size: ' + state.size)
                checkNextStep(done);
            }
        });
    }

    async function toCheckVideo(done) {
        if (!videoArr.length) {
            console.info('fdPath is empty');
            expect().assertFail();
            done();
        }
        let trackArray = getTrackArray(videoProfile);
        for (let i = 0; i < videoArr.length; i++) {
            await videoRecorderTestBase.checkVideos(videoArr[i].fdPath, videoArr[i].duration, trackArray, playerSurfaceId);
        }
        checkNextStep(done);
    }

    function getTrackArray(recorderConfigFile) {
        //        let audioTrack = new Array(recorderConfigFile.audioBitrate, recorderConfigFile.audioChannels,
        //            recorderConfigFile.audioCodec, recorderConfigFile.audioSampleRate);
        let videoTrack = new Array('video/mpeg', recorderConfigFile.videoFrameHeight,
            recorderConfigFile.videoFrameWidth);
        let trackArray = new Array(videoTrack);
        return trackArray;
    }

    function setDurationOfPath(duration) {
        if (videoArr.length > 0) {
            videoArr[videoArr.length - 1].duration = duration;
        }
    }

    async function waitForSeconds(done) {
        await mediaTestBase.msleepAsync(10000).then(
            () => {}, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        nextStep(done);
    }


    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3100
       * @tc.name      : SPLITER RECORDER MP4
       * @tc.desc      : Video recorder control test
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
      */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3100', 0, async function (done) {
        console.info("SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3100 start");
        videoConfig.maxSize = 50 * 1024 * 1024;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toGetFd('31.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toGetFd(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitForSeconds(done);
            }
        };

        nextStep(done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3200
       * @tc.name      : SPLITER RECORDER NUMBER 1000
       * @tc.desc      : Video recorder control test
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
      */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3200', 0, async function (done) {
        console.info("SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3200 start");
        videoConfig.maxSize = 1024 * 1024 * 1024;
        frameCount = getFrameCount();
        mySteps = [CREATE_STATE, PREPARE_STATE, START_STATE];
        await toGetFd('32.mp4', done);
        videoConfig.url = fdPath;

        for (let i = 0; i < 1000; i++) {
            mySteps.push(PAUSE_STATE);
            mySteps.push(RESUME_STATE);
        }
        mySteps.push(STOP_STATE);
        mySteps.push(RELEASE_STATE);
        mySteps.push(END_STATE);

        nextStep(done);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3300
       * @tc.name      : TWO INSTANCE SPLITER
       * @tc.desc      : Video recorder control test
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
      */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3300', 0, async function (done) {
        console.info("SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_TEST_COMPATIBILITY_3300 start");
        videoConfig.maxSize = 50 * 1024 * 1024;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, REACHED_SIZE_STATE, STOP_STATE, RELEASE_STATE,
            SET_NEW_URL_STATE, CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, REACHED_SIZE_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toGetFd('33.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toGetFd(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitForSeconds(done);
            }
        };

        nextStep(done);
    })

})
