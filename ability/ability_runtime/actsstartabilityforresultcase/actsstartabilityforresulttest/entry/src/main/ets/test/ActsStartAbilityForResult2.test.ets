/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
 
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import Want from '@ohos.app.ability.Want';
import CommonEventManager from '@ohos.commonEvent';
import common from '@ohos.app.ability.common';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

const TAG = 'ACTS_StartAbilityForResult';

export default function actsStartAbilityForResult() {
  describe('ActsAbilityTest2', function () {
    const TEST_SUITE_NAME: string = 'ActsStartAbilityForResultTest';
    let TEST_CASE_NAME: string = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0100';

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time));
    }

    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(async (done) => {
      await sleep(1000)
      done()
    })
    afterEach(async (done) => {
      await sleep(1000)
      done()
    })


    /**
     * @tc.number: SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4200
     * @tc.name  : test One capability pulls up two different HAPs and terminates them
     * @tc.desc  : An ability pulls up the ability in two different hap and terminates it.
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : Level 3
     */
     it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4200', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_4200';
      try {
        let lifeList12 = [];
        let lifeList21 = [];
        let lifeList22 = [];
        let result1: any = {};
        let result2: any = {};
        let onBackground1 = "aa_assistant1_onBackground";
        let onWindowStageDestroy1 = "aa_assistant1_onWindowStageDestroy";
        let onDestroy1 = "aa_assistant1_onDestroy";
        let onCreate2 = "aa_assistant2_onCreate";
        let onWindowStageCreate2 = "aa_assistant2_onWindowStageCreate";
        let onForeground2 = "aa_assistant2_onForeground";
        let onBackground2 = "aa_assistant2_onBackground";
        let onWindowStageDestroy2 = "aa_assistant2_onWindowStageDestroy";
        let onDestroy2 = "aa_assistant2_onDestroy";
        let onResult1 = "aa_assistant1_result"
        let onResult2 = "aa_assistant2_result"

        var subscriber;
        var subscribeInfo = {
          events: [onBackground1, onWindowStageDestroy1, onDestroy1,
            onCreate2, onWindowStageCreate2, onForeground2, onBackground2, onWindowStageDestroy2, onDestroy2,
            onResult1, onResult2]
        }
        await CommonEventManager.createSubscriber(subscribeInfo).then(async (data) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} createSubscriber data :  + ${JSON.stringify(data)}`);
          subscriber = data;
          CommonEventManager.subscribe(subscriber, async (err, data) => {
            console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} SubscribeInfoCallback :  + ${JSON.stringify(data.event)}`);

            if (data.event == onBackground1) {
              lifeList12.push("onBackground1");
            }
            if (data.event == onWindowStageDestroy1) {
              lifeList12.push("onWindowStageDestroy1");
            }
            if (data.event == onDestroy1) {
              lifeList12.push("onDestroy1");
            }

            if (data.event == onCreate2) {
              lifeList21.push("onCreate2");
            }
            if (data.event == onWindowStageCreate2) {
              lifeList21.push("onWindowStageCreate2");
            }
            if (data.event == onForeground2) {
              lifeList21.push("onForeground2");
            }
            if (data.event == onBackground2) {
              lifeList22.push("onBackground2");
            }
            if (data.event == onWindowStageDestroy2) {
              lifeList22.push("onWindowStageDestroy2");
            }
            if (data.event == onDestroy2) {
              lifeList22.push("onDestroy2");
            }
            if (data.event == onResult1) {
              result1 = JSON.parse(data.data)
            }
            if (data.event == onResult2) {
              result2 = JSON.parse(data.data)
            }
          });

        }).catch((error) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} createSubscriber data  :  + ${JSON.stringify(error)}`);
        })
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} is begin`);
        let want1: Want = {
          deviceId: '',
          bundleName: "com.example.aa_assistant1",
          abilityName: 'EntryAbility'
        };
        globalThis.context.startAbilityForResult(want1, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult1:${JSON.stringify(err)}`);
          if (err.code) {
            console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}startAbilityForResult failed, code is ${err.code}, message is ${err.message}`);
            return;
          }
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult:${JSON.stringify(result)}`);
          expect(result.want.parameters.info).assertContain("onCreate");
          expect(result.want.parameters.info).assertContain("onWindowStageCreate");
          expect(result.want.parameters.info).assertContain("onForeground");
          await sleep(2500)
          expect(lifeList12).assertContain("onBackground1")
          expect(lifeList12).assertContain("onWindowStageDestroy1")
          expect(lifeList12).assertContain("onDestroy1")
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} lifeList12 data  :  + ${JSON.stringify(lifeList12)}`);
          expect(result1.want.bundleName).assertEqual(result.want.bundleName)
          expect(result1.want.abilityName).assertEqual(result.want.abilityName)
          expect(result1.want.parameters.info).assertEqual(result.want.parameters.info)
          expect(result1.resultCode).assertEqual(result.resultCode)
        });
        await sleep(3000)
        let want2: Want = {
          deviceId: '',
          bundleName: "com.example.aa_assistant2",
          abilityName: 'EntryAbility'
        };
        globalThis.context.startAbilityForResult(want2, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult2:${JSON.stringify(result)}`)
          if (err.code) {
            console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}startAbilityForResult failed, code is ${err.code}, message is ${err.message}`);
            return;
          }
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult:${JSON.stringify(result.want.parameters)}`);
          expect(result.want.parameters.info).assertContain("onCreate");
          expect(result.want.parameters.info).assertContain("onWindowStageCreate");
          expect(result.want.parameters.info).assertContain("onForeground");
          await sleep(2500)
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} lifeList22 data  :  + ${JSON.stringify(lifeList22)}`);
          expect(lifeList22).assertContain("onBackground2")
          expect(lifeList22).assertContain("onWindowStageDestroy2")
          expect(lifeList22).assertContain("onDestroy2")
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} result2 data  :  + ${JSON.stringify(result2)}`);
          expect(result2.want.bundleName).assertEqual(result.want.bundleName)
          expect(result2.want.abilityName).assertEqual(result.want.abilityName)
          expect(result2.want.parameters.info).assertEqual(result.want.parameters.info)
          expect(result2.resultCode).assertEqual(result.resultCode)
          CommonEventManager.unsubscribe(subscriber,async ()=>{
            await sleep(3000)
            done()
          })
        });
      } catch (e) {
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---err:${JSON.stringify(e)}`)
      }
    })



    /**
     * @tc.number: SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_5000
     * @tc.name  : SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_5000
     * @tc.desc  : Different applications, module.json application startAbilityForResult startup ability.
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_5000', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_5000';
      try {
        let lifeList1 = [];
        var subscriber;
        var subscribeInfo = {
          events: ["AbilityStageOncreate", "AbilityOncreate", "AbilityOnWindowStageCreate", "AbilityOnForeground"]
        }
        await CommonEventManager.createSubscriber(subscribeInfo).then(async (data) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} createSubscriber data :  + ${JSON.stringify(data)}`);
          subscriber = data;
          CommonEventManager.subscribe(subscriber, async (err, data) => {
            lifeList1.push(data.event)
            console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} SubscribeInfoCallback :  + ${JSON.stringify(data.event)}`);
          })
        })
        globalThis.context.startAbilityForResult({
          bundleName: "com.example.assistant5000",
          abilityName: 'EntryAbility'
        }, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult2:${JSON.stringify(result)}`)
        });
        await sleep(3000)
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---lifeList1:${JSON.stringify(lifeList1)}`)
        expect(lifeList1).assertContain("AbilityStageOncreate");
        expect(lifeList1).assertContain("AbilityOncreate");
        expect(lifeList1).assertContain("AbilityOnWindowStageCreate");
        expect(lifeList1).assertContain("AbilityOnForeground");
        await sleep(3000)
        expect(globalThis.lifeCycle3).assertContain("onCreate");
        expect(globalThis.lifeCycle3).assertContain("onWindowStageCreate");
        expect(globalThis.lifeCycle3).assertContain("onForeground");
        expect(globalThis.lifeCycle3).assertContain("onAbilityCreate");
        globalThis.lifeCycle3 = ""
        CommonEventManager.unsubscribe(subscriber,()=>{
          done()
        })
      } catch (e) {
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---err:${JSON.stringify(e)}`)
      }
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_5800
     * @tc.name  : test Different applications, startAbilityForResult starts the ability of module.json
     * @tc.desc  : Depending on the application, startAbilityForResult has the ability to launch module.json.
     * @tc.size  : MediumTest
     * @tc.type  : Function
     * @tc.level : Level 3
     */
    it('SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_5800', 3, async (done) => {
      TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_5800';
      try {
        let lifeList1 = [];
        let AbilityStageOncreate = "AbilityStageOncreate5800"
        let AbilityOncreate = "AbilityOncreate5800"
        let AbilityOnWindowStageCreate = "AbilityOnWindowStageCreate5800"
        let AbilityOnForeground = "AbilityOnForeground5800"

        let subscriber;
        let subscribeInfo = {
          events: [AbilityStageOncreate, AbilityOncreate, AbilityOnWindowStageCreate, AbilityOnForeground]
        }
        await CommonEventManager.createSubscriber(subscribeInfo).then(async (data) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} createSubscriber data :  + ${JSON.stringify(data)}`);
          subscriber = data;
          CommonEventManager.subscribe(subscriber, async (err, data) => {
            lifeList1.push(data.event)
            console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME} SubscribeInfoCallback :  + ${JSON.stringify(data)}`);
          })
        })
        globalThis.context.startAbilityForResult({
          bundleName: "com.example.assistant5800",
          abilityName: 'EntryAbility'
        }, async (err: any, result: common.AbilityResult) => {
          console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---startAbilityForResult2:${JSON.stringify(result)}`)

        });
        await sleep(1000)
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---lifeList1:${JSON.stringify(lifeList1)}`)

        expect(lifeList1).assertContain("AbilityOncreate5800");
        expect(lifeList1).assertContain("AbilityOnWindowStageCreate5800");
        expect(lifeList1).assertContain("AbilityOnForeground5800");
        expect(lifeList1).assertContain("AbilityStageOncreate5800");
        CommonEventManager.publish("EVENT_TERMINATE_SELF_ABILITY5800", (err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} publish EVENT_TERMINATE_SELF_ABILITY5800 err ${JSON.stringify(err)}`);
        });
        CommonEventManager.unsubscribe(subscriber,()=>{
          done()
        })
      } catch (e) {
        console.info(`${TEST_SUITE_NAME}#${TEST_CASE_NAME}---err:${JSON.stringify(e)}`)
      }
    })

  })
}