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
            console.log('SUB_AA_OpenHarmony_Clear_2000 - startMainAbility1: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
    }, 100)

    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.api7abilitydisable",
            abilityName: "com.example.api7abilitydisable.MainAbility3"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_2000 - startMainAbility3: '
            + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
    }, 1500)

    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.api7abilitydisable",
            abilityName: "com.example.api7abilitydisable.MainAbility2"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_2000 - startMainAbility2: '
            + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
    },800)

}

describe('clearTests2000', function () {
    let lists = new Array()
    var ability3LifeEvents = {
        events: [
            "Api7ApplicationMainAbility2_onShow",
            "Api7ApplicationMainAbility2_onHide",
            "Api7ApplicationMainAbility2_onActive",
            "Api7ApplicationMainAbility2_onInactive",
            "Api7ApplicationMainAbility2_onDestroy",
            "Api7ApplicationMainAbility3_onDestroy"
        ]
    };

    function subscriberCallBackMainAbility2Destory(err, data) {
        console.log("SUB_AA_OpenHarmony_Clear_2000 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_2000 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_2000
     * @tc.name   Start ability1-3 - getMissionInfos - clearMissions
         - getMissionInfos  - getMissionInfos
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_2000", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_2000-------------");
        var mainAbility2missionId = []
        var mainAbility1 = [];
        var mainAbility2 = [];
        var mainAbility3 = [];
        startAility()
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                for (var i = 0;i < data.length; i++) {
                    console.log('SUB_AA_OpenHarmony_Clear_2000 data[i].want["abilityName"]2222' +
                    data[i].want["abilityName"] + '::' + data[i]["missionId"]);
                    console.log("SUB_AA_OpenHarmony_Clear_2000 data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.api7abilitydisable.MainAbility2") {
                        mainAbility2missionId.push(data[i]["missionId"])
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_2000 mainAbility2missionId.length:" + mainAbility2missionId);
            });
        }, 2500)

        setTimeout(() => {
            for (var i = 0;i < mainAbility2missionId.length; i++) {
                console.log("SUB_AA_OpenHarmony_Clear_2000 mainAbility2missionId ====" + mainAbility2missionId[i]);
                missionManager.clearMission(parseInt(mainAbility2missionId[i]), (data, err) => {
                    console.log('SUB_AA_OpenHarmony_Clear_2000 clearMission errCode : '
                    + JSON.stringify(err) + " data: " + JSON.stringify(data));
                });
            }
        }, 3000)

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                for (var i = 0;i < data.length; i++) {
                    console.log('SUB_AA_OpenHarmony_Clear_2000 data[i].want["abilityName"]2222' +
                    data[i].want["abilityName"] + '::' + data[i]["missionId"]);
                    console.log("SUB_AA_OpenHarmony_Clear_2000 data[i]['lockedState']2222223333::::" +
                    data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.api7abilitydisable.MainAbility3") {
                        mainAbility1.push(data[i]["missionId"]);
                    }
                    if (data[i].want["abilityName"] == "com.example.api7abilitydisable.MainAbility2") {
                        mainAbility2.push(data[i]["missionId"]);
                    }
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility5") {
                        mainAbility3.push(data[i]["missionId"]);
                    }
                }
                expect(mainAbility1.length != 0).assertTrue();
                expect(mainAbility2.length == 0).assertTrue();
                expect(mainAbility3.length != 0).assertTrue();
                done()
            });
        }, 3500)

        var subscriber2 = "";
        commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_2000 Create subscriber2=======>：" + JSON.stringify(data));
            subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_2000 data2 is:" + JSON.stringify(subscriber2));
            await commonEvent.subscribe(subscriber2, subscriberCallBackMainAbility2Destory)
        })
    });
})