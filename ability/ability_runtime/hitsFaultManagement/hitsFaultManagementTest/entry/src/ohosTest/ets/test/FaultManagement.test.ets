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
import { abilityDelegatorRegistry } from '@kit.TestKit';
import { BusinessError } from '@kit.BasicServicesKit';
import { Driver, ON, Component } from '@ohos.UiTest';
import {
  abilityAccessCtrl,
  appControl,
  bundleManager,
  Caller,
  common,
  installer,
  Permissions,
  UIAbility
} from '@kit.AbilityKit';
import { JSON } from '@kit.ArkTS';

const delegator = abilityDelegatorRegistry.getAbilityDelegator();
const Wingman1BundleName: string = 'com.hits.FaultManagementWingman1';
const Wingman2BundleName: string = 'com.hits.FaultManagementWingman2';

function sleep(ms: number) {
  return new Promise<void>((resolve) => {
    setTimeout(resolve, ms);
  });
}

let context: common.UIAbilityContext | undefined;

// async function getPermissions() {
//   try {
//     console.log('TestUIAbilityContext context:' + JSON.stringify(context));
//     console.log('TestUIAbilityContext getPermission beforeAll');
//     let list: Array<Permissions> = ['ohos.permission.DISTRIBUTED_DATASYNC'];
//     let atManager = abilityAccessCtrl.createAtManager();
//     atManager.requestPermissionsFromUser(context, list, (err, result) => {
//       if (err) {
//         console.log(`TestUIAbilityContext getPermission err ${JSON.stringify(err)}`);
//       } else {
//         console.log(`TestUIAbilityContext getPermission success`);
//       }
//     });
//     await sleep(1500);
//     const driver: Driver = Driver.create();
//     await sleep(1500);
//     const allowBtn: Component = await driver.findComponent(ON.text(' 允许 '));
//     if (allowBtn) {
//       await allowBtn.click();
//     }
//   } catch (error) {
//     console.log("TestUIAbilityContext getPermission catch:" + JSON.stringify(error));
//   }
// }
//
export default function faultManagementTest() {
  describe('faultManagementTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      // let testAbility = await delegator.getCurrentTopAbility();
      // context = testAbility.context;
      // console.log('TestUIAbilityContext topAbility:' + JSON.stringify(testAbility));
      // await getPermissions();
      try {
        installer.getBundleInstaller().then((data: installer.BundleInstaller) => {
          data.install(['/data/storage/el2/base/files/hitsFaultManagementWingman1.hap'], (err: BusinessError) => {
            if (err) {
              console.error('install hitsFaultManagementWingman1 getBundleInstaller failed. Cause: ' +
              JSON.stringify(err));
            }
          });
          data.install(['/data/storage/el2/base/files/hitsFaultManagementWingman2.hap'], (err: BusinessError) => {
            if (err) {
              console.error('install hitsFaultManagementWingman2 getBundleInstaller failed. Cause: ' +
              JSON.stringify(err));
            }
          });
        }).catch((error: BusinessError) => {
          console.error('install wingman failed. Cause: ' + JSON.stringify(error));
          expect().assertFail();
        });
      } catch (error) {
        expect().assertFail()
        console.error('install wingman catch. Cause: ' + JSON.stringify(error));
      }
    })
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
  it('SUB_Ability_AbilityRuntime_FaultManagement_0600', 0, async (done: Function) => {
    try {
      delegator.startAbility({
        bundleName: "com.hits.FaultManagementWingman1",
        abilityName: "TestAbility"
      })
        .then(async () => {
          console.log("SUB_Ability_AbilityRuntime_FaultManagement_0600 startAbility successfully");
          try {
            let driver = Driver.create();
            console.log("SUB_Ability_AbilityRuntime_FaultManagement_0600 driver: " + JSON.stringify(driver));
            await driver.delayMs(1000);
            let component = await driver.findComponent(ON.text("FaultManagementWingman1"));
            if (component) {
              expect(true).assertTrue();
              done();
            } else {
              expect().assertFail();
            }
          } catch (e) {
            console.log("SUB_Ability_AbilityRuntime_FaultManagement_0600 driver failed: " + JSON.stringify(e));
          }
        })
        .catch((e: BusinessError) => {
          console.log("SUB_Ability_AbilityRuntime_FaultManagement_0600 startAbility failed:" + JSON.stringify(e));
        })
    } catch (error) {
      console.log("SUB_Ability_AbilityRuntime_FaultManagement_0600 startAbility catch:" + JSON.stringify(error));
    }
  })
  it('SUB_Ability_AbilityRuntime_FaultManagement_0700', 0, async (done: Function) => {
    try {
      let wingman1AppId: string;
      let want: Want = {
        bundleName: Wingman2BundleName,
        abilityName: "TestAbility"
      }
      bundleManager.getBundleInfo(Wingman1BundleName, bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SIGNATURE_INFO)
        .then((data) => {
          console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 getBundleInfo successfully, bundleInfo: " +
          JSON.stringify(data));
          wingman1AppId = data.signatureInfo.appId;
          appControl.setDisposedStatus(wingman1AppId, want)
            .then(() => {
              console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 setDisposedStatus successfully ");
              delegator.startAbility({
                bundleName: Wingman1BundleName,
                abilityName: "TestAbility"
              })
                .then(async () => {
                  console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 startAbility successfully");
                  let driver = Driver.create();
                  console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 driver: " + JSON.stringify(driver));
                  await driver.delayMs(1000);
                  let component = await driver.findComponent(ON.text("FaultManagementWingman2"));
                  if (component) {
                    expect(true).assertTrue();
                    done();
                  } else {
                    expect().assertFail();
                  }
                })
                .catch(async (e: BusinessError) => {
                  console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 startAbility failed: " +
                  JSON.stringify(e));
                  // 调用成功但是返回 2097204 错误码
                  let driver = Driver.create();
                  console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 driver: " + JSON.stringify(driver));
                  await driver.delayMs(1000);
                  let component = await driver.findComponent(ON.text("FaultManagementWingman2"));
                  if (component) {
                    expect(true).assertTrue();
                    done();
                  } else {
                    expect().assertFail();
                  }
                })
            })
            .catch((e: BusinessError) => {
              console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 setDisposedStatus failed: " +
              JSON.stringify(e));
            })
        }).catch((e: BusinessError) => {
        console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 getBundleInfo failed: " + JSON.stringify(e));
      })
    } catch (error) {
      console.log("SUB_Ability_AbilityRuntime_FaultManagement_0700 failed: " + JSON.stringify(error));
    }
  })

  // it('SUB_Ability_AbilityRuntime_FaultManagement_1500', 0, async (done: Function) => {
  //   let wantBackground: Want = {
  //     bundleName: Wingman2BundleName,
  //     moduleName: 'entry',
  //     abilityName: 'TestAbility',
  //     deviceId: ''
  //   };
  //   context?.startAbilityByCall(wantBackground)
  //     .then((caller: Caller) => {
  //       console.log("SUB_Ability_AbilityRuntime_FaultManagement_1500 startAbilityByCall successfully, caller: " + JSON.stringify(caller));
  //     })
  //     .catch((e: BusinessError) => {
  //       console.log("SUB_Ability_AbilityRuntime_FaultManagement_1500 startAbilityByCall failed: " + JSON.stringify(e));
  //     })
  // })
}
