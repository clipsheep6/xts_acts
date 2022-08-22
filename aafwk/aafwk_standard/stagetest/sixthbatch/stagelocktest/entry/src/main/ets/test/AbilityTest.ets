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
import missionManager from '@ohos.application.missionManager'

var subscriberInfo_MainAbility2 = {
  events: ["mainAbility2_onCreate",
  "mainAbility2_onDestroy",
  "mainAbility2_onForeground",
  "mainAbility2_onBackground"]
}
var subscriberInfo_MultiAbility = {
  events: ["mainAbility_onCreate",
  "mainAbility_onDestroy",
  "mainAbility_onForeground",
  "mainAbility_onBackground"]
}
var subscriberInfo_MultiAbility2 = {
  events: ["multiAbility_onCreate",
  "multiAbility_onDestroy",
  "multiAbility_onForeground",
  "multiAbility_onBackground"]
}
var subscriberInfo_MainAbility4 = {
  events: ["mainAbility4_onCreate",
  "mainAbility4_onDestroy",
  "mainAbility4_onForeground",
  "mainAbility4_onBackground"]
}
var subscriberInfo_MainAbility3 = {
  events: ["mainAbility3_onCreate",
  "mainAbility3_onDestroy",
  "mainAbility3_onForeground",
  "mainAbility3_onBackground"]
}

const START_ABILITY_TIMEOUT = 8000;


export default function abilityTest(abilityContext) {
  describe('AbilityTest', function () {

    var TAG = "";
    var list1 = ["", "", "", ""];
    var list11 = ["", "", "", ""];
    var list2 = ["", "", "", ""];
    var list3 = ["", "", "", ""];
    var list4 = ["", "", "", ""];

    function SubscribeCallBack_MultiAbility(err, data) {
      console.log(TAG + " Subscribe1 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility_onCreate") {
        list1[0] = "onCreate";
      } else if (data.event == "mainAbility_onDestroy") {
        list1[1] = "onDestroy";
      } else if (data.event == "mainAbility_onForeground") {
        list1[2] = "onForeground";
      } else if (data.event == "mainAbility_onBackground") {
        list1[3] = "onBackground";
      }
      console.log(TAG + "list is : " + list1)
    }

    function SubscribeCallBack_MultiAbility2(err, data) {
      console.log(TAG + " Subscribe1 CallBack data:" + JSON.stringify(data));
      if (data.event == "multiAbility_onCreate") {
        list11[0] = "onCreate";
      } else if (data.event == "multiAbility_onDestroy") {
        list11[1] = "onDestroy";
      } else if (data.event == "multiAbility_onForeground") {
        list11[2] = "onForeground";
      } else if (data.event == "multiAbility_onBackground") {
        list11[3] = "onBackground";
      }
      console.log(TAG + "list is : " + list11)
    }

    function SubscribeCallBack_mainAbility2(err, data) {
      console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility2_onCreate") {
        list2[0] = "onCreate";
      } else if (data.event == "mainAbility2_onDestroy") {
        list2[1] = "onDestroy";
      } else if (data.event == "mainAbility2_onForeground") {
        list2[2] = "onForeground";
      } else if (data.event == "mainAbility2_onBackground") {
        list2[3] = "onBackground";
      }
      console.log(TAG + "list is : " + list2)
    }

    function SubscribeCallBack_mainAbility3(err, data) {
      console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility3_onCreate") {
        list3[0] = "onCreate";
      } else if (data.event == "mainAbility3_onDestroy") {
        list3[1] = "onDestroy";
      } else if (data.event == "mainAbility3_onForeground") {
        list3[2] = "onForeground";
      } else if (data.event == "mainAbility3_onBackground") {
        list3[3] = "onBackground";
      }
      console.log(TAG + "list is : " + list3)
    }

    function SubscribeCallBack_mainAbility4(err, data) {
      console.log(TAG + " Subscribe4 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility4_onCreate") {
        list4[0] = "onCreate";
      } else if (data.event == "mainAbility4_onDestroy") {
        list4[1] = "onDestroy";
      } else if (data.event == "mainAbility4_onForeground") {
        list4[2] = "onForeground";
      } else if (data.event == "mainAbility4_onBackground") {
        list4[3] = "onBackground";
      }
      console.log(TAG + "list is : " + list4)
    }

    /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_0900
         * @tc.name    Pull up ability1,ability2 in the same HAP and end ability
         * @tc.desc    Function test
         * @tc.level   0
         */
    it("SUB_AA_OpenHarmony_Lock_0900", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0900-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0900";
      list2 = ["", "", "", ""];
      var Subscriber = "";
      var missionIds = [0, 0];

      commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
      });
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility21"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility21") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
        });
      }, 1000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 : "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility"
            || data[i].want.abilityName == "com.example.etsmyapplication.MainAbility21") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
        });
      }, 2000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos3 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility21") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MultiAbility unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });

          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + "SUB_AA_OpenHarmony_Lock_0900 MainAbility2 clearAllMissions success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            console.log(TAG + " list2 : " + JSON.stringify(list2));
            expect(list2[1]).assertEqual("onDestroy");
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_0900-------------");
          })
        });
      }, 3000)
    });
    /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_0800
         * @tc.name    Pull up ability1,ability2 in the same HAP and end ability
         * @tc.desc    Function test
         * @tc.level   0
         */
    it("SUB_AA_OpenHarmony_Lock_0800", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0800-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0800";
      list1 = ["", "", "", ""];
      list2 = ["", "", "", ""];
      var Subscriber1 = "";
      var Subscriber2 = "";
      var missionIds = [0, 0];

      commonEvent.createSubscriber(subscriberInfo_MultiAbility).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_MultiAbility);
      });
      commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber2 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility2);
      });

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility22"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility22") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
        });
      }, 1000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos3 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility22") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " MainAbility2 clearAllMissions success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            console.log(TAG + " list1 : " + JSON.stringify(list1));
            console.log(TAG + " list2 : " + JSON.stringify(list2));
            expect(list1[2]).assertEqual("onForeground");
            expect(list2[1]).assertEqual("onDestroy");
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_0800-------------");
          })
        });
      }, 4000)
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_0600
     * @tc.name    Pull up ability1,ability2,ability3,ability4 in the same HAP and end ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Lock_0600", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0600-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0600";
      list11 = ["", "", "", ""];
      list4 = ["", "", "", ""];
      var Subscriber1 = "";
      var Subscriber4 = "";
      var missionIds = [0, 0, 0, 0];

      commonEvent.createSubscriber(subscriberInfo_MultiAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_MultiAbility2);
      });
      commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
        console.log(TAG + "====>Create Subscriber4====>");
        Subscriber4 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber4))
        await commonEvent.subscribe(Subscriber4, SubscribeCallBack_mainAbility4);
      });
      abilityContext.startAbility({
        bundleName: "com.example.etsmyapplication",
        abilityName: "com.example.etsmyapplication.MultiAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility1: ' + JSON.stringify(error) + ", " +
        JSON.stringify(data));
      });
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility41"
        }, (error, data) => {
          console.log(TAG + ' - startAbility4: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility3: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MultiAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[2] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility41") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[3] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))

          missionManager.lockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MultiAbility1 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.lockMission(missionIds[3], (error, data) => {
            console.log(TAG + " MainAbility4 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
        });
      }, 2000)

      setTimeout(function () {
        missionManager.clearAllMissions((error, data) => {
          console.log(TAG + " MainAbility2 clearAllMissions success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          missionManager.getMissionInfos("", 20, (error, data) => {
            console.log(TAG + " All Ability getMissionInfos2 success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
        })
      }, 3000)

      setTimeout(function () {
        missionManager.unlockMission(missionIds[0], (error, data) => {
          console.log(TAG + " MultiAbility unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[1], (error, data) => {
          console.log(TAG + " MainAbility2 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[2], (error, data) => {
          console.log(TAG + " MainAbility3 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[3], (error, data) => {
          console.log(TAG + " MainAbility4 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.clearAllMissions((error, data) => {
          console.log(TAG + " MainAbility2 clearAllMissions success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          console.log(TAG + " list11 : " + JSON.stringify(list11));
          console.log(TAG + " list4 : " + JSON.stringify(list4));
          expect(list11[2]).assertEqual("onForeground");
          expect(list4[1]).assertEqual("onDestroy");
          done();
          console.log("------------end SUB_AA_OpenHarmony_Lock_0600-------------");
        })
      }, 4500)
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_0500
       * @tc.name    Pull up ability1,ability2,ability3,ability4 in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_0500", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0500-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0500";
      list11 = ["", "", "", ""];
      list4 = ["", "", "", ""];
      var Subscriber1 = "";
      var Subscriber4 = "";
      var missionIds = [0, 0, 0, 0];

      commonEvent.createSubscriber(subscriberInfo_MultiAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_MultiAbility2);
      });

      commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
        console.log(TAG + "====>Create Subscriber4====>");
        Subscriber4 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber4))
        await commonEvent.subscribe(Subscriber4, SubscribeCallBack_mainAbility4);
      });
      abilityContext.startAbility({
        bundleName: "com.example.etsmyapplication",
        abilityName: "com.example.etsmyapplication.MultiAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility1: ' + JSON.stringify(error) + ", " +
        JSON.stringify(data));
      });
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility42"
        }, (error, data) => {
          console.log(TAG + ' - startAbility4: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility3: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1500)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MultiAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[2] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility42") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[3] = data[i].missionId;
            }
          }
          console.log(TAG + "missionId is: " + JSON.stringify(missionId))
          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
          missionManager.lockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
        });
      }, 2000)
      setTimeout(function () {
        missionManager.clearMission(missionIds[1], (error, data) => {
          console.log(TAG + " MainAbility2 clearMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          expect(data == undefined).assertTrue();
        });
        missionManager.clearMission(missionIds[2], (error, data) => {
          console.log(TAG + " MultiAbility3 clearMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          expect(data == undefined).assertTrue();
        });
      }, 2500)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility1") {
            console.log(TAG + "after clear  abilityName:" + data[i].want.abilityName);
            expect(data[i].missionId == missionIds[0]).assertTrue();
          }
          if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility42") {
            console.log(TAG + "after clear  abilityName:" + data[i].want.abilityName);
            expect(data[i].missionId == missionIds[3]).assertTrue();
          }
        });
      }, 3000)
      setTimeout(function () {
        missionManager.unlockMission(missionIds[0], (error, data) => {
          console.log(TAG + " MultiAbility unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[1], (error, data) => {
          console.log(TAG + " MainAbility2 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[2], (error, data) => {
          console.log(TAG + " MainAbility3 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[3], (error, data) => {
          console.log(TAG + " MainAbility4 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.clearAllMissions((error, data) => {
          console.log(TAG + " clearAllMissions success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          console.log(TAG + " list11 : " + JSON.stringify(list11));
          console.log(TAG + " list4 : " + JSON.stringify(list4));
          expect(list11[2]).assertEqual("onForeground");
          expect(list4[1]).assertEqual("onDestroy");
          done();
          console.log("------------end SUB_AA_OpenHarmony_Lock_0500-------------");
        })
      }, 4500)
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_0300
       * @tc.name    Pull up ability1,ability2,ability3,ability4 in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_0300", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0300-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0300";
      list3 = ["", "", "", ""];
      var Subscriber = "";
      var missionIds = [0, 0, 0, 0];

      commonEvent.createSubscriber(subscriberInfo_MainAbility3).then(async (data) => {
        console.log(TAG + "====>Create Subscriber3====>");
        Subscriber = data;
        console.log(TAG + "data3 is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility3);
      });
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility3: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility4"
        }, (error, data) => {
          console.log(TAG + ' - startAbility4: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1500)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[2] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[3] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
          missionManager.lockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
        });
      }, 2000)

      setTimeout(function () {
        missionManager.moveMissionToFront(missionIds[2], (err, data) => {
          console.log(TAG + ' MainAbility3 moveMissionToFront errCode : ' +
          JSON.stringify(err) + " data: " + JSON.stringify(data));
        })
      }, 3500)

      setTimeout(function () {
        missionManager.unlockMission(missionIds[0], (error, data) => {
          console.log(TAG + " MainAbility unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[1], (error, data) => {
          console.log(TAG + " MainAbility2 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[2], (error, data) => {
          console.log(TAG + " MainAbility3 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[3], (error, data) => {
          console.log(TAG + " MainAbility4 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.clearAllMissions((error, data) => {
          console.log(TAG + " clearAllMissions success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          console.log(TAG + " list3 : " + JSON.stringify(list3));
          expect(list3[2]).assertEqual("onForeground");
          done();
          console.log("------------end SUB_AA_OpenHarmony_Lock_0300-------------");
        })
      }, 4000)
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_0400
       * @tc.name    Pull up ability1,ability2,ability3,ability4 in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_0400", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0400-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0400";
      list3 = ["", "", "", ""];
      var Subscriber = "";
      var missionIds = [0, 0, 0, 0];

      commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
      });

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility3: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility4"
        }, (error, data) => {
          console.log(TAG + ' - startAbility4: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[2] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[3] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))

          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
          missionManager.lockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 lockMission : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
        });
      }, 2000)
      setTimeout(function () {
        missionManager.moveMissionToFront(missionIds[1], (err, data) => {
          console.log(TAG + ' MainAbility2 moveMissionToFront errCode : ' +
          JSON.stringify(err) + " data: " + JSON.stringify(data));
        })
      }, 3000)
      setTimeout(function () {
        missionManager.unlockMission(missionIds[0], (error, data) => {
          console.log(TAG + " MainAbility unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          expect(data == undefined).assertTrue();
        });
        missionManager.unlockMission(missionIds[1], (error, data) => {
          console.log(TAG + " MainAbility2 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          expect(data == undefined).assertTrue();
        });
        missionManager.unlockMission(missionIds[2], (error, data) => {
          console.log(TAG + " MainAbility3 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          expect(data == undefined).assertTrue();
        });
        missionManager.unlockMission(missionIds[3], (error, data) => {
          console.log(TAG + " MainAbility4 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          expect(data == undefined).assertTrue();
        });
        missionManager.clearAllMissions((error, data) => {
          console.log(TAG + " clearAllMissions success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          console.log(TAG + " list2 : " + JSON.stringify(list2));
          expect(list2[2]).assertEqual("onForeground");
          done();
          console.log("------------end SUB_AA_OpenHarmony_Lock_0400-------------");
        })
      }, 3500)
    });

    /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_0100
         * @tc.name    Pull up ability1,ability2,ability3,ability4 in the same HAP and end ability
         * @tc.desc    Function test
         * @tc.level   0
         */
    it("SUB_AA_OpenHarmony_Lock_0100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0100-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0100";
      list11 = ["", "", "", ""];
      list2 = ["", "", "", ""];
      list3 = ["", "", "", ""];
      list4 = ["", "", "", ""];
      var Subscriber1 = "";
      var Subscriber2 = "";
      var Subscriber3 = "";
      var Subscriber4 = "";
      var missionIds = [0, 0, 0, 0];

      commonEvent.createSubscriber(subscriberInfo_MultiAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_MultiAbility2);
      });
      commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber2 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility2);
      });
      commonEvent.createSubscriber(subscriberInfo_MainAbility3).then(async (data) => {
        console.log(TAG + "====>Create Subscriber3====>");
        Subscriber3 = data;
        console.log(TAG + "data3 is : " + JSON.stringify(Subscriber3))
        await commonEvent.subscribe(Subscriber3, SubscribeCallBack_mainAbility3);
      });
      commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
        console.log(TAG + "====>Create Subscriber4====>");
        Subscriber4 = data;
        console.log(TAG + "data4 is : " + JSON.stringify(Subscriber4))
        await commonEvent.subscribe(Subscriber4, SubscribeCallBack_mainAbility4);
      });

      abilityContext.startAbility({
        bundleName: "com.example.etsmyapplication",
        abilityName: "com.example.etsmyapplication.MultiAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility1: ' + JSON.stringify(error) + ", " +
        JSON.stringify(data));
      });
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility3: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility4"
        }, (error, data) => {
          console.log(TAG + ' - startAbility4: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 1500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MultiAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
              missionIds[2] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
              missionIds[3] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))

          missionManager.lockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          });
        });
      }, 2000)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MultiAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
        });
      }, 3000)
      setTimeout(function () {
        missionManager.unlockMission(missionIds[0], (error, data) => {
          console.log(TAG + " MultiAbility unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[1], (error, data) => {
          console.log(TAG + " MainAbility2 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[2], (error, data) => {
          console.log(TAG + " MainAbility3 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.unlockMission(missionIds[3], (error, data) => {
          console.log(TAG + " MainAbility4 unlockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
        missionManager.clearAllMissions((error, data) => {
          console.log(TAG + " clearAllMissions success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          console.log(TAG + " list11 : " + JSON.stringify(list11));
          console.log(TAG + " list2 : " + JSON.stringify(list2));
          console.log(TAG + " list3 : " + JSON.stringify(list3));
          console.log(TAG + " list4 : " + JSON.stringify(list4));
          expect(list11[0]).assertEqual("onCreate");
          expect(list11[2]).assertEqual("onForeground");
          expect(list11[3]).assertEqual("onBackground");
          expect(list2[0]).assertEqual("onCreate");
          expect(list2[2]).assertEqual("onForeground");
          expect(list3[3]).assertEqual("onBackground");
          expect(list3[0]).assertEqual("onCreate");
          expect(list3[2]).assertEqual("onForeground");
          expect(list3[3]).assertEqual("onBackground");
          expect(list4[0]).assertEqual("onCreate");
          expect(list4[2]).assertEqual("onForeground");
          done();
          console.log("------------end SUB_AA_OpenHarmony_Lock_0100-------------");
        })
      }, 4000)
    });

    /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_0200
         * @tc.name    Pull up ability1,ability2,ability3,ability4 in the same HAP and end ability
         * @tc.desc    Function test
         * @tc.level   0
         */
    it("SUB_AA_OpenHarmony_Lock_0200", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0200-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0200";
      var missionIds = [0, 0, 0, 0];

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility3: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility4"
        }, (error, data) => {
          console.log(TAG + ' - startAbility4: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 1500)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[2] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[3] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.lockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
        });
      }, 2000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 : " + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          });
        });
      }, 3000)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[3], (error, data) => {
            console.log(TAG + " MainAbility4 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " clearAllMissions success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_0200-------------");
          })
        });
      }, 4000)
    });

    /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_0700
         * @tc.name    Pull up ability1,ability2,ability3,ability4 in the same HAP and end ability
         * @tc.desc    Function test
         * @tc.level   0
         */
    it("SUB_AA_OpenHarmony_Lock_0700", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_0700-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_0700";
      list3 = ["", "", "", ""];
      list4 = ["", "", "", ""];
      var Subscriber1 = "";
      var Subscriber4 = "";
      var missionIds = [0, 0, 0, 0];

      commonEvent.createSubscriber(subscriberInfo_MultiAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_MultiAbility2);
      });
      commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
        console.log(TAG + "====>Create Subscriber4====>");
        Subscriber4 = data;
        console.log(TAG + "data4 is : " + JSON.stringify(Subscriber4))
        await commonEvent.subscribe(Subscriber4, SubscribeCallBack_mainAbility4);
      });
      abilityContext.startAbility({
        bundleName: "com.example.etsmyapplication",
        abilityName: "com.example.etsmyapplication.MultiAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility1: ' + JSON.stringify(error) + ", " +
        JSON.stringify(data));
      });
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility3: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility4"
        }, (error, data) => {
          console.log(TAG + ' - startAbility4: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 1500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MultiAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[2] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[3] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          missionManager.lockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          });
          missionManager.lockMission(missionIds[3], (error, data) => {
            console.log(TAG + " MainAbility3 lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " clearAllMissions success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          })
        });
      }, 2000)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          let missionList = [0, 0, 0, 0];
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MultiAbility") {
              missionList[0] = 1;
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              missionList[1] = 1;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              missionList[2] = 1;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              missionList[3] = 1;
              expect(data[i].lockedState == true).assertTrue();
            }
          }
          expect(missionList[0] == 1).assertTrue();
          expect(missionList[1] == 0).assertTrue();
          expect(missionList[2] == 0).assertTrue();
          expect(missionList[3] == 1).assertTrue();
          missionManager.unlockMission(missionIds[3], (error, data) => {
            console.log(TAG + " MainAbility4 unlockMission: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " clearAllMissions: " + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          })
        });
      }, 3000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " All Ability getMissionInfos2: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          let missionList2 = [0, 0, 0, 0];
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MultiAbility") {
              missionList2[0] = 1;
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility2") {
              missionList2[1] = 1;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              missionList2[2] = 1;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility4") {
              missionList2[3] = 1;
            }
          }
          expect(missionList2[0] == 1).assertTrue();
          expect(missionList2[1] == 0).assertTrue();
          expect(missionList2[2] == 0).assertTrue();
          expect(missionList2[3] == 0).assertTrue();
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[2], (error, data) => {
            console.log(TAG + " MainAbility3 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[3], (error, data) => {
            console.log(TAG + " MainAbility4 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " clearAllMissions success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            console.log(TAG + " list11 : " + JSON.stringify(list11));
            console.log(TAG + " list4 : " + JSON.stringify(list4));
            expect(list4[1]).assertEqual("onDestroy");
            expect(list11[2]).assertEqual("onForeground");
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_0700-------------");
          })
        });
      }, 4000)
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1500
       * @tc.name    test lockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1500", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1500-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1500";
      missionManager.lockMission(-1, (error, data) => {
        console.log(TAG + "Emtry MainAbility2 lockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_1500-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1800
       * @tc.name    test lockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1800", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1800-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1800";
      missionManager.lockMission(0.2, (error, data) => {
        console.log(TAG + "lockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_1800-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1900
       * @tc.name    test lockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1900", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1900-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1900";
      missionManager.lockMission(1.2, (error, data) => {
        console.log(TAG + "lockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(data == undefined).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_1900-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1700
       * @tc.name    test lockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1700", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1700-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1700";
      missionManager.lockMission('abc', (error, data) => {
        console.log(TAG + "lockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_1700-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1700
       * @tc.name    test lockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1600", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1600-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1600";
      missionManager.lockMission('123', (error, data) => {
        console.log(TAG + "lockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_1600-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1400
       * @tc.name    test lockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1400", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1400-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1400";
      let errorValue = undefined;
      missionManager.lockMission(errorValue, (error, data) => {
        console.log(TAG + "lockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_1400-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2200
       * @tc.name    test unlockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2200", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2200-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_2200";
      let missionId = -1;
      missionManager.unlockMission(missionId, (error, data) => {
        console.log(TAG + "SUB_AA_OpenHarmony_Lock_2200 unlockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_2200-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2500
       * @tc.name    test unlockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2500", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2500-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_2500";
      let missionId = 0.2;
      missionManager.unlockMission(missionId, (error, data) => {
        console.log(TAG + "SUB_AA_OpenHarmony_Lock_2500 unlockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_2500-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2600
       * @tc.name    test unlockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2600", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2600-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_2600";
      let missionId = 1.2;
      missionManager.unlockMission(missionId, (error, data) => {
        console.log(TAG + "SUB_AA_OpenHarmony_Lock_2600 unlockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(data == undefined).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_2600-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2400
       * @tc.name    test unlockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2400", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2400-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_2400";
      let missionId = 'abc';
      missionManager.unlockMission(missionId, (error, data) => {
        console.log(TAG + "SUB_AA_OpenHarmony_Lock_2400 unlockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_2400-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2300
       * @tc.name    test unlockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2300", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2300-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_2300";
      let missionId = '123';
      missionManager.unlockMission(missionId, (error, data) => {
        console.log(TAG + "SUB_AA_OpenHarmony_Lock_2300 unlockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_2300-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2100
       * @tc.name    test unlockMission error value
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2100-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_2100";
      let missionId = undefined;
      missionManager.unlockMission(missionId, (error, data) => {
        console.log(TAG + "SUB_AA_OpenHarmony_Lock_2100 unlockMission success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        expect(error.code != 0).assertTrue();
        done();
      });
      console.log("------------end SUB_AA_OpenHarmony_Lock_2100-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2000
       * @tc.name    Repeat lock
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2000", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2000-------------");
      for (var i = 0;i < 2; i++) {
        missionManager.lockMission(1.2, (error, data) => {
          console.log("SUB_AA_OpenHarmony_Lock_2000, twosgetMissionInfos:" +
          JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(data == undefined).assertTrue();
        })
      }
      done();
      console.log("------------end SUB_AA_OpenHarmony_Lock_2000-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_2700
       * @tc.name    Repeat lock
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_2700", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_2700-------------");
      var missionId = 1.2
      missionManager.lockMission(missionId, (error, data) => {
        console.log("lockMission info" + JSON.stringify(data));
      })
      missionManager.unlockMission(missionId, (error, data) => {
        for (var i = 0;i < 2; i++) {
          missionManager.unlockMission(missionId, (error, data1) => {
            console.log("unlockMission info" + JSON.stringify(data1));
            expect(data1 == undefined);
          })
        }
      })
      done();
      console.log("------------end SUB_AA_OpenHarmony_Lock_2700-------------");
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1100
       * @tc.name    Pull up ability1,ability2(api7) in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1100-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1100";
      var missionIds = [0, 0];

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.entry2.Entry2MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 lockMission : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
        });
      }, 1000)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " MainAbility2 unlockMission : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          });
        });
      }, 2000)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos3 : "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility unlockMission : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " Entry2MainAbility2 unlockMission : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " clearAllMissions : "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_1100-------------");
          })
        });
      }, 3000)
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1000
       * @tc.name    Pull up ability1,ability2(api7) in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1000", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1000-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1000";
      var missionIds = [0, 0];
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.entry2.Entry2MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          missionManager.lockMission(missionIds[1], (error, data) => {
            console.log(TAG + " Entry2MainAbility2 lockMission: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
            expect(data == undefined).assertTrue();
          });
        });
      }, 1000)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility unlockMission: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " Entry2MainAbility2 unlockMission: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " Entry2MainAbility2 clearAllMissions: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_1000-------------");
          })
        });
      }, 2000)
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1200
       * @tc.name    Pull up ability1,ability2(api7) in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1200", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1200-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1200";
      var missionIds = [0, 0];

      var Subscriber1 = "";

      function SubscribeCallBack_Mission(err, data) {
        if (data.event == "Entry2MainAbility2_lockMissionRes"
        || data.event == "Entry2MainAbility2_unlockMissionRes") {
          expect(data.parameters.resData == undefined).assertTrue();
        }
      }

      var subscriberInfo_Mission = ["Entry2MainAbility2_lockMissionRes", "Entry2MainAbility2_unlockMissionRes"];
      commonEvent.createSubscriber(subscriberInfo_Mission).then(async (data) => {
        console.log(TAG + "====>Create subscriberInfo_Mission====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_Mission);
      });

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.entry2.Entry2MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          commonEvent.publish("Entry2MainAbility2_lockMission", {
            parameters: {
              missionId: missionIds[0]
            }
          }, () => {
            console.log(TAG + " Entry2MainAbility2_lockMission Publish CallBack")
          });
        });
      }, 1000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
          }
          commonEvent.publish("Entry2MainAbility2_unlockMission", () => {
            console.log(TAG + " Entry2MainAbility2_unlockMission Publish CallBack")
          });
        });
      }, 2000)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " Entry2MainAbility2 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " Entry2MainAbility2 clearAllMissions success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_1300-------------");
          })
        });
      }, 3000)
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1300
       * @tc.name    Pull up ability1,ability2(api7),ability3(api8) in the same HAP and end ability
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_Lock_1300", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Lock_1300-------------");
      TAG = "SUB_AA_OpenHarmony_Lock_1300";
      var missionIds = [0, 0, 0];

      var Subscriber1 = "";

      function SubscribeCallBack_Mission(err, data) {
        if (data.event == "Entry2MainAbility2_lockMissionRes"
        || data.event == "Entry2MainAbility2_unlockMissionRes") {
          expect(data.parameters.resData == undefined).assertTrue();
        }
      }

      var subscriberInfo_Mission = ["Entry2MainAbility2_lockMissionRes", "Entry2MainAbility2_unlockMissionRes"];
      commonEvent.createSubscriber(subscriberInfo_Mission).then(async (data) => {
        console.log(TAG + "====>Create subscriberInfo_Mission====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_Mission);
      });
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.etsmyapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.etsmyapplication",
          abilityName: "com.example.entry2.Entry2MainAbility2"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      }, 1000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos1 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility1") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[0] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[1] = data[i].missionId;
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              missionIds[2] = data[i].missionId;
            }
          }
          console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          commonEvent.publish("Entry2MainAbility2_lockMission", {
            parameters: {
              missionId: missionIds[1]
            }
          }, () => {
            console.log(TAG + " Entry2MainAbility2_lockMission Publish CallBack")
          });
        });
      }, 1500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          commonEvent.publish("Entry2MainAbility2_unlockMission", () => {
            console.log(TAG + " Entry2MainAbility2_unlockMission Publish CallBack")
          });
        });
      }, 2500)
      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.entry2.Entry2MainAbility2") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == "com.example.etsmyapplication.MainAbility3") {
              console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
              expect(data[i].lockedState == false).assertTrue();
            }
          }
          missionManager.unlockMission(missionIds[0], (error, data) => {
            console.log(TAG + " MainAbility unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.unlockMission(missionIds[1], (error, data) => {
            console.log(TAG + " Entry2MainAbility2 unlockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
          missionManager.clearAllMissions((error, data) => {
            console.log(TAG + " Entry2MainAbility2 clearAllMissions success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            done();
            console.log("------------end SUB_AA_OpenHarmony_Lock_1300-------------");
          })
        });
      }, 3500)
    });

  });
}