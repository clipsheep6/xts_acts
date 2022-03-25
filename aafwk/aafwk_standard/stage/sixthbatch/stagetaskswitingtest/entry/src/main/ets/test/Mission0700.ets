// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import missionManager from '@ohos.application.missionManager'

var ability2LifeEvents = {
  events: ["mainAbility2_onForeground",
  "mainAbility2_onBackground",
  "mainAbility2_onWindowStageDestroy",
  "mainAbility2_onDestroy",
  "mainAbility_onBackground",
  "mainAbility_onForeground",
  ]
}

export default function abilityTest0700(abilityContext) {
  describe('AbilityTest', function () {
    console.log("-------------start test---------------");
    var TAG = "";
    /*
 * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0500
 * @tc.name    Switch the last mission in the defaultstandardlist to the foreground
 * @tc.desc    Function test
 * @tc.level   0
 */

    it('SUB_AA_OpenHarmony_MoveMissionToFront_0700', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0700-------------");
      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0700"
      var Subscriber = "";
      var Subscriber2 = "";
      var list = [];

      var ability1MissionList = [];
      var ability2MissionList = [];

      function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));

        if (data.event == "mainAbility2_onForeground") {
          list[0] = "mainAbility2_onForeground";
        } else if (data.event == "mainAbility2_onBackground") {
          list[1] = "mainAbility2_onBackground";
        } else if (data.event == "mainAbility2_onWindowStageDestroy") {
          list[2] = "mainAbility2_onWindowStageDestroy";
        } else if (data.event == "mainAbility2_onDestroy") {
          list[3] = "mainAbility2_onDestroy";
        } else if (data.event == "mainAbility_onBackground") {
          list[4] = "mainAbility_onBackground";
        } else if (data.event == "mainAbility_onForeground") {
          list[5] = "mainAbility_onForeground";
        }
        console.log(TAG + "LIST: " + list)
      }


      commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
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
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.missionapplication",
          abilityName: "com.example.missionapplication.MainAbility4"
        }, (error, data) => {
          console.log(TAG + " startAbility4 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

        });
      }, 1500)

      setTimeout(function () {
        console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));

        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility2 getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
              ability2MissionList.push(data[i].missionId);
            }
          }
          console.log(TAG + "ability2MissionList is: " + JSON.stringify(ability2MissionList))

          missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
            console.log(TAG + "MainAbility moveMissionToFront success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          });

          missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
            console.log(TAG + "Emtry MainAbility2 moveMissionToFront success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          });
        });
      }, 2000)

      setTimeout(function () {
        done()
      }, 4000)

//          console.log(TAG + "MainAbility list1 data " + parseInt(ability1MissionList[0]));
//          expect(list[0]).assertEqual("onForeground");
//          console.log(TAG + "111111111111")
//          expect(list[1]).assertEqual("onBackground");
//          console.log(TAG + "222222222")
//          expect(list[2]).assertEqual("onWindowStageDestroy");
//          console.log(TAG + "333333333")
//          expect(list[3]).assertEqual("onDestroy");
//          console.log(TAG + "4444444444444")
//        }, 3000)
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0700-------------");
      });
  })
}
