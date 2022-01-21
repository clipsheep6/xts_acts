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
    let UID = 100;
    let POLICY_CHANGE = 100;

    function sleep(timeout) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, timeout);
        })
    }

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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_NONE, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_NONE);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_2, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_2);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_3, policy.NET_POLICY_TEMPORARY_ALLOW_METERED, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_3);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_TEMPORARY_ALLOW_METERED);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_4, policy.NET_POLICY_REJECT_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_4);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_REJECT_METERED_BACKGROUND);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_5, policy.NET_POLICY_ALLOW_ALL, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_5);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_ALL);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_6, policy.NET_POLICY_REJECT_ALL, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_6);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_REJECT_ALL);
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
            } else {
            }
        });
        policy.on('netUidPolicyChange', (err, value) => {
            if (err) {
                console.log(`${caseName} register fail: ${err}`);
                expect().assertFail();
                done();
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register first time success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
                if (error) {
                    console.log(`${caseName} set fail: ${error}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName}  register second time success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
                expect(UID).assertEqual(UID_NUM_1);
                expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register first time success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            sleep(DELAY);
            policy.setPolicyByUid(UID_NUM_2, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
                if (error) {
                    console.log(`${caseName} set fail: ${error}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName}  register second time success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
                expect(UID).assertEqual(UID_NUM_2);
                expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register first time success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            sleep(DELAY);
            policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_REJECT_ALL, (error) => {
                if (error) {
                    console.log(`${caseName} set fail: ${error}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName}  register second time success:uid: ${UID}, policy_change: ${POLICY_CHANGE}`);
                expect(UID).assertEqual(UID_NUM_1);
                expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_REJECT_ALL);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
            }
            console.log(`${caseName}  register second time success:uid:  ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
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
            } else {
                UID = value.uid;
                POLICY_CHANGE = value.uid;
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
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
            }
            console.log(`${caseName}  Unregister success:uid: ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
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
            } else {
            }
        });
        sleep(DELAY);
        policy.setPolicyByUid(UID_NUM_1, policy.NET_POLICY_ALLOW_METERED_BACKGROUND, (error) => {
            if (error) {
                console.log(`${caseName} set fail: ${error}`);
                expect().assertFail();
                done();
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
            }
            console.log(`${caseName}  Unregister success:uid: ${UID}, policy_change: ${POLICY_CHANGE}`);
            expect(UID).assertEqual(UID_NUM_1);
            expect(POLICY_CHANGE).assertEqual(policy.NET_POLICY_ALLOW_METERED_BACKGROUND);
            done();
        });
    });

});