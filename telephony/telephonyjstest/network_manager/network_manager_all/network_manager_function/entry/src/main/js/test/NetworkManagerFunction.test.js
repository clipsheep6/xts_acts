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

import connection from '@ohos.net.connection';
import statistics from '@ohos.net.statistics';
import policy from '@ohos.net.policy';
import {describe, it, expect} from 'deccjsunit/index';

describe('NetworkManagerUidPolicyTest', function () {

    const UID_NUM_1 = 1;
    const UID_NUM_2 = 2;
    const UID_NUM_3 = 3;
    const UID_NUM_4 = 4;
    const UID_NUM_5 = 5;
    const UID_NUM_6 = 6;
    const DELAY = 5000;
    const NETID_IVVALID = 99;
    const ERR_NO_NETWORK = -11;
    const NETID_INVALID = -1;
    const NETID_OUT = 1001;
    const NET_CONN_ERR_NETID_NOT_FOUND = -8;
    const DATA_0 = 0;
    const DATA_LOWER_1 = -1;
    const DEFAULT_NET_ID = 100;
    let uid = 100;
    let policy_change = 100;

    function sleep(timeout) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, timeout);
        })
    }

    /*******************************************************************lichao****************************************/
    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0100
     * @tc.name    Register to listen for network Policy changes and change the Policy to NET_POLICY_NONE (UID: 1).
     *             Check that the listening result is NET_POLICY_NONE (UID: 1)
     * @tc.desc    Function test
     */
     it('Telephony_NetworkManager_on_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0100';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_NONE, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_NONE);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0200
     * @tc.name    Register to listen for network Policy changes and change the Policy to
     *             NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 2). Check that the listening
     *             result is NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 2)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0200';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_2, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_2);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0300
     * @tc.name    Register to listen for network Policy changes and change the Policy to
     *             NET_POLICY_TEMPORARY_ALLOW_METERED (UID: 3). Check that the listening
     *             result is NET_POLICY_TEMPORARY_ALLOW_METERED (UID: 3)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0300';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_3, policy.NET_POLICY_TEMPORARY_ALLOW_METERED, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_3);
            expect(policy_change).assertEqual(policy.NET_POLICY_TEMPORARY_ALLOW_METERED);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0400
     * @tc.name    Register to listen for network Policy changes and change the Policy to
     *             NET_POLICY_REJECT_METERED_BACKGROUND (UID: 4). Check that the listening
     *             result is NET_POLICY_REJECT_METERED_BACKGROUND (UID: 4)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0400';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_4, policy.NET_POLICY_REJECT_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_4);
            expect(policy_change).assertEqual(policy.NET_POLICY_REJECT_METERED_BACKGROUND);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0500
     * @tc.name    Register to listen for network Policy changes and change the Policy to
     *             NET_POLICY_ALLOW_ALL (UID: 5). Check that the listening
     *             result is NET_POLICY_ALLOW_ALL (UID: 5)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0500';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_5, policy.NET_POLICY_ALLOW_ALL, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_5);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_ALL);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0600
     * @tc.name    Register to listen for network Policy changes and change the Policy to
     *             NET_POLICY_REJECT_ALL (UID: 6). Check that the listening
     *             result is NET_POLICY_REJECT_ALL (UID: 6)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0600';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_6, policy.NET_POLICY_REJECT_ALL, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_6);
            expect(policy_change).assertEqual(policy.NET_POLICY_REJECT_ALL);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0700
     * @tc.name    Call registration twice to listen for network Policy changes and change the Policy to
     *             NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 1). Check that the listening
     *             result is NET_POLICY_ALLOW_METERED_BACKGROUND (UID: 1)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0700';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
            }
        });
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0800
     * @tc.name    Register to listen for network policy changes, set the policy to NET_POLICY_ALLOW_METERED_BACKGROUND
     *             twice, and the uid is 1. Check and listen for reporting twice, and the result is policy:
     *             NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_0800';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register the first time success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
                if (error) {
                    console.log(`${caseName} set fail: ${error}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName}  register the second time success:uid:  ${uid}, policy_change: ${policy_change}`);
                expect(uid).assertEqual(UID_NUM_1);
                expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
                policy.off('netUidPolicyChange', (err) => {
                    if (err) {
                        console.log(`${caseName}  Unregister err: ${err}`);
                    } else {
                    }
                });
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0900
     * @tc.name    Call registration to listen for network policy changes. Set the policy to
     *             NET_POLICY_ALLOW_METERED_BACKGROUND and uid are 1 and 2 respectively. Check, listen and report
     *             twice, and the results are policy: NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1;
     *             Policy:NET_POLICY_ALLOW_METERED_BACKGROUND，UID:2
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1000';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register the first time success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            sleep(DELAY);
            policy.setPolicyByUid(UID_NUM_2, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
                if (error) {
                    console.log(`${caseName} set fail: ${error}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName}  register the second time success:uid:  ${uid}, policy_change: ${policy_change}`);
                expect(uid).assertEqual(UID_NUM_2);
                expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
                policy.off('netUidPolicyChange', (err) => {
                    if (err) {
                        console.log(`${caseName}  Unregister err: ${err}`);
                    } else {
                    }
                });
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_1000
     * @tc.name    Call registration to listen for network policy changes, and set the two policies as
     *             NET_POLICY_ALLOW_METERED_BACKGROUND、NET_POLICY_REJECT_ALL and uid are 1 respectively. Check, listen
     *             and report twice, and the results are policy: NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1;
     *             Policy:NET_POLICY_REJECT_ALL，UID:1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1000';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register the first time success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            sleep(DELAY);
            policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_REJECT_ALL, (error) => {
                if (error) {
                    console.log(`${caseName} set fail: ${error}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName}  register the second time success:uid: ${uid}, policy_change: ${policy_change}`);
                expect(uid).assertEqual(UID_NUM_1);
                expect(policy_change).assertEqual(policy.NET_POLICY_REJECT_ALL);
                policy.off('netUidPolicyChange', (err) => {
                    if (err) {
                        console.log(`${caseName}  Unregister err: ${err}`);
                    } else {
                    }
                });
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_1100
     * @tc.name    Register, cancel and register to listen for network policy changes, and then change the policy to
     *             NET_POLICY_ALLOW_METERED_BACKGROUND, uid is 1, and the check listening report result is
     *             policy:NET_POLICY_ALLOW_METERED_BACKGROUND，UID:1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_on_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1100';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
            }
        });
        sleep(DELAY);
        policy.off('netUidPolicyChange', (err) => {
            if (err) {
                console.log(`${caseName}  Unregister err: ${err}`);
            } else {
            }
        });
        sleep(DELAY);
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  register the second time success:uid:  ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                } else {
                }
            });
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_off_Async_0100
     * @tc.name    After canceling the registration of listening network policy, change the policy value and uid value,
     *             and no listening is reported
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_off_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_off_Async_0100';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
                uid = value.uid;
                policy_change = value.policy;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
        });
        sleep(DELAY);
        policy.off('netUidPolicyChange', (err) => {
            if (err) {
                console.log(`${caseName}  Unregister err: ${err}`);
            } else {
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_2, policy.NET_POLICY_REJECT_ALL, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  Unregister success:uid: ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_off_Async_0200
     * @tc.name    Call twice off() to cancel the registration and listen to the network policy, change the policy
     *             value and uid value, and report without listening
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_off_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_off_Async_0200';
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
                return;
            } else {
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
        });
        sleep(DELAY);
        policy.off('netUidPolicyChange', (err) => {
            if (err) {
                console.log(`${caseName}  Unregister err: ${err}`);
            } else {
            }
        });
        policy.off('netUidPolicyChange', (err) => {
            if (err) {
                console.log(`${caseName}  Unregister err: ${err}`);
            } else {
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_2, policy.NET_POLICY_REJECT_ALL, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName}  Unregister success:uid: ${uid}, policy_change: ${policy_change}`);
            expect(uid).assertEqual(UID_NUM_1);
            expect(policy_change).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            done();
        });
    });
    /*******************************************************************lichao****************************************/

    /**********************************************liuxin*************************************************************/
    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0100
     * @tc.name    The netId is "NetType" get,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            console.log(`${caseName} get handle: ${handle.netId}`);
            connection.reportNetConnected(handle).then((data)=> {
                console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
                done();
            }).catch((error) => {
                console.log(`${caseName} reportNetConnected fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} get handle_fail: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetConnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0200';
        var handle = new connection.NetHandle(NETID_INVALID);
        console.log(`${caseName} set netId : ${handle.netId}`);
        connection.reportNetConnected(handle).then((data)=> {
            console.log(`${caseName} fail: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0300
     * @tc.name    The netId is Outside the scope of,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0300';
        var handle = new connection.NetHandle(NETID_OUT);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetConnected(handle).then((data)=> {
            console.log(`${caseName} get netId: ${handle.netId}`);
            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0100
     * @tc.name    The netId is "NetType" get,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0100';
        connection.getDefaultNet((error, handle) => {
            if (error) {
                console.log(`${caseName} get handle fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                connection.reportNetConnected(handle, (error, value) => {
                    if (error) {
                        console.log(`${caseName} reportNetConnected fail: ${error}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} end value: ${JSON.stringify(value)}`);
                    expect(value).assertEqual(connection.NET_CONN_SUCCESS);
                    done();
                });
            }
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetConnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0200';
        var handle = new connection.NetHandle(NETID_INVALID);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetConnected(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
        });

    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0300
     * @tc.name    The netId is Outside the scope of,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0300';
        var handle = new connection.NetHandle(NETID_OUT);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetConnected(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0100
     * @tc.name    The netId is "NetType" get,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            console.log(`${caseName} get handle: ${handle}`);
            connection.reportNetDisconnected(handle).then((data)=> {
                console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                expect(data).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} get handle_fail: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetDisconnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0200';
        var handle = new connection.NetHandle(NETID_INVALID);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetDisconnected(handle).then((data)=> {
            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0300
     * @tc.name    The netId is Outside the scope of,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0300';
        connection.NetHandle.netId = NETID_OUT;
        var handle = new connection.NetHandle(NETID_OUT);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetDisconnected(handle).then((data)=> {
            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0400
     * @tc.name    The netId is supported Network detection ,
     *             test reportNetDisconnected(), no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0400';
        connection.getDefaultNet().then((handle) => {
            console.log(`${caseName} get handle: ${handle}`);
            connection.reportNetConnected(handle).then((data)=> {
                console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                connection.reportNetDisconnected(handle).then((value)=> {
                    console.log(`${caseName} end value: ${JSON.stringify(value)}`);
                    expect(value).assertTrue();
                    done();
                }).catch((error) => {
                    console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                    expect().assertFail();
                    done();
                });
            }).catch((error) => {
                console.log(`${caseName} reportNetConnected fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} get handle_fail: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0100
     * @tc.name    The netId is "NetType" get,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0100';
        connection.getDefaultNet((error, handle) => {
            if (error) {
                console.log(`${caseName} get handle fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`${caseName} get netId: ${handle.netId}`);
                connection.reportNetDisconnected(handle, (error, value) => {
                    if (error) {
                        console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} end value: ${JSON.stringify(value)}`);
                    expect(value).assertEqual(connection.NET_CONN_SUCCESS);
                    done();
                });
            }
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetDisconnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0200';
        connection.NetHandle.netId = NETID_INVALID;
        console.log(`${caseName} set netId: ${JSON.stringify(connection.NetHandle.netId)}`);
        connection.reportNetDisconnected(connection.NetHandle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
            return;
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0300
     * @tc.name    The netId is Outside the scope of,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0300';
        connection.NetHandle.netId = NETID_OUT;
        console.log(`${caseName} set netId: ${JSON.stringify(connection.NetHandle.netId)}`);
        connection.reportNetDisconnected(connection.NetHandle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
            return;
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0400
     * @tc.name    The netId is supported Network detection ,
     *             test reportNetDisconnected(), no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0400';
        connection.getDefaultNet((error, handle) => {
            if (error) {
                console.log(`${caseName} get handle fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                connection.reportNetConnected(handle, (error, value) => {
                    if (error) {
                        console.log(`${caseName} reportNetConnected fail: ${error}`);
                        expect().assertFail();
                        done();
                        return;
                    }else{
                        connection.reportNetDisconnected(handle, (error, data) => {
                            if(error){
                                console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                                expect().assertFail();
                                done();
                                return;
                            }
                            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                            expect(value).assertEqual(connection.NET_CONN_SUCCESS);
                            done();
                        })
                    }
                });
            }
        });
    });
    /**********************************************liuxin*************************************************************/

    /**********************************************xuyuangao**********************************************************/
    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0100
     * @tc.name    TVerify hostName is "www.baidu.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_066600';
        connection.getDefaultNet().then((handle) => {
            console.log("handle=" + handle.id);
            handle.getAddressesByName("www.baidu.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressByName() to check the return value and
 *                 resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0200';
        connection.getDefaultNet().then((handle) => {
            console.log("handle=" + handle.id);
            handle.getAddressesByName("www.taobao.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0300
     * @tc.name    TVerify hostName is "www.csdn.net" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.csdn.net", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0400
     * @tc.name    TVerify hostName is "" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect(error!=0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0500
     * @tc.name    TVerify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("666", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0500
     * @tc.name    Verify hostName is "AAA" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("AAA", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0100
     * @tc.name    Verify hostName is "www.baidu.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0100';
        connection.getDefaultNet().then((handle) => {
            console.log("handle=" + handle.id);
            handle.getAddressByName("www.baidu.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0200';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.taobao.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0300
     * @tc.name    Verify hostName is "www.csdn.net" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.csdn.net", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0400
     * @tc.name    Verify hostName is "" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0500
     * @tc.name    Verify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("666", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0500
     * @tc.name    Verify hostName is "AAA" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0600';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("AAA", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0100
     * @tc.name    Verify hostName is "1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0100';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(1, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0200
     * @tc.name    Verify hostName is "2" test BindSocket() to check the return value and
     *              resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0200';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(2, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0300
     * @tc.name    Verify hostName is "100" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(100, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0400
     * @tc.name    Verify hostName is "0" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(0, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0600
     * @tc.name    Verify hostName is "-1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0600';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(-1, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0100
     * @tc.name    Verify hostName is "www.baidu.com" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.baidu.com").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0200';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.taobao.com").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0300
     * @tc.name    Verify hostName is "www.csdn.net" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.csdn.net").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0400
     * @tc.name    Verify hostName is "" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0500
     * @tc.name    Verify hostName is "666" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("666").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0600
     * @tc.name    Verify hostName is "AAA" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0600';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("AAA").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0100
     * @tc.name    Verify hostName is "www.baidu.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.baidu.com").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0200';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.taobao.com").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0300
     * @tc.name    Verify hostName is "www.csdn.net" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.csdn.net").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0400
     * @tc.name    Verify hostName is "" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0400';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName(" ").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0500
     * @tc.name    Verify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("666").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0600
     * @tc.name    Verify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0600';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("AAA").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0100
     * @tc.name    Verify hostName is "1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0100';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(1).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
                expect(data==0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0200
     * @tc.name    Verify hostName is "2" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0200';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(2).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
                expect(data==0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0300
     * @tc.name    Verify hostName is "100" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(100).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
                expect(data==0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0400
     * @tc.name    Verify hostName is "-1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(-1).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });
    /**********************************************xuyuangao**********************************************************/

    /**********************************************xinglekang**********************************************************/
    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Async_0100
     * @tc.name    The APP calls getCellularRxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Async_0100';
        console.log(`${caseName} done`);
        statistics.getCellularRxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Promise_0100
     * @tc.name    The APP calls getCellularRxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Promise_0100';
        statistics.getCellularRxBytes().then((data) => {
            console.log("${caseName} get data = " + data.message + " " + data.code);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Async_0100
     * @tc.name    The APP calls getCellularTxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Async_0100';
        statistics.getCellularTxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Promise_0100
     * @tc.name    The APP calls getCellularTxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Promise_0100';
        statistics.getCellularTxBytes().then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Async_0100
     * @tc.name    Set a valid application UID, call getUidRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Async_0100';
        let app_uid = 567;
        statistics.getUidRxBytes(app_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Async_0200
     * @tc.name    Set the invalid application UID by calling getUidRxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Async_0200';
        let app_useless_uid = 10000;
        statistics.getUidRxBytes(app_useless_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Promise_0100
     * @tc.name    Set a valid application UID, call getUidRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Promise_0100';
        let app_uid = 567;
        statistics.getUidRxBytes(app_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Promise_0200
     * @tc.name    Set the invalid application UID by calling getUidRxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Promise_0200';
        let app_uid = 10000;
        statistics.getUidRxBytes(app_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Async_0100
     * @tc.name    Set a valid application UID, call getUidTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Async_0100';
        let app_uid = 567;
        statistics.getUidTxBytes(app_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Async_0200
     * @tc.name    Set the invalid application UID by calling getUidTxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Async_0200';
        let app_useless_uid = 10000;
        statistics.getUidRxBytes(app_useless_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code <= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Promise_0100
     * @tc.name    Set a valid application UID, call getUidTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Promise_0100';
        let app_uid = 567;
        statistics.getUidTxBytes(app_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Promise_0200
     * @tc.name    Set the invalid application UID by calling getUidTxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Promise_0200';
        let app_useless_uid = 10000;
        statistics.getUidTxBytes(app_useless_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0100';
        let iface_name = "usb0";
        statistics.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceRxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0200';
        let iface_name = "wlan0";
        statistics.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceRxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0300';
        let iface_name = "eth0";
        statistics.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceRxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0400';
        let iface_name = "xlan0";
        statistics.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0100';
        let iface_name = "usb0";
        statistics.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceRxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0200';
        let iface_name = "wlan0";
        statistics.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceRxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0300';
        let iface_name = "eth0";
        statistics.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceRxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0400';
        let iface_name = "xlan0";
        statistics.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0100';
        let iface_name = "usb0";
        statistics.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceTxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0200';
        let iface_name = "wlan0";
        statistics.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceTxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0300';
        let iface_name = "eth0";
        statistics.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceTxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0400';
        let iface_name = "xlan0";
        statistics.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0100';
        let iface_name = "usb0";
        statistics.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceTxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0200';
        let iface_name = "wlan0";
        statistics.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceTxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0300';
        let iface_name = "eth0";
        statistics.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceTxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0400';
        let iface_name = "xlan0";
        statistics.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0100
     * @tc.name    Call getAllRxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Async_0100';
        statistics.getAllRxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Promise_0100
     * @tc.name    Call getAllRxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Promise_0100';
        statistics.getAllRxBytes().then((data) => {
            console.log(`${caseName} get data = ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get erro = ` +err);
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0100
     * @tc.name    Call getAllTxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Async_0100';
        statistics.getAllTxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllTxBytes_Promise_0100
     * @tc.name    Call getAllTxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Promise_0100';
        statistics.getAllTxBytes().then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });
    /**********************************************xinglekang**********************************************************/

    /**********************************************yaomintao**********************************************************/
    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Promise_0100
     * @tc.name    Test getDefaultNet() to check the default net id
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getDefaultNet_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Promise_0100';
        connection.getDefaultNet().then((data) => {
            console.log(`${caseName}` + "getDefaultNet promiss = " + data.netId);
            expect(data.netId).assertEqual(DEFAULT_NET_ID);
            done();
            return;
        }).catch(error => {
            console.log(`${caseName}` + "getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Async_0100
     * @tc.name    Test getDefaultNet() to check the default net id
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getDefaultNet_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Async_0100'
        connection.getDefaultNet((error, data) => {
            if (error) {
                console.log(`${caseName}` + "getDefaultNet callback error = " + error);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`${caseName}` + "getDefaultNet callback = " + data.netId);
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
                done();
                return;
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Promise_0100
     * @tc.name    Test hasDefaultNet() to check whether the default net active or not
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Promise_0100';
        connection.hasDefaultNet().then((data) => {
            console.log(`${caseName} end data: ${data}`);
            expect(data).assertTrue();
            done();
            return;
        }).catch(error => {
            console.log(`${caseName} get fail: ${error}`);
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Async_0100
     * @tc.name    Test hasDefaultNet() to check whether the default net active or not
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Async_0100'
        connection.hasDefaultNet((error, value) => {
            if (error) {
                console.log(`${caseName}` + "hasDefaultNet callback error = " + error);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`${caseName}` + "hasDefaultNet callback value = " + value);
                expect(value).assertTrue();
                done();
                return;
            }
        });
    });
    /**********************************************yaomintao**********************************************************/

    /*******************************************************************linfangfang***********************************/
    /**
     * @tc.number  Telephony_NetworkManager_getAllNets_Async_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
     it('Telephony_NetworkManager_getAllNets_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllNets_Async_0200';
        connection.getAllNets((error, value) => {
            if (error) {
                console.log(`${caseName}  get data fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`${caseName}  get value : ${JSON.stringify(value[0])}`);
                connection.getNetCapabilities(value[0], (error, value_2) => {
                    if (error) {
                        console.log(`${caseName}  get ID fail: ${error}`);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}  get value success: ${JSON.stringify(value_2)}`);
                        expect(value[0].netId != "").assertTrue();
                        done();
                    }
                });
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Async_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Async_0100';
        connection.getAllNets((error, value) => {
            if (error) {
                console.log(`${caseName}  get data fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`getAllNets get netID value : ${JSON.stringify(value[0])}`);
                connection.getConnectionProperties(value[0], (error, value_2) => {
                    if (error) {
                        console.log(`${caseName}  get ID fail: ${error}`);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}  get value success: ${JSON.stringify(value_2)}`);
                        expect(value_2.ifaceName != "").assertTrue();
                        done();
                    }
                });
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Async_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Async_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getConnectionProperties(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} set not-exitst netId get value fail: ${error}`);
                expect(error == ERR_NO_NETWORK).assertTrue();
                done();
                return;
            } else {
                console.log(`${caseName} set not-exitst netId get value success: ${JSON.stringify(value)}`);
                expect().assertFail();
                done();
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Async_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Async_0100';
        connection.getAllNets((error, value) => {
            if (error) {
                console.log(`${caseName}  get data fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`Telephony_NetworkManager getAllNets netID value : ${JSON.stringify(value[0].netId)}`);
                connection.getNetCapabilities(value[0], (error, data) => {
                    if (error) {
                        console.log(`${caseName}  get ID fail: ${error}`);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}  get value success: ${JSON.stringify(data)}`);
                        console.log(`${caseName}  get value success123456: ${JSON.stringify(data.netCaps_)}`);
                        console.log(`${caseName}  get value success122222: ${JSON.stringify(data.netCaps_[0].netCap)}`);
                        expect(data.netCaps_[0].netCap != "").assertTrue();
                        done();
                    }
                });
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Async_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Async_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getNetCapabilities(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} set not-exitst netId get value fail: ${error}`);
                expect(error == ERR_NO_NETWORK).assertTrue();
                done();
                return;
            } else {
                console.log(`${caseName} set not-exitst netId get value success: ${JSON.stringify(value)}`);
                expect().assertFail();
                done();
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllNets_Promise_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllNets_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllNets_Promise_0200';
        connection.getAllNets().then((data) => {
            for (let i = 0; i < data.length; i++) {
                console.log(`${caseName}  getAllNets promiss success: ${data[i]}`);
                expect(data[i].netId != "").assertTrue();
                done();
            }
        }).catch((error) => {
            console.log(`${caseName} getAllNets promiss error: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Promise_0100';
        connection.getAllNets().then((handle) => {
            connection.getConnectionProperties(handle[0]).then((data) => {
                console.log(`${caseName} getConnectionProperties promiss success: ${JSON.stringify(data)}`);
                expect(data.ifaceName != "").assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName} getConnectionProperties promiss fail: ${error}`);
            });
        }).catch((error) => {
            console.log(`${caseName} getAllNets promiss error: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Promise_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getConnectionProperties(handle).then((data) => {
            console.log(`${caseName} getConnectionProperties promiss fail: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} getConnectionProperties promiss error: ${error}`);
            expect(error== ERR_NO_NETWORK).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Promise_0100';
        connection.getAllNets().then((handle) => {
            connection.getNetCapabilities(handle[0]).then((data) => {
                console.log(`${caseName} getNetCapabilities promiss data suceess: ${JSON.stringify(data)}`);
                expect(data.netCaps_[0].netCap != "").assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName} getNetCapabilities promiss fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} getAllNets promiss error: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Promise_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Promise_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getNetCapabilities(handle).then((data) => {
            console.log(`${caseName} getNetCapabilities promiss data fail: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} getNetCapabilities promiss error: ${error}`);
            expect(error== ERR_NO_NETWORK).assertTrue();
            done();
        });
    });
    /*******************************************************************linfangfang***********************************/
});