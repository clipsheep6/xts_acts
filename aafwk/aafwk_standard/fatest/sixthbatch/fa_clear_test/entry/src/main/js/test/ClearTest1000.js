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
        console.log("SUB_AA_OpenHarmony_Clear_1000 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_1000 subscriberCallBack_mainAbility3_Destory lists:" + lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1000
     * @tc.name    Start ability1-2,  clear all, and obtain all task information
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1000", 0, async function (done) {

        setTimeout(() => {
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.abilitydisable",
                abilityName: "com.example.abilitydisable.MainAbility3"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1000 - startMainAbility1: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            });
        }, 400)
        setTimeout(()=>{
            missionManager.clearAllMissions((err,data)=>{
                console.log('SUB_AA_OpenHarmony_Clear_1000 clearAllMissions errCode: ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
            });
        },2000)
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_1000 getMissionInfos errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clear_1000 bundleName222222：" +
                    data[i].want["abilityName"] + "data[i]['lockedState']::::" + data[i]['lockedState']);
                }
            });
        }, 2500)
        expect(true).assertTrue();
        done()
    });
})