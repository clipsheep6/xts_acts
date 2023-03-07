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
      let flag=false;
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
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
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
    })

    /*
     * @tc.number: ACTS_InAppCardRouterEvent_0800
     * @tc.name: Handle in-app card click events
     * @tc.desc: The ability is in the foreground and the abilitylaunch type is standard,
                 processing the in-app card click router event (FA)
     */
    it('ACTS_InAppCardRouterEvent_0800',0, async function (done) {
      let subscriber;
      let flag=false;
      console.info("ACTS_InAppCardRouterEvent_0800====>");
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardRouterEvent_0800====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
            want: {
              bundleName:"com.example.actsinappcardroutereventfatest",
              abilityName:"com.example.entry.MainAbility2",
              parameters:{
                abilityName:"FormAbility",
                bundleName:"com.example.actsinappcardroutereventfatest",
                moduleName:"entry",
                formName:"widget2",
              }
            }
          },(err)=>{
          console.info("ACTS_InAppCardRouterEvent_0800====> startAbility err:"+JSON.stringify(err));
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardRouterEvent_0800====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardRouterEvent_0800====> catch err: " + JSON.stringify(err));
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardRouterEvent_0800====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardRouterEvent_0800====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID2") {
          console.debug("ACTS_InAppCardRouterEvent_0800====> data:" + JSON.stringify(data.parameters.message));
          expect(data.parameters.message).assertEqual('add detail2');
          flag=true;
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardRouterEvent_0800====> unSubscribeCallback");
        done()
      }
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
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardRouterEvent_0900 ====> subscribeCallBackA err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardRouterEvent_0900 ====> subscribeCallBackA data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID3") {
          expect(null).assertFail();
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
          expect(null).assertFail();
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

    /*
     * @tc.number: ACTS_InAppCardRouterEvent_1100
     * @tc.name: Handle in-app card click events
     * @tc.desc: Handle the in-app card click router event, configure the params parameter to be empty(FA)
     */
    it('ACTS_InAppCardRouterEvent_1100',0, async function (done) {
      let subscriber;
      let flag=false;
      console.info("ACTS_InAppCardRouterEvent_1100====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardRouterEvent_1100====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
            want: {
              bundleName:"com.example.actsinappcardroutereventfatest",
              abilityName:"com.example.entry.MainAbility5",
              parameters:{
                abilityName:"FormAbility",
                bundleName:"com.example.actsinappcardroutereventfatest",
                moduleName:"entry",
                formName:"widget5",
              }
            }
          },(err)=>{
          console.info("ACTS_InAppCardRouterEvent_1100====> startAbility err:"+JSON.stringify(err));
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardRouterEvent_1100====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardRouterEvent_1100====> catch err: " + JSON.stringify(err));
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardRouterEvent_1100====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardRouterEvent_1100====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID5") {
          console.debug("ACTS_InAppCardRouterEvent_1100====> data:" + JSON.stringify(data.parameters.message));
          expect(data.parameters.message).assertEqual(undefined);
          flag=true;
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardRouterEvent_1100====> unSubscribeCallback");
        done();
      }
    })

    /*
     * @tc.number: ACTS_InAppCardRouterEvent_1200
     * @tc.name: Handle in-app card click events
     * @tc.desc: Handle the in-app card click router event, and configure the params parameter
                 to be an empty string(FA)
     */
    it('ACTS_InAppCardRouterEvent_1200',0, async function (done) {
      let subscriber;
      let flag=false;
      console.info("ACTS_InAppCardRouterEvent_1200====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardRouterEvent_1200====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
            want: {
              bundleName:"com.example.actsinappcardroutereventfatest",
              abilityName:"com.example.entry.MainAbility6",
              parameters:{
                abilityName:"FormAbility",
                bundleName:"com.example.actsinappcardroutereventfatest",
                moduleName:"entry",
                formName:"widget6",
              }
            }
          },(err)=>{
          console.info("ACTS_InAppCardRouterEvent_1200====> startAbility err:"+JSON.stringify(err));
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardRouterEvent_1200====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardRouterEvent_1200====> catch err: " + JSON.stringify(err));
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardRouterEvent_1200====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardRouterEvent_1200====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_FORM_ID6") {
          console.debug("ACTS_InAppCardRouterEvent_1200====> data:" + JSON.stringify(data.parameters.message));
          expect(data.parameters.message).assertEqual("");
          flag=true;
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardRouterEvent_1200====> unSubscribeCallback")
        done()
      }
    })


    /*
     * @tc.number: ACTS_InAppCardMessageEvent_0400
     * @tc.name: Handle in-app card click events
     * @tc.desc: Handling in-app card click message event(FA)
     */
    it('ACTS_InAppCardMessageEvent_0400',0, async function (done) {
      let subscriber;
      let flag=false;
      console.info("ACTS_InAppCardMessageEvent_0400====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardMessageEvent_0400====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
            want: {
              bundleName:"com.example.actsinappcardroutereventfatest",
              abilityName:"com.example.entry.MainAbility7",
              parameters:{
                abilityName:"FormAbility",
                bundleName:"com.example.actsinappcardroutereventfatest",
                moduleName:"entry",
                formName:"widget7",
              }
            }
          },(err)=>{
          console.info("ACTS_InAppCardMessageEvent_0400====> startAbility err:"+JSON.stringify(err))
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardMessageEvent_0400====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardMessageEvent_0400====> catch err: " + JSON.stringify(err));
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardMessageEvent_0400====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardMessageEvent_0400====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_MESSAGE_ID1") {
          console.debug("ACTS_InAppCardMessageEvent_0400====> data:" + JSON.stringify(data.parameters.message));
          expect(data.parameters.message).assertEqual('{"action":"message","params":{"message":"MessageEvent_0100"}}');
          flag=true;
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
      console.debug("ACTS_InAppCardMessageEvent_0400====> unSubscribeCallback")
        done();
      }
    })

    /*
     * @tc.number: ACTS_InAppCardMessageEvent_0500
     * @tc.name: Handle in-app card click events
     * @tc.desc: Handle the in-app card click message event, configure the params parameter to be empty (FA)
     */
    it('ACTS_InAppCardMessageEvent_0500',0, async function (done) {
      let subscriber;
      let flag=false;
      console.info("ACTS_InAppCardMessageEvent_0500====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardMessageEvent_0500====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.actsinappcardroutereventfatest",
            abilityName:"com.example.entry.MainAbility8",
            parameters:{
              abilityName:"FormAbility",
              bundleName:"com.example.actsinappcardroutereventfatest",
              moduleName:"entry",
              formName:"widget8",
            }
          }
        },(err)=>{
          console.info("ACTS_InAppCardMessageEvent_0500====> startAbility err:"+JSON.stringify(err))
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardMessageEvent_0500====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardMessageEvent_0500====> catch err: " + JSON.stringify(err));
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardMessageEvent_0500====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardMessageEvent_0500====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_MESSAGE_ID2") {
          console.debug("ACTS_InAppCardMessageEvent_0500====> data:" + JSON.stringify(data.parameters.message));
          expect(data.parameters.message).assertEqual('{"action":"message","params":{}}');
          flag=true;
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardMessageEvent_0500====> unSubscribeCallback")
        done();
      }
    })


    /*
     * @tc.number: ACTS_InAppCardMessageEvent_0600
     * @tc.name: Handle in-app card click events
     * @tc.desc: Handle the in-app card click message event, and configure the params parameter to be an
                 empty string (FA)
     */
    it('ACTS_InAppCardMessageEvent_0600',0, async function (done) {
      let subscriber;
      let flag=false;
      console.info("ACTS_InAppCardMessageEvent_0600====>")
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("ACTS_InAppCardMessageEvent_0600====> Create Subscribe");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        featureAbility.startAbility({
          want: {
            bundleName:"com.example.actsinappcardroutereventfatest",
            abilityName:"com.example.entry.MainAbility9",
            parameters:{
              abilityName:"FormAbility",
              bundleName:"com.example.actsinappcardroutereventfatest",
              moduleName:"entry",
              formName:"widget9",
            }
          }
        },(err)=>{
          console.info("ACTS_InAppCardMessageEvent_0600====> startAbility err:"+JSON.stringify(err))
          expect(err.code).assertEqual(0);
          setTimeout(async()=>{
            try {
              console.debug("ACTS_InAppCardMessageEvent_0600====> click");
              await driver.click(200,100)
            } catch (err) {
              console.debug("ACTS_InAppCardMessageEvent_0600====> catch err: " + JSON.stringify(err));
              expect(null).assertFail();
              done();
            }
          },4000)
        })
      })

      function subscribeCallBack(err, data) {
        console.debug("ACTS_InAppCardMessageEvent_0600====> subscribeCallBack err:" + JSON.stringify(err));
        console.debug("ACTS_InAppCardMessageEvent_0600====> subscribeCallBack data:" + JSON.stringify(data));
        if (data.event == "ACTS_MESSAGE_ID3") {
          console.debug("ACTS_InAppCardMessageEvent_0600====> data:" + JSON.stringify(data.parameters.message));
          expect(data.parameters.message).assertEqual('{"action":"message","params":{"message":""}}');
          flag=true;
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardMessageEvent_0600====> unSubscribeCallback")
        done();
      }
    })
  })
}