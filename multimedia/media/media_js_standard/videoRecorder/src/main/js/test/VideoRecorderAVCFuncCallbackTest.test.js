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
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import mediaDemo from '@ohos.multimedia.mediademo'
import fileIo from '@ohos.fileio'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as videoRecorderBase from '../../../../../VideoRecorderTestBase.js';

describe('VideoRecorderAVCFuncCallbackTest', function () {
    const RECORDER_TIME = 3000;
    const PAUSE_TIME = 1000;

    const CREATE_EVENT = 'create';
    const PREPARE_EVENT = 'prepare';
    const GETSURFACE_EVENT = 'getInputSurface';
    const START_EVENT = 'start';
    const PAUSE_EVENT = 'pause';
    const RESET_EVENT = 'reset';
    const RESUME_EVENT = 'resume';
    const STOP_EVENT = 'stop';
    const RELEASE_EVENT = 'release';
    const END_EVENT = 'end';
    const CHECK_EVENT = "check";
    const AUDIO_VIDEO_TYPE = 'audio_video';
    const ONLYVIDEO_TYPE = 'only_video';
    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';

    let fdPath;
    let fdObject;
    let fileAsset;
    let fdNumber;
    let isStreamRunning = false;
    let surfaceID;
    let playerSurfaceId = '';

    let pageId = 0;
    let mediaDummyTest;
    let recodeCount = 0;
    let videoRecorder = undefined;
    let videoCount = 0;
    let preFdNumber = '';
    let timeoutTimer = null;

    let events = require('events');
    let eventEmitter = new events.EventEmitter();

    let configFile = {
        audioBitrate: 48000,
        audioChannels: 2,
        audioCodec: media.CodecMimeType.AUDIO_MPEG,
        audioSampleRate: 48000,
        durationTime: 1000,
        fileFormat: media.ContainerFormatType.CFT_MPEG_4,
        qualityLevel: 4,
        videoBitrate: 48000,
        videoCodec: media.CodecMimeType.VIDEO_AVC,
        videoFrameWidth: 640,
        videoFrameHeight: 480,
        videoFrameRate: 10
    }

    let videoConfig = {
        audioSourceType: 0,
        videoSourceType: 0,
        profile: configFile,
        url: 'fd://',
        rotation: 0,
        location: { latitude: 30, longitude: 130 },
    }

    let onlyVideoProfile = {
        durationTime: 1000,
        fileFormat: media.ContainerFormatType.CFT_MPEG_4,
        videoBitrate: 48000,
        videoCodec: media.CodecMimeType.VIDEO_AVC,
        videoFrameWidth: 640,
        videoFrameHeight: 480,
        videoFrameRate: 10
    }

    let onlyVideoConfig = {
        videoSourceType: 0,
        profile: onlyVideoProfile,
        url: 'fd://',
        rotation: 0,
        location: { latitude: 30, longitude: 130 },
    }

    beforeAll(async function () {
        console.info('beforeAll start');

    })

    beforeEach(async function () {
        isStreamRunning = false;
        mediaDummyTest = null;
        videoRecorder = undefined;
        videoCount = 0;
        preFdNumber = '';
        await mediaTestBase.toNewPage(pagePath1, pagePath2, pageId);
        pageId = (pageId + 1) % 2;
        await mediaTestBase.msleepAsync(1000).then(
            () => {
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        playerSurfaceId = globalThis.value;
        console.info('beforeEach end');
    })

    afterEach(async function () {
        await mediaTestBase.closeFd(fdObject.fileAsset, fdObject.fdNumber);
        await mediaTestBase.clearRouter();
        if (!timeoutTimer) {
            clearTimeout(timeoutTimer);
            timeoutTimer = null;
        }
        console.info('afterEach end');
    })

    afterAll(function () {
        console.info('afterAll case');
    })


    function toCreateStream() {
        mediaDummyTest = mediaDemo.createMediaTest();
    }

    function toSetStreamParam(width, height, frameRate, frameTotal) {
        console.info('toSetStreamParam width:' + width);
        console.info('toSetStreamParam height:' + height);
        console.info('toSetStreamParam frameRate:' + frameRate);
        console.info('toSetStreamParam frameTotal:' + frameTotal);
        mediaDummyTest.setResolution(width, height);
        mediaDummyTest.setFrameRate(frameRate);
        mediaDummyTest.setFrameCount(frameTotal);
    }

    function getFrameCount() {
        let frameTotal = videoConfig.profile.videoFrameRate * 10;
        return frameTotal;
    }

    function toStartStream() {
        if (isStreamRunning == false) {
            mediaDummyTest.startStream(surfaceID);
            isStreamRunning = true;
        }
    }

    function toStopStream() {
        if (isStreamRunning == true) {
            mediaDummyTest.closeStream(surfaceID);
            isStreamRunning = false;
        }
    }

    function printfError(error, done) {
        expect().assertFail();
        console.info(`error called,errMessage is ${error.message}`);
        done();
    }

    async function toNextStep(videoRecorder, steps, done) {
        if (steps[0] == END_EVENT) {
            console.info('case success!!');
            done();
        } else {
            eventEmitter.emit(steps[0], videoRecorder, steps, done);
        }
    }

    function setOnCallback(videoRecorder) {
        videoRecorder.on('error', (err) => {
            console.info('case error called, errMessage is ' + err.message);
            expect().assertFail();
        });
    }

    eventEmitter.on(CREATE_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        media.createVideoRecorder((err, recorder) => {
            console.info('createVideoRecorder called');
            if (typeof (recorder) != 'undefined') {
                videoRecorder = recorder;
                setOnCallback(videoRecorder);
                toCreateStream();
                toSetStreamParam(videoConfig.profile.videoFrameWidth, videoConfig.profile.videoFrameHeight,
                    videoConfig.profile.videoFrameRate, getFrameCount());
                expect(videoRecorder.state).assertEqual('idle');
                toNextStep(videoRecorder, steps, done);
            } else {
                console.info('recorder is undefined!');
                failureCallback(err, done)
            }
        });
    });

    eventEmitter.on(PREPARE_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        videoRecorder.prepare(videoConfig, (err) => {
            if (typeof (err) == 'undefined') {
                expect(videoRecorder.state).assertEqual('prepared');
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });
    eventEmitter.on(GETSURFACE_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        videoRecorder.getInputSurface((err, outPutSurface) => {
            if (typeof (err) == 'undefined') {
                surfaceID = outPutSurface;
                toStartStream();
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });

    eventEmitter.on(START_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        console.info('case START_EVENT success :');
        await videoRecorder.start((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoRecorder.state).assertEqual('playing');
                mediaTestBase.msleep(RECORDER_TIME);
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });

    eventEmitter.on(PAUSE_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        videoRecorder.pause((err) => {
            if (typeof (err) == 'undefined') {
                mediaTestBase.msleep(PAUSE_TIME);
                expect(videoRecorder.state).assertEqual('paused');
                toStopStream();
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });

    eventEmitter.on(RESET_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        videoRecorder.reset((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoRecorder.state).assertEqual('idle');
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });

    eventEmitter.on(RESUME_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        videoRecorder.resume((err) => {
            if (typeof (err) == 'undefined') {
                mediaTestBase.msleep(RECORDER_TIME);
                expect(videoRecorder.state).assertEqual('playing');
                toStartStream();
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });

    eventEmitter.on(STOP_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        videoRecorder.stop((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoRecorder.state).assertEqual('stopped');
                toStopStream();
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });

    eventEmitter.on(RELEASE_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        videoRecorder.release((err) => {
            if (typeof (err) == 'undefined') {
                expect(videoRecorder.state).assertEqual('idle');
                toStopStream();
                toNextStep(videoRecorder, steps, done);
            } else {
                printfError(err, done);
            }
        });
    });

    eventEmitter.on(CHECK_EVENT, async (videoRecorder, steps, done) => {
        steps.shift();
        let trackArray = steps[0];
        let recorderTime = steps[1];
        steps.shift();
        steps.shift();

        await videoRecorderBase.checkVideos(fdPath, recorderTime, trackArray, playerSurfaceId);
        toNextStep(videoRecorder, steps, done);
    });

    function failureCallback(error, done) {
        console.info(`failureCallback called,errMessage is ${error.message}`);
    }

    function catchCallback(error) {
        console.info(`catchCallback called,errMessage is ${error.message}`);
        expect().assertFail();
    }

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0100
    * @tc.name      : 01.start->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0100', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0100 start');

        fdObject = await mediaTestBase.getFd('021.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);
    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0200
    * @tc.name      : 02.start->pause->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0200', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0200 start');

        fdObject = await mediaTestBase.getFd('022.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT,
        RELEASE_EVENT, CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0300
    * @tc.name      : 03.start->pause->resume->reset->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0300', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0300 start');

        fdObject = await mediaTestBase.getFd('023.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT,
        RESUME_EVENT, RESET_EVENT, RELEASE_EVENT, CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0400
    * @tc.name      : 04.start->reset->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0400', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0400 start');

        fdObject = await mediaTestBase.getFd('024.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, RESET_EVENT,
        RELEASE_EVENT, CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0500
    * @tc.name      : 05.start->pause->resume->pause->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0500', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0500 start');

        fdObject = await mediaTestBase.getFd('025.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT,
        RESUME_EVENT, PAUSE_EVENT, RELEASE_EVENT, CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0600
    * @tc.name      : 06.start->pause->stop->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0600', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0600 start');

        fdObject = await mediaTestBase.getFd('026.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT,
        STOP_EVENT, RELEASE_EVENT, CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0700
    * @tc.name      : 07.start->pause->reset->start->stop->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0700', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0700 start');

        fdObject = await mediaTestBase.getFd('027.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT, RESET_EVENT,
        PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, STOP_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0800
    * @tc.name      : 08.start->stop->reset->start->pause->resume->release ->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0800', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0800 start');

        fdObject = await mediaTestBase.getFd('028.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, STOP_EVENT, RESET_EVENT,
        PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT, RESUME_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0900
    * @tc.name      : 09.start->pause->stop->reset->start->pause->reset->release->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0900', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_0900 start');

        fdObject = await mediaTestBase.getFd('029.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, STOP_EVENT, RESET_EVENT,
        PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT, RESUME_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1000
    * @tc.name      : 10.start->stop->reset->start->reset->release->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1000', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1000 start');

        fdObject = await mediaTestBase.getFd('030.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, STOP_EVENT, RESET_EVENT,
        PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, RESET_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1100
    * @tc.name      : 11.start->stop->start->pause->release->release (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1100', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1100 start');

        fdObject = await mediaTestBase.getFd('031.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, STOP_EVENT,
        PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, PAUSE_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1200
    * @tc.name      : 12.rotation:90 (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1200', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1200 start');

        fdObject = await mediaTestBase.getFd('032.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        videoConfig.rotation = 90;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1300
    * @tc.name      : 12.rotation:180 (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1300', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1300 start');

        fdObject = await mediaTestBase.getFd('033.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        videoConfig.rotation = 180;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);

    });

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1400
    * @tc.name      : 12.rotation:270 (callback)
    * @tc.desc      : Video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1400', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_CALLBACK_FUNCTION_1400 start');

        fdObject = await mediaTestBase.getFd('034.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();
        videoConfig.url = fdPath;
        videoConfig.rotation = 270;
        let trackArray = videoRecorderBase.getTrackArray(AUDIO_VIDEO_TYPE, configFile);
        console.info('trackArray：' + trackArray);
        let videoRecorder = null;
        let mySteps = [CREATE_EVENT, PREPARE_EVENT, GETSURFACE_EVENT, START_EVENT, RELEASE_EVENT,
        CHECK_EVENT, trackArray, RECORDER_TIME, END_EVENT];
        eventEmitter.emit(mySteps[0], videoRecorder, mySteps, done);
    });
})
