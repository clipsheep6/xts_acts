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

describe('clearTests0900', function () {
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
        console.log("SUB_AA_OpenHarmony_Clear_0900 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_0900 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0900
     * @tc.name    Start ability1-3, lock ability1, and obtain all task information.
                       Close Ability3, clear all, and obtain all task information  after 0700
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_0900", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clear_0900-------------");
        var mainAbility3missionId = []
        setTimeout(()=>{
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.abilitydisable",
                abilityName: "com.example.abilitydisable.MainAbility3"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0900 - startMainAbility1: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            });
        },100)

        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0900 getMissionInfos errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_0900 bundleName222222：" +
                    data[i].want["abilityName"] + "data[i]['lockedState']::::" + data[i]['lockedState']);
                    if (data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility3") {
                        console.log("SUB_AA_OpenHarmony_Clear_0900 data[i]['lockedState']::::" +
                        data[i]['lockedState']);
                        mainAbility3missionId.push(data[i]["missionId"])
                    }
                }
                console.log("SUB_AA_OpenHarmony_Clear_0900 mainAbility3missionId.length:" + mainAbility3missionId);
            });
        }, 1500)

        setTimeout(() => {
            for (var i = 0;i < mainAbility3missionId.length; i++) {
                console.log("SUB_AA_OpenHarmony_Clear_0900 mainAbility3missionId ====" + mainAbility3missionId[i]);
                missionManager.clearMission(parseInt(mainAbility3missionId[i]), (data, err) => {
                    console.log('SUB_AA_OpenHarmony_Clear_0900 clearMission errCode : '
                    + JSON.stringify(err) + " data: " + JSON.stringify(data));
                    expect(data.code == 0).assertTrue();
                    done();
                });
            }
        }, 2500)
    });
})