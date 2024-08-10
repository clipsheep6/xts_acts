/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import fs from '@ohos.file.fs';
import media from '@ohos.multimedia.media';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import Want from '@ohos.app.ability.Want';
import featureAbility from '@ohos.ability.featureAbility';


let TAG = 'cameraColor';
let cameraManager: camera.CameraManager;
let context = getContext();
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempPhotoSession: camera.PhotoSession;
let tempVideoOutput: camera.VideoOutput;

let createInput = async (index: number) => {
  tempCameraInput = cameraManager.createCameraInput(cameraDevice[index]);
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.open();
  }
}

let createOutput = async (index: number, mode: number, previewFormat: number, videoFormat: number) => {
  let cameraOutputCap = cameraManager.getSupportedOutputCapability(cameraDevice[index], mode);
  let previewProfile = cameraOutputCap.previewProfiles.find((profile) => {
    return profile.format === previewFormat;
  })
  let videoProfile = cameraOutputCap.videoProfiles.find((profile) => {
    return profile.format === videoFormat;
  })
  tempPreviewOutput = cameraManager.createPreviewOutput(previewProfile, globalThis.surfaceId);
  tempPhotoOutput = cameraManager.createPhotoOutput(cameraOutputCap.photoProfiles[0]);
  tempVideoOutput = cameraManager.createVideoOutput(videoProfile, surfaceId);
}

let createPhotoSession = async (mode: number) => {
  tempPhotoSession = cameraManager.createSession(mode);
  tempPhotoSession.beginConfig();
}

let stopCameraSession = async () => {
  tempPhotoSession.beginConfig();
  if (!isEmpty(tempCameraInput)) {
    tempPhotoSession.removeInput(tempCameraInput);
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    tempPhotoSession.removeOutput(tempPreviewOutput);
    await tempPreviewOutput.release();
  }
  if (!isEmpty(tempPhotoOutput)) {
    tempPhotoSession.removeOutput(tempPhotoOutput);
    await tempPhotoOutput.release();
  }
  if (!isEmpty(tempVideoOutput)) {
    tempPhotoSession.removeOutput(tempVideoOutput);
    await tempVideoOutput.release();
  }
}

let addCommit = async (i: number, mode: number, previewFormat = 1003, videoFormat = 1003) => {
  createInput(i);
  createOutput(i, mode, previewFormat, videoFormat);
  if (tempCameraInput) {
    tempPhotoSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempPhotoSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempPhotoSession.addOutput(tempPhotoOutput);
  }
  if (tempVideoOutput) {
    tempPhotoSession.addOutput(tempVideoOutput);
    await tempVideoOutput.start();
  }
}


let surfaceId: string;
let fileAsset: string;
let fdNumber: number;
let fdPath: string;
let fdObject: ESObject;

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

let createMaps = async (pathName: string) => {
  try {
    let fileDir: ESObject = await featureAbility.getContext().getFilesDir()
    pathName = fileDir + '/' + pathName;
    let file: ESObject = fs.openSync(pathName, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    fileAsset = file;
    fdNumber = file.fd;
    fdPath = "fd://" + fdNumber.toString();

  } catch (err) {
    console.log(`createMaps err ${JSON.stringify(err)}`);
  }
}

let getSurfaceId = async () => {
  try {
    createMaps('video.mp4')
    avRecorderConfig.url = fdPath;
    let recorder = await media.createAVRecorder();
    let errs = await recorder.prepare(avRecorderConfig);
    surfaceId = await recorder.getInputSurface();
  } catch (err) {
    console.log(`getSurfaceId err ${JSON.stringify(err)}`);
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

let power: ESObject;

function sleep(ms: ESObject = 66): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, ms)
  })
}

let createCameraManager = () => {
  try {
    cameraManager = camera.getCameraManager(context);
  } catch (err) {
    console.log(`${TAG} createCameraManager err ${JSON.stringify(err)}`);
  }
}

let isEmpty = (temp: ESObject) => {
  if (temp == null || temp == undefined || temp.length <= 0) {
    return true;
  }
  return false;
}

let createCamers = () => {
  try {
    cameraDevice = cameraManager.getSupportedCameras();
  } catch (err) {
    console.log(`${TAG} createCamers err ${JSON.stringify(err)}`);
  }
}

let ability = async () => {
  const delegator = abilityDelegatorRegistry.getAbilityDelegator();
  const bundleName = abilityDelegatorRegistry.getArguments().bundleName;
  const want: Want = {
    bundleName: bundleName,
    abilityName: 'EntryAbility'
  }
  await delegator.startAbility(want);
  await sleep(1000);
}

async function getPermission() {
  featureAbility.getContext().requestPermissionsFromUser(permission, 0, (data) => {
    console.info("request success" + JSON.stringify(data));
  })
}


export default function cameraColorTest() {
  let dr = Driver.create();
  describe('cameraColorTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      createCameraManager();
      createCamers();
      await getPermission();
      await sleep(500);
      for (let i = 0; i < permission.length; i++) {
        power = await dr?.waitForComponent(ON.text('允许', MatchPattern.EQUALS), 500);
        await power?.click();
        power = null;
        await sleep(500);
      }
      await getSurfaceId();
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })


    /**
     * @tc.number    : testCameraGetSupportedColorSpaces0100
     * @tc.name      : SUB_MULTIMEDIA_GET_SUPPORTED_COLOR_SPACES_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getSupportedColorSpaces
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_GET_SUPPORTED_COLOR_SPACES_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            await tempPhotoSession.commitConfig();
            await sleep();
            let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
            console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_COLOR_SPACES_0100 colorSpaces ${colorSpaces}`);
            expect(isEmpty(colorSpaces)).assertFalse();
            await stopCameraSession();
            await sleep();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_SUPPORTED_COLOR_SPACES_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : testCameraGetActiveColorSpace0100
     * @tc.name      : SUB_MULTIMEDIA_GET_ACTIVE_COLOR_SPACES_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_GET_ACTIVE_COLOR_SPACES_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            await tempPhotoSession.commitConfig();
            await sleep();
            let colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_GET_ACTIVE_COLOR_SPACES_0100 colorSpace ${colorSpace}`);
            expect(isEmpty(colorSpace)).assertFalse();
            await stopCameraSession();
            await sleep();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ACTIVE_COLOR_SPACES_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetActiveColorSpace0100
     * @tc.name      : SUB_MULTIMEDIA_SET_COLOR_SPACES_0100
     * @tc.desc      : 1.createPhotoSession parameter 1
     *                 2.getActiveColorSpace
     *                 3.setColorSpace parameter colorSpaces
     *                 4.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_SET_COLOR_SPACES_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_PHOTO);
        await sleep();
        for (let j = 0; j < cameras.length; j++) {
          addCommit(j, camera.SceneMode.NORMAL_PHOTO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          let colorSpace = tempPhotoSession.getActiveColorSpace();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0100 start colorSpace ${colorSpace}`);
          let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0100 colorSpaces ${colorSpaces}`);
          for (let k = 0; k < colorSpaces.length; k++) {
            tempPhotoSession.setColorSpace(colorSpaces[k]);
            await sleep(200);
            colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0100 end colorSpace ${colorSpace}`);
            expect(colorSpace).assertEqual(colorSpaces[k]);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetColorSpace0200
     * @tc.name      : SUB_MULTIMEDIA_SET_COLOR_SPACES_0200
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getActiveColorSpace
     *                 3.setColorSpace  parameter -1
     *                 4.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_SET_COLOR_SPACES_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            await tempPhotoSession.commitConfig();
            await sleep();
            let colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0200 start colorSpace ${colorSpace}`);
            let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
            ;
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0200 colorSpaces ${colorSpaces}`);
            tempPhotoSession.setColorSpace(-1);
            await sleep(200);
            colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0200 end colorSpace ${colorSpace}`);
            expect(colorSpace).assertEqual(-1);
            await stopCameraSession();
            await sleep();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetColorSpace0300
     * @tc.name      : SUB_MULTIMEDIA_SET_COLOR_SPACES_0300
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getActiveColorSpace
     *                 3.setColorSpace  parameter null
     *                 4.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_SET_COLOR_SPACES_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            await tempPhotoSession.commitConfig();
            await sleep();
            let colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0300 start colorSpace ${colorSpace}`);
            let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
            ;
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0300 colorSpaces ${colorSpaces}`);
            tempPhotoSession.setColorSpace(null);
            await sleep(200);
            colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0300 end colorSpace ${colorSpace}`);
            expect().assertFail();
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0300 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetColorSpace0400
     * @tc.name      : SUB_MULTIMEDIA_SET_COLOR_SPACES_0400
     * @tc.desc      : 1.createPhotoSession parameter 2
     *                 2.getActiveColorSpace
     *                 3.setColorSpace  parameter colorSpaces
     *                 4.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_SET_COLOR_SPACES_0400', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        for (let j = 0; j < cameras.length; j++) {
          addCommit(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          let colorSpace = tempPhotoSession.getActiveColorSpace();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0400 start colorSpace ${colorSpace}`);
          let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0400 colorSpaces ${colorSpaces}`);
          for (let k = 0; k < colorSpaces.length; k++) {
            tempPhotoSession.setColorSpace(colorSpaces[k]);
            await sleep(200);
            colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0400 end colorSpace ${colorSpace}`);
            expect(colorSpace).assertEqual(colorSpaces[k]);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0400 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetColorSpace0500
     * @tc.name      : SUB_MULTIMEDIA_SET_COLOR_SPACES_0500
     * @tc.desc      : 1.createPhotoSession parameter 2
     *                    format 1003
     *                 2.getActiveColorSpace
     *                 3.setColorSpace  parameter 16
     *                 4.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_SET_COLOR_SPACES_0500', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        for (let j = 0; j < cameras.length; j++) {
          addCommit(j, camera.SceneMode.NORMAL_VIDEO);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          let colorSpace = tempPhotoSession.getActiveColorSpace();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0500 start colorSpace ${colorSpace}`);
          let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0500 colorSpaces ${colorSpaces}`);
          tempPhotoSession.setColorSpace(16);
          await sleep(200);
          colorSpace = tempPhotoSession.getActiveColorSpace();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0500 end colorSpace ${colorSpace}`);
          expect(colorSpace).assertEqual(16);
          await stopCameraSession();
          await sleep();
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0500 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetColorSpace0600
     * @tc.name      : SUB_MULTIMEDIA_SET_COLOR_SPACES_0600
     * @tc.desc      : 1.createPhotoSession parameter 2
     *                  format 2001
     *                 2.getActiveColorSpace
     *                 3.setColorSpace  parameter colorSpaces
     *                 4.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_COLOR_SPACES_0600', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        for (let j = 0; j < cameras.length; j++) {
          addCommit(j, camera.SceneMode.NORMAL_VIDEO, camera.CameraFormat.CAMERA_FORMAT_YCBCR_P010,
            camera.CameraFormat.CAMERA_FORMAT_YCBCR_P010);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          let colorSpace = tempPhotoSession.getActiveColorSpace();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0600 start colorSpace ${colorSpace}`);
          let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0600 colorSpaces ${colorSpaces}`);
          for (let k = 0; k < colorSpaces.length; k++) {
            tempPhotoSession.setColorSpace(colorSpaces[k]);
            await sleep(200);
            colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0600 end colorSpace ${colorSpace}`);
            expect(colorSpace).assertEqual(colorSpaces[k]);
          }
          await stopCameraSession();
          await sleep();
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0600 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetColorSpace0700
     * @tc.name      : SUB_MULTIMEDIA_SET_COLOR_SPACES_0700
     * @tc.desc      : 1.createPhotoSession parameter 2
     *                  format 2002
     *                 2.getActiveColorSpace
     *                 3.setColorSpace  parameter colorSpaces
     *                 4.getActiveColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */

    it('SUB_MULTIMEDIA_SET_COLOR_SPACES_0700', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        createPhotoSession(camera.SceneMode.NORMAL_VIDEO);
        await sleep();
        for (let j = 0; j < cameras.length; j++) {
          addCommit(j, camera.SceneMode.NORMAL_VIDEO, camera.CameraFormat.CAMERA_FORMAT_YCRCB_P010,
            camera.CameraFormat.CAMERA_FORMAT_YCRCB_P010);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          let colorSpace = tempPhotoSession.getActiveColorSpace();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0700 start colorSpace ${colorSpace}`);
          let colorSpaces = tempPhotoSession.getSupportedColorSpaces();
          console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0700 colorSpaces ${colorSpaces}`);
          for (let k = 0; k < colorSpaces.length; k++) {
            tempPhotoSession.setColorSpace(colorSpaces[k]);
            await sleep(200);
            colorSpace = tempPhotoSession.getActiveColorSpace();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0700 end colorSpace ${colorSpace}`);
            expect(colorSpace).assertEqual(colorSpaces[k]);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_COLOR_SPACES_0700 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


  })
}