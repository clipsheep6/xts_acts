/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import abilityManager from '@ohos.app.ability.abilityManager';
import { BusinessError } from '@ohos.base';
import systemParameterEnhance from '@ohos.systemParameterEnhance';

const TAG = 'ActsAssertFaultTest SUB_Ability_AbilityRuntime_AssertFaultTest';

export default function abilityTest() {
  describe('ActsAssertFaultTest', () => {
    let functionEnable = '';
    /*
     * @tc.number: SUB_Ability_AbilityRuntime_AssertFaultTest_1100
     * @tc.name: Notify Debug Assert Result interface test
     * @tc.desc: Configure product configuration items, system applications without permissions,
     *           and return error code 201.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityRuntime_AssertFaultTest_1100', 0, async (done: () => void) => {
      try {
        functionEnable = systemParameterEnhance.getSync('persisit.sys.abilityms.support_assert_fault_dialog', 'false');
        console.log(TAG, `_1100 functionEnable: ${functionEnable}`);
      } catch (err) {
        console.error(TAG, `_1100 getSync failed, error: ${JSON.stringify(err)}`);
      }
      if (functionEnable === 'true') {
        try {
          let status = abilityManager.UserStatus.ASSERT_TERMINATE;
          expect(status).assertEqual(0);
          abilityManager.notifyDebugAssertResult('123456', status).then(() => {
            console.log(TAG, '_1100 notifyDebugAssertResult success.');
            expect().assertFail();
            done();
          }).catch((err: BusinessError) => {
            console.error(TAG, `_1100 notifyDebugAssertResult failed, error: ${JSON.stringify(err)}`);
            expect(err.code).assertEqual(201);
            done();
          })
        } catch (error) {
          console.error(TAG, `_1100 try notifyDebugAssertResult failed, err: ${JSON.stringify(error)}`);
          expect().assertFail();
          done();
        }
      } else if (functionEnable === 'false') {
        console.log(TAG, '_1100 functionEnable is false');
        expect(true).assertEqual(true);
        done();
      } else {
        console.error(TAG, '_1100 try functionEnable wrong param');
        expect().assertFail();
        done();
      }
    })
  })
}