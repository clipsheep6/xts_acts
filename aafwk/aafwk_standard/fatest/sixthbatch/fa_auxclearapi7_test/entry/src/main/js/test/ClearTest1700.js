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
            console.log('SUB_AA_OpenHarmony_Clear_1700 - startMainAbility5: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
    }, 500)

    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.api7abilitydisable",
            abilityName: "com.example.api7abilitydisable.MainAbility2"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_1700 - startMainAbility2: '
            + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
    }, 100)
}

describe('clearTests1700', function () {
    let lists = new Array()
    var ability3LifeEvents = {
        events: [
            "Api7ApplicationMainAbility2_onShow",
            "Api7ApplicationMainAbility2_onHide",
            "Api7ApplicationMainAbility2_onActive",
            "Api7ApplicationMainAbility2_onInactive",
            "Api7ApplicationMainAbility2_onDestroy"
        ]
    };

    function subscriberCallBackMainAbility2Destory(err, data) {
        console.log("SUB_AA_OpenHarmony_Clear_1700 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_1700 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1700
     * @tc.name   Start ability1-2 - lockMission api7 Ability2 - getMissionInfos - clearMissions Ability2
       getMissionInfos
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1700", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_1700-------------");
        var mainAbility2missionId = []
        let MainAbility2 = [];

        startAility()
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1700 getMissionInfos errCode : ' + JSON.stringify(err) +
                " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_1700 bundleName222222：" + data[i].want["abilityName"] +
                    "data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility" ||
                    data[i].want["abilityName"]
                    == "com.example.abilitydisable.MainAbility5"
                    || data[i].want["abilityName"] == "com.example.api7abilitydisable.MainAbility2") {
                        console.log("SUB_AA_OpenHarmony_Clear_1700 data[i]['lockedState']::::" +
                        data[i]['lockedState']);
                        if (data[i].want["abilityName"] == "com.example.api7abilitydisable.MainAbility2") {
                            mainAbility2missionId.push(data[i]["missionId"])
                        }
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_1700 mainAbility2missionId.length:" + mainAbility2missionId);
            });
        }, 1000)

        setTimeout(() => {
            console.log("SUB_AA_OpenHarmony_Clear_1700 lockMission1 missionIds[1]::::" + mainAbility2missionId)
            for (var i = 0;i < mainAbility2missionId.length; i++) {
                missionManager.lockMission(parseInt(mainAbility2missionId[i]), (err, data) => {
                    console.log('SUB_AA_OpenHarmony_Clear_1700 lockMission1 errCode : ' + JSON.stringify(err) +
                    " data: " + JSON.stringify(data));
                });
            };
        }, 1500);

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1700 getMissionInfo33 errCode : ' + JSON.stringify(err) +
                " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_1700 bundleName22222233333：" + data[i].want["abilityName"]);
                    console.log("SUB_AA_OpenHarmony_Clear_1700 data[i]['lockedState']::::" + data[i]['lockedState']);

                }
            });
        }, 2000)
        setTimeout(() => {
            for (var i = 0;i < mainAbility2missionId.length; i++) {
                console.log("SUB_AA_OpenHarmony_Clear_1700 mainAbility2missionId ====" + mainAbility2missionId[i]);
                missionManager.clearMission(parseInt(mainAbility2missionId[i]), (data, err) => {
                    console.log('SUB_AA_OpenHarmony_Clear_1700 clearMission errCode : '
                    + JSON.stringify(err) + " data: " + JSON.stringify(data));
                });
            }
        }, 2500)

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1700 getMissionInfos errCode : ' + JSON.stringify(err) +
                " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log('SUB_AA_OpenHarmony_Clear_1700 data[i].want["abilityName"]2222' +
                    data[i].want["abilityName"] + '::' + data[i]["missionId"]);
                    console.log("SUB_AA_OpenHarmony_Clear_1700 data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.api7abilitydisable.MainAbility2") {
                        MainAbility2.push(data[i]["missionId"]);
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_1700 MainAbility2.length :" + MainAbility2.length);
                expect(MainAbility2.length == 0).assertTrue();
                done()
            });
        }, 3000)

        var Subscriber2 = "";
        commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_1700 Create Subscriber2=======>：" + JSON.stringify(data));
            Subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_1700 data2 is:" + JSON.stringify(Subscriber2));
            await commonEvent.subscribe(Subscriber2, subscriberCallBackMainAbility2Destory)
        })
    });
})