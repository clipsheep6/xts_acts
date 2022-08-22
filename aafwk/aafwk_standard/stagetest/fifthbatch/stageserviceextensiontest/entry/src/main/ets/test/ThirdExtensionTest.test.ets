// @ts-nocheck
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
 * See the License for the specific language governing permisrsions and
 * limitations under the License.
 */
import {describe, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'

export default function ThirdExtensionTest(abilityContext) {
  describe('ThirdExtensionTest', function () {

    var listKey = ["", ""];
    var subscriberInfo_AuxiliaryMainAbility = {
      events: ["AuxiliaryMainAbility_onCreate",
      "AuxiliaryMainAbility_onForeground"]
    }
    var subscriberInfo_AuxiliaryServiceAbility = {
      events: ["AuxiliaryServiceAbility_onConnect",
      "AuxiliaryServiceAbility_onDisconnect"]
    }

    function SubscribeCallBack_AuxiliaryMainAbility_Back(err, data) {
      var TAG = "SubscribeCallBack_AuxiliaryMainAbility_Back";
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if (data.event == "AuxiliaryMainAbility_onCreate") {
        listKey[0] = "onCreate";
      } else if (data.event == "AuxiliaryMainAbility_onForeground") {
        listKey[1] = "onForeground";
      }
    }

    function SubscribeCallBack_AuxiliaryServiceAbility_Back(err, data) {
      var TAG = "SubscribeCallBack_AuxiliaryServiceAbility_Back";
      console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
      if (data.event == "AuxiliaryServiceAbility_onConnect") {
        listKey[0] = "onConnect";
      } else if (data.event == "AuxiliaryServiceAbility_onDisconnect") {
        listKey[1] = "onDisconnect";
      }
    }

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_8900
     * @tc.name: Test startability
     * @tc.desc: Serviceextension calls startability to enter parameter want. Only action verification is configured
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_8900', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_8900";
      console.log(TAG + " --- start");
      var subscriber = "";
      listKey = ["", ""];
      commonEvent.createSubscriber(subscriberInfo_AuxiliaryMainAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, SubscribeCallBack_AuxiliaryMainAbility_Back);
      })
      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        globalThis.extensionContext.startAbility({
          "action": "action.com.example.auxiliaryserviceextension",
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
        });
      }, 2000)
    })

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_9000
     * @tc.name: Test startability
     * @tc.desc: Serviceextension calls startability to enter the parameter want to configure action + entities,
     * which has the ability verification of corresponding entities
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_9000', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_9000";
      console.log(TAG + " --- start");
      var subscriber = "";
      listKey = ["", ""];
      commonEvent.createSubscriber(subscriberInfo_AuxiliaryMainAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, SubscribeCallBack_AuxiliaryMainAbility_Back);
      })
      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        globalThis.extensionContext.startAbility({
          "action": "action.com.example.auxiliaryserviceextension",
          "entities": [
            "entity.com.example.auxiliaryserviceextension"
          ]
        }, (error, data) => {
          console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onForeground");
            console.log(TAG + "startAbility listKey : " + listKey);
            done();
          }, 2000);
        });
      }, 2000)
    })

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_9100
     * @tc.name:  Test startability
     * @tc.desc: After binding the service, the client returns to desktop authentication
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_9100', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_9100";
      console.log(TAG + " --- start");
      var subscriber = "";
      listKey = ["", ""];
      commonEvent.createSubscriber(subscriberInfo_AuxiliaryServiceAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, SubscribeCallBack_AuxiliaryServiceAbility_Back);
      })
      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.example.auxiliaryserviceextension",
          "abilityName": "com.example.auxiliaryserviceextension.ServiceAbility",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
        setTimeout(function () {
          expect(listKey[0]).assertEqual("onConnect");
          expect(listKey[1] != "onDisconnect").assertTrue();
          console.log(TAG + "startAbility listKey : " + listKey);
          done();
          globalThis.extensionContext.disconnectAbility(connection).then((data) => {
            console.info('Operation succeeded: ' + data);
          }).catch((error) => {
            console.error('Operation failed. Cause: ' + error);
          })
        }, 2000);
      }, 2000)
    })

    /**
     * @tc.number: SUB_AA_Extension_ServiceExtensionContext_9200
     * @tc.name: Test bind service
     * @tc.desc: After binding the service, the client screen is off for verification
     * @tc.level   0
     */
    it('SUB_AA_Extension_ServiceExtensionContext_9200', 0, async function (done) {
      var TAG = "SUB_AA_Extension_ServiceExtensionContext_9200";
      console.log(TAG + " --- start");
      var subscriber = "";
      listKey = ["", ""];
      commonEvent.createSubscriber(subscriberInfo_AuxiliaryServiceAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, SubscribeCallBack_AuxiliaryServiceAbility_Back);
      })
      abilityContext.startAbility({
        bundleName: "com.example.serviceextension",
        abilityName: "com.example.serviceextension.ServiceAbility"
      }, (error, data) => {
        console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });
      setTimeout(async function () {
        let request = {
          "bundleName": "com.example.auxiliaryserviceextension",
          "abilityName": "com.example.auxiliaryserviceextension.ServiceAbility",
        }
        let options = {
          onConnect: function (elementName, proxy) {
          },
          onDisconnect: function (elementName) {
          },
          onFailed: function (code) {
            console.log(TAG + "onFailed code: " + code);
          }
        }
        let connection = globalThis.extensionContext.connectAbility(request, options);
        console.log(TAG + "connection: " + connection);
        setTimeout(function () {
          expect(listKey[0]).assertEqual("onConnect");
          console.log(TAG + "startAbility listKey : " + listKey);
          done();
        }, 2000);
      }, 2000)
    })

  })
}