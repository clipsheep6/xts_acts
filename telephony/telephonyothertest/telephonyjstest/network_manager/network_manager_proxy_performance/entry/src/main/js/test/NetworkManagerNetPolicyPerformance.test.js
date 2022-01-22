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

import netpolicy from '@ohos.net.policy';
import netconn from '@ohos.net.connection'
import statistics from '@ohos.net.statistics'
import { describe, it, expect } from 'deccjsunit/index';

describe('ActsNetworkManagerNetPolicyPerformanceTest', function () {
    const SLOT_0 = 0;
    const SLOT_1 = 1;
    const TEST_RUN_TIME = 10;
    const DELAYL_LIMIT = 5;
    const policy = [{
        netType: netpolicy.BEARER_CELLULAR,
        slotId: SLOT_0,
        periodStartTime: Date.now(),
        periodDuration: 'M1',
        warningBytes: 80000,
        limitBytes: 100000,
        lastLimitSnooze: -1,
        metered: 0,
        source: 0
    }]

    function sleep(timeout) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, timeout);
        })
    }

    beforeAll(async function () {
        await netpolicy.setFactoryPolicy(SLOT_0);
        await netpolicy.setFactoryPolicy(SLOT_1);
        await netconn.disableAirplaneMode();
        await sleep(3000);
    })

    afterEach(async function () {
        await netpolicy.setFactoryPolicy(SLOT_0);
        await netpolicy.setFactoryPolicy(SLOT_1);
        await netconn.disableAirplaneMode();
        await sleep(3000);
    })

    /**
     * @tc.number  Telephony_NetworkManager_SetNetQuotaPolicies_1900
     * @tc.name    Test setNetQuotaPolicies() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_SetNetQuotaPolicies_1900', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_SetNetQuotaPolicies_1900';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.setNetQuotaPolicies(policy, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1900
     * @tc.name    Test setNetQuotaPolicies() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1900', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1900';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.setNetQuotaPolicies(policy);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Async_0600
     * @tc.name    Test getNetQuotaPolicies() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Async_0600';
        await netpolicy.setNetQuotaPolicies(policy);
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.getNetQuotaPolicies((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Promise_0600
     * @tc.name    Test getNetQuotaPolicies() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Promise_0600';
        await netpolicy.setNetQuotaPolicies(policy);
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.getNetQuotaPolicies();
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0800
     * @tc.name    Test setSnoozePolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0800';
        await netpolicy.setNetQuotaPolicies(policy);
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0800
     * @tc.name    Test setSnoozePolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0800';
        await netpolicy.setNetQuotaPolicies(policy);
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getBackgroundPolicy_Async_0300
     * @tc.name    Test getBackgroundPolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getBackgroundPolicy_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getBackgroundPolicy_Async_0300';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.getBackgroundPolicy((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getBackgroundPolicy_Promise_0300
     * @tc.name    Test getBackgroundPolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getBackgroundPolicy_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getBackgroundPolicy_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.getBackgroundPolicy();
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Async_0500
     * @tc.name    Test setFactoryPolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Async_0500';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.setFactoryPolicy(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Promise_0500
     * @tc.name    Test setFactoryPolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Promise_0500';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.setFactoryPolicy(SLOT_0);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_restoreFactoryData_Async_0300
     * @tc.name    Test restoreFactoryData() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_restoreFactoryData_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_restoreFactoryData_Async_0300';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netconn.restoreFactoryData((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_restoreFactoryData_Promise_0300
     * @tc.name    Test restoreFactoryData() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_restoreFactoryData_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_restoreFactoryData_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netconn.restoreFactoryData();
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Async_0400
     * @tc.name    Test getIfaceStatsDetail() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Async_0400';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let ifaceInfo = {
            "iface": "test",
            "start": Date.now() - 60 * 60,
            "end": Date.now()
        };
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            statistics.getIfaceStatsDetail(ifaceInfo, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Promise_0400
     * @tc.name    Test getIfaceStatsDetail() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Promise_0400';
        let ifaceInfo = {
            "iface": "test",
            "start": Date.now() - 60 * 60,
            "end": Date.now()
        };
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getIfaceStatsDetail(ifaceInfo);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0400
     * @tc.name    Test getUidStatsDetail() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0400';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let uidInfo = {
            "ifaceInfo": {
                "iface": "test",
                "start": Date.now() - 60 * 60,
                "end": Date.now()
            },
            "uid": 1001
        };
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            statistics.getUidStatsDetail(uidInfo, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0400
     * @tc.name    Test getUidStatsDetail() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0400';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "test",
                "start": Date.now() - 60 * 60,
                "end": Date.now()
            },
            "uid": 1001
        };
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getUidStatsDetail(uidInfo);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })




    /**
     * @tc.number  Telephony_NetworkManager_disableAirplaneMode_Async_0300
     * @tc.name    Test disableAirplaneMode() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_disableAirplaneMode_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_disableAirplaneMode_Async_0300';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netconn.disableAirplaneMode((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_disableAirplaneMode_Promise_0300
     * @tc.name    Test disableAirplaneMode() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_disableAirplaneMode_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_disableAirplaneMode_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netconn.disableAirplaneMode();
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_enableAirplaneMode_Async_0300
     * @tc.name    Test enableAirplaneMode() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_enableAirplaneMode_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_enableAirplaneMode_Async_0300';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netconn.enableAirplaneMode((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_enableAirplaneMode_Promise_0300
     * @tc.name    Test enableAirplaneMode() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_enableAirplaneMode_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_enableAirplaneMode_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netconn.enableAirplaneMode();
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })
})
