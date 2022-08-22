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
import missionManager  from '@ohos.application.missionManager';
import abilityFeatureAbility from '@ohos.ability.featureAbility';
import bundleManager from '@ohos.bundle';
import appManager from "@ohos.application.appManager"
import commonEvent from '@ohos.commonEvent';
import {onDestroys} from "../MainAbility2/app.js"
import abilityManager from '@ohos.application.abilityManager'
import ConfigurationConstant from "@ohos.application.ConfigurationConstant";
import AbilityConstant from '@ohos.application.AbilityConstant'


function fns() {
    var missionIds = [];
    var missionIds4 = [];
    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility2"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 - startMainAbility2: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
            expect(err.code == 0).assertTrue();
        });
    }, 100)
    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility4"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 - startMainAbility4: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
            expect(err.code == 0).assertTrue();
        });
    }, 300)
    setTimeout(() => {
        abilityFeatureAbility.startAbility({ want: {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility3"
        } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 - startMainAbility3:  '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
            expect(err.code == 0).assertTrue();
        });
    }, 500)

    setTimeout(() => {
        missionManager.getMissionInfos("", 20, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 getMissionInfos errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            for (var i = 0;i < data.length; i++) {
                console.log("bundleName：" + data[i].want["abilityName"])
                if ( data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility4"
                || data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility") {
                    console.log("data[i]['lockedState']::::" + data[i]['lockedState']);
                    console.log("data[i].missionId" + data[i].missionId);
                    console.log("SUB_AA_OpenHarmony_Clear_0200, missionId:" + data[i].missionId);
                    missionIds.push(data[i].missionId);
                }
            }
        })
        console.log("SUB_AA_OpenHarmony_Clear_0200" + JSON.stringify(missionIds));
    }, 800)
    setTimeout(() => {
        console.log("SUB_AA_OpenHarmony_Clear_0600 lockMission1 missionIds[1]+++++123456::::"
        + missionIds + typeof missionIds)
        for (var i = 0;i < missionIds.length; i++) {
            missionManager.lockMission(parseInt(missionIds[i]), (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0600 lockMission1 errCode : '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
            });
        };
    }, 1200);

    setTimeout(() => {
        missionManager.getMissionInfos("", 20, (err, data) => {
            console.log("SUB_AA_OpenHarmony_Clear_0200, twosgetMissionInfos:" + JSON.stringify(data));
            console.log('SUB_AA_OpenHarmony_Clear_2400 data[i].want["abilityName"]2222' +
            data[i].want["abilityName"] + '::' + data[i]["missionId"]);
            console.log("SUB_AA_OpenHarmony_Clear_2400 data[i]['lockedState']::::" + data[i]['lockedState']);
        })
    }, 1500)

    setTimeout(() => {
        missionManager.getMissionInfos("", 20, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 getMissionInfos errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            for (var i = 0;i < data.length; i++) {
                console.log("bundleName：" + data[i].want["abilityName"])
                console.log('SUB_AA_OpenHarmony_Clear_2400 data[i].want["abilityName"]2222' +
                data[i].want["abilityName"] + '::' + data[i]["missionId"]);
                console.log("SUB_AA_OpenHarmony_Clear_2400 data[i]['lockedState']::::" + data[i]['lockedState']);
                if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility4") {
                    console.log("data[i]['lockedState']::::" + data[i]['lockedState']);
                    missionIds4.push(data[i].missionId)
                }
            }
        })
        console.log("SUB_AA_OpenHarmony_Clear_0200" + JSON.stringify(missionIds));
    }, 4000)
    setTimeout(() => {
        missionManager.moveMissionToFront(parseInt(missionIds4[0]), (err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 moveMissionToFront errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
        })
    }, 4200)
    setTimeout(() => {
        missionManager.clearAllMissions((err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 clearAllMissions errCode: ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));

        })
    }, 4500)
    setTimeout(() => {
        missionManager.getMissionInfos("", 20, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0200 getMissionInfos errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            for (var i = 0;i < data.length; i++) {
                console.log("bundleName：" + data[i].want["abilityName"])
                if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3" ||
                data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility4" ||
                data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility" ||
                data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility2") {
                    console.log("data[i]['lockedState']end::::" + data[i]['lockedState']);
                    expect(data[i]['lockedState'] == true).assertTrue();
                }
            }
            console.log('SUB_AA_OpenHarmony_Clear_0200 missionId：' +
            missionIds + typeof missionIds + ":::::" + missionIds[1] + typeof missionIds[1]);
        })
        console.log("SUB_AA_OpenHarmony_Clear_0200" +
        JSON.stringify(missionIds));
    }, 4800)
}

describe('ClearTests0100', function () {
    let lists = new Array()
    var ability2LifeEvents = {
        events: ["Application2MainAbility2_onDestroy",
        "singleton2EntryAbulity2_onHide",
        "singleton2EntryAbulity2_onActive",
        "singleton2EntryAbulity2_onInactive",
        "singleton2EntryAbility2_onDestroy",
        "singleton2EntryAbulity2_onShow",
        "Application2MainAbility2_onCreate",]
    };

    function subscriberCallBackMainAbility2Destory(err, data) {
        console.log("Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("subscriberCallBackMainAbility2Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0100
     * @tc.name    Start ability1-2, different applications and kill processes
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Clear_0100', 0, async function (done) {
        var subscriber2 = [];
        console.log("SUB_AA_OpenHarmony_Clear_0100 --- start")

        commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_0100 Create subscriber2=======>：" + JSON.stringify(data));
            subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_0100 data2 is:" + JSON.stringify(subscriber2));
            await commonEvent.subscribe(subscriber2, subscriberCallBackMainAbility2Destory)
        })
        fns()
        console.log("SUB_AA_OpenHarmony_Clear_0100 --- end")
        done()
    });
})