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
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import commonEvent from "@ohos.commonEvent";
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';

let subscriberInfo_MainAbility2: commonEventManager.CommonEventSubscribeInfo = {
  events: ["GetCurrentTopAbilityB"],
};
const START_ABILITY_TIMEOUT = 4000;

export default function abilityTest() {
  describe('ActsParticleAbilityTest', () => {

    /**
     * @tc.number: ACTS_GetCurrentTopAbility_0100
     * @tc.name: Verify the interface for obtaining the Ability of the foreground
     * @tc.desc:Start PageAbility1,Ability2 to be tested in turn, and get the current foreground Ability (AsyncCallback)
     */
    it('ACTS_GetCurrentTopAbility_0100', 0, async (done: Function) => {
      console.log("ACTS_GetCurrentTopAbility_0100 --- start");
      let flag = true;
      let Subscriber: commonEventManager.CommonEventSubscriber;
      let AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      commonEvent.createSubscriber(subscriberInfo_MainAbility2)
        .then(async (data) => {
          console.debug("ACTS_GetCurrentTopAbility_0100====>Create Subscriber====>");
          Subscriber = data;
          commonEvent.subscribe(Subscriber, (err, data) => {
            console.debug("ACTS_GetCurrentTopAbility_0100====>Subscribe CallBack data:====>" + JSON.stringify(data));
            expect(data.event == 'GetCurrentTopAbilityB').assertTrue();
            if (data.event == 'GetCurrentTopAbilityB') {
              commonEvent.unsubscribe(Subscriber, () => {
                console.debug("ACTS_GetCurrentTopAbility_0100====>UnSubscribe CallBack====>");
              });
              AbilityDelegator.getCurrentTopAbility((err, data) => {
                console.log("ACTS_GetCurrentTopAbility_0100 and");
                console.debug("====>thisTopAbility_0100====>" + JSON.stringify(data));
                console.debug("====>thisTopAbility_0100====>want====>" + JSON.stringify(data.lastRequestWant));
                console.debug("====>thisTopAbility_0100====>abilityName====>" + JSON.stringify(data.lastRequestWant.abilityName));
                console.debug("====>start startAbility====>");
                expect(data.lastRequestWant.abilityName == "Ability2").assertTrue();
                AppStorage.get<common.UIAbilityContext>("ability2Context")!.terminateSelf();
                AppStorage.get<common.UIAbilityContext>("ability3Context")!.terminateSelf();
                done();
              })
            }
          });

          console.log("ACTS_GetCurrentTopAbility_0100 start");

          await AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(
            {
              bundleName: 'com.example.actsgetcurrenttopabilitystageatest',
              abilityName: 'Ability1'
            }, (err) => {
            console.debug("====>ACTS_GetCurrentTopAbility_0100 err:" + JSON.stringify(err))
          })
          console.log("ACTS_GetCurrentTopAbility_0100 end");
        })
    })
  })
}
