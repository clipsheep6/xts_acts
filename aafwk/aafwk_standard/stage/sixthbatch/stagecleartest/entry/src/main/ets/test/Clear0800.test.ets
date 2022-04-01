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


export default function clear0800Test(abilityContext) {
  describe('clear0800Test', function () {
    console.log('clear0800Test --- start')
    var TAG = 'SUB_AA_OpenHarmony_Clear_0800';
    let lists1 = new Array()
    let lists2 = new Array()
    let lists21 = new Array()

    var ability1LifeEvents = {
      events: [
        "mainAbility3_onForeground"
      ]
    };
    var ability2LifeEvents = {
      events: [
        "mainAbility2_onForeground"
      ]
    };
    var ability21LifeEvents = {
      events: [
        "mainAbility21_onBackground",
        "mainAbility21_onWindowStageDestroy",
        "mainAbility21_onDestroy"
      ]
    };

    function SubscribeCallBack_mainAbility1(err, data) {
      console.log(TAG + " Subscribe1 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility1_onForeground") {
        lists1[0] = "onForeground";
      }
      console.log(TAG + "lists1 is : " + lists1)
    }

    function SubscribeCallBack_mainAbility2(err, data) {
      console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility2_onForeground") {
        lists2[0] = "onForeground";
      }
      console.log(TAG + "lists2 is : " + lists2)
    }

    function SubscribeCallBack_mainAbility21(err, data) {
      console.log(TAG + "Subscribe21 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility21_onBackground") {
        lists21[0] = "onBackground";
      } else if (data.event == "mainAbility21_onWindowStageDestroy") {
        lists21[1] = "onWindowStageDestroy";
      } else if (data.event == "mainAbility21_onDestroy") {
        lists21[2] = "onDestroy";
      }
      console.log(TAG + "lists21 is : " + lists21)
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0800
     * @tc.name    Start ability1-2 to obtain all task information. Clear
                  Ability2 to obtain all task information
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_0800", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Clear_0800-------------");
      lists1 = [""];
      lists2 = [""];
      lists21 = ["", "", ""];
      var Subscriber1 = "";
      var Subscriber2 = "";
      var Subscriber21 = "";
      var MainAbility1missionId = []
      var MainAbility2missionId = []
      var MainAbility21missionId = []
      let MainAbility1 = [];
      let MainAbility2 = [];
      let MainAbility21 = [];

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

      commonEvent.createSubscriber(ability21LifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber21====>");
        Subscriber21 = data;
        console.log(TAG + "data3 is : " + JSON.stringify(Subscriber21))
        await commonEvent.subscribe(Subscriber21, SubscribeCallBack_mainAbility21);
      });

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0800 - startMainAbility1: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(error.code == 0).assertTrue();
        });
      }, 500)

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0800 - startMainAbility2: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(error.code == 0).assertTrue();
        });
      }, 900)

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility21"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0800 - startMainAbility21: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(error.code == 0).assertTrue();
        });
      }, 1300)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0800 getMissionInfosAAAAAAAAAAAA errCode : ' + JSON.stringify(err)
          + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0800 bundleName：" + data[i].want["abilityName"]);
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              expect(data[i]['lockedState'] == false).assertTrue();
              console.log('SUB_AA_OpenHarmony_Clear_0800的ability1的lockedState---》' + data[i]['lockedState'])
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
              expect(data[i]['lockedState'] == false).assertTrue();
              console.log('SUB_AA_OpenHarmony_Clear_0800的ability2的lockedState---》' + data[i]['lockedState'])
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility21") {
              expect(data[i]['lockedState'] == false).assertTrue();
              console.log('SUB_AA_OpenHarmony_Clear_0800的ability3的lockedState---》' + data[i]['lockedState'])
            }
          }
        });
      }, 2000)

      setTimeout(async () => {
        console.log("SUB_AA_OpenHarmony_Clear_0800 MainAbility2missionId[0]xxxxxx errCode: " + MainAbility2missionId[0])
        await missionManager.clearMission(parseInt(MainAbility2missionId[0]), (data, err) => {
          console.log('SUB_AA_OpenHarmony_Clear_0500 clearMission errCode : '
          + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(data.code == 0).assertTrue();
        });
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0800 - startMainAbility2: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
      }, 3000)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0800 getMissionInfos22222 errCode : '
          + JSON.stringify(err) + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0800 bundleName222222：" + data[i].want["abilityName"]);


            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              MainAbility1.push(data[i].want["abilityName"])
              console.log('SUB_AA_OpenHarmony_Clear_0800consoleconsole1' + data[i]['lockedState'])
              //              expect(data[i]['lockedState'] == false).assertTrue();
            }


            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
              MainAbility2.push(data[i].want["abilityName"])
              console.log('SUB_AA_OpenHarmony_Clear_0800consoleconsole2' + data[i]['lockedState'])
              //              expect(data[i]['lockedState'] == false).assertTrue();
            }
          }
        });

        console.log('SUB_AA_OpenHarmony_Clear_0800zyhzyhzyhzyhzyhzyh2' + lists2);
        console.log('SUB_AA_OpenHarmony_Clear_0800zyhzyhzyhzyhzyhzyh21' + lists21);
        console.log("SUB_AA_OpenHarmony_Clear_0800 MainAbility1.length:" + MainAbility1.length);
        console.log("SUB_AA_OpenHarmony_Clear_0800 MainAbility2.length:" + MainAbility2.length);
        console.log("SUB_AA_OpenHarmony_Clear_0800 MainAbility21.length:" + MainAbility21.length);
      }, 4500)

      setTimeout(function(){
        console.log('QQQQQQQQQSUB_AA_OpenHarmony_Clear_0800zyhzyhzyhzyhzyhzyh2' + lists2);
        console.log('QQQQQQQQQSUB_AA_OpenHarmony_Clear_0800zyhzyhzyhzyhzyhzyh21' + lists21);
        console.log("QQQQQQQQQSUB_AA_OpenHarmony_Clear_0800 MainAbility1.length:" + MainAbility1.length);
        console.log("QQQQQQQQQSUB_AA_OpenHarmony_Clear_0800 MainAbility2.length:" + MainAbility2.length);
        console.log("QQQQQQQQQSUB_AA_OpenHarmony_Clear_0800 MainAbility21.length:" + MainAbility21.length);
        expect(MainAbility1.length != 0).assertTrue();
        expect(MainAbility2.length != 0).assertTrue();
        expect(lists21[0] == 'onBackground').assertTrue();
        expect(lists21[1] == 'onWindowStageDestroy').assertTrue();
        expect(lists21[2] == 'onDestroy').assertTrue();
        expect(lists2[0] == 'onForeground').assertTrue();
        done()
      },4900)

    })

  })
}