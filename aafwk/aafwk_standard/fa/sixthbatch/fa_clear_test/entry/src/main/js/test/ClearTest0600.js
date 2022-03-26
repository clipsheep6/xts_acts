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
import ability_featureAbility from '@ohos.ability.featureAbility';
import commonEvent from '@ohos.commonEvent';
import missionManager  from '@ohos.application.missionManager';

describe('clearTests0600', function () {
    let lists = new Array()
    var ability3LifeEvents = {
        events: [
            "ApplicationMainAbility3_onShow",
            "ApplicationMainAbility3_onHide",
            "ApplicationMainAbility3_onActive",
            "ApplicationMainAbility3_onInactive",
            "ApplicationMainAbility3_onDestroy"
        ]
    };

    function subscriberCallBack_mainAbility2_Destory(err, data) {
        console.log("SUB_AA_OpenHarmony_Clear_0600 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_0600 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0600
     * @tc.name    Start ability1-2 to obtain all task information. Clear
                       Ability2 to obtain all task information
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_0600", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_0600-------------");
        var MainAbility2missionId = []
        var MainAbility3missionId = []
        var missionIdThread = []

        setTimeout(() => {
            ability_featureAbility.startAbility({ want: {
                bundleName: "com.example.abilitydisable",
                abilityName: "com.example.abilitydisable.MainAbility3"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0600 - startMainAbility1: '
                + JSON.stringify(error) + ", " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
            });
        }, 100)
        setTimeout(() => {
            ability_featureAbility.startAbility({ want: {
                bundleName: "com.example.abilitydisable",
                abilityName: "com.example.abilitydisable.MainAbility2"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0600 - startMainAbility2: '
                + JSON.stringify(error) + ", " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
            });
        }, 400)

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0600 getMissionInfos errCode : ' + JSON.stringify(err)
                + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility"
                    || data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3"
                    || data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility2") {
                        console.log("SUB_AA_OpenHarmony_Clear_0600 data[i]['lockedState']::::"
                        + data[i]['lockedState']);
                        if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3") {
                            MainAbility3missionId.push(data[i]["missionId"])
                        } else {
                            MainAbility2missionId.push(data[i]["missionId"])
                        }
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_0600 MainAbility3missionId:" + MainAbility3missionId);
                console.log("SUB_AA_OpenHarmony_Clear_0600 MainAbility2missionId:" + MainAbility2missionId);
            });
        }, 900)
        setTimeout(() => {
            console.log("SUB_AA_OpenHarmony_Clear_0600 lockMission1 missionIds[1]+++++123456::::"
            + MainAbility2missionId + typeof MainAbility2missionId)
            for (var i = 0;i < MainAbility2missionId.length; i++) {
                missionManager.lockMission(parseInt(MainAbility2missionId[i]), (err, data) => {
                    console.log('SUB_AA_OpenHarmony_Clear_0600 lockMission1 errCode : ' + JSON.stringify(err)
                    + " data: " + JSON.stringify(data));
                });
            }
            ;
        }, 1200);
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0600 getMissionInfo33 errCode : ' + JSON.stringify(err)
                + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_0600 bundleName22222233333：" + data[i].want["abilityName"]);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility") {
                        console.log("SUB_AA_OpenHarmony_Clear_0600 data[i]['lockedState']2222223333::::"
                        + data[i]['lockedState']);
                    }
                }
            });
        }, 1600)
        setTimeout(() => {
            console.log("SUB_AA_OpenHarmony_Clear_0600 clearAllMissions errCode: ")
            missionManager.clearAllMissions((err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0600 clearAllMissions errCode: ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
            })
        }, 2000)
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0600 getMissionInfos4455 errCode : ' + JSON.stringify(err)
                + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_0600 bundleName22222233344444："
                    + data[i].want["abilityName"]);
                    console.log("SUB_AA_OpenHarmony_Clear_0600 data[i]['lockedState']222222::::"
                    + data[i]['lockedState'] + data[i].want["abilityName"]);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3") {
                        console.log("SUB_AA_OpenHarmony_Clear_0600 data[i]['lockedState']33333::::"
                        + data[i]['lockedState']);
                        missionIdThread.push(data[i].want["abilityName"]);
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_0600 missionIdThread.length:" + missionIdThread.length);
                expect(missionIdThread.length == 0).assertTrue();
                done()
            });
        }, 2500)

        var Subscriber2 = "";
        commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_0600 Create Subscriber2=======>：" + JSON.stringify(data));
            Subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_0600 data2 is:" + JSON.stringify(Subscriber2));
            await commonEvent.subscribe(Subscriber2, subscriberCallBack_mainAbility2_Destory)
        })
    });
})