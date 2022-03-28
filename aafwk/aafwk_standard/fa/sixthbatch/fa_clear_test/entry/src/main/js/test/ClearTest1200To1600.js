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

describe('clearTests1200to1600', function () {

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1200
     * @tc.name    missionId for undefined
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1200", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Clear_1200-------------------");
        missionManager.clearMission(undefined, (data, err) => {
            console.log('SUB_AA_OpenHarmony_Clear_1200 asyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(data["code"] == -1).assertTrue();
        })
        done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1300
     * @tc.name    MissionId: does not exist
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1300", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Clear_1300-------------------");
        missionManager.clearMission("xxxx", (data, err) => {
            console.log('SUB_AA_OpenHarmony_Clear_1300 asyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(data["code"] == -1).assertTrue();
        })
        done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1400
     * @tc.name    MissionId is a string number
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1400", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Clear_1400-------------------");
        missionManager.clearMission("123456", (data, err) => {
            console.log('SUB_AA_OpenHarmony_Clear_1400 asyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(data["code"] == -1).assertTrue();
        })
        done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1500
     * @tc.name    The missionId is a non-number string
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1500", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Clear_1500-------------------");
        missionManager.clearMission("abc@@#$", (data, err) => {
            console.log('SUB_AA_OpenHarmony_Clear_1500 asyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(data["code"] == -1).assertTrue();
        })
        done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_1600
     * @tc.name    MissionId is an existing floating point type
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_1600", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Clear_1600-------------------");
        missionManager.clearMission(1.1234, (data, err) => {
            console.log('SUB_AA_OpenHarmony_Clear_1600 asyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(data["code"] == -1).assertTrue();
        })
        done();
    });
})