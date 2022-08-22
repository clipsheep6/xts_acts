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


export default function clear0100Test(abilityContext) {
  describe('clear0100Test', function () {
    console.log('clear0100Test --- start')
    var TAG = 'SUB_AA_OpenHarmony_Clear_0100';
    let lists41 = new Array()
    var ability41LifeEvents = {
      events: [
        "mainAbility41_onForeground",
        "mainAbility41_onDestroy"
      ]
    };

    function SubscribeCallBack_mainAbility41(err, data) {
      console.log(TAG + " Subscribe41 CallBack data:" + JSON.stringify(data));
      if (data.event == "mainAbility41_onForeground") {
        lists41[0] = "onForeground";
      } else if (data.event == "mainAbility41_onDestroy") {
        lists41[1] = "onDestroy";
      }
      console.log(TAG + "list is : " + list)
    }
     /*
      * @tc.number  SUB_AA_OpenHarmony_Clear_0100
      * @tc.name    Start ability1-2 to obtain all task information. Clear
                       Ability2 to obtain all task information
      * @tc.desc    Function test
      * @tc.level   0
      */
    it("SUB_AA_OpenHarmony_Clear_0100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Clear_0100-------------");
      lists41 = ["", ""];
      var Subscriber41 = "";
      var MainAbility41 = [];
      var MainAbility1missionId = []
      var MainAbility2missionId = []
      var MainAbility3missionId = []
      var MainAbility41missionId = []


      commonEvent.createSubscriber(ability41LifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber41====>");
        Subscriber41 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber41))
        await commonEvent.subscribe(Subscriber41, SubscribeCallBack_mainAbility41);
      });

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 - startMainAbility1: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(error.code == 0).assertTrue();
        });
      }, 200)

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 - startMainAbility2: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(error.code == 0).assertTrue();
        });
      }, 600)

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility4"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 - startMainAbility3: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(error.code == 0).assertTrue();
        });
      }, 1000)

      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility41"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 - startMainAbility41: '
          + JSON.stringify(error) + ", " + JSON.stringify(data));
          expect(error.code == 0).assertTrue();
        });
      }, 1400)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 getMissionInfos errCode : ' + JSON.stringify(err)
          + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0100 bundleName：" + data[i].want["abilityName"]);

            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
              console.log('SUB_AA_OpenHarmony_Clear_0100zxzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz')
              MainAbility1missionId.push(data[i]["missionId"])
              console.log('SUB_AA_OpenHarmony_Clear_0100AAAAAAAAAAAAA0++++' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
              console.log('SUB_AA_OpenHarmony_Clear_0100zxzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz')
              MainAbility1missionId.push(data[i]["missionId"])
              console.log('SUB_AA_OpenHarmony_Clear_0100AAAAAAAAAAAAA1++++' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              console.log('SUB_AA_OpenHarmony_Clear_0100zxzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz')
              console.log('SUB_AA_OpenHarmony_Clear_0100AAAAAAAAAAAAA2++++' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility4") {
              console.log('SUB_AA_OpenHarmony_Clear_0100AAAAAAAAAAAAA13++++' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility41") {
              MainAbility41missionId.push(data[i]["missionId"])
              console.log('SUB_AA_OpenHarmony_Clear_0100AAAAAAAAAAAAA41++++' + data[i]['lockedState']);
            }
          }

          console.log("SUB_AA_OpenHarmony_Clear_0100 MainAbility1missionId ====" + MainAbility1missionId);
          console.log("SUB_AA_OpenHarmony_Clear_0100 MainAbility41missionId ====" + MainAbility41missionId);
        });
      }, 1600)

      setTimeout(() => {
        console.log("SUB_AA_OpenHarmony_Clear_0100 MainAbility1missionId ====" + MainAbility1missionId);
        console.log("SUB_AA_OpenHarmony_Clear_0100 MainAbility41missionId ====" + MainAbility41missionId[0]);
        for (var i = 0;i < MainAbility1missionId.length; i++) {
          missionManager.lockMission(parseInt(MainAbility1missionId[i]), (err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0100 lockMission1 errCode : ' 
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
          });
        }

        missionManager.lockMission(parseInt(MainAbility41missionId[0]), (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 lockMission41 errCode : ' 
          + JSON.stringify(err) + " data: " + JSON.stringify(data));
        });
      }, 1900)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 getMissionInfos errCode : ' 
          + JSON.stringify(err) + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0100 bundleName222222：" + data[i].want["abilityName"]);
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
              console.log('SUB_AA_OpenHarmony_Clear_0100BBBBBBBBBBBBB1' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              console.log('SUB_AA_OpenHarmony_Clear_0100BBBBBBBBBBBBB2' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility4") {
              console.log('SUB_AA_OpenHarmony_Clear_0100BBBBBBBBBBBBB3' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility41") {
              console.log('SUB_AA_OpenHarmony_Clear_0100BBBBBBBBBBBBB41' + data[i]['lockedState']);
            }
          }
        });
      }, 2150)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 getMissionInfos errCode : ' 
          + JSON.stringify(err) + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0100 bundleName222222：" + data[i].want["abilityName"]);
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
              expect(data[i]['lockedState'] == true).assertTrue();
              console.log('SUB_AA_OpenHarmony_Clear_0100CCCCCCCCC1' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              expect(data[i]['lockedState'] == false).assertTrue();
              console.log('SUB_AA_OpenHarmony_Clear_0100CCCCCCCCC2' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility4") {
              expect(data[i]['lockedState'] == false).assertTrue();
              console.log('SUB_AA_OpenHarmony_Clear_0100CCCCCCCCC3' + data[i]['lockedState']);
            }
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility41") {
              expect(data[i]['lockedState'] == true).assertTrue();
              console.log('SUB_AA_OpenHarmony_Clear_0100CCCCCCCCC41' + data[i]['lockedState']);
            }
          }
        });
      }, 2700)

      setTimeout(function () {
        console.log(TAG + ' MainAbility41 moveMissionToFront' + MainAbility41missionId[0]);
        missionManager.moveMissionToFront(MainAbility41missionId[0], (err, data) => {
          console.log(TAG + ' MainAbility41 moveMissionToFront errCode : ' +
          JSON.stringify(err) + " data: " + JSON.stringify(data));
        })
      }, 3000)

      setTimeout(() => {
        console.log("SUB_AA_OpenHarmony_Clear_0100 clearAllMissions errCode: ")
        missionManager.clearAllMissions((err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 clearAllMissions errCode: ' +
          JSON.stringify(err) + " data: " + JSON.stringify(data));
        })
      }, 3600)


      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0100 getMissionInfos33333333333 errCode : ' 
          + JSON.stringify(err.code) + " ,data.length: " + JSON.stringify(data.length));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0100 bundleName333333333333：" + data[i].want["abilityName"]);
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility41") {
              console.log('SUB_AA_OpenHarmony_Clear_0100++++进来了66666666666666666666666666666666666666666')
              MainAbility41.push('aaaaaaaa')
              expect(data[i]['lockedState'] == true).assertTrue();
              expect(MainAbility41.length != 0).assertTrue();
              done();
            }
          }
        });
      }, 3800)
    })
  })
}