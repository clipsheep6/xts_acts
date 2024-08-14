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
import Want from '@ohos.app.ability.Want';
import { Driver, MatchPattern, ON } from '@ohos.UiTest';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { BusinessError } from '@ohos.base';
import featureAbility from '@ohos.ability.featureAbility';

let TAG = 'cameraInput';
let cameraManager: camera.CameraManager;
let context = getContext();
let cameraDevice: Array<camera.CameraDevice>;

let tempCameraInput: camera.CameraInput;
let tempPreviewOutput: camera.PreviewOutput;


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
  if (temp == null || temp == undefined) {
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


export default function cameraInputTest() {
  let dr = Driver.create();
  describe('cameraInputTest', () => {
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
     * @tc.number    : testCameraOpen0100
     * @tc.name      : SUB_MULTIMEDIA_OPEN_0100
     * @tc.desc      : 1.open callback
     *                 2.close callback
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OPEN_0100', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let temp = false;
      let flag = false;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          await sleep();
          cameraInput.open((errs, info) => {
            if (errs) {
              temp = false;
              return;
            }
            temp = true;
          })
          await sleep();
          cameraInput.close((err) => {
            if (err) {
              flag = false;
              return;
            }
            flag = true;
          })
          await sleep(200);
          console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0100 temp ${JSON.stringify(temp)}`);
          console.log(`${flag} SUB_MULTIMEDIA_OPEN_0100 temp ${JSON.stringify(flag)}`);
          expect(temp).assertTrue();
          expect(flag).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0100 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraOpen0200
     * @tc.name      : SUB_MULTIMEDIA_OPEN_0200
     * @tc.desc      : 1.open promise
     *                 2.close promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OPEN_0200', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let temp = false;
      let flag = false;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          await sleep();
          cameraInput.open().then(() => {
            temp = true;
          }).catch(() => {
            temp = false;
          })
          await sleep(200);
          cameraInput.close().then(() => {
            flag = true;
          }).catch(() => {
            flag = false;
          })
          await sleep(200);
          console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0200 temp ${JSON.stringify(temp)}`);
          console.log(`${flag} SUB_MULTIMEDIA_OPEN_0200 temp ${JSON.stringify(flag)}`);
          expect(temp).assertTrue();
          expect(flag).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0200 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : testCameraOpen0300
     * @tc.name      : SUB_MULTIMEDIA_OPEN_0300
     * @tc.desc      : 1.open promise parameter true
     *                 2.close promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OPEN_0300', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let arr = cameraManager.getSupportedSceneModes(cameras[i])
          if(12 in arr) {
            let cameraInput = cameraManager.createCameraInput(cameras[i]);
            await sleep();
            let id = await cameraInput.open(true)
            await sleep(200);
            await cameraInput.close()
            await sleep(200);
            console.log(`${flag} SUB_MULTIMEDIA_OPEN_0300 id ${id}`);
            expect(isEmpty(id)).assertFalse();
          }
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0300 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraOpen0400
     * @tc.name      : SUB_MULTIMEDIA_OPEN_0400
     * @tc.desc      : 1.open promise parameter false
     *                 2.close promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OPEN_0400', 0, async (done: Function) => {
      let cameras = cameraDevice;
      let temp = false;
      let flag = false;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          await sleep();
          cameraInput.open(false).then((id) => {
            console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0400 id ${JSON.stringify(id)}`);
            temp = true;
          }).catch((err: BusinessError) => {
            temp = false;
          })
          await sleep(200);
          cameraInput.close().then(() => {
            flag = true;
          }).catch((err: BusinessError) => {
            flag = false;
          })
          await sleep(200);
          console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0400 temp ${JSON.stringify(temp)}`);
          console.log(`${flag} SUB_MULTIMEDIA_OPEN_0400 temp ${JSON.stringify(flag)}`);
          expect(temp).assertTrue();
          expect(flag).assertTrue();
        }
        done();
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0400 err ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : testCameraOpen0500
     * @tc.name      : SUB_MULTIMEDIA_OPEN_0500
     * @tc.desc      : 1.open promise
     *                 2.open promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OPEN_0500', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          await sleep();
          await cameraInput.open();
          await sleep(200);
          await cameraInput.open();
          await sleep(200);
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0500 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.OPERATION_NOT_ALLOWED);
        done();
      }
    })

    /**
     * @tc.number    : testCameraOpen0600
     * @tc.name      : SUB_MULTIMEDIA_OPEN_0600
     * @tc.desc      : 1.close promise
     *                 2.close promise
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_OPEN_0600', 0, async (done: Function) => {
      let cameras = cameraDevice;
      try {
        for (let i = 0; i < cameras.length; i++) {
          let cameraInput = cameraManager.createCameraInput(cameras[i]);
          await sleep();
          await cameraInput.close();
          await sleep(200);
          await cameraInput.close();
          await sleep(200);
        }
        done()
      } catch (err) {
        console.log(`${TAG} SUB_MULTIMEDIA_OPEN_0600 err ${JSON.stringify(err)}`);
        expect(Number(err.code)).assertEqual(camera.CameraErrorCode.SERVICE_FATAL_ERROR);
        done();
      }
    })


  })


}