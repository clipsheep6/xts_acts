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
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as avRecorderTestBase from '../../../../../AVRecorderTestBase.js';
import * as avVideoRecorderTestBase from '../../../../../AvVideoRecorderTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import deviceInfo from '@ohos.deviceInfo'

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

        let cameraManager;
        let videoOutput;
        let captureSession;
        let cameraInput;
        let previewOutput;
        let cameraOutputCap;
        let videoSurfaceId = null;

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
            await mediaTestBase.driveFn(3);
            if (deviceInfo.deviceType === 'default') {
                avConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                avConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
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
            } else {
                avVideoRecorderTestBase.sleep(1000)
                eventEmitter.emit(steps[0], avRecorder, avConfig, recorderTime, steps, done);
            }
        }

        eventEmitter.on(CREATE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
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
            let prepareValue = true;
            avRecorder.prepare(avConfig, (err) => {
                console.info('case prepare called');
                if (err == null) {
                    console.error(`case prepare success, state is ${avRecorder.state}`);
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.PREPARED);
                    console.info('prepare success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }  else {
                    prepareValue = false;
                    console.error(`case prepare error, errMessage is ${err.message}`);
                    console.info('prepareValue is ' + prepareValue);
                    expect(prepareValue).assertEqual(false);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(GETINPUTSURFACE_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let getInputSurfaceValue = true;
            avRecorder.getInputSurface((err, surfaceId) => {
                if (err == null) {
                    console.info('getInputSurface success');
                    videoSurfaceId = surfaceId;
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }  else {
                    getInputSurfaceValue = false;
                    console.info('getInputSurface failed and error is ' + err.message);
                    console.info('getInputSurfaceValue is ' + getInputSurfaceValue);
                    expect(getInputSurfaceValue).assertEqual(false);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
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

        eventEmitter.on(STARTCAMERA_EVENT, async (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                await startCameraOutput()
                avVideoRecorderTestBase.sleep(1000)
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }catch(error){
                console.info('startCameraOutput failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(STOPCAMERA_EVENT, async (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            try{
                console.info('stopCameraOutput begin')
                await stopCameraOutput()
                avVideoRecorderTestBase.sleep(1000)
                console.info('stopCameraOutput begin')
                console.info('stopCameraOutput steps : '+ steps[0])
                toNextStep(avRecorder, avConfig, recorderTime, steps, done);
            }catch(error){
                console.info('stopCameraOutput failed and catch error is ' + error.message);
            }
        });

        eventEmitter.on(STARTRECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let startValue = true;
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
                    startValue = false;
                    console.info('start AVRecorder failed and error is ' + err.message);
                    console.info('startValue is ' + startValue);
                    expect(startValue).assertEqual(false);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(PAUSERECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            let pauseValue = true;
            avRecorder.pause((err) => {
                console.info('case pause called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.PAUSED);
                    console.info('pause AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    pauseValue = false;
                    console.info('pause AVRecorder failed and error is ' + err.message);
                    console.info('pauseValue is ' + pauseValue);
                    expect(pauseValue).assertEqual(false);
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                }
            })
        });

        eventEmitter.on(RESUMERECORDER_EVENT, (avRecorder, avConfig, recorderTime, steps, done) => {
            steps.shift();
            avRecorder.resume((err) => {
                console.info('case resume called');
                if (err == null) {
                    expect(avRecorder.state).assertEqual(avVideoRecorderTestBase.AV_RECORDER_STATE.STARTED);
                    console.info('resume AVRecorder success');
                    toNextStep(avRecorder, avConfig, recorderTime, steps, done);
                } else {
                    console.info('resume AVRecorder failed and error is ' + err.message);
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

        function releaseCamera(avRecorder, avConfig, recorderTime, steps, done) {
            // 停止会话
            captureSession.stop()

            // 释放相机输入流
            cameraInput.close()

            // 释放预览输出流
            previewOutput.release()

            // 释放录像输出流
            videoOutput.release()

            // 释放会话
            captureSession.release()

            // 会话置空
            captureSession = null

            toNextStep(avRecorder, avConfig, recorderTime, steps, done);
        }

        // promise prepare
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
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

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0600
            * @tc.name      : 06. stop->getInputSurface
            * @tc.desc      :1.create 2.prepare 3.getInputSurface 4.start 5.stop 6.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2GetInputSurfacePromise6(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0700
            * @tc.name      : 07. reset->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.reset 6.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2GetInputSurfacePromise7(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0800
            * @tc.name      : 08. getInputSurface 3 times
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.getInputSurface 5.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let loopTimes = 3;
            avVideoRecorderTestBase.getInputSurface3TimesPromise(avConfig, avRecorder, loopTimes, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_PROMISE_0800 end')
        })

        // Promise start 
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0100
            * @tc.name      : 01. create->start
            * @tc.desc      : 1.create 2.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2StartPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0200
            * @tc.name      : 02. prepare->start
            * @tc.desc      : 1.create 2.prepare 4.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.prepare2StartPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0300
            * @tc.name      : 03. pause->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.pause2StartPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0400
            * @tc.name      : 04. resume->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.resume2StartPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0500
            * @tc.name      : 05. stop->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.stop 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.stop2StartPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0600
            * @tc.name      : 06. reset->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.reset 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.reset2StartPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0700
            * @tc.name      : 07. getInputSurface->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.getInputSurface2StartPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0800
            * @tc.name      : 08. start 3 times
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.start 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let loopTimes = 3;
            avVideoRecorderTestBase.start3TimesPromise(avConfig, avRecorder, RECORDER_TIME, loopTimes, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_PROMISE_0800 end')
        })

        // Promise pause
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0100
            * @tc.name      : 01. create->pause
            * @tc.desc      : 1.create 2.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.create2PausePromise(avConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0200
            * @tc.name      : 02. prepare->pause
            * @tc.desc      : 1.create 2.prepare 3.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.prepare2PausePromise(avConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0300
            * @tc.name      : 03. start->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.start2PausePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0400
            * @tc.name      : 04. resume->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.resume2PausePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0500
            * @tc.name      : 05. stop->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.stop 6.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.stop2PausePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0600
            * @tc.name      : 06. reset->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.reset 6.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.reset2PausePromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0700
            * @tc.name      : 07. getInputSurface->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.getInputSurface2PausePromise(avConfig, avRecorder, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0800
            * @tc.name      : 08. pause 3 times
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.pause 7.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let loopTimes = 3;
            avVideoRecorderTestBase.pause3TimesPromise(avConfig, avRecorder, RECORDER_TIME, loopTimes, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_PROMISE_0800 end')
        })

        // 状态切换
        // 01.promise回调方式
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0100
            * @tc.name      : 01.AVRecorder test recording 3 seconds
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2ReleaseWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0200
            * @tc.name      : 02.AVRecorder test recording 3 seconds to pause
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2PauseWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0300
            * @tc.name      : 03.AVRecorder test recording 3 seconds to pause to resume
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2ResumeWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0400
            * @tc.name      : 04.AVRecorder test recording 3 seconds to stop
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.stop 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2StopWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0500
            * @tc.name      : 05.AVRecorder test recording 3 seconds to reset
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.reset 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2ResetWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0600
            * @tc.name      : 06.AVRecorder test stop recording after recording 3 seconds
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.stop 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2Pause2StopWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0700
            * @tc.name      : 07.AVRecorder test reset recording after recording 3 seconds
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.reset 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2Pause2ResetWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0800
            * @tc.name      : 08.AVRecorder test resume recording after pause and stop recording
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.stop 8.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2Resume2WithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0800 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0900
            * @tc.name      : 09.AVRecorder test resume recording after pause and reset recording
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.reset 8.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0900', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0900 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.recordStart2reset2WithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_0900 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1000
            * @tc.name      : 10.AVRecorder test recording 3 seconds (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1000 start')
            let avNewProfile = {
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            avVideoRecorderTestBase.recordStart2ReleaseWithPromise(avNewConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1100
            * @tc.name      : 11.AVRecorder test recording 3 seconds to pause (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1100 start')
            let avNewProfile = {
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            avVideoRecorderTestBase.recordStart2PauseWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1200
            * @tc.name      : 12.AVRecorder test recording 3 seconds to pause to resume (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1200 start')
            let avNewProfile = {
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            avVideoRecorderTestBase.recordStart2ResumeWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1300
            * @tc.name      : 13.AVRecorder test recording 3 seconds to stop (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.stop 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1300 start')
            let avNewProfile = {
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            avVideoRecorderTestBase.recordStart2StopWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1400
            * @tc.name      : 14.AVRecorder test recording 3 seconds to reset (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.reset 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1400 start')
            let avNewProfile = {
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000, // 视频比特率
                videoCodec : media.CodecMimeType.VIDEO_MPEG4, // 视频文件编码格式，支持mpeg4和avc两种格式
                videoFrameWidth : 640,  // 视频分辨率的宽
                videoFrameHeight : 480, // 视频分辨率的高
                videoFrameRate : 30 // 视频帧率
            }
            let avNewConfig = {
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            avVideoRecorderTestBase.recordStart2ResetWithPromise(avConfig, avRecorder, RECORDER_TIME, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_PROMISE_1400 end')
        })

        // 02.callback回调
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0100
            * @tc.name      : 01.AVRecorder test recording 3 seconds
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0200
            * @tc.name      : 02.AVRecorder test recording 3 seconds to pause
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0300
            * @tc.name      : 03.AVRecorder test recording 3 seconds to pause to resume
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0400
            * @tc.name      : 04.AVRecorder test recording 3 seconds to stop
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.stop 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0500
            * @tc.name      : 05.AVRecorder test recording 3 seconds to reset
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.reset 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0600
            * @tc.name      : 06.AVRecorder test stop recording after recording 3 seconds
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.stop 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT, 
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0700
            * @tc.name      : 07.AVRecorder test reset recording after recording 3 seconds
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.reset 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT, STOPCAMERA_EVENT, 
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0800
            * @tc.name      : 08.AVRecorder test resume recording after pause and stop recording
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.stop 8.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT, 
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0800 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0900
            * @tc.name      : 09.AVRecorder test resume recording after pause and reset recording
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.reset 8.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0900', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0900 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT, STOPCAMERA_EVENT, 
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_0900 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1000
            * @tc.name      : 10.AVRecorder test recording 3 seconds (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1000 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1100
            * @tc.name      : 11.AVRecorder test recording 3 seconds to pause (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1200
            * @tc.name      : 12.AVRecorder test recording 3 seconds to pause to resume (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1300
            * @tc.name      : 13.AVRecorder test recording 3 seconds to stop (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.stop 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1400
            * @tc.name      : 14.AVRecorder test recording 3 seconds to reset (only video)
            * @tc.desc      : 1.createAVRecorder 2.prepare 3.getInputSurface 4.start 5.reset 6.release
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_FUNCTION_CALLBACK_1400 end')
        })

        // Callback  prepare
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0100
            * @tc.name      : 01. create->prepare
            * @tc.desc      : 1.create 2.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // release avRecorde
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0200
            * @tc.name      : 02. start->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // prepare avRecorder
                PREPARE_EVENT, 
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0200 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0300
            * @tc.name      : 03. pause->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.pause 5.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pasue avRecorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // prepare avRecorder
                PREPARE_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0300 end')
        })

         /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0400
            * @tc.name      : 04. resume->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.pause 5.resume 6.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pasue avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // prepare avRecorder
                PREPARE_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0500
            * @tc.name      : 05. stop->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.stop 5.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT,
                // prepare avRecorder
                PREPARE_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0600
            * @tc.name      : 06. reset->prepare
            * @tc.desc      : 1.create 2.prepare 3.start 4.reset 5.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT,
                // prepare avRecorder
                PREPARE_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0700
            * @tc.name      : 07. getInputSurface->prepare
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // prepare avRecorder
                PREPARE_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0800
            * @tc.name      : 08. prepare 3 times
            * @tc.desc      : 1.create 2.prepare 3.prepare 4.prepare
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // prepare avRecorder
                PREPARE_EVENT,
                // prepare avRecorder
                PREPARE_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, 
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0800 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0900
            * @tc.name      : 09.audioBitrate -1
            * @tc.desc      : 1.create 2.prepare (audioBitrate -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0900', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0900 start')
            let avNewProfile = {
                audioBitrate : -1,
                audioChannels : 2,
                audioSampleRate : 48000,
                audioCodec : media.CodecMimeType.AUDIO_AAC,
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000,
                videoCodec : media.CodecMimeType.VIDEO_MPEG4,
                videoFrameWidth : 640,
                videoFrameHeight : 480,
                videoFrameRate : 30,
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_0900 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1000
            * @tc.name      : 10.audioSampleRate -1
            * @tc.desc      : 1.create 2.prepare (audioSampleRate -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1000', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1000 start')
            let avNewProfile = {
                audioBitrate : 48000,
                audioChannels : 2,
                audioSampleRate : -1,
                audioCodec : media.CodecMimeType.AUDIO_AAC,
                fileFormat : media.ContainerFormatType.CFT_MPEG_4, // 视频文件封装格式，只支持MP4
                videoBitrate : 100000,
                videoCodec : media.CodecMimeType.VIDEO_MPEG4,
                videoFrameWidth : 640,
                videoFrameHeight : 480,
                videoFrameRate : 30,
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1000 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1100
            * @tc.name      : 11.videoBitrateRange -1
            * @tc.desc      : 1.create 2.prepare (videoBitrateRange -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1100 start')
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
            if (deviceInfo.deviceType === 'default') {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                 avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1200
            * @tc.name      : 12.videoFrameRate -1
            * @tc.desc      : 1.create 2.prepare (videoFrameRate -1)
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1200 start')
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
            if (deviceInfo.deviceType === 'default') {
               avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_ES
            } else {
                avNewConfig.videoSourceType = media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV
            }
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PREPARE_CALLBACK_1200 end')
        })

        // Callback getInputSurface
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0100
            * @tc.name      : 01. create->getInputSurface
            * @tc.desc      : 1.create 2.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, 
                // getInputSurface
                GETINPUTSURFACE_EVENT, 
                // release avRecorder 
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0200
            * @tc.name      : 02. prepare->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0300
            * @tc.name      : 03. start->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0400
            * @tc.name      : 04. pause->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0500
            * @tc.name      : 05. resume->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0600
            * @tc.name      : 06. stop->getInputSurface
            * @tc.desc      :1.create 2.prepare 3.getInputSurface 4.start 5.stop 6.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0700
            * @tc.name      : 07. reset->getInputSurface
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.reset 6.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0800
            * @tc.name      : 08. getInputSurface 3 times
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.getInputSurface 5.getInputSurface
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // getInputSurface
                GETINPUTSURFACE_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_GETSURFACE_CALLBACK_0800 end')
        })

        // Callback start 
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0100
            * @tc.name      : 01. create->start
            * @tc.desc      : 1.create 2.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0200
            * @tc.name      : 02. prepare->start
            * @tc.desc      : 1.create 2.prepare 4.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0300
            * @tc.name      : 03. pause->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0400
            * @tc.name      : 04. resume->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0500
            * @tc.name      : 05. stop->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.stop 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0600
            * @tc.name      : 06. reset->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.reset 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0700
            * @tc.name      : 07. getInputSurface->start
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0800
            * @tc.name      : 08. start 3 times
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.start 6.start
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // start avRecorder
                STARTRECORDER_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_START_CALLBACK_0800 end')
        })

        // Callback pause
        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0100
            * @tc.name      : 01. create->pause
            * @tc.desc      : 1.create 2.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0100', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0100 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, 
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0100 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0200
            * @tc.name      : 02. prepare->pause
            * @tc.desc      : 1.create 2.prepare 3.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0200', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0200 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0200 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0300
            * @tc.name      : 03. start->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0300', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0300 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0300 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0400
            * @tc.name      : 04. resume->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.resume 7.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0400', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0400 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0400 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0500
            * @tc.name      : 05. stop->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.stop 6.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0500', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0500 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // stop avRecorder
                STOPRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0500 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0600
            * @tc.name      : 06. reset->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.reset 6.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0600', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0600 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0600 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0700
            * @tc.name      : 07. getInputSurface->pause
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0700', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0700 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // reset avRecorder
                RESETRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT, STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0700 end')
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0800
            * @tc.name      : 08. pause 3 times
            * @tc.desc      : 1.create 2.prepare 3.getInputSurface 4.start 5.pause 6.pause 7.pause
            * @tc.size      : MediumTest
            * @tc.type      : Function
            * @tc.level     : Level 2
        */
         it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0800', 0, async function (done) {
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0800 start')
            let fileName = avVideoRecorderTestBase.resourceName()
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            let mySteps = new Array(
                // init avRecorder
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
            );
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_PAUSE_CALLBACK_0800 end')
        })

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
            avVideoRecorderTestBase.prepare1000TimesPromise(avRecorder, avConfig, done)
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
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.start1000TimesPromise(avRecorder, avConfig, RECORDER_TIME, done)
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
        //     avVideoRecorderTestBase.pause1000TimesPromise(avRecorder, avConfig, RECORDER_TIME, done)
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0300 end')
        // })

        //  /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400
        //     * @tc.name      : 01.AVRecorder.resume(promise)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. pause 5. resume 5. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        //  it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     avVideoRecorderTestBase.resume1000TimesPromise(avRecorder, avConfig, RECORDER_TIME, done)
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0400 end')
        // })

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
            fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
            fdPath = "fd://" + fdObject.fdNumber;
            avConfig.url = fdPath;
            avVideoRecorderTestBase.stop1000TimesPromise(avRecorder, avConfig, RECORDER_TIME, done)
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0500 end')
        })

        //  /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600
        //     * @tc.name      : 01.AVRecorder.reset(promise)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. reset 5. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        //  it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     avVideoRecorderTestBase.reset1000TimesPromise(avRecorder, avConfig, RECORDER_TIME, done)
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0600 end')
        // })

        //  /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700
        //     * @tc.name      : 01.AVRecorder.release(promise)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. release 5. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        //  it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     avVideoRecorderTestBase.release1000TimesPromise(avRecorder, avConfig, RECORDER_TIME, done)
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_PROMISE_0700 end')
        // })

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
                CREATE_EVENT, SETONCALLBACK_EVENT,
                )
            for (let i = 0; i < 1000; i++) {
                mySteps.push(
                    PREPARE_EVENT, GETINPUTSURFACE_EVENT, RESETRECORDER_EVENT,
                )
            }
            mySteps.push(
                // release avRecorder
                RELEASECORDER_EVENT,
                // end
                END_EVENT
                )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0100 end')
        })

        // /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200
        //     * @tc.name      : 01.AVRecorder.start(callback)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 3. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        // it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     let mySteps = new Array();
        //     mySteps.push(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start avRecorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         // reset
        //         RESETRECORDER_EVENT, PREPARE_EVENT, GETINPUTSURFACE_EVENT,
        //         )
        //     for (let i = 0; i < 999; i++) {
        //         mySteps.push(
        //             // start avRecorder
        //             STARTRECORDER_EVENT,
        //             // reset
        //             RESETRECORDER_EVENT, PREPARE_EVENT, GETINPUTSURFACE_EVENT,
        //         )
        //     }
        //     mySteps.push(
        //         // stop camera
        //         STOPCAMERA_EVENT,
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //         )
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0200 end')
        // })

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
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // pause avRecorder
                    PAUSERECORDER_EVENT,
                    // resume avRecorder
                    RESUMERECORDER_EVENT,
                )
            }
            mySteps.push(
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
                )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
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
                CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
                // init camera
                GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
                // start avRecorder
                STARTCAMERA_EVENT, STARTRECORDER_EVENT,
                // pause avRecorder
                PAUSERECORDER_EVENT,
                // resume avRecorder
                RESUMERECORDER_EVENT,
                )
            for (let i = 0; i < 999; i++) {
                mySteps.push(
                    // pause avRecorder
                    PAUSERECORDER_EVENT,
                    // resume avRecorder
                    RESUMERECORDER_EVENT,
                )
            }
            mySteps.push(
                // stop camera
                STOPCAMERA_EVENT,
                // release avRecorder and camera
                RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
                // end
                END_EVENT
                )
            eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
            console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0400 end')
        })

        //  /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500
        //     * @tc.name      : 01.AVRecorder.stop(callback)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. stop 5. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        //  it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     let mySteps = new Array();
        //     mySteps.push(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start avRecorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         // stop avRecorder
        //         STOPRECORDER_EVENT,
        //         // prepare avRecorder
        //         PREPARE_EVENT, GETINPUTSURFACE_EVENT,
        //         // start avRecorder
        //         STARTCAMERA_EVENT,
        //         )
        //     for (let i = 0; i < 999; i++) {
        //         mySteps.push(
        //             // stop avRecorder
        //             STOPRECORDER_EVENT,
        //             // prepare avRecorder
        //             PREPARE_EVENT, GETINPUTSURFACE_EVENT,
        //             // start avRecorder
        //             STARTCAMERA_EVENT,
        //         )
        //     }
        //     mySteps.push(
        //         // stop camera
        //         STOPCAMERA_EVENT,
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //         )
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0500 end')
        // })

        //  /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600
        //     * @tc.name      : 01.AVRecorder.reset(callback)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. reset 5. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        //  it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     let mySteps = new Array();
        //     mySteps.push(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start avRecorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         // reset avRecorder
        //         RESETRECORDER_EVENT,
        //         // prepare avRecorder
        //         PREPARE_EVENT, GETINPUTSURFACE_EVENT,
        //         // start avRecorder
        //         STARTCAMERA_EVENT,
        //         )
        //     for (let i = 0; i < 999; i++) {
        //         mySteps.push(
        //             // reset avRecorder
        //             RESETRECORDER_EVENT,
        //             // prepare avRecorder
        //             PREPARE_EVENT, GETINPUTSURFACE_EVENT,
        //             // start avRecorder
        //             STARTCAMERA_EVENT,
        //         )
        //     }
        //     mySteps.push(
        //         // stop camera
        //         STOPCAMERA_EVENT,
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //         )
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0600 end')
        // })

        //  /* *
        //     * @tc.number    : SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700
        //     * @tc.name      : 01.AVRecorder.release(callback)
        //     * @tc.desc      : 1. createAVRecorder 2. prepare 3. start 4. release 5. 执行1000次
        //     * @tc.size      : MediumTest
        //     * @tc.type      : Stability test
        //     * @tc.level     : Level 4
        // */
        //  it('SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700', 0, async function (done) {
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700 start')
        //     let fileName = avVideoRecorderTestBase.resourceName()
        //     fdObject = await mediaTestBase.getAvRecorderFd(fileName, "video");
        //     fdPath = "fd://" + fdObject.fdNumber;
        //     avConfig.url = fdPath;
        //     let mySteps = new Array();
        //     mySteps.push(
        //         // init avRecorder
        //         CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //         // init camera
        //         GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //         // start avRecorder
        //         STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         )
        //     for (let i = 0; i < 999; i++) {
        //         mySteps.push(
        //             // release avRecorder and camera
        //             RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //             // init avRecorder
        //             CREATE_EVENT, SETONCALLBACK_EVENT, PREPARE_EVENT,
        //             // init camera
        //             GETINPUTSURFACE_EVENT, INITCAMERA_EVENT,
        //             // start avRecorder
        //             STARTCAMERA_EVENT, STARTRECORDER_EVENT,
        //         )
        //     }
        //     mySteps.push(
        //         // release avRecorder and camera
        //         RELEASECORDER_EVENT, RELEASECAMERA_EVENT,
        //         // end
        //         END_EVENT
        //         )
        //     eventEmitter.emit(mySteps[0], avRecorder, avConfig, RECORDER_TIME, mySteps, done);
        //     console.info(TAG + 'SUB_MULTIMEDIA_AVRECORDER_VIDEO_STABILITY_API_CALLBACK_0700 end')
        // })
    })
}

