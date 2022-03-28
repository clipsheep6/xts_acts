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

export default function clear1100Test(abilityContext) {
  describe('ActsAbilityTest', function () {
    console.log('AbilityDisableTests --- start')

        /*
         * @tc.number  SUB_AA_OpenHarmony_Clear_1100
         * @tc.name   Start ability1-2 and tripartite applications to clean up Ability2
         * @tc.desc    Function test
         * @tc.level   0
         */
        it("SUB_AA_OpenHarmony_Clear_1100", 0, async function (done) {
          console.log("------------start SUB_AA_OpenHarmony_Clear_1100AAAA-------------");
          var mainAbility2missionId = []
          var mainAbility3missionId = []
          var MainAbility3 = [];
          var MainAbility2 = [];
          console.log("------------start SUB_AA_OpenHarmony_Clear_1100BBBB-------------");
          setTimeout(() => {
            abilityContext.startAbility({
              bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
              abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2"
            } , (error, data) => {
              console.log('SUB_AA_OpenHarmony_Clear_1100 - startMainAbility2: '
              + JSON.stringify(error) + ", " + JSON.stringify(data))
              expect(error.code == 0).assertTrue();
            });
          }, 500)
          setTimeout(() => {
            abilityContext.startAbility({
              bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
              abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3"
            } , (error, data) => {
              console.log('SUB_AA_OpenHarmony_Clear_1100 - startMainAbility3: '
              + JSON.stringify(error) + ", " + JSON.stringify(data));
              expect(error.code == 0).assertTrue();
            });
          }, 1200)

          setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
              console.log('SUB_AA_OpenHarmony_Clear_1100 getMissionInfos errCode : ' 
              + JSON.stringify(err) + " data: " + JSON.stringify(data));
              for (var i = 0;i < data.length; i++) {
                console.log("SUB_AA_OpenHarmony_Clear_1100 bundleName111111111111111：" 
                + data[i].want["abilityName"] + "data[i]['lockedState']::::" + data[i]['lockedState']);
                  console.log("SUB_AA_OpenHarmony_Clear_1100 data[i]['lockedState']::::" + data[i]['lockedState']);
                  if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
                    mainAbility3missionId.push(data[i]["missionId"])
                  }
              }
              console.log("SUB_AA_OpenHarmony_Clear_1100 mainAbility3missionId:" + mainAbility3missionId);
            });
          }, 1800)

          setTimeout(() => {
            for (var i = 0;i < mainAbility3missionId.length; i++) {
              console.log("SUB_AA_OpenHarmony_Clear_1100 mainAbility3missionId ====" + mainAbility3missionId[i]);
              missionManager.clearMission(parseInt(mainAbility3missionId[i]), (data, err) => {
                console.log('SUB_AA_OpenHarmony_Clear_1100 clearMission errCode : '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(data.code == 0).assertTrue();
              });
            }
          }, 2500)

          setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
              console.log('SUB_AA_OpenHarmony_Clear_1100 getMissionInfos errCode : ' + JSON.stringify(err) 
              + " data: " + JSON.stringify(data));
              for (var i = 0;i < data.length; i++) {
                console.log('SUB_AA_OpenHarmony_Clear_1100+++data[i].want["abilityName"]2222' 
                + data[i].want["abilityName"] + '::' + data[i]["missionId"]);
                if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility2") {
                  console.log('++++++++++++++SUB_AA_OpenHarmony_Clear_1100+++++++++++++');
                  MainAbility2.push('data[i]["missionId"]');
                }
                if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
                  MainAbility3.push('data[i]["missionId"]');
                }
              }
              console.log("SUB_AA_OpenHarmony_Clear_1100 MainAbility2.length :" + MainAbility2.length);
              console.log("SUB_AA_OpenHarmony_Clear_1100 MainAbility3.length :" + MainAbility3.length);
              expect(MainAbility2.length != 0).assertTrue();
              expect(MainAbility3.length == 0).assertTrue();
              done()
            });
          }, 3500)
        });

  })
}