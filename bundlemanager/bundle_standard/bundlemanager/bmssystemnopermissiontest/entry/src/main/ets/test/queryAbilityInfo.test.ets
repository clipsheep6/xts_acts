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

import bundle from '@ohos.bundle'
import bundle9 from '@ohos.bundle.bundleManager'
import account from '@ohos.account.osAccount'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'

const HAP_PATH = "/data/test/bmssystemnopermissiontest.hap"
const PERMISSION_DENIED_ERROR = 201;
let userId: number = 0;

export default function queryAbilityInfo() {

  describe('queryAbilityInfo', function () {

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
    * @tc.number: queryAbilityInfo_0100
    * @tc.name: queryAbilityInfoUnPermission
    * @tc.desc: test queryAbilityInfo no permission
    */
    it('queryAbilityInfoUnPermission', 0, async function (done) {
        await bundle9.queryAbilityInfo(
            {
                action: "action_a"
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, userId).then(res => {
                expect().assertFail();
            }).catch(err => {
                expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
            })
        bundle9.queryAbilityInfo(
            {
                action: "action_a"
            }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, userId, (err, data) => {
                expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
                done()
            });
    });

  })
}