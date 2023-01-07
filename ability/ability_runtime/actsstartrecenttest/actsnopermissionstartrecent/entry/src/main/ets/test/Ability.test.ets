/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import commonEvent from '@ohos.commonEvent'

var subscriberInfo_MainAbility = {
  events: ["ACTS_StartAbility_CommonEvent1", "ACTS_StartAbility_CommonEvent2" ]
};
const START_ABILITY_TIMEOUT = 8000;
console.info("====>in Ability.test====>");

export default function abilityTest() {
  describe('ActsNoPermissionStartRecentTest', function () {
    console.info("====>in ActsNoPermissionStartRecentTest====>");

    /*
    * @tc.number: ACTS_noPermissionStartRecent_0100
    * @tc.name: Start Recent Ability with no permission.
    * @tc.desc: Verify Get displayId to startAbilityForResult Ability
    */
    it('ACTS_noPermissionStartRecent_0100', 0, async function (done) {
      console.log('ACTS_noPermissionStartRecent_0100====<begin');
      var subscriber;
      let id;

      async function subscribeCallBack(err, data) {
        console.info("====>ACTS_noPermissionStartRecent_0100 Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck(data) {
          console.info('====> ACTS_noPermissionStartRecent_0100 processInfoCheck=====>');
          expect(globalThis.instanceCount).assertEqual(2);
          done();
        }

        if (data.event == "ACTS_StartAbility_CommonEvent1") {
          console.info('====> ACTS_noPermissionStartRecent_0100 ACTS_StartAbility_CommonEvent1 success=====>');

          await globalThis.abilityContext.startAbility(
            {
                bundleName: 'com.example.nopermissionstartrecent',
                abilityName: 'com.example.nopermissionstartrecent.MainAbility2',
                parameters:{
                    "ohos.aafwk.param.startRecent" : true,
                    "commonEvent":"ACTS_StartAbility_CommonEvent2"
                }
            }).then(() => {
                console.info("====>ACTS_noPermissionStartRecent_0100  start recent end====>");
          })
        }

        if (data.event == "ACTS_StartAbility_CommonEvent2") {
          console.info('====> ACTS_noPermissionStartRecent_0100 ACTS_StartAbility_CommonEvent2 success=====>');
          clearTimeout(id);
          processInfoCheck(data);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        }
      }

      commonEvent.createSubscriber(subscriberInfo_MainAbility).then(async (data) => {
        console.info("====>ACTS_noPermissionStartRecent_0100 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.nopermissionstartrecent',
            abilityName: 'com.example.nopermissionstartrecent.MainAbility2',
            parameters:{
                "commonEvent":"ACTS_StartAbility_CommonEvent1"
            }
          }).then(() => {
          console.info("====>ACTS_noPermissionStartRecent_0100 startAbility end====>");
        })
      })

      function unSubscribeCallback() {
        console.info("====>UnSubscribe0100 CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_noPermissionStartRecent_0100 timeout.');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start  ACTS_noPermissionStartRecent_0100 timer id : ' + id);
    })

  })
}