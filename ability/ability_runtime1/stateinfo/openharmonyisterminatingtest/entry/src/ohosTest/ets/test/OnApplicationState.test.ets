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

const TAG: string = 'StateInfo_IsTerminating';
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

export default function onApplicationState() {
  let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
  let context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('abilityContext');
  let appEmptyWant: Want = {
    bundleName: 'com.hits.stateinfo.empty',
    abilityName: 'EntryAbility'
  }
  let serviceEmptyWant: Want = {
    bundleName: 'com.hits.stateinfoservice.empty',
    abilityName: 'ServiceAbility'
  }
  let appStartAbilityWant: Want = {
    bundleName: 'com.hits.stateinfo.startAbility',
    abilityName: 'EntryAbility'
  }
  let appBackAbilityWant: Want = {
    bundleName: 'com.hits.stateinfo.backAbility',
    abilityName: 'EntryAbility'
  }
  let testOnApplicationStateAbilityWant: Want = {
    bundleName: 'com.hits.stateinfo.isterminating',
    abilityName: 'TestOnApplicationStateAbility'
  }
  let testAbility2Want: Want = {
    bundleName: 'com.hits.stateinfo.isterminating',
    abilityName: 'TestAbility2'
  }
  let testAbility3Want: Want = {
    bundleName: 'com.hits.stateinfo.isterminating',
    abilityName: 'TestAbility3'
  }
  let applicationStateNumber = -1;
  describe('onApplicationState', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.

    })
    beforeEach(async () => {
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
      try {
        appManager.off('applicationState', applicationStateNumber);
      } catch (e) {
        hilog.error(Domain, TAG, `afterEach error,error code is: ${e.code}, error message is: ${e.message}`);
      }
    })
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        let onChangePid = -1;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onAppStarted`);
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onAppStopped`);
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onForegroundApplicationChanged`);
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onAbilityStateChanged`);
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onProcessCreated`);
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onProcessDied`);
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
            onChangePid = processData.pid;
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          let pid = process.pid;
          await sleep(1000);
          await abilityDelegator.startAbility(testOnApplicationStateAbilityWant);
          await sleep(1000);
          expect(pid).assertEqual(onChangePid);
          let result = AppStorage.get<number>('test1OnApplicationStateResult');
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100
            ability on applicationState test1OnApplicationStateResult ${result}`);
          await sleep(1000);
          // 再次注册监听失败
          expect(result).assertEqual(-123);
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0200
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0200
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0200",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        try {
          applicationStateNumber = appManager.on('applicationState', appStateEmpty);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0200 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          // 启动第一个Ability
          await abilityDelegator.startAbility(testOnApplicationStateAbilityWant);
          await sleep(1000);
          let result = AppStorage.get<number>('test1OnApplicationStateResult');
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0200
            ability on applicationState test1OnApplicationStateResult ${result}`);
          //启动辅助hap
          await abilityDelegator.startAbility(appEmptyWant);
          await sleep(1000);
          // 再次注册监听失败
          expect(result).assertEqual(-123);
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0200 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        let onProcessCreatedEmptyApp = false;
        let onAbilityStateChangedEmptyApp = false;
        let onAbilityStateChangedCurrentApp = false;
        let onForegroundApplicationChangedEmptyApp = false;
        let onForegroundApplicationChangedCurrentApp = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onAppStarted`);
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onAppStopped`);
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onForegroundApplicationChanged ${JSON.stringify(appStateData)}`);
            if (appStateData.bundleName == appEmptyWant.bundleName) {
              onForegroundApplicationChangedEmptyApp =
                appStateData.uid > 0
                  && appStateData.state == 2;
            }
            if (appStateData.bundleName == 'com.hits.stateinfo.isterminating') {
              onForegroundApplicationChangedCurrentApp =
                appStateData.uid > 0
                  && appStateData.state == 3;
            }
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onAbilityStateChanged ${JSON.stringify(abilityStateData)}`);
            if (abilityStateData.bundleName == appEmptyWant.bundleName) {
              onAbilityStateChangedEmptyApp =
                abilityStateData.abilityName == appEmptyWant.abilityName
                  && abilityStateData.pid > 0
                  && abilityStateData.uid > 0
                  && abilityStateData.state == 2;
            }

            if (abilityStateData.bundleName == 'com.hits.stateinfo.isterminating') {
              onAbilityStateChangedCurrentApp =
                abilityStateData.abilityName == 'TestAbility'
                  && abilityStateData.pid > 0
                  && abilityStateData.uid > 0
                  && abilityStateData.state == 3;
            }

          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onProcessCreated ${JSON.stringify(processData)}`);
            if (processData.bundleName == appEmptyWant.bundleName) {
              onProcessCreatedEmptyApp =
                processData.pid > 0 && processData.uid > 0;
            }

          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onProcessDied`);
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appStateEmpty);
          // 第二次注册监听不可以成功
          expect().assertFail();
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400 start ${applicationStateNumber}`);
          // 注册监听成功
          await sleep(1000);
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          //启动辅助hap
          await abilityDelegator.startAbility(appEmptyWant);
          await sleep(1000);
          // 再次注册监听失败
          expect(onProcessCreatedEmptyApp).assertTrue();
          expect(onAbilityStateChangedEmptyApp).assertTrue();
          expect(onAbilityStateChangedCurrentApp).assertTrue();
          expect(onForegroundApplicationChangedEmptyApp).assertTrue();
          expect(onForegroundApplicationChangedCurrentApp).assertTrue();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0400 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        let hasCallback = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
               applicationState onAppStarted`);
            hasCallback = true;
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
               applicationState onAppStopped`);
            hasCallback = true;
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
               applicationState onForegroundApplicationChanged`);
            hasCallback = true;
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
               applicationState onAbilityStateChanged`);
            hasCallback = true;
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
               applicationState onProcessCreated`);
            hasCallback = true;
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
               applicationState onProcessDied`);
            hasCallback = true;
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
            hasCallback = true;
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appStateEmpty);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          // 启动第一个Ability
          await abilityDelegator.startAbility(testOnApplicationStateAbilityWant);
          await sleep(1000);
          let result = AppStorage.get<number>('test1OnApplicationStateResult');
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
            ability on applicationState test1OnApplicationStateResult ${result}`);
          // 再次注册监听失败
          expect(result).assertEqual(-123);
          //取消注册
          appManager.off('applicationState', applicationStateNumber);
          //启动辅助hap
          await abilityDelegator.startAbility(appEmptyWant);
          await sleep(1000);
          // 未收到回调
          expect(hasCallback).assertFalse();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        let onAbilityStateChanged2App = false;
        let onAbilityStateChangedCurrentApp = false;
        let onForegroundApplicationChanged2App = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
               applicationState onAppStarted`);
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
               applicationState onAppStopped`);
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
               applicationState onForegroundApplicationChanged ${JSON.stringify(appStateData)}`);
            if (appStateData.bundleName == testOnApplicationStateAbilityWant.bundleName) {
              onForegroundApplicationChanged2App =
                appStateData.uid > 0
                  && appStateData.state == 2;
            }
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
               applicationState onAbilityStateChanged ${JSON.stringify(abilityStateData)}`);
            if (abilityStateData.bundleName == testOnApplicationStateAbilityWant.bundleName) {
              onAbilityStateChanged2App =
                abilityStateData.abilityName == testOnApplicationStateAbilityWant.abilityName
                  && abilityStateData.pid > 0
                  && abilityStateData.uid > 0
                  && abilityStateData.state == 2;
            }
            if (abilityStateData.bundleName == 'com.hits.stateinfo.isterminating') {
              onAbilityStateChangedCurrentApp =
                abilityStateData.abilityName == 'TestAbility'
                  && abilityStateData.pid > 0
                  && abilityStateData.uid > 0
                  && abilityStateData.state == 3;
            }
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
               applicationState onProcessCreated ${JSON.stringify(processData)}`);
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
               applicationState onProcessDied`);
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600 start ${applicationStateNumber}`);
          // 注册监听成功
          await sleep(1000);
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          //启动第二个Ability
          await abilityDelegator.startAbility(testOnApplicationStateAbilityWant);
          await sleep(1000);
          // 再次注册监听失败
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600
            onAbilityStateChanged2App ${onAbilityStateChanged2App}
            onAbilityStateChangedCurrentApp ${onAbilityStateChangedCurrentApp}
            onForegroundApplicationChanged2App ${onForegroundApplicationChanged2App}
            `);
          expect(onAbilityStateChanged2App).assertTrue();
          expect(onAbilityStateChangedCurrentApp).assertTrue();
          expect(onForegroundApplicationChanged2App).assertTrue();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
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
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
               applicationState onAppStarted`);
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
               applicationState onAppStopped`);
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
               applicationState onForegroundApplicationChanged`);
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
               applicationState onAbilityStateChanged`);
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
               applicationState onProcessCreated`);
            if (processData.bundleName == serviceEmptyWant.bundleName) {
              onProcessCreatedServiceEmpty =
                processData.pid > 0
                  && processData.uid > 0
                  && processData.state == 2;
            }
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
               applicationState onProcessDied`);
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          let connectOptions: common.ConnectOptions = {
            onConnect(elementName: bundleManager.ElementName, remote: rpc.IRemoteObject) {
              hilog.info(Domain, TAG, `beforeEach onConnect`);
            },
            onDisconnect(elementName: bundleManager.ElementName) {
              hilog.info(Domain, TAG, `beforeEach onDisconnect`);
            },
            onFailed(code: number) {
              hilog.info(Domain, TAG, `beforeEach onFailed ${code}`);
            }
          };
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
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        //第3步
        let step3OnAbilityStateChangedTestAbility3 = false;
        let step3OnAbilityStateChangedTestAbility2 = false;
        let step3OnForegroundApplicationChangedTestAbility3 = false;
        //第4步
        let step4OnAbilityStateChangedTestAbility3 = false;
        let step4OnAbilityStateChangedTestAbility2 = false;
        let step4OnForegroundApplicationChangedTestAbility2 = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
               applicationState onAppStarted`);
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
               applicationState onAppStopped`);
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
               applicationState onForegroundApplicationChanged`);
            if (appStateData.bundleName == testAbility3Want.bundleName) {
              step3OnForegroundApplicationChangedTestAbility3 =
                appStateData.uid > 0
                && appStateData.state == 2;
            }

            if (appStateData.bundleName == testAbility2Want.bundleName) {
              step4OnForegroundApplicationChangedTestAbility2 =
                appStateData.uid > 0
                && appStateData.state == 2;
            }
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
               applicationState onAbilityStateChanged`);
            if (abilityStateData.bundleName == testAbility3Want.bundleName) {
              step3OnAbilityStateChangedTestAbility3 =
                abilityStateData.uid > 0
                abilityStateData.pid > 0
                  && abilityStateData.state == 2;

              step4OnAbilityStateChangedTestAbility3 =
                abilityStateData.uid > 0
                abilityStateData.pid > 0
                  && abilityStateData.state == 3;
            }

            if (abilityStateData.bundleName == testAbility2Want.bundleName) {
              step3OnAbilityStateChangedTestAbility2 =
                abilityStateData.uid > 0
              abilityStateData.pid > 0
                && abilityStateData.state == 3;

              step3OnAbilityStateChangedTestAbility2 =
                abilityStateData.uid > 0
              abilityStateData.pid > 0
                && abilityStateData.state == 2;
            }
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
               applicationState onProcessCreated`);
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
               applicationState onProcessDied`);
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          // 第2、3步
          await abilityDelegator.startAbility(testAbility2Want);
          await sleep(1000);
          let mTestAbility2Context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('TestAbility2Context');
          mTestAbility2Context!.startAbility(testAbility3Want);
          // 判断结果
          expect(step3OnAbilityStateChangedTestAbility3).assertTrue();
          expect(step3OnAbilityStateChangedTestAbility2).assertTrue();
          expect(step3OnForegroundApplicationChangedTestAbility3).assertTrue();
          await sleep(1000);
          //第四部
          let mTestAbility3Context: common.UIAbilityContext | undefined = AppStorage.get<common.UIAbilityContext>('TestAbility3Context');
          mTestAbility3Context!.startAbility(testAbility2Want);
          await sleep(1000);
          // 判断结果
          expect(step4OnAbilityStateChangedTestAbility3).assertTrue();
          expect(step4OnAbilityStateChangedTestAbility2).assertTrue();
          expect(step4OnForegroundApplicationChangedTestAbility2).assertTrue();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800 error,
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
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        //第3步
        let onForegroundApplicationChanged = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
               applicationState onAppStarted`);
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
               applicationState onAppStopped`);
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
               applicationState onForegroundApplicationChanged`);
            if (appStateData.bundleName == serviceEmptyWant.bundleName) {
              onForegroundApplicationChanged =
                  appStateData.uid > 0
                  && appStateData.state == 3;
            }
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
               applicationState onAbilityStateChanged`);
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
               applicationState onProcessCreated`);
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
               applicationState onProcessDied`);
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          // 连接后又解绑
          let connectOptions: common.ConnectOptions = {
            onConnect(elementName: bundleManager.ElementName, remote: rpc.IRemoteObject) {
              hilog.info(Domain, TAG, `beforeEach onConnect`);
            },
            onDisconnect(elementName: bundleManager.ElementName) {
              hilog.info(Domain, TAG, `beforeEach onDisconnect`);
            },
            onFailed(code: number) {
              hilog.info(Domain, TAG, `beforeEach onFailed ${code}`);
            }
          };
          let conn = context!.connectServiceExtensionAbility(serviceEmptyWant, connectOptions);
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0700 conn ${conn}`);
          await sleep(1000);
          await context!.disconnectServiceExtensionAbility(conn);
          await sleep(1000);
          expect(onForegroundApplicationChanged).assertTrue();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0900 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        //第3步
        let step3OnAbilityStateChangedBackAbility = false;
        let step3OnAbilityStateChangedStartAbility = false;
        let step3OnForegroundApplicationChangedBackAbility = false;
        //第4步
        let step4OnAbilityStateChangedBackAbility = false;
        let step4OnAbilityStateChangedStartAbility = false;
        let step4OnForegroundApplicationChangedStartAbility = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
               applicationState onAppStarted`);
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
               applicationState onAppStopped`);
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
               applicationState onForegroundApplicationChanged`);
            if (appStateData.bundleName == appBackAbilityWant.bundleName) {
              step3OnForegroundApplicationChangedBackAbility =
                appStateData.uid > 0
                  && appStateData.state == 2;
            }

            if (appStateData.bundleName == appStartAbilityWant.bundleName) {
              step4OnForegroundApplicationChangedStartAbility =
                appStateData.uid > 0
                  && appStateData.state == 2;
            }
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
               applicationState onAbilityStateChanged`);
            if (abilityStateData.bundleName == appBackAbilityWant.bundleName) {
              step3OnAbilityStateChangedBackAbility =
                abilityStateData.uid > 0
              abilityStateData.pid > 0
                && abilityStateData.state == 2;

              step4OnAbilityStateChangedBackAbility =
                abilityStateData.uid > 0
              abilityStateData.pid > 0
                && abilityStateData.state == 3;
            }

            if (abilityStateData.bundleName == appStartAbilityWant.bundleName) {
              step3OnAbilityStateChangedStartAbility =
                abilityStateData.uid > 0
              abilityStateData.pid > 0
                && abilityStateData.state == 3;

              step3OnAbilityStateChangedStartAbility =
                abilityStateData.uid > 0
              abilityStateData.pid > 0
                && abilityStateData.state == 2;
            }
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
               applicationState onProcessCreated`);
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
               applicationState onProcessDied`);
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100
           error,error code is: ${e.code}, error message is: ${e.message}`);
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          // 第2、3步
          await abilityDelegator.startAbility(appStartAbilityWant);
          await sleep(2000);
          // 判断结果
          expect(step3OnAbilityStateChangedBackAbility).assertTrue();
          expect(step3OnAbilityStateChangedStartAbility).assertTrue();
          expect(step3OnForegroundApplicationChangedBackAbility).assertTrue();
          //backAbility 10s 后start 第二个辅助应用Ability，自动执行第四部
          await sleep(12000);
          // 判断结果
          expect(step4OnAbilityStateChangedBackAbility).assertTrue();
          expect(step4OnAbilityStateChangedStartAbility).assertTrue();
          expect(step4OnForegroundApplicationChangedStartAbility).assertTrue();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_1100 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
  })
}