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
  describe('clear2200Test', function () {
    console.log('clear2200Test --- start')
    let lists2 = ["",""];

    var ability2LifeEvents = {
      events: [
        "mainAbility22_onDestroy",
        "mainAbility22_onWindowStageDestroy",
      ]
    };

    function SubscribeCallBack_mainAbility2(err, data) {
      console.log(TAG + " Subscribe4 CallBack data:" + JSON.stringify(data));
      if(data.event == "mainAbility22_onDestroy"){
        lists2[0] = "onDestroy";
      }else if(data.event == "mainAbility22_onWindowStageDestroy"){
        lists2[1] = "onWindowStageDestroy";
      }
    }

      /*
       * @tc.number  SUB_AA_OpenHarmony_Clear_0500
       * @tc.name    Start ability1-2 to obtain all task information. Clear
                     Ability2 to obtain all task information
       * @tc.desc    Function test
       * @tc.level   0
       */
      it("SUB_AA_OpenHarmony_Clear_2200", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_2200-------------");
        var TAG = "SUB_AA_OpenHarmony_Clear_2200"
        lists2 = ["",""];
        var MainAbility = [];
        var MainAbility2 = [];
        var MainAbility3 = [];
        var MainAbility4 = [];
        var missionIds = [];
        var Subscriber= "";

        commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
          console.log(TAG + "====>Create Subscriber2====>");
          Subscriber = data;
          console.log(TAG + "data2 is : " + JSON.stringify(Subscriber))
          await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
        });

        setTimeout(()=> {
          abilityContext.startAbility({
            bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
            abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility22"
          }, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_2200 - startMainAbility2: '
            + JSON.stringify(err) + ", " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
          });
        },500)

        setTimeout(function(){
          missionManager.getMissionInfos("", 20, (err, data) => {
            console.log(TAG + " getMissionInfos success, err: "
            + JSON.stringify(err) + ", data: " + JSON.stringify(data));
            for(var i = 0;i<data.length;i++){
              if(data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
                console.log(TAG + " abilityName:" + data[i].want.abilityName);
                console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
                MainAbility.push(data[i].missionId);
                expect(MainAbility.length != 0).assertTrue();
              }
              if(data[i].want.abilityName == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility22") {
                console.log(TAG + " abilityName:" + data[i].want.abilityName);
                console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
                MainAbility2.push(data[i].missionId);
                expect(MainAbility2.length != 0).assertTrue();
              }
            }
            console.log(TAG + "missionIds is: " + JSON.stringify(missionIds))
          })
        },3500)

        setTimeout(()=>{
          missionManager.clearMission(Number(MainAbility2[0]), (err,data) => {
            console.log('SUB_AA_OpenHarmony_Clear_2200 clearAllMissions errCode: ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));

            missionManager.getMissionInfos("", 20, (err, data) => {
              console.log(TAG + " getMissionInfosnext success, err: "
              + JSON.stringify(err) + ", data: " + JSON.stringify(data));

              for(var i = 0;i<data.length;i++){
                console.log(TAG +"101151561")
                if(data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
                  console.log(TAG + " abilityNameaaaaa:" + data[i].want.abilityName);
                  console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
                  MainAbility3.push(data[i].missionId);
                }
                if(data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility22") {
                  console.log(TAG + " abilityNameccccc:" + data[i].want.abilityName);
                  console.log(TAG + " missionId:" + data[i].missionId+ " lockedState:" + data[i].lockedState);
                  MainAbility4.push(data[i].missionId);
                }
              }
              expect(lists2[0]).assertEqual("onDestroy");
              expect(lists2[1]).assertEqual("onWindowStageDestroy");
              done();
            })

          });
        },4000)
      })
    })
  }