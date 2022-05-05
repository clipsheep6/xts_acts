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

export default function clear1000Test(abilityContext) {
  describe('ActsAbilityTest', function () {
    console.log('AbilityDisableTests --- start')

        /*
         * @tc.number  SUB_AA_OpenHarmony_Clear_1000
         * @tc.name    Start ability1-2,  clear all, and obtain all task information
         * @tc.desc    Function test
         * @tc.level   0
         */
        it("SUB_AA_OpenHarmony_Clear_1000", 0, async function (done) {
          console.log("------------start SUB_AA_OpenHarmony_Clear_1000-------------");
          let MainAbility1 = [];
          let MainAbility2 = [];
          setTimeout(() => {
            abilityContext.startAbility({
              bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
              abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3"
            } , (error, data) => {
              console.log('SUB_AA_OpenHarmony_Clear_1000 - startMainAbility3: '
              + JSON.stringify(error) + ", " + JSON.stringify(data))
              expect(error.code == 0).assertTrue();
            });
          }, 400)

          setTimeout(()=>{
            missionManager.clearAllMissions((err,data)=>{
              console.log('SUB_AA_OpenHarmony_Clear_1000 clearAllMissions errCode: ' +
              JSON.stringify(err) + " data: " + JSON.stringify(data));
              expect(err.code == 0).assertTrue();

              missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1000 getMissionInfos errCode : '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                  console.log("SUB_AA_OpenHarmony_Clear_1000 bundleName3：" + data[i].want["abilityName"]
                  + "data[i]['lockedState']::::" + data[i]['lockedState']);
                  if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility") {
                    MainAbility.push(data[i]["missionId"])
                  }
                  if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
                    MainAbility2.push(data[i]["missionId"])
                  }
                }
                expect(MainAbility1.length == 0).assertTrue();
                expect(MainAbility2.length == 0).assertTrue();
                done()
              });
            });
          },2000)
        });
  })
}