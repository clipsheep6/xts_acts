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

import { describe, beforeAll, it, expect } from '@ohos/hypium'

let ERROR_CODE_OK = 0;
let ERROR_CODE_SET_MORE_THAN_ONCE = 16000068
let ERROR_CODE_INVALID_PARAMETER = 401
let context;
export default function processCacheTest() {
  describe('processCacheTest', function () {
    beforeAll(function () {
      context = globalThis.abilityContext;
    })

    /**
     * @tc.number: System_API_Test_processCacheTest_0100
     * @tc.name: Call setSupportedProcessCache.
     * @tc.desc: The function call should return invalid parameter error.
     * @tc.level   3
     */
    it('System_API_Test_processCacheTest_0100', 0, function (done) {
      let TAG = 'System_API_Test_processCacheTest_0100';
      let applicationContext = context.getApplicationContext();
      let finishFlag = 0;
      try {
        applicationContext.setSupportedProcessCache("hello");
      } catch (error) {
        console.log(TAG + " error: " + error.code + ", " + error.message);
        expect(error.code).assertEqual(ERROR_CODE_INVALID_PARAMETER);
        finishFlag = 1;
      }
      expect(finishFlag).assertEqual(1);
      done();
    })

    /**
     * @tc.number: System_API_Test_processCacheTest_0200
     * @tc.name: Call setSupportedProcessCache.
     * @tc.desc: The function call should return invalid parameter error.
     * @tc.level   3
     */
    it('System_API_Test_processCacheTest_0200', 0, function (done) {
      let TAG = 'System_API_Test_processCacheTest_0200';
      let applicationContext = context.getApplicationContext();
      let finishFlag = 0;
      try {
        applicationContext.setSupportedProcessCache();
      } catch (error) {
        console.log(TAG + " error: " + error.code + ", " + error.message);
        expect(error.code).assertEqual(ERROR_CODE_INVALID_PARAMETER);
        finishFlag = 1;
      }
      expect(finishFlag).assertEqual(1);
      done();
    })

    /**
     * @tc.number: System_API_Test_processCacheTest_0300
     * @tc.name: Call setSupportedProcessCache.
     * @tc.desc: The function call should return successfully.
     * @tc.level   3
     */
    it('System_API_Test_processCacheTest_0300', 0, function (done) {
      let TAG = 'System_API_Test_processCacheTest_0300';
      let applicationContext = context.getApplicationContext();
      try {
        applicationContext.setSupportedProcessCache(false);
        done();
      } catch (error) {
        console.log(TAG + " error: " + error.code + ", " + error.message);
        expect(true).assertFalse();
      }
    })

    /**
     * @tc.number: System_API_Test_processCacheTest_0400
     * @tc.name: Call setSupportedProcessCache.
     * @tc.desc: The function call should return error when set more than once.
     * @tc.level   3
     */
    it('System_API_Test_processCacheTest_0400', 0, function (done) {
      let TAG = 'System_API_Test_processCacheTest_0400';
      let applicationContext = context.getApplicationContext();
      let finishFlag = 0;
      try {
        applicationContext.setSupportedProcessCache(false);
      } catch (error) {
        console.log(TAG + " error: " + error.code + ", " + error.message);
        expect(error.code).assertEqual(ERROR_CODE_SET_MORE_THAN_ONCE);
        finishFlag = 1;
      }
      expect(finishFlag).assertEqual(1);
      done();
    })
  })
}