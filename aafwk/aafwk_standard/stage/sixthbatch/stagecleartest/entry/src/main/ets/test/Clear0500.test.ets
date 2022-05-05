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
import missionManager  from '@ohos.application.missionManager';
import ability from '@ohos.application.Ability'
import wantConstant from '@ohos.ability.wantConstant'
import commonEvent from '@ohos.commonevent'


export default function clear0500Test(abilityContext) {
  describe('clear0500Test', function () {

    console.log('clear0500Test --- start')

    var TAG = 'SUB_AA_OpenHarmony_Clear_0500';
    let lists1 = new Array()
    let lists2 = new Array()
    var ability1LifeEvents = {
      events: [
        "mainAbility3_onForeground"
      ]
    };
    var ability2LifeEvents = {
      events: [
        "mainAbility2_onBackground",
        "mainAbility2_onWindowStageDestroy",
        "mainAbility2_onDestroy"
      ]
    };

    function SubscribeCallBack_mainAbility1(err, data) {
      console.log(TAG + " Subscribe1 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility3_onForeground") {
        lists1[0] = "onForeground";
      }
      console.log(TAG + "list is : " + list)
    }

    function SubscribeCallBack_mainAbility2(err, data) {
      console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility2_onBackground") {
        lists2[0] = "onBackground";
      } else if (data.event == "mainAbility2_onWindowStageDestroy") {
        lists2[1] = "onWindowStageDestroy";
      } else if (data.event == "mainAbility2_onDestroy") {
        lists2[2] = "onDestroy";
      }
      console.log(TAG + "list is : " + list)
    }
     /*
      * @tc.number  SUB_AA_OpenHarmony_Clear_0500
      * @tc.name    Start ability1-2 to obtain all task information. Clear
                    Ability2 to obtain all task information
      * @tc.desc    Function test
      * @tc.level   0
      */
    it("SUB_AA_OpenHarmony_Clear_0500", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Clear_0500-------------");
      lists1 = [""];
      lists2 = ["", "", ""];
      var Subscriber1 = "";
      var Subscriber2 = "";
      var MainAbility1missionId = []
      var MainAbility2missionId = []
      let MainAbility1 = [];
      let MainAbility2 = [];

      commonEvent.createSubscriber(ability1LifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1====>");
        Subscriber1 = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber1))
        await commonEvent.subscribe(Subscriber1, SubscribeCallBack_mainAbility1);
      });

      commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber2 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility2);
      });

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0500 - startMainAbility1: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(err.code == 0).assertTrue();
        });
      }, 500)

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0500 - startMainAbility2: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(err.code == 0).assertTrue();
        });
      }, 1000)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0500 getMissionInfos errCode : ' + JSON.stringify(err)
          + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0500 bundleName：" + data[i].want["abilityName"]);
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility"
            || data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2"
            || data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              console.log("SUB_AA_OpenHarmony_Clear_0500 data[i]['lockedState']::::" + data[i]['lockedState']);

              expect(data[i]['lockedState'] == false).assertTrue();
              if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
                console.log('QQQQQQQQQQQQQQQ' + data[i]["missionId"])
              }
              if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
                MainAbility1missionId.push(data[i]["missionId"])
              }
              if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
                MainAbility2missionId.push(data[i]["missionId"])
              }
            }
          }
          console.log("SUB_AA_OpenHarmony_Clear_0500 MainAbility2missionId ====" + MainAbility2missionId);
        });
      }, 1300)

      setTimeout(() => {
        console.log("SUB_AA_OpenHarmony_Clear_0500 MainAbility2missionId[0] ====" + MainAbility2missionId[0]);
        missionManager.clearMission(parseInt(MainAbility2missionId[0]), (data, err) => {
          console.log('SUB_AA_OpenHarmony_Clear_0500 clearMission errCode : '
          + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.code == 0).assertTrue();
        });
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0500 - startMainAbility: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 1600)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0500 getMissionInfos errCode : ' + JSON.stringify(err) 
          + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0500 bundleName222222：" + data[i].want["abilityName"]);
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility" || 
            data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2" || 
            data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              console.log("SUB_AA_OpenHarmony_Clear_0500 data[i]['lockedState']222222::::" + data[i]['lockedState']);
              if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
                MainAbility2.push(data[i]["missionId"])
              } else if(data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
                MainAbility1.push(data[i]["missionId"])
              }
            }
          }
          console.log('zyhzyhzyhzyhzyhzyh2' + lists2);
          console.log('zyhzyhzyhzyhzyhzyh1' + lists1);
          console.log("SUB_AA_OpenHarmony_Clear_0500 MainAbility1.length:" + MainAbility1.length);
          console.log("SUB_AA_OpenHarmony_Clear_0500 MainAbility2.length:" + MainAbility2.length);
          expect(MainAbility2.length == 0).assertTrue();
          expect(MainAbility1.length != 0).assertTrue();
          expect(lists2[0] == 'onBackground').assertTrue();
          expect(lists2[1] == 'onWindowStageDestroy').assertTrue();
          expect(lists2[2] == 'onDestroy').assertTrue();
          expect(lists1[0] == 'onForeground').assertTrue();
          done()
        });
      }, 2500)
      console.log("SUB_AA_OpenHarmony_Clear_0500 --- end")
    })


  })
}