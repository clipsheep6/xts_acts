/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import { Component, Driver, UiWindow, ON, UiDriver } from '@ohos.UiTest';
import commonEventManager from '@ohos.commonEventManager';
import Want from '@ohos.app.ability.Want';
import common from '@ohos.app.ability.common';

let ACTS_VisbilityState: commonEventManager.CommonEventSubscribeInfo = {
  events: ['visibilityState']
};

export default function abilityTest() {
  let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
  let TAG = 'ActsWindowVisibilityTestTAG';
  let uiAbilityWantOne: Want = {
    'bundleName': 'com.acts.windowvisibilitytest',
    'abilityName': 'EntryAbility'
  };
  let uiAbilityWantTwo: Want = {
    'bundleName': 'com.acts.windowvisibilitytest',
    'abilityName': 'EntryAbility1'
  };
  let singleServiceAbilityWantOne: Want = {
    'bundleName': 'com.acts.windowvisibilitytest',
    'abilityName': 'SingleServiceExtAbility'
  };
  let singleServiceAbilityWantTwo: Want = {
    'bundleName': 'com.acts.windowvisibilitytest',
    'abilityName': 'SingleServiceExtAbility1'
  };
  let singleServiceAbilityWantThree: Want = {
    'bundleName': 'com.acts.windowvisibilitytest',
    'abilityName': 'singleserviceextability2'
  };
  let multipleServiceAbilityWant: Want = {
    'bundleName': 'com.acts.windowvisibilitytest',
    'abilityName': 'MultipleServiceExtAbility'
  };
  describe('ActsWindowVisibilityTest', () => {
    afterEach(async (done: Function) => {
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.windowvisibilitytest');
      await done();
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0100
     * @tc.name: Test two uiabilities foregrounding and two single window service abilities
     * @tc.desc: Verify state
     */
    it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0100', 0, async (done: Function) => {
      let TAG1 = 'Acts_WindowVisibility_0100_TAG';
      let subscriber: commonEventManager.CommonEventSubscriber;
      let driver = Driver.create();

      await commonEventManager.createSubscriber(ACTS_VisbilityState)
        .then(async (data) => {
          console.info(TAG1, 'createSubscriber');
          subscriber = data;
          commonEventManager.subscribe(subscriber, (error, data) => {
            console.info(TAG1, 'subscribe data' + JSON.stringify(data));
            console.info(TAG1, 'subscribe error' + JSON.stringify(error));
            if (data.event == 'visibilityState') {
              try {
                expect(data.parameters.applicationState == 2 || data.parameters.applicationState == 1).assertTrue();
              } catch {
                console.error(TAG1, 'state error');
              }
              commonEventManager.unsubscribe(subscriber, () => {
                console.info(TAG1, 'unSubscribeCallback');
                done();
              });
            }
          });
          await driver.delayMs(200);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start uiAbility one : ');
            });
          await driver.delayMs(500);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantTwo)
            .then(() => {
              console.info(TAG1, 'Start uiAbility two : ');
            });
          await driver.delayMs(500);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start single service ability one : ');
            });
          await driver.delayMs(500);
          await driver.click(10, 10);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantTwo)
            .then(() => {
              console.info(TAG1, 'Start single service ability two : ');
            });
        });
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0200
     * @tc.name: Test two uiabilities backgrounding and two single window service abilities
     * @tc.desc: Verify state
     */
    it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0200', 0, async (done: Function) => {
      let TAG1 = 'Acts_WindowVisibility_0200_TAG';
      let driver = Driver.create();
      let subscriber: commonEventManager.CommonEventSubscriber;

      await commonEventManager.createSubscriber(ACTS_VisbilityState)
        .then(async (data) => {
          console.info(TAG1, 'createSubscriber');
          subscriber = data;
          commonEventManager.subscribe(subscriber, (error, data) => {
            console.info(TAG1, 'subscribe data' + JSON.stringify(data));
            console.info(TAG1, 'subscribe error' + JSON.stringify(error));
            if (data.event == 'visibilityState') {
              try {
                expect(data.parameters.applicationState == 2 || data.parameters.applicationState == 1).assertTrue();
              } catch {
                console.error(TAG1, 'state error');
              }
              commonEventManager.unsubscribe(subscriber, () => {
                console.info(TAG1, 'unSubscribeCallback');
                done();
              });
            }
          });
          await driver.delayMs(200);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start uiAbility one : ');
            });
          await driver.delayMs(500);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantTwo)
            .then(() => {
              console.info(TAG1, 'Start uiAbility two : ');
            });
          await driver.delayMs(500);
          await driver.pressHome();
          await driver.delayMs(200);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start single service ability one : ');
            });
          await driver.delayMs(500);
          await driver.click(10, 10);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantTwo)
            .then(() => {
              console.info(TAG1, 'Start single service ability two : ');
            });
        });

    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0300
     * @tc.name: Test two uiabilities backgrounding and two single window service abilities
     * @tc.desc: Verify state
     */
    it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0300', 0, async (done: Function) => {
      let TAG1 = 'Acts_WindowVisibility_0300_TAG';
      let driver = Driver.create();
      let subscriber: commonEventManager.CommonEventSubscriber;

      await commonEventManager.createSubscriber(ACTS_VisbilityState).then(async (data) => {
        console.info(TAG1, 'createSubscriber');
        subscriber = data;
        commonEventManager.subscribe(subscriber, (error, data) => {
          console.info(TAG1, 'subscribe data' + JSON.stringify(data));
          console.info(TAG1, 'subscribe error' + JSON.stringify(error));
          if (data.event == 'visibilityState') {
            try {
              expect(data.parameters.applicationState == 2 || data.parameters.applicationState == 1).assertTrue();
            } catch {
              console.error(TAG1, 'state error');
            }
            commonEventManager.unsubscribe(subscriber, () => {
              console.info(TAG1, 'unSubscribeCallback');
              done();
            });
          }
        });
        await driver.delayMs(200);
        await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantOne)
          .then(() => {
            console.info(TAG1, 'Start uiAbility one : ');
          });
        await driver.delayMs(500);
        await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantTwo)
          .then(() => {
            console.info(TAG1, 'Start uiAbility two : ');
          });
        await driver.delayMs(500);
        await driver.pressHome();
        await driver.delayMs(200);
        await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantThree)
          .then(() => {
            console.info(TAG1, 'Start single service ability three : ');
          });
        await driver.delayMs(500);
        await driver.click(10, 10);
        await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantTwo)
          .then(() => {
            console.info(TAG1, 'Start single service ability two : ');
          });
      });
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0400
     * @tc.name: Test two uiabilities foregrounding and multiple window service abilities
     * @tc.desc: Verify state
     */
    it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0400', 0, async (done: Function) => {
      let TAG1 = 'Acts_WindowVisibility_0400_TAG';
      let driver = Driver.create();
      let subscriber: commonEventManager.CommonEventSubscriber;
      await commonEventManager.createSubscriber(ACTS_VisbilityState)
        .then(async (data) => {
          console.info(TAG1, 'createSubscriber');
          subscriber = data;
          commonEventManager.subscribe(subscriber, (error, data) => {
            console.info(TAG1, 'subscribe data' + JSON.stringify(data));
            console.info(TAG1, 'subscribe error' + JSON.stringify(error));
            if (data.event == 'visibilityState') {
              try {
                expect(data.parameters.applicationState == 2 || data.parameters.applicationState == 1).assertTrue();
              } catch {
                console.error(TAG1, 'state error');
              }
              commonEventManager.unsubscribe(subscriber, () => {
                console.info(TAG1, 'unSubscribeCallback');
                done();
              });
            }
          });
          await driver.delayMs(200);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start uiAbility one : ');
            });
          await driver.delayMs(500);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantTwo)
            .then(() => {
              console.info(TAG1, 'Start uiAbility two : ');
            });
          await driver.delayMs(500);
          await driver.click(10, 10);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(multipleServiceAbilityWant)
            .then(() => {
              console.info(TAG1, 'Start multiple service ability one : ');
            });
        });
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0500
     * @tc.name: Test two uiabilities backgrounding and multiple window service abilities
     * @tc.desc: Verify state
     */
    it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0500', 0, async (done: Function) => {
      let TAG1 = 'Acts_WindowVisibility_0500_TAG';
      let driver = Driver.create();
      let subscriber: commonEventManager.CommonEventSubscriber;

      await commonEventManager.createSubscriber(ACTS_VisbilityState)
        .then(async (data) => {
          console.info(TAG1, 'createSubscriber');
          subscriber = data;
          commonEventManager.subscribe(subscriber, (error, data) => {
            console.info(TAG1, 'subscribe data' + JSON.stringify(data));
            console.info(TAG1, 'subscribe error' + JSON.stringify(error));
            if (data.event == 'visibilityState') {
              try {
                expect(data.parameters.applicationState == 2 || data.parameters.applicationState == 1).assertTrue();
              } catch {
                console.error(TAG1, 'state error');
              }
              commonEventManager.unsubscribe(subscriber, () => {
                console.info(TAG1, 'unSubscribeCallback')
                done();
              });
            }
          });
          await driver.delayMs(200);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start uiAbility one : ');
            });
          await driver.delayMs(500);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(uiAbilityWantTwo)
            .then(() => {
              console.info(TAG1, 'Start uiAbility two : ');
            });
          await driver.delayMs(500);
          await driver.pressHome();
          await driver.delayMs(200);
          await driver.click(10, 10);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(multipleServiceAbilityWant)
            .then(() => {
              console.info(TAG1, 'Start multiple service ability one : ');
            });
        });
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0600
     * @tc.name: Test two single service abilities and multiple window service abilities
     * @tc.desc: Verify state
     */
    it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0600', 0, async (done: Function) => {
      let TAG1 = 'Acts_WindowVisibility_0600_TAG';
      let subscriber: commonEventManager.CommonEventSubscriber;
      let driver = Driver.create();
      await commonEventManager.createSubscriber(ACTS_VisbilityState)
        .then(async (data) => {
          console.info(TAG1, 'createSubscriber');
          subscriber = data;
          commonEventManager.subscribe(subscriber, (error, data) => {
            console.info(TAG1, 'subscribe data' + JSON.stringify(data));
            console.info(TAG1, 'subscribe error' + JSON.stringify(error));
            if (data.event == 'visibilityState') {
              try {
                expect(data.parameters.applicationState == 2 || data.parameters.applicationState == 1).assertTrue();
              } catch {
                console.error(TAG1, 'state error');
              }
              commonEventManager.unsubscribe(subscriber, () => {
                console.info(TAG1, 'unSubscribeCallback');
                done();
              });
            }
          });
          await driver.delayMs(200);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start uiAbility one : ');
            });
          await driver.delayMs(500);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantThree)
            .then(() => {
              console.info(TAG1, 'Start single service ability three : ');
            });
          await driver.delayMs(500);
          await driver.click(10, 10);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(multipleServiceAbilityWant)
            .then(() => {
              console.info(TAG1, 'Start single service ability one : ');
            });
        })
    })

    /**
     * @tc.number: SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0800
     * @tc.name: Test ui ability and multiple window service abilities
     * @tc.desc: Verify state
     */
    it('SUB_Ability_AbilityRuntime_ABILITY_StateInfo_WindowVisibilityState_0800', 0, async (done: Function) => {
      let TAG1 = 'Acts_WindowVisibility_0800_TAG';
      let subscriber: commonEventManager.CommonEventSubscriber;
      let driver = Driver.create();
      let want: Want = {
        'bundleName': 'com.example.windowvisibilityrely',
        'abilityName': 'EntryAbility'
      };
      await commonEventManager.createSubscriber(ACTS_VisbilityState)
        .then(async (data) => {
          console.info(TAG1, 'createSubscriber');
          subscriber = data;
          commonEventManager.subscribe(subscriber, (error, data) => {
            console.info(TAG1, 'subscribe data' + JSON.stringify(data));
            console.info(TAG1, 'subscribe error' + JSON.stringify(error));
            if (data.event == 'visibilityState') {
              try {
                expect(data.parameters.applicationState == 2 || data.parameters.applicationState == 1).assertTrue();
              } catch {
                console.error(TAG1, 'state error');
              }
              commonEventManager.unsubscribe(subscriber, () => {
                console.info(TAG1, 'unSubscribeCallback');
                done();
              });
            }
          });
          await driver.delayMs(200);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startServiceExtensionAbility(singleServiceAbilityWantOne)
            .then(() => {
              console.info(TAG1, 'Start serviceAbility one : ');
            });
          await driver.delayMs(500);
          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(want);
        })
    })
  })
}