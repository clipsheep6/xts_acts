/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium'
import bundleManager from '@ohos.bundle.bundleManager';
import { BusinessError } from '@ohos.base';
import Want from '@ohos.app.ability.Want';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';

let atManager = abilityAccessCtrl.createAtManager();


const CODE_NO_BUNDLENAME = 17700001;
const CODE_NO_USERID = 17700004;
const CODE_BUNDLE_DISABLED = 17700026;

let bundleFlags = bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_SKILL;

export default function getBundleInfoTest() {

  describe('getBundleInfoTest', function () {

    /**
     * @tc.number Sub_Bms_Framework_Get_BundleInfo_001
     * @tc.name getBundleInfoTest001
     * @tc.desc getBundleInfoTest001
     */
    it('getBundleInfoForSelfSync0100', 0, async function (done) {
      bundleManager.getBundleInfoForSelfSync(bundleFlags, (err, data) => {
        console.info("getBundleInfoForSelfSync0100 data= " + JSON.stringify(data));
        expect(data.name).assertEqual("com.ohos.startabilitygetstartparametertest");
        done();
      });

    });
  })
}

