/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import common from '@ohos.app.ability.common';
import appManager from '@ohos.app.ability.appManager';
import Want from '@ohos.app.ability.Want';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

let ERROR_CODE = 202;
let context;

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

const sleep = async delay => {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve(0);
    }, delay);
  });
};

export default function appManagerApiTest() {

  describe('appManagerApiTest', function () {

    /**
     * @tc.number: System_API_Test_App_Manager_1800
     * @tc.name: appManager.on system interface interception test
     * @tc.desc: Test the third-party application call appManager.on will be blocked
     * @tc.level 3
     */
    it('System_API_Test_App_Manager_1800', 0, async (done: Function) => {
      let TAG = 'System_API_Test_App_Manager_1800';
      try {
        let abilityFirstFrameStateObserverForAll: appManager.AbilityFirstFrameStateObserver = {
          onAbilityFirstFrameDrawn(abilityStateData: appManager.AbilityFirstFrameStateData) {
            console.log("System_API_Test_App_Manager_1800 onAbilityFirstFrameDrawingCompleted all", JSON.stringify(abilityStateData));
            expect(abilityStateData.bundleName).assertEqual('com.ohos.getstartparameterhelper3')
            expect(abilityStateData.abilityName).assertEqual('EntryAbility')
            expect(abilityStateData.moduleName).assertEqual('entry')
            done();
          }
        };
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll, 'com.ohos.getstartparameterhelper3');

        let want: Want = {
          bundleName: 'com.ohos.getstartparameterhelper3',
          abilityName: 'EntryAbility',
        }
        abilityDelegator.startAbility(want).then(() => {
          console.info('System_API_Test_App_Manager_1800 start successful.');
        }).catch((error) => {
          console.error('System_API_Test_App_Manager_1800 start failed. Cause: ' + JSON.stringify(error.message));
        })
      } catch (err) {
        console.log(TAG + "  err.code: " + err.code);
        expect(err.code).assertEqual(ERROR_CODE);
        done();
      }
    })


    /**
     * @tc.number: System_API_Test_App_Manager_1900
     * @tc.name: appManager.on system interface interception test
     * @tc.desc: Test the third-party application call appManager.on will be blocked
     * @tc.level 3
     */
    it('System_API_Test_App_Manager_1900', 0, async (done: Function) => {
      let TAG = 'System_API_Test_App_Manager_1900';
      try {
        let abilityFirstFrameStateObserverForAll: appManager.AbilityFirstFrameStateObserver = {
          onAbilityFirstFrameDrawn(abilityStateData: appManager.AbilityFirstFrameStateData) {
            console.log("System_API_Test_App_Manager_1900 onAbilityFirstFrameDrawingCompleted all", JSON.stringify(abilityStateData));
            expect(abilityStateData.bundleName).assertEqual('com.ohos.getstartparameterhelper2')
            expect(abilityStateData.abilityName).assertEqual('EntryAbility')
            expect(abilityStateData.moduleName).assertEqual('entry')
            done();
          }
        };
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll, 'com.ohos.getstartparameterhelper2');
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll, 'com.ohos.getstartparameterhelper2');
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll, 'com.ohos.getstartparameterhelper2');

        let want: Want = {
          bundleName: 'com.ohos.getstartparameterhelper2',
          abilityName: 'EntryAbility',
        }
        abilityDelegator.startAbility(want).then(() => {
          console.info('System_API_Test_App_Manager_1900 start successful.');
        }).catch((error) => {
          console.error('System_API_Test_App_Manager_1900 start failed. Cause: ' + JSON.stringify(error.message));
        })
      } catch (err) {
        console.log(TAG + "  err.code: " + err.code);
        expect(err.code).assertEqual(ERROR_CODE);
        done();
      }
    })


    /**
     * @tc.number: System_API_Test_App_Manager_2000
     * @tc.name: appManager.on system interface interception test
     * @tc.desc: Test the third-party application call appManager.on will be blocked
     * @tc.level 3
     */
    it('System_API_Test_App_Manager_2000', 0, async (done: Function) => {
      let TAG = 'System_API_Test_App_Manager_2000';
      let isStart = false;
      try {
        let abilityFirstFrameStateObserverForAll: appManager.AbilityFirstFrameStateObserver = {
          onAbilityFirstFrameDrawn(abilitiFirstFrameStateData: appManager.AbilityFirstFrameStateData) {
            console.log("System_API_Test_App_Manager_2000 onAbilityFirstFrameDrawingCompleted all", JSON.stringify(abilitiFirstFrameStateData));
            expect(abilitiFirstFrameStateData.bundleName).assertEqual('com.ohos.getstartparameterhelper')
            expect(abilitiFirstFrameStateData.moduleName).assertEqual('entry')
            if (isStart) {
              expect(abilitiFirstFrameStateData.abilityName).assertEqual('MainAbility')
              done();
            } else {
              expect(abilitiFirstFrameStateData.abilityName).assertEqual('EntryAbility')
            }
          }
        };
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll, 'com.ohos.getstartparameterhelper');

        let want: Want = {
          bundleName: 'com.ohos.getstartparameterhelper',
          abilityName: 'EntryAbility',
        }
        abilityDelegator.startAbility(want).then(() => {
          console.info('System_API_Test_App_Manager_2000 start successful.');
        }).catch((error) => {
          console.error('System_API_Test_App_Manager_2000 start failed. Cause: ' + JSON.stringify(error.message));
        })

        await sleep(1500);


        isStart = true;
        let want1: Want = {
          bundleName: 'com.ohos.getstartparameterhelper',
          abilityName: 'MainAbility',
        }
        abilityDelegator.startAbility(want1).then(() => {
          console.info('System_API_Test_App_Manager_2000 start successful.');
        }).catch((error) => {
          console.error('System_API_Test_App_Manager_2000 start failed. Cause: ' + JSON.stringify(error.message));
        })

      } catch (err) {
        console.log(TAG + "  err.code: " + err.code);
        expect(err.code).assertEqual(ERROR_CODE);
        done();
      }
    })


    /**
     * @tc.number: System_API_Test_App_Manager_2001
     * @tc.name: appManager.on system interface interception test
     * @tc.desc: Test the third-party application call appManager.on will be blocked
     * @tc.level 3
     */
    it('System_API_Test_App_Manager_2001', 0, async (done: Function) => {
      let TAG = 'System_API_Test_App_Manager_2001';
      try {
        let abilityFirstFrameStateObserverForAll: appManager.AbilityFirstFrameStateObserver = {
          onAbilityFirstFrameDrawn(abilityStateData: appManager.AbilityFirstFrameStateData) {
            console.log("System_API_Test_App_Manager_2001 onAbilityFirstFrameDrawingCompleted all", JSON.stringify(abilityStateData));
            expect().assertFail();
          }
        };
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll, 'com.ohos.getstartparameterhelper');
        appManager.off('abilityFirstFrameState', abilityFirstFrameStateObserverForAll);


        let want: Want = {
          bundleName: 'com.ohos.getstartparameterhelper',
          abilityName: 'EntryAbility',
        }
        abilityDelegator.startAbility(want).then(() => {
          done();
          console.info('System_API_Test_App_Manager_2001 start successful.');
        }).catch((error) => {
          console.error('System_API_Test_App_Manager_2001 start failed. Cause: ' + JSON.stringify(error.message));
        })

      } catch (err) {
        console.log(TAG + "  err.code: " + err.code);
        expect(err.code).assertEqual(ERROR_CODE);
        done();
      }
    })


    /**
     * @tc.number: System_API_Test_App_Manager_2002
     * @tc.name: appManager.on system interface interception test
     * @tc.desc: Test the third-party application call appManager.on will be blocked
     * @tc.level 3
     */
    it('System_API_Test_App_Manager_2002', 0, async (done: Function) => {
      let TAG = 'System_API_Test_App_Manager_2002';
      try {
        let abilityFirstFrameStateObserverForAll: appManager.AbilityFirstFrameStateObserver = {
          onAbilityFirstFrameDrawn(abilityStateData: appManager.AbilityFirstFrameStateData) {
            console.log("System_API_Test_App_Manager_2002 onAbilityFirstFrameDrawingCompleted all", JSON.stringify(abilityStateData));
            expect().assertFail();
          }
        };
        appManager.off('abilityFirstFrameState', abilityFirstFrameStateObserverForAll);
        appManager.off('abilityFirstFrameState', abilityFirstFrameStateObserverForAll);
        done();
      } catch (err) {
        console.log(TAG + "  err.code: " + err.code);
        expect(err.code).assertEqual(ERROR_CODE);
        done();
      }
    })


    /**
     * @tc.number: System_API_Test_App_Manager_2003
     * @tc.name: appManager.on system interface interception test
     * @tc.desc: Test the third-party application call appManager.on will be blocked
     * @tc.level 3
     */
    it('System_API_Test_App_Manager_2003', 0, async (done: Function) => {
      let TAG = 'System_API_Test_App_Manager_2003';
      try {
        let abilityFirstFrameStateObserverForAll: appManager.AbilityFirstFrameStateObserver = {
          onAbilityFirstFrameDrawn(abilityStateData: appManager.AbilityFirstFrameStateData) {
            console.log("System_API_Test_App_Manager_2003 onAbilityFirstFrameDrawingCompleted all", JSON.stringify(abilityStateData));
            expect().assertFail();
          }
        };
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll);
        appManager.off('abilityFirstFrameState', abilityFirstFrameStateObserverForAll);

        let want: Want = {
          bundleName: 'com.ohos.getstartparameterhelper2',
          abilityName: 'EntryAbility',
        }
        abilityDelegator.startAbility(want).then(() => {
          done();
          console.info('System_API_Test_App_Manager_2003 start successful.');
        }).catch((error) => {
          console.error('System_API_Test_App_Manager_2003 start failed. Cause: ' + JSON.stringify(error.message));
        })

      } catch (err) {
        console.log(TAG + "  err.code: " + err.code);
        expect(err.code).assertEqual(ERROR_CODE);
        done();
      }
    })


    /**
     * @tc.number: System_API_Test_App_Manager_2004
     * @tc.name: appManager.on system interface interception test
     * @tc.desc: Test the third-party application call appManager.on will be blocked
     * @tc.level 3
     */
    it('System_API_Test_App_Manager_2004', 0, async (done: Function) => {
      let TAG = 'System_API_Test_App_Manager_2004';
      try {
        let abilityFirstFrameStateObserverForAll: appManager.AbilityFirstFrameStateObserver = {};
        appManager.on("abilityFirstFrameState", abilityFirstFrameStateObserverForAll);

      } catch (err) {
        console.log(TAG + "  err.code: " + err.code);
        expect(err.code).assertEqual(401);
        done();
      }
    })

  })
}

