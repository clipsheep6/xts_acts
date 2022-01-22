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

describe('NetworkManagerNetPolicyReliabilityTest', function () {
    const SLOT_0 = 0;
    const SLOT_1 = 1;
    const TEST_RUN_TIME = 10;
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

    function assertPolicy(policy, data) {
        expect(policy.length).assertEqual(data.length);
        for (var i = 0; i < policy.length; i++) {
            expect(data[i].netType).assertEqual(policy[i].netType);
            expect(data[i].slotId).assertEqual(policy[i].slotId);
            expect(data[i].periodStartTime).assertEqual(policy[i].periodStartTime);
            expect(data[i].periodDuration).assertEqual(policy[i].periodDuration);
            expect(data[i].warningBytes).assertEqual(policy[i].warningBytes);
            expect(data[i].limitBytes).assertEqual(policy[i].limitBytes);
            expect(data[i].lastLimitSnooze).assertEqual(policy[i].lastLimitSnooze);
            expect(data[i].metered).assertEqual(policy[i].metered);
            expect(data[i].source).assertEqual(policy[i].source);
        }
    }

    function assertSnoozePolicy(policy, data) {
        expect(policy.length).assertEqual(data.length);
        for (var i = 0; i < policy.length; i++) {
            expect(data[i].netType).assertEqual(policy[i].netType);
            expect(data[i].slotId).assertEqual(policy[i].slotId);
            expect(data[i].periodStartTime).assertEqual(policy[i].periodStartTime);
            expect(data[i].periodDuration).assertEqual(policy[i].periodDuration);
            expect(data[i].warningBytes).assertEqual(policy[i].warningBytes);
            expect(data[i].limitBytes).assertEqual(policy[i].limitBytes);
            expect(data[i].lastLimitSnooze).assertLarger(0);
            expect(data[i].metered).assertEqual(policy[i].metered);
            expect(data[i].source).assertEqual(policy[i].source);
        }
    }

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
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1800
     * @tc.name    Test setNetQuotaPolicies() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1800';
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netpolicy.setNetQuotaPolicies(policy, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertUndefined();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1800
     * @tc.name    Test setNetQuotaPolicies() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1800';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.setNetQuotaPolicies(policy);
                expect(data).assertUndefined();
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
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Async_0500
     * @tc.name    Test getNetQuotaPolicies() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Async_0500';
        await netpolicy.setNetQuotaPolicies(policy);
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netpolicy.getNetQuotaPolicies((err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                assertPolicy(policy, data);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Promise_0500
     * @tc.name    Test getNetQuotaPolicies() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Promise_0500';
        await netpolicy.setNetQuotaPolicies(policy);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.getNetQuotaPolicies();
                assertPolicy(policy, data);
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
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0700
     * @tc.name    Test setSnoozePolicy() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0700';
        await netpolicy.setNetQuotaPolicies(policy);
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertUndefined();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0700
     * @tc.name    Test setSnoozePolicy() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0700';
        await netpolicy.setNetQuotaPolicies(policy);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId);
                expect(data).assertUndefined();
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
     * @tc.number  Telephony_NetworkManager_getBackgroundPolicy_Async_0200
     * @tc.name    Test getBackgroundPolicy() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getBackgroundPolicy_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getBackgroundPolicy_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netpolicy.getBackgroundPolicy((err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(netpolicy.NET_BACKGROUND_POLICY_DISABLE);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getBackgroundPolicy_Promise_0200
     * @tc.name    Test getBackgroundPolicy() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getBackgroundPolicy_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getBackgroundPolicy_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.getBackgroundPolicy();
                expect(data).assertEqual(netpolicy.NET_BACKGROUND_POLICY_DISABLE);
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
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Async_0400
     * @tc.name    Test setFactoryPolicy() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Async_0400';
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netpolicy.setFactoryPolicy(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertUndefined();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Promise_0400
     * @tc.name    Test setFactoryPolicy() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Promise_0400';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netpolicy.setFactoryPolicy(SLOT_0);
                expect(data).assertUndefined();
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
     * @tc.number  Telephony_NetworkManager_restoreFactoryData_Async_0200
     * @tc.name    Test restoreFactoryData() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_restoreFactoryData_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_restoreFactoryData_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netconn.restoreFactoryData((err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertUndefined();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_restoreFactoryData_Promise_0200
     * @tc.name    Test restoreFactoryData() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_restoreFactoryData_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_restoreFactoryData_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netconn.restoreFactoryData();
                expect(data).assertUndefined();
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
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Async_0300
     * @tc.name    Test getIfaceStatsDetail() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Async_0300';
        let ifaceInfo = {
            "iface": "test",
            "start": Date.now() - 60 * 60,
            "end": Date.now()
        };
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            statistics.getIfaceStatsDetail(ifaceInfo, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                } else {
                    expect().assertFail();
                    done();
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Promise_0300
     * @tc.name    Test getIfaceStatsDetail() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Promise_0300';
        let ifaceInfo = {
            "iface": "test",
            "start": Date.now() - 60 * 60,
            "end": Date.now()
        };
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getIfaceStatsDetail(ifaceInfo);
                expect().assertFail();
                done();
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0300
     * @tc.name    Test getUidStatsDetail() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0300';
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
                done();
                return;
            }
            statistics.getUidStatsDetail(uidInfo, (err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                } else {
                    expect().assertFail();
                    done();
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0300
     * @tc.name    Test getUidStatsDetail() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0300';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "test",
                "start": Date.now() - 60 * 60,
                "end": Date.now()
            },
            "uid": 1001
        };
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getUidStatsDetail(uidInfo);
                expect().assertFail();
                done();
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_disableAirplaneMode_Async_0200
     * @tc.name    Test disableAirplaneMode() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_disableAirplaneMode_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_disableAirplaneMode_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netconn.disableAirplaneMode((err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertUndefined();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_disableAirplaneMode_Promise_0200
     * @tc.name    Test disableAirplaneMode() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_disableAirplaneMode_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_disableAirplaneMode_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netconn.disableAirplaneMode();
                expect(data).assertUndefined();
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
     * @tc.number  Telephony_NetworkManager_enableAirplaneMode_Async_0200
     * @tc.name    Test enableAirplaneMode() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_enableAirplaneMode_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_enableAirplaneMode_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            netconn.enableAirplaneMode((err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertUndefined();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_enableAirplaneMode_Promise_0200
     * @tc.name    Test enableAirplaneMode() function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_enableAirplaneMode_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_enableAirplaneMode_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await netconn.enableAirplaneMode();
                expect(data).assertUndefined();
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