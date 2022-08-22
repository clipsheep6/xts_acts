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
import ability from '@ohos.application.Ability'
import wantConstant from '@ohos.ability.wantConstant'

const INTENT_PARAMS_TITLE = "ability.want.params.TITLE";
const INTENT_PARAMS_INTENT = "ability.want.params.INTENT"

const START_ABILITY_TIMEOUT = 8000;

var subscriberInfoMainAbility3Test = {
  events: ["mainAbility3_onCreate_test_api8",
           "mainAbility3_onWindowStageCreate_test_api8",
           "mainAbility3_onForeground_test_api8",
           "mainAbility3_onBackground_test_api8",
           "mainAbility3_onForeground_test_api8",]
}

var subscriberInfoMuitiAbility = {
  events: ["multiAbility_onCreate",
           "multiAbility_onWindowStageCreate",
           "multiAbility_onForeground",
           "multiAbility_onDestroy",
           "multiAbility_onWindowStageDestroy",
           "multiAbility_onBackground"]
}

var subscriberInfoMainAbility2HelpApp = {
  events: ["help_mainAbility2_onCreate",
           "help_mainAbility2_onDestroy"]
}

var subscriberInfoMainAbility2HelpIndex = {
  events: ["help_mainAbility2_onShow",
           "help_mainAbility2_onActive",
           "help_mainAbility2_onInactive",
           "help_mainAbility2_onHide"]
}

var subscriberInfoMainAbility3HelpApp = {
  events: ["help_mainAbility3_onCreate",
           "help_mainAbility3_onDestroy"]
}

var subscriberInfoMainAbility3HelpIndex = {
  events: ["help_mainAbility3_onShow",
           "help_mainAbility3_onActive",
           "help_mainAbility3_onInactive",
           "help_mainAbility3_onHide"]
}

var subscriberInfoSingletonAbility = {
  events: ["singletonAbility_onCreate",
           "singletonAbility_onWindowStageCreate",
           "singletonAbility_onForeground",
           "singletonAbility_onBackground",
           "singletonAbility_onWindowStageDestroy",
           "singletonAbility_onDestroy"]
}

var subscriberInfoMainAbility5 = {
  events: ["mainAbility5_onCreate",
           "mainAbility5_onWindowStageCreate",
           "mainAbility5_onForeground",
           "mainAbility5_onCreate",
           "mainAbility5_onWindowStageCreate",
           "mainAbility5_onForeground",
           "mainAbility5_onBackground",
           "mainAbility5_onWindowStageDestroy",
           "mainAbility5_onDestroy"]
}

var subscriberInfoMainAbility3Help = {
  events: ["mainAbility3_onCreate_help",
           "mainAbility3_onWindowStageCreate_help",
           "mainAbility3_onForeground_help",
           "mainAbility3_onBackground_help",
           "mainAbility3_onWindowStageDestroy_help",
           "mainAbility3_onDestroy_help" ]
}

var subscriberInfoEntry2MainAbilityHelp = {
  events: ["entry2_mainAbility_onCreate_help",
           "entry2_mainAbility_onWindowStageCreate_help",
           "entry2_mainAbility_onForeground_help",
           "entry2_mainAbility_onBackground_help",
           "entry2_mainAbility_onWindowStageDestroy_help",
           "entry2_mainAbility_onDestroy_help"]
}

var mainAbility5Data = {
  events:["mainAbility5_data"]
}

export default function abilityTest(abilityContext) {
  describe('AbilityTest', function () {
    var i = 0;
    var q = 0;
    var w = 0;
    var e = 0;
    var TAG = "";
    var listKey2=["","","","","",""];
    var listKey3=["","","","","",""];
    var listKey4 = ["","","","","",""];
    var listKey5 = ["","","","","",""];
    var listKey6 = ["","","","","",""];
    var listKey7 = ["","","","","","","","",""];
    var listKey8 = ["","",""];
    var listKey9 = ["","","","","",""];
    var listKey10 = ["","","","","",""];
    var listKeyTest0600=["","","","",""];
    var listKeyHelpApp0600=["",""];
    var listKeyHelpIndex0600=["","","",""];
    var listKeyHelpApp1000=["",""];
    var listKeyHelpIndex1000=["","","",""];

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time))
    }

    function subscribeCallBackMainAbilityTest(err, data) {
      console.log(TAG + " Subscribe CallBack data test :" + JSON.stringify(data));
      if (data.event == "mainAbility3_onCreate_test_api8") {
        listKeyTest0600[0] = "onCreate";
      } else if (data.event == "mainAbility3_onWindowStageCreate_test_api8") {
        listKeyTest0600[1] = "onWindowStageCreate";
      } else if (data.event == "mainAbility3_onForeground_test_api8") {
        if (i == 0) {
          listKeyTest0600[2] = "onForeground";
          i++;
        } else {
          listKeyTest0600[4] = "onForeground";
        }
      } else if (data.event == "mainAbility3_onBackground_test_api8") {
        listKeyTest0600[3] = "onBackground";
      }
    }

    function subscribeCallBackHelpApp(err, data) {
      console.log(TAG + " Subscribe CallBack data help app :" + JSON.stringify(data));
      if(data.event == "help_mainAbility2_onCreate"){
        listKeyHelpApp0600[0] = "onCreate";
      }else if(data.event == "help_mainAbility2_onDestroy"){
        listKeyHelpApp0600[1] = "onDestroy";
      }
    }

    function subscribeCallBackHelpIndex(err, data) {
      console.log(TAG + " Subscribe CallBack data help index:" + JSON.stringify(data));
      if(data.event == "help_mainAbility2_onShow"){
        listKeyHelpIndex0600[0] = "onShow";
      }else if(data.event == "help_mainAbility2_onActive"){
        listKeyHelpIndex0600[1] = "onActive";
      }else if(data.event == "help_mainAbility2_onInactive"){
        listKeyHelpIndex0600[2] = "onInactive";
      }else if(data.event == "help_mainAbility2_onHide"){
        listKeyHelpIndex0600[3] = "onHide";
      }
    }

    function subscribeCallBackMainAbility3HelpApp(err, data) {
      console.log(TAG + " Subscribe CallBack data help app :" + JSON.stringify(data));
      if(data.event == "help_mainAbility3_onCreate"){
        listKeyHelpApp1000[0] = "onCreate";
      }else if(data.event == "help_mainAbility3_onDestroy"){
        listKeyHelpApp1000[1] = "onDestroy";
      }
    }

    function subscribeCallBackMainAbility3HelpIndex(err, data) {
      console.log(TAG + " Subscribe CallBack data help index:" + JSON.stringify(data));
      if(data.event == "help_mainAbility3_onShow"){
        listKeyHelpIndex1000[0] = "onShow";
      }else if(data.event == "help_mainAbility3_onActive"){
        listKeyHelpIndex1000[1] = "onActive";
      }else if(data.event == "help_mainAbility3_onInactive"){
        listKeyHelpIndex1000[2] = "onInactive";
      }else if(data.event == "help_mainAbility3_onHide"){
        listKeyHelpIndex1000[3] = "onHide";
      }
    }

    function subscribeCallBackMultiAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data multiAbility :" + JSON.stringify(data));
      if(data.event == "multiAbility_onCreate"){
        listKey2[0] = "onCreate";
      }else if(data.event == "multiAbility_onWindowStageCreate"){
        listKey2[1] = "onWindowStageCreate";
      }else if(data.event == "multiAbility_onForeground"){
        listKey2[2] = "onForeground";
      }else if(data.event == "multiAbility_onDestroy"){
        listKey2[3] = "onDestroy";
      }else if(data.event == "multiAbility_onWindowStageDestroy"){
        listKey2[4] = "onWindowStageDestroy";
      }else if(data.event == "multiAbility_onBackground"){
        listKey2[5] = "onBackground";
      }
    }

    function subscribeCallBackMultiAbility2(err, data) {
      console.log(TAG + " Subscribe CallBack data multiAbility :" + JSON.stringify(data));
      if(data.event == "multiAbility_onCreate"){
        listKey3[0] = "onCreate";
      }else if(data.event == "multiAbility_onWindowStageCreate"){
        listKey3[1] = "onWindowStageCreate";
      }else if(data.event == "multiAbility_onForeground"){
        listKey3[2] = "onForeground";
      }else if(data.event == "multiAbility_onDestroy"){
        listKey3[3] = "onDestroy";
      }else if(data.event == "multiAbility_onWindowStageDestroy"){
        listKey3[4] = "onWindowStageDestroy";
      }else if(data.event == "multiAbility_onBackground"){
        listKey3[5] = "onBackground";
      }
    }

    function subscribeCallBackSingletonAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data SingletonAbility:" + JSON.stringify(data));
      if (data.event == "singletonAbility_onCreate") {
        listKey4[0] = "onCreate";
      } else if (data.event == "singletonAbility_onWindowStageCreate") {
        listKey4[1] = "onWindowStageCreate";
      } else if (data.event == "singletonAbility_onForeground") {
        listKey4[2] = "onForeground";
      } else if (data.event == "singletonAbility_onBackground") {
        listKey4[3] = "onBackground";
      } else if (data.event == "singletonAbility_onWindowStageDestroy") {
        listKey4[4] = "onWindowStageDestroy";
      } else if (data.event == "singletonAbility_onDestroy") {
        listKey4[5] = "onDestroy";
      }
    }

    function subscribeCallBackSingletonAbility1(err, data) {
      console.log(TAG + " Subscribe CallBack data SingletonAbility:" + JSON.stringify(data));
      if (data.event == "singletonAbility_onCreate") {
        listKey5[0] = "onCreate";
      } else if (data.event == "singletonAbility_onWindowStageCreate") {
        listKey5[1] = "onWindowStageCreate";
      } else if (data.event == "singletonAbility_onForeground") {
        listKey5[2] = "onForeground";
      } else if (data.event == "singletonAbility_onBackground") {
        listKey5[3] = "onBackground";
      } else if (data.event == "singletonAbility_onWindowStageDestroy") {
        listKey5[4] = "onWindowStageDestroy";
      } else if (data.event == "singletonAbility_onDestroy") {
        listKey5[5] = "onDestroy";
      }
    }

    function subscribeCallBackMainAbility5(err, data) {
      console.log(TAG + " Subscribe CallBack data MainAbility5:" + JSON.stringify(data));
      if(data.event == "mainAbility5_onCreate"){
        if(q==0){
          listKey7[0] = "onCreate";
          q++;
        }else{
          listKey7[3] = "onCreate";
        }

      }else if(data.event == "mainAbility5_onWindowStageCreate"){
        if(w==0){
          listKey7[1] = "onWindowStageCreate";
          w++;
        }else{
          listKey7[4] = "onWindowStageCreate";
        }

      }else if(data.event == "mainAbility5_onForeground"){
        if(e==0){
          listKey7[2] = "onForeground";
          e++;
        }else{
          listKey7[5] = "onForeground";
        }

      }else if(data.event == "mainAbility5_onBackground"){
        listKey7[6] = "onBackground";
      }else if(data.event == "mainAbility5_onWindowStageDestroy"){
        listKey7[7] = "onWindowStageDestroy";
      }else if(data.event == "mainAbility5_onDestroy"){
        listKey7[8] = "onDestroy";
      }
    }

    function subscribeCallBackMainAbility5Data(err, data) {
      console.log(TAG + " Subscribe CallBack data MainAbility5 data:" + JSON.stringify(data));
      if(data.event == "mainAbility5_data"){
        listKey8[0]=data.parameters.mainAbility5_resultCode
        listKey8[1]=data.parameters.mainAbility5_bundleName
        listKey8[2]=data.parameters.mainAbility5_abilityName
      }
    }

    function subscribeCallBackMainAbility3Help(err, data) {
      console.log(TAG + " Subscribe CallBack data entry2_MainAbility:" + JSON.stringify(data));
      if(data.event == "mainAbility3_onCreate_help"){
        listKey9[0] = "onCreate";
      }else if(data.event == "mainAbility3_onWindowStageCreate_help"){
        listKey9[1] = "onWindowStageCreate";
      }else if(data.event == "mainAbility3_onForeground_help"){
        listKey9[2] = "onForeground";
      }else if(data.event == "mainAbility3_onBackground_help"){
        listKey9[3] = "onBackground";
      }else if(data.event == "mainAbility3_onWindowStageDestroy_help"){
        listKey9[4] = "onWindowStageDestroy";
      }else if(data.event == "mainAbility3_onDestroy_help"){
        listKey9[5] = "onDestroy";
      }
    }

    function subscribeCallBackEntry2MainAbilityHelp(err, data) {
      console.log(TAG + " Subscribe CallBack data entry2_MainAbility:" + JSON.stringify(data));
      if(data.event == "entry2_mainAbility_onCreate_help"){
        listKey10[0] = "onCreate";
      }else if(data.event == "entry2_mainAbility_onWindowStageCreate_help"){
        listKey10[1] = "onWindowStageCreate";
      }else if(data.event == "entry2_mainAbility_onForeground_help"){
        listKey10[2] = "onForeground";
      }else if(data.event == "entry2_mainAbility_onBackground_help"){
        listKey10[3] = "onBackground";
      }else if(data.event == "entry2_mainAbility_onWindowStageDestroy_help"){
        listKey10[4] = "onWindowStageDestroy";
      }else if(data.event == "entry2_mainAbility_onDestroy_help"){
        listKey10[5] = "onDestroy";
      }
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0600
     * @tc.name    Different applications,application of API8 pulls up application of API7
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_AbilityStart_0600", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityStart_0600-------------");
      TAG = "SUB_AA_OpenHarmony_AbilityStart_0600";
      var Subscriber;
      var Subscriber001;
      var Subscriber002;
      listKeyTest0600 = ["", "", "", "", ""];
      listKeyHelpApp0600 = ["", ""];
      listKeyHelpIndex0600 = ["", "", "", ""];

      commonEvent.createSubscriber(subscriberInfoMainAbility3Test).then(async (data) => {
        console.log(TAG + "====>Create Subscriber test app====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, subscribeCallBackMainAbilityTest);
      })

      commonEvent.createSubscriber(subscriberInfoMainAbility2HelpApp).then(async (data) => {
        console.log(TAG + "====>Create Subscriber001 help app====>");
        Subscriber001 = data;
        await commonEvent.subscribe(Subscriber001, subscribeCallBackHelpApp);
      })

      commonEvent.createSubscriber(subscriberInfoMainAbility2HelpIndex).then(async (data) => {
        console.log(TAG + "====>Create Subscriber002 help index====>");
        Subscriber002 = data;
        await commonEvent.subscribe(Subscriber002, subscribeCallBackHelpIndex);
      })

      abilityContext.startAbility({
        abilityName: "com.example.etsmyapplication.MainAbility3",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": test startAbility success, err: " + JSON.stringify(error) +
        ",data: " + JSON.stringify(data));
      })

      abilityContext.startAbility({
        abilityName: "com.example.jsmyapplicationhelp7.MainAbility2",
        bundleName: "com.example.jsmyapplicationhelp7"
      }, (error, data) => {
        console.log(TAG + ": help startAbility success, err: " + JSON.stringify(error) +
        ",data: " + JSON.stringify(data));
        setTimeout(function () {
          console.log(TAG + "startAbility listKeyTest0600 : " + listKeyTest0600);
          console.log(TAG + "startAbility listKeyHelpApp0600 : " + listKeyHelpApp0600);
          console.log(TAG + "startAbility listKeyHelpIndex0600 : " + listKeyHelpIndex0600);
          expect(listKeyTest0600[0]).assertEqual("onCreate");
          expect(listKeyTest0600[1]).assertEqual("onWindowStageCreate");
          expect(listKeyTest0600[2]).assertEqual("onForeground");
          expect(listKeyTest0600[3]).assertEqual("onBackground");
          expect(listKeyTest0600[4]).assertEqual("onForeground");

          expect(listKeyHelpApp0600[0]).assertEqual("onCreate");
          expect(listKeyHelpApp0600[1]).assertEqual("onDestroy");

          expect(listKeyHelpIndex0600[0]).assertEqual("onShow");
          expect(listKeyHelpIndex0600[1]).assertEqual("onActive");
          expect(listKeyHelpIndex0600[2]).assertEqual("onInactive");
          expect(listKeyHelpIndex0600[3]).assertEqual("onHide");
          done();
        }, 4000);
      });
      console.log("------------end SUB_AA_OpenHarmony_AbilityStart_0600-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1000
     * @tc.name    Pull up api7 Ability in different applications and end API7 Ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1000", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1000-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1000";
      var Subscriber01;
      var Subscriber02;
      listKeyHelpApp1000 = ["", ""];
      listKeyHelpIndex1000 = ["", "", "", ""];

      commonEvent.createSubscriber(subscriberInfoMainAbility3HelpApp).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1 help app====>");
        Subscriber01 = data;
        await commonEvent.subscribe(Subscriber01, subscribeCallBackMainAbility3HelpApp);
      })

      commonEvent.createSubscriber(subscriberInfoMainAbility3HelpIndex).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2 help index====>");
        Subscriber02 = data;
        await commonEvent.subscribe(Subscriber02, subscribeCallBackMainAbility3HelpIndex);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.jsmyapplicationhelp7.MainAbility3",
        bundleName: "com.example.jsmyapplicationhelp7"
      }, (error, data) => {
        console.log(TAG + ": help startAbility success, err: " + JSON.stringify(error) +
        ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKeyHelpApp1000[0]).assertEqual("onCreate");
          expect(listKeyHelpApp1000[1]).assertEqual("onDestroy");
          expect(listKeyHelpIndex1000[0]).assertEqual("onShow");
          expect(listKeyHelpIndex1000[1]).assertEqual("onActive");
          expect(listKeyHelpIndex1000[2]).assertEqual("onInactive");
          expect(listKeyHelpIndex1000[3]).assertEqual("onHide");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.abilityName)
          .assertEqual("com.example.jsmyapplicationhelp7.MainAbility3");
          expect(data.want.bundleName)
          .assertEqual("com.example.jsmyapplicationhelp7");
          console.log(TAG + "startAbility listKeyHelpApp1000 : " + listKeyHelpApp1000);
          console.log(TAG + "startAbility listKeyHelpIndex1000 : " + listKeyHelpIndex1000);
          done();
        }, 3000);
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_1000-------------");
    });


    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1100
     * @tc.name    Repeated startup ability (multiple cases)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1100-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1100";
      listKey2 = ["", "", "", "", "", ""];
      listKey3 = ["", "", "", "", "", ""];
      var Subscriber1 = "";
      var Subscriber2 = "";

      commonEvent.createSubscriber(subscriberInfoMuitiAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        await commonEvent.subscribe(Subscriber1, subscribeCallBackMultiAbility);
      })

      commonEvent.createSubscriber(subscriberInfoMuitiAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber2====>");
        Subscriber2 = data;
        await commonEvent.subscribe(Subscriber2, subscribeCallBackMultiAbility2);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MultiAbility",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey2[0]).assertEqual("onCreate");
          expect(listKey2[1]).assertEqual("onWindowStageCreate");
          expect(listKey2[2]).assertEqual("onForeground");
          expect(listKey2[3]).assertEqual("onDestroy");
          expect(listKey2[4]).assertEqual("onWindowStageDestroy");
          expect(listKey2[5]).assertEqual("onBackground");
          expect(1).assertEqual(data.resultCode);
          expect("com.example.etsmyapplication.MultiAbility")
          .assertEqual(data.want.abilityName);
          expect("com.example.etsmyapplication")
          .assertEqual(data.want.bundleName);
          console.log(TAG + "startAbility listKey2 : " + listKey2);
        }, 2000);
      });

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MultiAbility",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey3[0]).assertEqual("onCreate");
          expect(listKey3[1]).assertEqual("onWindowStageCreate");
          expect(listKey3[2]).assertEqual("onForeground");
          expect(listKey3[3]).assertEqual("onDestroy");
          expect(listKey3[4]).assertEqual("onWindowStageDestroy");
          expect(listKey3[5]).assertEqual("onBackground");
          expect(1).assertEqual(data.resultCode);
          expect("com.example.etsmyapplication.MultiAbility")
          .assertEqual(data.want.abilityName);
          expect("com.example.etsmyapplication")
          .assertEqual(data.want.bundleName);
          console.log(TAG + "startAbility listKey3 : " + listKey3);
          done();
        }, 3000);
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_1100-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1200
     * @tc.name    Repeated startup ability (singleton cases)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1200", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1200-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1200";
      listKey4 = ["", "", "", "", "", ""];
      listKey5 = ["", "", "", "", "", ""];
      var Subscriber3 = "";
      var Subscriber4 = "";

      commonEvent.createSubscriber(subscriberInfoSingletonAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber3====>");
        Subscriber3 = data;
        await commonEvent.subscribe(Subscriber3, subscribeCallBackSingletonAbility);
      })

      commonEvent.createSubscriber(subscriberInfoSingletonAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber4====>");
        Subscriber4 = data;
        await commonEvent.subscribe(Subscriber4, subscribeCallBackSingletonAbility1);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplicationhelp.SingletonAbility",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": SingletonAbility startAbility 1 success, err: " + JSON.stringify(error) +
        ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey4[0]).assertEqual("onCreate");
          expect(listKey4[1]).assertEqual("onWindowStageCreate");
          expect(listKey4[2]).assertEqual("onForeground");
          expect(listKey4[3]).assertEqual("onBackground");
          expect(listKey4[4]).assertEqual("onWindowStageDestroy");
          expect(listKey4[5]).assertEqual("onDestroy");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.abilityName)
          .assertEqual("com.example.etsmyapplicationhelp.SingletonAbility");
          expect(data.want.bundleName)
          .assertEqual("com.example.etsmyapplicationhelp");
          console.log(TAG + "startAbility listKey4 : " + listKey4);
        }, 1500);
      });

      await sleep(2000)

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplicationhelp.SingletonAbility",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": SingletonAbility startAbility 2 success, err: " + JSON.stringify(error) +
        ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey5[0]).assertEqual("onCreate");
          expect(listKey5[1]).assertEqual("onWindowStageCreate");
          expect(listKey5[2]).assertEqual("onForeground");
          expect(listKey5[3]).assertEqual("onBackground");
          expect(listKey5[4]).assertEqual("onWindowStageDestroy");
          expect(listKey5[5]).assertEqual("onDestroy");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.abilityName)
          .assertEqual("com.example.etsmyapplicationhelp.SingletonAbility");
          expect(data.want.bundleName)
          .assertEqual("com.example.etsmyapplicationhelp");
          console.log(TAG + "startAbility listKey5 : " + listKey5);
          done();
        }, 1500);
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_1200-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1400
     * @tc.name    One ability is pulled by two different ability, and then terminates when the latter ability pulls it
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1400", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1400-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1400";
      listKey7 = ["", "", "", "", "", "", "", "", ""];
      listKey8 = ["", "", ""];
      var Subscriber6 = "";
      var Subscriber7 = "";

      commonEvent.createSubscriber(subscriberInfoMainAbility5).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber6====>");
        Subscriber6 = data;
        await commonEvent.subscribe(Subscriber6, subscribeCallBackMainAbility5);
      })

      commonEvent.createSubscriber(mainAbility5Data).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber7====>");
        Subscriber7 = data;
        await commonEvent.subscribe(Subscriber7, subscribeCallBackMainAbility5Data);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility5",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        setTimeout(function () {
          console.log(TAG + ": MainAbility5 startAbility success, err: " + JSON.stringify(error) +
          ",data: " + JSON.stringify(data));
        }, 500);
      });

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility4",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        setTimeout(function () {
          console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) +
          ",data: " + JSON.stringify(data));
        }, 1000);
      });

      setTimeout(function () {
        expect(listKey7[0]).assertEqual("onCreate");
        expect(listKey7[1]).assertEqual("onWindowStageCreate");
        expect(listKey7[2]).assertEqual("onForeground");
        expect(listKey7[3]).assertEqual("onCreate");
        expect(listKey7[4]).assertEqual("onWindowStageCreate");
        expect(listKey7[5]).assertEqual("onForeground");
        expect(listKey7[6]).assertEqual("onBackground");
        expect(listKey7[7]).assertEqual("onWindowStageDestroy");
        expect(listKey7[8]).assertEqual("onDestroy");
        console.log(TAG + "startAbility listKey7 : " + listKey7);
        expect(listKey8[0]).assertEqual(1);
        expect(listKey8[1]).assertEqual("com.example.etsmyapplication");
        expect(listKey8[2]).assertEqual("com.example.etsmyapplication.MainAbility5");
        console.log(TAG + "startAbility listKey8 : " + listKey8);
        done();
      }, 4500);
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_1400-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1500
     * @tc.name    Pull up the two different ability in HAP and terminate
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1500", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1500-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1500";
      var Subscriber8 = "";
      var Subscriber9 = "";
      listKey9 = ["", "", "", "", "", ""];
      listKey10 = ["", "", "", "", "", ""];

      commonEvent.createSubscriber(subscriberInfoMainAbility3Help).then(async (data) => {
        console.log(TAG + "====>Create Subscriber8====>");
        Subscriber8 = data;
        await commonEvent.subscribe(Subscriber8, subscribeCallBackMainAbility3Help);
      })

      commonEvent.createSubscriber(subscriberInfoEntry2MainAbilityHelp).then(async (data) => {
        console.log(TAG + "====>Create Subscriber9====>");
        Subscriber9 = data;
        await commonEvent.subscribe(Subscriber9, subscribeCallBackEntry2MainAbilityHelp);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplicationhelp.MainAbility3",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": MainAbility3 startAbility success, err: " + JSON.stringify(error) +
        ",data: " + JSON.stringify(data));
        setTimeout(function () {
          console.log(TAG + "startAbility listKey9 : " + listKey9);
          expect(listKey9[0]).assertEqual("onCreate");
          expect(listKey9[1]).assertEqual("onWindowStageCreate");
          expect(listKey9[2]).assertEqual("onForeground");
          expect(listKey9[3]).assertEqual("onBackground");
          expect(listKey9[4]).assertEqual("onWindowStageDestroy");
          expect(listKey9[5]).assertEqual("onDestroy");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.bundleName).assertEqual("com.example.etsmyapplicationhelp");
          expect(data.want.abilityName).assertEqual("com.example.etsmyapplicationhelp.MainAbility3");
        }, 1000);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.entry2.MainAbility",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": entry2 MainAbility startAbility success, err: " + JSON.stringify(error) +
        ",data: " + JSON.stringify(data));
        setTimeout(function () {
          console.log(TAG + "startAbility listKey10 : " + listKey10);
          expect(listKey10[0]).assertEqual("onCreate");
          expect(listKey10[1]).assertEqual("onWindowStageCreate");
          expect(listKey10[2]).assertEqual("onForeground");
          expect(listKey10[3]).assertEqual("onBackground");
          expect(listKey10[4]).assertEqual("onWindowStageDestroy");
          expect(listKey10[5]).assertEqual("onDestroy");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.bundleName).assertEqual("com.example.etsmyapplicationhelp");
          expect(data.want.abilityName).assertEqual("com.example.entry2.MainAbility");
          done();
        }, 2000);
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_1500-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2100
     * @tc.name    ResultCode is a phase or number
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2100-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2100";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 3 | 4]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication"
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(globalThis.lifecyleList[0][1]).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2100-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2200
     * @tc.name    The resultCode to decimal
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2200", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2200-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2200";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 7.9]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                     bundleName: "com.example.etsmyapplication"
                                            }]);
      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2200-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2300
     * @tc.name    Input parameter want is {}
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2300", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2300-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2300";
      var temp = "";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 5]);
      globalThis.lifecyleList.push(['want', {}]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(data.resultCode).assertEqual(5);
        expect(data.want.bundleName).assertEqual("");
        expect(data.want.abilityName).assertEqual("");
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2300-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2400
     * @tc.name    Parameters in want are integers
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2400", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2400-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2400";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: 10
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2400-------------");
    });


    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2500
     * @tc.name    Parameters in want is a single character
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2500", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2500-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2500";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                   abilityName: "com.example.etsmyapplication.MainAbility2",
                                   bundleName: "com.example.etsmyapplication",
                                   parameters: {
                                                mykey0: "a"
                                               }
                                   }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2500-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2600
     * @tc.name    Parameters in want are of type float (not more than 6 decimal places)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2600", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2600-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2600";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: 1.23456
                                               }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2600-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2700
     * @tc.name    Parameters in want are of type double (10 decimal places)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2700", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2700-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2700";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: 1.1234567891
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2700-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2800
     * @tc.name    The parameters in want are of type BigDecimal (more than 16 digits after the decimal point)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2800", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2800-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2800";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: 1.1234567890123456789
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
          .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
          .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
          .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2800-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_2900
     * @tc.name    The parameters in want are of type BigInteger
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_2900", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_2900-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_2900";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: 2147483648
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
          .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
          .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
          .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_2900-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_3000
     * @tc.name    Parameters in want is a string
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_3000", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_3000-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_3000";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: "a"
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_3000-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_3100
     * @tc.name    Parameters in want are of Boolean type
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_3100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_3100-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_3100";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: true
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_3100-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_3200
     * @tc.name    Parameters in want are an array of strings
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_3200", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_3200-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_3200";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                     bundleName: "com.example.etsmyapplication",
                                     parameters: {
                                                mykey0: [1, 2, 3]
                                                 }
                                     }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_3200-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_3300
     * @tc.name    Parameters in want are an array of strings
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_3300", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_3300-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_3300";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0: ["z", "x", "c"]
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_3300-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_3500
     * @tc.name    The parameters in want are json data
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_3500", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_3500-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_3500";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0:
                                                {
                                                  "jsonkey1": 1
                                                },
                                                }
                                    }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_3500-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_3600
     * @tc.name    Parameters in want carry multiple keys and values
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_3600", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_3600-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_3600";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 8]);
      globalThis.lifecyleList.push(['want', {
                                    abilityName: "com.example.etsmyapplication.MainAbility2",
                                    bundleName: "com.example.etsmyapplication",
                                    parameters: {
                                                mykey0:
                                                {
                                                  "jsonkey1": 1
                                                },
                                                mykey1: 1,
                                                mykey2: "a"
                                              }
                                            }]);

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility2",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + "," +
        "data: " + JSON.stringify(data));
        expect(Math.floor(globalThis.lifecyleList[0][1])).assertEqual(data.resultCode);
        expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
        .assertEqual(JSON.stringify(data.want.abilityName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
        .assertEqual(JSON.stringify(data.want.bundleName));
        expect(JSON.stringify(globalThis.lifecyleList[1][1].parameters))
        .assertEqual(JSON.stringify(data.want.parameters));
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_3600-------------");
    });

  })
}