// @ts-nocheck
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
import {describe, expect, it} from 'deccjsunit/index'
import missionManager from '@ohos.application.missionManager'
import featureAbility from '@ohos.ability.featureability'

describe("taskSwitchTest", function() {
    console.log("------------------ taskSwitchTest is starting ------------------");

    var TAG = "";

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0100
     * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_0100', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0100-------------");
        var missionId = 1;
        try {
            missionManager.moveMissionToFront(missionId, (error, data) => {
                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_0100 error: " +
                JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == 2097181).assertTrue();
                done();
            })
        } catch(error) {
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_0100: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0100-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2300
     * @tc.name    Third party application switching
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2300', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2300-------------");
        TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_2300"
        var ability1MissionList = [];

        missionManager.getMissionInfos("", 20, (error, data) => {
            console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));

            for(var i = 0; i<data.length; i++){
                if(data[i].want.abilityName == "com.example.taskswitching.MainAbility") {
                    ability1MissionList.push(data[i].missionId);
                }
            }
            console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))

            missionManager.lockMission(ability1MissionList[0], (error, data) => {
                console.log(TAG + "Emtry MainAbility lockMission success, error: "
                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                missionManager.clearAllMissions((err,data) => {
                    console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                })
            });
            console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
        });

        setTimeout(function(){
            featureAbility.startAbility({
                want: {
                    bundleName : "com.example.auxiliaryabilitywithreturnvalue",
                    abilityName : "com.example.auxiliaryabilitywithreturnvalue.MainAbility2"
                }
            }, (error, data) => {
                console.log(TAG + " startAbility1 success, error: "
                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            });
        },3000)

        setTimeout(function() {
            missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
                console.log(TAG + "MainAbility moveMissionToFront success, error: "
                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == 0).assertTrue;
                done()
            });

        }, 4000)
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2300-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2400
     * @tc.name    The input parameter missionid of movemissiontorfront is undefined
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2400', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2400-------------");
        var missionId = undefined;
        try {
            missionManager.moveMissionToFront(missionId, (error, data) => {
                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2400 error: " +
                JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == -1).assertTrue();
                done();
            })
        } catch(error) {
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2400: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2400-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2500
     * @tc.name    The input parameter missionid of movemissiontorfront is an ID that does not exist
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2500', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2500-------------");
        var missionId = -1;
        try {
            missionManager.moveMissionToFront(missionId, (error, data) => {
                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2500 error: " +
                JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == 2097181).assertTrue();
                done();
            })
        } catch(error) {
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2500: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2500-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2600
     * @tc.name    The input parameter missionid of movemissiontorfront is a number of type string
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2600', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
        var missionId = "2";
        try {
            missionManager.moveMissionToFront(missionId, (error, data) => {
                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600 error: " +
                JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == -1).assertTrue();
                done();
            })
        } catch(error) {
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2700
     * @tc.name    The input parameter missionid of movemissiontorfront is a non numeric string
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2700', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
        var missionId = "aa";
        try {
            missionManager.moveMissionToFront(missionId, (error, data) => {
                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700 error: " +
                JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == -1).assertTrue();
                done();
            })
        } catch(error) {
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2800
     * @tc.name    The input parameter missionid of movemissiontorfront is a floating-point type
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2800', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2800-------------");
        var missionId = 2.111;
        try {
            missionManager.moveMissionToFront(missionId, (error, data) => {
                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2800 error: " +
                JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == 0).assertTrue();
                done();
            })
        } catch(error) {
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2800: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2800-------------");
    });

   
    console.log("------------------ taskSwitchTest is end ------------------");
})
