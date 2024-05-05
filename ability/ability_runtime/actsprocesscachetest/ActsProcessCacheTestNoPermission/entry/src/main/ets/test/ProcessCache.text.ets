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

let ERROR_CODE_NO_PERMISSIOn = 201
let context;
export default function processCacheTest() {
  describe('processCacheTest', function () {
    beforeAll(function () {
      context = globalThis.abilityContext;
    })

    /**
     * @tc.number: No_Permission_Test_processCacheTest_0100
     * @tc.name: Call setSupportedProcessCache.
     * @tc.desc: The function call should return no permission error.
     * @tc.level   3
     */
    it('No_Permission_Test_processCacheTest_0100', 0, function (done) {
      let TAG = 'No_Permission_Test_processCacheTest_0100';
      let applicationContext = context.getApplicationContext();
      try {
        applicationContext.setSupportedProcessCache(false);
      } catch (error) {
        console.log(TAG + " error: " + error.code + ", " + error.message);
        expect(error.code).assertEqual(ERROR_CODE_NO_PERMISSIOn);
        done();
      }
    })
  })
}