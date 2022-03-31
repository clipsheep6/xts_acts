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
import ability from '@ohos.application.Ability'
import wantConstant from '@ohos.ability.wantConstant'
import commonEvent from '@ohos.commonevent'

export default function clear1600Test(abilityContext) {
  describe('ActsAbilityTest', function () {
    console.log('AbilityDisableTests --- start')

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
}