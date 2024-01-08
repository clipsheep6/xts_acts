/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import bundleManager from '@ohos.bundle.bundleManager';


export default function bundleMangerFormNonSystemTest() {
  describe('ActsBundleMangerFormNonSystemTest', function () {

    /**
     * @tc.number    Acts_SetAdditionalInfoTest_0800
     * @tc.name      Testing the functionality of the setAdditionalInfo interface.
     * @tc.desc      Non system application calls and Set the parameters to
     *               bundleName: 'com.example.bundleMangerFormNonSystemTest' and additionalInfo: null.
     */
    it('Acts_SetAdditionalInfoTest_0800', 0, async function (done) {
      console.info('Acts_SetAdditionalInfoTest_0800 START');

      let bundleName = 'com.example.bundleMangerFormNonSystemTest';
      let additionalInfo = 'abc:123';

      try {
        bundleManager.setAdditionalInfo(bundleName, additionalInfo)
        console.info('setAdditionalInfo successfully.');
        done();
      } catch (err) {
        console.info('setAdditionalInfo failed: %{public}s', err.code);
        expect(err.code).assertEqual(202);
        done();
      }
      console.info('Acts_SetAdditionalInfoTest_0800 END');
    })
  })
}