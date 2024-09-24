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
import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';
import systemParameterEnhance from '@ohos.systemParameterEnhance';
import Want from '@ohos.app.ability.Want';
import wantConstant from '@ohos.app.ability.wantConstant';

let deviceType = systemParameterEnhance.getSync('const.product.devicetype');
export default function startMultiInstanceTest() {
  describe('ActsMultiInstanceTest', () => {
    beforeAll(() => {
    });
    beforeEach(() => {
    });
    afterEach(async () => {
    });
    afterAll(() => {
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_CreateInstance_0200
     * @tc.name   : Call UIAbilityContext startAbility
     * @tc.desc   : expect multi instance to start.
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('SUB_Ability_AbilityRuntime_CreateInstance_0200', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_CreateInstance_0200`;
      console.log(`${tag}, it begin`);
      if (deviceType != '2in1') {
        done();
        return;
      }

      let want: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          'ohos.extra.param.key.createAppInstance': true,
        }
      }
      try {
        globalThis.testAbilityContext.startAbility(want).then(() => {
          console.info('startAbility succeed');
        }).catch((err: BusinessError) => {
          console.error(`startAbility failed, cause: ${JSON.stringify(err)}`);
          let errCode = 16000080;
          expect(err.code).assertEqual(errCode);
          done();
        });
      } catch (err) {
        console.error(`${tag} error, errorCode: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_CreateInstance_0300
     * @tc.name   : Call UIAbilityContext startAbility
     * @tc.desc   : expect multi instance to start.
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('SUB_Ability_AbilityRuntime_CreateInstance_0300', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_CreateInstance_0300`;
      console.log(`${tag}, it begin`);
      if (deviceType != '2in1') {
        done();
        return;
      }

      let want: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          testCase: 300
        }
      }
      try {
        globalThis.testAbilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
          console.info('startAbilityForResult succeed');
          let errCode = 16000079;
          expect(data.resultCode).assertEqual(errCode);
          done();
        }).catch((err: BusinessError) => {
          console.error(`startAbilityForResult failed, cause: ${JSON.stringify(err)}`);
          expect().assertFail();
          done();
        });
      } catch (err) {
        console.error(`${tag} error, errorCode: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_CreateInstance_0400
     * @tc.name   : Call UIAbilityContext startAbility
     * @tc.desc   : expect multi instance to start.
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('SUB_Ability_AbilityRuntime_CreateInstance_0400', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_CreateInstance_0400`;
      console.log(`${tag}, it begin`);
      if (deviceType != '2in1') {
        done();
        return;
      }

      let want: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          testCase: 400
        }
      }
      try {
        globalThis.testAbilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
          console.info('startAbilityForResult succeed');
          let errCode = 16000077;
          expect(data.resultCode).assertEqual(errCode);
          done();
        }).catch((err: BusinessError) => {
          console.error(`startAbilityForResult failed, cause: ${JSON.stringify(err)}`);
          expect().assertFail();
          done();
        });
      } catch (err) {
        console.error(`${tag} error, errorCode: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_CreateInstance_0600
     * @tc.name   : Call UIAbilityContext startAbility
     * @tc.desc   : expect multi instance to start.
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('SUB_Ability_AbilityRuntime_CreateInstance_0600', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_CreateInstance_0600`;
      console.log(`${tag}, it begin`);
      if (deviceType != '2in1') {
        done();
        return;
      }

      let want: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          testCase: 600
        }
      }
      try {
        globalThis.testAbilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
          console.info('startAbilityForResult succeed');
          let resultCode = 600;
          expect(data.resultCode).assertEqual(resultCode);
          done();
        }).catch((err: BusinessError) => {
          console.error(`startAbilityForResult failed, cause: ${JSON.stringify(err)}`);
          expect().assertFail();
          done();
        });
      } catch (err) {
        console.error(`${tag} error, errorCode: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_StartInstance_0200
     * @tc.name   : Call UIAbilityContext startAbility
     * @tc.desc   : expect multi instance to start.
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('SUB_Ability_AbilityRuntime_StartInstance_0200', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_StartInstance_0200`;
      console.log(`${tag}, it begin`);
      if (deviceType != '2in1') {
        done();
        return;
      }

      let want: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          'ohos.extra.param.key.appInstance': "app_instance_20",
        }
      }
      try {
        globalThis.testAbilityContext.startAbility(want).then(() => {
          console.info('startAbility succeed');
        }).catch((err: BusinessError) => {
          console.error(`startAbility failed, cause: ${JSON.stringify(err)}`);
          let errCode = 16000076;
          expect(err.code).assertEqual(errCode);
          done();
        });
      } catch (err) {
        console.error(`${tag} error, errorCode: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    });

    /*
     * @tc.number : SUB_Ability_AbilityRuntime_StartInstance_0300
     * @tc.name   : Call UIAbilityContext startAbility
     * @tc.desc   : expect multi instance to start.
     * @tc.type   : Function
     * @tc.size   : MediumTest
     * @tc.level  : 3
     */
    it('SUB_Ability_AbilityRuntime_StartInstance_0300', 0, async (done: Function) => {
      let tag = `SUB_Ability_AbilityRuntime_StartInstance_0300`;
      console.log(`${tag}, it begin`);
      if (deviceType != '2in1') {
        done();
        return;
      }

      let want: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          'ohos.extra.param.key.appInstance': "app_instance_0",
          testCase: 301
        }
      }
      try {
        globalThis.testAbilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
          console.info('startAbilityForResult succeed');
          let resultCode = 301;
          expect(data.resultCode).assertEqual(resultCode);
          done();
        }).catch((err: BusinessError) => {
          console.error(`startAbilityForResult failed, cause: ${JSON.stringify(err)}`);
          expect().assertFail();
          done();
        });
      } catch (err) {
        console.error(`${tag} error, errorCode: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      }
    });

  })
}