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
import featureAbility from '@ohos.ability.featureAbility';
import formHost from '@ohos.application.formHost';
import commonEvent from '@ohos.commonEvent'
var ACTS_CARD = {
  events: ["ACTS_FORM_ID","ACTS_FORM_DATA"]
};
export default function abilityTest() {
  describe('ActsCardForceRefreshFATest', function () {

    /**
     * @tc.number: ACTS_InAppCardForceRefresh_0500
     * @tc.name: The main process forcibly refreshes the card(fa)
     * @tc.desc: After the forced refresh is triggered, the data of the in-app card A (stage) changes.
     */
    it('ACTS_InAppCardForceRefresh_0500',0, function (done) {
      let formId;
      let formIdA;
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardForceRefresh_0500 ====> Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.faaa",
            abilityName:"com.example.entry.MainAbility3"
          }
        },(err,data)=>{
          console.info("ACTS_InAppCardForceRefresh_0500 ====> startAbility err:"+JSON.stringify(err))
          console.info("ACTS_InAppCardForceRefresh_0500 ====> startAbility data:"+JSON.stringify(data))
        })
      })
      async function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardForceRefresh_0500 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardForceRefresh_0500 ====> subscribeCallBack data:"+JSON.stringify(data))
        if (data.event == ACTS_CARD.events[0]) {
          formId = data.parameters.formId;
          console.debug("ACTS_InAppCardForceRefresh_0500 ====>"+formId);
          formHost.requestForm(formId.toString()).then((data) => {
            console.log("ACTS_InAppCardForceRefresh_0500 FormMgrService requestForm ====> result data:" + data);
          }).catch((err)=>{
            console.log("ACTS_InAppCardForceRefresh_0500 ====> requestForm result err:" + JSON.stringify(err));
          });
        }else if(data.event == ACTS_CARD.events[1]){
          formIdA = data.parameters.formId;
          expect(formIdA==formId).assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      async function unSubscribeCallback() {
        console.debug("ACTS_InAppCardForceRefresh_0500 ====> unSubscribeCallback")
        await formHost.deleteForm(formId.toString()).then((data)=>{
          console.debug("ACTS_InAppCardForceRefresh_0500 ====> deleteForm data"+data)
        }).catch((err)=>{
          console.debug("ACTS_InAppCardForceRefresh_0500 ====> deleteForm err"+err)
        })
        done()
      }
    })

    /**
     * @tc.number: ACTS_InAppCardForceRefresh_0600
     * @tc.name: The main process forcibly refreshes the card(fa)
     * @tc.desc: The provider and the user are two haps. After the forced refresh is triggered,
     *           the data of the in-app card A (stage) changes.
     */
    it('ACTS_InAppCardForceRefresh_0600',0, function (done) {
      let subscriber;
      let formId;
      let formIdA;
      console.info("ACTS_InAppCardForceRefresh_0600====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardForceRefresh_0600====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.faaa",
            abilityName:"com.example.entry.MainAbility1"
          }
        },(err,data)=>{
          console.info("ACTS_InAppCardForceRefresh_0600 ====> startAbility err:"+JSON.stringify(err))
          console.info("ACTS_InAppCardForceRefresh_0600 ====> startAbility data:"+JSON.stringify(data))
        })
      })

      async function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardForceRefresh_0600 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardForceRefresh_0600 ====> subscribeCallBack data:"+JSON.stringify(data))
        if (data.event == ACTS_CARD.events[0]) {
          formId = data.parameters.formId;
          console.debug("ACTS_InAppCardForceRefresh_0600 ====>"+formId);
          formHost.requestForm(formId.toString()).then((data) => {
            console.log("ACTS_InAppCardForceRefresh_0600 ====> requestForm result data:" + data);
          }).catch((err)=>{
            console.log("ACTS_InAppCardForceRefresh_0600 ====> requestForm result err:" + JSON.stringify(err));
          });
        }else if(data.event == ACTS_CARD.events[1]){
          formIdA = data.parameters.formId;
          expect(formIdA==formId).assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      async function unSubscribeCallback() {
        console.debug("ACTS_InAppCardForceRefresh_0600 ====> unSubscribeCallback")
        console.debug("ACTS_InAppCardForceRefresh_0600 ====> unSubscribeCallback")
        formHost.deleteForm(formId.toString()).then((data)=>{
          console.debug("ACTS_InAppCardForceRefresh_0600 ====> deleteForm data"+data)
        }).catch((err)=>{
          console.debug("ACTS_InAppCardForceRefresh_0600 ====> deleteForm err"+err)
        })
        done()
      }
    })

    /**
     * @tc.number: ACTS_InAppCardForceRefresh_0800
     * @tc.name: The main process forcibly refreshes the card(fa)
     * @tc.desc: Two cards with the same provider card and different formIDs in the app are Card A.
     *       card B. After card A triggers the active refresh of card A, the data of in-app card A (stage) changes,
     *       but the data of in-app card B will not change.
     */
    it('ACTS_InAppCardForceRefresh_0800',0, function (done) {
      let subscriber;
      let formId;
      let formIdA;
      let formIdB;
      console.info("ACTS_InAppCardForceRefresh_0800 ====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardForceRefresh_0800 ====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.faaa",
            abilityName:"com.example.entry.MainAbility2"
          }
        },(err,data)=>{
          console.info("ACTS_InAppCardForceRefresh_0600 ====> startAbility err:"+JSON.stringify(err))
          console.info("ACTS_InAppCardForceRefresh_0600 ====> startAbility data:"+JSON.stringify(data))
        })
      })

      async function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardForceRefresh_0800 ====> subscribeCallBackA err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardForceRefresh_0800 ====> subscribeCallBackA data:" + JSON.stringify(data));
        if(data.event==ACTS_CARD.events[0]){
          formIdA=data.parameters.formIdA
          formIdB=data.parameters.formIdB
          formHost.requestForm(formIdA).then((data) => {
            console.log("ACTS_InAppCardForceRefresh_0800 ====> requestForm result data:" + data);
          }).catch((err)=>{
            console.log("ACTS_InAppCardForceRefresh_0800 ====> requestForm result err:" + JSON.stringify(err));
          });
        }else if(data.event==ACTS_CARD.events[1]){
          formId=data.parameters.formId
          expect(formId==formIdA).assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      async function unSubscribeCallback() {
        console.debug("ACTS_InAppCardForceRefresh_0800 ====> unSubscribeCallback")
        console.debug("ACTS_InAppCardForceRefresh_0800 ====> unSubscribeCallback")
        await formHost.deleteForm(formIdA.toString()).then((data) => {
          console.debug("ACTS_InAppCardForceRefresh_0800 ====> deleteForm data" + data)
        }).catch((err) => {
          console.debug("ACTS_InAppCardForceRefresh_0800 ====> deleteForm err" + err)
        })
        await formHost.deleteForm(formIdB.toString()).then((data) => {
          console.debug("ACTS_InAppCardForceRefresh_0800 ====> deleteForm data" + data)
        }).catch((err) => {
          console.debug("ACTS_InAppCardForceRefresh_0800 ====> deleteForm err" + err)
        })
        done()
      }
    })

    /**
     * @tc.number: ACTS_InAppCardForceRefresh_0900
     * @tc.name: The main process forcibly refreshes the card(fa)
     * @tc.desc: The user calls the force refresh interface, the parameter FormID in the forced flush
     *           interface does not exist, and the card A data is refreshed to confirm that the card A
     *           data will not be updated.
     */
    it('ACTS_InAppCardForceRefresh_0900', 0, function (done) {
        console.debug("ACTS_InAppCardForceRefresh_0900 ====>");
        formHost.requestForm("1234567890").then((data) => {
            console.debug("ACTS_InAppCardForceRefresh_0900 FormMgrService requestForm ====> result data:" + data);
        }).catch((err) => {
          console.debug("ACTS_InAppCardForceRefresh_0900 FormMgrService requestForm ====> result err:" + JSON.stringify(err));
          expect(err.code.toString() == "9").assertTrue()
          expect(err.message.toString() == "the ID of the form to be operated does not exist").assertTrue()
          done()
        });
     })
  })
}