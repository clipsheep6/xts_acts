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
import camera from '@ohos.multimedia.camera'
import deviceInfo from '@ohos.deviceInfo'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as avRecorderTestBase from '../../../../../AVRecorderTestBase.js';
import * as avVideoRecorderTestBase from '../../../../../AvVideoRecorderTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

export default function avVideoRecorderTestThree() {
    describe('avVideoRecorderTestThree', function () {
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
            videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile : avProfile,
            url : 'fd://35', //  参考应用文件访问与管理开发示例新建并读写一个文件
            rotation : 0, // 视频旋转角度，默认为0不旋转，支持的值为0、90、180、270
            location : { latitude : 30, longitude : 130 }
        }

        let avProfileMpeg = {
            fileFormat : media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate : 100000,
            videoCodec : media.CodecMimeType.VIDEO_MPEG4,
            videoFrameWidth : 640,
            videoFrameHeight : 480,
            videoFrameRate : 30
        }
        let avConfigMpeg = {
            videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile : avProfileMpeg,
            url : 'fd://35',
            rotation : 0,
            location : { latitude : 30, longitude : 130 }
        }
        let avProfileMpegAac = {
            audioBitrate : 48000,
            audioChannels : 2,
            audioCodec : media.CodecMimeType.AUDIO_AAC,
            audioSampleRate : 48000,
            fileFormat : media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate : 100000,
            videoCodec : media.CodecMimeType.VIDEO_MPEG4,
            videoFrameWidth : 640,
            videoFrameHeight : 480,
            videoFrameRate : 30
        }
        let avConfigMpegAac = {
            audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
            videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile : avProfileMpegAac,
            url : 'fd://35',
            rotation : 0,
            location : { latitude : 30, longitude : 130 }
        }
        let avProfileH264 = {
            fileFormat : media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate : 100000,
            videoCodec : media.CodecMimeType.VIDEO_AVC,
            videoFrameWidth : 640,
            videoFrameHeight : 480,
            videoFrameRate : 30
        }
        let avConfigH264 = {
            videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile : avProfileH264,
            url : 'fd://35',
            rotation : 0,
            location : { latitude : 30, longitude : 130 }
        }
        let avProfileH264Aac = {
            audioBitrate : 48000,
            audioChannels : 2,
            audioCodec : media.CodecMimeType.AUDIO_AAC,
            audioSampleRate : 48000,
            fileFormat : media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate : 100000,
            videoCodec : media.CodecMimeType.VIDEO_AVC,
            videoFrameWidth : 640,
            videoFrameHeight : 480,
            videoFrameRate : 30
        }
        let avConfigH264Aac = {
            audioSourceType : media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
            videoSourceType : media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile : avProfileH264Aac,
            url : 'fd://35',
            rotation : 0,
            location : { latitude : 30, longitude : 130 }
        }

        let events = require('events');
        let eventEmitter = new events.EventEmitter();

        const CREATE_EVENT = 'create';
        const SETONCALLBACK_EVENT = 'setAvRecorderCallback'
        const PREPARE_EVENT = 'prepare';
        const GETINPUTSURFACE_EVENT = 'getInputSurface';
        const INITCAMERA_EVENT = 'initCamera';
        const STARTCAMERA_EVENT = 'startCameraOutput';
        const STOPCAMERA_EVENT = 'stopCameraOutput';
        const STARTRECORDER_EVENT = 'start';
        const PAUSERECORDER_EVENT = 'pause';
        const RESUMERECORDER_EVENT = 'resume';
        const STOPRECORDER_EVENT = 'stop';
        const RESETRECORDER_EVENT = 'reset';
        const RELEASECORDER_EVENT = 'release';
        const RELEASECAMERA_EVENT = 'releaseCamera';
        const END_EVENT = 'end';
        const FAIL_EVENT = 'fail';

        let cameraManager;
        let videoOutput;
        let captureSession;
        let cameraInput;
        let previewOutput;
        let cameraOutputCap;
        let videoSurfaceId = null;

        beforeAll(async function () {
            if (deviceInfo.deviceType === 'default') {
                avConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
                avConfigMpeg.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
                avConfigMpegAac.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
                avConfigH264.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
                avConfigH264Aac.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                avConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
                avConfigMpeg.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
                avConfigMpegAac.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
                avConfigH264.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
                avConfigH264Aac.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }

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

        async function initCamera(avRecorder, avConfig, recorderTime, steps, done) {

            // 创建CameraManager对象
            let context = globalThis.contextVideo;
            cameraManager = camera.getCameraManager(context)
            if (!cameraManager) {
                console.error("camera.getCameraManager error")
                return;
            }
            cameraManager.on('cameraStatus', (cameraStatusInfo) => {
                console.log(`camera : ${cameraStatusInfo.camera.cameraId}`);
                console.log(`status: ${cameraStatusInfo.status}`);
            })

            // 获取相机列表
            let cameras = cameraManager.getSupportedCameras();
            let cameraDevice = cameras[0];

            // 查询相机设备在模式下支持的输出能力
            let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameraDevice);
            console.info('getSupportedOutputCapability success');
            console.log(`cameraOutputCapability previewProfiles: ${cameraOutputCapability.previewProfiles}`);
            console.log(`cameraOutputCapability photoProfiles: ${cameraOutputCapability.photoProfiles}`);
            console.log(`cameraOutputCapability videoProfiles: ${cameraOutputCapability.videoProfiles}`);

            // 创建相机输入流
            try {
                cameraInput = cameraManager.createCameraInput(cameraDevice);
                console.info('createCameraInput success');
            } catch (error) {
                console.error('Failed to createCameraInput errorCode = ' + error.code);
            }
            // 监听cameraInput错误信息
            cameraInput.on('error', cameraDevice, (error) => {
                console.log(`Camera input error code: ${error.code}`);
            })

            // 创建VideoOutput对象
            let profile = cameraOutputCapability.videoProfiles[0];
            try {
                videoOutput = cameraManager.createVideoOutput(profile, videoSurfaceId)
                console.info('createVideoOutput success');
            } catch (error) {
                console.error('Failed to create the videoOutput instance. errorCode = ' + error.code);
            }
            // 监听视频输出错误信息
            videoOutput.on('error', (error) => {
                console.log(`Preview output error code: ${error.code}`);
            })

            // 创建previewOutput输出对象
            let surfaceId = globalThis.value;
            let previewProfile = cameraOutputCapability.previewProfiles[0];
            try {
                previewOutput = cameraManager.createPreviewOutput(previewProfile, surfaceId)
                console.info('createPreviewOutput success');
            } catch (error) {
                console.error('Failed to create the PreviewOutput instance errorCode = ' + error.code);
            }

            // 打开相机
            await cameraInput.open();

            //创建会话
            try {
                captureSession = cameraManager.createCaptureSession()
                console.info('createCaptureSession success');
            } catch (error) {
                console.error('Failed to create the CaptureSession instance. errorCode = ' + error.code);
            }

            // 监听session错误信息
            captureSession.on('error', (error) => {
                console.log(`Capture session error code: ${error.code}`);
            })

            // 开始配置会话
            try {
                captureSession.beginConfig()
                console.info('beginConfig success');
            } catch (error) {
                console.error('Failed to beginConfig. errorCode = ' + error.code);
            }

            // 向会话中添加相机输入流
            try {
                captureSession.addInput(cameraInput)
                console.info('captureSession.addInput cameraInput success');
            } catch (error) {
                console.error('Failed to addInput. errorCode = ' + error.code);
            }

            // 向会话中添加预览输入流
            try {
                captureSession.addOutput(previewOutput)
                console.info('captureSession.addOutput previewOutput success');
            } catch (error) {
                console.error('Failed to addOutput(previewOutput). errorCode = ' + error.code);
            }

            // 向会话中添加录像输出流
            try {
                captureSession.addOutput(videoOutput)
                console.info('captureSession.addOutput videoOutput success');
            } catch (error) {
                console.error('Failed to addOutput(videoOutput). errorCode = ' + error.code);
            }

            // 提交会话配置
            await captureSession.commitConfig()

            // 启动会话
            await captureSession.start().then(() => {
                console.log('captureSession start success.');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            })
        }

        function toNextStep(avRecorder, avConfig, recorderTime, steps, done) {
            if (steps[0] == END_EVENT) {
                console.info('case success!!');
                done();
            } else if (steps[0] == FAIL_EVENT) {
                console.error('case failed!!');
                done();
                // expect().assertFail();
            } else {
                avVideoRecorderTestBase.sleep(1000)
                console.info('next step: ' + steps[0])
                eventEmitter.emit(steps[0], avRecorder, avConfig, recorderTime, steps, done);
            }
        }

        eventEmitter.on(CREATE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            console.info('case avConfig.url is ' + avConfig.url);
            console.info('case avConfig.orientationHint is ' + avConfig.orientationHint);
            console.info('case avConfig.profile.audioBitrate is ' + avConfig.profile.audioBitrate)
            console.info('case avConfig.profile.audioSampleRate is ' + avConfig.profile.audioSampleRate)
            console.info('case avConfig.profile.videoBitrate is ' + avConfig.profile.videoBitrate)
            console.info('case avConfig.profile.videoFrameRate is ' + avConfig.profile.videoFrameRate);

            steps.shift();
            media.createAVRecorder((error, recorder) => {
                if (recorder != null) {
                    avRecorder = recorder;
                    expect(avRecorder.state).assertEqual('idle');
                    console.info('createAVRecorder idleCallback success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }  else {
                    console.info(`createAVRecorder idleCallback fail, error:${error}`);
                }
            });
        });

        eventEmitter.on(SETONCALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                avVideoRecorderTestBase.setAvRecorderCallback(avRecorder, done)
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }catch(error){
                console.info('setAvRecorderCallback failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(PREPARE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.prepare(avConfig, (err) => {
                console.info('case prepare called');
                if (err == null) {
                    console.error(`case prepare success, state is ${avRecorder.state}`);
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.PREPARED);
                    console.info('prepare success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }  else {
                    console.error(`case prepare error, errMessage is ${err.message}`);
                }
            })
        });

        eventEmitter.on(GETINPUTSURFACE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.getInputSurface((err, surfaceId) => {
                if (err == null) {
                    console.info('getInputSurface success');
                    videoSurfaceId = surfaceId;
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }  else {
                    console.info('getInputSurface failed and error is ' + err.message);
                }
            });
        });

        eventEmitter.on(INITCAMERA_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                initCamera(avRecorder, avConfig, recorderTime, steps, done)
            }catch(error){
                console.info('initCamera failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(STARTCAMERA_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                startCameraOutput()
                avVideoRecorderTestBase.sleep(1000)
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }catch(error){
                console.info('startCameraOutput failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(STOPCAMERA_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                stopCameraOutput()
                avVideoRecorderTestBase.sleep(1000)
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }catch(error){
                console.info('stopCameraOutput failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(STARTRECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.start((err) => {
                console.info('case start called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.STARTED);
                    console.info('start AVRecorder success');
                    if (recorderTime != undefined) {
                        avVideoRecorderTestBase.sleep(recorderTime);
                        toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                    }
                } else {
                    console.error('start AVRecorder failed and error is ' + err.message);

                    let failedSteps = new Array(
                        // release avRecorder and camera
                        RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                        // failed
                        FAIL_EVENT
                    )
                    
                    toNextStep(avRecorder, avConfig, recorderTime, failedSteps, done);
                }
            })
        });

        eventEmitter.on(PAUSERECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.pause((err) => {
                console.info('case pause called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.PAUSED);
                    console.info('pause AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('pause AVRecorder failed and error is ' + err.message);
                }
            })
        });

        eventEmitter.on(RESUMERECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let resumeValue = true;
            avRecorder.resume((err) => {
                console.info('case resume called');
                if (err == null) {
                    console.info('resume AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    resumeValue = false
                    console.info('resume AVRecorder failed and error is ' + err.message);
                    console.info('resumeValue is ' + resumeValue);
                    expect(resumeValue).assertEqual(false);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(STOPRECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.stop((err) => {
                console.info('case stop called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.STOPPED);
                    console.info('stop AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('stop AVRecorder failed and error is ' + err.message);

                    let failedSteps = new Array(
                        // release avRecorder and camera
                        RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                        // failed
                        FAIL_EVENT
                    )
                    
                    toNextStep(avRecorder, avConfig, recorderTime, failedSteps, done);
                }
            })
        });

        eventEmitter.on(RESETRECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.reset((err) => {
                console.info('case reset called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.IDLE);
                    console.info('reset AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('reset AVRecorder failed and error is ' + err.message);
                }
            })
        });

        eventEmitter.on(RELEASECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.release((err) => {
                console.info('case release called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.RELEASED);
                    console.info('release AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('release AVRecorder failed and error is ' + err.message);
                }
            })
        });

         async function startCameraOutput() {
            console.info('startCameraOutput start')
            await videoOutput.start(async (err) => {
                if (err) {
                    console.error(`Failed to start the video output ${err.message}`);
                    return;
                }
                console.log('Callback invoked to indicate the video output start success.');
            });
        }

         async function stopCameraOutput() {
            await videoOutput.stop((err) => {
                if (err) {
                    console.error(`Failed to stop the video output ${err.message}`);
                    return;
                }
                console.log('Callback invoked to indicate the video output stop success.');
            });

         }

        eventEmitter.on(RELEASECAMERA_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                releaseCamera(avRecorder, avConfig, recorderTime, steps, done)
            }catch(error){
                console.info('releaseCamera failed and catch error is ' + error.message);
            }
        });

        async function releaseCamera(avRecorder, avConfig, recorderTime, steps, done) {
            // 停止会话
            await captureSession.stop()
        
            // 释放相机输入流
            await cameraInput.close()
        
            // 释放预览输出流
            await previewOutput.release()
        
            // 释放录像输出流
            await videoOutput.release()
        
            // 释放会话
            await captureSession.release()
        
            // 会话置空
            captureSession = null
            console.log('releaseCamera success.');
        
            toNextStep(avRecorder, avConfig, recorderTime, steps, done);
        }

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0200
            * @tc.name      : 02.AVRecorder recording(audioBitrate 8000,audioSampleRate 8000,videoBitrateRange 280000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0200 start')

            avProfileMpegAac.audioBitrate = 8000
            avProfileMpegAac.audioSampleRate = 8000
            avProfileMpegAac.videoBitrate = 280000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0200 end')
        })
        
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0300
            * @tc.name      : 03.AVRecorder recording(audioBitrate 16000,audioSampleRate 32000,videoBitrateRange 560000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0300 start')

            avProfileMpegAac.audioBitrate = 16000
            avProfileMpegAac.audioSampleRate = 32000
            avProfileMpegAac.videoBitrate = 560000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0400
            * @tc.name      : 04.AVRecorder recording(audioBitrate 32000,audioSampleRate 44100,videoBitrateRange 1120000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0400 start')

            avProfileMpegAac.audioBitrate = 32000
            avProfileMpegAac.audioSampleRate = 44100
            avProfileMpegAac.videoBitrate = 1120000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0500
            * @tc.name      : 05.AVRecorder recording(audioBitrate 112000,audioSampleRate 96000,videoBitrateRange 2240000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0500 start')

            avProfileMpegAac.audioBitrate = 112000
            avProfileMpegAac.audioSampleRate = 96000
            avProfileMpegAac.videoBitrate = 2240000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0600
            * @tc.name      : 06.AVRecorder recording orientationHint:90
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0600 start')

            avConfigMpegAac.orientationHint = 90

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0700
            * @tc.name      : 07.AVRecorder recording orientationHint:180
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0700 start')

            avConfigMpegAac.orientationHint = 180

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0800
            * @tc.name      : 08.AVRecorder recording orientationHint:270
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0800 start')

            avConfigMpegAac.orientationHint = 270

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0800 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0900
            * @tc.name      : 09.AVRecorder recording videoFrameRate:5
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0900', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0900 start')

            avProfileMpegAac.videoFrameRate = 5

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_0900 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1000
            * @tc.name      : 10.AVRecorder recording videoFrameRate:30
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1000 start')

            avProfileMpegAac.videoFrameRate = 30

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1100
            * @tc.name      : 11.AVRecorder recording videoFrameRate:60
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1100 start')

            avProfileMpegAac.videoFrameRate = 60

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpegAac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1200
            * @tc.name      : 12.AVRecorder Record MPEG4
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1200 start')
            
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpeg.url = fdPath
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigMpeg, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_MPEG4_1200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0100
            * @tc.name      : 001.test 1，record 3s； 2，pause 3，resume 4，stop 5，restart
            * @tc.desc      : Recorder video 1，record 3s； 2，pause 3，resume 4，stop 5，restart
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0200
            * @tc.name      : 02.AVRecorder recording(audioBitrate 8000,audioSampleRate 8000,videoBitrateRange 280000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0200 start')

            avProfileMpegAac.audioBitrate = 8000
            avProfileMpegAac.audioSampleRate = 8000
            avProfileMpegAac.videoBitrate = 280000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0200 end')
        })
        
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0300
            * @tc.name      : 03.AVRecorder recording(audioBitrate 16000,audioSampleRate 32000,videoBitrateRange 560000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0300 start')

            avProfileMpegAac.audioBitrate = 16000
            avProfileMpegAac.audioSampleRate = 32000
            avProfileMpegAac.videoBitrate = 560000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0400
            * @tc.name      : 04.AVRecorder recording(audioBitrate 32000,audioSampleRate 44100,videoBitrateRange 1120000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0400 start')

            avProfileMpegAac.audioBitrate = 32000
            avProfileMpegAac.audioSampleRate = 44100
            avProfileMpegAac.videoBitrate = 1120000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0500
            * @tc.name      : 05.AVRecorder recording(audioBitrate 112000,audioSampleRate 96000,videoBitrateRange 2240000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0500 start')

            avProfileMpegAac.audioBitrate = 112000
            avProfileMpegAac.audioSampleRate = 96000
            avProfileMpegAac.videoBitrate = 2240000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0600
            * @tc.name      : 06.AVRecorder recording orientationHint:90
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0600 start')

            avConfigMpegAac.orientationHint = 90

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0700
            * @tc.name      : 07.AVRecorder recording orientationHint:180
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0700 start')

            avConfigMpegAac.orientationHint = 180

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0800
            * @tc.name      : 08.AVRecorder recording orientationHint:270
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0800 start')

            avConfigMpegAac.orientationHint = 270

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0800 end')
        })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0900
        //     * @tc.name      : 09.AVRecorder recording videoFrameRate:5
        //     * @tc.desc      : Recorder video (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Function test
        //     * @tc.level     : Level2
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0900', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0900 start')
        //
        //     avProfileMpegAac.videoFrameRate = 5
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfigMpegAac.url = fdPath;
        //
        //     let mySteps = new Array(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start recorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         // pause recorder
        //         PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
        //         // resume recorder
        //         STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
        //         // stop recorder
        //         STOPRECORDER_EVENT, STOPCAMERA_EVENT,
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_0900 end')
        // })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1000
            * @tc.name      : 10.AVRecorder recording videoFrameRate:30
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1000 start')

            avProfileMpegAac.videoFrameRate = 30

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            
            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1100
            * @tc.name      : 11.AVRecorder recording videoFrameRate:60
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1100 start')

            avProfileMpegAac.videoFrameRate = 60

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpegAac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpegAac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1200
            * @tc.name      : 12.AVRecorder Record MPEG4
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1200 start')
            
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigMpeg.url = fdPath

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigMpeg, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_MPEG4_1200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0100
            * @tc.name      : 01.AVRecorder Record H264+AAC
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0200
            * @tc.name      : 02.AVRecorder recording(audioBitrate 8000,audioSampleRate 8000,videoBitrateRange 280000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0200 start')

            avProfileH264Aac.audioBitrate = 8000
            avProfileH264Aac.audioSampleRate = 8000
            avProfileH264Aac.videoBitrate = 280000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0200 end')
        })
        
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0300
            * @tc.name      : 03.AVRecorder recording(audioBitrate 16000,audioSampleRate 32000,videoBitrateRange 560000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0300 start')

            avProfileH264Aac.audioBitrate = 16000
            avProfileH264Aac.audioSampleRate = 32000
            avProfileH264Aac.videoBitrate = 560000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0400
            * @tc.name      : 04.AVRecorder recording(audioBitrate 32000,audioSampleRate 44100,videoBitrateRange 1120000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0400 start')

            avProfileH264Aac.audioBitrate = 32000
            avProfileH264Aac.audioSampleRate = 44100
            avProfileH264Aac.videoBitrate = 1120000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0500
            * @tc.name      : 05.AVRecorder recording(audioBitrate 112000,audioSampleRate 96000,videoBitrateRange 2240000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0500 start')

            avProfileH264Aac.audioBitrate = 112000
            avProfileH264Aac.audioSampleRate = 96000
            avProfileH264Aac.videoBitrate = 2240000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0600
            * @tc.name      : 06.AVRecorder recording orientationHint:90
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0600 start')

            avConfigH264Aac.orientationHint = 90

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0700
            * @tc.name      : 07.AVRecorder recording orientationHint:180
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0700 start')

            avConfigH264Aac.orientationHint = 180

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0800
            * @tc.name      : 08.AVRecorder recording orientationHint:270
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0800 start')

            avConfigH264Aac.orientationHint = 270

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0800 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0900
            * @tc.name      : 09.AVRecorder recording videoFrameRate:5
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0900', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0900 start')

            avProfileH264Aac.videoFrameRate = 5

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_0900 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1000
            * @tc.name      : 10.AVRecorder recording videoFrameRate:30
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1000 start')

            avProfileH264Aac.videoFrameRate = 30

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1100
            * @tc.name      : 11.AVRecorder recording videoFrameRate:60
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1100 start')

            avProfileH264Aac.videoFrameRate = 60

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264Aac, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1200
            * @tc.name      : 12.AVRecorder Record MPEG4
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1200 start')
            
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264.url = fdPath
            avVideoRecorderTestBase.avRecorderWithPromise2(avConfigH264, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_H264_1200 end')
        })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0100
        //     * @tc.name      : 01.AVRecorder Record H264+AAC
        //     * @tc.desc      : Recorder video (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Function test
        //     * @tc.level     : Level2
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0100', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0100 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfigH264Aac.url = fdPath;
        //
        //     let mySteps = new Array(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start recorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         // pause recorder
        //         PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
        //         // resume recorder
        //         STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
        //         // stop recorder
        //         STOPRECORDER_EVENT, STOPCAMERA_EVENT,
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0100 end')
        // })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0200
            * @tc.name      : 02.AVRecorder recording(audioBitrate 8000,audioSampleRate 8000,videoBitrateRange 280000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0200 start')

            avProfileH264Aac.audioBitrate = 8000
            avProfileH264Aac.audioSampleRate = 8000
            avProfileH264Aac.videoBitrate = 280000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0200 end')
        })
        
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0300
            * @tc.name      : 03.AVRecorder recording(audioBitrate 16000,audioSampleRate 32000,videoBitrateRange 560000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0300 start')

            avProfileH264Aac.audioBitrate = 16000
            avProfileH264Aac.audioSampleRate = 32000
            avProfileH264Aac.videoBitrate = 560000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0400
            * @tc.name      : 04.AVRecorder recording(audioBitrate 32000,audioSampleRate 44100,videoBitrateRange 1120000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0400 start')

            avProfileH264Aac.audioBitrate = 32000
            avProfileH264Aac.audioSampleRate = 44100
            avProfileH264Aac.videoBitrate = 1120000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0500
            * @tc.name      : 05.AVRecorder recording(audioBitrate 112000,audioSampleRate 96000,videoBitrateRange 2240000)
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0500 start')

            avProfileH264Aac.audioBitrate = 112000
            avProfileH264Aac.audioSampleRate = 96000
            avProfileH264Aac.videoBitrate = 2240000

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0600
            * @tc.name      : 06.AVRecorder recording orientationHint:90
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0600 start')

            avConfigH264Aac.orientationHint = 90

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0700
            * @tc.name      : 07.AVRecorder recording orientationHint:180
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0700 start')

            avConfigH264Aac.orientationHint = 180

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0800
            * @tc.name      : 08.AVRecorder recording orientationHint:270
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0800 start')

            avConfigH264Aac.orientationHint = 270

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0800 end')
        })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0900
        //     * @tc.name      : 09.AVRecorder recording videoFrameRate:5
        //     * @tc.desc      : Recorder video (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Function test
        //     * @tc.level     : Level2
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0900', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0900 start')
        //
        //     avProfileH264Aac.videoFrameRate = 5
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfigH264Aac.url = fdPath;
        //
        //     let mySteps = new Array(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start recorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         // pause recorder
        //         PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
        //         // resume recorder
        //         STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
        //         // stop recorder
        //         STOPRECORDER_EVENT, STOPCAMERA_EVENT,
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_0900 end')
        // })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1000
            * @tc.name      : 10.AVRecorder recording videoFrameRate:30
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1000 start')

            avProfileH264Aac.videoFrameRate = 30

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1100
            * @tc.name      : 11.AVRecorder recording videoFrameRate:60
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1100 start')

            avProfileH264Aac.videoFrameRate = 60

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264Aac.url = fdPath;

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264Aac, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1200
            * @tc.name      : 12.AVRecorder Record MPEG4
            * @tc.desc      : Recorder video
            * @tc.size      : MediumTest
            * @tc.type      : Function test
            * @tc.level     : Level2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1200 start')
            
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfigH264.url = fdPath

            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start recorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause recorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // resume recorder
                STARTCAMERA_EVENT, RESUMERECORDER_EVENT,
                // stop recorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );

            eventEmitter.emit(mySteps[0], avRecorder, avConfigH264, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_H264_1200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0100
            * @tc.name      : 01.prepare->start>reset
            * @tc.desc      : Recorder video stability test
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0100 start')

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromiseStability1(avConfig, avRecorder, RECORDER_TIME, done);
            
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0100 end')
        })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0200
        //     * @tc.name      : 02.create->prepare->start->reset->release
        //     * @tc.desc      : Recorder video stability test (test fault)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0200', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0200 start')
        //     
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     avVideoRecorderTestBase.avRecorderWithPromiseStability2(avConfig, avRecorder, RECORDER_TIME, done);
        //
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0200 end')
        // })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0300
        //     * @tc.name      : 03.prepare->start->stop
        //     * @tc.desc      : Recorder video stability test (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0300', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0300 start')
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     avVideoRecorderTestBase.avRecorderWithPromiseStability3(avConfig, avRecorder, RECORDER_TIME, done);
        //     
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0300 end')
        // })
        //
        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0400
        //     * @tc.name      : 04.pause->resume
        //     * @tc.desc      : Recorder video stability test (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0400', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0400 start')
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     avVideoRecorderTestBase.avRecorderWithPromiseStability4(avConfig, avRecorder, RECORDER_TIME, done);
        //     
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0400 end')
        // })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0500
            * @tc.name      : 05.create->release
            * @tc.desc      : Recorder video stability test
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0500 start')

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.avRecorderWithPromiseStability5(avConfig, avRecorder, RECORDER_TIME, done);
            
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0500 end')
        })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0100
        //     * @tc.name      : 01.prepare->start>reset (test failed)
        //     * @tc.desc      : Recorder video stability test
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0100', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0100 start')
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //
        //     let mySteps = new Array(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT
        //     );
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // prepare
        //             PREPARE_EVENT,
        //             // init camera
        //             GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //             // reset recorder
        //             RESETRECORDER_EVENT, STOPCAMERA_EVENT
        //         )
        //     }
        //
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0100 end')
        // })
        //
        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0200
        //     * @tc.name      : 02.create->prepare->start->reset->release
        //     * @tc.desc      : Recorder video stability test (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0200', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0200 start')
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //
        //     let mySteps = new Array();
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // init avRecorder
        //             CREATE_EVENT, SETONCALLBACK_EVENT,
        //             // prepare
        //             PREPARE_EVENT,
        //             // init camera
        //             GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //             // reset recorder
        //             RESETRECORDER_EVENT, STOPCAMERA_EVENT,
        //             // release avRecorder and camera
        //             RELEASECORDER_EVENT, RELEASECAMERA_EVENT
        //         )
        //     }
        //
        //     mySteps.push(END_EVENT);
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0200 end')
        // })
        //
        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0300
        //     * @tc.name      : 03.prepare->start->stop
        //     * @tc.desc      : Recorder video stability test (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0300', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0300 start')
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //
        //     let mySteps = new Array(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT,
        //         // prepare
        //         PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT
        //     );
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //             // stop recorder
        //             STOPRECORDER_EVENT, STOPCAMERA_EVENT
        //         )
        //     }
        //
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0300 end')
        // })
        //
        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0400
        //     * @tc.name      : 04.pause->resume
        //     * @tc.desc      : Recorder video stability test (test failed)
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0400', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0400 start')
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //
        //     let mySteps = new Array(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT,
        //         // prepare
        //         PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start recorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT
        //     );
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // pause recorder
        //             PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
        //             // resume recorder
        //             STARTCAMERA_EVENT, RESUMERECORDER_EVENT
        //         )
        //     }
        //
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0400 end')
        // })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0500
            * @tc.name      : 05.create->release
            * @tc.desc      : Recorder video stability test
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0500 start')

            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;

            let mySteps = new Array();

            for (let i = 0; i < 1000; i++) {
                mySteps.push(
                    // init avRecorder
                    CREATE_EVENT, SETONCALLBACK_EVENT,
                    // release avRecorder
                    RELEASECORDER_EVENT
                )
            }

            mySteps.push(END_EVENT);

            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0500 end')
        })
    })
}


