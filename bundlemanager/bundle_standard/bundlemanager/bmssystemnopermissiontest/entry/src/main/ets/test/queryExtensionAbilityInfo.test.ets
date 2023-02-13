/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
 // @ts-nocheck
import bundle from '@ohos.bundle'
import bundle9 from '@ohos.bundle.bundleManager'
import account from '@ohos.account.osAccount'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'

const BUNDLE_NAME = "ohos.acts.bundle.stage";
const ABILITY_NAME = "ExtensionAbility1";
const PERMISSION_DENIED_ERROR = 201;
let userId = 0;

export default function queryExtensionAbilityInfo() {

  describe('queryExtensionAbilityInfo', function () {

    beforeAll(async function (done) {
        await account.getAccountManager().getOsAccountLocalIdFromProcess().then(account => {
            console.info("getOsAccountLocalIdFromProcess userid  ==========" + account);
            userId = account;
            done();
        }).catch(err => {
            console.info("getOsAccountLocalIdFromProcess err ==========" + JSON.stringify(err));
            done();
        })
    });

    /*
    * @tc.number: queryExtensionAbilityInfo_0100
    * @tc.name: queryExtensionAbilityInfoUnPermission
    * @tc.desc: test queryExtensionAbilityInfo no permission
    */
    it('queryExtensionAbilityInfoUnPermission', 0, async function (done) {
      await bundle9.queryExtensionAbilityInfo({
        "bundleName": BUNDLE_NAME,
        "abilityName": ABILITY_NAME
      }, bundle9.ExtensionAbilityType.FORM,
        bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_WITH_PERMISSION, userId).then(data => {
          expect().assertFail();
        }).catch(err => {
          expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
        });
      bundle9.queryExtensionAbilityInfo({
        "bundleName": BUNDLE_NAME,
        "abilityName": ABILITY_NAME
      }, bundle9.ExtensionAbilityType.FORM,
        bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_WITH_PERMISSION, userId, (err, data) => {
          expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
          done();
        })
    })

  })
}
