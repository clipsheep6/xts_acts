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
// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import missionManager from '@ohos.application.missionManager'

var lifeAndAuxlifeEvents = {
  events: ["mainAbility4_onForeground",
  "mainAbility4_onBackground",
  "mainAbility4_onWindowStageDestroy",
  "mainAbility4_onDestroy",
  "mainAbility_onBackground",
  "mainAbility_onForeground"
  ]
}

export default function abilityTest0200(abilityContext) {
  describe('AbilityTest', function () {
    console.log("-------------start test---------------");
    var TAG = "";
    /*
         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0200
         * @tc.name    Switch the last mission in the defaultsinglelist to the foreground
         * @tc.desc    Function test
         * @tc.level   0
         */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_0200', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0200-------------");
      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0200"
      var Subscriber = "";
      var Subscriber2 = "";
      var list = [];
      var listLength;
      var list2Length;
      var list2 = [];
      var ability1MissionList = [];
      var ability4MissionList = [];
      var id;
      const START_ABILITY_TIMEOUT = 5000;

      function SubscribeCallBack(err, data) {
        if (list[5] != "mainAbility4_onDestroy") {
          if (data.event == "mainAbility_onBackground") {
            list[0] = "mainAbility_onBackground"
          } else if (data.event == "mainAbility_onForeground") {
            list[1] = "mainAbility_onForeground"
          } else if (data.event == "mainAbility4_onForeground") {
            list[2] = "mainAbility4_onForeground"
          } else if (data.event == "mainAbility4_onBackground") {
            list[3] = "mainAbility4_onBackground"
          } else if (data.event == "mainAbility4_onWindowStageDestroy") {
            list[4] = "smainAbility4_onWindowStageDestroy"
          } else if (data.event == "mainAbility4_onDestroy") {
            list[5] = "mainAbility4_onDestroy"
          }
        }

        console.log(TAG + "list.length is : " + list.length)
        console.log(TAG + "list is : " + list)

        if (list.length == 6) {
          console.log(TAG + "list[5] is : " + list[5])
          commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
      }

      commonEvent.createSubscriber(lifeAndAuxlifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      });


      function UnSubscribeCallback() {
        console.log(TAG + "====>UnSubscribe CallBack====>");
        console.log(TAG + "expect END")
        done();
        console.log(TAG + "done end")
      }


      abilityContext.startAbility({
        bundleName: "com.example.auxtaskswitching",
        abilityName: "com.example.singletonentry.singletonEntryAbility2"
      }, (error, data) => {
        console.log(TAG + " startAbility1 success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
      });

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.auxtaskswitching",
          abilityName: "com.example.singletonentry.singletonEntryAbility3"
        }, (error, data) => {
          console.log(TAG + " startAbility2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
      }, 700)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.auxtaskswitching",
          abilityName: "com.example.singletonentry.singletonEntryAbility4"
        }, (error, data) => {
          console.log(TAG + " startAbility3 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
      }, 1400)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility") {
              ability1MissionList.push(data[i].missionId);
            }
          }
          console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))

          console.log(TAG + "MainAbility list1 data " + parseInt(ability1MissionList[0]));
          missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
            console.log(TAG + "MainAbility moveMissionToFront success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
        });


        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility4") {
              console.log(TAG + "ability4MissionId is " + data[i].missionId);
              ability4MissionList.push(data[i].missionId);
            }
          }
          console.log(TAG + "ability4MissionList is: " + JSON.stringify(ability4MissionList))

          console.log(TAG + "MainAbility list2 data " + parseInt(ability4MissionList[0]));
          missionManager.moveMissionToFront(parseInt(ability4MissionList[0]), (error, data) => {
            console.log(TAG + "Emtry MainAbility4 moveMissionToFront success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
        });
      }, 2000)

      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0200-------------");
    })

  }

  )
}
