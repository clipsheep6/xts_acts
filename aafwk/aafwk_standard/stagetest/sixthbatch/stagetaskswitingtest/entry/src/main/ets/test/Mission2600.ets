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
import commonEvent from '@ohos.commonevent'
import missionManager from '@ohos.application.missionManager'

export default function abilityTest2600(abilityContext) {
  describe('AbilityTest', function () {
    console.log("-------------start test---------------");
    var TAG = "";

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2600
     * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2600', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
        var missionId = "2";
        try {
            missionManager.moveMissionToFront(missionId, (error, data) => {
                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600 error: " +
                JSON.stringify(error) + ", data: " + JSON.stringify(data));
                expect(error.code == -1).assertTrue();
                done();
            })
        } catch (error) {
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600: error " + error);
        }
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
    });
   }
)}
