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
import { describe, it, expect, beforeAll, afterAll, beforeEach, afterEach } from 'deccjsunit/index';

describe('NetworkManagerUidPolicyTest', function () {

    const UID_NUM_1 = 1;
    const UID_NUM_2 = 2;
    const UID_NUM_3 = 3;
    const UID_NUM_4 = 4;
    const UID_NUM_5 = 5;
    const UID_NUM_6 = 6;
    const DELAY = 5000;
    let uid = 100;
    let policy_change = 100;

    function sleep(timeout) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, timeout);
        })
    }

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_0100
     * @tc.name    APP called on (), call SetUidPolicy () sets the Policy to: NET_POLICY_NONE,
     *             UID is 1, trigger NetUidPolicyChanged,  The returned values are
     *             "Policy" :NET_POLICY_NONE and "UID" : 1
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
     * @tc.name    APP called on (), call SetUidPolicy () sets the Policy to:
     *             NET_POLICY_ALLOW_METERED_BACKGROUND,UID is 2, trigger NetUidPolicyChanged,  The returned values are
     *             "Policy" :NET_POLICY_ALLOW_METERED_BACKGROUND and "UID" : 2
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
     * @tc.name    APP called on (), call SetUidPolicy () sets the Policy to:
     *             NET_POLICY_TEMPORARY_ALLOW_METERED,UID is 3, trigger NetUidPolicyChanged,  The returned values are
     *             "Policy" :NET_POLICY_TEMPORARY_ALLOW_METERED and "UID" : 3
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
     * @tc.name    APP called on (), call SetUidPolicy () sets the Policy to:
     *             NET_POLICY_REJECT_METERED_BACKGROUND,UID is 4, trigger NetUidPolicyChanged,  The returned values are
     *             "Policy" :NET_POLICY_REJECT_METERED_BACKGROUND and "UID" : 4
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
     * @tc.name    APP called on (), call SetUidPolicy () sets the Policy to:
     *             NET_POLICY_ALLOW_ALL,UID is 5, trigger NetUidPolicyChanged,  The returned values are
     *             "Policy" :NET_POLICY_ALLOW_ALL and "UID" : 5
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
     * @tc.name    APP called on (), call SetUidPolicy () sets the Policy to:
     *             NET_POLICY_REJECT_ALL,UID is 6, trigger NetUidPolicyChanged,  The returned values are
     *             "Policy" :NET_POLICY_REJECT_ALL and "UID" : 6
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
     * @tc.name    APP called twice on (), call SetUidPolicy () sets the Policy
     *             to: NET_POLICY_ALLOW_METERED_BACKGROUND, UID is 1,  NetUidPolicyChanged is triggered, returning
     *             NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 1
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
     * @tc.name    APP called on (), call twice SetUidPolicy () sets the Policy to:
     *             NET_POLICY_ALLOW_METERED_BACKGROUND, UID is 1,  Both times NetUidPolicyChanged is triggered,
     *             returning NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 1
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
     * @tc.name    APP called on (), call twice SetUidPolicy () sets the Policy
     *             to: NET_POLICY_ALLOW_METERED_BACKGROUND, UID respectively 1, 2,  Both times NetUidPolicyChanged is
     *             triggered, returning NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 1,
     *             and NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 2
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
     * @tc.name    APP called on (),  Call SetUidPolicy() twice to set Policy to
     *             NET_POLICY_ALLOW_METERED_BACKGROUND and NET_POLICY_REJECT_ALL (UID = 1). Both times
     *             NetUidPolicyChanged is triggered.  The returned values are NET_POLICY_ALLOW_METERED_BACKGROUND, UID:
     *             1, NET_POLICY_TEMPORARY_ALLOW_METERED, UID: 1
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
     * @tc.name    Application of APP called on (), off () call again
     *             on (),  Call SetUidPolicy() to set Policy to
     *             NET_POLICY_ALLOW_METERED_BACKGROUND, UID to  1, and trigger NetUidPolicyChanged,  The return value
     *             is NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 1
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
     * @tc.name    APP called on (), and then call off ()
     *             , the return value for ERR_NONE
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
     * @tc.name    APP called on (), and then call twice off (), the
     *             return value for ERR_NONE
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

});