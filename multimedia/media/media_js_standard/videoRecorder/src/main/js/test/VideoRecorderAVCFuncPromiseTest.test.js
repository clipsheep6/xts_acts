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
import camera from '@ohos.multimedia.camera'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import mediaDemo from '@ohos.multimedia.mediademo'
import fileIo from '@ohos.fileio'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as videoRecorderBase from '../../../../../VideoRecorderTestBase.js';

describe('VideoRecorderAVCFuncPromiseTest', function () {
    const RECORDER_TIME = 3000;
    const PAUSE_TIME = 1000;

    const AUDIO_VIDEO_TYPE = 'audio_video';
    const ONLYVIDEO_TYPE = 'only_video';
    const pagePath1 = 'pages/surfaceTest/surfaceTest';
    const pagePath2 = 'pages/surfaceTest2/surfaceTest2';

    let cameraManager;
    let cameras;
    let captureSession;
    let fdPath;
    let fileAsset;
    let fdNumber;
    let isStreamRunning = false;
    let surfaceId = '';
    let mediaDummyTest;
    let recodeCount = 0;
    let videoRecorder = undefined;
    let videoCount = 0;
    let preFdNumber = '';
    let timeoutTimer = null;

    let fdObject;
    let playerSurfaceId = '';
    let surfaceID;
    let pageId = 0;

    let configFile = {
//        audioBitrate: 48000,
//        audioChannels: 2,
//        audioCodec: 'audio/mp4a-latm',
//        audioSampleRate: 48000,
        durationTime: 1000,
        fileFormat: 'mp4',
        videoBitrate: 48000,
        videoCodec: media.CodecMimeType.VIDEO_AVC,
        videoFrameWidth: 640,
        videoFrameHeight: 480,
        videoFrameRate: 10
    }

    let videoConfig = {
//        audioSourceType: 0,
        videoSourceType: 0,
        profile: configFile,
        url: 'file:///data/media/01.mp4',
        rotation: 0,
        location: { latitude: 30, longitude: 130 },
    }

    let onlyVideoProfile = {
        durationTime: 1000,
        fileFormat: 'mp4',
        videoBitrate: 48000,
        videoCodec: media.CodecMimeType.VIDEO_AVC,
        videoFrameWidth: 640,
        videoFrameHeight: 480,
        videoFrameRate: 10
    }

    let onlyVideoConfig = {
        videoSourceType: 0,
        profile: onlyVideoProfile,
        url: 'file:///data/media/01.mp4',
        rotation: 0,
        location: { latitude: 30, longitude: 130 },
        maxSize: 0,
        maxDuration: 0
    }

    function sleep(time) {
        return new Promise(resolve => {
            setTimeout(() => {
                resolve('sleep finished');
            }, time);
        });
    }

    beforeAll(async function () {
        console.info('beforeAll start');

    });

    beforeEach(async function () {
        isStreamRunning = false;
        mediaDummyTest = null;
        videoRecorder = undefined;
        videoCount = 0;
        preFdNumber = '';

        await mediaTestBase.toNewPage(pagePath1, pagePath2, pageId);
        pageId = (pageId + 1) % 2;
        await mediaTestBase.msleepAsync(1000).then(
            () => {}, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        playerSurfaceId = globalThis.value;

        console.info('beforeEach end');
    });

    afterEach(async function () {

        await mediaTestBase.closeFd(fdObject.fileAsset, fdObject.fdNumber);
        if (!timeoutTimer) {
            clearTimeout(timeoutTimer);
            timeoutTimer = null;
        }
		console.info('afterEach end');
    });

    afterAll(function () {
    });



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

    async function toCreateVideoRecorder(done) {
        await media.createVideoRecorder().then((recorder) => {
            console.info('createVideoRecorder called');
            if (typeof (recorder) != 'undefined') {
                videoRecorder = recorder;
                toCreateStream();
                toSetStreamParam(videoConfig.profile.videoFrameWidth, videoConfig.profile.videoFrameHeight,
                    videoConfig.profile.videoFrameRate, getFrameCount());
                expect(videoRecorder.state).assertEqual('idle');
            } else {
                expect().assertFail();
            }
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
    }

    async function toPrepare(done) {
        await videoRecorder.prepare(videoConfig).then(() => {
            expect(videoRecorder.state).assertEqual('prepared');
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
    }
    async function toGetInputSurface(done) {
        await videoRecorder.getInputSurface().then((outPutSurface) => {
            surfaceId = outPutSurface;
            toStartStream();
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
    }

    async function toStart(done) {
        await videoRecorder.start().then(() => {
			console.info('videoRecorder start called');
            mediaTestBase.msleep(RECORDER_TIME);
            expect(videoRecorder.state).assertEqual('playing');
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
    }

    async function toPause(done) {
        await videoRecorder.pause().then(() => {
			console.info('videoRecorder pause called');
            mediaTestBase.msleep(PAUSE_TIME);
            expect(videoRecorder.state).assertEqual('paused');
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
    }

    async function toReset(done) {
        await videoRecorder.reset().then(() => {
			console.info('videoRecorder reset called');
            expect(videoRecorder.state).assertEqual('idle');
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
    }

    async function toResume(done) {
        await videoRecorder.resume().then(() => {
			console.info('videoRecorder resume called');
            mediaTestBase.msleep(RECORDER_TIME);
            expect(videoRecorder.state).assertEqual('playing');
            toStartStream();
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
    }

    async function toStop(done) {
        await videoRecorder.stop().then(() => {
			console.info('videoRecorder stop called');
            expect(videoRecorder.state).assertEqual('stopped');
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
        toStopStream();
    }

    async function toRelease(done) {
        await videoRecorder.release().then(() => {
			console.info('videoRecorder release called');
            expect(videoRecorder.state).assertEqual('idle');
        }, (err) => {
            failureCallback(err, done);
        }).catch (catchCallback);
        toStopStream();
    }

    function failureCallback(error, done) {
        console.info(`failureCallback called,errMessage is ${error.message}`);
        expect().assertFail();
        done();
    }

    function catchCallback(error) {
		console.info(`catchCallback called,errMessage is ${error.message}`);
        expect().assertFail();
    }


    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0100
    * @tc.name      : 01.start->release (promise)
    * @tc.desc      : Audio recorder control test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0100', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0100 start');

        fdObject = await mediaTestBase.getFd('001.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();
        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0200
    * @tc.name      : 02.start->pause->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0200', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0200 start');

        fdObject = await mediaTestBase.getFd('002.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();
        await toPause();
        toStopStream();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0300
    * @tc.name      : 03.start->pause->resume->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0300', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0300 start');

        fdObject = await mediaTestBase.getFd('003.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();

        await toGetInputSurface();
        await toStart();
        await toPause();
        toStopStream();

        await toResume();
        toStartStream();
        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0400
    * @tc.name      : 04.start->reset->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0400', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0400 start');

        fdObject = await mediaTestBase.getFd('004.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toReset();
        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0500
    * @tc.name      : 05.start->pause->resume->pause (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0500', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0500 start');

        fdObject = await mediaTestBase.getFd('005.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toPause();
        toStopStream();
        await toResume();
        toStartStream();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })


    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0600
    * @tc.name      : 06.start->pause->stop->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0600', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0600 start');

        fdObject = await mediaTestBase.getFd('006.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toPause();
        toStopStream();
        await toStop();
        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0700
    * @tc.name      : 07.start->pause->reset->stop->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0700', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0700 start');

        fdObject = await mediaTestBase.getFd('007.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toPause();
        toStopStream();

        await toReset();

        await toPrepare();
        await toGetInputSurface();
        await toStart();
        await toStop();
        toStopStream();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0800
    * @tc.name      : 08.start->stop->reset->start->pause->resume->release  (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0800', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0800 start');

        fdObject = await mediaTestBase.getFd('008.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toStop();
        toStopStream();
        await toReset();

        await toPrepare();
        await toGetInputSurface();
        await toStart();
        await toPause();
        toStopStream();
        await toResume();
        toStartStream();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0900
    * @tc.name      : 09.start->pause->stop->reset->start->pause->reset->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0900', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_0900 start');

        fdObject = await mediaTestBase.getFd('009.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toPause();
        toStopStream();
        await toStop();
        await toReset();

        await toPrepare();
        await toGetInputSurface();
        await toStart();
        await toPause();
        toStopStream();
        await toReset();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1000
    * @tc.name      : 10.start->stop->reset->start->reset->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1000', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1000 start');

        fdObject = await mediaTestBase.getFd('010.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toStop();
        toStopStream();

        await toReset();

        await toPrepare();
        await toGetInputSurface();
        await toStart();
        await toReset();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1100
    * @tc.name      : 11.start->stop->start->pause->release (promise)
    * @tc.desc      : video recorder AVC test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1100', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1100 start');

        fdObject = await mediaTestBase.getFd('011.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toStop();
        toStopStream();

        await toPrepare();
        await toGetInputSurface();
        await toStart();
        await toPause();
        toStopStream();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1200
    * @tc.name      : 12.rotation:90 (promise)
    * @tc.desc      : Audio recorder control test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1200', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1200 start');

        fdObject = await mediaTestBase.getFd('012.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.rotation = 90;
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1300
    * @tc.name      : 13.rotation:180(promise)
    * @tc.desc      : Audio recorder control test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1300', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1300 start');

        fdObject = await mediaTestBase.getFd('013.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.rotation =180;
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

    /* *
    * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1400
    * @tc.name      : 14.rotation:270 (promise)
    * @tc.desc      : Audio recorder control test
    * @tc.size      : MediumTest
    * @tc.type      : Function
    * @tc.level     : Level0
    */
    it('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1400', 0, async function (done) {
        console.info('SUB_MEDIA_VIDEO_RECORDER_AVC_PROMISE_FUNCTION_1400 start');

        fdObject = await mediaTestBase.getFd('014.mp4');
        fdPath = "fd://" + fdObject.fdNumber.toString();

        videoConfig.rotation =270;
        videoConfig.url = fdPath;
        let trackArray = videoRecorderBase.getTrackArray(ONLYVIDEO_TYPE, configFile);

        await toCreateVideoRecorder();
        await toPrepare();
        await toGetInputSurface();
        await toStart();

        await toRelease();

        await videoRecorderBase.checkVideos(fdPath, RECORDER_TIME, trackArray, playerSurfaceId);
        console.info('checkVideos :successs');

        done();
    })

})
