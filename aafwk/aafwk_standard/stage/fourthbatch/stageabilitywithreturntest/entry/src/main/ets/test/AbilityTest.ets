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

var subscriberInfo_MainAbility3_test = {
  events: ["mainAbility3_onCreate_test_api8",
  "mainAbility3_onWindowStageCreate_test_api8",
  "mainAbility3_onForeground_test_api8",
  "mainAbility3_onBackground_test_api8",
  "mainAbility3_onForeground_test_api8",]
}

var subscriberInfo_MuitiAbility = {
  events: ["multiAbility_onCreate",
  "multiAbility_onWindowStageCreate",
  "multiAbility_onForeground",
  "multiAbility_onDestroy",
  "multiAbility_onWindowStageDestroy",
  "multiAbility_onBackground"]
}

var subscriberInfo_MainAbility2_help_app = {
  events: ["help_mainAbility2_onCreate",
  "help_mainAbility2_onDestroy"]
}

var subscriberInfo_MainAbility2_help_index = {
  events: ["help_mainAbility2_onShow",
  "help_mainAbility2_onActive",
  "help_mainAbility2_onInactive",
  "help_mainAbility2_onHide"]
}

var subscriberInfo_MainAbility3_help_app = {
  events: ["help_mainAbility3_onCreate",
  "help_mainAbility3_onDestroy"]
}

var subscriberInfo_MainAbility3_help_index = {
  events: ["help_mainAbility3_onShow",
  "help_mainAbility3_onActive",
  "help_mainAbility3_onInactive",
  "help_mainAbility3_onHide"]
}

var subscriberInfo_SingletonAbility = {
  events: ["singletonAbility_onCreate",
  "singletonAbility_onWindowStageCreate",
  "singletonAbility_onForeground",
  "singletonAbility_onBackground",
  "singletonAbility_onWindowStageDestroy",
  "singletonAbility_onDestroy"]
}

var subscriberInfo_entry2_MainAbility = {
  events: ["entry2_mainAbility_onCreate",
  "entry2_mainAbility_onWindowStageCreate",
  "entry2_mainAbility_onForeground",
  "entry2_mainAbility_onBackground",
  "entry2_mainAbility_onWindowStageDestroy",
  "entry2_mainAbility_onDestroy"]
}

var subscriberInfo_MainAbility5 = {
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

var subscriberInfo_MainAbility3_help = {
  events: ["mainAbility3_onCreate_help",
  "mainAbility3_onWindowStageCreate_help",
  "mainAbility3_onForeground_help",
  "mainAbility3_onBackground_help",
  "mainAbility3_onWindowStageDestroy_help",
  "mainAbility3_onDestroy_help"]
}

var subscriberInfo_entry2_MainAbility_help = {
  events: ["entry2_mainAbility_onCreate_help",
  "entry2_mainAbility_onWindowStageCreate_help",
  "entry2_mainAbility_onForeground_help",
  "entry2_mainAbility_onBackground_help",
  "entry2_mainAbility_onWindowStageDestroy_help",
  "entry2_mainAbility_onDestroy_help"]
}

var mainAbility5_data = {
  events: ["mainAbility5_data"]
}

export default function abilityTest(abilityContext) {
  describe('AbilityTest', function () {
    var i = 0;
    var q = 0;
    var w = 0;
    var e = 0;
    var TAG = "";
    var listKey_2 = ["", "", "", "", "", ""];
    var listKey_3 = ["", "", "", "", "", ""];
    var listKey_4 = ["", "", "", "", "", ""];
    var listKey_5 = ["", "", "", "", "", ""];
    var listKey_6 = ["", "", "", "", "", ""];
    var listKey_7 = ["", "", "", "", "", "", "", "", ""];
    var listKey_8 = ["", "", ""];
    var listKey_9 = ["", "", "", "", "", ""];
    var listKey_10 = ["", "", "", "", "", ""];
    var listKey_0600_test = ["", "", "", "", ""];
    var listKey_0600_help_app = ["", ""];
    var listKey_0600_help_index = ["", "", "", ""];
    var listKey_1000_help_app = ["", ""];
    var listKey_1000_help_index = ["", "", "", ""];

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time))
    }

    function SubscribeCallBack_MainAbility_test(err, data) {
      console.log(TAG + " Subscribe CallBack data test :" + JSON.stringify(data));
      if (data.event == "mainAbility3_onCreate_test_api8") {
        listKey_0600_test[0] = "onCreate";
      } else if (data.event == "mainAbility3_onWindowStageCreate_test_api8") {
        listKey_0600_test[1] = "onWindowStageCreate";
      } else if (data.event == "mainAbility3_onForeground_test_api8") {
        if (i == 0) {
          listKey_0600_test[2] = "onForeground";
          i++;
        } else {
          listKey_0600_test[4] = "onForeground";
        }
      } else if (data.event == "mainAbility3_onBackground_test_api8") {
        listKey_0600_test[3] = "onBackground";
      }
    }

    function SubscribeCallBack_help_app(err, data) {
      console.log(TAG + " Subscribe CallBack data help app :" + JSON.stringify(data));
      if (data.event == "help_mainAbility2_onCreate") {
        listKey_0600_help_app[0] = "onCreate";
      } else if (data.event == "help_mainAbility2_onDestroy") {
        listKey_0600_help_app[1] = "onDestroy";
      }
    }

    function SubscribeCallBack_help_index(err, data) {
      console.log(TAG + " Subscribe CallBack data help index:" + JSON.stringify(data));
      if (data.event == "help_mainAbility2_onShow") {
        listKey_0600_help_index[0] = "onShow";
      } else if (data.event == "help_mainAbility2_onActive") {
        listKey_0600_help_index[1] = "onActive";
      } else if (data.event == "help_mainAbility2_onInactive") {
        listKey_0600_help_index[2] = "onInactive";
      } else if (data.event == "help_mainAbility2_onHide") {
        listKey_0600_help_index[3] = "onHide";
      }
    }

    function SubscribeCallBack_mainAbility3_help_app(err, data) {
      console.log(TAG + " Subscribe CallBack data help app :" + JSON.stringify(data));
      if (data.event == "help_mainAbility3_onCreate") {
        listKey_1000_help_app[0] = "onCreate";
      } else if (data.event == "help_mainAbility3_onDestroy") {
        listKey_1000_help_app[1] = "onDestroy";
      }
    }

    function SubscribeCallBack_mainAbility3_help_index(err, data) {
      console.log(TAG + " Subscribe CallBack data help index:" + JSON.stringify(data));
      if (data.event == "help_mainAbility3_onShow") {
        listKey_1000_help_index[0] = "onShow";
      } else if (data.event == "help_mainAbility3_onActive") {
        listKey_1000_help_index[1] = "onActive";
      } else if (data.event == "help_mainAbility3_onInactive") {
        listKey_1000_help_index[2] = "onInactive";
      } else if (data.event == "help_mainAbility3_onHide") {
        listKey_1000_help_index[3] = "onHide";
      }
    }

    function SubscribeCallBack_multiAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data multiAbility :" + JSON.stringify(data));
      if (data.event == "multiAbility_onCreate") {
        listKey_2[0] = "onCreate";
      } else if (data.event == "multiAbility_onWindowStageCreate") {
        listKey_2[1] = "onWindowStageCreate";
      } else if (data.event == "multiAbility_onForeground") {
        listKey_2[2] = "onForeground";
      } else if (data.event == "multiAbility_onDestroy") {
        listKey_2[3] = "onDestroy";
      } else if (data.event == "multiAbility_onWindowStageDestroy") {
        listKey_2[4] = "onWindowStageDestroy";
      } else if (data.event == "multiAbility_onBackground") {
        listKey_2[5] = "onBackground";
      }
    }

    function SubscribeCallBack_multiAbility2(err, data) {
      console.log(TAG + " Subscribe CallBack data multiAbility :" + JSON.stringify(data));
      if (data.event == "multiAbility_onCreate") {
        listKey_3[0] = "onCreate";
      } else if (data.event == "multiAbility_onWindowStageCreate") {
        listKey_3[1] = "onWindowStageCreate";
      } else if (data.event == "multiAbility_onForeground") {
        listKey_3[2] = "onForeground";
      } else if (data.event == "multiAbility_onDestroy") {
        listKey_3[3] = "onDestroy";
      } else if (data.event == "multiAbility_onWindowStageDestroy") {
        listKey_3[4] = "onWindowStageDestroy";
      } else if (data.event == "multiAbility_onBackground") {
        listKey_3[5] = "onBackground";
      }
    }

    function SubscribeCallBack_SingletonAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data SingletonAbility:" + JSON.stringify(data));
      if (data.event == "singletonAbility_onCreate") {
        listKey_4[0] = "onCreate";
      } else if (data.event == "singletonAbility_onWindowStageCreate") {
        listKey_4[1] = "onWindowStageCreate";
      } else if (data.event == "singletonAbility_onForeground") {
        listKey_4[2] = "onForeground";
      } else if (data.event == "singletonAbility_onBackground") {
        listKey_4[3] = "onBackground";
      } else if (data.event == "singletonAbility_onWindowStageDestroy") {
        listKey_4[4] = "onWindowStageDestroy";
      } else if (data.event == "singletonAbility_onDestroy") {
        listKey_4[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_SingletonAbility1(err, data) {
      console.log(TAG + " Subscribe CallBack data SingletonAbility:" + JSON.stringify(data));
      if (data.event == "singletonAbility_onCreate") {
        listKey_5[0] = "onCreate";
      } else if (data.event == "singletonAbility_onWindowStageCreate") {
        listKey_5[1] = "onWindowStageCreate";
      } else if (data.event == "singletonAbility_onForeground") {
        listKey_5[2] = "onForeground";
      } else if (data.event == "singletonAbility_onBackground") {
        listKey_5[3] = "onBackground";
      } else if (data.event == "singletonAbility_onWindowStageDestroy") {
        listKey_5[4] = "onWindowStageDestroy";
      } else if (data.event == "singletonAbility_onDestroy") {
        listKey_5[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_entry2_MainAbility(err, data) {
      console.log(TAG + " Subscribe CallBack data entry2_MainAbility:" + JSON.stringify(data));
      if (data.event == "entry2_mainAbility_onCreate") {
        listKey_6[0] = "onCreate";
      } else if (data.event == "entry2_mainAbility_onWindowStageCreate") {
        listKey_6[1] = "onWindowStageCreate";
      } else if (data.event == "entry2_mainAbility_onForeground") {
        listKey_6[2] = "onForeground";
      } else if (data.event == "entry2_mainAbility_onBackground") {
        listKey_6[3] = "onBackground";
      } else if (data.event == "entry2_mainAbility_onWindowStageDestroy") {
        listKey_6[4] = "onWindowStageDestroy";
      } else if (data.event == "entry2_mainAbility_onDestroy") {
        listKey_6[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_MainAbility5(err, data) {
      console.log(TAG + " Subscribe CallBack data MainAbility5:" + JSON.stringify(data));
      if (data.event == "mainAbility5_onCreate") {
        if (q == 0) {
          listKey_7[0] = "onCreate";
          q++;
        } else {
          listKey_7[3] = "onCreate";
        }

      } else if (data.event == "mainAbility5_onWindowStageCreate") {
        if (w == 0) {
          listKey_7[1] = "onWindowStageCreate";
          w++;
        } else {
          listKey_7[4] = "onWindowStageCreate";
        }

      } else if (data.event == "mainAbility5_onForeground") {
        if (e == 0) {
          listKey_7[2] = "onForeground";
          e++;
        } else {
          listKey_7[5] = "onForeground";
        }

      } else if (data.event == "mainAbility5_onBackground") {
        listKey_7[6] = "onBackground";
      } else if (data.event == "mainAbility5_onWindowStageDestroy") {
        listKey_7[7] = "onWindowStageDestroy";
      } else if (data.event == "mainAbility5_onDestroy") {
        listKey_7[8] = "onDestroy";
      }
    }

    function SubscribeCallBack_MainAbility5_data(err, data) {
      console.log(TAG + " Subscribe CallBack data MainAbility5 data:" + JSON.stringify(data));
      if (data.event == "mainAbility5_data") {
        listKey_8[0] = data.parameters.mainAbility5_resultCode
        listKey_8[1] = data.parameters.mainAbility5_bundleName
        listKey_8[2] = data.parameters.mainAbility5_abilityName
      }
    }

    function SubscribeCallBack_MainAbility3_help(err, data) {
      console.log(TAG + " Subscribe CallBack data entry2_MainAbility:" + JSON.stringify(data));
      if (data.event == "mainAbility3_onCreate_help") {
        listKey_9[0] = "onCreate";
      } else if (data.event == "mainAbility3_onWindowStageCreate_help") {
        listKey_9[1] = "onWindowStageCreate";
      } else if (data.event == "mainAbility3_onForeground_help") {
        listKey_9[2] = "onForeground";
      } else if (data.event == "mainAbility3_onBackground_help") {
        listKey_9[3] = "onBackground";
      } else if (data.event == "mainAbility3_onWindowStageDestroy_help") {
        listKey_9[4] = "onWindowStageDestroy";
      } else if (data.event == "mainAbility3_onDestroy_help") {
        listKey_9[5] = "onDestroy";
      }
    }

    function SubscribeCallBack_entry2_MainAbility_help(err, data) {
      console.log(TAG + " Subscribe CallBack data entry2_MainAbility:" + JSON.stringify(data));
      if (data.event == "entry2_mainAbility_onCreate_help") {
        listKey_10[0] = "onCreate";
      } else if (data.event == "entry2_mainAbility_onWindowStageCreate_help") {
        listKey_10[1] = "onWindowStageCreate";
      } else if (data.event == "entry2_mainAbility_onForeground_help") {
        listKey_10[2] = "onForeground";
      } else if (data.event == "entry2_mainAbility_onBackground_help") {
        listKey_10[3] = "onBackground";
      } else if (data.event == "entry2_mainAbility_onWindowStageDestroy_help") {
        listKey_10[4] = "onWindowStageDestroy";
      } else if (data.event == "entry2_mainAbility_onDestroy_help") {
        listKey_10[5] = "onDestroy";
      }
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0600
     * @tc.name    Api8 Ability1 lifts API7 Ability2 and ends Ability2 in different applications
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_AbilityStart_0600", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityStart_0600-------------");
      TAG = "SUB_AA_OpenHarmony_AbilityStart_0600";
      var Subscriber;
      var Subscriber1;
      var Subscriber2;
      listKey_0600_test = ["", "", "", "", ""];
      listKey_0600_help_app = ["", ""];
      listKey_0600_help_index = ["", "", "", ""];

      commonEvent.createSubscriber(subscriberInfo_MainAbility3_test).then(async (data) => {
        console.log(TAG + "====>Create Subscriber test app====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack_MainAbility_test);
      })

      commonEvent.createSubscriber(subscriberInfo_MainAbility2_help_app).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1 help app====>");
        Subscriber1 = data;
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_help_app);
      })

      commonEvent.createSubscriber(subscriberInfo_MainAbility2_help_index).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2 help app====>");
        Subscriber2 = data;
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_help_index);
      })

      abilityContext.startAbility({
        abilityName: "com.example.etsmyapplication.MainAbility3",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": test startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      })

      abilityContext.startAbility({
        abilityName: "com.example.jsmyapplicationhelp7.MainAbility2",
        bundleName: "com.example.jsmyapplicationhelp7"
      }, (error, data) => {
        console.log(TAG + ": help startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          //console.log(TAG+i);
          console.log(TAG + "startAbility listKey_0600_test : " + listKey_0600_test);
          console.log(TAG + "startAbility listKey_0600_help_app : " + listKey_0600_help_app);
          console.log(TAG + "startAbility listKey_0600_help_index : " + listKey_0600_help_index);
          expect(listKey_0600_test[0]).assertEqual("onCreate");
          expect(listKey_0600_test[1]).assertEqual("onWindowStageCreate");
          expect(listKey_0600_test[2]).assertEqual("onForeground");
          expect(listKey_0600_test[3]).assertEqual("onBackground");
          expect(listKey_0600_test[4]).assertEqual("onForeground");

          expect(listKey_0600_help_app[0]).assertEqual("onCreate");
          expect(listKey_0600_help_app[1]).assertEqual("onDestroy");

          expect(listKey_0600_help_index[0]).assertEqual("onShow");
          expect(listKey_0600_help_index[1]).assertEqual("onActive");
          expect(listKey_0600_help_index[2]).assertEqual("onInactive");
          expect(listKey_0600_help_index[3]).assertEqual("onHide");
          done();
        }, 4000);
      });

      console.log("------------end SUB_AA_OpenHarmony_AbilityStart_0600-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1100
     * @tc.name    Ability to repeat start or stop (multiple cases)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1100-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1100";
      listKey_2 = ["", "", "", "", "", ""];
      listKey_3 = ["", "", "", "", "", ""];
      var Subscriber1 = "";
      var Subscriber2 = "";
      globalThis.lifecyleList = [];
      globalThis.lifecyleList.push(['resultCode', 1]);
      globalThis.lifecyleList.push(['want', {
                                     abilityName: "com.example.etsmyapplication.MultiAbility",
                                     bundleName: "com.example.etsmyapplication"
                                     }]);

      commonEvent.createSubscriber(subscriberInfo_MuitiAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_multiAbility);
      })

      commonEvent.createSubscriber(subscriberInfo_MuitiAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber2====>");
        Subscriber2 = data;
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_multiAbility2);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MultiAbility",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey_2[0]).assertEqual("onCreate");
          expect(listKey_2[1]).assertEqual("onWindowStageCreate");
          expect(listKey_2[2]).assertEqual("onForeground");
          expect(listKey_2[3]).assertEqual("onDestroy");
          expect(listKey_2[4]).assertEqual("onWindowStageDestroy");
          expect(listKey_2[5]).assertEqual("onBackground");
          expect(globalThis.lifecyleList[0][1]).assertEqual(data.resultCode);
          expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
            .assertEqual(JSON.stringify(data.want.abilityName));
          expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
            .assertEqual(JSON.stringify(data.want.bundleName));
          console.log(TAG + "startAbility listKey_2 : " + listKey_2);
        }, 2000);
      });

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MultiAbility",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        console.log(TAG + ": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey_3[0]).assertEqual("onCreate");
          expect(listKey_3[1]).assertEqual("onWindowStageCreate");
          expect(listKey_3[2]).assertEqual("onForeground");
          expect(listKey_3[3]).assertEqual("onDestroy");
          expect(listKey_3[4]).assertEqual("onWindowStageDestroy");
          expect(listKey_3[5]).assertEqual("onBackground");
          expect(globalThis.lifecyleList[0][1]).assertEqual(data.resultCode);
          expect(JSON.stringify(globalThis.lifecyleList[1][1].abilityName))
            .assertEqual(JSON.stringify(data.want.abilityName));
          expect(JSON.stringify(globalThis.lifecyleList[1][1].bundleName))
            .assertEqual(JSON.stringify(data.want.bundleName));
          console.log(TAG + "startAbility listKey_3 : " + listKey_3);
          done();
        }, 3000);
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_1100-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1200
     * @tc.name    Ability to repeat start or stop (singleton cases)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1200", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1200-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1200";
      listKey_4 = ["", "", "", "", "", ""];
      listKey_5 = ["", "", "", "", "", ""];
      var Subscriber3 = "";
      var Subscriber4 = "";

      commonEvent.createSubscriber(subscriberInfo_SingletonAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber3====>");
        Subscriber3 = data;
        await commonEvent.subscribe(Subscriber3, SubscribeCallBack_SingletonAbility);
      })

      commonEvent.createSubscriber(subscriberInfo_SingletonAbility).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber4====>");
        Subscriber4 = data;
        await commonEvent.subscribe(Subscriber4, SubscribeCallBack_SingletonAbility1);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplicationhelp.SingletonAbility",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": SingletonAbility startAbility 1 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey_4[0]).assertEqual("onCreate");
          expect(listKey_4[1]).assertEqual("onWindowStageCreate");
          expect(listKey_4[2]).assertEqual("onForeground");
          expect(listKey_4[3]).assertEqual("onBackground");
          expect(listKey_4[4]).assertEqual("onWindowStageDestroy");
          expect(listKey_4[5]).assertEqual("onDestroy");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.abilityName)
            .assertEqual("com.example.etsmyapplicationhelp.SingletonAbility");
          expect(data.want.bundleName)
            .assertEqual("com.example.etsmyapplicationhelp");
          console.log(TAG + "startAbility listKey_4 : " + listKey_4);
        }, 1500);
      });

      await sleep(2000)

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplicationhelp.SingletonAbility",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": SingletonAbility startAbility 2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          expect(listKey_5[0]).assertEqual("onCreate");
          expect(listKey_5[1]).assertEqual("onWindowStageCreate");
          expect(listKey_5[2]).assertEqual("onForeground");
          expect(listKey_5[3]).assertEqual("onBackground");
          expect(listKey_5[4]).assertEqual("onWindowStageDestroy");
          expect(listKey_5[5]).assertEqual("onDestroy");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.abilityName)
            .assertEqual("com.example.etsmyapplicationhelp.SingletonAbility");
          expect(data.want.bundleName)
            .assertEqual("com.example.etsmyapplicationhelp");
          console.log(TAG + "startAbility listKey_5 : " + listKey_5);
          done();
        }, 1500);
      });
      console.log("------------end SUB_AA_OpenHarmony_StartAbilityForResult_1200-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_StartAbilityForResult_1400
     * @tc.name    One ability is pulled by two different ability,and then terminates when the latter ability pulls it
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StartAbilityForResult_1400", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_StartAbilityForResult_1400-------------");
      TAG = "SUB_AA_OpenHarmony_StartAbilityForResult_1400";
      listKey_7 = ["", "", "", "", "", "", "", "", ""];
      var Subscriber6 = "";
      var Subscriber7 = "";

      commonEvent.createSubscriber(subscriberInfo_MainAbility5).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber6====>");
        Subscriber6 = data;
        await commonEvent.subscribe(Subscriber6, SubscribeCallBack_MainAbility5);
      })

      commonEvent.createSubscriber(mainAbility5_data).then(async (data) => {
        console.debug(TAG + "====>Create Subscriber7====>");
        Subscriber7 = data;
        await commonEvent.subscribe(Subscriber7, SubscribeCallBack_MainAbility5_data);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility5",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        setTimeout(function () {
          console.log(TAG + ": MainAbility5 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        }, 500);
      });

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplication.MainAbility4",
        bundleName: "com.example.etsmyapplication"
      }, (error, data) => {
        setTimeout(function () {
          console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        }, 1000);
      });

      setTimeout(function () {
        expect(listKey_7[0]).assertEqual("onCreate");
        expect(listKey_7[1]).assertEqual("onWindowStageCreate");
        expect(listKey_7[2]).assertEqual("onForeground");
        expect(listKey_7[3]).assertEqual("onCreate");
        expect(listKey_7[4]).assertEqual("onWindowStageCreate");
        expect(listKey_7[5]).assertEqual("onForeground");
        expect(listKey_7[6]).assertEqual("onBackground");
        expect(listKey_7[7]).assertEqual("onWindowStageDestroy");
        expect(listKey_7[8]).assertEqual("onDestroy");
        console.log(TAG + "startAbility listKey_7 : " + listKey_7);
        expect(listKey_8[0]).assertEqual(1);
        expect(listKey_8[1]).assertEqual("com.example.etsmyapplication");
        expect(listKey_8[2]).assertEqual("com.example.etsmyapplication.MainAbility5");
        console.log(TAG + "startAbility listKey_8 : " + listKey_8);
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
      listKey_9 = ["", "", "", "", "", ""];
      listKey_10 = ["", "", "", "", "", ""];

      commonEvent.createSubscriber(subscriberInfo_MainAbility3_help).then(async (data) => {
        console.log(TAG + "====>Create Subscriber8====>");
        Subscriber8 = data;
        await commonEvent.subscribe(Subscriber8, SubscribeCallBack_MainAbility3_help);
      })

      commonEvent.createSubscriber(subscriberInfo_entry2_MainAbility_help).then(async (data) => {
        console.log(TAG + "====>Create Subscriber9====>");
        Subscriber9 = data;
        await commonEvent.subscribe(Subscriber9, SubscribeCallBack_entry2_MainAbility_help);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.etsmyapplicationhelp.MainAbility3",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": MainAbility3 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          console.log(TAG + "startAbility listKey_9 : " + listKey_9);
          expect(listKey_9[0]).assertEqual("onCreate");
          expect(listKey_9[1]).assertEqual("onWindowStageCreate");
          expect(listKey_9[2]).assertEqual("onForeground");
          expect(listKey_9[3]).assertEqual("onBackground");
          expect(listKey_9[4]).assertEqual("onWindowStageDestroy");
          expect(listKey_9[5]).assertEqual("onDestroy");
          expect(data.resultCode).assertEqual(1);
          expect(data.want.bundleName).assertEqual("com.example.etsmyapplicationhelp");
          expect(data.want.abilityName).assertEqual("com.example.etsmyapplicationhelp.MainAbility3");
        }, 1000);
      })

      abilityContext.startAbilityForResult({
        abilityName: "com.example.entry2.MainAbility",
        bundleName: "com.example.etsmyapplicationhelp"
      }, (error, data) => {
        console.log(TAG + ": entry2 MainAbility startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        setTimeout(function () {
          console.log(TAG + "startAbility listKey_10 : " + listKey_10);
          expect(listKey_10[0]).assertEqual("onCreate");
          expect(listKey_10[1]).assertEqual("onWindowStageCreate");
          expect(listKey_10[2]).assertEqual("onForeground");
          expect(listKey_10[3]).assertEqual("onBackground");
          expect(listKey_10[4]).assertEqual("onWindowStageDestroy");
          expect(listKey_10[5]).assertEqual("onDestroy");
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
                                                 mykey0: "q"
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
     * @tc.name    Parameters in want are an int array
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
                                                mykey0: {
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
                                                mykey0: {
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