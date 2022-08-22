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
  describe('clear2100Test', function () {
    console.log('clear21000Test --- start')
    var lists2 = ["", ""];

    var ability2LifeEvents = {
      events: [
        "mainAbility22_onDestroy",
        "mainAbility22_onWindowStageDestroy",
      ]
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_2100
     * @tc.name    Clearallmissions terminated mission
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_2100", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Clear_2100-------------");
      var TAG = "SUB_AA_OpenHarmony_Clear_2100"
      lists2 = ["",""];
      var MainAbility = [];
      var MainAbility2 = [];
      var MainAbility3 = [];
      var MainAbility4 = [];
      var MainAbility5 = [];
      var MainAbility6 = [];
      var missionIds = [];
      var Subscriber= "";

      function SubscribeCallBack_mainAbility2(err, data) {
        console.log(TAG + " Subscribe4 CallBack data:" + JSON.stringify(data));
        if(data.event == "mainAbility22_onDestroy"){
          lists2[0] = "onDestroy";
        }else if(data.event == "mainAbility22_onWindowStageDestroy"){
          lists2[1] = "onWindowStageDestroy";
        }
        console.log(TAG + "lists2 is : " + lists2)
      }

      commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
      });

      abilityContext.startAbility({
        bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
        abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility22"
      }, (err, data) => {
        console.log(TAG + '- startMainAbility2: '
        + JSON.stringify(err) + ", " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
      });

      setTimeout(function(){
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + " getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for(var i = 0;i<data.length;i++){
            if(data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
              MainAbility.push(data[i].missionId);
            } else if(data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility22") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
              MainAbility2.push(data[i].missionId);
            }
          }
          console.log(TAG + "MainAbility is : " + MainAbility)
          console.log(TAG + "MainAbility2 is : " + MainAbility2)
          missionManager.lockMission(MainAbility[0], (err,data) => {
            console.log(TAG + " MainAbility lockMission success, error: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
          })
        })
      },1000)

      setTimeout(function(){
        missionManager.getMissionInfos("", 20, (err, data) => {
          console.log(TAG + " getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          for(var i = 0;i<data.length;i++){
            if(data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
              MainAbility5.push(data[i].missionId);
              expect(MainAbility5.length != 0).assertTrue();
            } else if(data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility22") {
              console.log(TAG + " abilityName:" + data[i].want.abilityName);
              console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
              MainAbility6.push(data[i].missionId);
              expect(MainAbility6.length != 0).assertTrue();
            }
          }
        })
      },2800)

      setTimeout(()=>{
        missionManager.clearAllMissions((err,data) => {
          console.log(TAG + ' clearAllMissions errCode: ' +
          JSON.stringify(err) + " data: " + JSON.stringify(data));
          missionManager.getMissionInfos("", 20, (err, data) => {
            console.log(TAG + " getMissionInfos success, error: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            for (var i = 0;i < data.length; i++) {
              if (data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
                console.log(TAG + " abilityName:" + data[i].want.abilityName);
                console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
                MainAbility3.push(data[i].missionId);
              } else if (data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility22") {
                console.log(TAG + " abilityName:" + data[i].want.abilityName);
                console.log(TAG + " missionId:" + data[i].missionId + " lockedState:" + data[i].lockedState);
                MainAbility4.push(data[i].missionId);
              }
            }
            expect(lists2[0]).assertEqual("onDestroy");
            expect(lists2[1]).assertEqual("onWindowStageDestroy");
            expect(MainAbility4.length == 0).assertTrue();
            done();
          })
        });
      },3200)

    })
  })

}
