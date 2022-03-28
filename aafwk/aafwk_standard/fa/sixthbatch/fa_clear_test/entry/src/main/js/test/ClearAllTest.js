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


describe('clearAll', function () {

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clearall
     * @tc.name    unlock all ability and clear all ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clearall", 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Clearall-------------");
        var mainAbility3missionId = []
        setTimeout(() => {
            missionManager.getMissionInfos("", 15, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clearall getMissionInfos errCode : ' + JSON.stringify(err) +
                " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clearall bundleName222222：" + data[i].want["abilityName"] +
                    "data[i]['lockedState']::::" + data[i]['lockedState']);
                    mainAbility3missionId.push(data[i]["missionId"])
                }
                console.log("SUB_AA_OpenHarmony_Clearall mainAbility3missionId.length:" + mainAbility3missionId);
            });
        }, 1500)
        setTimeout(() => {
            for (var i = 0;i < mainAbility3missionId.length; i++) {
                console.log("SUB_AA_OpenHarmony_Clearall mainAbility3missionId ====" + mainAbility3missionId[i]);
                missionManager.unlockMission(parseInt(mainAbility3missionId[i]), (data, err) => {
                    console.log('SUB_AA_OpenHarmony_Clearall unlockMission errCode : '
                    + JSON.stringify(err) + " data: " + JSON.stringify(data));
                });
            }
        }, 2000)
        setTimeout(() => {
            missionManager.clearAllMissions((err, data) => {
                console.log('SUB_AA_OpenHarmony_Clearall clearAllMissions errCode: ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
            });
        }, 3000)
        setTimeout(() => {
            missionManager.getMissionInfos("", 10, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Clearall getMissionInfos errCode : ' + JSON.stringify(err) +
                " data: " + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_Clearall bundleName222222：" + data[i].want["abilityName"] +
                    "data[i]['lockedState']::::" + data[i]['lockedState']);
                }
            });
        }, 4000)
        done()
    });
})