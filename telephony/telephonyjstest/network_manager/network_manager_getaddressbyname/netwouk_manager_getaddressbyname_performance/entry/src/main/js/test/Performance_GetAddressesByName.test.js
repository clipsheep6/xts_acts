/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
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

import { describe, it, expect } from 'deccjsunit/index';
import connection from '@ohos.net.connection';

describe('NetworkManagerUidPolicyPerformanceTest', function () {
    let addressBaidu ="www.baidu.com";
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 1000;

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                }
                startTime = new Date().getTime();
                handle.getAddressesByName(addressBaidu, (error, value) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    if (error) {
                        console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                        recursive(n - 1);
                    }
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                }
                startTime = new Date().getTime();
                handle.getAddressByName(addressBaidu, (error, value) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    if (error) {
                        console.log(`${caseName}`+"getAddressByName callback error = " + error);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                        recursive(n - 1);
                    }
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                }
                startTime = new Date().getTime();
                handle.bindSocket(1, (error, value) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    if (error) {
                        console.log(`${caseName}`+"bindSocket callback error = " + error);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}`+"bindSocket callback = " + value);
                        recursive(n - 1);
                    }
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                }
                startTime = new Date().getTime();
                handle.getAddressesByName(addressBaidu).then((data) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                    recursive(n - 1);
                }).catch((error) => {
                    console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                    expect().assertFail();
                    done();
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                }
                startTime = new Date().getTime();
                handle.getAddressByName(addressBaidu).then((data) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                    recursive(n - 1);
                }).catch((error) => {
                    console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                    expect().assertFail();
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Promise_0700';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                }
                startTime = new Date().getTime();
                handle.bindSocket(1).then((data) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    console.log(`${caseName}`+"bindSocket promiss = " + data);
                    recursive(n - 1);
                }).catch((error) => {
                    console.log(`${caseName}`+"bindSocket promiss error = " + error);
                    expect().assertFail();
                    done();
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });
});
