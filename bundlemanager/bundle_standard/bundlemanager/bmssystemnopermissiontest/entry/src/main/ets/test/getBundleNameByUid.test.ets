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

import bundle from '@ohos.bundle';
import bundle9 from '@ohos.bundle.bundleManager'
import { describe, beforeAll, it, expect } from 'hypium/index';

const BUNDLE_NAME = 'com.ohos.systemnopermission';
const PERMISSION_DENIED_ERROR = 201;
const TEST_UID = 12345;

export default function getBundleNameByUid() {

  describe('getBundleNameByUid', function () {

    /*
    * @tc.number: getBundleNameByUid_0100
    * @tc.name: getBundleNameByUidUnPermission
    * @tc.desc: test getBundleNameByUid no permission
    */
    it('getBundleNameByUidUnPermission', 0, async function (done) {
        await bundle9.getBundleNameByUid(TEST_UID).then(data => {
            expect().assertFail();
        }).catch(err => {
            expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
        });
        bundle9.getBundleNameByUid(TEST_UID, (err, data) => {
            expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
            done();
        });
    })

  })
}