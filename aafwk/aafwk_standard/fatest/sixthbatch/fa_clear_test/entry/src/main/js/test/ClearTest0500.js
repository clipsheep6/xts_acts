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

describe('clearTests0500', function () {
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

    function subscriberCallBackMainAbility2Destory(err, data) {
        console.log("SUB_AA_OpenHarmony_Clear_0500 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_0500 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0500
     * @tc.name    Start ability1-2 to obtain all task information. Clear
                       Ability2 to obtain all task information
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_0500", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_0500-------------");
        var mainAbility3missionId = []
        let mainAbility3 = [];
        let mainAbility2 = [];

        setTimeout(() => {
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.abilitydisable",
                abilityName: "com.example.abilitydisable.MainAbility3"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0500 - startMainAbility1: '
                + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        }, 200)

        setTimeout(() => {
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.abilitydisable",
                abilityName: "com.example.abilitydisable.MainAbility2"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0500 - startMainAbility2: '
                + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        }, 500)

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0500 getMissionInfos errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_0500 bundleName：" + data[i].want["abilityName"]);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3" ||
                    data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility") {
                        console.log("SUB_AA_OpenHarmony_Clear_0500 data[i]['lockedState']:" + data[i]['lockedState'])
                        if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3") {
                            mainAbility3missionId.push(data[i]["missionId"])
                        }
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_0500 mainAbility3missionId ====" + mainAbility3missionId );
            });
        }, 1000)

        setTimeout(() => {
            for (var i = 0;i < mainAbility3missionId.length; i++) {
                console.log("SUB_AA_OpenHarmony_Clear_0500 mainAbility3missionId ====" + mainAbility3missionId[i]);
                missionManager.clearMission(parseInt(mainAbility3missionId[i]), (data, err) => {
                    console.log('SUB_AA_OpenHarmony_Clear_0500 clearMission errCode : '
                    + JSON.stringify(err) + " data: " + JSON.stringify(data));
                });
            }
        }, 1500)
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0500 getMissionInfos errCode : ' + JSON.stringify(err) +
                " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_0500 bundleName222222：" + data[i].want["abilityName"]);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3" ||
                    data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility") {
                        console.log("SUB_AA_OpenHarmony_Clear_0500 data[i]['lockedState']222222::::" +
                        data[i]['lockedState']);
                        if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3") {
                            mainAbility3.push(data[i]["missionId"])
                        } else {
                            mainAbility2.push(data[i]["missionId"])
                        }
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_0500 mainAbility2missionId.length:" + mainAbility3.length);
                console.log("SUB_AA_OpenHarmony_Clear_0500 mainAbility3missionId.length:" + mainAbility2.length);
                expect(mainAbility3.length == 0).assertTrue();
                expect(mainAbility2.length != 0).assertTrue();
                done()
            });
        }, 2000)
        var subscriber2 = "";
        commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_0500 Create subscriber2=======>：" + JSON.stringify(data));
            subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_0500 data2 is:" + JSON.stringify(subscriber2));
            await commonEvent.subscribe(subscriber2, subscriberCallBackMainAbility2Destory)
        })
        console.log("SUB_AA_OpenHarmony_Clear_0500 --- end")
    });
})