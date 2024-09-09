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

let TAG = 'cameraFlash';
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

let check = (data: number | null | undefined) => {
  if (data == null || data == undefined) {
    return 0;
  }
  return data;
}

async function getPermission() {
  featureAbility.getContext().requestPermissionsFromUser(permission, 0, (data) => {
    console.info("request success" + JSON.stringify(data));
  })
}


export default function cameraFlashTest() {
  let dr = Driver.create();
  describe('cameraFlashTest', () => {
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
     * @tc.number    : testCameraHasFlag0100
     * @tc.name      : SUB_MULTIMEDIA_HAS_FLAG_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.hasFlash
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_HAS_FLAG_0100', 0, async (done: Function) => {
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
            let status = tempPhotoSession.hasFlash();
            console.log(`${TAG} SUB_MULTIMEDIA_HAS_FLAG_0100 status ${status} `);
            expect(isEmpty(status)).assertFalse();
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_HAS_FLAG_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraHasFlag0200
     * @tc.name      : SUB_MULTIMEDIA_HAS_FLAG_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.hasFlash
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_HAS_FLAG_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
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
              let status = tempSecureSession.hasFlash();
              console.log(`${TAG} SUB_MULTIMEDIA_HAS_FLAG_0200 status ${status} `);
              expect(isEmpty(status)).assertFalse();
              stopCameraSessions();
              await sleep();
            }
          }
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_HAS_FLAG_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraHasFlag0300
     * @tc.name      : SUB_MULTIMEDIA_HAS_FLAG_0300
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                   not have commitConfig
     *                 2.hasFlash
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_HAS_FLAG_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO, camera.SceneMode.SECURE_PHOTO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            let status = tempPhotoSession.hasFlash();
            console.log(`${TAG} SUB_MULTIMEDIA_HAS_FLAG_0300 status ${status} `);
            expect(isEmpty(status)).assertFalse();
            stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_HAS_FLAG_0300 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SESSION_NOT_CONFIG);
        done();
      }
    })

    /**
     * @tc.number    : testCameraIsFlashModeSupported0100
     * @tc.name      : SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.hasFlash
     *                 3.isFlashModeSupported
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      let flashMode =
        [camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_OPEN,
          camera.FlashMode.FLASH_MODE_OPEN, camera.FlashMode.FLASH_MODE_AUTO, camera.FlashMode.FLASH_MODE_AUTO,
          camera.FlashMode.FLASH_MODE_ALWAYS_OPEN, camera.FlashMode.FLASH_MODE_ALWAYS_OPEN];
      try {
        for (let i = 0; i < arr.length; i++) {
          createPhotoSession(arr[i]);
          await sleep();
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            await tempPhotoSession.commitConfig();
            await sleep();
            let status = tempPhotoSession.hasFlash();
            if (status) {
              for (let k = 0; k < flashMode.length; k++) {
                let status = tempPhotoSession.isFlashModeSupported(flashMode[k]);
                console.log(`${TAG} SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0100 status ${status}`);
                expect(isEmpty(status)).assertFalse();
              }
            } else {
              console.log(`${TAG} SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0100 ${status} not have flash`);
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraIsFlashModeSupported0200
     * @tc.name      : SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.hasFlash
     *                 3.isFlashModeSupported
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let flashMode =
        [camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_OPEN,
          camera.FlashMode.FLASH_MODE_OPEN, camera.FlashMode.FLASH_MODE_AUTO, camera.FlashMode.FLASH_MODE_AUTO,
          camera.FlashMode.FLASH_MODE_ALWAYS_OPEN, camera.FlashMode.FLASH_MODE_ALWAYS_OPEN, 4];
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
              let status = tempSecureSession.hasFlash();
              if (status) {
                for (let k = 0; k < flashMode.length; k++) {
                  let status = tempSecureSession.isFlashModeSupported(flashMode[k]);
                  console.log(`${TAG} SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0200 status ${status}`);
                  expect(isEmpty(status)).assertFalse();
                }
              } else {
                console.log(`${TAG} SUB_MULTIMEDIA_IS_FLASH_MODE_SUPPORTED_0200 ${status} not have flash`);
              }
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} testCameraIsFlashModeSupported0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetFlashMode0100
     * @tc.name      : SUB_MULTIMEDIA_GET_FLASH_MODE_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.hasFlash
     *                 3.getFlashMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_FLASH_MODE_0100', 0, async (done: Function) => {
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
            let status = tempPhotoSession.hasFlash();
            if (status) {
              let flashMode = tempPhotoSession.getFlashMode();
              console.log(`${TAG} SUB_MULTIMEDIA_GET_FLASH_MODE_0100 flashMode ${flashMode}`);
              expect(isEmpty(flashMode)).assertFalse();
            } else {
              console.log(`${TAG} SUB_MULTIMEDIA_GET_FLASH_MODE_0100 ${status} not have flash`);
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} testCameraGetFlashMode0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraGetFlashMode0200
     * @tc.name      : SUB_MULTIMEDIA_GET_FLASH_MODE_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.hasFlash
     *                 3.getFlashMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_GET_FLASH_MODE_0200', 0, async (done: Function) => {
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
              let status = tempSecureSession.hasFlash();
              if (status) {
                let flashMode = tempSecureSession.getFlashMode();
                console.log(`${TAG} SUB_MULTIMEDIA_GET_FLASH_MODE_0200 flashMode ${flashMode}`);
                expect(isEmpty(flashMode)).assertFalse();
              } else {
                console.log(`${TAG} SUB_MULTIMEDIA_GET_FLASH_MODE_0200 ${status} not have flash`);
              }
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_GET_FLASH_MODE_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


    /**
     * @tc.number    : testCameraSetFlashMode0100
     * @tc.name      : SUB_MULTIMEDIA_SET_FLASH_MODE_0100
     * @tc.desc      : 1.createPhotoSession parameter 1,2
     *                 2.hasFlash
     *                 3.isFlashModeSupported
     *                 4.setFlashMode parameter flashMode
     *                 5.getFlashMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_FLASH_MODE_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      let flashMode =
        [camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_OPEN,
          camera.FlashMode.FLASH_MODE_OPEN, camera.FlashMode.FLASH_MODE_AUTO, camera.FlashMode.FLASH_MODE_AUTO,
          camera.FlashMode.FLASH_MODE_ALWAYS_OPEN, camera.FlashMode.FLASH_MODE_ALWAYS_OPEN];
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
            let status = tempPhotoSession.hasFlash();
            console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0100 status ${status} `);
            if (status) {
              for (let k = 0; k < flashMode.length; k++) {
                let status = tempPhotoSession.isFlashModeSupported(flashMode[k]);
                console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0100 status ${status}`);
                let mode = tempPhotoSession.getFlashMode();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0100 Mode ${mode}`);
                let temp = mode;
                if (status) {
                  tempPhotoSession.setFlashMode(flashMode[k]);
                  temp = flashMode[k];
                }
                await sleep();
                mode = tempPhotoSession.getFlashMode();
                console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0100 Mode ${mode} ++ flashMode ${flashMode} ++ status ${status}`);
                await sleep();
                expect(mode).assertEqual(temp);
              }
            } else {
              console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0100 is not flash`);
            }
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0100 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })

    /**
     * @tc.number    : testCameraSetFlashMode0200
     * @tc.name      : SUB_MULTIMEDIA_SET_FLASH_MODE_0200
     * @tc.desc      : 1.createPhotoSession parameter 12
     *                 2.hasFlash
     *                 3.isFlashModeSupported
     *                 4.setFlashMode parameter flashMode
     *                 5.getFlashMode
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_SET_FLASH_MODE_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let temp: ESObject;
      let flashMode =
        [camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_CLOSE, camera.FlashMode.FLASH_MODE_OPEN,
          camera.FlashMode.FLASH_MODE_OPEN, camera.FlashMode.FLASH_MODE_AUTO, camera.FlashMode.FLASH_MODE_AUTO,
          camera.FlashMode.FLASH_MODE_ALWAYS_OPEN, camera.FlashMode.FLASH_MODE_ALWAYS_OPEN];
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
              let status = tempSecureSession.hasFlash();
              console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0200 status ${status} `);
              if (status) {
                for (let k = 0; k < flashMode.length; k++) {
                  let status = tempSecureSession.isFlashModeSupported(flashMode[k]);
                  console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0200 status ${status}`);
                  let mode = tempSecureSession.getFlashMode();
                  console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0200 Mode ${mode}`);
                  temp = mode;
                  if (status) {
                    tempSecureSession.setFlashMode(flashMode[k]);
                    temp = flashMode[k];
                  }
                  await sleep();
                  mode = tempSecureSession.getFlashMode();
                  console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0200 Mode ${mode} ++ flashMode ${flashMode} ++ status ${status}`);
                  await sleep();
                  expect(mode).assertEqual(temp);
                }
              } else {
                console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0200 is not flash`);
              }
              await stopCameraSessions();
              await sleep();
            }
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_SET_FLASH_MODE_0200 err ${JSON.stringify(err)}`);
        expect(isEmpty(err)).assertTrue();
        done();
      }
    })


  })
}