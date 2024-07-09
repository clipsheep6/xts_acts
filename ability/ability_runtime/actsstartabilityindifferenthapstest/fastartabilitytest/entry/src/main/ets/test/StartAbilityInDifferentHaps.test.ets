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


import hilog from '@ohos.hilog';
import { describe, it, expect, beforeEach } from '@ohos/hypium'
import Want from '@ohos.app.ability.Want';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import commonEvent from '@ohos.commonEvent';

const EVENT_HAP6 = 'EVENT_HAP6_666'
const EVENT_HAP2_900 = 'EVENT_HAP2_222_900'
const EVENT_HAP2_800 = 'EVENT_HAP2_222_800'
const EVENT_HAP3 = 'EVENT_HAP3_333'
const EVENT_HAP2_600 = 'EVENT_HAP2_222_600'
const EVENT_ABILITY_STAGE_222 = 'event_ability_stage_222'
const EVENT_ABILITY_STAGE_333 = 'event_ability_stage_333'
const EVENT_ABILITY_STAGE_444 = 'event_ability_stage_444'
const TAG = 'StartAbilityInDifferentHapsTest'
const TEST_SUITE_NAME: string = 'StartAbilityInDifferentHapsTest'
let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator()

async function sleep(time) {
  return new Promise((resolve) => setTimeout(resolve, time))
}

export default function StartAbilityInDifferentHapsTest() {
  describe('ActsAbilityTest', function () {
    
     /**
     * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0700
     * @tc.name      : The pull-up ability is in a different hap from the same application, and the pull-up party
     *                 will be associated with the pull-up ability in a third different hap
     * @tc.desc      : calling ability in different haps
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0700", 3, async done => {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0700'
      try {
        await commonEvent.createSubscriber({
          events: [EVENT_HAP3, EVENT_ABILITY_STAGE_333, EVENT_ABILITY_STAGE_444]
        }).then(subscriber => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {

            hilog.info(0x0000, 'testTag', '%{public}s', `subscribe-event: ${commonEventData.event}-
               data: ${JSON.stringify(commonEventData.parameters)}`);
            switch (commonEventData.event) {
              case EVENT_HAP3:
                expect(commonEventData.parameters.data[0]).assertEqual('onCreate')
                expect(commonEventData.parameters.data[1]).assertEqual('onWindowStageCreate')
                expect(commonEventData.parameters.data[2]).assertEqual('onForeground')
                commonEvent.unsubscribe(subscriber, (err, data) => {
                  done();
                });
                break
              case EVENT_ABILITY_STAGE_333:
                expect(commonEventData.parameters.data).assertEqual(EVENT_ABILITY_STAGE_333)
                break
              case EVENT_ABILITY_STAGE_444:
                expect().assertFail();
                break
            }
          })
        })
        let want: Want = {
          bundleName: 'com.ohos.stagehap2',
          abilityName: 'EntryAbility',
          parameters: {
            'data': 700
          }
        }
        abilityDelegator.startAbility(want).then(async () => {
          hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility--${want.abilityName}`);
        }).catch(err => {
          hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} start ability err = ${err})`)
          expect().assertFail()
          done()
        })
      } catch (err) {
        hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err = ${err})`)
        expect().assertFail()
        done()
      }

    })
    
     /**
     * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0800
     * @tc.name      : The pull-up ability is in a different hap from the pull-up party in the same application,
     *                 and the pull-up ability is not associated with the pull-up ability, but it is associated
     *                 with the pull-up ability within the hap
     * @tc.desc      : calling ability in different haps
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it("SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0800", 3, async done => {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0800'
      try {
        await commonEvent.createSubscriber({
          events: [EVENT_HAP2_600, EVENT_ABILITY_STAGE_222]
        }).then(subscriber => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {

            hilog.info(0x0000, 'testTag', '%{public}s', `subscribe-event: ${commonEventData.event}-
               data: ${JSON.stringify(commonEventData.parameters)}`);
            switch (commonEventData.event) {
              case EVENT_HAP2_600:
                expect(commonEventData.parameters.data[0]).assertEqual('onCreate')
                expect(commonEventData.parameters.data[1]).assertEqual('onWindowStageCreate')
                expect(commonEventData.parameters.data[2]).assertEqual('onForeground')
                commonEvent.unsubscribe(subscriber, (err, data) => {
                  done();
                });
                break
              case EVENT_ABILITY_STAGE_222:
                expect(commonEventData.parameters.data).assertEqual('ability_stage_222')
                break
            }
          })
        })
        let want: Want = {
          bundleName: 'com.ohos.stagehap2',
          abilityName: 'EntryAbility',
          parameters: {
            'data': 600
          }
        }
        abilityDelegator.startAbility(want, async err => {
          hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility-------${want.abilityName}`);
        })

      } catch (err) {
        hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err = ${err})`)
        expect().assertFail()
        done();
      }

    })
    
     /**
     * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0900
     * @tc.name      : The pull-up ability is in a different application hap than the pull-up party, and the pull-up
     *                 party will associate the pull-up third different hap
     *                 but the same application ability as the first pull-up party
     * @tc.desc      : calling ability between in stage model and FA model, checking the abilityStage
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */

    it("SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0900", 3, async done => {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_0900'
      try {
        await commonEvent.createSubscriber({
          events: [EVENT_HAP2_900, EVENT_ABILITY_STAGE_222]
        }).then(subscriber => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {

            hilog.info(0x0000, 'testTag', '%{public}s', `subscribe-event: ${commonEventData.event}-
               data: ${JSON.stringify(commonEventData.parameters)}`);
            switch (commonEventData.event) {
              case EVENT_HAP2_900:
                expect(commonEventData.parameters.data[0]).assertEqual('onCreate')
                expect(commonEventData.parameters.data[1]).assertEqual('onWindowStageCreate')
                expect(commonEventData.parameters.data[2]).assertEqual('onForeground')
                commonEvent.unsubscribe(subscriber, (err, data) => {
                  done();
                });
                break
              case EVENT_ABILITY_STAGE_222:
                expect(commonEventData.parameters.data).assertEqual('ability_stage_222')
                break
            }
          })
        })
        let want: Want = {
          bundleName: 'com.ohos.fahap5',
          abilityName: 'com.ohos.fahap5.MainAbility',
          parameters: {
            'data': 900
          }
        }
        await abilityDelegator.startAbility(want).then(async () => {
          hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} startAbility-------hap5`);
        })
      } catch (err) {
        hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err = ${err})`)
        expect().assertFail()
        done()
      }
    })
   
    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_1000
     * @tc.name      : The FA model, which is pulled up with the ability to pull up and the pull-up party
     *                 within the same application is different from the hap
     * @tc.desc      : check the ability life circle method onCreate, onActive is calling in FA Model
     * @tc.level     : Level 3
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    beforeEach(async () => {
      await sleep(1000)
    })
    it("SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_1000", 3, async done => {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_ABILITY_StartAbility_Unzip_LoadRuntime_1000'
      try {
        await commonEvent.createSubscriber({
          events: [EVENT_HAP6]
        }).then(subscriber => {
          hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME}createSubscriber-------event：${EVENT_HAP6}`)
          commonEvent.subscribe(subscriber, (err, commonEventData) => {

            hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME}subscribe-------hap6-
              data = ${JSON.stringify(commonEventData.parameters)}`);
            expect(commonEventData.parameters.data.length === 2).assertTrue()
            expect(commonEventData.parameters.data[0]).assertEqual('onCreate')
            expect(commonEventData.parameters.data[1]).assertEqual('onActive')
            commonEvent.unsubscribe(subscriber, (err, data) => {
              done();
            });
          })
        })
        let want: Want = {
          bundleName: 'com.ohos.fahap5',
          abilityName: 'com.ohos.fahap5.MainAbility',
          parameters: {
            'data': 1000
          }
        }
        await abilityDelegator.startAbility(want).then(() => {
          hilog.info(0x0000, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME}startAbility-------hap5`);
        })
      } catch (err) {
        hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} err = ${err})`)
        expect().assertFail()
        done();
      }
    })

  })
}