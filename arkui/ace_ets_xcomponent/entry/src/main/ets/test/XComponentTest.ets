// @ts-nocheck
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

import router from '@ohos.router';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index.ets"

export default function XComponentTestJsunit() {
  describe('XComponentTest', function () {

    async function sleep(time) {
      return new Promise((resolve, reject) => {
        setTimeout(() => {
          resolve()
        }, time)
      }).then(() => {
        console.info( `sleep ${time} over...`)
      })
    }

    /**
     * @tc.number    SUB_ACE_BASIC_ETS_NAPI_0100
     * @tc.name      XComponentTest001
     * @tc.desc      aceXComponentEtsTest
     */
    it('XComponentTest001', 0, async function (done) {
      setTimeout(() => {
          console.info('XComponentTest001 START');

          var xcomponentContext2 = globalThis.xcomponentContext2;

          var result;
          if (!xcomponentContext2) {
            console.error('xcomponentContext2 null');
            result = -1;
            expect(result).assertEqual(2);
            done();
          } else {
            result = xcomponentContext2.TestOnSurfaceCreated();
            expect(result).assertEqual(2);
            done();
          }
        }, 2000)
      
    });

  })
}
