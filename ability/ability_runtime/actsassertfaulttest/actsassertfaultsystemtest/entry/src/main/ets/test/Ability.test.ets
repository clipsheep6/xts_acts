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
import wantConstant from '@ohos.app.ability.wantConstant';
import systemParameterEnhance from '@ohos.systemParameterEnhance';

const TAG = 'ActsAssertFaultTest SUB_Ability_AbilityRuntime_AssertFaultTest';

export default function abilityTest() {
  describe('ActsAssertFaultTest', () => {
    let functionEnable = '';
    /*
     * @tc.number: SUB_Ability_AbilityRuntime_AssertFaultTest_0500
     * @tc.name: Notify Debug Assert Result interface test
     * @tc.desc: Configure product configuration items and system applications with permissions. The parameter
     *           requestAssertFaultId is '123456', and an error code of 16000050 is returned.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityRuntime_AssertFaultTest_0500', 0, async (done: () => void) => {
      try {
        functionEnable = systemParameterEnhance.getSync('persisit.sys.abilityms.support_assert_fault_dialog', 'false');
        console.log(TAG, `_0500 functionEnable: ${functionEnable}`);
      } catch (err) {
        console.error(TAG, `_0500 getSync failed, error: ${JSON.stringify(err)}`);
      }
      if (functionEnable === 'false') {
        try {
          let status = abilityManager.UserStatus.ASSERT_TERMINATE;
          expect(status).assertEqual(0);
          abilityManager.notifyDebugAssertResult('123456', status).then(() => {
            console.log(TAG, '_0500 notifyDebugAssertResult success');
            expect().assertFail();
            done();
          }).catch((err: BusinessError) => {
            console.error(TAG, `_0500 notifyDebugAssertResult failed, error: ${JSON.stringify(err)}`);
            expect(err.code).assertEqual(16000050);
            done();
          })
        } catch (error) {
          console.error(TAG, `_0500 try notifyDebugAssertResult failed, error: ${JSON.stringify(error)}`);
          expect().assertFail();
          done();
        }
      } else if (functionEnable === 'true') {
        console.log(TAG, '_0500 functionEnable is true');
        expect(true).assertEqual(true);
        done();
      } else {
        console.error(TAG, '_0500 try functionEnable wrong param');
        expect().assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_AssertFaultTest_0600
     * @tc.name: Notify Debug Assert Result interface test
     * @tc.desc: Configure product configuration items and system applications with permissions. The parameter
     *           requestAssertFaultId is '1234ab', and an error code of 401 is returned.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityRuntime_AssertFaultTest_0600', 0, async (done: () => void) => {
      try {
        functionEnable = systemParameterEnhance.getSync('persisit.sys.abilityms.support_assert_fault_dialog', 'false');
        console.log(TAG, `_0600 functionEnable: ${functionEnable}`);
      } catch (err) {
        console.error(TAG, `_0600 getSync failed, error: ${JSON.stringify(err)}`);
      }
      if (functionEnable === 'false' || functionEnable === 'true') {
        try {
          let status = abilityManager.UserStatus.ASSERT_RETRY;
          expect(status).assertEqual(2);
          abilityManager.notifyDebugAssertResult('1234ab', status).then(() => {
            console.log(TAG, '_0600 notifyDebugAssertResult success.');
            expect().assertFail();
            done();
          }).catch((err: BusinessError) => {
            console.error(TAG, `_0600 notifyDebugAssertResult failed, error: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        } catch (error) {
          console.error(TAG, `_0600 try notifyDebugAssertResult failed, err: ${JSON.stringify(error)}`);
          expect(error.code).assertEqual(401);
          done();
        }
      } else {
        console.error(TAG, '_0600 try functionEnable wrong param');
        expect().assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_AssertFaultTest_0700
     * @tc.name: Notify Debug Assert Result interface test
     * @tc.desc: Configure product configuration items and system applications with permissions. The parameter
     *           requestAssertFaultId is '', and an error code of 401 is returned.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityRuntime_AssertFaultTest_0700', 0, async (done: () => void) => {
      try {
        functionEnable = systemParameterEnhance.getSync('persisit.sys.abilityms.support_assert_fault_dialog', 'false');
        console.log(TAG, `_0700 functionEnable: ${functionEnable}`);
      } catch (err) {
        console.error(TAG, `_0700 getSync failed, error: ${JSON.stringify(err)}`);
      }
      if (functionEnable === 'false' || functionEnable === 'true') {
        try {
          let status = abilityManager.UserStatus.ASSERT_CONTINUE;
          expect(status).assertEqual(1);
          abilityManager.notifyDebugAssertResult('', status).then(() => {
            console.log(TAG, '_0700 notifyDebugAssertResult success.');
            expect().assertFail();
            done();
          }).catch((err: BusinessError) => {
            console.error(TAG, `_0700 notifyDebugAssertResult failed, error: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        } catch (error) {
          console.error(TAG, `_0700 try notifyDebugAssertResult failed, err: ${JSON.stringify(error)}`);
          expect(error.code).assertEqual(401);
          done();
        }
      } else {
        console.error(TAG, '_0700 try functionEnable wrong param');
        expect().assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_AssertFaultTest_0800
     * @tc.name: Notify Debug Assert Result interface test
     * @tc.desc: Configure product configuration items and system applications with permissions. The parameter
     *           requestAssertFaultId is '0', and an error code of 401 is returned.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityRuntime_AssertFaultTest_0800', 0, async (done: () => void) => {
      try {
        functionEnable = systemParameterEnhance.getSync('persisit.sys.abilityms.support_assert_fault_dialog', 'false');
        console.log(TAG, `_0800 functionEnable: ${functionEnable}`);
      } catch (err) {
        console.error(TAG, `_0800 getSync failed, error: ${JSON.stringify(err)}`);
      }
      if (functionEnable === 'false' || functionEnable === 'true') {
        try {
          let status = abilityManager.UserStatus.ASSERT_TERMINATE;
          expect(status).assertEqual(0);
          abilityManager.notifyDebugAssertResult('0', status).then(() => {
            console.log(TAG, '_0800 notifyDebugAssertResult success.');
            expect().assertFail();
            done();
          }).catch((err: BusinessError) => {
            console.error(TAG, `_0800 notifyDebugAssertResult failed, error: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        } catch (error) {
          console.error(TAG, `_0800 try notifyDebugAssertResult failed, err: ${JSON.stringify(error)}`);
          expect(error.code).assertEqual(401);
          done();
        }
      } else {
        console.error(TAG, '_0800 try functionEnable wrong param');
        expect().assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_AssertFaultTest_0900
     * @tc.name: Notify Debug Assert Result interface test
     * @tc.desc: Configure product configuration items and system applications with permissions. The parameter
     *           requestAssertFaultId is undefined, and an error code of 401 is returned.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityRuntime_AssertFaultTest_0900', 0, async (done: () => void) => {
      try {
        functionEnable = systemParameterEnhance.getSync('persisit.sys.abilityms.support_assert_fault_dialog', 'false');
        console.log(TAG, `_0900 functionEnable: ${functionEnable}`);
      } catch (err) {
        console.error(TAG, `_0900 getSync failed, error: ${JSON.stringify(err)}`);
      }
      if (functionEnable === 'false' || functionEnable === 'true') {
        try {
          let status = abilityManager.UserStatus.ASSERT_TERMINATE;
          expect(status).assertEqual(0);
          abilityManager.notifyDebugAssertResult(undefined, status).then(() => {
            console.log(TAG, '_0900 notifyDebugAssertResult success.');
            expect().assertFail();
            done();
          }).catch((err: BusinessError) => {
            console.error(TAG, `_0900 notifyDebugAssertResult failed, error: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        } catch (error) {
          console.error(TAG, `_0900 try notifyDebugAssertResult failed, err: ${JSON.stringify(error)}`);
          expect(error.code).assertEqual(401);
          done();
        }
      } else {
        console.error(TAG, '_0900 try functionEnable wrong param');
        expect().assertFail();
        done();
      }
    })

    /*
     * @tc.number: SUB_Ability_AbilityRuntime_AssertFaultTest_1000
     * @tc.name: Notify Debug Assert Result interface test
     * @tc.desc: Configure product configuration items and system applications with permissions. The parameter
     *           status is undefined, and an error code of 401 is returned.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('SUB_Ability_AbilityRuntime_AssertFaultTest_1000', 0, async (done: () => void) => {
      try {
        functionEnable = systemParameterEnhance.getSync('persisit.sys.abilityms.support_assert_fault_dialog', 'false');
        console.log(TAG, `_1000 functionEnable: ${functionEnable}`);
      } catch (err) {
        console.error(TAG, `_1000 getSync failed, error: ${JSON.stringify(err)}`);
      }
      if (functionEnable === 'false' || functionEnable === 'true') {
        try {
          let sessionId = wantConstant.Params.ASSERT_FAULT_SESSION_ID;
          console.log(TAG, `_1000 sessionId is ${sessionId}`);
          expect(sessionId).assertEqual('ohos.ability.params.asssertFaultSessionId');
          let status = abilityManager.UserStatus.ASSERT_TERMINATE;
          expect(status).assertEqual(0);
          abilityManager.notifyDebugAssertResult('123456', undefined).then(() => {
            console.log(TAG, '_1000 notifyDebugAssertResult success.');
            expect().assertFail();
            done();
          }).catch((err: BusinessError) => {
            console.error(TAG, `_1000 notifyDebugAssertResult failed, error: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        } catch (error) {
          console.error(TAG, `_1000 try notifyDebugAssertResult failed, err: ${JSON.stringify(error)}`);
          expect(error.code).assertEqual(401);
          done();
        }
      } else {
        console.error(TAG, '_1000 try functionEnable wrong param');
        expect().assertFail();
        done();
      }
    })
  })
}