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

const HAP_PATH = "/data/test/bmssystemnopermissiontest.hap"
const PERMISSION_DENIED_ERROR = 201;

export default function getBundleArchiveInfo() {

  describe('getBundleArchiveInfo', function () {

    /*
    * @tc.number getBundleArchiveInfo_0100
    * @tc.name getBundleArchiveInfoUnPermission
    * @tc.desc test getBundleArchiveInfo no permission
    */
    it('getBundleArchiveInfoUnPermission', 0, async function (done) {
      bundle9.getBundleArchiveInfo(HAP_PATH, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY).then(data => {
        expect().assertFail();
      }).catch(err => {
        expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
      });
      bundle9.getBundleArchiveInfo(HAP_PATH, bundle9.BundleFlag.GET_BUNDLE_INFO_WITH_ABILITY, (err, data) => {
        expect(err.code).assertEqual(PERMISSION_DENIED_ERROR);
        done();
      });
    })

  })
}