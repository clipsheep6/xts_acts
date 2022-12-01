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
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import formHost from '@ohos.application.formHost';
import commonEvent from '@ohos.commonEvent'
import featureAbility from '@ohos.ability.featureAbility'
const TIME_OUT = 2000;

var ACTS_CARD = {
  events: ["ACTS_FormIdA","ACTS_FormIdB","ACTS_FormIdC", "ERR_CODE", "onCreate_want_count"]
};

export default function abilityTest() {
  describe('ActsCardLoadFATest', function () {

    afterEach(async (done) => {
      setTimeout(() => {
        done();
      }, 1000)
    })
    /*
     * @tc.number: ACTS_InAppCardLoadCard_1000
     * @tc.name: Create a card(FA)
     * @tc.desc: Create a card,get card data(FA)
     */
    it('ACTS_InAppCardLoadCard_1000', 0, function (done) {
      let formId;
      let subscriber;
      let abilityDelegator = undefined;
      let temp;
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1000 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility",
            action:"MainAbility"
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1000 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1000 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })

      function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1000 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1000 ====> subscribeCallBack data:" + JSON.stringify(data))
        if (data.event == "ACTS_FormIdA") {
          formId = data.parameters.formId;
          console.debug("ACTS_InAppCardLoadCard_1000 ====>" + formId);
          setTimeout(async () => {
            let cmd = "hidumper -s FormMgr -a '-i " + formId + "'"
            console.debug("ACTS_InAppCardLoadCard_1000 ====> cmd " + cmd);
            abilityDelegator.executeShellCommand(cmd,
              (err, data) => {
                console.info('ACTS_InAppCardLoadCard_1000 =====> executeShellCommand : err : ' +
                JSON.stringify(err));
                console.info('ACTS_InAppCardLoadCard_1000 =====> executeShellCommand : data : ' +
                data.stdResult);
                temp = data["stdResult"];
                console.info('ACTS_InAppCardLoadCard_1000 =====> temp : ' + temp.formCacheData);
                expect(temp.indexOf("com.example.inapploadcardfa")>=0).assertTrue()
                expect(temp.indexOf("FormAbility")>=0).assertTrue()
                expect(temp.indexOf("/common/cold.png") >= 0).assertTrue()
                expect(temp.indexOf("12:11:00") >= 0).assertTrue()
                expect(temp.indexOf("11") >= 0).assertTrue()
                console.info('ACTS_InAppCardLoadCard_1000 =====> executeShellCommand : data/exitCode : ' +
                data.exitCode);
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
              })
          }, TIME_OUT)
        }
      }

      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1000 ====> unSubscribeCallback")
        done();
      }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_1100
     * @tc.name: Load a card,formID already exists(FA)
     * @tc.desc: Load a card,formID already exists,get card data(FA)
     */
    it('ACTS_InAppCardLoadCard_1100', 0, function (done) {
      let formId;
      let subscriber;
      let abilityDelegator = undefined;
      let temp;
      let countcard = 0;
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1100 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility",
            action:"MainAbility1"
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1100 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1100 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })

      function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1100 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1100 ====> subscribeCallBack data:" + JSON.stringify(data))
        if (data.event == "ACTS_FormIdB") {
          formId = data.parameters.formId;
          console.debug("ACTS_InAppCardLoadCard_1100 ====>" + formId);
          setTimeout(async () => {
            let cmd = "hidumper -s FormMgr -a '-i " + formId + "'"
            console.debug("ACTS_InAppCardLoadCard_1100 ====> cmd " + cmd);
            abilityDelegator.executeShellCommand(cmd,
              (err, data) => {
                console.info('ACTS_InAppCardLoadCard_1100 =====> executeShellCommand : err : ' +
                JSON.stringify(err));
                console.info('ACTS_InAppCardLoadCard_1100 =====> executeShellCommand : data : ' +
                data.stdResult);
                temp = data["stdResult"];
                console.info('ACTS_InAppCardLoadCard_1100 =====> temp : ' + temp.formCacheData);
                expect(temp.indexOf("com.example.inapploadcardfa")>=0).assertTrue()
                expect(temp.indexOf("FormAbility")>=0).assertTrue()
                expect(temp.indexOf("/common/cold.png") >= 0).assertTrue()
                expect(temp.indexOf("12:11:00") >= 0).assertTrue()
                expect(temp.indexOf("11") >= 0).assertTrue()
                console.info('ACTS_InAppCardLoadCard_1100 =====> executeShellCommand : data/exitCode : ' +
                data.exitCode);
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
              })
          }, TIME_OUT)
        }
        setTimeout(async () => {
               if (data.event == "onCreate_want_count") {
          		   countcard ++;
          			  if(countcard == 2) {
          				expect(2).assertTrue(countcard)
          			  }
          			  if(countcard > 2) {
                  expect().assertFail()
          			  }
          			  commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          		}
          }, 1000)
          	}
          		function unSubscribeCallback() {
          			console.debug("ACTS_InAppCardLoadCard_1100 ====> unSubscribeCallback")
          			done();
          		}
          	})

    /*
    * @tc.number: ACTS_InAppCardLoadCard_1200
    * @tc.name: Load a card,temporary is true(FA)
    * @tc.desc: Load a card,temporary is true,get card data(FA)
    */
    it('ACTS_InAppCardLoadCard_1200', 0, function (done) {
      let formId;
      let subscriber;
      let abilityDelegator = undefined;
      let temp;
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1200 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility2"
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1200 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1200 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })

      function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1200 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1200 ====> subscribeCallBack data:" + JSON.stringify(data))
        if (data.event == "ACTS_FormIdC") {
          formId = data.parameters.formId;
          console.debug("ACTS_InAppCardLoadCard_1200 ====>" + formId);
          setTimeout(async () => {
            let cmd = "hidumper -s FormMgr -a '-i " + formId + "'"
            console.debug("ACTS_InAppCardLoadCard_1200 ====> cmd " + cmd);
            abilityDelegator.executeShellCommand(cmd,
              (err, data) => {
                console.info('ACTS_InAppCardLoadCard_1200 =====> executeShellCommand : err : ' +
                JSON.stringify(err));
                console.info('ACTS_InAppCardLoadCard_1200 =====> executeShellCommand : data : ' +
                data.stdResult);
                temp = data["stdResult"];
                console.info('ACTS_InAppCardLoadCard_1200 =====> temp : ' + JSON.stringify(temp));
                expect(temp.indexOf("com.example.inapploadcardfa")>=0).assertTrue()
                expect(temp.indexOf("FormAbility")>=0).assertTrue()
                expect(temp.indexOf("/common/cold.png") >= 0).assertTrue()
                expect(temp.indexOf("12:11:00") >= 0).assertTrue()
                expect(temp.indexOf("11") >= 0).assertTrue()
                console.info('ACTS_InAppCardLoadCard_1200 =====> executeShellCommand : data/exitCode : ' +
                data.exitCode);
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
              })
          }, TIME_OUT)
        }
      }

      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1200 ====> unSubscribeCallback")
        done();
      }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_1300
     * @tc.name: Create a card,id is wrong(FA)
     * @tc.desc: Create a card,id is wrong,return error code(FA)
     */
    it('ACTS_InAppCardLoadCard_1300', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1300 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility3",
            parameters:{
              formId: 1000000000000,
              bundleName:"com.example.inapploadcardfa",
              abilityName:"FormAbility",
              moduleNameA:"entry",
              formName:"widget",
              dimension:"2*2"
            }
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1300 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1300 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })
      function subscribeCallBack(err, data) {
        setTimeout(() => {
        console.info("ACTS_InAppCardLoadCard_1300 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1300 ====> subscribeCallBack data:" + JSON.stringify(data))
        console.info("ACTS_InAppCardLoadCard_1300 ====> subscribeCallBack errcode:"
        + JSON.stringify(data.parameters.errCode.errcode))
        if(data.event == ACTS_CARD.events[3]){
        expect(data.parameters.errCode.errcode=="2293767").assertTrue()
        expect(data.parameters.errCode.msg=="invalid params received on operating form.").assertTrue()
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }
 }, 2000)
    }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1300 ====> unSubscribeCallback")
        done()
      }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_1400
     * @tc.name: Create a card,name is wrong(FA)
     * @tc.desc: Create a card,name is wrong,return error code(FA)
     */
    it('ACTS_InAppCardLoadCard_1400', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1400 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility3",
            parameters:{
              formId: 0,
              bundleName:"com.example.inapploadcardfa",
              abilityName:"FormAbility",
              moduleNameA:"entry",
              formName:"widgrrrret",
              dimension:"2*2"
            }
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1400 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1400 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })
      function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1400 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1400 ====> subscribeCallBack data:" + JSON.stringify(data))
        console.info("ACTS_InAppCardLoadCard_1400 ====> subscribeCallBack errcode:"
        + JSON.stringify(data.parameters.errCode.errcode))
        if (data.event == ACTS_CARD.events[3]) {
          expect(data.parameters.errCode.errcode == "2293765").assertTrue()
          expect(data.parameters.errCode.msg == "can't get form info by the formName.").assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1400 ====> unSubscribeCallback")
        done()
      }
    })

       /*
        * @tc.number: ACTS_InAppCardLoadCard_1500
        * @tc.name: Create a card,bundle is wrong(FA)
        * @tc.desc: Create a card,bundle is wrong,return error code(FA)
        */

    it('ACTS_InAppCardLoadCard_1500', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1500 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility3",
            parameters:{
              formId : 0,
              bundleName:"com222.122example.inapplggtgtgtoadcard",
              abilityName:"FormAbility",
              moduleNameA:"entry",
              formName:"widget",
              dimension:"2*2"
            }
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1500 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1500 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })
      function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1500 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1500 ====> subscribeCallBack data:" + JSON.stringify(data))
        console.info("ACTS_InAppCardLoadCard_1500 ====> subscribeCallBack errcode:"
        + JSON.stringify(data.parameters.errCode.errcode))
        if (data.event == ACTS_CARD.events[3]) {
          expect(data.parameters.errCode.errcode == "2293765").assertTrue()
          expect(data.parameters.errCode.msg == "can't get form info by the formName.").assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1500 ====> unSubscribeCallback")
        done()
      }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_1600
     * @tc.name: Create a card,ability is empty(FA)
     * @tc.desc: Create a card,ability is empty,return error code(FA)
     */
    it('ACTS_InAppCardLoadCard_1600', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1600 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility3",
            parameters:{
              formId: 0,
              bundleName:"com.example.inapploadcardfa",
              abilityName:"",
              moduleNameA:"entry",
              formName:"widget",
              dimension:"2*2"
            }
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1600 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1600 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })
      function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1600 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1600 ====> subscribeCallBack data:" + JSON.stringify(data))
        console.info("ACTS_InAppCardLoadCard_1600 ====> subscribeCallBack errcode:"
        + JSON.stringify(data.parameters.errCode.errcode))
        if (data.event == ACTS_CARD.events[3]) {
          expect(data.parameters.errCode.errcode == "2293767").assertTrue()
          expect(data.parameters.errCode.msg == "invalid params received on operating form.")
            .assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1600 ====> unSubscribeCallback")
        done()
      }
    })

    /*
    * @tc.number: ACTS_InAppCardLoadCard_1700
    * @tc.name: Create a card,module is wrong(FA)
    * @tc.desc: Create a card,module is wrong,return error code(FA)
    */
    it('ACTS_InAppCardLoadCard_1700',0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1700 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility3",
            parameters: {
              formId: 0,
              bundleName: "com.example.inapploadcardfa",
              abilityName: "FormAbility",
              moduleNameA: "entryrrrt",
              formName: "widget",
              dimension: "2*2"
            }
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1700 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1700 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })
      async function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1700 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1700 ====> subscribeCallBack data:" + JSON.stringify(data))
        console.info("ACTS_InAppCardLoadCard_1700 ====> subscribeCallBack errcode:"
        + JSON.stringify(data.parameters.errCode.errcode))
        if (data.event == ACTS_CARD.events[3]) {
          expect(data.parameters.errCode.errcode.toString() == "2293789").assertTrue()
          expect(data.parameters.errCode.msg.toString() == "the module not exist in the bundle.").assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1700 ====> unSubscribeCallback")
        done()
      }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_1800
     * @tc.name: Create a card,dimension is wrong(FA)
     * @tc.desc: Create a card,dimension is wrong,return error code(FA)
     */
    it('ACTS_InAppCardLoadCard_1800', 0, function (done) {
      let subscriber;
      commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1800 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        let parameter = {
          "want": {
            bundleName: "com.example.inapploadcardfa",
            abilityName: "com.example.entry.MainAbility3",
            parameters: {
              formId: 0,
              bundleName: "com.example.inapploadcardfa",
              abilityName: "FormAbility",
              moduleNameA: "entry",
              formName: "widget",
              dimension: "2*4"
            }
          }
        }
        featureAbility.startAbility(parameter, (err, data) => {
          console.log('ACTS_InAppCardLoadCard_1800 start ability err.code:' + err.code)
          console.log('ACTS_InAppCardLoadCard_1800 start ability data:' + data)
          expect(0).assertEqual(err.code)
        })
      })
      function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_1800 ====> subscribeCallBack err:" + JSON.stringify(err));
        console.info("ACTS_InAppCardLoadCard_1800 ====> subscribeCallBack data:" + JSON.stringify(data))
        console.info("ACTS_InAppCardLoadCard_1800 ====> subscribeCallBack errcode:"
        + JSON.stringify(data.parameters.errCode.errcode))
        if (data.event == ACTS_CARD.events[3]) {
          expect(data.parameters.errCode.errcode == "2293791").assertTrue()
          expect(data.parameters.errCode.msg == "the dimension not exist in the form.").assertTrue()
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }
      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_1800 ====> unSubscribeCallback")
        done()
      }
    })
   })
 }