/**
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import media from '@ohos.multimedia.media'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as avRecorderTestBase from '../../../../../AVRecorderTestBase.js';
import * as avVideoRecorderTestBase from '../../../../../AvVideoRecorderTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

export default function avVideoRecorderTestTwo() {
    describe('avVideoRecorderTestTwo', function () {
        let avRecorder = null;
        const RECORDER_TIME = 3000;
        const RECORDER_LONG_TIME = 3600000;
        const LOOP_TIMES = 1000;
        const FORMAT_M4A = media.ContainerFormatType.CFT_MPEG_4A;
        const ENCORDER_AAC = media.CodecMimeType.AUDIO_AAC;
        const ONLYAUDIO_TYPE = 'only_audio';
        let trackArray;
        let fdObject;
        let fdPath;
        let TAG = "[avVideoRecorderTest] ";
        let avProfile = {
            audioBitrate : 48000,
            audioChannels : 2,
            audioCodec : media.CodecMimeType.AUDIO_AAC,
            audioSampleRate : 48000,
            fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
            videoBitrate : 100000, // 视频比特率
            videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
            videoFrameWidth : 640,  // 视频分辨率的宽
            videoFrameHeight : 480, // 视频分辨率的高
            videoFrameRate : 30 // 视频帧率
        }
        let avConfig = {
            audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
            videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES, // 视频源类型，支持YUV和ES两种格式
            profile : avProfile,
            url : 'fd://35', //  参考应用文件访问与管理开发示例新建并读写一个文件
            rotation : 0, // 视频旋转角度，默认为0不旋转，支持的值为0、90、180、270
            location : { latitude : 30, longitude : 130 }
        }

        beforeAll(async function () {
            console.info('beforeAll in1');
            let permissionName1 = 'ohos.permission.MICROPHONE';
            let permissionName2 = 'ohos.permission.MEDIA_LOCATION';
            let permissionName3 = 'ohos.permission.READ_MEDIA';
            let permissionName4 = 'ohos.permission.WRITE_MEDIA';
            let permissionName5 = 'ohos.permission.CAMERA';
            let permissionNames = [permissionName1, permissionName2, permissionName3, permissionName4, permissionName5];
            await mediaTestBase.getPermission(permissionNames);
            await mediaTestBase.msleepAsync(2000);
            await mediaTestBase.driveFn(3)
            console.info('beforeAll out');
        })

        beforeEach(async function () {
            console.info('beforeEach case');
            await avRecorderTestBase.sleep(3000);
        })

        afterEach(async function () {
            console.info('afterEach case');
            if (avRecorder != null) {
                avRecorder.release().then(() => {
                    console.info(TAG + 'this testCase execution completed')
                }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            }
            await avRecorderTestBase.sleep(1000);
            console.info('afterEach case');
        })

        afterAll(function () {
            mediaTestBase.closeFd(fdObject.fileAsset, fdObject.fdNumber);
            console.info('afterAll case');
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0100
            * @tc.name      : 01. create->prepare
            * @tc.desc      : 1.create 2.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2PreparePromise(avConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0200
            * @tc.name      : 02. start->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.start2PreparePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0200 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0300
            * @tc.name      : 03. pause->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.pause 5.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.pause2PreparePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0300 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0400
            * @tc.name      : 04. resume->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.pause 5.resume 6.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.resume2PreparePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0500
            * @tc.name      : 05. stop->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.stop 5.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.stop2PreparePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0600
            * @tc.name      : 06. reset->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.reset 5.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.reset2PreparePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0700
            * @tc.name      : 07. getInputSurface->prepare
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.getInputSurface2PreparePromise(avConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0800
            * @tc.name      : 08. prepare 3 times
            * @tc.desc      : 1.create 2.prepare 3.prepare 4.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let loopTimes = 3;
            avVideoRecorderTestBase.prepare3TimesPromise(avConfig, avRecorder, loopTimes, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0800 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0900
            * @tc.name      : 09.audioBitrate -1
            * @tc.desc      : 1.create 2.prepare (audioBitrate -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0900', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0900 start')
            let avNewProfile = {
                audioBitrate : -1,
                audioChannels : 2,
                audioCodec : media.CodecMimeType.AUDIO_AAC,
                audioSampleRate : 48000,
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
                audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
                videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES, // 视频源类型，支持YUV和ES两种格式
                profile : avNewProfile,
                url : 'fd://35', //  参考应用文件访问与管理开发示例新建并读写一个文件
                rotation : 0, // 视频旋转角度，默认为0不旋转，支持的值为0、90、180、270
                location : { latitude : 30, longitude : 130 }
            }
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avNewConfig.url = fdPath;
            avVideoRecorderTestBase.avConfigChangedPromise(avNewConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_0900 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1000
            * @tc.name      : 10.audioSampleRate -1
            * @tc.desc      : 1.create 2.prepare (audioSampleRate -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1000 start')
            let avNewProfile = {
                audioBitrate : 48000,
                audioChannels : 2,
                audioCodec : media.CodecMimeType.AUDIO_AAC,
                audioSampleRate : -1,
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
                audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
                videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
                profile : avNewProfile,
                url : 'fd://35',
                rotation : 0,
                location : { latitude : 30, longitude : 130 }
            }
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avNewConfig.url = fdPath;
            avVideoRecorderTestBase.avConfigChangedPromise(avNewConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1100
            * @tc.name      : 11.videoBitrateRange -1
            * @tc.desc      : 1.create 2.prepare (videoBitrateRange -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1100 start')
            let avNewProfile = {
                audioBitrate : 48000,
                audioChannels : 2,
                audioCodec : media.CodecMimeType.AUDIO_AAC,
                audioSampleRate : 48000,
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : -1, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
                audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
                videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
                profile : avNewProfile,
                url : 'fd://35',
                rotation : 0,
                location : { latitude : 30, longitude : 130 }
            }
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avNewConfig.url = fdPath;
            avVideoRecorderTestBase.avConfigChangedPromise(avNewConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1200
            * @tc.name      : 12.videoFrameRate -1
            * @tc.desc      : 1.create 2.prepare (videoFrameRate -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1200 start')
            let avNewProfile = {
                audioBitrate : 48000,
                audioChannels : 2,
                audioCodec : media.CodecMimeType.AUDIO_AAC,
                audioSampleRate : 48000,
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : -1 // 视频帧率
            }
            let avNewConfig = {
                audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
                videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
                profile : avNewProfile,
                url : 'fd://35',
                rotation : 0,
                location : { latitude : 30, longitude : 130 }
            }
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avNewConfig.url = fdPath;
            avVideoRecorderTestBase.avConfigChangedPromise(avNewConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_PROMISE_1200 end')
        })

        // Promise getInputSurface
       /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0100
            * @tc.name      : 01. create->getInputSurface
            * @tc.desc      : 1.create 2.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2GetInputSurfacePromise(avConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0200
            * @tc.name      : 02. prepare->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2GetInputSurfacePromise2(avConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0300
            * @tc.name      : 03. start->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2GetInputSurfacePromise3(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0400
            * @tc.name      : 04. pause->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2GetInputSurfacePromise4(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0500
            * @tc.name      : 05. resume->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2GetInputSurfacePromise5(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0500 end')
        })
    })
}

