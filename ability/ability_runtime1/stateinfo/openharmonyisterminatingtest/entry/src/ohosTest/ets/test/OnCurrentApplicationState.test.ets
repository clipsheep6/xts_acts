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
import App from '@system.app';

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

export default function onCurrentApplicationState() {
  let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
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
  let testAbility4Want: Want = {
    bundleName: 'com.hits.stateinfo.isterminating',
    abilityName: 'TestAbility4'
  }
  let appEmptyWant: Want = {
    bundleName: 'com.hits.stateinfo.empty',
    abilityName: 'EntryAbility'
  }
  let currentWant: Want = {
    bundleName: 'com.hits.stateinfo.isterminating',
    abilityName: 'TestAbility'
  }
  let applicationStateNumber = -1;
  describe('onCurrentApplicationState', () => {
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
      try {
        appManager.off('applicationState', 0);
      } catch (e) {
      }
    })
    afterEach(async () => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
      try {
        appManager.off('applicationState', applicationStateNumber);
      } catch (e) {
      }
      await sleep(1000);
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
      try {
        appManager.off('applicationState', applicationStateNumber);
      } catch (e) {
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
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100
               applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
            onChangePid = processData.pid;
          }
        }
        try {
          applicationStateNumber = appManager.on('applicationState', appState);
        } catch (e) {
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0100
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
          hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0200
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
          applicationStateNumber = appManager.on('applicationState', appState);
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
          hasCallback = false;
          appManager.off('applicationState', applicationStateNumber);
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0500
           off applicationState applicationStateNumber ${applicationStateNumber}`);
          await sleep(3000);
          //启动辅助hap
          await abilityDelegator.startAbility(appEmptyWant);
          await sleep(1000);
          // 未收到回调
          expect(hasCallback).assertFalse();
          try {
            await abilityDelegator.executeShellCommand(`aa force-stop ${appEmptyWant.bundleName}`);
          } catch (error) {
          }
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
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            onForegroundApplicationChanged2App = getAppStateData(appStateData,
              onForegroundApplicationChanged2App, 2, testAbility2Want.bundleName);
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            onAbilityStateChanged2App = getAbilityStateData(abilityStateData,
              onAbilityStateChanged2App, 2, testAbility2Want);

            onAbilityStateChangedCurrentApp = getAbilityStateData(abilityStateData,
              onAbilityStateChangedCurrentApp, 4, currentWant);
          },
          onProcessCreated(processData: appManager.ProcessData): void {
          },
          onProcessDied(processData: appManager.ProcessData): void {
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
          }
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0600 start`);
          await abilityDelegator.startAbility(currentWant);
          await sleep(1000);
          applicationStateNumber = appManager.on('applicationState', appState);
          // 注册监听成功
          await sleep(1000);
          expect(applicationStateNumber).assertLarger(-1);
          //启动第二个Ability
          await abilityDelegator.startAbility(testAbility2Want);
          await sleep(1000);
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
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            step3OnForegroundApplicationChangedTestAbility3 = getAppStateData(appStateData,
              step3OnForegroundApplicationChangedTestAbility3, 2, testAbility3Want.bundleName);

            step4OnForegroundApplicationChangedTestAbility2 = getAppStateData(appStateData,
              step4OnForegroundApplicationChangedTestAbility2, 2, testAbility2Want.bundleName);
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            step3OnAbilityStateChangedTestAbility3 = getAbilityStateData(abilityStateData,
              step3OnAbilityStateChangedTestAbility3, 2, testAbility3Want);

            step4OnAbilityStateChangedTestAbility3 = getAbilityStateData(abilityStateData,
              step4OnAbilityStateChangedTestAbility3, 4, testAbility3Want);

            step3OnAbilityStateChangedTestAbility2 = getAbilityStateData(abilityStateData,
              step3OnAbilityStateChangedTestAbility2, 4, testAbility2Want);

            step4OnAbilityStateChangedTestAbility2 = getAbilityStateData(abilityStateData,
              step4OnAbilityStateChangedTestAbility2, 2, testAbility2Want);
          },
          onProcessCreated(processData: appManager.ProcessData): void {
          },
          onProcessDied(processData: appManager.ProcessData): void {
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
          }
        }
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800 start`);
          await abilityDelegator.startAbility(currentWant);
          await sleep(1000);
          // 注册监听成功
          applicationStateNumber = appManager.on('applicationState', appState);
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          // 第2、3步
          await abilityDelegator.startAbility(testAbility2Want);
          await sleep(1000);
          let mTestAbility2Context: common.UIAbilityContext | undefined =
            AppStorage.get<common.UIAbilityContext>('TestAbility2Context');
          mTestAbility2Context!.startAbility(testAbility3Want);
          await sleep(2000);
          // 判断结果
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
            step3OnAbilityStateChangedTestAbility3 ${step3OnAbilityStateChangedTestAbility3}
            step3OnAbilityStateChangedTestAbility2 ${step3OnAbilityStateChangedTestAbility2}
            step3OnForegroundApplicationChangedTestAbility3 ${step3OnForegroundApplicationChangedTestAbility3}
            `);
          expect(step3OnAbilityStateChangedTestAbility3).assertTrue();
          expect(step3OnAbilityStateChangedTestAbility2).assertTrue();
          expect(step3OnForegroundApplicationChangedTestAbility3).assertTrue();
          await sleep(1000);
          //第四部
          let mTestAbility3Context: common.UIAbilityContext | undefined =
            AppStorage.get<common.UIAbilityContext>('TestAbility3Context');
          mTestAbility3Context!.startAbility(testAbility2Want);
          await sleep(1000);
          // 判断结果
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0800
            step4OnAbilityStateChangedTestAbility3 ${step4OnAbilityStateChangedTestAbility3}
            step4OnAbilityStateChangedTestAbility2 ${step4OnAbilityStateChangedTestAbility2}
            step4OnForegroundApplicationChangedTestAbility2 ${step4OnForegroundApplicationChangedTestAbility2}
            `);
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
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2800
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2800
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2800",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {

        try {
          applicationStateNumber = appManager.on('applicationState', appStateEmpty);
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2800 start ${applicationStateNumber}`);
          // 注册监听成功
          expect(applicationStateNumber).assertLarger(-1);
          await sleep(1000);
          appManager.off('applicationState', applicationStateNumber);
          await sleep(1000);
          appManager.off('applicationState', applicationStateNumber);
          expect().assertFail();
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2800 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect(true).assertTrue();
        }
        done();
      });
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2900
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2900
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2900",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {

        let OnAbilityStateChangedTestAbility2State2 = false;
        let OnAbilityStateChangedCurrentState4 = false;
        let OnAbilityStateChangedCurrentState2 = false;
        let OnAbilityStateChangedTestAbility2State4 = false;
        let OnAbilityStateChangedTestAbility2State5 = false;

        let onForegroundApplicationChangedTestAbility2State2 = false;
        let onForegroundApplicationChangedCurrentState4 = false;
        let onForegroundApplicationChangedCurrentState2 = false;

        let hasCallback = false;
        // 注册监听
        let appState: appManager.ApplicationStateObserver = {
          onAppStarted(appStateData: appManager.AppStateData): void {
            hasCallback = true;
          },
          onAppStopped(appStateData: appManager.AppStateData): void {
            hasCallback = true;
          },
          onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
            if(!onForegroundApplicationChangedTestAbility2State2){
              onForegroundApplicationChangedTestAbility2State2 = getAppStateData(appStateData,
                onForegroundApplicationChangedTestAbility2State2, 2, testAbility4Want.bundleName);
            }else{
              onForegroundApplicationChangedCurrentState2 = getAppStateData(appStateData,
                onForegroundApplicationChangedCurrentState2, 2, currentWant.bundleName);
            }
            onForegroundApplicationChangedCurrentState4 = getAppStateData(appStateData,
              onForegroundApplicationChangedCurrentState4, 4, currentWant.bundleName);
            hasCallback = true;
          },
          onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
            OnAbilityStateChangedTestAbility2State2 = getAbilityStateData(abilityStateData,
              OnAbilityStateChangedTestAbility2State2, 2, testAbility4Want);
            OnAbilityStateChangedTestAbility2State4 = getAbilityStateData(abilityStateData,
              OnAbilityStateChangedTestAbility2State4, 4, testAbility4Want);
            OnAbilityStateChangedTestAbility2State5 = getAbilityStateData(abilityStateData,
              OnAbilityStateChangedTestAbility2State5, 5, testAbility4Want);
            OnAbilityStateChangedCurrentState4 = getAbilityStateData(abilityStateData,
              OnAbilityStateChangedCurrentState4, 4, currentWant);
            OnAbilityStateChangedCurrentState2 = getAbilityStateData(abilityStateData,
              OnAbilityStateChangedCurrentState2, 2, currentWant);
            hasCallback = true;
          },
          onProcessCreated(processData: appManager.ProcessData): void {
            hasCallback = true;
          },
          onProcessDied(processData: appManager.ProcessData): void {
            hasCallback = true;
          },
          onProcessStateChanged(processData: appManager.ProcessData): void {
            hasCallback = true;
          }
        }
        hilog.info(Domain, TAG,
          `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2900 start`);
        try {
          for (let i = 0; i < 100; i++) {
            applicationStateNumber = -1;
            OnAbilityStateChangedTestAbility2State2 = false;
            OnAbilityStateChangedTestAbility2State4 = false;
            OnAbilityStateChangedTestAbility2State5 = false;
            OnAbilityStateChangedCurrentState4 = false;
            OnAbilityStateChangedCurrentState2 = false;

            onForegroundApplicationChangedTestAbility2State2 = false;
            onForegroundApplicationChangedCurrentState4 = false;
            onForegroundApplicationChangedCurrentState2 = false;
            await abilityDelegator.startAbility(currentWant);
            await sleep(200);
            applicationStateNumber = appManager.on('applicationState', appState);
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2900 start ${i}`);
            // 注册监听成功
            expect(applicationStateNumber).assertLarger(-1);
            await sleep(200);
            // 第2、3步
            await abilityDelegator.startAbility(testAbility4Want);
            await sleep(1000);
            // 判断结果
            hilog.info(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2900
            OnAbilityStateChangedTestAbility2State2 ${OnAbilityStateChangedTestAbility2State2}
            OnAbilityStateChangedTestAbility2State4 ${OnAbilityStateChangedTestAbility2State4}
            OnAbilityStateChangedTestAbility2State5 ${OnAbilityStateChangedTestAbility2State5}
            OnAbilityStateChangedCurrentState4 ${OnAbilityStateChangedCurrentState4}
            OnAbilityStateChangedCurrentState2 ${OnAbilityStateChangedCurrentState2}

            onForegroundApplicationChangedTestAbility2State2 ${onForegroundApplicationChangedTestAbility2State2}
            onForegroundApplicationChangedCurrentState4 ${onForegroundApplicationChangedCurrentState4}
            onForegroundApplicationChangedCurrentState2 ${onForegroundApplicationChangedCurrentState2}
            `);
            expect(OnAbilityStateChangedTestAbility2State2).assertTrue();
            expect(OnAbilityStateChangedTestAbility2State4).assertTrue();
            expect(OnAbilityStateChangedTestAbility2State5).assertTrue();
            expect(OnAbilityStateChangedCurrentState4).assertTrue();
            expect(OnAbilityStateChangedCurrentState2).assertTrue();
            expect(onForegroundApplicationChangedTestAbility2State2).assertTrue();
            expect(onForegroundApplicationChangedCurrentState4).assertTrue();
            expect(onForegroundApplicationChangedCurrentState2).assertTrue();

            hasCallback = false;
            appManager.off('applicationState', applicationStateNumber);
            await sleep(200);
            // 第2、3步
            await abilityDelegator.startAbility(testAbility4Want);
            await sleep(100);
            expect(hasCallback).assertFalse();
          }
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_2900 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
        }
        done();
      });
  })
}

function getAppStateData(data: appManager.AppStateData, result: boolean, eqState: number, bundleName?: string) {
  hilog.debug(Domain, TAG, `on applicationState AppStateData ${JSON.stringify(data)}`);
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
  hilog.debug(Domain, TAG, `on applicationState AbilityStateData ${JSON.stringify(data)}`);
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

function getProcessData(data: appManager.ProcessData, result: boolean, eqState: number, bundleName?: string) {
  hilog.debug(Domain, TAG, `on applicationState ProcessData ${JSON.stringify(data)}`);
  if (result) {
    return true;
  }
  if (data.bundleName != bundleName) {
    return false;
  }
  if (data.uid > 0 && data.pid > 0) {
    return eqState == data.state;
  }
  return false;
}