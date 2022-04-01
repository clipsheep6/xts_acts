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

function clearAllMissions(){
    setTimeout(()=>{
    missionManager.clearAllMissions((err,data)=>{
        console.log('SUB_AA_OpenHarmony_Clear_0700 clearAllMissions errCode: ' +
        JSON.stringify(err) + " data: " + JSON.stringify(data));
    });
    },4000)
}

function startAility(){
    setTimeout(()=>{
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility3"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0700 - startMainAbility2: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
    },100)
    setTimeout(()=>{
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility4"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0700 - startMainAbility3: '
            + JSON.stringify(error) + ", " + JSON.stringify(data));
        });
    },500)
}


describe('clearTests0700', function () {
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
        console.log("SUB_AA_OpenHarmony_Clear_0700 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_0700 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0700
     * @tc.name    Start ability1-3, lock ability1, and obtain all task information.
                       Close Ability3, clear all, and obtain all task information
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_0700", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_0700-------------");
        var mainAbility2missionId = []
        var mainAbility3missionId = []
        var missionIdThread = []
        startAility()
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0700 getMissionInfos errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_0700 bundleName222222：" +
                    data[i].want["abilityName"] + "data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility" ||
                    data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3"
                    || data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility4") {
                        console.log("SUB_AA_OpenHarmony_Clear_0700 data[i]['lockedState']::::" +
                        data[i]['lockedState']);
                        expect(data[i]['lockedState'] == false).assertTrue();
                        if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility4") {
                            mainAbility3missionId.push(data[i]["missionId"])
                        } else {
                            mainAbility2missionId.push(data[i]["missionId"])
                        }
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_0700 mainAbility2missionId.length:" + mainAbility2missionId);
                console.log("SUB_AA_OpenHarmony_Clear_0700 mainAbility3missionId.length:" + mainAbility3missionId);
            });
        }, 900)
        setTimeout(() => {
            for (var i = 0;i < mainAbility2missionId.length; i++) {
                console.log('SUB_AA_OpenHarmony_Clear_0700 lockMission1 : ' + parseInt(mainAbility2missionId[i]));
                missionManager.lockMission(parseInt(mainAbility2missionId[i]), (err, data) => {
                    console.log('SUB_AA_OpenHarmony_Clear_0700 lockMission1 errCode : ' +
                    JSON.stringify(err) + " data: " + JSON.stringify(data));
                })
            }
        }, 1500)
        clearAllMissions()
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0700 getMissionInfos errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_0700 bundleName222222：" +
                    data[i].want["abilityName"] + "data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3") {
                        console.log("SUB_AA_OpenHarmony_Clear_0700 data[i]['lockedState']::::" +
                        data[i]['lockedState']);
                        expect(data[i]['lockedState'] == true).assertTrue();
                    }
                }
            });
        }, 5000)

        var subscriber2 = "";
        commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_0700 Create subscriber2=======>：" + JSON.stringify(data));
            subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_0700 data2 is:" + JSON.stringify(subscriber2));
            await commonEvent.subscribe(subscriber2, subscriberCallBackMainAbility2Destory)
        })
        expect(true).assertTrue();
        done()
    });
})