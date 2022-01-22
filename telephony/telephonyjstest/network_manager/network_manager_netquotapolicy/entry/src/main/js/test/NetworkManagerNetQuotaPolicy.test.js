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
import { describe, it, expect, afterEach, beforeAll } from 'deccjsunit/index';

describe('ActsNetworkManagerNetQuotaPolicyTest', function () {
    const SLOT_0 = 0;
    const SLOT_1 = 1;

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
        await netpolicy.setFactoryPolicy(0);
        await netpolicy.setFactoryPolicy(1);
        await sleep(3000);
    })

    afterEach(async function () {
        await netpolicy.setFactoryPolicy(0);
        await netpolicy.setFactoryPolicy(1);
        await sleep(3000);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0100
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_CELLULAR
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0100';
        let policy = [{
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
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0200
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_ETHERNET
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0200';
        let policy = [{
            netType: netpolicy.BEARER_ETHERNET,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0300
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_WIFI
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0300';
        let policy = [{
            netType: netpolicy.BEARER_WIFI,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0400
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_BLUETOOTH
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0400';
        let policy = [{
            netType: netpolicy.BEARER_BLUETOOTH,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0500
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_VPN
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0500';
        let policy = [{
            netType: netpolicy.BEARER_VPN,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0600
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0600';
        let policy = [{
            netType: -1,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0700
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is 6
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0700';
        let policy = [{
            netType: 6,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0800
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when periodDuration is M31
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0800';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M31',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_0900
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when periodDuration is M0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_0900';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M0',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1000
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when periodDuration is M32
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1000';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M32',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1100
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when warningBytes is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1100';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: -1,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1200
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when limitBytes is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1200';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: -1,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1300
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when lastLimitSnooze is allowed timestamp
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1300';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: Date.now(),
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1400
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when metered is 1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1400';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 1,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1500
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when source is 1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1500';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 1
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1600
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when policy is double
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1600';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }, {
            netType: netpolicy.BEARER_ETHERNET,
            slotId: SLOT_1,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_1700
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when policy is double and
     *             one of is not allowed
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_1700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_1700';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }, {
            netType: 6,
            slotId: SLOT_1,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Async_2000
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_WIFI_AWARE
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Async_2000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Async_2000';
        let policy = [{
            netType: netpolicy.BEARER_WIFI_AWARE,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0100
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_CELLULAR
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0100';
        let policy = [{
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
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0200
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_ETHERNET
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0200';
        let policy = [{
            netType: netpolicy.BEARER_ETHERNET,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0300
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_WIFI
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0300';
        let policy = [{
            netType: netpolicy.BEARER_WIFI,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0400
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_BLUETOOTH
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0400';
        let policy = [{
            netType: netpolicy.BEARER_BLUETOOTH,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0500
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_VPN
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0500';
        let policy = [{
            netType: netpolicy.BEARER_VPN,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0600
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0600';
        let policy = [{
            netType: -1,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0700
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is 6
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0700';
        let policy = [{
            netType: 6,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0800
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when periodDuration is M31
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0800';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M31',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_0900
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when periodDuration is M0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_0900';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M0',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1000
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when periodDuration is M32
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1000';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M32',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1100
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when warningBytes is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1100';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: -1,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1200
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when limitBytes is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1200';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: -1,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1300
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when lastLimitSnooze is allowed timestamp
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1300';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: Date.now(),
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1400
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when metered is 1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1400';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 1,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1500
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when source is 1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1500';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 1
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1600
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when policy is double
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1600';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }, {
            netType: netpolicy.BEARER_ETHERNET,
            slotId: SLOT_1,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_1700
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when policy is double and
     *             one of is not allowed
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_1700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_1700';
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }, {
            netType: 6,
            slotId: SLOT_1,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setNetQuotaPolicies_Promise_2000
     * @tc.name    Test setNetQuotaPolicies() to view the callback result when netType is BEARER_WIFI_AWARE
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setNetQuotaPolicies_Promise_2000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setNetQuotaPolicies_Promise_2000';
        let policy = [{
            netType: netpolicy.BEARER_WIFI_AWARE,
            slotId: SLOT_0,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            console.log(`${caseName}  set data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Async_0100
     * @tc.name    Test getNetQuotaPolicies() to view the callback result after set one proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Async_0100';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]

        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.getNetQuotaPolicies((err, data) => {
                if (err) {
                    console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                assertPolicy(policy, data);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Async_0200
     * @tc.name    Test getNetQuotaPolicies() to view the callback result after set two proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Async_0200';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }, {
            netType: netpolicy.BEARER_ETHERNET,
            slotId: SLOT_1,
            periodStartTime: Date.now(),
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.getNetQuotaPolicies((err, data) => {
                if (err) {
                    console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                assertPolicy(policy, data);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Async_0300
     * @tc.name    Test getNetQuotaPolicies() to view the callback result when not set proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Async_0300';
        netpolicy.getNetQuotaPolicies((err, data) => {
            if (err) {
                console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} get data: ${JSON.stringify(data)}`);
            expect(data.length).assertEqual(0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Async_0400
     * @tc.name    Test getNetQuotaPolicies() to view the callback result after update proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Async_0400';
        let startTime = Date.now();
        let policy1 = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        let policy2 = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M2',
            warningBytes: 40000,
            limitBytes: 50000,
            lastLimitSnooze: -1,
            metered: 1,
            source: 1
        }]
        netpolicy.setNetQuotaPolicies(policy1, (err, data) => {
            if (err) {
                console.log(`${caseName} set1 fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setNetQuotaPolicies(policy2, (err, data) => {
                if (err) {
                    console.log(`${caseName} set2 fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                netpolicy.getNetQuotaPolicies((err, data) => {
                    if (err) {
                        console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                    assertPolicy(policy2, data);
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Promise_0100
     * @tc.name    Test getNetQuotaPolicies() to view the callback result after set one proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Promise_0100';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            netpolicy.getNetQuotaPolicies().then(data => {
                console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                assertPolicy(policy, data);
                done();
            }).catch(err => {
                console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
            });
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Promise_0200
     * @tc.name    Test getNetQuotaPolicies() to view the callback result after set two proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Promise_0200';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }, {
            netType: netpolicy.BEARER_ETHERNET,
            slotId: SLOT_1,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            netpolicy.getNetQuotaPolicies().then(data => {
                console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                assertPolicy(policy, data);
                done();
            }).catch(err => {
                console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
            });
        }).catch(err => {
            console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Promise_0300
     * @tc.name    Test getNetQuotaPolicies() to view the callback result when not set proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Promise_0300';
        netpolicy.getNetQuotaPolicies().then(data => {
            console.log(`${caseName} get data: ${JSON.stringify(data)}`);
            expect(data.length).assertEqual(0);
            done();
        }).catch(err => {
            console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetQuotaPolicies_Promise_0400
     * @tc.name    Test getNetQuotaPolicies() to view the callback result after update proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetQuotaPolicies_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetQuotaPolicies_Promise_0400';
        let startTime = Date.now();
        let policy1 = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 8000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        let policy2 = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M2',
            warningBytes: 40000,
            limitBytes: 50000,
            lastLimitSnooze: -1,
            metered: 1,
            source: 1
        }]
        netpolicy.setNetQuotaPolicies(policy1).then(data => {
            netpolicy.setNetQuotaPolicies(policy2).then(data => {
                netpolicy.getNetQuotaPolicies().then(data => {
                    console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                    assertPolicy(policy2, data);
                    done();
                }).catch(err => {
                    console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                });
            }).catch(err => {
                console.log(`${caseName} set2 fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`${caseName} set1 fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0100
     * @tc.name    Test setSnoozePolicy() to view the callback result after set proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0100';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId, (err, data) => {
                if (err) {
                    console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
                netpolicy.getNetQuotaPolicies((err, data) => {
                    if (err) {
                        console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                    assertSnoozePolicy(policy, data);
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0200
     * @tc.name    Test setSnoozePolicy() to view the callback result after setSnoozePolicy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0200';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId, (err, data) => {
                if (err) {
                    console.log(`${caseName} setSnoozePolicy1 fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} setSnoozePolicy1 data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
                netpolicy.getNetQuotaPolicies((err, data) => {
                    if (err) {
                        console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                    assertSnoozePolicy(policy, data);
                    netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId, (err, data) => {
                        if (err) {
                            console.log(`${caseName} setSnoozePolicy2 fail: ${JSON.stringify(err)}`);
                            expect().assertFail();
                            done();
                            return;
                        }
                        console.log(`${caseName} setSnoozePolicy2 data: ${JSON.stringify(data)}`);
                        expect(data).assertUndefined();
                        netpolicy.getNetQuotaPolicies((err, data) => {
                            if (err) {
                                console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                                expect().assertFail();
                                done();
                                return;
                            }
                            console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                            assertSnoozePolicy(policy, data);
                            done();
                        });
                    });
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0300
     * @tc.name    Test setSnoozePolicy() to view the callback result after when netType is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0300';
        netpolicy.setSnoozePolicy(-1, 0, (err, data) => {
            if (err) {
                console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0400
     * @tc.name    Test setSnoozePolicy() to view the callback result after when netType is 6
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0400';
        netpolicy.setSnoozePolicy(6, 0, (err, data) => {
            if (err) {
                console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0500
     * @tc.name    Test setSnoozePolicy() to view the callback result after when netType is not exist
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0500';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setSnoozePolicy(netpolicy.BEARER_ETHERNET, 0, (err, data) => {
                if (err) {
                    console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                    done();
                    return;
                }
                console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
                expect().assertFail();
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Async_0600
     * @tc.name    Test setSnoozePolicy() to view the callback result after when slotId is not exist
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Async_0600';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setSnoozePolicy(policy[0].netType, SLOT_1, (err, data) => {
                if (err) {
                    console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                    done();
                    return;
                }
                console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
                expect().assertFail();
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0100
     * @tc.name    Test setSnoozePolicy() to view the callback result after set proxy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0100';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId).then(data => {
                expect(data).assertUndefined();
                console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
                netpolicy.getNetQuotaPolicies().then(data => {
                    console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                    assertSnoozePolicy(policy, data);
                    done();
                }).catch(err => {
                    console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                });
            }).catch(err => {
                console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            })
        }).catch(err => {
            console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0200
     * @tc.name    Test setSnoozePolicy() to view the callback result after setSnoozePolicy
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0200';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId).then(data => {
                expect(data).assertUndefined();
                console.log(`${caseName} setSnoozePolicy1 data: ${JSON.stringify(data)}`);
                netpolicy.getNetQuotaPolicies().then(data => {
                    console.log(`${caseName} getNetQuotaPolicies1 data: ${JSON.stringify(data)}`);
                    assertSnoozePolicy(policy, data);
                    netpolicy.setSnoozePolicy(policy[0].netType, policy[0].slotId).then(data => {
                        expect(data).assertUndefined();
                        console.log(`${caseName} setSnoozePolicy2 data: ${JSON.stringify(data)}`);
                        netpolicy.getNetQuotaPolicies().then(data => {
                            console.log(`${caseName} getNetQuotaPolicies2 data: ${JSON.stringify(data)}`);
                            assertSnoozePolicy(policy, data);
                            done();
                        }).catch(err => {
                            console.log(`${caseName} getNetQuotaPolicies2 fail: ${JSON.stringify(err)}`);
                            expect().assertFail();
                            done();
                            return;
                        });
                    }).catch(err => {
                        console.log(`${caseName} setSnoozePolicy2 fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                        return;
                    })
                }).catch(err => {
                    console.log(`${caseName} getNetQuotaPolicies1 fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                });
            }).catch(err => {
                console.log(`${caseName} setSnoozePolicy1 fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            })
        }).catch(err => {
            console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0300
     * @tc.name    Test setSnoozePolicy() to view the callback result after when netType is -1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0300';
        netpolicy.setSnoozePolicy(-1, SLOT_0).then(data => {
            console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0400
     * @tc.name    Test setSnoozePolicy() to view the callback result after when netType is 6
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0400';
        netpolicy.setSnoozePolicy(6, SLOT_0).then(data => {
            console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0500
     * @tc.name    Test setSnoozePolicy() to view the callback result after when netType is not exist
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0500';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            netpolicy.setSnoozePolicy(netpolicy.BEARER_ETHERNET, policy[0].slotId).then(data => {
                console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
                expect().assertFail();
                done();
            }).catch(err => {
                console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                done();
                return;
            })
        }).catch(err => {
            console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setSnoozePolicy_Promise_0600
     * @tc.name    Test setSnoozePolicy() to view the callback result after when slotId is not exist
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setSnoozePolicy_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setSnoozePolicy_Promise_0600';
        let startTime = Date.now();
        let policy = [{
            netType: netpolicy.BEARER_CELLULAR,
            slotId: SLOT_0,
            periodStartTime: startTime,
            periodDuration: 'M1',
            warningBytes: 80000,
            limitBytes: 100000,
            lastLimitSnooze: -1,
            metered: 0,
            source: 0
        }]
        netpolicy.setNetQuotaPolicies(policy).then(data => {
            netpolicy.setSnoozePolicy(policy[0].netType, SLOT_1).then(data => {
                console.log(`${caseName} setSnoozePolicy data: ${JSON.stringify(data)}`);
                expect().assertFail();
                done();
            }).catch(err => {
                console.log(`${caseName} setSnoozePolicy fail: ${JSON.stringify(err)}`);
                done();
                return;
            })
        }).catch(err => {
            console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return;
        })
    });
});
