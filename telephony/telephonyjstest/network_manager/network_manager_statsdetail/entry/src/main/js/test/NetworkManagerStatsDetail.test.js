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
import { describe, it, expect, afterEach } from 'deccjsunit/index';

describe('ActsNetworkManagerStatsDetailTest', function () {
    const SLOT_0 = 0;
    const SLOT_1 = 1;

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
     * @tc.number  Telephony_NetworkManager_enableAirplaneMode_Async_0100
     * @tc.name    Test enableAirplaneMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_enableAirplaneMode_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_enableAirplaneMode_Async_0100';
        netconn.enableAirplaneMode((err, data) => {
            if (err) {
                console.log(`${caseName} enableAirplaneMode fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} enableAirplaneMode data: ${JSON.stringify(data)}`);
            expect(data).assertEqual(undefined);
            netconn.disableAirplaneMode((err, data) => {
                if (err) {
                    console.log(`${caseName} disableAirplaneMode fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} disableAirplaneMode data: ${JSON.stringify(data)}`);
                expect(data).assertEqual(undefined);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_enableAirplaneMode_Promise_0100
     * @tc.name    Test enableAirplaneMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_enableAirplaneMode_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_enableAirplaneMode_Promise_0100';
        netconn.enableAirplaneMode().then(data => {
            console.log(`${caseName} enableAirplaneMode data: ${JSON.stringify(data)}`);
            expect(data).assertEqual(undefined);
            netconn.disableAirplaneMode().then(data => {
                console.log(`${caseName} disableAirplaneMode data: ${JSON.stringify(data)}`);
                expect(data).assertEqual(undefined);
                done();
            }).catch(err => {
                console.log(`${caseName} disableAirplaneMode fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            })
        }).catch(err => {
            console.log(`${caseName} enableAirplaneMode fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_disableAirplaneMode_Async_0100
     * @tc.name    Test disableAirplaneMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_disableAirplaneMode_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_disableAirplaneMode_Async_0100';
        netconn.disableAirplaneMode((err, data) => {
            if (err) {
                console.log(`${caseName} disableAirplaneMode fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} disableAirplaneMode data: ${JSON.stringify(data)}`);
            expect(data).assertEqual(undefined);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_disableAirplaneMode_Promise_0100
     * @tc.name    Test disableAirplaneMode() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_disableAirplaneMode_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_disableAirplaneMode_Promise_0100';
        netconn.disableAirplaneMode().then(data => {
            console.log(`${caseName} disableAirplaneMode data: ${JSON.stringify(data)}`);
            expect(data).assertEqual(undefined);
            done();
        }).catch(err => {
            console.log(`${caseName} disableAirplaneMode fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getBackgroundPolicy_Async_0100
     * @tc.name    Test getBackgroundPolicy() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getBackgroundPolicy_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getBackgroundPolicy_Async_0100';
        netpolicy.getBackgroundPolicy((err, data) => {
            if (err) {
                console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} get data: ${JSON.stringify(data)}`);
            expect(data).assertEqual(netpolicy.NET_BACKGROUND_POLICY_DISABLE);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getBackgroundPolicy_Promise_0100
     * @tc.name    Test getBackgroundPolicy() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getBackgroundPolicy_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getBackgroundPolicy_Promise_0100';
        netpolicy.getBackgroundPolicy().then(data => {
            console.log(`${caseName} get data: ${JSON.stringify(data)}`);
            expect(data).assertEqual(netpolicy.NET_BACKGROUND_POLICY_DISABLE);
            done();
        }).catch(err => {
            console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
            return;
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Async_0100
     * @tc.name    Test setFactoryPolicy() to view the callback result after set setPolicyByUid
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Async_0100';
        let uid = 1;
        netpolicy.setPolicyByUid(uid, netpolicy.NET_POLICY_ALLOW_ALL, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setFactoryPolicy(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`${caseName} setFactoryPolicy fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} setFactoryPolicy data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
                netpolicy.getPolicyByUid(uid, (err, data) => {
                    if (err) {
                        console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                    expect(data).assertEqual(netpolicy.NET_POLICY_NONE);
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Async_0200
     * @tc.name    Test setFactoryPolicy() to view the callback result after setNetQuotaPolicies
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Async_0200';
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
            netpolicy.setFactoryPolicy(policy[0].slotId, (err, data) => {
                if (err) {
                    console.log(`${caseName} setFactoryPolicy fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} setFactoryPolicy data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
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
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Async_0300
     * @tc.name    Test setFactoryPolicy() to view the callback result after double setNetQuotaPolicies
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Async_0300';
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
        netpolicy.setNetQuotaPolicies(policy, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setFactoryPolicy(policy[0].slotId, (err, data) => {
                if (err) {
                    console.log(`${caseName} setFactoryPolicy fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} setFactoryPolicy data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
                netpolicy.getNetQuotaPolicies((err, data) => {
                    if (err) {
                        console.log(`${caseName} get fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                    expect(data.length).assertEqual(1);
                    expect(data[0].netType).assertEqual(policy[1].netType);
                    expect(data[0].slotId).assertEqual(policy[1].slotId);
                    expect(data[0].periodStartTime).assertEqual(policy[1].periodStartTime);
                    expect(data[0].periodDuration).assertEqual(policy[1].periodDuration);
                    expect(data[0].warningBytes).assertEqual(policy[1].warningBytes);
                    expect(data[0].limitBytes).assertEqual(policy[1].limitBytes);
                    expect(data[0].lastLimitSnooze).assertEqual(policy[1].lastLimitSnooze);
                    expect(data[0].metered).assertEqual(policy[1].metered);
                    expect(data[0].source).assertEqual(policy[1].source);
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Promise_0100
     * @tc.name    Test setFactoryPolicy() to view the callback result after set setPolicyByUid
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Promise_0100';
        let uid = 1;
        netpolicy.setPolicyByUid(uid, netpolicy.NET_POLICY_ALLOW_ALL).then(data => {
            netpolicy.setFactoryPolicy(SLOT_0).then(data => {
                console.log(`${caseName} setFactoryPolicy data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
                netpolicy.getPolicyByUid(uid).then(data => {
                    console.log(`${caseName} get data: ${JSON.stringify(data)}`);
                    expect(data).assertEqual(netpolicy.NET_POLICY_NONE);
                    done();
                }).catch(err => {
                    console.log(`${caseName} getPolicyByUid fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                })
            }).catch(err => {
                console.log(`${caseName} setFactoryPolicy fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`${caseName} setPolicyByUid fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Promise_0200
     * @tc.name    Test setFactoryPolicy() to view the callback result after setNetQuotaPolicies
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Promise_0200';
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
            netpolicy.setFactoryPolicy(policy[0].slotId).then(data => {
                console.log(`${caseName} setFactoryPolicy data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
                netpolicy.getNetQuotaPolicies().then(data => {
                    console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                    expect(data.length).assertEqual(0);
                    done();
                }).catch(err => {
                    console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                })
            }).catch(err => {
                console.log(`${caseName} setFactoryPolicy fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_setFactoryPolicy_Promise_0300
     * @tc.name    Test setFactoryPolicy() to view the callback result after double setNetQuotaPolicies
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_setFactoryPolicy_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setFactoryPolicy_Promise_0300';
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
            netpolicy.setFactoryPolicy(policy[0].slotId).then(data => {
                console.log(`${caseName} setFactoryPolicy data: ${JSON.stringify(data)}`);
                expect(data).assertUndefined();
                netpolicy.getNetQuotaPolicies().then(data => {
                    console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                    expect(data.length).assertEqual(1);
                    expect(data[0].netType).assertEqual(policy[1].netType);
                    expect(data[0].slotId).assertEqual(policy[1].slotId);
                    expect(data[0].periodStartTime).assertEqual(policy[1].periodStartTime);
                    expect(data[0].periodDuration).assertEqual(policy[1].periodDuration);
                    expect(data[0].warningBytes).assertEqual(policy[1].warningBytes);
                    expect(data[0].limitBytes).assertEqual(policy[1].limitBytes);
                    expect(data[0].lastLimitSnooze).assertEqual(policy[1].lastLimitSnooze);
                    expect(data[0].metered).assertEqual(policy[1].metered);
                    expect(data[0].source).assertEqual(policy[1].source);
                    done();
                }).catch(err => {
                    console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                })
            }).catch(err => {
                console.log(`${caseName} setFactoryPolicy fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_restoreFactoryData_Async_0100
     * @tc.name    Test restoreFactoryData() to view the callback result after setNetQuotaPolicies and setPolicyByUid
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_restoreFactoryData_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_restoreFactoryData_Async_0100';
        let uid = 1;
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
        netpolicy.setPolicyByUid(uid, netpolicy.NET_POLICY_ALLOW_ALL, (err, data) => {
            if (err) {
                console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            netpolicy.setNetQuotaPolicies(policy, (err, data) => {
                if (err) {
                    console.log(`${caseName} set fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                netconn.restoreFactoryData((err, data) => {
                    if (err) {
                        console.log(`${caseName} restoreFactoryData fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} restoreFactoryData data: ${JSON.stringify(data)}`);
                    expect(data).assertUndefined();
                    netpolicy.getNetQuotaPolicies((err, data) => {
                        if (err) {
                            console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                            expect().assertFail();
                            done();
                            return;
                        }
                        console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                        expect(data.length).assertEqual(0);
                        netpolicy.getPolicyByUid(uid, (err, data) => {
                            if (err) {
                                console.log(`${caseName} getPolicyByUid fail: ${JSON.stringify(err)}`);
                                expect().assertFail();
                                done();
                                return;
                            }
                            console.log(`${caseName} getPolicyByUid data: ${JSON.stringify(data)}`);
                            expect(data).assertEqual(netpolicy.NET_POLICY_NONE);
                            done();
                        });
                    });
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_restoreFactoryData_Promise_0100
     * @tc.name    Test restoreFactoryData() to view the callback result after setNetQuotaPolicies and setPolicyByUid
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_restoreFactoryData_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_restoreFactoryData_Promise_0100';
        let uid = 1;
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
        netpolicy.setPolicyByUid(uid, netpolicy.NET_POLICY_ALLOW_ALL).then(data => {
            netpolicy.setNetQuotaPolicies(policy).then(data => {
                netconn.restoreFactoryData().then(data => {
                    console.log(`${caseName} restoreFactoryData data: ${JSON.stringify(data)}`);
                    expect(data).assertUndefined();
                    netpolicy.getNetQuotaPolicies().then(data => {
                        console.log(`${caseName} getNetQuotaPolicies data: ${JSON.stringify(data)}`);
                        expect(data.length).assertEqual(0);
                        netpolicy.getPolicyByUid(uid).then(data => {
                            console.log(`${caseName} getPolicyByUid data: ${JSON.stringify(data)}`);
                            expect(data).assertEqual(netpolicy.NET_POLICY_NONE);
                            done();
                        }).catch(err => {
                            console.log(`${caseName} getPolicyByUid fail: ${JSON.stringify(err)}`);
                            expect().assertFail();
                            done();
                        })
                    }).catch(err => {
                        console.log(`${caseName} getNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                        expect().assertFail();
                        done();
                    })
                }).catch(err => {
                    console.log(`${caseName} restoreFactoryData fail: ${JSON.stringify(err)}`);
                    expect().assertFail();
                    done();
                })
            }).catch(err => {
                console.log(`${caseName} setNetQuotaPolicies fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`${caseName} setPolicyByUid fail: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Async_0100
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when iface is test
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Async_0100';
        let ifaceInfo = {
            "iface": "test",
            "start": Date.now() - 60 * 60,
            "end": Date.now()
        };
        statistics.getIfaceStatsDetail(ifaceInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Async_0200
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime more than the statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Async_0200';
        let ifaceInfo = {
            "iface": "eth0",
            "start": Date.now(),
            "end": Date.now() - 60 * 60
        };
        statistics.getIfaceStatsDetail(ifaceInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Async_0500
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime equal statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Async_0500';
        let time = Date.now();
        let ifaceInfo = {
            "iface": "eth0",
            "start": time,
            "end": time
        };
        statistics.getIfaceStatsDetail(ifaceInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Async_0600
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime and statTime before system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Async_0600';
        let ifaceInfo = {
            "iface": "eth0",
            "start": 1,
            "end": 2
        };
        statistics.getIfaceStatsDetail(ifaceInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Async_0700
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime and statTime after system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Async_0700';
        let ifaceInfo = {
            "iface": "eth0",
            "start": 1981080000,
            "end": 1981083600
        };
        statistics.getIfaceStatsDetail(ifaceInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Promise_0100
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when iface is test
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Promise_0100';
        let ifaceInfo = {
            "iface": "test",
            "start": Date.now() - 60 * 60,
            "end": Date.now()
        };
        statistics.getIfaceStatsDetail(ifaceInfo).then(data => {
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Promise_0200
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime more than the statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Promise_0200';
        let ifaceInfo = {
            "iface": "eth0",
            "start": Date.now(),
            "end": Date.now() - 60 * 60
        };
        statistics.getIfaceStatsDetail(ifaceInfo).then(data => {
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Promise_0500
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime equal statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Promise_0500';
        let time = Date.now();
        let ifaceInfo = {
            "iface": "eth0",
            "start": time,
            "end": time
        };
        statistics.getIfaceStatsDetail(ifaceInfo).then(data => {
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Promise_0600
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime and statTime before system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Promise_0600';
        let ifaceInfo = {
            "iface": "eth0",
            "start": 1,
            "end": 2
        };
        statistics.getIfaceStatsDetail(ifaceInfo).then(data => {
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceStatsDetail_Promise_0700
     * @tc.name    Test getIfaceStatsDetail() to view the callback result when endTime and statTime after system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceStatsDetail_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceStatsDetail_Promise_0700';
        let ifaceInfo = {
            "iface": "eth0",
            "start": 1981080000,
            "end": 1981083600
        };
        statistics.getIfaceStatsDetail(ifaceInfo).then(data => {
            console.log(`${caseName} getIfaceStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getIfaceStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0100
     * @tc.name    Test getUidStatsDetail() to view the callback result when iface is test
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0100';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "test",
                "start": Date.now() - 60 * 60,
                "end": Date.now()
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0200
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime more than the statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0200';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": Date.now(),
                "end": Date.now() - 60 * 60
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0500
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime equal statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0500';
        let time = Date.now();
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": time,
                "end": time
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0600
     * @tc.name    Test getUidStatsDetail() to view the callback result when uid is 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0600';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": Date.now() - 60 * 60,
                "end": Date.now()
            },
            "uid": 0
        };
        statistics.getUidStatsDetail(uidInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0700
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime and statTime before system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0700';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": 1,
                "end": 2
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Async_0800
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime and statTime after system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Async_0800';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": 1981080000,
                "end": 1981083600
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo, (err, data) => {
            if (err) {
                console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
                done();
                return;
            }
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0100
     * @tc.name    Test getUidStatsDetail() to view the callback result when iface is test
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0100';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "test",
                "start": Date.now() - 60 * 60,
                "end": Date.now()
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo).then(data => {
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0200
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime more than the statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0200';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": Date.now(),
                "end": Date.now() - 60 * 60
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo).then(data => {
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0500
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime equal statTime
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0500';
        let time = Date.now();
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": time,
                "end": time
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo).then(data => {
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0600
     * @tc.name    Test getUidStatsDetail() to view the callback result when uid is 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0600';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": Date.now() - 60 * 60,
                "end": Date.now()
            },
            "uid": 0
        };
        statistics.getUidStatsDetail(uidInfo).then(data => {
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0700
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime and statTime before system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0700';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": 1,
                "end": 2
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo).then(data => {
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidStatsDetail_Promise_0800
     * @tc.name    Test getUidStatsDetail() to view the callback result when endTime and statTime after system time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidStatsDetail_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidStatsDetail_Promise_0800';
        let uidInfo = {
            "ifaceInfo": {
                "iface": "eth0",
                "start": 1981080000,
                "end": 1981083600
            },
            "uid": 1001
        };
        statistics.getUidStatsDetail(uidInfo).then(data => {
            console.log(`${caseName} getUidStatsDetail data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch(err => {
            console.log(`${caseName} getUidStatsDetail fail: ${JSON.stringify(err)}`);
            done();
        })
    });

    /**
     * @tc.number  Telephony_NetworkManager_statistics_on_0100
     * @tc.name    Test on() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_statistics_on_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_statistics_on_0100';
        statistics.on('netStatsChange', (err, data) => {
            if (err) {
                console.log(`${caseName} on fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} on data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_statistics_off_0100
     * @tc.name    Test off() to view the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_statistics_off_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_statistics_off_0100';
        statistics.off('netStatsChange', (err, data) => {
            if (err) {
                console.log(`${caseName} off fail: ${JSON.stringify(err)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} off data: ${JSON.stringify(data)}`);
            expect(data).assertUndefined();
            done();
        });
    });
});
