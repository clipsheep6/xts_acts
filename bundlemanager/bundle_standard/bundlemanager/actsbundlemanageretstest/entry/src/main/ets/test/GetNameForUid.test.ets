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
// @ts-nocheck
import bundle from '@ohos.bundle'
import bundle9 from '@ohos.bundle.bundleManager'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'

const BUNDLE_NAME1 = 'com.example.l3jsdemo';
const BUNDLE_NAME2 = 'com.open.harmony.packagemag';
const PARAM_CHECK_ERROR = "401";
const INTERNAL_ERROR = 17700101;

export default function getNameForUid() {
    describe('ActsBmsgetNameForUidTest', function () {

    /**
     * @tc.number getNameForUid_0100
     * @tc.name BUNDLE::getBundleInfo
     * @tc.desc Test getBundleInfo interfaces with other hap.
     */
    it('getNameForUid_0100', 0, async function (done) {
        let dataInfo = await bundle.getBundleInfo(BUNDLE_NAME1, bundle.BundleFlag.GET_BUNDLE_DEFAULT);
        await bundle9.getBundleNameByUid(dataInfo.uid).then(data => {
            expect(data).assertEqual(BUNDLE_NAME1);
        }).catch(err => {
            console.info("getNameForUid fail:" + JSON.stringify(err));
            expect(err).assertFail();
        });
        bundle9.getBundleNameByUid(dataInfo.uid, (err, data) => {
            console.info("getNameForUid result:" + JSON.stringify(data));
            expect(data).assertEqual(BUNDLE_NAME1);
            expect(err).assertEqual(null);
            done();
        });
    });

    /**
     * @tc.number getNameForUid_0200
     * @tc.name BUNDLE::getBundleInfo
     * @tc.desc Test getBundleInfo interfaces with hap.
     */
    it('getNameForUid_0200', 0, async function (done) {
        let dataInfo = await bundle.getBundleInfo(BUNDLE_NAME2,bundle.BundleFlag.GET_BUNDLE_DEFAULT);
        await bundle9.getBundleNameByUid(dataInfo.uid).then(data => {
            expect(data).assertEqual(BUNDLE_NAME2);
        }).catch(err => {
            console.info("getNameForUid fail:" + JSON.stringify(err));
            expect(err).assertFail();
        });
        bundle9.getBundleNameByUid(dataInfo.uid, (err, data) => {
            console.info("getNameForUid result:" + JSON.stringify(data));
            expect(data).assertEqual(BUNDLE_NAME2);
            expect(err).assertEqual(null);
            done();
        });
    });

    /**
     * @tc.number getNameForUid_0300
     * @tc.name BUNDLE::getBundleInfo
     * @tc.desc Test getBundleInfo interfaces with notexist hap.
     */
    it('getNameForUid_0300', 0, async function (done) {
        await bundle9.getBundleNameByUid(123456).then(data => {
            expect(data).assertFail();
        }).catch(err => {
            console.info("getNameForUid fail:" + JSON.stringify(err));
            expect(err.code).assertEqual(INTERNAL_ERROR);
        });
        bundle9.getBundleNameByUid(123456, (err, data) => {
            console.info("getNameForUid result:" + JSON.stringify(data));
            expect(err.code).assertEqual(INTERNAL_ERROR);
            done()
        });
    });

    /**
     * @tc.number getNameForUid_0400
     * @tc.name BUNDLE::getBundleInfo
     * @tc.desc Test getBundleInfo interfaces with error param.
     */
    it('getNameForUid_0400', 0, async function (done) {
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

    });
}