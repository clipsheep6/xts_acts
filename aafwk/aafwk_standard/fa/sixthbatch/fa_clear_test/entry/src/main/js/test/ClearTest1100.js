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
import missionManager  from '@ohos.application.missionManager';

function startAility() {
    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility2"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_1100 - startMainAbility1: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
    }, 100)
    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility3"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_1100 - startMainAbility2: '
            + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
    }, 400)
}

describe('clearTests1000', function () {
    let lists = new Array()
    var ability3LifeEvents = {
        events: [
            "ApplicationMainAbility4_onShow",
            "ApplicationMainAbility4_onHide",
            "ApplicationMainAbility4_onActive",
            "ApplicationMainAbility4_onInactive",
            "ApplicationMainAbility4_onDestroy"
        ]
    };

    function subscriberCallBackMainAbility2Destory(err, data) {
        console.log("SUB_AA_OpenHarmony_Clear_1100 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_1100 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1100
     * @tc.name   Start ability1-2 and tripartite applications to clean up Ability2
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1100", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_1100-------------");
        var mainAbility2missionId = []
        let MainAbility3 = [];
        let MainAbility2 = [];

        startAility()
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1100 getMissionInfos errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_1100 bundleName222222：" + data[i].want["abilityName"] +
                    "data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility" ||
                    data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3"
                    || data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility2") {
                        console.log("SUB_AA_OpenHarmony_Clear_1100 data[i]['lockedState']::::" +
                        data[i]['lockedState']);
                        if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility2") {
                            mainAbility2missionId.push(data[i]["missionId"])
                        }
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_1100 mainAbility2missionId.length:" + mainAbility2missionId);
            });
        }, 1000)

        setTimeout(() => {
            for (var i = 0;i < mainAbility2missionId.length; i++) {
                console.log("SUB_AA_OpenHarmony_Clear_1100 mainAbility3missionId ====" + mainAbility2missionId[i]);
                missionManager.clearMission(parseInt(mainAbility2missionId[i]), (data, err) => {
                    console.log('SUB_AA_OpenHarmony_Clear_1100 clearMission errCode : '
                    + JSON.stringify(err) + " data: " + JSON.stringify(data));
                });
            }
        }, 1500)

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1100 getMissionInfos errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log('data[i].want["abilityName"]2222' + data[i].want["abilityName"] +
                    '::' + data[i]["missionId"]);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility2") {
                        MainAbility2.push(data[i]["missionId"]);
                    }
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3") {
                        MainAbility3.push(data[i]["missionId"]);
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_1100 MainAbility2.length :" + MainAbility2.length);
                console.log("SUB_AA_OpenHarmony_Clear_1100 MainAbility3.length :" + MainAbility3.length);
                expect(MainAbility2.length == 0).assertTrue();
                expect(MainAbility3.length != 0).assertTrue();
                done()
            });
        }, 2000)
    });
})