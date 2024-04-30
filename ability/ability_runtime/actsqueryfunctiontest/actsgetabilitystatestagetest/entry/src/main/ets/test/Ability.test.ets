/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import commonEvent from "@ohos.commonEvent";
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';
import UIAbility from '@ohos.app.ability.UIAbility';


let subscriberInfo_MainAbility: commonEventManager.CommonEventSubscribeInfo = {
  events: ["GetCurrentTopAbility"],
};

export default function abilityTest() {
  describe('ActsGetAbilityStateStageTest', () => {
    /*
     * @tc.number  : ACTS_GetAbilityState_0200
     * @tc.name    : The test framework needs to provide the following query-related functions
     * @tc.desc    : Get the status of the Ability in the BACKGROUND state
     */
    it('ACTS_GetAbilityState_0200', 0, async (done: Function) => {
      console.log('====>start ACTS_GetAbilityState_0200====');
      let ability: UIAbility;
      let abilityDelegator: AbilityDelegatorRegistry.AbilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      let count = 0;
      let subscriber: commonEventManager.CommonEventSubscriber;
      commonEvent.createSubscriber(subscriberInfo_MainAbility)
        .then(async (data) => {
          console.log("ACTS_GetAbilityState_0200====>Create Subscriber====>");
          subscriber = data;
          commonEvent.subscribe(subscriber, () => {
            console.log("====>onAbilityForegroundCallback2====");
            count++;
            if (count == 2) {
              abilityDelegator.getCurrentTopAbility((err, data) => {
                console.log("====>getCurrentTopAbility_0200 err:" + JSON.stringify(err) + " data:" + JSON.stringify(data));
                ability = data;
                abilityDelegator.doAbilityBackground(ability, (err) => {
                  console.log("====>doAbilityBackground_0200 data:" + JSON.stringify(err));
                  expect(err.code).assertEqual(0);
                })
              })
            }
          });
        })

      abilityDelegator.addAbilityMonitor(
        {
          abilityName: 'MainAbility2',
          onAbilityForeground: () => {
            console.log("====>onAbilityForegroundCallback2====");
            count++;
            if (count == 2) {
              abilityDelegator.getCurrentTopAbility((err, data) => {
                console.log("====>getCurrentTopAbility_0200 err:" + JSON.stringify(err) + " data:" + JSON.stringify(data));
                ability = data;
                abilityDelegator.doAbilityBackground(ability, (err) => {
                  console.log("====>doAbilityBackground_0200 data:" + JSON.stringify(err));
                  expect(err.code).assertEqual(0);
                })
              })
            }
          },
          onAbilityBackground: () => {
            console.log("====>onAbilityBackgroundCallback2====");
            let state = abilityDelegator.getAbilityState(ability);
            console.log("====>ACTS_GetAbilityState_0200 state:" + state);
            expect(state).assertEqual(AbilityDelegatorRegistry.AbilityLifecycleState.BACKGROUND);
            console.log("====>ACTS_GetAbilityState_0200 end====");
            done();
          }
        }
      )
        .then(() => {
          console.log("====>addAbilityMonitor_0200 finish====");
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(
            {
              bundleName: 'com.example.actsgetabilitystatestagetest',
              abilityName: 'MainAbility2',
            }, (err) => {
            console.log("====>startAbility_0200 err:" + JSON.stringify(err));
          })
        })
    })

    /*
     * @tc.number  : ACTS_GetAbilityState_0300
     * @tc.name    : The test framework needs to provide the following query-related functions
     * @tc.desc    : Get the status of the Ability in the FOREGROUND state
     */
    it('ACTS_GetAbilityState_0300', 0, async (done: Function) => {
      console.log('====>start ACTS_GetAbilityState_0300====');
      let ability: UIAbility;
      let abilityDelegator: AbilityDelegatorRegistry.AbilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      let count = 0;
      let subscriber: commonEventManager.CommonEventSubscriber;

      try {
         commonEvent.createSubscriber(subscriberInfo_MainAbility)
        .then(async (data) => {
          console.log("ACTS_GetAbilityState_0300====>Create Subscriber====>");
          subscriber = data;
          commonEvent.subscribe(subscriber, () => {
            console.log("====>onAbilityForegroundCallback3====");
            count++;
            if (count == 2) {
              abilityDelegator.getCurrentTopAbility((err, data) => {
                console.log("====>getCurrentTopAbility_0300 err:" + JSON.stringify(err) + "data:" + JSON.stringify(data));
                ability = data;
                let state = abilityDelegator.getAbilityState(ability);
                console.log("====>ACTS_GetAbilityState_0300 state:" + state);
                expect(state).assertEqual(AbilityDelegatorRegistry.AbilityLifecycleState.FOREGROUND);
                expect(state != AbilityDelegatorRegistry.AbilityLifecycleState.CREATE).assertTrue();
                expect(state != AbilityDelegatorRegistry.AbilityLifecycleState.DESTROY).assertTrue();
                abilityDelegator.doAbilityBackground(ability, (err) => {
                  console.log("====>doAbilityBackground_0300 data:" + JSON.stringify(err));
                  expect(err.code).assertEqual(0);
                  console.log("====>ACTS_GetAbilityState_0300 end====");
                  commonEvent.unsubscribe(subscriber, () => {
                    console.log("ACTS_GetAbilityState_0300====>UnSubscribe CallBack====>");
                    done();
                  });
                })
              })
            }
          });
        })
      } catch (e) {
          console.log("ACTS_GetAbilityState_0300====>Create Subscriber failed:====>" + e.code + ":" + e.message);
      }
     

      abilityDelegator.addAbilityMonitor(
        {
          abilityName: 'MainAbility3',
          onAbilityForeground: () => {
            console.log("====>onAbilityForegroundCallback3====");
            count++;
            if (count == 2) {
              abilityDelegator.getCurrentTopAbility((err, data) => {
                console.log("====>getCurrentTopAbility_0300 err:" + JSON.stringify(err) + "data:" + JSON.stringify(data));
                ability = data;
                let state = abilityDelegator.getAbilityState(ability);
                console.log("====>ACTS_GetAbilityState_0300 state:" + state);
                expect(state).assertEqual(AbilityDelegatorRegistry.AbilityLifecycleState.FOREGROUND);
                expect(state != AbilityDelegatorRegistry.AbilityLifecycleState.CREATE).assertTrue();
                expect(state != AbilityDelegatorRegistry.AbilityLifecycleState.DESTROY).assertTrue();
                abilityDelegator.doAbilityBackground(ability, (err) => {
                  console.log("====>doAbilityBackground_0300 data:" + JSON.stringify(err));
                  expect(err.code).assertEqual(0);
                  console.log("====>ACTS_GetAbilityState_0300 end====");
                  done();
                })
              })
            }
          }
        })
        .then(() => {
          console.log("====>addAbilityMonitor_0300 finish====");
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(
            {
              bundleName: 'com.example.actsgetabilitystatestagetest',
              abilityName: 'MainAbility3',
            }, (err) => {
            console.log("====>startAbility_0300 err:" + JSON.stringify(err));
          })
        })
    })

    /*
     * @tc.number  : ACTS_GetAbilityState_0500
     * @tc.name    : The test framework needs to provide the following query-related functions
     * @tc.desc    : Get the status of an inactive or nonexistent Ability
     */
    it('ACTS_GetAbilityState_0500', 0, async (done: Function) => {
      console.log('====>start ACTS_GetAbilityState_0500====');
      let ability: null = null;
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      let state = abilityDelegator.getAbilityState(ability);
      console.log("====>ACTS_GetAppState_0500 state:" + state);
      expect(state).assertEqual(undefined);
      console.log("====>ACTS_GetAbilityState_0500 end====");
      done();
    })

    /*
     * @tc.number  : ACTS_GetAbilityState_0600
     * @tc.name    : The test framework needs to provide the following query-related functions
     * @tc.desc    : Get the status of the Ability in the uninitialized state
     */
    it('ACTS_GetAbilityState_0600', 0, async (done: Function) => {
      console.log('====>start ACTS_GetAbilityState_0600====');
      let ability: UIAbility;
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      let count = 0;
      let subscriber: commonEventManager.CommonEventSubscriber;

      commonEvent.createSubscriber(subscriberInfo_MainAbility)
        .then(async (data) => {
          console.log("ACTS_GetAbilityState_0600====>Create Subscriber====>");
          subscriber = data;
          commonEvent.subscribe(subscriber, () => {
            console.log("====>onAbilityForegroundCallback6====");
            count++;
            if (count == 2) {
              abilityDelegator.getCurrentTopAbility((err, data) => {
                console.log("====>getCurrentTopAbility_0600 err:" + JSON.stringify(err) + "data:" + JSON.stringify(data));
                ability = data;
                AppStorage.get<common.UIAbilityContext>("ability4Context")!.terminateSelf();
              })
            }
          });
        })

      abilityDelegator.addAbilityMonitor(
        {
          abilityName: 'MainAbility4',
          onAbilityForeground: () => {
            console.log("====>onAbilityForegroundCallback6====");
            count++;
            if (count == 2) {
              abilityDelegator.getCurrentTopAbility((err, data) => {
                console.log("====>getCurrentTopAbility_0600 err:" + JSON.stringify(err) + "data:" + JSON.stringify(data));
                ability = data;
                AppStorage.get<common.UIAbilityContext>("ability4Context")!.terminateSelf();
              })
            }
          },
          onAbilityDestroy: () => {
            console.log("====>onAbilityDestroyCallback6====");
            let state = abilityDelegator.getAbilityState(ability);
            console.log("====>ACTS_GetAbilityState_0600 data:" + state);
            console.log("====>UNINITIALIZED:" + AbilityDelegatorRegistry.AbilityLifecycleState.UNINITIALIZED);
            expect(state).assertEqual(AbilityDelegatorRegistry.AbilityLifecycleState.UNINITIALIZED);
            console.log("====>ACTS_GetAbilityState_0600 end====");
            done();
          }
        })
        .then(() => {
          console.log("====>addAbilityMonitor_0600 finish====");
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(
            {
              bundleName: 'com.example.actsgetabilitystatestagetest',
              abilityName: 'MainAbility4',
            }, (err) => {
            console.log("====>startAbility_0600 err:" + JSON.stringify(err));
          })
        })
    })
  })
}