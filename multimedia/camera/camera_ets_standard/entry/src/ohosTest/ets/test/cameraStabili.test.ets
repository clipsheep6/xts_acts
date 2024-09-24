/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

import camera from '@ohos.multimedia.camera';
import media from '@ohos.multimedia.media';
import fs from '@ohos.file.fs';
import Want from '@ohos.app.ability.Want';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import featureAbility from '@ohos.ability.featureAbility';
import { surfaceIds, videoSurfaceId } from '../testability/pages/Index'

let TAG = 'cameraStabili';
let cameraManager: camera.CameraManager;
let context = getContext(this);
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempVideoSession: camera.VideoSession;
let tempProfiles: camera.VideoProfile | undefined;
let tempVideoOutput: camera.VideoOutput;

let videoSize: ESObject = {
  width: 1920,
  height: 1080
}

// 筛选1920*1080的videoProfiles
let createProfile = () => {
  let capability = cameraManager.getSupportedOutputCapability(cameraDevice[0], camera.SceneMode.NORMAL_VIDEO);
  let videoProfiles = capability.videoProfiles;
  tempProfiles = videoProfiles.find((profile) => {
    return profile.size.height === videoSize.height &&
      profile.size.width === videoSize.width && profile.format === 1003 &&
      profile.frameRateRange.min <= 60 && profile.frameRateRange.max <= 60;
  })
}

// 筛选非1920*1080的videoProfiles
let createProfileNo = () => {
  let capability = cameraManager.getSupportedOutputCapability(cameraDevice[0], camera.SceneMode.NORMAL_VIDEO);
  let videoProfiles = capability.videoProfiles;
  tempProfiles = videoProfiles.find((profile) => {
    return profile.size.height !== videoSize.height &&
      profile.size.width !== videoSize.width;
  })
}

// 创建input参数为cameraDevice的下标
let createInput = async (index: number) => {
  tempCameraInput = cameraManager.createCameraInput(cameraDevice[index]);
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.open();
  }
}

// 创建Output参数为cameraDevice的下标、相机模式
let createOutput = async (index: number, mode: number, flag = true) => {
  let cameraOutputCap = cameraManager.getSupportedOutputCapability(cameraDevice[index], mode);
  let previewProfiles: camera.Profile | undefined;
  if (flag) {
    previewProfiles = cameraOutputCap.previewProfiles.find((profile) => {
      return profile.size.height === videoSize.height && profile.size.width === videoSize.width;
    })
  } else {
    previewProfiles = cameraOutputCap.previewProfiles.find((profile) => {
      return profile.size.height !== videoSize.height || profile.size.width !== videoSize.width;
    })
  }
  if (isEmpty(previewProfiles)) {
    previewProfiles = cameraOutputCap.previewProfiles[0]
  }
  tempPreviewOutput = cameraManager.createPreviewOutput(previewProfiles, surfaceIds);
  // tempPhotoOutput = cameraManager.createPhotoOutput(cameraOutputCap.photoProfiles[0])
}

// 创建Session对象参数为相机模式
let createVideoSession = (mode: number) => {
  tempVideoSession = cameraManager.createSession(mode);
  tempVideoSession.beginConfig();
}

// 释放相机资源
let stopCameraSession = async () => {
  tempVideoSession.beginConfig();
  if (!isEmpty(tempCameraInput)) {
    tempVideoSession.removeInput(tempCameraInput);
    await tempCameraInput.close();
  }
  if (!isEmpty(tempVideoOutput)) {
    tempVideoSession.removeOutput(tempVideoOutput);
    await tempVideoOutput.release();
  }
  if (!isEmpty(tempPreviewOutput)) {
    tempVideoSession.removeOutput(tempPreviewOutput);
    await tempPreviewOutput.release();
  }
  if (!isEmpty(tempPhotoOutput)) {
    tempVideoSession.removeOutput(tempPhotoOutput);
    await tempPhotoOutput.release();
  }
}

// 释放相机资源
let releaseCamera = async () => {
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    await tempPreviewOutput.release();
  }
  if (!isEmpty(tempPhotoOutput)) {
    await tempPhotoOutput.release();
  }
  if (!isEmpty(tempVideoOutput)) {
    await tempVideoOutput.release();
  }
}

// 添加相机流参数为cameraDevice的下标、相机模式
let addCommit = async (i: number, mode: number) => {
  await createInput(i);
  createOutput(i, mode);
  if (tempCameraInput) {
    tempVideoSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempVideoSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempVideoSession.addOutput(tempPhotoOutput);
  }
}

let surfaceId: string;
let fileAsset: string;
let fdNumber: number;
let fdPath: string;
let fdObject: ESObject;
let recorder: media.AVRecorder

let avRecorderProfile: media.AVRecorderProfile = {
  audioBitrate: 48000,
  audioChannels: 2,
  audioCodec: media.CodecMimeType.AUDIO_AAC,
  audioSampleRate: 48000,
  fileFormat: media.ContainerFormatType.CFT_MPEG_4,
  videoBitrate: 2000000,
  videoCodec: media.CodecMimeType.VIDEO_AVC,
  videoFrameWidth: 640,
  videoFrameHeight: 480,
  videoFrameRate: 30
}

let avRecorderConfig: media.AVRecorderConfig = {
  audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
  videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV,
  profile: avRecorderProfile,
  url: 'fd://', // 文件需先由调用者创建，赋予读写权限，将文件fd传给此参数，eg.fd://45
  rotation: 0, // 合理值0、90、180、270，非合理值prepare接口将报错
  location: { latitude: 30, longitude: 130 }
}

// 获取file.fd参数为文件名
let createMaps = async (pathName: string) => {
  try {
    let fileDir: ESObject = await AppStorage.get('pathDir');
    pathName = fileDir + '/' + pathName;
    let file: ESObject = fs.openSync(pathName, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    fileAsset = file;
    fdNumber = file.fd;
    fdPath = "fd://" + fdNumber.toString();
    console.log(`${TAG} getSurfaceId start -1 ${JSON.stringify(fdPath)}`);
  } catch (err) {
    console.log(`createMaps err ${JSON.stringify(err)}`);
  }
}

// 获取surfaceId
let getSurfaceId = async () => {
  try {
    await createMaps(`${Date.now()}.mp4`);
    console.log(`${TAG} getSurfaceId start 0`);
    avRecorderConfig.url = fdPath;
    console.log(`${TAG} getSurfaceId start 1`);
    recorder = await media.createAVRecorder();
    console.log(`${TAG} getSurfaceId start 2`);
    let errs = await recorder.prepare(avRecorderConfig);
    console.log(`${TAG} getSurfaceId start 3 ${JSON.stringify(errs)} `);
    surfaceId = await recorder.getInputSurface();
    console.log(`${TAG} getSurfaceId start 4`);
  } catch (err) {
    console.log(`${TAG} getSurfaceId err ${JSON.stringify(err)}`);
  }
}


// 释放资源
let releaseRecorder = async () => {
  await recorder?.release();
  closeFd();
  await sleep(200)
}

// 释放资源
let closeFd = () => {
  console.log('case come in closeFd')
  if (!isEmpty(fdNumber)) {
    fs.closeSync(fdNumber);
    console.log('make fdNumber is null')
  } else {
    console.log('this fdNumber is null')
  }
}


let permission = ['ohos.permission.CAMERA',
  'ohos.permission.MICROPHONE',
  'ohos.permission.MEDIA_LOCATION',
  'ohos.permission.READ_MEDIA',
  'ohos.permission.WRITE_MEDIA',
  'ohos.permission.ABILITY_BACKGROUND_COMMUNICATION',
  'ohos.permission.READ_IMAGEVIDEO',
  'ohos.permission.WRITE_IMAGEVIDEO'];

let power: ESObject

// 延时器参数是时间
function sleep(ms: ESObject = 66): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, ms)
  })
}

// 创建cameraManager对象
let createCameraManager = () => {
  try {
    cameraManager = camera.getCameraManager(context);
  } catch (err) {
    console.log(`${TAG} createCameraManager err ${JSON.stringify(err)}`);
  }
}

// 判断传入的参数是否为空
let isEmpty = (temp: ESObject) => {
  if (temp == null || temp == undefined || temp.length <= 0) {
    return true;
  }
  return false;
}

// 创建cameraDevice对象
let createCameras = () => {
  try {
    cameraDevice = cameraManager.getSupportedCameras();
  } catch (err) {
    console.log(`${TAG} createCameras err ${JSON.stringify(err)}`);
  }
}

// 拉起ability来获取权限
let ability = async () => {
  const delegator = abilityDelegatorRegistry.getAbilityDelegator();
  const bundleName = abilityDelegatorRegistry.getArguments().bundleName;
  const want: Want = {
    bundleName: bundleName,
    abilityName: 'TestAbility'
  }
  await delegator.startAbility(want);
  await sleep(1000);
}

// 参数校验
let checkMode = (data: number | null | undefined, flag: boolean) => {
  if (!flag) {
    return 0;
  }
  if (isEmpty(data)) {
    return 0;
  }
  return data;
}


export default function cameraStabiliTest() {
  let dr = Driver.create();

  describe('cameraStabiliTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      createCameraManager();
      createCameras();
      await ability();
      await sleep(500);
      for (let i = 0; i < permission.length; i++) {
        power = await dr?.waitForComponent(ON.text('允许', MatchPattern.EQUALS), 500);
        await power?.click();
        power = null;
        await sleep(500);
      }
      createProfile();
      await getSurfaceId();
      console.log(`${TAG} 11111111111 ${videoSurfaceId} `)
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(async () => {
      await releaseCamera()
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(async () => {
      await releaseRecorder()
      await sleep(100)
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })


    /**
     * @tc.number    : testCameraIsVideoStabilizationModeSupported0100
     * @tc.name      : SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createVideoOutput parameter tempProfiles, surfaceId
     *                 5.addInput parameter tempCameraInput
     *                 6.addOutput parameter tempVideoOutput
     *                 7.commitConfig
     *                 8.tempVideoSession.start
     *                 9.tempVideoOutput.start
     *                 10.isVideoStabilizationModeSupported parameter mode
     *                 11.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let mode =
        [camera.VideoStabilizationMode.OFF, camera.VideoStabilizationMode.LOW, camera.VideoStabilizationMode.MIDDLE,
          camera.VideoStabilizationMode.HIGH, camera.VideoStabilizationMode.AUTO];
      try {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 fdPath ${fdPath}`);
        await getSurfaceId()
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 videoSurfaceId ${videoSurfaceId}`);
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 0`);
        await sleep();
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 1`);
        await sleep();
        await tempCameraInput.open();
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 2`);
        await sleep();
        if (!isEmpty(tempProfiles)) {
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 3`);
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 4`);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 5`);
          tempVideoSession.addOutput(tempVideoOutput);
          await sleep();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 6`);
          await tempVideoSession.commitConfig();
          await sleep();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 7`);
          await tempVideoSession.start();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 8`);
          await tempVideoOutput.start();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 9`);
          await sleep();
          for (let i = 0; i < mode.length; i++) {
            console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 10`);
            let isSupported = tempVideoSession.isVideoStabilizationModeSupported(mode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 11`);
            console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 isSupported ${isSupported}`);
            expect(isEmpty(isSupported)).assertFalse();
          }
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 12`);
          await tempVideoSession.stop();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 13`);
          await stopCameraSession();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 start 14`);
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraIsVideoStabilizationModeSupported0200
     * @tc.name      : SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createVideoOutput parameter tempProfiles, videoSurfaceId
     *                 5.addInput parameter tempCameraInput
     *                 6.addOutput parameter tempVideoOutput
     *                 7.commitConfig
     *                 8.tempVideoSession.start
     *                 9.tempVideoOutput.start
     *                 10.isVideoStabilizationModeSupported parameter mode
     *                 11.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let mode =
        [-1, null, undefined, , 5];
      try {
        // await getSurfaceId();
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 0`);
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep()
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 1`);
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 2`);
        await tempCameraInput.open();
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 3`);
        await sleep();
        if (!isEmpty(tempProfiles)) {
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 4`);
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 5 ${tempVideoOutput}`);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 6`);
          tempVideoSession.addOutput(tempVideoOutput);
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 7`);
          await sleep();
          await tempVideoSession.commitConfig();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 8`);
          await sleep();
          await tempVideoSession.start();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 9`);
          await tempVideoOutput.start();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 10`);
          await sleep();
          for (let i = 0; i < mode.length; i++) {
            console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 11`);
            let isSupported = tempVideoSession.isVideoStabilizationModeSupported(mode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 isSupported ${isSupported}`);
            expect(isEmpty(isSupported)).assertFalse();
            console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 12`);
          }
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 13`);
          await tempVideoSession.stop();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 14`);
          await stopCameraSession();
          console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 start 15`);
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraIsVideoStabilizationModeSupported0300
     * @tc.name      : SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0300
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createProfileNo
     *                 5.createVideoOutput parameter tempProfiles, surfaceId
     *                 6.addInput parameter tempCameraInput
     *                 7.addOutput parameter tempVideoOutput
     *                 8.commitConfig
     *                 9.tempVideoSession.start
     *                 10.tempVideoOutput.start
     *                 11.isVideoStabilizationModeSupported parameter mode
     *                 12.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let mode =
        [camera.VideoStabilizationMode.OFF, camera.VideoStabilizationMode.LOW, camera.VideoStabilizationMode.MIDDLE,
          camera.VideoStabilizationMode.HIGH, camera.VideoStabilizationMode.AUTO];
      try {
        //  await getSurfaceId();
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        await sleep();
        await tempCameraInput.open();
        await sleep();
        createProfileNo();
        if (!isEmpty(tempProfiles)) {
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          tempVideoSession.addOutput(tempVideoOutput);
          await sleep();
          await tempVideoSession.commitConfig();
          await sleep();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          await sleep();
          for (let i = 0; i < mode.length; i++) {
            let isSupported = tempVideoSession.isVideoStabilizationModeSupported(mode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0300 isSupported ${isSupported}`);
            expect(isEmpty(isSupported)).assertFalse();
          }
        }
        await tempVideoSession.stop();
        await stopCameraSession();
        await sleep();
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_VIDEO_STABILIZATION_MODE_SUPPORTED_0300 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetActiveVideoStabilizationMode0100
     * @tc.name      : SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0100
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createVideoOutput parameter tempProfiles, surfaceId
     *                 5.addInput parameter tempCameraInput
     *                 6.addOutput parameter tempVideoOutput
     *                 7.commitConfig
     *                 8.tempVideoSession.start
     *                 9.tempVideoOutput.start
     *                 10.getActiveVideoStabilizationMode
     *                 11.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        // await getSurfaceId();
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        await tempCameraInput.open();
        await sleep();
        if (!isEmpty(tempProfiles)) {
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          tempVideoSession.addOutput(tempVideoOutput);
          await sleep();
          await tempVideoSession.commitConfig();
          await sleep();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          await sleep();
          let vsMode = tempVideoSession.getActiveVideoStabilizationMode();
          console.log(`${TAG} SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0100 vsMode ${vsMode}`);
          expect(isEmpty(vsMode)).assertFalse();
          await tempVideoSession.stop();
          await stopCameraSession();
          await sleep();
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetActiveVideoStabilizationMode0200
     * @tc.name      : SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0200
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createProfileNo
     *                 5.createVideoOutput parameter tempProfiles, surfaceId
     *                 6.addInput parameter tempCameraInput
     *                 7.addOutput parameter tempVideoOutput
     *                 8.commitConfig
     *                 9.tempVideoSession.start
     *                 10.tempVideoOutput.start
     *                 11.getActiveVideoStabilizationMode
     *                 12.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        //  await getSurfaceId();
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        await tempCameraInput.open();
        await sleep();
        createProfileNo();
        if (!isEmpty(tempProfiles)) {
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          tempVideoSession.addOutput(tempVideoOutput);
          await sleep();
          await tempVideoSession.commitConfig();
          await sleep();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          await sleep();
          let vsMode = tempVideoSession.getActiveVideoStabilizationMode();
          console.log(`${TAG} SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0200 vsMode ${vsMode}`);
          expect(isEmpty(vsMode)).assertFalse();
          await tempVideoSession.stop();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ACTIVE_VIDEO_STABILIZATION_MODE_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetVideoStabilizationMode0100
     * @tc.name      : SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createOutput(0,2)
     *                 5.createVideoOutput parameter tempProfiles, surfaceId
     *                 6.addInput parameter tempCameraInput
     *                 7.addOutput parameter tempVideoOutput
     *                 8.addOutput parameter tempPreviewOutput
     *                 9.commitConfig
     *                 10.tempVideoSession.start
     *                 11.tempVideoOutput.start
     *                 12.isVideoStabilizationModeSupported parameter mode
     *                 13.setVideoStabilizationMode parameter mode
     *                 14.getActiveVideoStabilizationMode
     *                 15.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let mode =
        [camera.VideoStabilizationMode.OFF, camera.VideoStabilizationMode.OFF, camera.VideoStabilizationMode.LOW,
          camera.VideoStabilizationMode.LOW, camera.VideoStabilizationMode.MIDDLE, camera.VideoStabilizationMode.MIDDLE,
          camera.VideoStabilizationMode.AUTO, camera.VideoStabilizationMode.AUTO];
      try {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start`);
        //  await getSurfaceId();
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start0`);
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start1`);
        await sleep();
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start2`);
        await tempCameraInput.open();
        await sleep();
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start3`);
        createOutput(0, 2);
        if (!isEmpty(tempProfiles)) {
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start4`);
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start5`);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start5.1`);
          tempVideoSession.addOutput(tempVideoOutput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start5.2`);
          tempVideoSession.addOutput(tempPreviewOutput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start6`);
          await sleep();
          await tempVideoSession.commitConfig();
          await sleep();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 start7`);
          await sleep();
          let temp = 0;
          for (let i = 0; i < mode.length; i++) {
            let isSupported = tempVideoSession.isVideoStabilizationModeSupported(mode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 isSupported ${isSupported}`);
            let vsMode = tempVideoSession.getActiveVideoStabilizationMode();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 vsMode ${vsMode}`);
            temp = vsMode;
            if (isSupported) {
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 1111111111`);
              tempVideoSession.setVideoStabilizationMode(mode[i]);
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 1111111111 12 `);
              temp = mode[i];
            }
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 1111111111 13 `);
            await sleep(200);
            vsMode = tempVideoSession.getActiveVideoStabilizationMode();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 1111111111 14 `);
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 vsMode ${vsMode}`);
            expect(vsMode).assertEqual(temp);
          }
          await tempVideoSession.stop();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetVideoStabilizationMode0200
     * @tc.name      : SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createOutput(0,2)
     *                 5.createVideoOutput parameter tempProfiles, surfaceId
     *                 6.addInput parameter tempCameraInput
     *                 7.addOutput parameter tempVideoOutput
     *                 8.addOutput parameter tempPreviewOutput
     *                 9.commitConfig
     *                 10.tempVideoSession.start
     *                 11.tempVideoOutput.start
     *                 12.isVideoStabilizationModeSupported parameter mode
     *                 13.setVideoStabilizationMode parameter mode
     *                 14.getActiveVideoStabilizationMode
     *                 15.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let mode = [camera.VideoStabilizationMode.HIGH];
      try {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start`);
        //  await getSurfaceId();
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start0`);
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start1`);
        await sleep();
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start2`);
        await tempCameraInput.open();
        await sleep();
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start3`);
        createOutput(0, 2);
        if (!isEmpty(tempProfiles)) {
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start4`);
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start5`);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start5.1`);
          tempVideoSession.addOutput(tempVideoOutput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start5.2`);
          tempVideoSession.addOutput(tempPreviewOutput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start6`);
          await sleep();
          await tempVideoSession.commitConfig();
          await sleep();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 start7`);
          await sleep();
          let temp = 0;
          for (let i = 0; i < mode.length; i++) {
            let isSupported = tempVideoSession.isVideoStabilizationModeSupported(mode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 isSupported ${isSupported}`);
            let vsMode = tempVideoSession.getActiveVideoStabilizationMode();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 vsMode ${vsMode}`);
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 1111111111`);
            if (isSupported) {
              tempVideoSession.setVideoStabilizationMode(mode[i]);
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 1111111111 12 `);
              await sleep(200);
              vsMode = tempVideoSession.getActiveVideoStabilizationMode();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 1111111111 14 `);
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 vsMode ${vsMode}`);
              expect(vsMode == 3 || vsMode == 4).assertTrue();
            } else {
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 not support `);
            }
          }
          await tempVideoSession.stop();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetVideoStabilizationMode0300
     * @tc.name      : SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0300
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createOutput(0,2,false)
     *                 5.createProfileNo
     *                 6.createVideoOutput parameter tempProfiles, surfaceId
     *                 7.addInput parameter tempCameraInput
     *                 8.addOutput parameter tempVideoOutput
     *                 9.addOutput parameter tempPreviewOutput
     *                 10.commitConfig
     *                 11.tempVideoSession.start
     *                 12.tempVideoOutput.start
     *                 13.isVideoStabilizationModeSupported parameter mode
     *                 14.setVideoStabilizationMode parameter mode
     *                 15.getActiveVideoStabilizationMode
     *                 16.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let mode = [camera.VideoStabilizationMode.HIGH];
      try {
        // await getSurfaceId();
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        await tempCameraInput.open();
        await sleep();
        createOutput(0, 2, false);
        createProfileNo();
        if (!isEmpty(tempProfiles)) {
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          await sleep();
          tempVideoSession.addInput(tempCameraInput);
          tempVideoSession.addOutput(tempVideoOutput);
          tempVideoSession.addOutput(tempPreviewOutput);
          await sleep();
          await tempVideoSession.commitConfig();
          await sleep();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          await sleep();
          let temp = 0;
          for (let i = 0; i < mode.length; i++) {
            let isSupported = tempVideoSession.isVideoStabilizationModeSupported(mode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0300 isSupported ${isSupported}`);
            let vsMode = tempVideoSession.getActiveVideoStabilizationMode();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0300 vsMode ${vsMode}`);
            if (isSupported) {
              tempVideoSession.setVideoStabilizationMode(mode[i]);
              await sleep(200);
              vsMode = tempVideoSession.getActiveVideoStabilizationMode();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0300 vsMode ${vsMode}`);
              expect(vsMode == 3 || vsMode == 4).assertTrue();
            } else {
              console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0300 no support`);
            }
          }
          await tempVideoSession.stop();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0300 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetVideoStabilizationMode0400
     * @tc.name      : SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400
     * @tc.desc      : 1.createVideoSession parameter arr
     *                 2.createCameraInput parameter cameras[0]
     *                 3.open
     *                 4.createOutput(0,2)
     *                 5.createVideoOutput parameter tempProfiles, surfaceId
     *                 6.addInput parameter tempCameraInput
     *                 7.addOutput parameter tempVideoOutput
     *                 8.addOutput parameter tempPreviewOutput
     *                 9.commitConfig
     *                 10.tempVideoSession.start
     *                 11.tempVideoOutput.start
     *                 12.isVideoStabilizationModeSupported parameter mode
     *                 13.setVideoStabilizationMode parameter mode
     *                 14.getActiveVideoStabilizationMode
     *                 15.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400', 0, async (done: Function) => {
      let cameras = cameraDevice
      let mode =
        [camera.VideoStabilizationMode.OFF, camera.VideoStabilizationMode.OFF, camera.VideoStabilizationMode.LOW,
          camera.VideoStabilizationMode.LOW, camera.VideoStabilizationMode.MIDDLE, camera.VideoStabilizationMode.MIDDLE,
          camera.VideoStabilizationMode.HIGH, camera.VideoStabilizationMode.HIGH, camera.VideoStabilizationMode.AUTO,
          camera.VideoStabilizationMode.AUTO];
      try {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start`);
        //   await getSurfaceId();
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start0`);
        createVideoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start1`);
        tempCameraInput = cameraManager.createCameraInput(cameras[0]);
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start2`);
        await tempCameraInput.open();
        await sleep();
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start3`);
        createOutput(0, 2);
        if (!isEmpty(tempProfiles)) {
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start4`);
          tempVideoOutput = cameraManager.createVideoOutput(tempProfiles, surfaceId);
          await sleep();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start5`);
          tempVideoSession.addInput(tempCameraInput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start5.1`);
          tempVideoSession.addOutput(tempVideoOutput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start5.2`);
          tempVideoSession.addOutput(tempPreviewOutput);
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start6`);
          await sleep();
          await tempVideoSession.commitConfig();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start7`);
          await sleep();
          await tempVideoSession.start();
          await tempVideoOutput.start();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 start8`);
          await sleep();
          let temp = 0;
          for (let i = 0; i < mode.length; i++) {
            let isSupported = tempVideoSession.isVideoStabilizationModeSupported(mode[i]);
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 isSupported ${isSupported}`);
            let vsMode = tempVideoSession.getActiveVideoStabilizationMode();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 vsMode ${vsMode}`);
            temp = vsMode;
            if (!isSupported) {
              tempVideoSession.setVideoStabilizationMode(mode[i]);
            }
            await sleep(200);
            vsMode = tempVideoSession.getActiveVideoStabilizationMode();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 vsMode ${vsMode}`);
          }
        }
        await tempVideoSession.stop();
        await stopCameraSession();
        await sleep();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_VIDEO_STABILIZATION_MODE_0400 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })


  })
}
