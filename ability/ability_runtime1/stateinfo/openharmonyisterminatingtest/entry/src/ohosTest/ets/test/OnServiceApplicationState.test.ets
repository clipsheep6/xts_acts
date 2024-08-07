/**
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

import { hilog } from '@kit.PerformanceAnalysisKit';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, TestType, Level, Size } from '@ohos/hypium';
import { appManager, common, Want, bundleManager } from '@kit.AbilityKit';
import { abilityDelegatorRegistry } from '@kit.TestKit';
import { process } from '@kit.ArkTS';
import { rpc } from '@kit.IPCKit';

const TAG: string = 'StateInfo_IsTerminatingTest';
const Domain: number = 0x0000;

function sleep(time: number): Promise<void> {
  return new Promise((resolve) => setTimeout(resolve, time))
}

// 注册监听
let appStateEmpty: appManager.ApplicationStateObserver = {
  onAppStarted(appStateData: appManager.AppStateData): void {
  },
  onAppStopped(appStateData: appManager.AppStateData): void {
  },
  onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
  },
  onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
  },
  onProcessCreated(processData: appManager.ProcessData): void {
  },
  onProcessDied(processData: appManager.ProcessData): void {
  },
  onProcessStateChanged(processData: appManager.ProcessData): void {
  }
}

export default function onServiceApplicationState() {
  let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
  let currentWant: Want = {
    bundleName: 'com.hits.stateinfo.isterminating',
    abilityName: 'TestAbility'
  }
  let appEmptyWant: Want = {
    bundleName: 'com.hits.stateinfo.empty',
    abilityName: 'EntryAbility'
  }
  let serviceEmptyWant: Want = {
    bundleName: 'com.acts.stateinfoservice.empty',
    abilityName: 'ServiceAbility'
  }
  let serviceKillSelfWant: Want = {
    bundleName: 'com.acts.stateinfoservice.killself',
    abilityName: 'ServiceAbility'
  }
  let applicationStateNumber = -1;
  describe('onServiceApplicationState', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.

    })
    beforeEach(async () => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
      applicationStateNumber = -1;
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
      try {
        appManager.off('applicationState', applicationStateNumber);
      } catch (e) {
      }
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        let onProcessCreatedServiceEmpty = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            onProcessCreatedServiceEmpty = getProcessData(processData,
              onProcessCreatedServiceEmpty, serviceEmptyWant.bundleName);
          },
          onProcessDied(processData: appManager.ProcessData): void {
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
          }
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 start`);
          // 注册监听成功
          await abilityDelegator.executeShellCommand(`aa force-stop ${serviceEmptyWant.bundleName}`);
          applicationStateNumber = appManager.on('applicationState', appState);
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          let connectOptions: common.ConnectOptions = {
            onConnect(elementName: bundleManager.ElementName, remote: rpc.IRemoteObject) {
              hilog.info(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 onConnect`);
            },
            onDisconnect(elementName: bundleManager.ElementName) {
              hilog.info(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 onDisconnect`);
            },
            onFailed(code: number) {
              hilog.info(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 onFailed ${code}`);
            }
          };
          let context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('abilityContext');
          let conn = context!.connectServiceExtensionAbility(serviceEmptyWant, connectOptions);
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 conn ${conn}`);
          await sleep(1000);
          expect(onProcessCreatedServiceEmpty).assertTrue();
          await context!.disconnectServiceExtensionAbility(conn);
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    // it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900",
    //   TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
    //     //第3步
    //     let onForegroundApplicationChanged = false;
    //     // 注册监听
    //     let appState: appManager.ApplicationStateObserver = {
    //       onAppStarted(appStateData: appManager.AppStateData): void {
    //       },
    //       onAppStopped(appStateData: appManager.AppStateData): void {
    //       },
    //       onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
    //         onForegroundApplicationChanged = getAppStateData(appStateData,
    //           onForegroundApplicationChanged, 4, serviceEmptyWant.bundleName);
    //       },
    //       onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
    //       },
    //       onProcessCreated(processData: appManager.ProcessData): void {
    //       },
    //       onProcessDied(processData: appManager.ProcessData): void {
    //       },
    //       onProcessStateChanged(processData: appManager.ProcessData): void {
    //       }
    //     }
    //     try {
    //       hilog.info(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 start ${applicationStateNumber}`);
    //       // 注册监听成功
    //       await abilityDelegator.executeShellCommand(`aa force-stop ${serviceEmptyWant.bundleName}`);
    //       applicationStateNumber = appManager.on('applicationState', appState);
    //       expect(applicationStateNumber).assertLarger(-1);
    //       await sleep(1000);
    //       // 连接后又解绑
    //       let context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('abilityContext');
    //       let connectOptions: common.ConnectOptions = {
    //         onConnect(elementName: bundleManager.ElementName, remote: rpc.IRemoteObject) {
    //           hilog.info(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 onConnect`);
    //         },
    //         onDisconnect(elementName: bundleManager.ElementName) {
    //           hilog.info(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 onDisconnect`);
    //         },
    //         onFailed(code: number) {
    //           hilog.info(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 onFailed ${code}`);
    //         }
    //       };
    //       let conn = context!.connectServiceExtensionAbility(serviceEmptyWant, connectOptions);
    //       hilog.info(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 conn ${conn}`);
    //       await sleep(1000);
    //       await context!.disconnectServiceExtensionAbility(conn);
    //       await sleep(5000);
    //       expect(onForegroundApplicationChanged).assertTrue();
    //     } catch (e) {
    //       hilog.error(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 error,
    //        error code is: ${e.code}, error message is: ${e.message}`);
    //       expect().assertFail();
    //     }
    //     done();
    //   });

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1500
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1500
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    // it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1500",
    //   TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
    //     //第3步
    //     let onProcessCreated = false;
    //     let onForegroundApplicationChanged = false;
    //     // 注册监听
    //     let appState: appManager.ApplicationStateObserver = {
    //       onAppStarted(appStateData: appManager.AppStateData): void {
    //       },
    //       onAppStopped(appStateData: appManager.AppStateData): void {
    //       },
    //       onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
    //         onForegroundApplicationChanged = getAppStateData(appStateData,
    //           onForegroundApplicationChanged,2,serviceEmptyWant.bundleName);
    //       },
    //       onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
    //       },
    //       onProcessCreated(processData: appManager.ProcessData): void {
    //         onProcessCreated = getProcessData(processData,
    //           onProcessCreated,serviceEmptyWant.bundleName);
    //       },
    //       onProcessDied(processData: appManager.ProcessData): void {
    //       },
    //       onProcessStateChanged(processData: appManager.ProcessData): void {
    //       }
    //     }
    //     try {
    //       hilog.info(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1500 start`);
    //       await abilityDelegator.executeShellCommand(`aa force-stop ${serviceEmptyWant.bundleName}`);
    //       // 注册监听成功
    //       applicationStateNumber = appManager.on('applicationState', appState);
    //       expect(applicationStateNumber).assertLarger(-1);
    //       await sleep(1000);
    //
    //       let context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('abilityContext');
    //      context!.startServiceExtensionAbility(serviceEmptyWant);
    //       hilog.info(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1500 startServiceExtensionAbility`);
    //       await sleep(1000);
    //       expect(onProcessCreated).assertTrue();
    //       expect(onForegroundApplicationChanged).assertTrue();
    //     } catch (e) {
    //       hilog.error(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1500 error,
    //        error code is: ${e.code}, error message is: ${e.message}`);
    //       expect().assertFail();
    //     }
    //     done();
    //   });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1700
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1700
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    // it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1700",
    //   TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
    //     //第3步
    //     let onForegroundApplicationChanged = false;
    //     // 注册监听
    //     let appState: appManager.ApplicationStateObserver = {
    //       onAppStarted(appStateData: appManager.AppStateData): void {
    //       },
    //       onAppStopped(appStateData: appManager.AppStateData): void {
    //       },
    //       onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
    //         onForegroundApplicationChanged = getAppStateData(appStateData,
    //           onForegroundApplicationChanged,4,serviceKillSelfWant.bundleName);
    //       },
    //       onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
    //       },
    //       onProcessCreated(processData: appManager.ProcessData): void {
    //       },
    //       onProcessDied(processData: appManager.ProcessData): void {
    //       },
    //       onProcessStateChanged(processData: appManager.ProcessData): void {
    //       }
    //     }
    //     try {
    //       applicationStateNumber = appManager.on('applicationState', appState);
    //     } catch (e) {
    //       hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1700
    //        error,error code is: ${e.code}, error message is: ${e.message}`);
    //     }
    //     try {
    //       hilog.info(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1500 start ${applicationStateNumber}`);
    //       // 注册监听成功
    //       expect(applicationStateNumber).assertLarger(-1);
    //       await sleep(1000);
    //
    //       let context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('abilityContext');
    //       context!.startServiceExtensionAbility(serviceKillSelfWant);
    //       hilog.info(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1700 startServiceExtensionAbility`);
    //       await sleep(2000);
    //       expect(onForegroundApplicationChanged).assertTrue();
    //     } catch (e) {
    //       hilog.error(Domain, TAG,
    //         `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1700 error,
    //        error code is: ${e.code}, error message is: ${e.message}`);
    //       expect().assertFail();
    //     }
    //     done();
    //   });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        //第3步
        let onForegroundApplicationChanged = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            onForegroundApplicationChanged = getAppStateData(appStateData,
              onForegroundApplicationChanged,4,appEmptyWant.bundleName);
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
          },
          onProcessCreated(processData: appManager.ProcessData): void {
          },
          onProcessDied(processData: appManager.ProcessData): void {
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
          }
        }
        try {
          await abilityDelegator.executeShellCommand(`aa force-stop ${appEmptyWant.bundleName}`);
          await abilityDelegator.executeShellCommand(`aa force-stop ${serviceEmptyWant.bundleName}`);
          sleep(1000)
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3100
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000 start ${applicationStateNumber}`);
          // 注册监听成功
          let context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('abilityContext');

          await abilityDelegator.startAbility(appEmptyWant);
          await sleep(1000);
          await context!.startServiceExtensionAbility(serviceEmptyWant);
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000 startServiceExtensionAbility`);
          await abilityDelegator.startAbility(currentWant);
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000 startAbility currentWant`);
          await sleep(1000);
          expect(onForegroundApplicationChanged).assertTrue();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_3000 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
  })
}

function getAppStateData(data: appManager.AppStateData, result: boolean, eqState: number, bundleName?: string) {
  hilog.info(Domain, TAG, `on applicationState AppStateData ${JSON.stringify(data)}`);
  if (result) {
    return true;
  }
  if (data.bundleName != bundleName) {
    return false;
  }
  if (data.uid > 0) {
    return eqState == data.state;
  }
  return false;
}

function getAbilityStateData(data: appManager.AbilityStateData, result: boolean, eqState: number, want: Want) {
  hilog.info(Domain, TAG, `on applicationState AbilityStateData ${JSON.stringify(data)}`);
  if (result) {
    return true;
  }
  if (data.bundleName != want.bundleName || data.abilityName != want.abilityName) {
    return false;
  }
  if (data.uid > 0 && data.pid > 0) {
    return eqState == data.state;
  }
  return false;
}

function getProcessData(data: appManager.ProcessData, result: boolean, bundleName?: string) {
  hilog.info(Domain, TAG, `on applicationState ProcessData ${JSON.stringify(data)}`);
  if (result) {
    return true;
  }
  if (data.bundleName != bundleName) {
    return false;
  }
  if (data.uid > 0 && data.pid > 0) {
    return true;
  }
  return false;
}