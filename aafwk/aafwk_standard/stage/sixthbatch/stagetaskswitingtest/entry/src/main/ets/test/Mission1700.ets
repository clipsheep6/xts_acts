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

var ability3LifeEvents = {
  events: [
    "mainAbility2_onBackground",
    "mainAbility2_onWindowStageDestroy",
    "mainAbility2_onDestroy",
    "mainAbility2_onCreate",
    "mainAbility2_onWindowStageCreate",
    "mainAbility2_onForeground",
    "mainAbility_onForeground",
    "mainAbility_onBackground",
  ]
}

export default function abilityTest1700(abilityContext) {
  describe('AbilityTest', function () {
    console.log("-------------start test---------------");
    var TAG = "";
    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0500
     * @tc.name    Switch the last mission in the defaultstandardlist to the foreground
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_1700', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_1700-------------");
      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_1700"
      var Subscriber = "";
      var Subscriber2 = "";
      var list = [];
      var ability1MissionList = [];
      var ability2MissionList = [];
      var ability2RunningStateList = [];

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onBackground") {
          list[0] = "mainAbility2_onBackground";
        } else if (data.event == "mainAbility2_onWindowStageDestroy") {
          list[1] = "mainAbility2_onWindowStageDestroy";
        } else if (data.event == "mainAbility2_onDestroy") {
          list[2] = "mainAbility2_onDestroy";
        } else if (data.event == "mainAbility2_onCreate") {
          list[3] = "mainAbility2_onCreate";
        } else if (data.event == "mainAbility2_onWindowStageCreate") {
          list[4] = "mainAbility2_onWindowStageCreate";
        } else if (data.event == "mainAbility2_onForeground") {
          list[5] = "mainAbility2_onForeground";
        } else if (data.event == "mainAbility_onForeground") {
          list[6] = "mainAbility_onForeground";
        } else if (data.event == "mainAbility_onBackground") {
          list[7] = "mainAbility_onBackground";
        }
        console.log(TAG + "LIST: " + list)
      }

      commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      });

      missionManager.getMissionInfos("", 20, (error, data) => {
        console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
        + JSON.stringify(error) + ", data: " + JSON.stringify(data));

        for (var i = 0; i < data.length; i++) {
          if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
            ability1MissionList.push(data[i].missionId);
          }
        }
        console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))

        missionManager.lockMission(ability1MissionList[0], (error, data) => {
          console.log(TAG + "Emtry MainAbility lockMission success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          missionManager.clearAllMissions((err, data) => {
            console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            console.log(TAG + "clearAllMissions end, ability1MissionList is: " + JSON.stringify(ability1MissionList))
          })
        });
      });

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.missionapplication",
          abilityName: "com.example.missionapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + " startAbility2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
      }, 500)

      setTimeout(function () {
        console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));

        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility1 getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
              ability2MissionList.push(data[i].missionId);
            }
          }
          console.log(TAG + "ability2MissionList is: " + JSON.stringify(ability2MissionList))

          missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
            console.log(TAG + "MainAbility moveMissionToFront success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
        });
      }, 1000)

      setTimeout(function () {
        console.log(TAG + " start last--------------------");
        expect(list[0]).assertEqual("mainAbility2_onBackground");
        console.log(TAG + "111111111111")
        expect(list[1]).assertEqual("mainAbility2_onWindowStageDestroy");
        console.log(TAG + "222222222")
        expect(list[2]).assertEqual("mainAbility2_onDestroy");
        console.log(TAG + "3333")
        expect(list[3]).assertEqual("mainAbility2_onCreate");
        console.log(TAG + "444")
        expect(list[4]).assertEqual("mainAbility2_onWindowStageCreate");
        console.log(TAG + "555")
        expect(list[5]).assertEqual("mainAbility2_onForeground");
        console.log(TAG + "666")
        expect(list[6]).assertEqual("mainAbility_onForeground");
        console.log(TAG + "555")
        expect(list[7]).assertEqual("mainAbility_onBackground");
        console.log(TAG + "666")
      }, 2500)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility2 getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
              console.log(TAG + "ability2runningState is " + data[i].runningState);
              ability2RunningStateList.push(data[i].runningState);
            }
          }
          console.log(TAG + "ability2RunningStateList is: " + JSON.stringify(ability2RunningStateList))
        });
        done()
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_1700-------------");
      }, 4500)

    });
  })
}
