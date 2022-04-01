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

describe('missionManager', function () {
    var missionId1s = [];
    var missionId2s = [];
    var missionId3s = [];

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_1300
     * @tc.name    Lock and unlock the mission corresponding to the api7 application from the api8 application
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Lock_1300", 0, async function (done) {
        console.log("---------------  SUB_AA_OpenHarmony_Lock_1300 start -----------------")
        setTimeout(() => {
            featureAbility.startAbility(
                { want: {
                    bundleName: "com.example.lockapi8",
                    abilityName: "com.example.lockapi8.MainAbility3"
                } }, (error, data) => {
                console.log('`SUB_AA_OpenHarmony_Lock_1300` - startAbility3: ' + JSON.stringify(error) 
                + ", " + JSON.stringify(data));
            })
        }, 200)
        setTimeout(() => {
            featureAbility.startAbility(
                { want: {
                    bundleName: "com.example.lock1",
                    abilityName: "com.example.entry2.Ability2"
                } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_1300 - startAbility_entry2-2: ' + JSON.stringify(error) 
                + ", " + JSON.stringify(data));
            })
        }, 300)
        setTimeout(() => {
            missionManager.getMissionInfos('', 200, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_1300, twosgetMissionInfos:' + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    if (data[i].want.abilityName == "com.example.lock1.MainAbility") {
                        console.log('Ability1_missionId' + JSON.stringify(data[i].missionId));
                        console.log('Ability1_bundleName' + JSON.stringify(data[i].missionId));
                        missionId1s.push(data[i].missionId);
                    }
                    if (data[i].want.abilityName == "com.example.entry2.Ability2") {
                        console.log('Ability2_missionId' + JSON.stringify(data[i].missionId));
                        console.log('Ability2_bundleName' + JSON.stringify(data[i].want.bundleName));
                        missionId2s.push(data[i].missionId);
                    }
                    if (data[i].want.abilityName == "com.example.lockapi8.MainAbility3") {
                        console.log('Ability3_missionId' + JSON.stringify(data[i].missionId));
                        console.log('Ability3_missionId' + JSON.stringify(data[i].want.bundleName));
                        missionId3s.push(data[i].missionId);
                    }
                };
                for (var i = 0; i < missionId2s.length; i ++){
                    missionManager.lockMission(missionId2s[i], (error, data) => {
                        console.log('lockMission_ability2:' + JSON.stringify(data) + 'error :' + 
                        JSON.stringify(error));
                        expect(data == undefined).assertTrue();
                    })
                }
            })
        },800)
        setTimeout(() => {
            missionManager.getMissionInfos('', 200, (error, data) => {
                console.log('get all infos' + JSON.stringify(data));
                for (var i = 0; i < data.length; i ++){
                    missionManager.unlockMission(missionId2s[i], (error, data) => {
                        console.log('unlockMission ability2'+ JSON.stringify(data));
                        expect(data[i] == undefined).assertTrue();
                    })
                    if(data[i].want.abilityName == 'com.example.entry2.Ability2'){
                        console.log('ability-2 lockedState' + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == true).assertTrue();
                    }
                    if(data[i].want.abilityName == 'com.example.lock1.MainAbility'){
                        console.log('ability-1 lockedState' + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == false).assertTrue();
                    }
                    if(data[i].want.abilityName == 'com.example.lockapi8.MainAbility3'){
                        console.log('ability-3 lockedState' + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == false).assertTrue();
                    }
                }
            })
        }, 900)
        setTimeout(() => {
            missionManager.getMissionInfos('', 200, (error, data) => {
                console.log('get all infos22' + JSON.stringify(data));
                for (var i = 0; i < missionId1s.length; i++) {
                    if (data[i].want.ability == 'com.example.lock1.MainAbility'){
                        expect(data[i].lockedState == false);
                    }
                    if (data[i].want.ability == 'com.example.entry2.Ability2'){
                        expect(data[i].lockedState == false);
                    }
                    if (data[i].want.ability == 'com.example.lockapi8.MainAbility3'){
                        expect(data[i].lockedState == false);
                    }
                }
            })
        }, 1000)
        setTimeout(() => {
            missionManager.getMissionInfos('', 500, (error, data) => {
                console.log('get all infos6' + JSON.stringify(data));
            })
            for (var i = 0; i < missionId1s.length; i++) {
                missionManager.unlockMission(missionId1s[i], (error, data) => {
                    console.log('Abiliy2missionid lock' + JSON.stringify(data) + JSON.stringify(error));
                    expect(data == undefined).assertTrue();
                })
            }
            for (var i = 0; i < missionId2s.length; i++) {
                missionManager.unlockMission(missionId2s[i], (error, data) => {
                    console.log('Abiliy2missionid lock' + JSON.stringify(data) + JSON.stringify(error));
                    expect(data == undefined).assertTrue();
                })
            }
            missionManager.clearAllMissions((error, data) => {
                console.log('clearAllMissions' + JSON.stringify(data) + ',' + JSON.stringify(error));
                expect(data == undefined).assertTrue();
            })
            done();
        }, 1100)
        console.log("---------------  SUB_AA_OpenHarmony_Lock_1300 end -----------------");
    })
})
