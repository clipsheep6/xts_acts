/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * Distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * Limitations under the License.
 */

import media from '@ohos.multimedia.media';
import mediaDemo from '@ohos.multimedia.mediademo';
import fileIo from '@ohos.fileio';
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as videoRecorderTestBase from '../../../../../VideoRecorderTestBase.js';
import {COMMON_CONST} from '../../../../../commenConst.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('VideoRecorderSpliterCallbackTest', function () {
    let fdPath;
    let fileAsset;
    let fdNumber = null;
    let surfaceId = '';
    let playerSurfaceId = '';
    let isStreamRunning = false;
    let mediaDummyTest;
    let recodeCount = 0;
    let judgeCallback = null;
    let videoRecorder = undefined;
    let videoCount = 0;
    let preFdNumber = '';
    let timeoutTimer = null;
    let mySteps = [];
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
    const SIZE_BUFFER = COMMON_CONST.SIZE_BUFFER;

    const VIDEO_PER_STR = 'VideoRecorderFuncCallback';
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

    const SIZE_UPPER_LIMIT = COMMON_CONST.SIZE_UPPER_LIMIT;
    const SIZE_LOWER_LIMIT = COMMON_CONST.SIZE_LOWER_LIMIT;
    const DURATION_UPPER_LIMIT = COMMON_CONST.DURATION_UPPER_LIMIT;
    const DURATION_LOWER_LIMIT = COMMON_CONST.DURATION_LOWER_LIMIT;
    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';

    let onlyVideoProfile = {
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
        profile: onlyVideoProfile,
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
        mediaDummyTest = null;
        videoConfig.maxSize = 0;
        videoConfig.maxDuration = 0;
        judgeCallback = null;
        fdNumber = null;
        fileAsset = null;
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
            () => {
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        playerSurfaceId = globalThis.value;
        console.info('beforeEach end');
    })

    afterEach(async function () {
        if (!!timeoutTimer) {
            clearTimeout(timeoutTimer);
            timeoutTimer = null;
        }
        mySteps = [];
        recodeCount++;
        await mediaTestBase.clearRouter();
        let length = videoArr.length;
        for (let i = 0; i < length; i++) {
            await mediaTestBase.closeFd(videoArr[i].fileAsset, videoArr[i].fdNumber);
        }
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

    function toPauseStream() {
        if (isStreamRunning == true) {
            mediaDummyTest.pauseStream();
            isStreamRunning = false;
        }
    }

    function toResumeStream() {
        if (isStreamRunning == false) {
            mediaDummyTest.resumeStream();
            isStreamRunning = true;
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

    async function toIniFdData(pathName, done) {
        console.info('toIniFdData start');
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
                fileAsset: fileAsset,
                fdNumber: fdNumber
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
            console.info(`end is called; done: ` + JSON.stringify(done));
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
            case CHECK_VIDEO_STATE:
                toCheckVideo(done);
                break;
            case CHECK_PRE_FILE_STATE:
                toCheckFile(preFdNumber, done);
                break;
            case WRONG_SET_SUB_STATE:
                isUnExpectSetSub = true;
                checkNextStep(done);
                break;
            case GET_NEW_PATH_STATE:
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                console.info('get new path finished');
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
        media.createVideoRecorder((err, recorder) => {
            console.info('createVideoRecorder called');
            if (typeof (recorder) != 'undefined') {
                videoRecorder = recorder;
                onInfoCallBack(videoRecorder, done);
                toCreateStream();
                toSetStreamParam(videoConfig.profile.videoFrameWidth, videoConfig.profile.videoFrameHeight,
                    videoConfig.profile.videoFrameRate, frameCount);
                expect(videoRecorder.state).assertEqual('idle');
                checkNextStep(done);
            } else {
                console.info('recorder is undefined');
                failureCallback(err, done)
            }
        });
    }

    function toPrepare(done) {
        videoRecorder.prepare(videoConfig, (err) => {
            console.info('prepare is called');
            if (!!err) {
                failureCallback(err, done)
            } else {
                expect(videoRecorder.state).assertEqual('prepared');
                videoRecorder.getInputSurface((err, outPutSurface) => {
                    if (!!err) {
                        failureCallback(err, done)
                    } else {
                        surfaceId = outPutSurface;
                        console.info('recorder surfaceId: ' + surfaceId);
                        toStartStream();
                        checkNextStep(done);
                    }
                });
            }
        });
    }

    function toSetSubsequentFile(done) {
        videoRecorder.setSubsequentFile(fdPath, (err) => {
            console.info('setSubsequentFile is called');
            if (!!err) {
                failureCallback(err, done)
            } else {
                checkNextStep(done);
            }
        });
    }

    function toPause(done) {
        console.info('pause is called');
        if (!isIgnoreStream) {
            videoRecorder.pause((err) => {
                if (!!err) {
                    failureCallback(err, done)
                } else {
                    expect(videoRecorder.state).assertEqual('paused');
                    toStopStream();
                    checkNextStep(done);
                }
            });
        } else {
            checkNextStep(done);
        }
    }

    function toStop(done) {
        videoRecorder.stop((err) => {
            console.info('stop is called');
            if (!!err) {
                failureCallback(err, done)
            } else {
                expect(videoRecorder.state).assertEqual('stopped');
                toStopStream();
                checkNextStep(done);
            }
        });
    }

    function toRelease(done) {
        videoRecorder.release((err) => {
            console.info('release is called');
            if (!!err) {
                failureCallback(err, done)
            } else {
                expect(videoRecorder.state).assertEqual('idle');
                checkNextStep(done)
            }
        });
    }

    function toStart(done) {
        videoRecorder.start((err) => {
            console.info('start is called');
            if (!!err) {
                failureCallback(err, done)
            } else {
                expect(videoRecorder.state).assertEqual('playing');
                checkNextStep(done)
            }
        });
    }

    function toResume(done) {
        console.info('resume is called');
        if (!isIgnoreStream) {
            videoRecorder.resume((err) => {
                if (!!err) {
                    failureCallback(err, done)
                } else {
                    expect(videoRecorder.state).assertEqual('playing');
                    toStartStream();
                    checkNextStep(done)
                }
            });
        } else {
            checkNextStep(done);
        }
    }

    function toReset(done) {
        videoRecorder.reset((err) => {
            console.info('reset is called');
            if (!!err) {
                failureCallback(err, done)
            } else {
                expect(videoRecorder.state).assertEqual('idle');
                checkNextStep(done)
            }
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
        let trackArray = getTrackArray(onlyVideoProfile);
        console.info('toCheckVideo playerSurfaceId: ' + playerSurfaceId);
        for (let i = 0; i < videoArr.length; i++) {
            await videoRecorderTestBase.checkVideos(
                videoArr[i].fdPath,
                videoArr[i].duration,
                trackArray,
                playerSurfaceId
            );
        }
        checkNextStep(done);
    }

    function getTrackArray(recorderConfigFile) {
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

    async function waitTenSeconds(done) {
        await mediaTestBase.msleepAsync(10000).then(
            () => {
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        nextStep(done);
    }

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0100
        * @tc.name      : start->setsequentfile
        * @tc.desc      : start，then setsequentfile when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0100', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0100 start');
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, REACHED_SIZE_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE,
            PAUSE_STATE, STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];

        await toIniFdData('01.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0200
        * @tc.name      : resume->setsequentfile
        * @tc.desc      : start->pause->resume,then setsequentfile when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0200', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0200 start');
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, PAUSE_STATE, RESUME_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, REACHED_SIZE_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('02.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0300
        * @tc.name      : reset->setsequentfile
        * @tc.desc      : start->stop->reset,then setsequentfile when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0300', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0300 start');
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            STOP_STATE, RESET_STATE, GET_NEW_PATH_STATE, SET_NEW_URL_STATE,
            SET_NEW_STREAM_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, REACHED_SIZE_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('03.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
        timeoutTimer = setTimeout(() => {
            nextStep(done);
        }, 10000)
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0400
        * @tc.name      : recorder_time less than maxduration
        * @tc.desc      : start，then setsequentfile when max duration is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0400', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0400 start');
        videoConfig.maxDuration = DURATION_LOWER_LIMIT;
        frameCount = videoConfig.maxDuration * videoConfig.profile.videoFrameRate * 2;
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            STOP_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE,
            RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('04.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                setDurationOfPath(videoConfig.maxDuration * 0.9);
                nextStep(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0500
        * @tc.name      : recorder_time less than maxsize
        * @tc.desc      : start，then setsequentfile when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0500', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0500 start');
        videoConfig.maxSize = 10 * 1024 * 1024;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            STOP_STATE, CHECK_FILE_STATE, APPROACHING_SIZE_STATE,
            RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('05.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                nextStep(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0600
        * @tc.name      : spliter 4 times
        * @tc.desc      : spliter 4 times when the condition approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0600', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0600 start');
        videoConfig.maxDuration = DURATION_LOWER_LIMIT;
        frameCount = videoConfig.maxDuration * videoConfig.profile.videoFrameRate * 2;
        mySteps = [CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE];
        await toIniFdData('06.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                mySteps = [
                    CHECK_PRE_FILE_STATE, IGNORE_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
                ];
                nextStep(done);
            }
        };
        timeoutTimer = setTimeout(async () => {
            console.info('setTimeout called, videoCount: ' + videoCount);
            if (videoCount < 5) {
                expect(false).assertTrue();
                done();
            } else {
                expect(true).assertTrue();
            }
            setDurationOfPath(0);
            mySteps = [STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE];
            nextStep(done);
        }, 300000)
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0700
        * @tc.name      : pause and resume 90%
        * @tc.desc      : start->pause->resume,then setsequentfile when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0700', 0, async function (done) {
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0700 enter');
        frameCount = getFrameCount();
        isIgnoreStream = true;
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            PAUSE_STATE, RESUME_STATE, CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE,
            CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('07.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0800
        * @tc.name      : first come first spliter
        * @tc.desc      : both set maxSize and maxDuration,which condition first come to spliter
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0800', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0800 start');
        videoConfig.maxSize = 10 * 1024 * 1024;
        videoConfig.maxDuration = DURATION_LOWER_LIMIT;
        frameCount = getFrameCount();
        mySteps = [CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE];
        await toIniFdData('08.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                mySteps = [
                    CHECK_PRE_FILE_STATE, IGNORE_SIZE_STATE, SET_SUB_STATE,
                    CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE
                ];
                nextStep(done);
            } else if (type === INFO_MAX_SIZE_APPROACHING) {
                setDurationOfPath(0);
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                mySteps = [
                    CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE,
                    CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE
                ];
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                mySteps = [STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE];
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0900
        * @tc.name      : size and duration 90%
        * @tc.desc      : both set maxSize and maxDuration,which condition first come to spliter
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0900', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_0900 start');
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        videoConfig.maxDuration = DURATION_LOWER_LIMIT;
        frameCount = videoConfig.maxDuration * videoConfig.profile.videoFrameRate * 2;
        mySteps = [CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE];
        await toIniFdData('09.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                mySteps = [
                    CHECK_PRE_FILE_STATE, IGNORE_SIZE_STATE, SET_SUB_STATE,
                    CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE
                ];
                nextStep(done);
            } else if (type === INFO_MAX_SIZE_APPROACHING) {
                setDurationOfPath(0);
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                mySteps = [
                    CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE,
                    CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE
                ];
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                mySteps = [STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE];
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1000
        * @tc.name      : set subsequentfile 5 times
        * @tc.desc      : set subsequentfile 5 times when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1000', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1000 start');
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE,
            SET_SUB_STATE, WRONG_SET_SUB_STATE, SET_SUB_STATE, SET_SUB_STATE, SET_SUB_STATE, SET_SUB_STATE,
            CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('10.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1100
        * @tc.name      : set maxsize is max to spliter
        * @tc.desc      : start，then setsequentfile when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1100', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1100 start');
        videoConfig.maxSize = 10 * 1024 * 1024;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, REACHED_SIZE_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('11.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1200
        * @tc.name      : set maxsize is min to spliter
        * @tc.desc      : start，then setsequentfile when max size is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1200', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1200 start');
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        frameCount = getFrameCount();
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, REACHED_SIZE_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE,
            PAUSE_STATE, STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('12.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1300
        * @tc.name      : set maxduration is max to spliter
        * @tc.desc      : start，then setsequentfile when max duration is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1300', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1300 start');
        videoConfig.maxDuration = 300 * 1000;
        frameCount = videoConfig.maxDuration * videoConfig.profile.videoFrameRate * 2;
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, IGNORE_SIZE_STATE, SET_SUB_STATE, CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('13.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1400
        * @tc.name      : set maxduration is min to spliter
        * @c.desc       : start，then setsequentfile when max duration is approaching
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1400', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1400 start');
        videoConfig.maxDuration = DURATION_LOWER_LIMIT;
        frameCount = videoConfig.maxDuration * videoConfig.profile.videoFrameRate * 2;
        mySteps = [
            CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE,
            CHECK_PRE_FILE_STATE, IGNORE_SIZE_STATE, SET_SUB_STATE,
            CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE,
            STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE
        ];
        await toIniFdData('14.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1500
        * @tc.name      : size and duration for video
        * @tc.desc      : both set maxSize and maxDuration,which condition first come to spliter
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1500', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_TEST_1500 start');
        videoConfig.maxSize = SIZE_LOWER_LIMIT;
        videoConfig.maxDuration = 1800 * 1000;
        frameCount = getFrameCount();
        mySteps = [CREATE_STATE, PREPARE_STATE, START_STATE, WAIT_STATE];
        await toIniFdData('15.mp4', done);
        videoConfig.url = fdPath;

        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                mySteps = [
                    CHECK_PRE_FILE_STATE, IGNORE_SIZE_STATE, SET_SUB_STATE,
                    CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE,
                ];
                nextStep(done);
            } else if (type === INFO_MAX_SIZE_APPROACHING) {
                setDurationOfPath(0);
                await toIniFdData(VIDEO_SUB_STR + recodeCount + '.mp4', done);
                setDurationOfPath(0);
                mySteps = [
                    CHECK_PRE_FILE_STATE, APPROACHING_SIZE_STATE, SET_SUB_STATE,
                    CHECK_FILE_STATE, IGNORE_SIZE_STATE, WAIT_STATE,
                ];
                nextStep(done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                mySteps = [STOP_STATE, RELEASE_STATE, CHECK_VIDEO_STATE, END_STATE];
                waitTenSeconds(done);
            }
        };
        nextStep(done);
    })
})
