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

const PARAM_CHECK_ERROR = 401;
const BUNDLE_NAME = "com.ohos.systemwithpermissiontest"
const HAP_UID = 20010038;
const FAILED_UID_PARAM = 123456;
const INVALID_UID = 17700021;

export default function getBundleNameByUid() {

  describe('getBundleNameByUid', function () {

    /*
    * @tc.number getBundleNameByUid_0100
    * @tc.name getBundleNameByUidWithFailedUid
    * @tc.desc test getBundleNameByUid interfaces with failed uid
    */
    it('getBundleNameByUidWithFailedUid', 0, async function (done) {
        await bundle9.getBundleNameByUid(FAILED_UID_PARAM).then(data => {
            expect(data).assertFail();
        }).catch(err => {
            console.info("getNameForUid fail:" + JSON.stringify(err));
            expect(err.code).assertEqual(INVALID_UID);
        });
        bundle9.getBundleNameByUid(FAILED_UID_PARAM, (err, data) => {
            console.info("getNameForUid result:" + JSON.stringify(data));
            expect(err.code).assertEqual(INVALID_UID);
            done()
        });
    });

    /*
    * @tc.number getNameForUid_0200
    * @tc.name getBundleNameByUidWithFailedParam
    * @tc.desc test getBundleNameByUid interfaces with error param
    */
    it('getBundleNameByUidWithFailedParam', 0, async function (done) {
        try {
            await bundle9.getBundleNameByUid(undefined).then(data => {
                expect(data).assertFail();
            }).catch(err => {
                console.info("getNameForUid fail:" + JSON.stringify(err));
                expect().assertFail();
            });
        } catch (error) {
            expect(error.code).assertEqual(PARAM_CHECK_ERROR);
        }
        try {
            bundle9.getBundleNameByUid(undefined, (err, data) => {
                console.info("getNameForUid result:" + JSON.stringify(data));
                expect().assertFail();
                done()
            });
        } catch (error) {
            expect(error.code).assertEqual(PARAM_CHECK_ERROR);
        }
        done()
    });

    /*
    * @tc.number getBundleNameByUid_0300
    * @tc.name getBundleNameByUidSuccess
    * @tc.desc test getBundleNameByUid interfaces success scene
    */
    it('getBundleNameByUidSuccess', 0, async function (done) {
        await bundle9.getBundleNameByUid(HAP_UID).then(data => {
            expect(data).assertEqual(BUNDLE_NAME);
        }).catch(err => {
            console.info("getNameForUid fail:" + JSON.stringify(err));
            expect(err).assertFail();
        });
        bundle9.getBundleNameByUid(HAP_UID, (err, data) => {
            expect(data).assertEqual(BUNDLE_NAME);
            expect(err).assertEqual(null);
            done();
        });
    });
  })
}