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
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import formBindingData from '@ohos.application.formBindingData'
const START_ABILITY_TIMEOUT = 5000;

var getCallingBundleType = {
  events: ["type"]
}

var getCodePathEvent = {
  events: ["getCodePath"]
}

var getRemovableEvent = {
  events: ["getRemovable"]
}

var getAccessTokenIdEvent = {
  events: ["getAccessTokenId"]
}

var getEntityTypeEvent = {
  events: ["getEntityType"]
}

export default function applicationTest(abilityContext) {
  describe('ActsAbilityTest', function () {
    console.log("------------------------start test----------------------------");

    var TAG = "";
    /*
     * @tc.number  SUB_AA_OpenHarmony_FormBase_1000
     * @tc.name    Validate formbindingdata creation data
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_FormBase_1000', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_FormBase_1000-------------");
      TAG = "SUB_AA_OpenHarmony_FormBase_1000"
      var dataObj = {
        temperature:"11c",
        "time":"11:00",
        "test":11,
        "test3":true
      }
      var result = formBindingData.createFormBindingData(dataObj)
      console.log(TAG + " result is : " + JSON.stringify(result))
      expect(JSON.stringify(result)).
      assertEqual(JSON.stringify({"data":"{\"temperature\":\"11c\",\"time\":\"11:00\",\"test\":11,\"test3\":true}"}));
      done();
      console.log("------------end SUB_AA_OpenHarmony_FormBase_1000-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Want_0100
     * @tc.name    Verify the type of want of API8
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Want_0100', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Want_0100-------------");
      TAG = "SUB_AA_OpenHarmony_Want_0100"
      var Subscriber = "";

      function SubscribeCallBackType(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        if(data.event != ""){
          for (var key in data.parameters){
            console.log(TAG + "data.parameters[key] is :" + data.parameters[key])
          }
          expect(data.parameters[key] == "MIMETYPE").assertTrue();
        }
        done();
      }

      commonEvent.createSubscriber(getCallingBundleType).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBackType);
      });

      abilityContext.startAbility({
          abilityName: "com.example.etsapplicationinfo.MainAbility2",
          bundleName: "com.example.etsapplicationinfo",
          type: "MIMETYPE",
      }, (err, data) => {
        console.log(TAG + ":startAbility success , err:" + JSON.stringify(err) + ",data:" + JSON.stringify(data));
      });
      console.log("------------end SUB_AA_OpenHarmony_Want_0100-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0100
     * @tc.name    Verify the CodePath of applicationinfo
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0100', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_ApplicationInfo_0100-------------");
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0100";
      var Subscriber = ""

      function SubscribeCallBackCodePath(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        if(data.event != ""){
          for (var key in data.parameters){
            console.log(TAG + "data.parameters[key] is :" + data.parameters[key])
          }
          console.log(TAG + "JSON.stringify(data.parameters[key]" + JSON.stringify(data.parameters[key]));
          expect(data.parameters[key] == "/data/app/el1/bundle/public/com.example.auxetsapplicationinfo").assertTrue();
        }
        done();
      }

      commonEvent.createSubscriber(getCodePathEvent).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBackCodePath);
      });

      abilityContext.startAbility({
        bundleName: "com.example.auxetsapplicationinfo",
        abilityName: "com.example.auxetsapplicationinfo.MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) + ",data:" + JSON.stringify(data));
      })
      console.log("------------end SUB_AA_OpenHarmony_ApplicationInfo_0100-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0200
     * @tc.name    Verify the removable of applicationinfo
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0200', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_ApplicationInfo_0200-------------");
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0200";
      var Subscriber = ""

      function SubscribeCallBackRemovable(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        if(data.event != ""){
          for (var key in data.parameters){
            console.log(TAG + "data.parameters[key] is :" + data.parameters[key])
          }
          console.log(TAG + "JSON.stringify(data.parameters[key]" + JSON.stringify(data.parameters[key]));
          expect(data.parameters[key] == true).assertTrue();
        }
        done();
      }

      commonEvent.createSubscriber(getRemovableEvent).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBackRemovable);
      });

      abilityContext.startAbility({
        bundleName: "com.example.auxetsapplicationinfo",
        abilityName: "com.example.auxetsapplicationinfo.MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) + ",data:" + JSON.stringify(data));
      })
      console.log("------------end SUB_AA_OpenHarmony_ApplicationInfo_0200-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0300
     * @tc.name    Verify the accesstokenid of applicationinfo
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0300', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_ApplicationInfo_0300-------------");
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0300";
      var Subscriber = ""

      function SubscribeCallBackAccessTokenId(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        if(data.event != ""){
          for (var key in data.parameters){
            console.log(TAG + "data.parameters[key] is :" + data.parameters[key])
          }
          console.log(TAG + "JSON.stringify(data.parameters[key]" + JSON.stringify(data.parameters[key]));
          expect(data.parameters[key] == undefined).assertTrue();
        }
        done();
      }

      commonEvent.createSubscriber(getAccessTokenIdEvent).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBackAccessTokenId);
      });

      abilityContext.startAbility({
        bundleName: "com.example.auxetsapplicationinfo",
        abilityName: "com.example.auxetsapplicationinfo.MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) + ",data:" + JSON.stringify(data));
      })
      console.log("------------end SUB_AA_OpenHarmony_ApplicationInfo_0300-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_ApplicationInfo_0400
     * @tc.name    Verify the EntityType of applicationinfo
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_ApplicationInfo_0400', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_ApplicationInfo_0400-------------");
      TAG = "SUB_AA_OpenHarmony_ApplicationInfo_0400";
      var Subscriber = ""

      function SubscribeCallBackEntityType(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        if(data.event != ""){
          for (var key in data.parameters){
            console.log(TAG + "data.parameters[key] is :" + data.parameters[key])
          }
          console.log(TAG + "JSON.stringify(data.parameters[key]" + JSON.stringify(data.parameters[key]));
          expect(data.parameters[key] == undefined).assertTrue();
        }
        done();
      }

      commonEvent.createSubscriber(getEntityTypeEvent).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBackEntityType);
      });

      abilityContext.startAbility({
        bundleName: "com.example.auxetsapplicationinfo",
        abilityName: "com.example.auxetsapplicationinfo.MainAbility"
      }, (error, data) => {
        console.log(TAG + ":startAbility success,err:" + JSON.stringify(error) + ",data:" + JSON.stringify(data));
      })
      console.log("------------end SUB_AA_OpenHarmony_ApplicationInfo_0400-------------");
    })


  })
}