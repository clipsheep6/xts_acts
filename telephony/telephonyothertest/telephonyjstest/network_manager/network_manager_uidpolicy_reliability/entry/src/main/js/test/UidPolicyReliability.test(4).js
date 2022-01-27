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

import netpolicy from '@ohos.netmanager.netpolicy';
import { describe, it, expect } from 'deccjsunit/index';


describe('NetworkManagerUidPolicyReliabilityTest', function () {
    const TEST_RUN_TIME = 1000;

    const UID_1 = 1;
    const UID_2 = 2;
    const UID_3 = 3;
    const UID_4 = 4;
    const UID_5 = 5;
    const UID_6 = 6;
    const UID_7 = 7;
    const UID_8 = 8;
    const UID_9 = 9;

    /**
     * @tc.number  Telephony_NetworkManager_getUids_Async_0800
     * @tc.name    The metered becomes "true", test isUidNetAccess() to obtain network access permission 
     *             for the specified UID TEST_RUN_TIME times. Each time isUidNetAccess can call back data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUids_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUids_Async_0800';
        let result = [1];
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            netpolicy.getUids(netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(result);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Async_1000
     * @tc.name    The metered becomes "true", test isUidNetAccess() to obtain network access permission 
     *             for the specified UID TEST_RUN_TIME times. Each time isUidNetAccess can call back data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Async_1000';
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            netpolicy.isUidNetAccess(UID_1, true, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(true);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Async_1200
     * @tc.name    Check ifaceName as "test", test isUidNetAccess() to 
     *             obtain the network access permission of the specified UID TEST_RUN_TIME times, 
     *             each time can callback data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Async_1200';
        let ifaceName = "test"
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail err: ${err}`);
            expect().assertFail();
            done();
            return;
        }
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            netpolicy.isUidNetAccess(UID_1, ifaceName, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(true);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUids_Promise_0800
     * @tc.name    Test getUids() to get the UID list of the specified policy value TEST_RUN_TIME times, 
     *             each time returning data successfully
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUids_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUids_Promise_0800';
        let result = [1]
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} set fail: ${err}`);
            expect().assertFail();
            done();
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.getUids(netpolicy.NET_POLICY_TEMPORARY_ALLOW_METERED);
                expect(data).assertEqual(result);
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Promise_1000
     * @tc.name    The metered becomes "true", test isUidNetAccess() to obtain network access permission
     *             for the specified UID TEST_RUN_TIME times
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Promise_1000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Promise_1000';
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} set fail: ${err}`);
            expect().assertFail();
            done();
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.isUidNetAccess(UID_1, true);
                expect(data).assertEqual(true);
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Promise_1200
     * @tc.name    Check ifaceName is "test", test isUidNetAccess() to 
     *             obtain network access permission for the specified UID TEST_RUN_TIME times, 
     *             and return data each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Promise_1200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Promise_1200';
        let ifaceName = "test";
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} set fail: ${err}`);
            expect().assertFail();
            done();
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.isUidNetAccess(UID_1, ifaceName);
                expect(data).assertEqual(true);
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
            }
        }
        console.log(`${caseName} finish`);
        done();
    })
})
