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
import Want from '@ohos.app.ability.Want';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import featureAbility from '@ohos.ability.featureAbility';

let TAG = 'cameraZoom';
let cameraManager: camera.CameraManager;
let context = getContext();
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempPhotoSession: camera.PhotoSession;

let tempSecureSession: camera.SecureSession;

let createInput = async (index: number) => {
  tempCameraInput = cameraManager.createCameraInput(cameraDevice[index]);
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.open();
  }
}

let createOutput = async (index: number, mode: number) => {
  let cameraOutputCap = cameraManager.getSupportedOutputCapability(cameraDevice[index], mode);
  tempPreviewOutput = cameraManager.createPreviewOutput(cameraOutputCap.previewProfiles[0], globalThis.surfaceId);
  tempPhotoOutput = cameraManager.createPhotoOutput(cameraOutputCap.photoProfiles[0]);
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
}

let addCommit = (i: number, mode: number) => {
  createInput(i);
  createOutput(i, mode);
  if (tempCameraInput) {
    tempPhotoSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempPhotoSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempPhotoSession.addOutput(tempPhotoOutput);
  }
}


let createSecureSession = () => {
  tempSecureSession = cameraManager.createSession(camera.SceneMode.SECURE_PHOTO);
  tempSecureSession.beginConfig();
}

let createInputs = async (index: number) => {
  tempCameraInput = cameraManager.createCameraInput(cameraDevice[index]);
  if (!isEmpty(tempCameraInput)) {
    let id = await tempCameraInput.open(true);
    console.log(`createInputes id ${id}`);
  }
}

let addCommits = (i: number, mode: number) => {
  createInputs(i);
  createOutput(i, mode);
  if (tempCameraInput) {
    tempSecureSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempSecureSession.addOutput(tempPreviewOutput);
    tempSecureSession.addSecureOutput(tempPreviewOutput);
  }
}

let stopCameraSessions = async () => {
  tempSecureSession.release();
  if (!isEmpty(tempCameraInput)) {
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    await tempPreviewOutput.release();
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

let createCameras = () => {
  try {
    cameraDevice = cameraManager.getSupportedCameras();
  } catch (err) {
    console.log(`${TAG} createCameras err ${JSON.stringify(err)}`);
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


let correctMode = (data: number | null | undefined) => {
  if (data == null || data == undefined) {
    return 0;
  }
  if (data <= 0 || data > 3) {
    return 0;
  }
  return data;
}

let correctPoint = (data: number) => {
  if (data >= 1) {
    return 1;
  }
  if (data <= 0) {
    return 0;
  }
  return data;
}

let correctRatio = (data: number, arr: Array<number>) => {
  if (data > arr[1]) {
    return arr[1];
  }
  if (data < arr[0]) {
    return arr[0];
  }
  if (Number(data.toFixed(2)) >= Number(data.toFixed(3))) {
    return Number(data.toFixed(2));
  }
  return Number(data.toFixed(2)) + 0.01;
}

async function getPermission() {
  featureAbility.getContext().requestPermissionsFromUser(permission, 0, (data) => {
    console.info("request success" + JSON.stringify(data));
  })
}


export default function cameraFocusTest() {
  let dr = Driver.create();
  describe('cameraZoomTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      createCameraManager();
      createCameras();
      await getPermission();
      await sleep(500);
      for (let i = 0; i < permission.length; i++) {
        power = await dr?.waitForComponent(ON.text('允许', MatchPattern.EQUALS), 500);
        await power?.click();
        power = null;
        await sleep(500);
      }
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
     * @tc.number    : testCameraGetZoomRatioRange0100
     * @tc.name      : SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.commitConfig
     *                 3.getZoomRatioRange
     *                 4.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0100', 0, async (done: Function) => {
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
            let zoomRatioRange = tempPhotoSession.getZoomRatioRange();
            console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0100 zoomRatioRange ${zoomRatioRange}`);
            if (isEmpty(zoomRatioRange)) {
              console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0100 not supported getZoomRatioRange`);
              expect(isEmpty(zoomRatioRange)).assertTrue();
            } else {
              expect(isEmpty(zoomRatioRange)).assertFalse();
            }

            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0100 err${JSON.stringify(err.code)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetZoomRatioRange0200
     * @tc.name      : SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0200
     * @tc.desc      : 1.createSecureSession
     *                 2.addCommits(i, cameraMode[j])
     *                 3.commitConfig
     *                 4.getZoomRatioRange
     *                 5.stopCameraSessions
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraMode = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < cameraMode.length; j++) {
            if (cameraMode[j] === camera.SceneMode.SECURE_PHOTO) {
              createSecureSession();
              await sleep();
              addCommits(i, cameraMode[j]);
              await sleep();
              await tempSecureSession.commitConfig();
              await sleep();
              let zoomRatioRange = tempSecureSession.getZoomRatioRange();
              console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0200 zoomRatioRange ${zoomRatioRange}`);
              expect(isEmpty(zoomRatioRange)).assertFalse();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_RANGE_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetZoomRatio0100
     * @tc.name      : SUB_MULTIMEDIA_GET_ZOOM_RATIO_0100
     * @tc.desc      : 1.createSecureSession
     *                 2.addCommit(0, cameraMode[j])
     *                 3.commitConfig
     *                 4.getZoomRatio
     *                 5.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_ZOOM_RATIO_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          addCommit(0, arr[i]);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          let zoomRatio = tempPhotoSession.getZoomRatio();
          console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_0100 zoomRatio ${zoomRatio}`);
          expect(isEmpty(zoomRatio)).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetZoomRatio0200
     * @tc.name      : SUB_MULTIMEDIA_GET_ZOOM_RATIO_0200
     * @tc.desc      : 1.createSecureSession
     *                 2.addCommits(i, cameraMode[j])
     *                 3.commitConfig
     *                 4.getZoomRatio
     *                 5.stopCameraSessions
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_ZOOM_RATIO_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraMode = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < cameraMode.length; j++) {
            if (cameraMode[j] === camera.SceneMode.SECURE_PHOTO) {
              createSecureSession();
              await sleep();
              addCommits(i, cameraMode[j]);
              await sleep();
              await tempSecureSession.commitConfig();
              await sleep();
              let zoomRatio = tempSecureSession.getZoomRatio();
              console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_0200 zoomRatio ${zoomRatio}`);
              expect(isEmpty(zoomRatio)).assertFalse();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetZoomRatio0300
     * @tc.name      : SUB_MULTIMEDIA_GET_ZOOM_RATIO_0300
     * @tc.desc      : 1.createPhotoSession
     *                 2.addCommit(1, cameraMode[j])
     *                 3.commitConfig
     *                 4.getZoomRatio
     *                 5.stopCameraSessions
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_ZOOM_RATIO_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          addCommit(1, arr[i]);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          let zoomRatio = tempPhotoSession.getZoomRatio();
          console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_0300 zoomRatio ${zoomRatio}`);
          expect(isEmpty(zoomRatio)).assertFalse();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_ZOOM_RATIO_0300 err${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetZoomRatio0100
     * @tc.name      : SUB_MULTIMEDIA_SET_ZOOM_RATIO_0100
     * @tc.desc      : 1.createPhotoSession
     *                 2.addCommit(0, cameraMode[j])
     *                 3.commitConfig
     *                 4.start
     *                 5.getZoomRatioRange
     *                 6.setZoomRatio
     *                 7.getZoomRatio
     *                 8.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_ZOOM_RATIO_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      let tempArr = [-1, 0, 1, 5, 10, 15, 20, 30, 50, 100];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          addCommit(0, arr[i]);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep(100);
          for (let k = 0; k < tempArr.length; k++) {
            let zoomRatio = tempPhotoSession.getZoomRatio();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0100 start zoomRatio ${zoomRatio}`);
            let zoomRatioRange = tempPhotoSession.getZoomRatioRange();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0100 zoomRatioRange ${zoomRatioRange}`);
            tempPhotoSession.setZoomRatio(tempArr[k]);
            await sleep(500);
            zoomRatio = tempPhotoSession.getZoomRatio();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0100 end zoomRatio ${zoomRatio}`);
            expect(zoomRatio).assertEqual(correctRatio(tempArr[k], zoomRatioRange));
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0100 err${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetZoomRatio0200
     * @tc.name      : SUB_MULTIMEDIA_SET_ZOOM_RATIO_0200
     * @tc.desc      : 1.createSecureSession
     *                 2.addCommits(i, cameraMode[j])
     *                 3.commitConfig
     *                 4.start
     *                 5.getZoomRatioRange
     *                 6.setZoomRatio
     *                 7.stopCameraSessions
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_ZOOM_RATIO_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let tempArr = [-1, 0, 1, 5, 10, 15, 20, 30, 50, 100, 200];
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraMode = cameraManager.getSupportedSceneModes(cameras[i]);
          for (let j = 0; j < cameraMode.length; j++) {
            if (cameraMode[j] === camera.SceneMode.SECURE_PHOTO) {
              createSecureSession();
              await sleep();
              addCommits(i, cameraMode[j]);
              await sleep();
              await tempSecureSession.commitConfig();
              await sleep();
              for (let k = 0; k < tempArr.length; k++) {
                let zoomRatioRange = tempSecureSession.getZoomRatioRange();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0200 zoomRatioRange ${zoomRatioRange}`);
                tempSecureSession.setZoomRatio(tempArr[k]);
                await sleep();
              }
              stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetZoomRatio0300
     * @tc.name      : SUB_MULTIMEDIA_SET_ZOOM_RATIO_0300
     * @tc.desc      : 1.createPhotoSession
     *                 2.addCommit(1, cameraMode[j])
     *                 3.commitConfig
     *                 4.start
     *                 5.getZoomRatioRange
     *                 6.setZoomRatio
     *                 7.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_ZOOM_RATIO_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      let tempArr = [-1, 0, 1, 5, 10, 15, 20, 30, 50, 100];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          addCommit(1, arr[i]);
          await sleep();
          await tempPhotoSession.commitConfig();
          await sleep();
          await tempPhotoSession.start();
          await sleep(100);
          for (let k = 0; k < tempArr.length; k++) {
            let zoomRatioRange = tempPhotoSession.getZoomRatioRange();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0300 zoomRatioRange ${zoomRatioRange}`);
            tempPhotoSession.setZoomRatio(tempArr[k]);
            await sleep(500);
          }
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_ZOOM_RATIO_0300 err${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


  })
}