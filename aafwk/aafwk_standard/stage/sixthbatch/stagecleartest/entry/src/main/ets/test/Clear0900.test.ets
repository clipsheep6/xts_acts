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

export default function clear0900Test(abilityContext) {
  describe('ActsAbilityTest', function () {
    console.log('AbilityDisableTests --- start')

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0900
     * @tc.name    Start ability1-3, lock ability1, and obtain all task information.
                   Close Ability3, clear all, and obtain all task information  after 0700
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_0900", 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_Clear_0900-------------");
      var mainAbility3missionId = []
      setTimeout(()=>{
        abilityContext.startAbility({
          bundleName: "ohos.acts.aafwk.plrdtest.myapplication",
          abilityName: "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0900 - startMainAbility3: '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
          expect(error.code == 0).assertTrue();
        });
      },1000)

      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (err, data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0900 getMissionInfos errCode : ' + JSON.stringify(err)
          + " data: " + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log("SUB_AA_OpenHarmony_Clear_0900 bundleName222222：" + data[i].want["abilityName"]
            + "data[i]['lockedState']::::" + data[i]['lockedState']);
            if (data[i].want["abilityName"] == "ohos.acts.aafwk.plrdtest.myapplication.MainAbility3") {
              console.log("SUB_AA_OpenHarmony_Clear_0900 data[i]['lockedState']::::" + data[i]['lockedState']);
              mainAbility3missionId.push(data[i]["missionId"])
            }
          }
          console.log("SUB_AA_OpenHarmony_Clear_0900 mainAbility3missionId:" + mainAbility3missionId[0]);
        });
      }, 1200)

      setTimeout(() => {
        console.log("SUB_AA_OpenHarmony_Clear_0900 mainAbility3missionId ====" + mainAbility3missionId[0]);
        missionManager.clearMission(parseInt(mainAbility3missionId[0]), (err,data) => {
          console.log('SUB_AA_OpenHarmony_Clear_0900 clearMission errCode : '
          + JSON.stringify(err) + " data: " + JSON.stringify(data));
          expect(err.code == 0).assertTrue();
          done();
        });
      }, 1600)
    });

  })
}