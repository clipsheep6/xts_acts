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
import * as mediaTestBase from './MediaTestBase.js';
import * as AVRecorderTestBase from './AVRecorderTestBase.js';
import camera from '@ohos.multimedia.camera'

let TAG = "[avVideoRecorderTest] ";
let cameraManager;
let videoOutput;
let captureSession;
let cameraInput;
let previewOutput;
let cameraOutputCap;
let videoSurfaceId = null;

export const AV_RECORDER_STATE = {
    IDLE : 'idle',
    PREPARED : 'prepared',
    STARTED : 'started',
    PAUSED : 'paused',
    STOPPED : 'stopped',
    RELEASED : 'released',
    ERROR : 'error',
}

export function resourceName(){
    let timestamp = Date.now();
    let filename = `avRecorder_${timestamp}.mp4`;
    return filename;
}

export async function initCamera() {

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
    // 创建预览输出流,其中参数 surfaceId 参考下面 XComponent 组件，预览流为XComponent组件提供的surface
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
    } catch (error) {
        console.error('Failed to addInput. errorCode = ' + error.code);
    }

    // 向会话中添加预览输入流
    try {
        captureSession.addOutput(previewOutput)
    } catch (error) {
        console.error('Failed to addOutput(previewOutput). errorCode = ' + error.code);
    }

    // 向会话中添加录像输出流
    try {
        captureSession.addOutput(videoOutput)
    } catch (error) {
        console.error('Failed to addOutput(videoOutput). errorCode = ' + error.code);
    }

    // 提交会话配置
    await captureSession.commitConfig()

    // 启动会话
    await captureSession.start().then(() => {
        console.log('Promise returned to indicate the session start success.');
    })
}

export async function startCameraOutput() {
    console.info('startCameraOutput start')
    await videoOutput.start(async (err) => {
        if (err) {
            console.error(`Failed to start the video output ${err.message}`);
            return;
        }
        console.log('Callback invoked to indicate the video output start success.');
    });
}

export async function stopCameraOutput() {
    await videoOutput.stop((err) => {
        if (err) {
            console.error(`Failed to stop the video output ${err.message}`);
            return;
        }
        console.log('Callback invoked to indicate the video output stop success.');
    });

}

// 释放相机实例
export function releaseCamera() {
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
}

// release camera and avRecorder
export async function releaseRecorderCallBack(avRecorder, done) {
    await AVRecorderTestBase.releaseCallback(avRecorder)
    releaseCamera()
    done();
}

export async function releaseRecorderPromise(avRecorder, done) {
    await AVRecorderTestBase.releasePromise(avRecorder)
    releaseCamera()
    done();
}

export async function getInputSurfacePromise(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    // console.info('getInputSurfacePromise avRecorder.state is: ' + avRecorder.state)
    await avRecorder.getInputSurface().then((surfaceId) => {
        console.info('getInputSurface success');
        videoSurfaceId = surfaceId;
    }).catch((err) => {
        console.info('getInputSurface failed and catch error is ' + err.message);
    });
}

export async function getInputSurfaceCallback(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.getInputSurface((err, surfaceId) => {
        if (err == null) {
            console.info('getInputSurface success');
            videoSurfaceId = surfaceId;
        } else {
            console.info('getInputSurface failed and error is ' + err.message);
        }
    });
}

export function setAvRecorderCallback(avRecorder, done) {
    // 状态机变化回调函数
    avRecorder.on('stateChange', (state, reason) => {
      console.info(TAG + 'current state is: ' + state);
    })
    // 错误上报回调函数
    avRecorder.on('error', (err) => {
        console.error(TAG + 'error ocConstantSourceNode, error message is ' + err);
        releaseRecorderPromise(avRecorder, done)
    })
}

// 开始录制对应的流程
export async function startRecordingProcessCallback(avRecorder, recorderTime) {
    await startCameraOutput()
    await AVRecorderTestBase.startCallback(avRecorder, recorderTime);
}

export async function startRecordingProcessPromise(avRecorder, recorderTime) {
    await startCameraOutput()
    await AVRecorderTestBase.startPromise(avRecorder, recorderTime);
}

// 暂停录制对应的流程
export async function pauseRecordingProcessCallback(avRecorder) {
    if (avRecorder.state === 'started') {
        // 仅在started状态下调用pause为合理状态切换
        await AVRecorderTestBase.pauseCallback(avRecorder);
        await stopCameraOutput(); // 停止相机出流
    }
}

export async function pauseRecordingProcessPromise(avRecorder) {
    if (avRecorder.state === 'started') {
        // 仅在started状态下调用pause为合理状态切换
        await AVRecorderTestBase.pausePromise(avRecorder);
        await stopCameraOutput(); // 停止相机出流
    }
}

// 恢复录制对应的流程
export async function resumeRecordingProcessCallback(avRecorder) {
    if (avRecorder.state === 'paused') { // 仅在started状态下调用pause为合理状态切换
        await startCameraOutput()
        await AVRecorderTestBase.resumeCallback(avRecorder);
    }
}

export async function resumeRecordingProcessPromise(avRecorder) {
    if (avRecorder.state === 'paused') { // 仅在started状态下调用pause为合理状态切换
        await startCameraOutput()
        await AVRecorderTestBase.resumePromise(avRecorder);
    }
}

// 停止录制对应的流程
export async function stopRecordingProcessCallback(avRecorder) {
    await AVRecorderTestBase.stopCallback(avRecorder);
    await stopCameraOutput()
}

export async function stopRecordingProcessPromise(avRecorder) {
    await AVRecorderTestBase.stopPromise(avRecorder);
    await stopCameraOutput()
}

// 重新录制对应的流程
export async function resetRecordingProcess(avRecorder) {
    await AVRecorderTestBase.resetPromise(avRecorder);
    await stopCameraOutput();
}

export function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

export async function idleCallback(avRecorder) {
    console.info('case idleCallback called');
    media.createAVRecorder((error, recorder) => {
        if (recorder != null) {
            avRecorder = recorder;
            console.info('createAVRecorder idleCallback success');
            return avRecorder;
        } else {
            console.info(`createAVRecorder idleCallback fail, error:${error}`);
        }
    });
}

export async function prepareErrPromise(avRecorder, avConfig) {
    let result = true;
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.prepare(avConfig).then(() => {
        console.info('prepare success');
    }).catch((err) => {
        console.info('prepare fail111');
        result = false;
        expect(result).assertEqual(false);
        console.info('prepare fail222');
        console.info('prepare failed and catch error is ' + err.message);
        AVRecorderTestBase.sleep(1000);
    });
}

// Promise  prepare
export async function create2PreparePromise(avConfig, avRecorder, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case create2PreparePromise avConfig.url is ' + avConfig.url);
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await AVRecorderTestBase.releasePromise(avRecorder);
    done();
}

export async function start2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case start2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcessPromise(avRecorder, recorderTime);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorderCallBack(avRecorder, done);
}

export async function pause2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case pause2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcessPromise(avRecorder, recorderTime);
    await pauseRecordingProcessPromise(avRecorder);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorderCallBack(avRecorder, done);
}

export async function resume2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case resume2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcessPromise(avRecorder, recorderTime);
    await pauseRecordingProcessPromise(avRecorder);
    await resumeRecordingProcessPromise(avRecorder);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorderCallBack(avRecorder, done);
}

export async function stop2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case stop2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcessPromise(avRecorder, recorderTime);
    await stopRecordingProcessPromise(avRecorder);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorderCallBack(avRecorder, done);
}

export async function reset2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case reset2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder);
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcessPromise(avRecorder, recorderTime);
    await resetRecordingProcess(avRecorder);
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await releaseRecorderCallBack(avRecorder, done);
}

export async function getInputSurface2PreparePromise(avConfig, avRecorder, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case getInputSurface2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder);
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorderCallBack(avRecorder, done);
}

export async function prepare3TimesPromise(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case prepare3TimesCallback avConfig.url is ' + avConfig.url);
    while (loopTimes > 0) {
        await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
        await AVRecorderTestBase.resetPromise(avRecorder);
        loopTimes--;
    }
    await AVRecorderTestBase.releasePromise(avRecorder);
    done();
}

export async function avConfigChangedPromise(avConfig, avRecorder, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfigChangedPromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder);
    await prepareErrPromise(avRecorder, avConfig)
    await AVRecorderTestBase.releasePromise(avRecorder);
    done();
}

export async function avRecorderWithPromise2(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    console.info('case avConfig.orientationHint is ' + avConfig.orientationHint);
    console.info('case avConfig.profile.audioBitrate is ' + avConfig.profile.audioBitrate)
    console.info('case avConfig.profile.audioSampleRate is ' + avConfig.profile.audioSampleRate)
    console.info('case avConfig.profile.videoBitrate is ' + avConfig.profile.videoBitrate)
    console.info('case avConfig.profile.videoFrameRate is ' + avConfig.profile.videoFrameRate);

    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig)
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)
    await pauseRecordingProcessPromise(avRecorder)

    await resumeRecordingProcessPromise(avRecorder);
    await stopRecordingProcessPromise(avRecorder)

    await releaseRecorderCallBack(avRecorder, done)
}

export async function avRecorderWithPromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)

    await sleep(3000)

    await pauseRecordingProcessPromise(avRecorder)

    await resumeRecordingProcessPromise(avRecorder);

    await stopRecordingProcessPromise(avRecorder)

    await releaseRecorderPromise(avRecorder, done)
}

export async function avRecorderResumeCallBack1(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startCameraOutput()

    await sleep(3000)

    avRecorder.resume((err) => {
        if (err == null) {
            console.info('resume AVRecorder success');
        } else {
            resumeValue = false
            console.info('avRecorderResumeCallBack1 resumeValue is ' + resumeValue);
            console.info('resume avRecorderResumeCallBack1 failed and error is ' + err.message);
            expect(resumeValue).assertEqual(false);
            releaseRecorderCallBack(avRecorder, done)
        }
    });
}

export async function avRecorderResumeCallBack2(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startCameraOutput()
    avRecorder.resume((err) => {
        if (err == null) {
            console.info('resume AVRecorder success');
        } else {
            resumeValue = false
            console.info('avRecorderResumeCallBack2 resumeValue is ' + resumeValue);
            console.info('resume avRecorderResumeCallBack2 failed and error is ' + err.message);
            expect(resumeValue).assertEqual(false);
            releaseRecorderCallBack(avRecorder, done)
        }
    });
}

export async function avRecorderResumeCallBack3(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()
    await startRecordingProcessCallback(avRecorder, recorderTime)
    await sleep(3000)
    avRecorder.resume((err) => {
        if (err == null) {
            console.info('resume AVRecorder success');
            console.info('avRecorderResumeCallBack3 resumeValue is ' + resumeValue);
            expect(resumeValue).assertEqual(true);
            releaseRecorderCallBack(avRecorder, done)
        } else {
            resumeValue = false
            console.info('avRecorderResumeCallBack3 resumeValue is ' + resumeValue);
            console.info('resume avRecorderResumeCallBack3 failed and error is ' + err.message);
            expect(resumeValue).assertEqual(false);
            releaseRecorderCallBack(avRecorder, done)
        }
    });
}

export async function avRecorderResumeCallBack4(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)
    await sleep(3000)
    await pauseRecordingProcessPromise(avRecorder)

    await startCameraOutput()
    await avRecorder.resume((err) => {
        if (err == null) {
            console.info('resume AVRecorder success');
            console.info('avRecorderResumeCallBack4 resumeValue is ' + resumeValue);
            expect(resumeValue).assertEqual(true);
            releaseRecorderCallBack(avRecorder, done)
        } else {
            resumeValue = false
            console.info('resume avRecorderResumeCallBack4 failed and error is ' + err.message);
            console.error(TAG + 'error avRecorderResumeCallBack4, error message is ' + err.message);
        }
    });
}


export async function avRecorderResumePromise1(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startCameraOutput()

    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
    }).catch((err) => {
        resumeValue = false
        console.info('avRecorderResumePromise1 resumeValue is ' + resumeValue);
        console.info('resume avRecorderResumePromise1 failed and error is ' + err.message);
        expect(resumeValue).assertEqual(false);
        releaseRecorderPromise(avRecorder, done)
    });
}

export async function avRecorderResumePromise2(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startCameraOutput()

    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
    }).catch((err) => {
        resumeValue = false
        console.info('avRecorderResumePromise2 resumeValue is ' + resumeValue);
        console.info('resume avRecorderResumePromise2 failed and error is ' + err.message);
        expect(resumeValue).assertEqual(false);
        releaseRecorderPromise(avRecorder, done)
    });
}

export async function avRecorderResumePromise3(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()
    await startRecordingProcessPromise(avRecorder, recorderTime)

    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
        console.info('avRecorderResumePromise3 resumeValue is ' + resumeValue);
        expect(resumeValue).assertEqual(true);
    }).catch((err) => {
        console.info('resume AVRecorder failed and catch error is ' + err.message);
    });

    await releaseRecorderPromise(avRecorder, done)
}

export async function avRecorderResumePromise4(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)
    await pauseRecordingProcessPromise(avRecorder)

    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
        console.info('avRecorderResumePromise4 resumeValue is ' + resumeValue);
        expect(resumeValue).assertEqual(true);
        startCameraOutput()
    }).catch((err) => {
        console.info('resume AVRecorder failed and catch error is ' + err.message);
    });

    await releaseRecorderPromise(avRecorder, done)
}

export async function avRecorderResumePromise5(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)
    await stopRecordingProcessPromise(avRecorder)

    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
    }).catch((err) => {
        resumeValue = false
        console.info('resume avRecorderResumePromise5 failed and error is ' + err.message);
        console.error(TAG + 'error avRecorderResumePromise5, error message is ' + err.message);
        console.info('avRecorderResumePromise5 resumeValue is ' + resumeValue);
        expect(resumeValue).assertEqual(false);
    });

    await releaseRecorderPromise(avRecorder, done)
}

export async function avRecorderResumePromise6(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)
    await AVRecorderTestBase.resetPromise(avRecorder) ;

    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
        console.info('avRecorderResumePromise6 resumeValue is ' + resumeValue);
    }).catch((err) => {
        resumeValue = false
        console.info('resume avRecorderResumePromise6 failed and error is ' + err.message);
        console.error(TAG + 'error avRecorderResumePromise6, error message is ' + err.message);
        expect(resumeValue).assertEqual(false);
    });

    await releaseRecorderPromise(avRecorder, done)
}

export async function avRecorderResumePromise7(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
        console.info('avRecorderResumePromise7 resumeValue is ' + resumeValue);
    }).catch((err) => {
        resumeValue = false
        console.info('resume avRecorderResumePromise7 failed and error is ' + err.message);
        console.error(TAG + 'error avRecorderResumePromise7, error message is ' + err.message);
        expect(resumeValue).assertEqual(false);
    });

    await releaseRecorderPromise(avRecorder, done)

}

export async function avRecorderResumePromise8(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)
    await pauseRecordingProcessPromise(avRecorder)

    await resumeRecordingProcessCallback(avRecorder)
    await resumeRecordingProcessCallback(avRecorder)
    await resumeRecordingProcessCallback(avRecorder)

    await releaseRecorderPromise(avRecorder, done)
}


export async function avRecorderStopPromise1(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)

    await avRecorder.stop().then(() => {
        console.info('stop avRecorderStopPromise1 success');
    }).catch((err) => {
        console.info('stop avRecorderStopPromise1 error');
        AVRecorderTestBase.releaseDone(avRecorder, done)
        console.info('stop avRecorderStopPromise1 failed and catch error is ' + err.message);
        done();
    });
    await AVRecorderTestBase.releaseDone(avRecorder, done)
}

export async function avRecorderStopPromise2(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await avRecorder.stop().then(() => {
        console.info('stop avRecorderStopPromise2 success');
    }).catch((err) => {
        AVRecorderTestBase.releaseDone(avRecorder, done)
        console.info('stop avRecorderStopPromise2 failed and catch error is ' + err.message);
        done();

    });
    await AVRecorderTestBase.releaseDone(avRecorder, done)
}

export async function avRecorderStopPromise3(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()
    await startRecordingProcessPromise(avRecorder, recorderTime)

    await avRecorder.stop().then(() => {
        console.info('stop avRecorderStopPromise3 success');
        expect(avRecorder.state).assertEqual("stopped");
        stopCameraOutput()
        releaseRecorderPromise(avRecorder, done)
    }).catch((err) => {
        console.info('stop avRecorderStopPromise3 failed and catch error is ' + err.message);
    });
}

export async function avRecorderStopPromise4(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)
    await pauseRecordingProcessPromise(avRecorder)

    await avRecorder.stop().then(() => {
        console.info('stop avRecorderStopPromise4 success');
        expect(avRecorder.state).assertEqual("stopped");
        stopCameraOutput()
        releaseRecorderPromise(avRecorder, done)
    }).catch((err) => {
        console.info('stop avRecorderStopPromise4 failed and catch error is ' + err.message);
    });
}

export async function avRecorderStopPromise5(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)

    await pauseRecordingProcessPromise(avRecorder)

    await resumeRecordingProcessPromise(avRecorder);

    await stopRecordingProcessPromise(avRecorder)

    await releaseRecorderPromise(avRecorder, done)
}

export async function avRecorderStopPromise6(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)

    await AVRecorderTestBase.resetPromise(avRecorder) ;

    await avRecorder.stop().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STOPPED);
        console.info('stop avRecorderStopPromise6 success');
    }).catch((err) => {
        console.info('stop avRecorderStopPromise6 failed and catch error is ' + err.message);
    });
    await stopCameraOutput()
    await releaseRecorderPromise(avRecorder, done)
}

export async function avRecorderStopPromise7(avConfig, avRecorder, recorderTime, done) {
    let resumeValue = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)

    await avRecorder.stop().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STOPPED);
        console.info('stop avRecorderStopPromise7 success');
    }).catch((err) => {
        console.info('stop avRecorderStopPromise7 failed and catch error is ' + err.message);
    });

    await AVRecorderTestBase.releaseDone(avRecorder, done)
}

export async function avRecorderStopPromise8(avConfig, avRecorder, recorderTime, done) {
    let stopValue1 = true
    let stopValue2 = true
    let stopValue3 = true
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder, done)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder)
    await initCamera()

    await startRecordingProcessPromise(avRecorder, recorderTime)

    await stopCameraOutput()
    await avRecorder.stop().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STOPPED);
        expect(stopValue1).assertEqual(true);
        console.info('stop avRecorderStopPromise8 success');
    }).catch((err) => {
        console.info('stop avRecorderStopPromise8 failed and catch error is ' + err.message);
    });

    await avRecorder.stop().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STOPPED);
        console.info('stop avRecorderStopPromise8 success');
    }).catch((err) => {
        console.info('stop avRecorderStopPromise8 failed and catch error is ' + err.message);
        stopValue2 = false
        expect(stopValue1).assertEqual(false);
    });

    await avRecorder.stop().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STOPPED);
        console.info('stop avRecorderStopPromise8 success');
    }).catch((err) => {
        console.info('stop avRecorderStopPromise8 failed and catch error is ' + err.message);
        stopValue2 = false
        expect(stopValue1).assertEqual(false);
    });

    await releaseRecorderPromise(avRecorder, done)
}