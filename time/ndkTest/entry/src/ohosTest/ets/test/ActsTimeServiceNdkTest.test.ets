/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import timeservicendk from 'libtimeservicendk.so'

export default function ActsTimeServiceNdkTest() {
  describe('ActsTimeServiceNdkTest', () => {

    /**
     * @tc.number  : SUB_Time_TimeService_GetTimeZone_0100
     * @tc.name    : test OHTimeServiceGetTimeZone Test Normal Scene
     * @tc.desc    : Obtains the current system time zone.
     * @tc.level   : Level3
     * @tc.size    : MediumTest
     * @tc.type    : Function
     */
    it('SUB_Time_TimeService_GetTimeZone_0100', 0, async (done: Function) => {
      try {
        console.info("====>SUB_Time_TimeService_GetTimeZone_0100 start====");
        let result = timeservicendk.OHTimeServiceGetTimeZone();
        console.info("====>SUB_Time_TimeService_GetTimeZone_0100 result: " + result);
        done()
      } catch (err) {
        console.error("====>SUB_Time_TimeService_GetTimeZone_0100 catch err: " + err);
        expect(false).assertEqual(0);
        done()
      }
    })
  })
}