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

describe('NetworkManagerUidPolicyPerformanceTest', function () {
    const UID_1 = 1;
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 500;

    /**
     * @tc.number  Telephony_NetworkManager_getUids_Async_0900
     * @tc.name    Test getUids() TEST_RUN_TIME times with output delay less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUids_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUids_Async_0900'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail `);
            done();
            return;
        }
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.getUids(netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    done();
                    return;
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Async_1100
     * @tc.name    Check metered to "true", test isUidNetAccess() TEST_RUN_TIME times, 
     *             output delay less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Async_1100'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail `);
            done();
        }
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.isUidNetAccess(UID_1, true, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    done();
                    return;
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Async_1300
     * @tc.name    The ifaceName is "test", and the isUidNetAccess() command is executed TEST_RUN_TIME times. 
     *             The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Async_1300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Async_1300'
        let ifaceName = "test"
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;

        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail `);
            done();
        }
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.isUidNetAccessnet(UID_1, ifaceName, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    done();
                    return;
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUids_Promise_0900
     * @tc.name    Test getUids() TEST_RUN_TIME times with output delay less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUids_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUids_Promise_0900';
        let startTime = new Date().getTime();
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail `);
            done();
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.getUids(netpolicy.NET_POLICY_REJECT_METERED_BACKGROUND);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
                done();
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Promise_1100
     * @tc.name    Check metered to "true", test isUidNetAccess() TEST_RUN_TIME times, 
     *             output delay less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Promise_1100';
        let startTime = new Date().getTime();
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail `);
            done();
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.isUidNetAccess(UID_1, true);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
                done();
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_isUidNetAccess_Promise_1300
     * @tc.name    The ifaceName is "test", and the isUidNetAccess() command is executed TEST_RUN_TIME times. 
     *             The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_isUidNetAccess_Promise_1300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_isUidNetAccess_Promise_1300';
        let startTime = new Date().getTime();
        try {
            await netpolicy.setUidPolicy(UID_1, netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
        } catch (err) {
            console.log(`${caseName} fail `);
            done();
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.isUidNetAccess(UID_1, true);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
                done();
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })
})
