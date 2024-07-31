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
import { appManager, common, Want } from '@kit.AbilityKit';
import { abilityDelegatorRegistry, Driver } from '@kit.TestKit';
import { BusinessError } from '@kit.BasicServicesKit';
import commonEvent from '@ohos.commonEventManager';
import base from '@ohos.base';

const TAG: string = 'StateInfo_IsTerminating';
const Domain: number = 0x0000;
const CASE_TIME_OUT = 5000;

const APP_GET_APPLICATION_STATE_SUCCESS = 100;
const APP_GET_APPLICATION_STATE_FAIL = 200;

const CURRENT_BUNDLE_NAME = 'com.hits.stateinfo.isterminating';

function sleep(time: number): Promise<void> {
  return new Promise((resolve) => setTimeout(resolve, time))
}

function endSubscriber(done: Function, subscriber: commonEvent.CommonEventSubscriber): void {
  try {
    commonEvent.unsubscribe(subscriber);
  } catch (error) {
  }
  sleep(800);
  done();
}

export default function getForegroundApplicationsTest() {
  let abilityDelegator: abilityDelegatorRegistry.AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

  let hits_StateInfo_Register: commonEvent.CommonEventSubscribeInfo = {
    events: ["Hits_StateInfo_RegisterEvent_First"]
  };
  let subscriber: commonEvent.CommonEventSubscriber;

  let appGegForgrdAppsWant: Want = {
    bundleName: 'com.hits.stateinfo.getforgroundapps',
    abilityName: 'EntryAbility'
  }
  let app2Want: Want = {
    bundleName: 'com.hits.stateinfo.appb',
    abilityName: 'EntryAbility'
  }
  let app3Want: Want = {
    bundleName: 'com.hits.stateinfo.appc',
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
  let flag: boolean = false;

  describe('getForegroundApplicationsTest', () => {
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
    })
    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0300
     * @tc.name: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0300
     * @tc.desc: test on applicationState
     * @tc.size: LargeTest
     * @tc.type: Function
     * @tc.level: Level0
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0300",
      TestType.FUNCTION | Size.LARGETEST | Level.LEVEL0, async (done: Function) => {
        try {
          hilog.info(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0300 start`);
          // 获取RunningInfos
          let functionGetForegroundApplications = async () => {
            return new Promise<boolean>((resolve, reject) => {
              appManager.getForegroundApplications(
                (error: BusinessError, appStateDataArray: Array<appManager.AppStateData>) => {
                  if (error) {
                    hilog.error(Domain, TAG, `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0300 error,
                  error code is: ${error.code}, error message is: ${error.message}`);
                    reject(error)
                  }
                  let result = false;
                  for (let index = 0; index < appStateDataArray.length; index++) {
                    let info: appManager.AppStateData = appStateDataArray[index];
                    if (info.bundleName == CURRENT_BUNDLE_NAME && info.state === 2 && info.uid > 0) {
                      result = true;
                      break;
                    }
                  }
                  resolve(result);
                });
            })
          };
          let result = await functionGetForegroundApplications();
          expect(result).assertTrue();
          //订阅辅助app结果
          subscriber = await commonEvent.createSubscriber(hits_StateInfo_Register);
          let subscribeCallBack = (err: base.BusinessError, data: commonEvent.CommonEventData) => {
            hilog.error(Domain, TAG,
              `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0300
              subscribeCallBack data:${JSON.stringify(data)} `);
            flag = true;
            expect(data.code).assertEqual(APP_GET_APPLICATION_STATE_SUCCESS);
            endSubscriber(done, subscriber);
          }
          commonEvent.subscribe(subscriber, subscribeCallBack);
          await sleep(1000);
          //启动辅助app
          await abilityDelegator.startAbility(appGegForgrdAppsWant);
          //倒计时结束公共事件等待结果
          setTimeout(() => {
            if (!flag) {
              expect().assertFail();
              endSubscriber(done, subscriber);
            }
          }, CASE_TIME_OUT)
        } catch (e) {
          hilog.error(Domain, TAG,
            `SUB_Ability_AbilityRuntime_ABILITY_StateInfo_OpenHarmonyIsTerminating_0300 error,
           error code is: ${e.code}, error message is: ${e.message}`);
          expect().assertFail();
          done();
        }
      });
  })
}