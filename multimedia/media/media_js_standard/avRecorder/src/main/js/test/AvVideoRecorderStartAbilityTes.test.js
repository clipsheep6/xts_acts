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

import deviceInfo from '@ohos.deviceInfo'
import media from '@ohos.multimedia.media'
import camera from '@ohos.multimedia.camera'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as avRecorderTestBase from '../../../../../AVRecorderTestBase.js';
import * as avVideoRecorderTestBase from '../../../../../AvVideoRecorderTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

export default function avVideoRecorderTestOne() {
    describe('avVideoRecorderTestOne', function () {
        let avRecorder = null;
        let isInitCamera = false;
        const recorderTime = 3000;
        const RECORDER_LONG_TIME = 3600000;
        const LOOP_TIMES = 1000;
        const FORMAT_M4A = media.ContainerFormatType.CFT_MPEG_4A;
        const ENCORDER_AAC = media.CodecMimeType.AUDIO_AAC;
        const ONLYAUDIO_TYPE = 'only_audio';
        let trackArray;
        let fdObject;
        let fdPath;
        let TAG = "[avVideoRecorderTestOne] ";
        let avProfile = {
            audioBitrate : 48000,
            audioChannels : 2,
            audioCodec : media.CodecMimeType.AUDIO_AAC,
            audioSampleRate : 48000,
            fileFormat : media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate : 100000, // 视频比特率
            videoCodec : media.CodecMimeType.VIDEO_MPEG4,
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
            location : { latitude : 30, longitude : 130 },
        }

        let avProfileMpeg = {
            fileFormat: media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate: 100000,
            videoCodec: media.CodecMimeType.VIDEO_MPEG4,
            videoFrameWidth: 640,
            videoFrameHeight: 480,
            videoFrameRate: 30
        }
        let avConfigMpeg = {
            videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile: avProfileMpeg,
            url: 'fd://35',
            rotation: 0,
            location: {
                latitude: 30, longitude: 130
            }
        }
        let avProfileMpegAac = {
            audioBitrate: 48000,
            audioChannels: 2,
            audioCodec: media.CodecMimeType.AUDIO_AAC,
            audioSampleRate: 48000,
            fileFormat: media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate: 100000,
            videoCodec: media.CodecMimeType.VIDEO_MPEG4,
            videoFrameWidth: 640,
            videoFrameHeight: 480,
            videoFrameRate: 30
        }
        let avConfigMpegAac = {
            audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
            videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile: avProfileMpegAac,
            url: 'fd://35',
            rotation: 0,
            location: {
                latitude: 30, longitude: 130
            }
        }
        let avProfileH264 = {
            fileFormat: media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate: 100000,
            videoCodec: media.CodecMimeType.VIDEO_AVC,
            videoFrameWidth: 640,
            videoFrameHeight: 480,
            videoFrameRate: 30
        }
        let avConfigH264 = {
            videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile: avProfileH264,
            url: 'fd://35',
            rotation: 0,
            location: {
                latitude: 30, longitude: 130
            }
        }
        let avProfileH264Aac = {
            audioBitrate: 48000,
            audioChannels: 2,
            audioCodec: media.CodecMimeType.AUDIO_AAC,
            audioSampleRate: 48000,
            fileFormat: media.ContainerFormatType.CFT_MPEG_4,
            videoBitrate: 100000,
            videoCodec: media.CodecMimeType.VIDEO_AVC,
            videoFrameWidth: 640,
            videoFrameHeight: 480,
            videoFrameRate: 30
        }
        let avConfigH264Aac = {
            audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
            videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES,
            profile: avProfileH264Aac,
            url: 'fd://35',
            rotation: 0,
            location: {
                latitude: 30, longitude: 130
            }
        }

        let events = require('events');
        let eventEmitter = new events.EventEmitter();

        const CREATE_CALLBACK_EVENT = 'createCallback';
        const SETONCALLBACK_EVENT = 'setAvRecorderCallback'
        const PREPARE_CALLBACK_EVENT = 'prepareCallback';
        const GETINPUTSURFACE_CALLBACK_EVENT = 'getInputSurfaceCallback';
        const INITCAMERA_EVENT = 'initCamera';
        const STARTCAMERA_EVENT = 'startCameraOutput';
        const STOPCAMERA_EVENT = 'stopCameraOutput';
        const STARTRECORDER_CALLBACK_EVENT = 'startCallback';
        const PAUSERECORDER_CALLBACK_EVENT = 'pauseCallback';
        const RESUMERECORDER_CALLBACK_EVENT = 'resumeCallback';
        const STOPRECORDER_CALLBACK_EVENT = 'stopCallback';
        const RESETRECORDER_CALLBACK_EVENT = 'resetCallback';
        const RELEASECORDER_CALLBACK_EVENT = 'releaseCallback';
        const RELEASECAMERA_EVENT = 'releaseCamera';
        const END_EVENT = 'end';

        const CREATE_PROMISE_EVENT = 'createPromise';
        const PREPARE_PROMISE_EVENT = 'preparePromise';
        const GETINPUTSURFACE_PROMISE_EVENT = 'getInputSurfacePromise';
        const STARTRECORDER_PROMISE_EVENT = 'startPromise';
        const PAUSERECORDER_PROMISE_EVENT = 'pausePromise';
        const RESUMERECORDER_PROMISE_EVENT = 'resumePromise';
        const STOPRECORDER_PROMISE_EVENT = 'stopPromise';
        const RESETRECORDER_PROMISE_EVENT = 'resetPromise';
        const RELEASECORDER_PROMISE_EVENT = 'releasePromise';

        let cameraManager;
        let videoOutput;
        let captureSession;
        let cameraInput;
        let previewOutput;
        let cameraOutputCap;
        let videoSurfaceId = null;

        beforeAll(async function () {
            console.info('beforeAll in1');
            if (deviceInfo.deviceType === 'default') {
                avConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
                console.info(TAG + 'rk3568 avConfig.videoSourceType is :' + avConfig.videoSourceType)
            } else {
                avConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
                console.info(TAG + 'rk3568 avConfig.videoSourceType is :' + avConfig.videoSourceType)
            }
            let permissionName1 = 'ohos.permission.MICROPHONE';
            let permissionName2 = 'ohos.permission.MEDIA_LOCATION';
            let permissionName3 = 'ohos.permission.READ_MEDIA';
            let permissionName4 = 'ohos.permission.WRITE_MEDIA';
            let permissionName5 = 'ohos.permission.CAMERA';
            let permissionNames = [permissionName1, permissionName2, permissionName3, permissionName4, permissionName5];
            await mediaTestBase.getPermission(permissionNames);
            await mediaTestBase.msleepAsync(3000);
            await mediaTestBase.driveFn(4)
            console.info('beforeAll out');
        })

        beforeEach(async function () {
            console.info('beforeEach case');
            await avRecorderTestBase.sleep(1000);
        })

        afterEach(async function () {
            isInitCamera = false
            console.info('afterEach case');
            if (avRecorder != null) {
                avRecorder.release().then(() => {
                    console.info(TAG + 'this testCase execution completed')
                }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            }
            await mediaTestBase.closeFd(fdObject.fileAsset, fdObject.fdNumber);
            await avRecorderTestBase.sleep(1000);
        })

        afterAll(function () {
            // mediaTestBase.closeFd(fdObject.fileAsset, fdObject.fdNumber);
            console.info('afterAll case');
        })

        async function initCamera(avRecorder, avConfig, recorderTime, steps, done) {
            console.info('initCamera 001');
            // 创建CameraManager对象
            let context = globalThis.contextVideo;
            console.info('initCamera 002');
            cameraManager = camera.getCameraManager(context)
            console.info('initCamera 003');
            if (!cameraManager) {
                console.error("camera.getCameraManager error")
                return;
            }
            console.info('initCamera 004');
            console.info('initCamera 005');
            // 获取相机列表
            let cameras = cameraManager.getSupportedCameras();
            let cameraDevice = cameras[0];
            console.info('initCamera 006');
            // 查询相机设备在模式下支持的输出能力
            let cameraOutputCapability = cameraManager.getSupportedOutputCapability(cameraDevice);
            console.info('initCamera 007');
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
                isInitCamera = true
                console.log('captureSession start success.');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            })
        }

        function toNextStep(avRecorder, avConfig, recorderTime, steps, done) {
            if (steps[0] == END_EVENT) {
                console.info('case success!!');
                done();
            } else {
                eventEmitter.emit(steps[0], avRecorder, avConfig, recorderTime, steps, done);
            }
        }

        function setAvRecorderCallback(avRecorder, done) {
            // 状态机变化回调函数
            avRecorder.on('stateChange', (state, reason) => {
                console.info(TAG + 'current state is: ' + state);
            })
            // 错误上报回调函数
            avRecorder.on('error', async (err) => {
                try {
                    console.error(TAG + 'error ocConstantSourceNode, error message is ' + err);
                    await releaseRecorderPromise(avRecorder, done);
                } catch (error) {
                    // 处理错误
                    console.error(TAG + 'when error on execute releaseRecorderPromise error message is ' + error);
                }
            });
        }

        async function releaseRecorderPromise(avRecorder, done) {
            await avRecorderTestBase.releasePromise(avRecorder)
            if(isInitCamera == true){
                releaseCameraError(avRecorder, done)
            }else{
                done();
            }
        }

        eventEmitter.on(CREATE_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            media.createAVRecorder((error, recorder) => {
                if (recorder != null) {
                    avRecorder = recorder;
                    expect(avRecorder.state).assertEqual('idle');
                    console.info('createAVRecorder idleCallback success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }  else {
                    console.info(`createAVRecorder idleCallback fail, error:${error}`);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            });
        });

        eventEmitter.on(CREATE_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            media.createAVRecorder().then((recorder) => {
                if (recorder != null) {
                    avRecorder = recorder;
                    console.info('createAVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('createAVRecorder fail');
                }
            }).catch((error) => {
                console.info(`createAVRecorder catchCallback, error:${error}`);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            });
        });

        eventEmitter.on(SETONCALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                setAvRecorderCallback(avRecorder, done)
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }catch(error){
                console.info('setAvRecorderCallback failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(PREPARE_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
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
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(PREPARE_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.prepare(avConfig).then(() => {
                expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.PREPARED);
                console.info('prepare success');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }).catch((err) => {
                console.info('prepare failed and catch error is ' + err.message);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            });
        });

        eventEmitter.on(GETINPUTSURFACE_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.getInputSurface((err, surfaceId) => {
                if (err == null) {
                    console.info('getInputSurface success');
                    videoSurfaceId = surfaceId;
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }  else {
                    console.info('getInputSurface failed and error is ' + err.message);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            });
        });

        eventEmitter.on(GETINPUTSURFACE_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.getInputSurface().then((surfaceId) => {
                console.info('getInputSurface success');
                videoSurfaceId = surfaceId;
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }).catch((err) => {
                console.info('getInputSurface failed and catch error is ' + err.message);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
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
                startCameraOutput(avRecorder, avConfig, recorderTime, steps, done)
            }catch(error){
                console.info('startCameraOutput failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(STOPCAMERA_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                stopCameraOutput(avRecorder, avConfig, recorderTime, steps, done)
            }catch(error){
                console.info('stopCameraOutput failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(STARTRECORDER_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.start((err) => {
                console.info('case start called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.STARTED);
                    console.info('start AVRecorder success');
                    setTimeout(() => {
                        console.info('STARTRECORDER_CALLBACK_EVENT setTimeout success');
                        toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                    }, recorderTime);
                } else {
                    console.info('start AVRecorder failed and error is ' + err.message);
                }
            })
        });

        eventEmitter.on(STARTRECORDER_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.start().then(() => {
                expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.STARTED);
                console.info('start success');
                setTimeout(() => {
                    console.info('STARTRECORDER_PROMISE_EVENT setTimeout success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }, recorderTime);
            }).catch((err) => {
                console.info('start failed and catch error is ' + err.message);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            });
        });

        eventEmitter.on(PAUSERECORDER_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.pause((err) => {
                console.info('case pause called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.PAUSED);
                    console.info('pause AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('pause AVRecorder failed and error is ' + err.message);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(PAUSERECORDER_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.pause().then(() => {
                expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.PAUSED);
                console.info('pause AVRecorder success');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }).catch((err) => {
                console.info('pause failed and catch error is ' + err.message);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            });
        });

        eventEmitter.on(RESUMERECORDER_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let resumeValue = true;
            avRecorder.resume((err) => {
                console.info('case resume called');
                if (err == null) {
                    console.info('resume AVRecorder success');
                    expect(resumeValue).assertEqual(true);
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

        eventEmitter.on(RESUMERECORDER_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let resumeValue = true;
            avRecorder.resume().then(() => {
                console.info('resume success');
                expect(resumeValue).assertEqual(true);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }).catch((err) => {
                resumeValue = false
                console.info('resume AVRecorder failed and error is ' + err.message);
                console.info('resumeValue is ' + resumeValue);
                expect(resumeValue).assertEqual(false);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            });
        });

        eventEmitter.on(STOPRECORDER_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let stopValue = true;
            avRecorder.stop((err) => {
                console.info('case stop called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.STOPPED);
                    console.info('stop AVRecorder success');
                    expect(stopValue).assertEqual(true);
                    setTimeout(() => {
                        console.info('STOPRECORDER_CALLBACK_EVENT setTimeout success');
                        toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                    }, 500);
                } else {
                    stopValue = false
                    console.info('stop AVRecorder failed and error is ' + err.message);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(STOPRECORDER_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let stopValue = true;
            avRecorder.stop((err) => {
                console.info('case stop called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.STOPPED);
                    console.info('stop AVRecorder success');
                    expect(stopValue).assertEqual(true);
                    setTimeout(() => {
                        console.info('STOPRECORDER_PROMISE_EVENT setTimeout success');
                        toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                    }, 500);
                } else {
                    stopValue = false
                    console.info('stop AVRecorder failed and error is ' + err.message);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(RESETRECORDER_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.reset((err) => {
                console.info('case reset called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.IDLE);
                    console.info('reset AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('reset AVRecorder failed and error is ' + err.message);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(RESETRECORDER_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.reset().then(() => {
                expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.IDLE);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }).catch((err) => {
                console.info('reset AVRecorder failed and catch error is ' + err.message);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            });
        });

        eventEmitter.on(RELEASECORDER_CALLBACK_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
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

        eventEmitter.on(RELEASECORDER_PROMISE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.release().then(() => {
                expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.RELEASED);
                console.info('release AVRecorder success');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }).catch((err) => {
                console.info('release AVRecorder failed and catch error is ' + err.message);
            });
        });

        async function startCameraOutput(avRecorder, avConfig, recorderTime, steps, done) {
            console.info('startCameraOutput start')
            await videoOutput.start(async (err) => {
                if (err) {
                    console.error(`Failed to start the video output ${err.message}`);
                    return;
                }
                console.log('Callback invoked to indicate the video output start success.');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            });
        }

        async function stopCameraOutput(avRecorder, avConfig, recorderTime, steps, done) {
            await videoOutput.stop((err) => {
                if (err) {
                    console.error(`Failed to stop the video output ${err.message}`);
                    return;
                }
                console.log('Callback invoked to indicate the video output stop success.');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
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

        async function releaseCameraError(avRecorder, done) {
            try{
                await captureSession.stop()
                console.info('releaseCameraError 001');
                console.info('captureSession.stop success');
                await cameraInput.close()
                console.info('releaseCameraError 002');
                console.info('cameraInput.close success');
                await previewOutput.release()
                console.info('releaseCameraError 003');
                console.info('previewOutput.release success');
                await videoOutput.release()
                console.info('releaseCameraError 004');
                console.info('videoOutput.release success');
                await captureSession.release()
                console.info('releaseCameraError 005');
                console.info('captureSession.release success');
                captureSession = null
                console.info('releaseCameraError success');
                done();
            } catch(err){
                console.info('releaseCameraError failed and catch error is ' + err.message);
                done();
            }
        }

        async function releaseCamera(avRecorder, avConfig, recorderTime, steps, done) {
            try{
                await captureSession.stop()
                console.info('releaseCamera 001');
                console.info('captureSession.stop success');
                await cameraInput.close()
                console.info('releaseCamera 002');
                console.info('cameraInput.close success');
                await previewOutput.release()
                console.info('releaseCamera 003');
                console.info('previewOutput.release success');
                await videoOutput.release()
                console.info('releaseCamera 004');
                console.info('videoOutput.release success');
                await captureSession.release()
                console.info('releaseCamera 005');
                console.info('captureSession.release success');
                captureSession = null
                console.info('releaseCamera success');
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            } catch(err){
                console.info('releaseCamera failed and catch error is ' + err.message);
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }
        }

        // stability test  Promise
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0100
            * @tc.name      : 01.AVRecorder.prepare(promise)
            * @tc.desc      : 1. createAVRecorder 2. prepare 2. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let loopTimes = 1000;
            let mySteps = new Array(
                // setAvRecorderCallback
                CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT
            );
            for (let i = 0; i < loopTimes; i++)
            {
                mySteps.push(
                    // AVRecorderTestBase.preparePromise
                    PREPARE_PROMISE_EVENT,
                    // AVRecorderTestBase.resetPromise
                    RESETRECORDER_PROMISE_EVENT
                )
            }
            mySteps.push(
                // AVRecorderTestBase.releasePromise
                RELEASECORDER_PROMISE_EVENT,
                // end
                END_EVENT
            )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            // avVideoRecorderTestBase.prepare1000TimesPromise(avRecorder, avConfig, done)
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0200
            * @tc.name      : 01.AVRecorder.start(promise)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 3. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            let loopTimes = 1000;
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // setAvRecorderCallback
                CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT,
                // AVRecorderTestBase.preparePromise
                PREPARE_PROMISE_EVENT,
                // getInputSurfacePromise
                GETINPUTSURFACE_PROMISE_EVENT,
                // initCamera
                INITCAMERA_EVENT,
                //? startCameraOutput
                STARTCAMERA_EVENT
            );
            for (let i = 0; i < loopTimes; i++)
            {
                mySteps.push(
                    //? AVRecorderTestBase.startPromise
                    STARTRECORDER_PROMISE_EVENT,
                    // AVRecorderTestBase.resetPromise
                    RESETRECORDER_PROMISE_EVENT,
                    // AVRecorderTestBase.preparePromise
                    PREPARE_PROMISE_EVENT,
                    // getInputSurfacePromise
                    GETINPUTSURFACE_PROMISE_EVENT
                )
            }
            mySteps.push(
                // releaseRecorderPromise
                RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            // avVideoRecorderTestBase.start1000TimesPromise(avRecorder, avConfig, recorderTime, done)
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0200 end')
        })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0300
        //     * @tc.name      : 01.AVRecorder.pause(promise)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. pause 4. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0300', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0300 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     let mySteps = new Array(
        //         // setAvRecorderCallback
        //         CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT,
        //         // AVRecorderTestBase.preparePromise
        //         PREPARE_PROMISE_EVENT,
        //         // getInputSurfacePromise
        //         GETINPUTSURFACE_PROMISE_EVENT,
        //         // initCamera
        //         INITCAMERA_EVENT,
        //         // startRecordingProcessPromise
        //         STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT,
        //     );
        //     for (let i = 0; i < loopTimes; i++)
        //     {
        //         mySteps.push(
        //             // AVRecorderTestBase.pausePromise
        //             PAUSERECORDER_PROMISE_EVENT,
        //             //? AVRecorderTestBase.resumePromise
        //             RESUMERECORDER_PROMISE_EVENT
        //         )
        //     }
        //     mySteps.push(
        //         // releaseRecorderPromise
        //         RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     )
        //
        //     // avVideoRecorderTestBase.pause1000TimesPromise(avRecorder, avConfig, recorderTime, done)
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0300 end')
        // })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400
            * @tc.name      : 01.AVRecorder.resume(promise)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. pause 5. resume 5. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
             let mySteps = new Array(
                     // setAvRecorderCallback
                     CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT,
                     // AVRecorderTestBase.preparePromise
                     PREPARE_PROMISE_EVENT,
                     // getInputSurfacePromise
                     GETINPUTSURFACE_PROMISE_EVENT,
                     // initCamera
                     INITCAMERA_EVENT,
                     // startRecordingProcessPromise
                     STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT,
                 );
                 for (let i = 0; i < loopTimes; i++)
                 {
                     mySteps.push(
                         //? AVRecorderTestBase.resumePromise
                         RESUMERECORDER_PROMISE_EVENT,
                         // AVRecorderTestBase.pausePromise
                         PAUSERECORDER_PROMISE_EVENT
                     )
                 }
                 mySteps.push(
                     // releaseRecorderPromise
                     RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
                     // end
                     END_EVENT
                 )
             eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
             console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400 end')
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0500
           * @tc.name      : 01.AVRecorder.stop(promise)
           * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. stop 5. 执行1000次
           * @tc.size      : MediumTest
           * @tc.type      : Stability test
           * @tc.level     : Level 4
       */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            let loopTimes = 1000;
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // setAvRecorderCallback
                CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT,
                // AVRecorderTestBase.preparePromise
                PREPARE_PROMISE_EVENT,
                // getInputSurfacePromise
                GETINPUTSURFACE_PROMISE_EVENT,
                // initCamera
                INITCAMERA_EVENT,
                // startRecordingProcessPromise
                STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT,
            );
            for (let i = 0; i < loopTimes; i++)
            {
                mySteps.push(
                    // AVRecorderTestBase.stopPromise
                    STOPRECORDER_PROMISE_EVENT,
                    // AVRecorderTestBase.preparePromise
                    PREPARE_PROMISE_EVENT,
                    //? AVRecorderTestBase.startPromise
                    STARTRECORDER_PROMISE_EVENT
                )
            }
            mySteps.push(
                // releaseRecorderPromise
                RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0500 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600
            * @tc.name      : 01.AVRecorder.reset(promise)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. reset 5. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.reset1000TimesPromise(avRecorder, avConfig, recorderTime, done)
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700
            * @tc.name      : 01.AVRecorder.release(promise)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. release 5. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.release1000TimesPromise(avRecorder, avConfig, recorderTime, done)
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700 end')
        })

        // stability test Callback
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0100
            * @tc.name      : 01.AVRecorder.prepare(callback)
            * @tc.desc      : 1. createAVRecorder 2. prepare 2. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array();
            mySteps.push(
                // init avRecorder
                CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT
            )
            for (let i = 0; i < 1000; i++) {
                mySteps.push(
                    PREPARE_CALLBACK_EVENT, GETINPUTSURFACE_CALLBACK_EVENT, RESETRECORDER_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // release avRecorder
                RELEASECORDER_CALLBACK_EVENT,
                // end
                END_EVENT
            )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200
            * @tc.name      : 01.AVRecorder.start(callback)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 3. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array();
            mySteps.push(
                // init avRecorder
                CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT, PREPARE_CALLBACK_EVENT,
                // init camera
                GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
                // reset
                RESETRECORDER_CALLBACK_EVENT, PREPARE_CALLBACK_EVENT, GETINPUTSURFACE_CALLBACK_EVENT,
                )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // start avRecorder
                    STARTRECORDER_CALLBACK_EVENT,
                    // reset
                    RESETRECORDER_CALLBACK_EVENT, PREPARE_CALLBACK_EVENT, GETINPUTSURFACE_CALLBACK_EVENT,
                )
            }
            mySteps.push(
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
                )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0300
            * @tc.name      : 01.AVRecorder.pause(callback)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. pause 4. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array();
            mySteps.push(
                // init avRecorder
                CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT, PREPARE_CALLBACK_EVENT,
                // init camera
                GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
                // pause avRecorder
                PAUSERECORDER_CALLBACK_EVENT,
                // resume avRecorder
                RESUMERECORDER_CALLBACK_EVENT
            )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // pause avRecorder
                    PAUSERECORDER_CALLBACK_EVENT,
                    // resume avRecorder
                    RESUMERECORDER_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0300 end')
        })

        /* *
           * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0400
           * @tc.name      : 01.AVRecorder.resume(callback)
           * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. pause 5. resume 5. 执行1000次
           * @tc.size      : MediumTest
           * @tc.type      : Stability test
           * @tc.level     : Level 4
       */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array();
            mySteps.push(
                // init avRecorder
                CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT, PREPARE_CALLBACK_EVENT,
                // init camera
                GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
                // pause avRecorder
                PAUSERECORDER_CALLBACK_EVENT,
                // resume avRecorder
                RESUMERECORDER_CALLBACK_EVENT
            )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // pause avRecorder
                    PAUSERECORDER_CALLBACK_EVENT,
                    // resume avRecorder
                    RESUMERECORDER_CALLBACK_EVENT
                )
            }
            mySteps.push(
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0400 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500
            * @tc.name      : 01.AVRecorder.stop(callback)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. stop 5. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array();
            mySteps.push(
                // init avRecorder
                CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT, PREPARE_CALLBACK_EVENT,
                // init camera
                GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
                // stop avRecorder
                STOPRECORDER_CALLBACK_EVENT,
                // prepare avRecorder
                PREPARE_CALLBACK_EVENT, GETINPUTSURFACE_CALLBACK_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT,
                )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // stop avRecorder
                    STOPRECORDER_CALLBACK_EVENT,
                    // prepare avRecorder
                    PREPARE_CALLBACK_EVENT, GETINPUTSURFACE_CALLBACK_EVENT,
                    // start avRecorder
                    STARTCAMERA_EVENT,
                )
            }
            mySteps.push(
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
                )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600
            * @tc.name      : 01.AVRecorder.reset(callback)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. reset 5. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array();
            mySteps.push(
                // init avRecorder
                CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT, PREPARE_CALLBACK_EVENT,
                // init camera
                GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
                // reset avRecorder
                RESETRECORDER_CALLBACK_EVENT,
                // prepare avRecorder
                PREPARE_CALLBACK_EVENT, GETINPUTSURFACE_CALLBACK_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT,
                )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // reset avRecorder
                    RESETRECORDER_CALLBACK_EVENT,
                    // prepare avRecorder
                    PREPARE_CALLBACK_EVENT, GETINPUTSURFACE_CALLBACK_EVENT,
                    // start avRecorder
                    STARTCAMERA_EVENT,
                )
            }
            mySteps.push(
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
                )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700
            * @tc.name      : 01.AVRecorder.release(callback)
            * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. release 5. 执行1000次
            * @tc.size      : MediumTest
            * @tc.type      : Stability test
            * @tc.level     : Level 4
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array();
            mySteps.push(
                // init avRecorder
                CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT, PREPARE_CALLBACK_EVENT,
                // init camera
                GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
                )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // release avRecorder and camera
                    RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
                    // init avRecorder
                    CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT, PREPARE_CALLBACK_EVENT,
                    // init camera
                    GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
                    // start avRecorder
                    STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
                )
            }
            mySteps.push(
                // release avRecorder and camera
                RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
                )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700 end')
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
            let mySteps = new Array();

            for (let i = 0; i < 1000; i++) {
                mySteps.push(
                    // init avRecorder
                    CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT, PREPARE_PROMISE_EVENT,
                    // init camera
                    GETINPUTSURFACE_PROMISE_EVENT, INITCAMERA_EVENT,
                    // start recorder
                    STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT,
                    // reset avRecorder
                    RESETRECORDER_PROMISE_EVENT, STOPCAMERA_EVENT
                )
            }
            mySteps.push(
                // release avRecorder and camera
                RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0100 end')
        })

        /* *
        * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0200
        * @tc.name      : 02.create->prepare->start->reset->release
        * @tc.desc      : Recorder video stability test (test fault)
        * @tc.size      : MediumTest
        * @tc.type      : Stability test
        * @tc.level     : Level4
    */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0200', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0200 start')
        //
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     let mySteps = new Array();
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // init avRecorder
        //             CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT,PREPARE_PROMISE_EVENT,
        //             // init camera
        //             GETINPUTSURFACE_PROMISE_EVENT, INITCAMERA_EVENT,
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT,
        //             // reset avRecorder
        //             RESETRECORDER_PROMISE_EVENT,STOPCAMERA_EVENT,
        //             // release avRecorder and camera
        //             RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
        //
        //         )
        //     }
        //     mySteps.push(END_EVENT);
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
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
        //     let mySteps = new Array();
        //     mySteps.push(
        //         // init avRecorder
        //         CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT,PREPARE_PROMISE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_PROMISE_EVENT, INITCAMERA_EVENT
        //     )
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT,
        //             // stop avRecorder
        //             STOPRECORDER_PROMISE_EVENT, STOPCAMERA_EVENT,
        //         )
        //     }
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     )
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_PROMISE_0300 end')
        // })

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
        //     let mySteps = new Array();
        //     mySteps.push(
        //         // init avRecorder
        //         CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT,PREPARE_PROMISE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_PROMISE_EVENT, INITCAMERA_EVENT,
        //         // start recorder
        //         STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT
        //     )
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // stop avRecorder
        //             STOPRECORDER_PROMISE_EVENT, STOPCAMERA_EVENT,
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_PROMISE_EVENT,
        //             // resume recorder
        //             RESUMERECORDER_PROMISE_EVENT
        //         )
        //     }
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     )
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
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
            let mySteps = new Array();
            for (let i = 0; i < 1000; i++) {
                mySteps.push(
                    // init avRecorder
                    CREATE_PROMISE_EVENT, SETONCALLBACK_EVENT, PREPARE_PROMISE_EVENT,
                    // release avRecorder and camera
                    RELEASECORDER_PROMISE_EVENT, RELEASECAMERA_EVENT

                )
            }
            mySteps.push(END_EVENT);
            avVideoRecorderTestBase.avRecorderWithPromiseStability5(avConfig, avRecorder, recorderTime, done);
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
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
        //         CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT
        //     );
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // prepare
        //             PREPARE_CALLBACK_EVENT,
        //             // init camera
        //             GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
        //             // reset recorder
        //             RESETRECORDER_CALLBACK_EVENT, STOPCAMERA_EVENT
        //         )
        //     }
        //
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
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
        //             CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT,
        //             // prepare
        //             PREPARE_CALLBACK_EVENT,
        //             // init camera
        //             GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
        //             // reset recorder
        //             RESETRECORDER_CALLBACK_EVENT, STOPCAMERA_EVENT,
        //             // release avRecorder and camera
        //             RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT
        //         )
        //     }
        //
        //     mySteps.push(END_EVENT);
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
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
        //         CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT,
        //         // prepare
        //         PREPARE_CALLBACK_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT
        //     );
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // start recorder
        //             STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT,
        //             // stop recorder
        //             STOPRECORDER_EVENT, STOPCAMERA_EVENT
        //         )
        //     }
        //
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
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
        //         CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT,
        //         // prepare
        //         PREPARE_CALLBACK_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_CALLBACK_EVENT, INITCAMERA_EVENT,
        //         // start recorder
        //         STARTCAMERA_EVENT, STARTRECORDER_CALLBACK_EVENT
        //     );
        //
        //     for (let i = 0; i < 1000; i++) {
        //         mySteps.push(
        //             // pause recorder
        //             PAUSERECORDER_CALLBACK_EVENT, STOPCAMERA_EVENT,
        //             // resume recorder
        //             STARTCAMERA_EVENT, RESUMERECORDER_CALLBACK_EVENT
        //         )
        //     }
        //
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_CALLBACK_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //     );
        //
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);
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
                    CREATE_CALLBACK_EVENT, SETONCALLBACK_EVENT,
                    // release avRecorder
                    RELEASECORDER_CALLBACK_EVENT
                )
            }

            mySteps.push(END_EVENT);

            eventEmitter.emit(mySteps[0], avRecorder, avConfig, recorderTime, mySteps, done);

            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_STATE_CALLBACK_0500 end')
        })
    })
}
