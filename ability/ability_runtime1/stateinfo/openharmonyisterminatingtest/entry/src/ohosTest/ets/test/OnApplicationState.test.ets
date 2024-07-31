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
import { appManager, Want } from '@kit.AbilityKit';
import { abilityDelegatorRegistry } from '@kit.TestKit';
import { process } from '@kit.ArkTS';

const TAG: string = 'StateInfo_IsTerminating';
const Domain: number = 0x0000;

function sleep(time: number): Promise<void> {
  return new Promise((resolve) => setTimeout(resolve, time))
}


export default function onApplicationState() {
  let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
  let appEmptyWant: Want = {
    bundleName: 'com.hits.stateinfo.empty',
    abilityName: 'EntryAbility'
  }
  let testOnApplicationStateAbilityWant: Want = {
    bundleName: 'com.hits.stateinfo.isterminating',
    abilityName: 'TestOnApplicationStateAbility'
  }
  let applicationStateNumber = -1;
  let onChangePid = -1;
  describe('onApplicationState', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      // 注册监听
      let appState: appManager.ApplicationStateObserver = {
        onAppStarted(appStateData: appManager.AppStateData): void {
          hilog.info(Domain, TAG,
            `beforeEach applicationState onAppStarted`);
        },
        onAppStopped(appStateData: appManager.AppStateData): void {
          hilog.info(Domain, TAG,
            `beforeEach applicationState onAppStopped`);
        },
        onForegroundApplicationChanged(appStateData: appManager.AppStateData): void {
          hilog.info(Domain, TAG,
            `beforeEach applicationState onForegroundApplicationChanged`);
        },
        onAbilityStateChanged(abilityStateData: appManager.AbilityStateData): void {
          hilog.info(Domain, TAG,
            `beforeEach applicationState onAbilityStateChanged`);
        },
        onProcessCreated(processData: appManager.ProcessData): void {
          hilog.info(Domain, TAG,
            `beforeEach applicationState onProcessCreated`);
        },
        onProcessDied(processData: appManager.ProcessData): void {
          hilog.info(Domain, TAG,
            `beforeEach applicationState onProcessDied`);
        },
        onProcessStateChanged(processData: appManager.ProcessData): void {
          hilog.info(Domain, TAG,
            `beforeEach applicationState onProcessStateChanged ${JSON.stringify(processData)}`);
          onChangePid = processData.pid;
        }
      }
      try {
        applicationStateNumber = appManager.on('applicationState', appState);
      } catch (e) {
        hilog.error(Domain, TAG, `beforeEach error,error code is: ${e.code}, error message is: ${e.message}`);
      }
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
  })
}