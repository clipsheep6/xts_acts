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
import abilityFeatureAbility from '@ohos.ability.featureAbility';
import commonEvent from '@ohos.commonEvent';
import missionManager  from '@ohos.application.missionManager';

function startAility() {
    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility5"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_2100 - startMainAbility1: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
    }, 100)
    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility4"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_2100 - startMainAbility2: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
    },500)
}

describe('clearTests2100', function () {
    let lists = new Array()
    var ability3LifeEvents = {
        events: [
            "Api7ApplicationMainAbility2_onShow",
            "Api7ApplicationMainAbility2_onHide",
            "Api7ApplicationMainAbility2_onActive",
            "Api7ApplicationMainAbility2_onInactive",
            "Api7ApplicationMainAbility2_onDestroy",
            "ApplicationMainAbility4_onDestroy"
        ]
    };

    function subscriberCallBackMainAbility2Destory(err, data) {
        console.log("SUB_AA_OpenHarmony_Clear_2100 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_2100 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_2100
     * @tc.name   Start ability1-2 - lockMission Ability1 - terminateSelf Ability2 - getMissionInfos
           - clearAllMissions - getMissionInfos
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_2100", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_2100-------------");
        var mainAbility2missionId = []
        var mainAbility1 = [];
        var mainAbility2 = [];
        startAility()
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                for (var i = 0;i < data.length; i++) {
                    console.log('SUB_AA_OpenHarmony_Clear_2100 data[i].want["abilityName"]2222' +
                    data[i].want["abilityName"] + '::' + data[i]["missionId"]);
                    console.log("SUB_AA_OpenHarmony_Clear_2100 data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility5"||
                    data[i].want["abilityName"]
                    == "com.example.abilitydisable.MainAbility") {
                        mainAbility2missionId.push(data[i]["missionId"])
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_2100 mainAbility2missionId.length:" + mainAbility2missionId);
            });
        }, 1000)

        setTimeout(() => {
            console.log("SUB_AA_OpenHarmony_Clear_2100 lockMission1 missionIds[1]:" + mainAbility2missionId)
            for (var i = 0;i < mainAbility2missionId.length; i++) {
                missionManager.lockMission(parseInt(mainAbility2missionId[i]), (err, data) => {
                    console.log('SUB_AA_OpenHarmony_Clear_2100 lockMission1 errCode : ' +
                    JSON.stringify(err) + " data: " + JSON.stringify(data));
                });
            };
        }, 1500);

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_2100 getMissionInfo33 errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_2100 bundleName22222233333：" + data[i].want["abilityName"]);
                    console.log("SUB_AA_OpenHarmony_Clear_2100 data[i]['lockedState']2222223333::::" +
                    data[i]['lockedState']);
                }
            });
        }, 3000)

        setTimeout(()=>{
            missionManager.clearAllMissions((err,data)=>{
                console.log('SUB_AA_OpenHarmony_Clear_2100 clearAllMissions errCode: ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
            });
        },3500)

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                for (var i = 0;i < data.length; i++) {
                    console.log('SUB_AA_OpenHarmony_Clear_2100 data[i].want["abilityName"]2222' +
                    data[i].want["abilityName"] + '::' + data[i]["missionId"]);
                    console.log("SUB_AA_OpenHarmony_Clear_2100 data[i]['lockedState']2222223333::::" +
                    data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility4") {
                        mainAbility1.push(data[i]["missionId"]);
                    }
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility5") {
                        mainAbility2.push(data[i]["missionId"]);
                    }
                }
                expect(mainAbility1.length == 0).assertTrue();
                expect(mainAbility2.length != 0).assertTrue();
                done()
            });
        }, 4000)

        var subscriber2 = "";
        commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_2100 Create subscriber2=======>：" + JSON.stringify(data));
            subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_2100 data2 is:" + JSON.stringify(subscriber2));
            await commonEvent.subscribe(subscriber2, subscriberCallBackMainAbility2Destory)
        })
    });
})