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
            console.error('Failed to start the video output ${err.message}');
            return;
        }
        console.log('Callback invoked to indicate the video output start success.');
    });
}

export async function stopCameraOutput() {
    await videoOutput.stop((err) => {
        if (err) {
            console.error('Failed to stop the video output ${err.message}');
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
export async function releaseRecorder(avRecorder, done) {
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

export function setAvRecorderCallback(avRecorder) {
    // 状态机变化回调函数
    avRecorder.on('stateChange', (state, reason) => {
      console.info(TAG + 'current state is: ' + state);
    })
    // 错误上报回调函数
    avRecorder.on('error', (err) => {
      console.error(TAG + 'error ocConstantSourceNode, error message is ' + err);
    })
  }

// 开始录制对应的流程 Promise
export async function startRecordingProcess(avRecorder, recorderTime) {
    await startCameraOutput()
    await AVRecorderTestBase.startPromise(avRecorder, recorderTime);
}

// 暂停录制对应的流程 Promise
export async function pauseRecordingProcess(avRecorder) {
    if (avRecorder.state === 'started') {
        // 仅在started状态下调用pause为合理状态切换
        await AVRecorderTestBase.pausePromise(avRecorder);
        await stopCameraOutput(); // 停止相机出流
    }
}

// 恢复录制对应的流程 Promise
export async function resumeRecordingProcess(avRecorder) {
    if (avRecorder.state === 'paused') { // 仅在started状态下调用pause为合理状态切换
        await startCameraOutput()
        await AVRecorderTestBase.resumePromise(avRecorder);
    }
}

// 停止录制对应的流程 Promise
export async function stopRecordingProcess(avRecorder) {
    await AVRecorderTestBase.stopPromise(avRecorder);
    await stopCameraOutput()
}

// 重新录制对应的流程 Promise
export async function resetRecordingProcess(avRecorder) {
    await AVRecorderTestBase.resetPromise(avRecorder);
    await stopCameraOutput();
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
    await startRecordingProcess(avRecorder, recorderTime);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorder(avRecorder, done);
}

export async function pause2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case pause2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcess(avRecorder, recorderTime);
    await pauseRecordingProcess(avRecorder);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorder(avRecorder, done);
}

export async function resume2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case resume2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcess(avRecorder, recorderTime);
    await pauseRecordingProcess(avRecorder);
    await resumeRecordingProcess(avRecorder);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorder(avRecorder, done);
}

export async function stop2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case stop2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder)
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcess(avRecorder, recorderTime);
    await stopRecordingProcess(avRecorder);
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorder(avRecorder, done);
}

export async function reset2PreparePromise(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case reset2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder);
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await startRecordingProcess(avRecorder, recorderTime);
    await resetRecordingProcess(avRecorder);
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await releaseRecorder(avRecorder, done);
}

export async function getInputSurface2PreparePromise(avConfig, avRecorder, done) {
    avRecorder = await AVRecorderTestBase.idle(avRecorder);
    console.info('case getInputSurface2PreparePromise avConfig.url is ' + avConfig.url);
    setAvRecorderCallback(avRecorder);
    await AVRecorderTestBase.preparePromise(avRecorder, avConfig);
    await getInputSurfacePromise(avRecorder);
    await initCamera();
    await prepareErrPromise(avRecorder, avConfig);
    await releaseRecorder(avRecorder, done);
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