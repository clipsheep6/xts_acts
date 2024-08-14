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
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import Want from '@ohos.app.ability.Want';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import featureAbility from '@ohos.ability.featureAbility';


let TAG = 'cameraExposure';
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

let correctPoint = (data: number) => {
  if (data >= 1) {
    return 1;
  }
  if (data <= 0) {
    return 0;
  }
  return data;
}

let correctBias = (data: number, arr: Array<number>) => {
  if (data > arr[1]) {
    return arr[1];
  }
  if (data < arr[0]) {
    return arr[0];
  }
  return data;
}

async function getPermission() {
  featureAbility.getContext().requestPermissionsFromUser(permission, 0, (data) => {
    console.info("request success" + JSON.stringify(data));
  })
}


export default function cameraExposureTest() {
  let dr = Driver.create();

  describe('cameraExposureTest', () => {
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
     * @tc.number    : testCameraIsExposureModeSupported0100
     * @tc.name      : SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.isExposureModeSupported
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let exposure = [camera.ExposureMode.EXPOSURE_MODE_LOCKED, camera.ExposureMode.EXPOSURE_MODE_LOCKED,
        camera.ExposureMode.EXPOSURE_MODE_AUTO, camera.ExposureMode.EXPOSURE_MODE_AUTO,
        camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO, camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO];
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
            for (let k = 0; k < exposure.length; k++) {
              let isSupported = tempPhotoSession.isExposureModeSupported(exposure[k]);
              console.log(`${TAG} SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0100 isSupported ${isSupported}`);
              expect(isEmpty(isSupported)).assertFalse();
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraIsExposureModeSupported0200
     * @tc.name      : SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.isExposureModeSupported
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let exposure = [camera.ExposureMode.EXPOSURE_MODE_LOCKED, camera.ExposureMode.EXPOSURE_MODE_LOCKED,
        camera.ExposureMode.EXPOSURE_MODE_AUTO, camera.ExposureMode.EXPOSURE_MODE_AUTO,
        camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO, camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO];
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
              for (let k = 0; k < exposure.length; k++) {
                let isSupported = tempSecureSession.isExposureModeSupported(exposure[k]);
                console.log(`${TAG} SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0200 isSupported ${isSupported}`);
                expect(isEmpty(isSupported)).assertFalse();
              }
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraIsExposureModeSupported0300
     * @tc.name      : SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0300
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                  not have commitConfig
     *                 2.isExposureModeSupported
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let exposure = [camera.ExposureMode.EXPOSURE_MODE_LOCKED, camera.ExposureMode.EXPOSURE_MODE_LOCKED,
        camera.ExposureMode.EXPOSURE_MODE_AUTO, camera.ExposureMode.EXPOSURE_MODE_AUTO,
        camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO, camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            for (let k = 0; k < exposure.length; k++) {
              let isSupported = tempPhotoSession.isExposureModeSupported(exposure[k]);
              console.log(`${TAG} SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0300 isSupported ${isSupported}`);
              expect(isEmpty(isSupported)).assertFalse();
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_EXPOSURE_MODE_SUPPORTED_0300 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SESSION_NOT_CONFIG);
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetExposureMode0100
     * @tc.name      : SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getExposureMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0100', 0, async (done: Function) => {
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
            let exposureMode = tempPhotoSession.getExposureMode();
            console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0100 exposureMode ${exposureMode}`);
            expect(isEmpty(exposureMode)).assertFalse();
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetExposureMode0200
     * @tc.name      : SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.getExposureMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0200', 0, async (done: Function) => {
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
              let exposureMode = tempSecureSession.getExposureMode();
              console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0200 exposureMode ${exposureMode}`);
              expect(isEmpty(exposureMode)).assertFalse();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_MODE_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetExposureMode0100
     * @tc.name      : SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.isExposureModeSupported
     *                 3.setExposureMode parameter exposure
     *                 4.getExposureMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let exposure = [camera.ExposureMode.EXPOSURE_MODE_LOCKED, camera.ExposureMode.EXPOSURE_MODE_LOCKED,
        camera.ExposureMode.EXPOSURE_MODE_AUTO, camera.ExposureMode.EXPOSURE_MODE_AUTO,
        camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO, camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO, -1, 5];
      let cameras = cameraDevice;
      let temp: ESObject;
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            await tempPhotoSession.commitConfig();
            await sleep();
            for (let k = 0; k < exposure.length; k++) {
              let exposureMode = tempPhotoSession.getExposureMode();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0100 start exposureMode ${exposureMode}`);
              temp = exposureMode;
              let isSupported = tempPhotoSession.isExposureModeSupported(exposure[k]);
              if (isSupported) {
                tempPhotoSession.setExposureMode(exposure[k]);
                temp = exposure[k];
              }
              await sleep()
              exposureMode = tempPhotoSession.getExposureMode();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0100 end exposureMode ${exposureMode} ++ ${exposure[k]} ++ ${isSupported}`);
              expect(exposureMode).assertEqual(temp);
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetExposureMode0200
     * @tc.name      : SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.isExposureModeSupported
     *                 3.setExposureMode parameter exposure
     *                 4.getExposureMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let exposure = [camera.ExposureMode.EXPOSURE_MODE_LOCKED, camera.ExposureMode.EXPOSURE_MODE_LOCKED,
        camera.ExposureMode.EXPOSURE_MODE_AUTO, camera.ExposureMode.EXPOSURE_MODE_AUTO,
        camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO, camera.ExposureMode.EXPOSURE_MODE_CONTINUOUS_AUTO, -1, 5];
      let temp: ESObject;
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
              for (let k = 0; k < exposure.length; k++) {
                let exposureMode = tempSecureSession.getExposureMode();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0200 start exposureMode ${exposureMode}`);
                temp = exposureMode;
                let isSupported = tempSecureSession.isExposureModeSupported(exposure[k]);
                if (isSupported) {
                  tempSecureSession.setExposureMode(exposure[k]);
                  temp = exposure[k];
                }
                await sleep();
                exposureMode = tempSecureSession.getExposureMode();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0200 end exposureMode ${exposureMode} ++ ${exposure[k]} ++ ${isSupported}`);
                expect(exposureMode).assertEqual(temp);
              }
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_MODE_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetExposureBiasRange0100
     * @tc.name      : SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getExposureBiasRange
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0100', 0, async (done: Function) => {
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
            let biasRangeArray = tempPhotoSession.getExposureBiasRange();
            console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0100 biasRangeArray ${biasRangeArray}`);
            expect(isEmpty(biasRangeArray)).assertFalse();
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetExposureBiasRange0200
     * @tc.name      : SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.getExposureBiasRange
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0200', 0, async (done: Function) => {
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
              let biasRangeArray = tempSecureSession.getExposureBiasRange();
              console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0200 biasRangeArray ${biasRangeArray}`);
              expect(isEmpty(biasRangeArray)).assertFalse();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_BIAS_RANGE_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetExposureValue0100
     * @tc.name      : SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getExposureValue
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0100', 0, async (done: Function) => {
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
            let exposureValue = tempPhotoSession.getExposureValue();
            console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0100 exposureValue ${exposureValue}`);
            expect(isEmpty(exposureValue)).assertFalse();
            await stopCameraSession();
            await sleep();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetExposureValue0200
     * @tc.name      : SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.getExposureValue
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0200', 0, async (done: Function) => {
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
              let exposureValue = tempSecureSession.getExposureValue();
              console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0200 exposureValue ${exposureValue}`);
              expect(isEmpty(exposureValue)).assertFalse();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_EXPOSURE_VALUE_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetExposureBias0100
     * @tc.name      : SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getExposureValue
     *                 3.setExposureBias parameter tempArr
     *                 4.getExposureValue
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let tempArr = [-4, -4, -3, -3, -2, -2, -2.5, -1, -1, 0, 0, 1, 1, 1.1, 2, 2, 3, 3, 4, 4];
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
            for (let k = 0; k < tempArr.length; k++) {
              let exposureValue = tempPhotoSession.getExposureValue();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0100 start exposureValue ${exposureValue}`);
              let biasRangeArray = tempPhotoSession.getExposureBiasRange();
              tempPhotoSession.setExposureBias(tempArr[k]);
              await sleep();
              exposureValue = tempPhotoSession.getExposureValue();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0100 end exposureValue ${exposureValue}`);
              expect(exposureValue).assertEqual(correctBias(tempArr[k], biasRangeArray));

            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetExposureBias0200
     * @tc.name      : SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.getExposureValue
     *                 3.setExposureBias parameter tempArr
     *                 4.getExposureValue
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let tempArr = [-4, -4, -3, -3, -2, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4];
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
                let exposureValue = tempSecureSession.getExposureValue();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0200 start exposureValue ${exposureValue}`);
                let biasRangeArray = tempSecureSession.getExposureBiasRange();
                tempSecureSession.setExposureBias(tempArr[k]);
                await sleep();
                exposureValue = tempSecureSession.getExposureValue();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0200 end exposureValue ${exposureValue}`);
                expect(exposureValue).assertEqual(correctBias(tempArr[k], biasRangeArray));
              }
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetExposureBias0300
     * @tc.name      : SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0300
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getExposureValue
     *                 3.setExposureBias parameter tempArr
     *                 4.getExposureValue
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let tempArr = [-5, -10, 5, 10];
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
            for (let k = 0; k < tempArr.length; k++) {
              let exposureValue = tempPhotoSession.getExposureValue();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0300 start exposureValue ${exposureValue}`);
              let biasRangeArray = tempPhotoSession.getExposureBiasRange();
              tempPhotoSession.setExposureBias(tempArr[k]);
              await sleep();
              exposureValue = tempPhotoSession.getExposureValue();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0300 end exposureValue ${exposureValue}`);
              expect(exposureValue).assertEqual(correctBias(tempArr[k], biasRangeArray));

            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_EXPOSURE_BIAS_0300 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetMeteringPoint0100
     * @tc.name      : SUB_MULTIMEDIA_GET_METERING_POINT_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.getMeteringPoint
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_METERING_POINT_0100', 0, async (done: Function) => {
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
            let exposurePoint = tempPhotoSession.getMeteringPoint();
            console.log(`${TAG} SUB_MULTIMEDIA_GET_METERING_POINT_0100 exposurePoint ${exposurePoint}`);
            expect(isEmpty(exposurePoint)).assertFalse();
            await stopCameraSession();
            await sleep();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_METERING_POINT_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraGetMeteringPoint0200
     * @tc.name      : SUB_MULTIMEDIA_GET_METERING_POINT_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.getMeteringPoint
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_METERING_POINT_0200', 0, async (done: Function) => {
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
              let exposurePoint = tempSecureSession.getMeteringPoint();
              console.log(`${TAG} SUB_MULTIMEDIA_GET_METERING_POINT_0200 exposurePoint ${exposurePoint}`);
              expect(isEmpty(exposurePoint)).assertFalse();
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_METERING_POINT_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetMeteringPoint0100
     * @tc.name      : SUB_MULTIMEDIA_SET_METERING_POINT_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.setMeteringPoint parameter tempArr
     *                 3.getMeteringPoint
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_METERING_POINT_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let tempArr: Array<camera.Point> = [{
        x: -1, y: -1
      }, {
        x: 0, y: 0
      }, {
        x: 0.5, y: 0.5
      }, {
        x: 1, y: 1
      }, {
        x: 0.11, y: 0.11
      }];
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
            for (let k = 0; k < tempArr.length; k++) {
              let exposurePoint = tempPhotoSession.getMeteringPoint();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0100 start exposurePoint ${exposurePoint}`);
              tempPhotoSession.setMeteringPoint(tempArr[k]);
              await sleep();
              exposurePoint = tempPhotoSession.getMeteringPoint();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0100 end exposurePoint ${exposurePoint}`);
              expect(Number((exposurePoint.x).toFixed(6))).assertEqual(correctPoint(tempArr[k].x));
              expect(Number((exposurePoint.y).toFixed(6))).assertEqual(correctPoint(tempArr[k].y));
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0100 err${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetMeteringPoint0200
     * @tc.name      : SUB_MULTIMEDIA_SET_METERING_POINT_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.setMeteringPoint parameter tempArr
     *                 3.getMeteringPoint
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_METERING_POINT_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let tempArr: Array<camera.Point> = [{
        x: -1, y: -1
      }, {
        x: 0, y: 0
      }, {
        x: 0.5, y: 0.5
      }, {
        x: 1, y: 1
      }];
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
                let exposurePoint = tempSecureSession.getMeteringPoint();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0200 start exposurePoint ${exposurePoint}`);
                tempSecureSession.setMeteringPoint(tempArr[k]);
                await sleep();
                exposurePoint = tempSecureSession.getMeteringPoint();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0200 end exposurePoint ${exposurePoint}`);
                expect(Number((exposurePoint.x).toFixed(6))).assertEqual(correctPoint(tempArr[k].x));
                expect(Number((exposurePoint.y).toFixed(6))).assertEqual(correctPoint(tempArr[k].y));
              }
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetMeteringPoint0300
     * @tc.name      : SUB_MULTIMEDIA_SET_METERING_POINT_0300
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.setMeteringPoint parameter tempArr
     *                 3.getMeteringPoint
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_METERING_POINT_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let tempArr: Array<camera.Point> = [{
        x: -2, y: 10
      }, {
        x: -3, y: -5
      }, {
        x: 5, y: -10
      }, {
        x: 10, y: 10
      }];
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
            for (let k = 0; k < tempArr.length; k++) {
              let exposurePoint = tempPhotoSession.getMeteringPoint();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0300 start exposurePoint ${exposurePoint}`);
              tempPhotoSession.setMeteringPoint(tempArr[k]);
              await sleep();
              exposurePoint = tempPhotoSession.getMeteringPoint();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0300 end exposurePoint ${exposurePoint}`);
              expect(Number((exposurePoint.x).toFixed(6))).assertEqual(correctPoint(tempArr[k].x));
              expect(Number((exposurePoint.y).toFixed(6))).assertEqual(correctPoint(tempArr[k].y));
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_METERING_POINT_0300 err${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

  })
}