/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import missionManager  from '@ohos.application.missionManager';
import featureAbility from '@ohos.ability.featureAbility';
import commonEvent from '@ohos.commonEvent';


export default function lockTest(abilityContext) {
  describe('lockTest', function () {
    var missionId1s = [];
    var missionId2s = [];

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_1200
     * @tc.name    Lock and unlock the mission corresponding to the api8 application from the api7 application
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Lock_1200', 0, async function (done) {
      console.log('----------------SUB_AA_OpenHarmony_Lock_1200 start----------------');
      setTimeout(() => {
        abilityContext.startAbility({
          bundleName: "com.example.lock1",
          abilityName: "com.example.entry2.Ability2"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Lock_1200 - startAbility2:' + JSON.stringify(data) + JSON.stringify(error));
        })
      }, 200)
      setTimeout(() => {
        missionManager.getMissionInfos('', 200, (error, data) => {
          console.log('SUB_AA_OpenHarmony_Lock_1200, twosgetMissionInfos:' + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.lockapi8.MainAbility") {
              console.log('Ability1_bundleName' + JSON.stringify(data[i].bundleName));
              console.log('Ability1_missionId' + JSON.stringify(data[i].missionId));
              missionId1s.push(data[i].missionId);
              console.log('qqwee1' + JSON.stringify(missionId1s));
            }
            if (data[i].want.abilityName == "com.example.entry2.Ability2") {
              console.log('Ability2_bundleName' + JSON.stringify(data[i].bundleName));
              console.log('Ability2_missionId' + JSON.stringify(data[i].missionId));
              missionId2s.push(data[i].missionId);
              console.log('qqwee2' + JSON.stringify(missionId2s));
            }
          };
          for (var i = 0; i < missionId1s.length; i ++){
            missionManager.lockMission(missionId1s[i], (error, data) => {
              console.log('lockMission ability1 infos  data:' + JSON.stringify(data) + 'error :'
              + JSON.stringify(error));
              expect(data == undefined).assertTrue();
            })
          }
        })
      },500)
      setTimeout(() => {
        missionManager.getMissionInfos('', 500 ,(error, data) => {
          console.log('SUB_AA_OpenHarmony_Lock_1200, threesgetMissionInfos:' + JSON.stringify(data));
          for (var i = 0; i < data.length; i ++){
            missionManager.unlockMission(missionId1s[i],(error, data) => {
              console.log('unlockMission_ability1:' + JSON.stringify(data));
              expect(data[i] == undefined).assertTrue();
            })
            if (data[i].want.abilityName == 'com.example.lockapi8.MainAbility') {
              console.log('Ability1_lockedState:' + JSON.stringify(data[i].lockedState));
              expect(data[i].lockedState == true).assertTrue();
            }
            if (data[i].want.abilityName == 'com.example.entry2.Ability2'){
              console.log('Ability2_lockedState:' + JSON.stringify(data[i].lockedState));
              expect(data[i].lockedState == false).assertTrue();
            }
            missionManager.unlockMission(missionId1s[i],(error, data) => {
              console.log('unlockMission_ability1:' + JSON.stringify(data[i]));
              expect(data[i] == undefined).assertTrue();
            })
          }
        })
      }, 700)
      setTimeout(() => {
        missionManager.getMissionInfos('', 500 ,(error, data) => {
          console.log('SUB_AA_OpenHarmony_Lock_1200 FourgetMissionInfos:' + JSON.stringify(data));
          for (var i = 0; i < data.length; i ++){
            if (data[i].want.abilityName == 'com.example.lockapi8.MainAbility'){
              console.log('Ability11_lockedState:' + JSON.stringify(data[i].lockedState));
              expect(data[i].lockedState == false).assertTrue();
            }
            if (data[i].want.abilityName == 'com.example.entry2.Ability2'){
              console.log('Ability22_lockedState:' + JSON.stringify(data[i].lockedState));
              expect(data[i].lockedState == false).assertTrue();
            }
          }
        })
      }, 1000)
      setTimeout(() => {
        for (var i = 0; i < missionId1s.length; i++) {
          missionManager.unlockMission(parseInt(missionId1s[i]), (error, data) => {
            console.log('unlockMission1 data' + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          })
        }
        for (var i = 0; i < missionId2s.length; i++) {
          missionManager.unlockMission(parseInt(missionId2s[i]), (error, data) => {
            console.log('unlockMission2 data' + JSON.stringify(data));
            expect(data == undefined).assertTrue();
          })
        }
        missionManager.clearAllMissions((error, data) => {
          console.log('clearAllMissions' + JSON.stringify(data) + ',' + JSON.stringify(error));
          expect(data[i] == undefined).assertTrue();
        })
        done();
      }, 1300)
      console.log('----------------SUB_AA_OpenHarmony_Lock_1200 end----------------');
    })
  })
}