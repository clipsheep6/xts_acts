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

import formHost from '@ohos.application.formHost';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import commonEvent from '@ohos.commonEvent'
import featureAbility from '@ohos.ability.featureAbility';

async function getFormData(formId) {
  let fromData;
  let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
  let cmd = " hidumper -s FormMgr -a ' -i " + formId + "'";
  await abilityDelegator.executeShellCommand(cmd).then((data) => {
    console.info(`getFormData data : + ${JSON.stringify(data)}`)
    fromData = data;
  }).catch((err) => {
    console.info(`getFormData err : + ${JSON.stringify(err)}`)
  })
  return fromData;
}

export default function abilityTest() {

  describe('ActsAppCardDeleteFaTest', function () {
    /*
    * @tc.number: ACTS_InAppCardDeleteCard_0300
    * @tc.name: The main process deletes the in-app card（deleteForm）
    * @tc.desc: Verify that the deleted card A data query cannot enter the onDestroy life cycle（FA）
    */
    it('ACTS_InAppCardDeleteCard_0300', 0, function (done) {
      console.info("ACTS_InAppCardDeleteCard_0300 begin")
      let subscriber;
      let formId;
      let formIdOnDestroy;
      var subscribeInfo = {
        events: ["ACTS_FORM_ID", "ACTS_FORM_ONDestroy"]
      };
      commonEvent.createSubscriber(subscribeInfo).then(async (data) => {
        console.info("ACTS_InAppCardDeleteCard_0300 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await featureAbility.startAbility({
          want: {
            bundleName: "com.example.actsappcardfa",
            abilityName: "com.example.entry.MainAbility"
          }
        })
      })
      async function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardDeleteCard_0300 subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardDeleteCard_0300 subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID") {
          formId = data.parameters['formId']
          setTimeout(async () => {
            let formData = await getFormData(formId)
            console.info('ACTS_InAppCardDeleteCard_0300 formData: ' + JSON.stringify(formData));
            expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") >= 0).assertTrue()
            await formHost.deleteForm(formId.toString());
          }, 1000)
        } else if (data.event == "ACTS_FORM_ONDestroy") {
          console.info("ACTS_InAppCardDeleteCard_0300 after deleteForm data:" + data)
          formIdOnDestroy = data.parameters.formId
          setTimeout(async () => {
            let formData = await getFormData(formIdOnDestroy)
            console.info('ACTS_InAppCardDeleteCard_0300 formData: ' + JSON.stringify(formData));
            expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") < 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") < 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") < 0).assertTrue()
            commonEvent.unsubscribe(subscriber, unsubscribeCallback);
          }, 1000)
        }
      }
      async function unsubscribeCallback() {
        console.debug("ACTS_InAppCardDeleteCard_0300 unsubscribeCallback")
        done()
      }
    })
    /*
    * @tc.number: ACTS_InAppCardDeleteCard_0400
    * @tc.name: Two users delete the in-app card sequentially
    * @tc.desc: Verify that provider's onDestroy is called sequentially
    */
    it('ACTS_InAppCardDeleteCard_0400', 0, function (done) {
      console.info("ACTS_InAppCardDeleteCard_0400 begin")
      let subscriber;
      let formId_first;
      let formId_second;
      var subscribeInfo = {
        events: ["ACTS_FORM_ID", "ACTS_FORM_ID2", "ACTS_FORM_ONDestroy"]
      };
      async function unSubscribeCallback() {
        console.info("ACTS_InAppCardDeleteCard_0400 unSubscribeCallback")
        done()
      }
      async function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardDeleteCard_0400 subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardDeleteCard_0400 subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == subscribeInfo.events[0]) {
          formId_first = data.parameters['formId']
          await featureAbility.startAbility(
            {
              want: {
                bundleName: "com.example.actsappcardfa",
                abilityName: "com.example.entry.PageAbility",
                parameters: {
                  'formId': formId_first
                }
              }
            })
        } else if (data.event == subscribeInfo.events[1]) {
          formId_second = data.parameters['formId']
          expect(formId_second).assertEqual(formId_first)
          console.info("ACTS_InAppCardDeleteCard_0400 formId_first:" + formId_first);
          console.info("ACTS_InAppCardDeleteCard_0400 formId_second:" + formId_second);
          setTimeout(async () => {
            await formHost.deleteForm(formId_first)
          }, 1000)
        } else if (data.event == subscribeInfo.events[2]) {
          let destroyFormId = data.parameters['formId']
          console.info("ACTS_InAppCardDeleteCard_0400 destroyFormId:" + destroyFormId);
          expect(destroyFormId).assertEqual(formId_first)
          let formData = await getFormData(formId_first)
          console.info('ACTS_InAppCardDeleteCard_0400 formData: ' + JSON.stringify(formData));
          expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") < 0).assertTrue()
          expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") < 0).assertTrue()
          expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") < 0).assertTrue()
          await formHost.deleteForm(formId_second).then((data) => {
            console.info("ACTS_InAppCardDeleteCard_0400 deleteForm data:" + data);
          }).catch((err) => {
            console.info("ACTS_InAppCardDeleteCard_0400 deleteForm err:" + err);
            expect(err.code == "9").assertTrue();
            expect(err.message == "the ID of the form to be operated does not exist").assertTrue();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          })
        }
      }
      commonEvent.createSubscriber(subscribeInfo).then(async (data) => {
        console.debug("ACTS_InAppCardDeleteCard_0400 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await featureAbility.startAbility({
          want: {
            bundleName: "com.example.actsappcardfa",
            abilityName: "com.example.entry.MainAbility"
          }
        })
      })

    })
    /*
    * @tc.number: ACTS_InAppCardDeleteCard_0800
    * @tc.name: Release the in-app card
    * @tc.desc: Verify that hostBundleName is deleted when release card
    */
    it('ACTS_InAppCardDeleteCard_0800', 0, async function (done) {
      console.info("ACTS_InAppCardDeleteCard_0800 begin")
      let subscriber;
      let formId;
      var subscribeInfo = {
        events: ["ACTS_FORM_ID"]
      };
      commonEvent.createSubscriber(subscribeInfo).then(async (data) => {
        console.info("ACTS_InAppCardDeleteCard_0800 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await featureAbility.startAbility({
          want: {
            bundleName: "com.example.actsappcardfa",
            abilityName: "com.example.entry.MainAbility"
          }
        })
      })
      async function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardDeleteCard_0800 subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardDeleteCard_0800 subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID") {
          formId = data.parameters['formId']
          setTimeout(async () => {
            let formData = await getFormData(formId)
            console.info('ACTS_InAppCardDeleteCard_0800 formData: ' + JSON.stringify(formData));
            expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("hostBundleName [com.example.actsappcardfa]") >= 0).assertTrue()
            await formHost.releaseForm(formId.toString())
            setTimeout(async () => {
              let formData = await getFormData(formId)
              console.info('ACTS_InAppCardDeleteCard_0800 formData: ' + JSON.stringify(formData));
              expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") >= 0).assertTrue()
              expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") >= 0).
                assertTrue()
              expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") >= 0).assertTrue()
              expect(formData["stdResult"].indexOf("hostBundleName [com.example.actsappcardfa]") < 0).assertTrue()
              commonEvent.unsubscribe(subscriber, unsubscribeCallback);
            }, 1000)
          }, 1000)
        }
      }
      async function unsubscribeCallback() {
        console.info("ACTS_InAppCardDeleteCard_0800 unsubscribeCallback")
        done()
      }
    })
    /*
    * @tc.number: ACTS_InAppCardDeleteCard_0900
    * @tc.name: Release the in-app card
    * @tc.desc: Verify that hostBundleName is deleted when release card
    */
    it('ACTS_InAppCardDeleteCard_0900', 0, async function (done) {
      console.info("ACTS_InAppCardDeleteCard_0900 begin")
      let subscriber;
      let formId;
      var subscribeInfo = {
        events: ["ACTS_FORM_ID"]
      };
      commonEvent.createSubscriber(subscribeInfo).then(async (data) => {
        console.info("ACTS_InAppCardDeleteCard_0900 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await featureAbility.startAbility({
          want: {
            bundleName: "com.example.actsappcardfa",
            abilityName: "com.example.entry.MainAbility"
          }
        })
      })
      async function releaseForm() {
        await formHost.releaseForm(formId.toString(), (err, data) => {
          console.info("ACTS_InAppCardDeleteCard_0900 releaseForm err:" + err)
          console.info("ACTS_InAppCardDeleteCard_0900 releaseForm data:" + data)
        })
        setTimeout(async () => {
          let formData = await getFormData(formId)
          console.info('ACTS_InAppCardDeleteCard_0900 formData after release: '
            + JSON.stringify(formData));
          expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") >= 0).assertTrue()
          expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") >= 0).assertTrue()
          expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") >= 0).assertTrue()
          expect(formData["stdResult"].indexOf("hostBundleName [com.example.actsappcardfa]") < 0).assertTrue()
          commonEvent.unsubscribe(subscriber, unsubscribeCallback);
        }, 1000)
      }
      async function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardDeleteCard_0900 subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardDeleteCard_0900 subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == subscribeInfo.events[0]) {
          formId = data.parameters['formId']
          console.debug("ACTS_InAppCardDeleteCard_0900 subscribeCallBack formId:" + formId);
          setTimeout(async () => {
            let formData = await getFormData(formId)
            console.info('ACTS_InAppCardDeleteCard_0900 formData: ' + JSON.stringify(formData));
            expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("hostBundleName [com.example.actsappcardfa]") >= 0).assertTrue()
            await releaseForm()
          }, 1000)
        }
      }
      async function unsubscribeCallback() {
        console.debug("ACTS_InAppCardDeleteCard_0800 unsubscribeCallback")
        done()
      }
    })
    /*
    * @tc.number: ACTS_InAppCardDeleteCard_1000
    * @tc.name: Release the in-app card
    * @tc.desc: Verify that hostBundleName is deleted when release card
    */
    it('ACTS_InAppCardDeleteCard_1000', 0, async function (done) {
      console.info("ACTS_InAppCardDeleteCard_1000 begin")
      let subscriber;
      let formId;
      var subscribeInfo = {
        events: ["ACTS_FORM_ID"]
      };
      commonEvent.createSubscriber(subscribeInfo).then(async (data) => {
        console.info("ACTS_InAppCardDeleteCard_1000 createSubscriber");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await featureAbility.startAbility({
          want: {
            bundleName: "com.example.actsappcardfa",
            abilityName: "com.example.entry.MainAbility"
          }
        })
      })
      async function releaseForm() {
        await formHost.releaseForm(formId.toString(), true, (err, data) => {
          console.info("ACTS_InAppCardDeleteCard_1000 releaseForm err:" + err)
          console.info("ACTS_InAppCardDeleteCard_1000 releaseForm data:" + data)
        })
        setTimeout(async () => {
          let formData = await getFormData(formId)
          console.info('ACTS_InAppCardDeleteCard_1000 formData after release first: '
            + JSON.stringify(formData));
          expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") < 0).assertTrue()
          expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") < 0).assertTrue()
          expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") < 0).assertTrue()
          expect(formData["stdResult"].indexOf("hostBundleName [com.example.actsappcardfa]") < 0).assertTrue()
          commonEvent.unsubscribe(subscriber, unsubscribeCallback);
        }, 1000)
      }
      async function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardDeleteCard_1000 subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardDeleteCard_1000 subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == subscribeInfo.events[0]) {
          formId = data.parameters['formId']
          console.debug("ACTS_InAppCardDeleteCard_1000 subscribeCallBack formId_first:" + formId);
          setTimeout(async () => {
            let formData = await getFormData(formId)
            console.info('ACTS_InAppCardDeleteCard_1000 formData first: ' + JSON.stringify(formData));
            expect(formData["stdResult"].indexOf("\"temperature\":\"12\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"imageSrc\":\"/common/cold.png\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("\"time\":\"11:36:00\"") >= 0).assertTrue()
            expect(formData["stdResult"].indexOf("hostBundleName [com.example.actsappcardfa]") >= 0).assertTrue()
            await releaseForm()
          }, 1000)
        }
      }
      async function unsubscribeCallback() {
        console.debug("ACTS_InAppCardDeleteCard_1000 unsubscribeCallback")
        done()
      }
    })
  })
}