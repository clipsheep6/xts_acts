/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import { describe, it, expect } from '@ohos/hypium'
import AbilityConstant from '@ohos.app.ability.AbilityConstant'

let TAG;
export default function abilityConstantTest() {
  describe('AbilityConstantTest', function () {

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6200
       * @tc.name    Verify the enumeration value launchreason.start UNKNOWN
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6200", 0, async function (done) {
      TAG = 'SUB_AA_OpenHarmony_AbilityStart_6200'
      console.info(`------------------logMessage ${TAG} start------------------`);
      console.info(`${TAG} LaunchReason.UNKNOWN: ${AbilityConstant.LaunchReason.UNKNOWN}`);
      expect(AbilityConstant.LaunchReason.UNKNOWN == 0).assertTrue();
      done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6300
       * @tc.name    Verify the enumeration value launchreason.START_ABILITY
       * @tc.desc    Function test
       * @tc.level   3
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6300", 0, async function (done) {
      TAG = 'SUB_AA_OpenHarmony_AbilityStart_6300'
      console.info(`------------------logMessage ${TAG} start------------------`);
      console.info(`${TAG} LaunchReason.START_ABILITY: ${AbilityConstant.LaunchReason.START_ABILITY}`);
      expect(AbilityConstant.LaunchReason.START_ABILITY == 1).assertTrue();
      done();
    });


    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6400
       * @tc.name    Verify the enumeration values LaunchReason. CALL
       * @tc.desc    Function test
       * @tc.level   3
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6400", 0, async function (done) {
      TAG = 'SUB_AA_OpenHarmony_AbilityStart_6400'
      console.info(`------------------logMessage ${TAG} start------------------`);
      console.info(`${TAG} LaunchReason.CALL: ${AbilityConstant.LaunchReason.CALL}`);
      expect(AbilityConstant.LaunchReason.CALL == 2).assertTrue();
      done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6500
     * @tc.name    Verify the enumeration values LaunchReason. CONTINUATION
     * @tc.desc    Function test
     * @tc.level   3
     */
    it("SUB_AA_OpenHarmony_AbilityStart_6500", 0, async function (done) {
      TAG = 'SUB_AA_OpenHarmony_AbilityStart_6500'
      console.info(`------------------logMessage ${TAG} start------------------`);
      console.info(`${TAG} LaunchReason.CONTINUATION: ${AbilityConstant.LaunchReason.CONTINUATION}`);
      expect(AbilityConstant.LaunchReason.CONTINUATION == 3).assertTrue();
      done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6600
       * @tc.name    Verify the enumeration values LastExitReason.UNKNOWN
       * @tc.desc    Function test
       * @tc.level   3
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6600", 0, async function (done) {
      TAG = 'SUB_AA_OpenHarmony_AbilityStart_6600'
      console.info(`------------------logMessage ${TAG} start------------------`);
      console.info(`${TAG} LastExitReason.UNKNOWN: ${AbilityConstant.LastExitReason.UNKNOWN}`);
      expect(AbilityConstant.LastExitReason.UNKNOWN == 0).assertTrue();
      done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6700
       * @tc.name    Verify the enumeration values LastExitReason.ABILITY_NOT_RESPONDING
       * @tc.desc    Function test
       * @tc.level   3
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6700", 0, async function (done) {
      TAG = 'SUB_AA_OpenHarmony_AbilityStart_6700'
      console.info(`------------------logMessage ${TAG} start------------------`);
      console.info(`${TAG} LastExitReason.ABILITY_NOT_RESPONDING: 
      ${AbilityConstant.LastExitReason.ABILITY_NOT_RESPONDING}`);
      expect(AbilityConstant.LastExitReason.ABILITY_NOT_RESPONDING == 1).assertTrue();
      done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6800
       * @tc.name    Verify the enumeration values LastExitReason.NORMAL
       * @tc.desc    Function test
       * @tc.level   3
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6800", 0, async function (done) {
      TAG = 'SUB_AA_OpenHarmony_AbilityStart_6800'
      console.info(`------------------logMessage  ${TAG} start------------------`);
      console.info(`${TAG} LastExitReason.NORMAL: ${AbilityConstant.LastExitReason.NORMAL}`);
      expect(AbilityConstant.LastExitReason.NORMAL == 2).assertTrue();
      done();
    });
  })
}