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
    "mainAbility3_onBackground",
    "mainAbility_onForeground"
  ]
}

export default function abilityTest1000(abilityContext) {
  describe('AbilityTest', function () {
    console.log("-------------start test---------------");
    var TAG = "";
    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0500
     * @tc.name    Switch the last mission in the defaultstandardlist to the foreground
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_1000', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_1000-------------");
      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_1000"
      var Subscriber = "";
      var Subscriber2 = "";
      var list = [];
      var ability1MissionList = [];

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
        if (data.event == "mainAbility3_onBackground") {
          list[0] = "mainAbility3_onBackground";
        } else if (data.event == "mainAbility_onForeground") {
          list[1] = "mainAbility_onForeground";
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
        abilityContext.startAbility({
          bundleName: "com.example.missionapplication",
          abilityName: "com.example.missionapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + " startAbility3 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
      }, 800)

      setTimeout(function () {
        console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));

        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility1 getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
            console.log(TAG + "MainAbility moveMissionToFront success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });
        });
      }, 1500)

      setTimeout(function () {
        "mainAbility3_onBackground",
        "mainAbility_onForeground"
        console.log(TAG + " start last--------------------");
        expect(list[0]).assertEqual("mainAbility3_onBackground");
        console.log(TAG + "111111111111")
        expect(list[1]).assertEqual("mainAbility_onForeground");
        console.log(TAG + "222222222")
        done()
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_1000-------------");
      }, 4000)

    });
  })
}
