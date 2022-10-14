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
import featureAbility from '@ohos.ability.featureAbility'
import { BY, UiDriver, UiComponent, MatchPattern } from '@ohos.uitest'
import commonEvent from '@ohos.commonEvent'
var driver;
const CASE_TIME_OUT=15000;
const TIME_OUT=5000;
var ACTS_CARD = {
  events: ["ACTS_FORM_ID", "ACTS_FORM_ID2", "ACTS_FORM_ID3", "ACTS_FORM_ID4", "ACTS_FORM_ID5",
            "ACTS_FORM_ID6", "ACTS_MESSAGE_ID1", "ACTS_MESSAGE_ID2", "ACTS_MESSAGE_ID3"]
  };

export default function abilityTest() {
  describe('ActsCardEventFATest', function () {
    beforeAll(async (done) => {
      driver = await UiDriver.create()
      done();
    })

    afterEach(async (done) => {
      setTimeout(async() => {
        done();
      },5000)
    })

    /*
     * @tc.number: ACTS_InAppCardRouterEvent_0700
     * @tc.name: Handle in-app card click events
     * @tc.desc: ability to handle in-app card click router events in the background (FA)
     */
    it('ACTS_InAppCardRouterEvent_0700',0, async function (done) {
      let subscriber;
      let id;
      let flag=false
      console.info("ACTS_InAppCardRouterEvent_0700====>");
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardRouterEvent_0700====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.actsinappcardroutereventfatest",
            abilityName:"com.example.entry.MainAbility",
            parameters:{
              abilityName:"FormAbility",
              bundleName:"com.example.actsinappcardroutereventfatest",
              moduleName:"entry",
              formName:"widget",
            }
          }
        },(err)=>{
          console.info("ACTS_InAppCardRouterEvent_0700====> startAbility err:"+JSON.stringify(err));
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardRouterEvent_0700====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardRouterEvent_0700====> catch err: " + JSON.stringify(err));
              expect().assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        clearTimeout(id);
        console.debug("ACTS_InAppCardRouterEvent_0700====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardRouterEvent_0700====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID") {
          console.debug("ACTS_InAppCardRouterEvent_0700====> data:" + JSON.stringify(data.parameters.message));
          expect(data.parameters.message).assertEqual('add detail');
          flag=true;
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardRouterEvent_0700====> unSubscribeCallback");
        done();
      }
      id = setTimeout(()=>{
        if(flag==false){
          expect().assertFail();
          console.debug('ACTS_InAppCardRouterEvent_0700====> timeout');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })

    /*
     * @tc.number: ACTS_InAppCardRouterEvent_0900
     * @tc.name: Handle in-app card click events
     * @tc.desc: The ability is in the foreground and the abilitylaunch type is singleton,
                 processing the in-app card click router event (FA)
     */
    it('ACTS_InAppCardRouterEvent_0900',0, async function (done) {
      let subscriber;
      console.info("ACTS_InAppCardRouterEvent_0900====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardRouterEvent_0900====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.actsinappcardroutereventfatest",
            abilityName:"com.example.entry.MainAbility3",
            parameters:{
              abilityName:"FormAbility",
              bundleName:"com.example.actsinappcardroutereventfatest",
              moduleName:"entry",
              formName:"widget3",
            }
          }
          },(err)=>{
          console.info("ACTS_InAppCardRouterEvent_0900====> startAbility err:"+JSON.stringify(err));
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardRouterEvent_0900====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardRouterEvent_0900====> catch err: " + JSON.stringify(err));
              expect().assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardRouterEvent_0900 ====> subscribeCallBackA err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardRouterEvent_0900 ====> subscribeCallBackA data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID3") {
          expect().assertFail();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardRouterEvent_0900====> unSubscribeCallback");
        done();
      }

      setTimeout(()=>{
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        done();
      },TIME_OUT)
    })

    /*
     * @tc.number: ACTS_InAppCardRouterEvent_1000
     * @tc.name: Handle in-app card click events
     * @tc.desc: Handle in-app card click router event, configuration ability does not exist(FA)
     */
    it('ACTS_InAppCardRouterEvent_1000',0, async function (done) {
      let subscriber;
      console.info("ACTS_InAppCardRouterEvent_1000====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardRouterEvent_1000====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.actsinappcardroutereventfatest",
            abilityName:"com.example.entry.MainAbility4",
            parameters:{
              abilityName:"FormAbility",
              bundleName:"com.example.actsinappcardroutereventfatest",
              moduleName:"entry",
              formName:"widget4",
            }
          }
          },(err)=>{
          console.info("ACTS_InAppCardRouterEvent_1000====> startAbility err:"+JSON.stringify(err))
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardRouterEvent_1000====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardRouterEvent_1000====> catch err: " + JSON.stringify(err));
              expect("").assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardRouterEvent_1000 ====> subscribeCallBackA err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardRouterEvent_1000 ====> subscribeCallBackA data:" + JSON.stringify(data));
        if(data.event == "ACTS_FORM_ID4"){
          expect().assertFail();
        }
      }

      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardRouterEvent_1000====> unSubscribeCallback");
        done();
      }

      setTimeout(()=>{
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        done();
      },TIME_OUT)
    })
  })
}