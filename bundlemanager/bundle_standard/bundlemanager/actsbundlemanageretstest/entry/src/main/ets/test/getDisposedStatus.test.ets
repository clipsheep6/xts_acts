/*
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'

const BUNDLE_NAME1 = 'com.open.harmony.packagemag';
const BUNDLE_NAME2 = "wrong";
const BUNDLE_NAME3 = 0;
const DEFAULT_DISPOSED_STATUS = 0;
const DISPOSED_STATUS = 10;
const ERR_CODE_1 = 1;
const ERR_CODE_2 = 2;
const ERR_MESSAGE_1 = "type misMatch";
const ERR_MESSAGE_2 = "invalid parameters"

export default function getDisposedStatus() {

    describe('getDisposedStatus', function () {
        /*
         * @tc.number: bundle_getDisposedStatus_test_0100
         * @tc.name: getDisposedStatus : The basic ability is enhanced to obtain the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by promise)
         * @tc.level   0
         */
        it('bundle_getDisposedStatus_test_0100', 0, async function (done) {
            await bundleManager.getDisposedStatus(BUNDLE_NAME1).then((data) => {
                console.info('[bundle_getDisposedStatus_test_0100] getDisposedStatus data is: ' + JSON.stringify(data));
                expect(data).assertEqual(DEFAULT_DISPOSED_STATUS);
                done();
            }).catch((error) => {
                console.error('[bundle_getDisposedStatus_test_0100]Operation failed: ' + JSON.stringify(error));
                expect(error).assertFail();
                done();
            });
        });

        /*
         * @tc.number: bundle_getDisposedStatus_test_0200
         * @tc.name: getDisposedStatus : The basic ability is enhanced to obtain the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by callback)
         * @tc.level   0
         */
        it('bundle_getDisposedStatus_test_0200', 0, async function (done) {
            await bundleManager.getDisposedStatus(BUNDLE_NAME1).then((error, data) => {
                if (error) {
                    console.error('[bundle_getDisposedStatus_test_0200]Operation failed: ' + JSON.stringify(error));
                    expect(error).assertFail();
                }
                console.info('[bundle_getDisposedStatus_test_0200] getDisposedStatus data is: ' + JSON.stringify(data));
                expect(data).assertEqual(DEFAULT_DISPOSED_STATUS);
                done();
            });
        });

        /*
         * @tc.number: bundle_getDisposedStatus_test_0300
         * @tc.name: getDisposedStatus : The basic ability is enhanced to obtain the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by promise), wrong bundleName
         * @tc.level   0
         */
        it('bundle_getDisposedStatus_test_0300', 0, async function (done) {
            await bundleManager.getDisposedStatus(BUNDLE_NAME2).then((data) => {
                console.info('[bundle_getDisposedStatus_test_0300] getDisposedStatus data is: ' + JSON.stringify(data));
                expect(data).assertEqual(DEFAULT_DISPOSED_STATUS);
                done();
            }).catch((error) => {
                console.error('[bundle_getDisposedStatus_test_0300]Operation failed: ' + JSON.stringify(error));
                expect(error).assertFail();
                done();
            });
        });

        /*
         * @tc.number: bundle_getDisposedStatus_test_0400
         * @tc.name: getDisposedStatus : The basic ability is enhanced to obtain the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by callback), wrong bundleName
         * @tc.level   0
         */
        it('bundle_getDisposedStatus_test_0400', 0, async function (done) {
            await bundleManager.getDisposedStatus(BUNDLE_NAME2).then((error, data) => {
                if (error) {
                    console.error('[bundle_getDisposedStatus_test_0400]Operation failed: ' + JSON.stringify(error));
                    expect(error).assertFail();
                }
                console.info('[bundle_getDisposedStatus_test_0400] getDisposedStatus data is: ' + JSON.stringify(data));
                expect(data).assertEqual(DEFAULT_DISPOSED_STATUS);
                done();
            });
        });

        /*
         * @tc.number: bundle_getDisposedStatus_test_0500
         * @tc.name: getDisposedStatus : The basic ability is enhanced to obtain the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by promise), wrong bundleName
         * @tc.level   0
         */
        it('bundle_getDisposedStatus_test_0500', 0, async function (done) {
            await bundleManager.getDisposedStatus(BUNDLE_NAME3).then((data) => {
                console.info('[bundle_getDisposedStatus_test_0500] getDisposedStatus data is: ' + JSON.stringify(data));
                expect(error).assertFail();
                done();
            }).catch((error) => {
                console.error('[bundle_getDisposedStatus_test_0500]Operation failed: ' + JSON.stringify(error));
                expect(error).assertEqual(ERR_CODE_2);
                done();
            });
        });

        /*
         * @tc.number: bundle_getDisposedStatus_test_0600
         * @tc.name: getDisposedStatus : The basic ability is enhanced to obtain the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by callback), wrong bundleName
         * @tc.level   0
         */
        it('bundle_getDisposedStatus_test_0600', 0, async function (done) {
            await bundleManager.getDisposedStatus(BUNDLE_NAME3).then((error, data) => {
                if (error) {
                    console.error('[bundle_getDisposedStatus_test_0600]Operation failed: ' + JSON.stringify(error));
                }
                expect(error).assertEqual(ERR_CODE_2);
                expect(data).assertEqual(ERR_MESSAGE_2);
                done();
            });
        });

        /*
         * @tc.number: bundle_setDisposedStatus_test_0100
         * @tc.name: setDisposedStatus : The basic ability is enhanced to set the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by promise)
         * @tc.level   0
         */
        it('bundle_setDisposedStatus_test_0100', 0, async function (done) {
            await bundleManager.setDisposedStatus(BUNDLE_NAME, DISPOSED_STATUS).then((data) => {
                bundleManager.getDisposedStatus(BUNDLE_NAME).then((data) => {
                    expect(data).assertEqual(DISPOSED_STATUS);
                }.catch((error) => {
                    expect(error).assertFail();
                }
                done();
            }).catch((error) => {
                console.error('[bundle_setDisposedStatus_test_0100]Operation failed: ' + JSON.stringify(error));
                expect(error).assertFail();
                done();
            });
        });

        /*
         * @tc.number: bundle_setDisposedStatus_test_0200
         * @tc.name: setDisposedStatus : The basic ability is enhanced to set the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by callback)
         * @tc.level   0
         */
        it('bundle_setDisposedStatus_test_0200', 0, async function (done) {
            await bundleManager.setDisposedStatus(BUNDLE_NAME, DEFAULT_DISPOSED_STATUS).then((error, data) => {
                if (err) {
                    expect(error).assertFail();
                }
                bundleManager.getDisposedStatus(BUNDLE_NAME).then((error, data) => {
                    if (error) {
                        expect(error).assertFail();
                    }
                    expect(data).assertEqual(DEFAULT_DISPOSED_STATUS);
                }
                done();
            });
        });

        /*
         * @tc.number: bundle_setDisposedStatus_test_0300
         * @tc.name: setDisposedStatus : The basic ability is enhanced to set the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by promise)
         * @tc.level   0
         */
        it('bundle_setDisposedStatus_test_0300', 0, async function (done) {
            await bundleManager.setDisposedStatus(BUNDLE_NAME2, DISPOSED_STATUS).then((data) => {
                expect(data).assertFail();
                done();
            }).catch((error) => {
                console.error('[bundle_setDisposedStatus_test_0300]Operation failed: ' + JSON.stringify(error));
                expect(error).assertEqual(ERR_CODE_1);
                done();
            });
        });

        /*
         * @tc.number: bundle_setDisposedStatus_test_0400
         * @tc.name: setDisposedStatus : The basic ability is enhanced to set the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by callback)
         * @tc.level   0
         */
        it('bundle_setDisposedStatus_test_0400', 0, async function (done) {
            await bundleManager.setDisposedStatus(BUNDLE_NAME2, DEFAULT_DISPOSED_STATUS).then((error, data) => {
                if (!error) {
                    expect(error).assertFail();
                }
                expect(error).assertEqual(ERR_CODE_1);
                expect(data).assertEqual(ERR_MESSAGE_1);
                done();
            });
        });

        /*
         * @tc.number: bundle_setDisposedStatus_test_0500
         * @tc.name: setDisposedStatus : The basic ability is enhanced to set the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by promise)
         * @tc.level   0
         */
        it('bundle_setDisposedStatus_test_0500', 0, async function (done) {
            await bundleManager.setDisposedStatus(BUNDLE_NAME3, DISPOSED_STATUS).then((data) => {
                expect(data).assertFail();
                done();
            }).catch((error) => {
                console.error('[bundle_setDisposedStatus_test_0500]Operation failed: ' + JSON.stringify(error));
                expect(error).assertEqual(ERR_CODE_2);
                done();
            });
        });

        /*
         * @tc.number: bundle_setDisposedStatus_test_0600
         * @tc.name: setDisposedStatus : The basic ability is enhanced to set the specified bundle disposed status
         * @tc.desc: Check the return value of the interface (by callback)
         * @tc.level   0
         */
        it('bundle_setDisposedStatus_test_0600', 0, async function (done) {
            await bundleManager.setDisposedStatus(BUNDLE_NAME3, DEFAULT_DISPOSED_STATUS).then((error, data) => {
                if (!error) {
                    expect(error).assertFail();
                }
                expect(error).assertEqual(ERR_CODE_2);
                expect(data).assertEqual(ERR_MESSAGE_2);
                done();
            });
        });

}