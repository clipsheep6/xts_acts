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
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import Want from '@ohos.app.ability.Want';
import featureAbility from '@ohos.ability.featureAbility';

let TAG = 'cameraSession';
let cameraManager: camera.CameraManager;
let context = getContext();
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;
let tempPhotoOutput: camera.PhotoOutput;
let tempSession: camera.PhotoSession;

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

let createSession = (mode: number) => {
  tempSession = cameraManager.createSession(mode);
  tempSession.beginConfig();
}

let stopCameraSession = async () => {
  tempSession.beginConfig();
  if (!isEmpty(tempCameraInput)) {
    tempSession.removeInput(tempCameraInput);
    await tempCameraInput.close();
  }
  if (!isEmpty(tempPreviewOutput)) {
    tempSession.removeOutput(tempPreviewOutput)
    await tempPreviewOutput.release()
  }
  if (!isEmpty(tempPhotoOutput)) {
    tempSession.removeOutput(tempPhotoOutput);
    await tempPhotoOutput.release();
  }
}

let addCommit = (i: number, mode: number) => {
  createInput(i);
  createOutput(i, mode);
  if (tempCameraInput) {
    tempSession.addInput(tempCameraInput);
  }
  if (tempPreviewOutput) {
    tempSession.addOutput(tempPreviewOutput);
  }
  if (tempPhotoOutput) {
    tempSession.addOutput(tempPhotoOutput);
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

async function getPermission() {
  featureAbility.getContext().requestPermissionsFromUser(permission, 0, (data) => {
    console.info("request success" + JSON.stringify(data));
  })
}


export default function cameraSessionTest() {
  let dr = Driver.create();

  describe('cameraSessionTest', () => {
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
     * @tc.number    : testCameraBeginConfig0100
     * @tc.name      : SUB_MULTIMEDIA_BEGIN_CONFIG_0100
     * @tc.desc      : 1.createSession parameter tempArr
     *                 2.beginConfig
     *                 3.beginConfig
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_BEGIN_CONFIG_0100', 0, async (done: Function) => {
      let tempArr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < tempArr.length; i++) {
          tempSession = cameraManager.createSession(tempArr[i]);
          tempSession.beginConfig();
          tempSession.beginConfig();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_BEGIN_CONFIG_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SESSION_CONFIG_LOCKED);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCommitConfig0100
     * @tc.name      : SUB_MULTIMEDIA_COMMIT_CONFIG_0100
     * @tc.desc      : 1.createSession parameter tempArr
     *                 2.commitConfig
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_COMMIT_CONFIG_0100', 0, async (done: Function) => {
      let tempArr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < tempArr.length; i++) {
          createSession(tempArr[i]);
          await tempSession.commitConfig();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_COMMIT_CONFIG_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCommitConfig0200
     * @tc.name      : SUB_MULTIMEDIA_COMMIT_CONFIG_0200
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(j, arr[i])
     *                 3.commitConfig
     *                 4.commitConfig
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_COMMIT_CONFIG_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            await sleep();
            await tempSession.commitConfig();
            await sleep();
            await tempSession.commitConfig();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_COMMIT_CONFIG_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCanAddInput0100
     * @tc.name      : SUB_MULTIMEDIA_CAN_ADD_INPUT_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(j, arr[i])
     *                 3.canAddInput
     *                 4.commitConfig
     *                 5.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAN_ADD_INPUT_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            let canAdd = tempSession.canAddInput(tempCameraInput);
            console.log(`${TAG} SUB_MULTIMEDIA_CAN_ADD_INPUT_0100 canAdd ${JSON.stringify(canAdd)}`);
            await tempSession.commitConfig();
            await stopCameraSession();
            await sleep();
            expect(isEmpty(canAdd)).assertFalse();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAN_ADD_INPUT_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraAddInput0100
     * @tc.name      : SUB_MULTIMEDIA_ADD_INPUT_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addInput parameter null
     *                 3.commitConfig
     *                 4.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ADD_INPUT_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          tempSession.addInput(null);
          await tempSession.commitConfig();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ADD_INPUT_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraAddInput0200
     * @tc.name      : SUB_MULTIMEDIA_ADD_INPUT_0200
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addInput parameter tempCameraInput
     *                 3.addInput parameter tempCameraInput
     *                 4.commitConfig
     *                 5.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ADD_INPUT_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          createInput(0);
          await sleep();
          tempSession.addInput(tempCameraInput);
          await sleep();
          tempSession.addInput(tempCameraInput);
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ADD_INPUT_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraRemoveInput0100
     * @tc.name      : SUB_MULTIMEDIA_REMOVE_INPUT_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2. addCommit(0, arr[i])
     *                 3.commitConfig
     *                 4.removeInput parameter tempCameraInput
     *                 5.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_REMOVE_INPUT_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await sleep();
          await tempSession.commitConfig();
          tempSession.removeInput(tempCameraInput);
          await stopCameraSession();
          await sleep();

        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_REMOVE_INPUT_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })


    /**
     * @tc.number    : testCameraRemoveInput0200
     * @tc.name      : SUB_MULTIMEDIA_REMOVE_INPUT_0200
     * @tc.desc      : 1.createSession parameter arr
     *                 2. addCommit(0, arr[i])
     *                 3.removeInput parameter null
     *                 4.commitConfig
     *                 5.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_REMOVE_INPUT_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          tempSession.removeInput(null);
          await sleep();
          await tempSession.commitConfig();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_REMOVE_INPUT_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraCanAddOutput0100
     * @tc.name      : SUB_MULTIMEDIA_CAN_ADD_OUTPUT_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2. addCommit(j, arr[i])
     *                 3.canAddOutput parameter tempPreviewOutput
     *                 4.commitConfig
     *                 5.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CAN_ADD_OUTPUT_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          for (let j = 0; j < cameras.length; j++) {
            addCommit(j, arr[i]);
            let canAdd = tempSession.canAddOutput(tempPreviewOutput);
            console.log(`${TAG} SUB_MULTIMEDIA_CAN_ADD_OUTPUT_0100 canAdd ${JSON.stringify(canAdd)}`);
            expect(isEmpty(canAdd)).assertFalse();
            await tempSession.commitConfig();
            await stopCameraSession();
            await sleep();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_CAN_ADD_OUTPUT_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraAddOutput0100
     * @tc.name      : SUB_MULTIMEDIA_ADD_OUTPUT_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addOutput parameter addOutput
     *                 3.commitConfig
     *                 4.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ADD_OUTPUT_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          tempSession.addOutput(null);
          await sleep();
          await tempSession.commitConfig();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ADD_OUTPUT_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraAddOutput0200
     * @tc.name      : SUB_MULTIMEDIA_ADD_OUTPUT_0200
     * @tc.desc      : 1.createSession parameter arr
     *                 2.createOutput(0, arr[i])
     *                 3.addOutput parameter tempPreviewOutput
     *                 4.addOutput parameter tempPreviewOutput
     *                 5.commitConfig
     *                 6.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_ADD_OUTPUT_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          createOutput(0, arr[i]);
          await sleep();
          tempSession.addOutput(tempPreviewOutput);
          await sleep();
          tempSession.addOutput(tempPreviewOutput);
          await tempSession.commitConfig();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_ADD_OUTPUT_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraRemoveOutput0100
     * @tc.name      : SUB_MULTIMEDIA_REMOVE_OUTPUT_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.commitConfig
     *                 4.removeOutput parameter tempPreviewOutput
     *                 5.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_REMOVE_OUTPUT_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await tempSession.commitConfig();
          await sleep();
          tempSession.removeOutput(tempPreviewOutput);
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_REMOVE_OUTPUT_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })


    /**
     * @tc.number    : testCameraRemoveOutput0200
     * @tc.name      : SUB_MULTIMEDIA_REMOVE_OUTPUT_0200
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.removeOutput parameter null
     *                 4.commitConfig
     *                 6.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_REMOVE_OUTPUT_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          tempSession.removeOutput(null);
          await sleep();
          await tempSession.commitConfig();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_REMOVE_OUTPUT_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.INVALID_ARGUMENT);
        done();
      }
    })


    /**
     * @tc.number    : testCameraStart0100
     * @tc.name      : SUB_MULTIMEDIA_START_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.commitConfig
     *                 4.start
     *                 5.start
     *                 6.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_START_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO]
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await tempSession.commitConfig();
          await sleep();
          await tempSession.start();
          await sleep();
          await tempSession.start();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_START_0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraStart0200
     * @tc.name      : SUB_MULTIMEDIA_START_0200
     * @tc.desc      : 1.createSession parameter 1
     *                 2.start
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_START_0200', 0, async (done: Function) => {
      try {
        createSession(1);
        await tempSession.start();
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_START_0200 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SESSION_NOT_CONFIG);
        done();
      }
    })

    /**
     * @tc.number    : testCameraStop0100
     * @tc.name      : SUB_MULTIMEDIA_STOP_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.commitConfig
     *                 4.stop
     *                 5.stop
     *                 6.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_STOP_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await tempSession.commitConfig();
          await sleep();
          await tempSession.stop();
          await sleep();
          await tempSession.stop();
          await stopCameraSession();
          await sleep();
        }
        done();
      } catch (err) {
        console.log(`${TAG} testCameraStop0100 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraStop0200
     * @tc.name      : SUB_MULTIMEDIA_STOP_0200
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.commitConfig
     *                 4.start
     *                 5.stop
     *                 6.setZoomRatio parameter 3
     *                 7.getZoomRatio
     *                 8.stopCameraSession
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_STOP_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO]
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await tempSession.commitConfig();
          await sleep();
          await tempSession.start();
          await sleep();
          await tempSession.stop();
          await sleep();
          tempSession.setZoomRatio(3);
          await sleep(300);
          let data = tempSession.getZoomRatio();
          await sleep();
          await stopCameraSession();
          await sleep();
          expect(data).not().assertEqual(3);
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_STOP_0200 err ${JSON.stringify(err.code)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR)
        done();
      }
    })


    /**
     * @tc.number    : testCameraRelease0100
     * @tc.name      : SUB_MULTIMEDIA_RELEASE_0100
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.release
     *                 4.release
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RELEASE_0100', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO]
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await tempSession.release();
          await sleep();
          await tempSession.release();
          expect(true).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_RELEASE_0100 err ${JSON.stringify(err.code)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraRelease0200
     * @tc.name      : SUB_MULTIMEDIA_RELEASE_0200
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.release
     *                 4.beginConfig
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RELEASE_0200', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await tempSession.release();
          await sleep();
          tempSession.beginConfig();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_RELEASE_0200 err ${JSON.stringify(err.code)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


    /**
     * @tc.number    : testCameraRelease0300
     * @tc.name      : SUB_MULTIMEDIA_RELEASE_0300
     * @tc.desc      : 1.createSession parameter arr
     *                 2.addCommit(0, arr[i])
     *                 3.release
     *                 4.commitConfig
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_RELEASE_0300', 0, async (done: Function) => {
      let arr = [camera.SceneMode.NORMAL_PHOTO, camera.SceneMode.NORMAL_VIDEO];
      try {
        for (let i = 0; i < arr.length; i++) {
          createSession(arr[i]);
          addCommit(0, arr[i]);
          await sleep();
          await tempSession.release();
          await sleep();
          await tempSession.commitConfig();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_RELEASE_0300 err ${JSON.stringify(err.code)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })


  })
}