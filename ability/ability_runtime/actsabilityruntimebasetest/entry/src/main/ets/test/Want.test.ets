/**
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';

export default function WantTest() {
  describe('ActsWantTest', function () {

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time))
    }

    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(function () {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(function () {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(function () {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(function () {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0200
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0500
     * @tc.desc      : test startAbility  want FD
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('AbilityBase_WantParam_WantParametersJs_0200', 0, async function (done) {
      let fd: number = 0;
      let filePath = '/data/storage/el2/base/haps/test_pic.png';

      try {
        let file = fs.openSync(filePath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        fs.writeSync(fd, `dadas342412`);
        fd = file.fd
        console.info("AbilityBase_WantParam_WantParametersJs_0200 file fd: " + file.fd);

        expect(fd).assertLargerOrEqual(1)

        console.log(`AbilityBase_WantParam_WantParametersJs_0200 fd: ${JSON.stringify(fd)}`);
        let want = {
          deviceId: '', // deviceId为空表示本设备
          bundleName: 'com.ohos.wantxtstest',
          abilityName: 'WantAbility',
          parameters: {
            'keyFd': {
              'type': 'FD', 'value': fd
            } // {'type':'FD', 'value':fd}是固定用法，用于表示该数据是FD
          }
        };

        await globalThis.abilityDelegator.startAbility(want).then(() => {
          console.info('AbilityBase_WantParam_WantParametersJs_0200 start successful.');
        }).catch((error) => {
          console.log(`AbilityBase_WantParam_WantParametersJs_0200 error.code: ` + error.code);
          expect().assertFail();
          done();
        })
        await sleep(1500);
        const parameters = globalThis.parameters;
        console.info('AbilityBase_WantParam_WantParametersJs_0200 parameters: ' + JSON.stringify(parameters));
        expect(parameters.keyFd.type).assertEqual("FD");
        expect(parameters.keyFd.value).assertEqual(fd);
        let abilityWantContext: common.UIAbilityContext = globalThis.abilityWantContext;
        abilityWantContext.terminateSelf();
        await sleep(1000);

        console.log(`AbilityBase_WantParam_WantParametersJs_0200 success`);
        done();
      } catch (err) {
        console.error(`AbilityBase_WantParam_WantParametersJs_0200 err: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      } finally {
        // fs.unlink(filePath).then(() => {
        //   console.info("AbilityBase_WantParam_WantParametersJs_0200 remove file succeed");
        // }).catch((err) => {
        //   console.info("AbilityBase_WantParam_WantParametersJs_0200 remove file failed with error message: " + err.message + ", error code: " + err.codeor);
        // });
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0500
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0500
     * @tc.desc      : test startAbility  want Array
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('AbilityBase_WantParam_WantParametersJs_0500', 0, async function (done) {
      try {
        let want = {
          'deviceId': '', // deviceId为空表示本设备
          'bundleName': 'com.ohos.wantxtstest',
          'abilityName': 'WantAbility',
          'parameters': {
            'keyArrayObj': {
              'data': [1, 2, 3]
            }
          }
        };

        globalThis.abilityDelegator.startAbility(want).then(() => {
          console.info('AbilityBase_WantParam_WantParametersJs_0500 start successful.');
        }).catch((error) => {
          console.log(`AbilityBase_WantParam_WantParametersJs_0500 error.code: ` + error.code);
        })
        await sleep(1500);
        const parameters = globalThis.parameters;
        console.info('AbilityBase_WantParam_WantParametersJs_0500 parameters: ' + JSON.stringify(parameters));
        expect(parameters.keyArrayObj.data[0]).assertEqual(1);
        expect(parameters.keyArrayObj.data[1]).assertEqual(2);
        expect(parameters.keyArrayObj.data[2]).assertEqual(3);
        let abilityWantContext: common.UIAbilityContext = globalThis.abilityWantContext;
        abilityWantContext.terminateSelf();
        await sleep(1000);
        //
        console.log(`AbilityBase_WantParam_WantParametersJs_0500 success`);
        done();

      } catch (err) {
        console.log(`AbilityBase_WantParam_WantParametersJs_0500 fail: ` + err);
        expect().assertFail();
        done();
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0700
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0700
     * @tc.desc      : test startAbility wrong want
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('AbilityBase_WantParam_WantParametersJs_0700', 0, async function (done) {
      try {
        let want = {
          'deviceId': '', // deviceId为空表示本设备
          'bundleName': 'com.ohos.wantxtstest',
          'abilityName': 'WantAbility',
          'parameters': {
            'keyFd': {
              'type': 'FD', 'value': 0
            } // {'type':'FD', 'value':fd}是固定用法，用于表示该数据是FD
          }
        };

        await globalThis.abilityDelegator.startAbility(want).then(() => {
          console.info(`AbilityBase_WantParam_WantParametersJs_0700 start successful. `);
          expect().assertFail();
          done()
        }).catch((error) => {
          console.log(`AbilityBase_WantParam_WantParametersJs_0700 error :${JSON.stringify(error)}}`);
          expect(error.code === undefined).assertFalse();
          expect(error.code).assertEqual(2097167)
          done()
        })

      } catch (err) {
        console.log(`AbilityBase_WantParam_WantParametersJs_0700 fail: ${err}`);
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0800
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0800
     * @tc.desc      : test startAbility wrong want
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('AbilityBase_WantParam_WantParametersJs_0800', 0, async function (done) {
      try {
        let want = {
          'deviceId': '', // deviceId为空表示本设备
          'bundleName': 'com.ohos.wantxtstest',
          'abilityName': 'WantAbility',
          'parameters': {
            'keyFd': {
              'type': 'FD', 'value': -1
            } // {'type':'FD', 'value':fd}是固定用法，用于表示该数据是FD
          }
        };

        await globalThis.abilityDelegator.startAbility(want).then(() => {
          console.info(`AbilityBase_WantParam_WantParametersJs_0800 start successful. `);
          expect().assertFail();
          done()
        }).catch((error) => {
          console.log(`AbilityBase_WantParam_WantParametersJs_0800 error :${JSON.stringify(error)}}`);
          expect(error.code === undefined).assertFalse();
          expect(error.code).assertEqual(2097167)
          done()
        })

      } catch (err) {
        console.log(`AbilityBase_WantParam_WantParametersJs_0800 fail: ${err}`);
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityBase_WantParam_WantParametersJs_0900
     * @tc.name      : AbilityBase_WantParam_WantParametersJs_0900
     * @tc.desc      : test startAbility wrong want : err
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('AbilityBase_WantParam_WantParametersJs_0900', 0, async function (done) {
      try {
        let want = {
          'deviceId': '', // deviceId为空表示本设备
          'bundleName': 'com.ohos.wantxtstest',
          'abilityName': 'WantAbility',
          'parameters': {
            'keyFd': {
              'type': 'FD', 'value': "err"
            } // {'type':'FD', 'value':fd}是固定用法，用于表示该数据是FD
          }
        };

        await globalThis.abilityDelegator.startAbility(want).then(() => {
          console.info(`AbilityBase_WantParam_WantParametersJs_0900 start successful. `);
          expect().assertFail();
          done()
        }).catch((error) => {
          console.log(`AbilityBase_WantParam_WantParametersJs_0900 error :${JSON.stringify(error)}}`);
          expect(error.code === undefined).assertFalse();
          expect(error.code).assertEqual(2097167)
          done()
        })

      } catch (err) {
        console.log(`AbilityBase_WantParam_WantParametersJs_0900 fail: ${err}`);
        done();
      }
    })

  })
}