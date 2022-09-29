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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'

async function getFormData(formId) {
  let fromData;
  let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
  let cmd = "hidumper -s FormMgr -a '-i " + formId + "'";
  await abilityDelegator.executeShellCommand(cmd).then((data) => {
    console.info(`getFormData data : + ${JSON.stringify(data)}`)
    fromData = data;
  }).catch((err) => {
    console.info(`getFormData err : + ${JSON.stringify(err)}`)
  })
  return fromData;
}

export default function InAppcardActiveRefreshStageTest() {
  describe('ActsCardActiveRefreshStageTest', function () {

    /**
     * @tc.number: ACTS_InAppCardActiveRefresh_0100
     * @tc.name: Active card refresh in application
     * @tc.desc: The provider calls the update interface to refresh card A data and confirm that card A 
     *                       data has been updated
     */
    it('ACTS_InAppCardActiveRefresh_0100', 0, async function (done) {
      console.log("ACTS_InAppCardActiveRefresh_0100 begin");
      let formId = null;
      let subscriber = null;
      let subscribeInfo = {
        events: ["form_id_from_provider",
        "after_active_refresh_from_provider",],
      }

      function unsubscribeCallback() {
        console.log("ACTS_InAppCardActiveRefresh_0100 unsubscribeCallback");
        done()
      }

      async function activeUpdate() {
        let commonEventData = {
          parameters: {
            "formId": formId
          }
        };
        commonEvent.publish('active_refresh_to_provider', commonEventData, (err) => {
          console.info(`ACTS_InAppCardActiveRefresh_0100 publish event: ${JSON.stringify(err)}`);
        })
      }

      async function subscribeCallback(err, data) {
        console.log("ACTS_InAppCardActiveRefresh_0100 subscribeCallback data:" + JSON.stringify(data));
        if (data.event == subscribeInfo.events[0]) {
          setTimeout(async () => {
            formId = data.parameters['formId']
            let formData = await getFormData(formId)
            expect(formData["stdResult"].toString().indexOf("\"updateCount\":0") >= 0).assertTrue()
            activeUpdate()
          }, 1000)
        } else if (data.event == subscribeInfo.events[1]) {
          let formData = await getFormData(formId)
          expect(formData["stdResult"].toString().indexOf("\"updateCount\":2") >= 0).assertTrue()
          commonEvent.unsubscribe(subscriber, unsubscribeCallback);
        }
      }

      commonEvent.createSubscriber(subscribeInfo).then(async(data) => {
        console.log("ACTS_InAppCardActiveRefresh_0100 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallback);
        let parameter = {
          bundleName: "com.inappcard.activerefreshstagetest",
          abilityName: "MainAbility"
        }
        console.log("ACTS_InAppCardActiveRefresh_0100 startAbility");
        await globalThis.abilityContext.startAbility(parameter, (err, data) => {
          console.log(`ACTS_InAppCardActiveRefresh_0100 startAbility err : + ${JSON.stringify(err)}`)
        })
      });
    })

    /**
     * @tc.number: ACTS_InAppCardActiveRefresh_0200
     * @tc.name: Active card refresh in application
     * @tc.desc: Call the update interface to refresh the Card A data and confirm that the Card A data is updated
     */
    it('ACTS_InAppCardActiveRefresh_0200', 0, async function (done) {
      let formId = null;
      let subscriber = null;
      let subscribeInfo = {
        events: ["form_id_from_provider","form_id_from_provider_active"],
      }

      function unsubscribeCallback() {
        console.log("ACTS_InAppCardActiveRefresh_0200 unsubscribeCallback");
        done()
      }

      async function subscribeCallback(err, data) {
        console.log("ACTS_InAppCardActiveRefresh_0200 subscribeCallback data:" + JSON.stringify(data));
        if (data.event == subscribeInfo.events[0]) {
          setTimeout(async () => {
            formId = data.parameters['formId']
            let formData = await getFormData(formId)
            expect(formData["stdResult"].toString().indexOf("\"updateCount\":0") >= 0).assertTrue()
          }, 500)
        }else if(data.event == subscribeInfo.events[1]){
          setTimeout(async () => {
            formId = data.parameters['formId']
            let formData = await getFormData(formId)
            expect(formData["stdResult"].toString().indexOf("\"updateCount\":2") >= 0).assertTrue()
            commonEvent.unsubscribe(subscriber, unsubscribeCallback);
          }, 500)
        }
      }

      commonEvent.createSubscriber(subscribeInfo).then(async(data) => {
        console.log("ACTS_InAppCardActiveRefresh_0200 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallback);
        let parameter = {
          bundleName: "com.inappcard.activerefreshstagetest",
          abilityName: "MainAbility",
          action:"inCard"
        }
        await globalThis.abilityContext.startAbility(parameter)
      });
    })

    /**
     * @tc.number: ACTS_InAppCardActiveRefresh_0300
     * @tc.name: Active card refresh in application
     * @tc.desc: When the provider calls the update interface, the parameter FormID in the update
     *                       interface does not exist, the card A data is refreshed, and the error code is xxxx.
     */
    it('ACTS_InAppCardActiveRefresh_0300', 0, async function (done) {
      let subscriber = null;
      let subscribeInfo = {
        events: ["active_refresh_error_code"],
      }

      function unsubscribeCallback() {
        console.log("ACTS_InAppCardActiveRefresh_0300 unsubscribeCallback");
        done()
      }

      async function subscribeCallback(err, data) {
        console.log("ACTS_InAppCardActiveRefresh_0300 subscribeCallback data:" + JSON.stringify(data));
        if (data.event == subscribeInfo.events[0]) {
          console.debug("ACTS_InAppCardActiveRefresh_0300 error_code event start:" + JSON.stringify(data));
          expect(data.parameters.errCode.code.toString() == "9").assertTrue()
          expect(data.parameters.errCode.message.toString() == "the ID of the form to be operated does not exist")
            .assertTrue()
          console.debug("ACTS_InAppCardActiveRefresh_0300 error_code event end:" + JSON.stringify(data));
          commonEvent.unsubscribe(subscriber, unsubscribeCallback);
        }
      }

      commonEvent.createSubscriber(subscribeInfo).then(async(data) => {
        console.log("ACTS_InAppCardActiveRefresh_0300 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallback);
        let parameter = {
          bundleName: "com.inappcard.activerefreshstagetest",
          abilityName: "MainAbility",
          action:"inCardErr"
        }
        await globalThis.abilityContext.startAbility(parameter)
      });
    })
  })
}