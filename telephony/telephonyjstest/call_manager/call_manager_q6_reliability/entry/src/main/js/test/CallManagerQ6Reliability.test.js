/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import call from '@ohos.telephony.call';
import {describe, afterAll, it, expect, beforeAll, afterEach} from 'deccjsunit/index';
import {apiToReliability} from './lib/ApiToPromiseReliability.js';
import {
    scenceInCalling,
    callDetailsChangeOn,
    callDetailsChangeOff,
    hangupCall,
    hangupCall2,
    callId as gloabCallId
} from './lib/ScenceInCalling.js';
import {
    RIGHT_PASSWORD,
    CALL_STATUS_ACTIVE,
    AUTO_ACCEPT_NUMBER,
    AUTO_ACCEPT_NUMBER2,
    CALL_STATE_UNKNOWN,
    TEST_RELY_NUMBER,
    CALL_STATE_IDLE,
    DEFAULT_SLOT_ID,
    PHONE_NUMBER_VOICE_MAIL,
    TRANSFER_TYPE_NOT_REACHABLE,
    CALL_TRANSFER_ENABLE,
    TRANSFER_DISABLE,
    TRANSFER_TYPE_UNCONDITIONAL,
    RESTRICTION_TYPE_ROAMING_INCOMING,
    RESTRICTION_MODE_ACTIVATION,
    RESTRICTION_MODE_DEACTIVATION,
    MINUS_BOUNDARY_NUMBER_INT,
    CALL_WAITING_ENABLE,
    CALL_MODE_IMS,
    RESTRICTION_DISABLE
} from './lib/Const.js';
import {toString, promisify} from './lib/ApiToPromise.js';
import {scenceTransferCancel} from './lib/ScenceTransfer';
import {scenceLimitCancel} from './lib/ScenceLimitCalling';
describe('CallManagementReliablePerformance', function () {
    beforeAll(async function (done) {
        callDetailsChangeOn();
        try {
            await call.setCallPreferenceMode(DEFAULT_SLOT_ID, CALL_MODE_IMS);
            console.log('Telephony_CallManager setCallPreferenceMode success');
        } catch (error) {
            console.log(`Telephony_CallManager setCallPreferenceMode error,error:${toString(error)}`);
        }
        done();
    });

    afterAll(function () {
        callDetailsChangeOff();
        console.log('Telephony_CallManager all 24 case is over for callmanager CallManagementReliablePerformance');
    });

    afterEach(async function () {
        try {
            let callState = await call.getCallState();
            console.log(`Telephony_CallManager callState ${callState} ${gloabCallId}`);
            if (callState === CALL_STATE_UNKNOWN || callState === CALL_STATE_IDLE) {
                return;
            }
            if (gloabCallId) {
                let data = await hangupCall('Telephony_CallManager', gloabCallId);
                console.log(`Telephony_CallManager hangupCall success ${toString(data)}`);
            }
        } catch (error) {
            console.log('Telephony_CallManager hangupCall or getCallState error');
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0800
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER,
     *             after being accepted run function holdCall by callback
     *             for TEST_RELY_NUMBER times,the function always can return
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0800';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        apiToReliability({
            func: 'holdCall',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                hangupCall2(caseName, done, callId);
            }
        }, [callId, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0800
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2,
     *             after being accepted run function holdCall by promise for TEST_RELY_NUMBER times
     *             the function holdCall always return
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0800';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        apiToReliability({
            func: 'holdCall',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                hangupCall2(caseName, done, callId);
            }
        }, [callId]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0800
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER,
     *             after being accepted run function unHoldCall by callback for TEST_RELY_NUMBER times
     *             the function unHoldCall always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0800';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        apiToReliability({
            func: 'unHoldCall',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                hangupCall2(caseName, done, callId);
            }
        }, [callId, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0800
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 by promise,
     *             after being accepted run unHoldCall for TEST_RELY_NUMBER times,
     *             the function unHoldCall always return
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0800';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        apiToReliability({
            func: 'unHoldCall',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                hangupCall2(caseName, done, callId);
            }
        }, [callId]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_1100
     * @tc.name    Run function switchCall by args
     *             callId MINUS_BOUNDARY_NUMBER_INT by callback for TEST_RELY_NUMBER times,
     *             the callback function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_1100';
        apiToReliability({
            func: 'switchCall',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [MINUS_BOUNDARY_NUMBER_INT, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_1100
     * @tc.name    Run function switchCall by args
     *             callId MINUS_BOUNDARY_NUMBER_INT by promise for TEST_RELY_NUMBER times,
     *             the callback function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_1100';
        apiToReliability({
            func: 'switchCall',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [MINUS_BOUNDARY_NUMBER_INT]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_1000
     * @tc.name    Run function setCallWaiting by args
     *             callId DEFAULT_SLOT_ID activate false by callback then Run function setCallWaiting by args
     *             callId DEFAULT_SLOT_ID activate true by callback total for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_1000', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_1000';
        let testFunc = promisify(call.setCallWaiting);
        let flag = true;
        for (let i = 0;i < TEST_RELY_NUMBER;i++) {
            try {
                await testFunc(DEFAULT_SLOT_ID, i / 2 === 0 ? false : true);
            } catch (error) {
                flag = flag && false;
                expect().assertFail();
            }
        }
        console.log(`${caseName} success,count ${TEST_RELY_NUMBER},case ${flag ? 'success' : 'failed'}`);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_1000
     * @tc.name    Run function setCallWaiting by args
     *             callId DEFAULT_SLOT_ID activate false by promise then Run function setCallWaiting by args
     *             callId DEFAULT_SLOT_ID activate true by promise  total for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_1000', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_1000';
        let flag = true;
        for (let i = 0;i < TEST_RELY_NUMBER;i++) {
            try {
                await call.setCallWaiting(DEFAULT_SLOT_ID, i / 2 === 0 ? false : true);
            } catch (error) {
                expect().assertFail();
                console.log(`${caseName} error,error:${toString(error)}`);
                flag = flag && false;
            }
        }
        console.log(`${caseName} success,count ${TEST_RELY_NUMBER},case ${flag ? 'success' : 'failed'}`);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Async_0700
     * @tc.name    Run function getCallWaitingStatus by args
     *             slotId DEFAULT_SLOT_ID by callback for TEST_RELY_NUMBER times,
     *             the callback function always return CALL_WAITING_ENABLE
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Async_0700';
        apiToReliability({
            func: 'getCallWaitingStatus',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === CALL_WAITING_ENABLE;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0700
     * @tc.name    Run function getCallWaitingStatus by args
     *             slotId DEFAULT_SLOT_ID by callback for TEST_RELY_NUMBER times,
     *             the callback function always return CALL_WAITING_ENABLE
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0700';
        apiToReliability({
            func: 'getCallWaitingStatus',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === CALL_WAITING_ENABLE;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallRestriction_Async_2500
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId DEFAULT_SLOT_ID type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_ACTIVATION,run function setCallRestriction by callback
     *             by arg slotId DEFAULT_SLOT_ID type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_DEACTIVATION total for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_setCallRestriction_Async_2500', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallRestriction_Async_2500';
        let testFunc = promisify(call.setCallRestriction);
        let flag = true;
        for (let i = 0;i < TEST_RELY_NUMBER;i++) {
            try {
                await testFunc(DEFAULT_SLOT_ID, {
                    type:RESTRICTION_TYPE_ROAMING_INCOMING,
                    password:RIGHT_PASSWORD,
                    mode:i / 2 === 0 ? RESTRICTION_MODE_ACTIVATION : RESTRICTION_MODE_DEACTIVATION
                });
            } catch (error) {
                expect().assertFail();
                flag = flag && false;
            }
        }
        try {
            await scenceLimitCancel(caseName, RESTRICTION_TYPE_ROAMING_INCOMING);
        } catch (error) {
            expect().assertFail();
            flag = flag && false;
        }
        console.log(`${caseName} success,count ${TEST_RELY_NUMBER},case ${flag ? 'success' : 'failed'}`);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallRestriction_Promise_2500
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId DEFAULT_SLOT_ID type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_ACTIVATION,run function setCallRestriction by promise
     *             by arg slotId DEFAULT_SLOT_ID type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_DEACTIVATION total for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_setCallRestriction_Promise_2500', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallRestriction_Promise_2500';
        let flag = true;
        for (let i = 0;i < TEST_RELY_NUMBER;i++) {
            try {
                await call.setCallRestriction(DEFAULT_SLOT_ID, {
                    type:RESTRICTION_TYPE_ROAMING_INCOMING,
                    password:RIGHT_PASSWORD,
                    mode:i / 2 === 0 ? RESTRICTION_MODE_ACTIVATION : RESTRICTION_MODE_DEACTIVATION
                });
            } catch (error) {
                expect().assertFail();
                flag = flag && false;
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
            }
        }
        console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallRestrictionStatus_Async_1900
     * @tc.name    Run function  getCallRestrictionStatus by args
     *             slotId DEFAULT_SLOT_ID type RESTRICTION_TYPE_ROAMING_INCOMING by callback for TEST_RELY_NUMBER times,
     *             the callback function always return RESTRICTION_DISABLE,last cancel limit
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_getCallRestrictionStatus_Async_1900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallRestrictionStatus_Async_1900';
        apiToReliability({
            func: 'getCallRestrictionStatus',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === RESTRICTION_DISABLE;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                scenceLimitCancel(caseName, RESTRICTION_TYPE_ROAMING_INCOMING).then(data => {
                    done();
                }).catch(error => {
                    done();
                });
            }
        }, [DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallRestrictionStatus_Promise_1900
     * @tc.name    Run function  getCallRestrictionStatus by args
     *             slotId DEFAULT_SLOT_ID type RESTRICTION_TYPE_ROAMING_INCOMING by promise for TEST_RELY_NUMBER times,
     *             the callback function always return RESTRICTION_DISABLE,last cancel limit
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_getCallRestrictionStatus_Promise_1900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallRestrictionStatus_Promise_1900';
        apiToReliability({
            func: 'getCallRestrictionStatus',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === RESTRICTION_DISABLE;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                scenceLimitCancel(caseName, RESTRICTION_TYPE_ROAMING_INCOMING).then(data => {
                    done();
                }).catch(error => {
                    done();
                });
            }
        }, [DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableImsSwitch_Async_0600
     * @tc.name    Run function enableImsSwitch by args
     *             slotId DEFAULT_SLOT_ID by callback for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_enableImsSwitch_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableImsSwitch_Async_0600';
        try {
            apiToReliability({
                func: 'enableImsSwitch',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableImsSwitch_Promise_0600
     * @tc.name    Run function enableImsSwitch by args
     *             slotId DEFAULT_SLOT_ID by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_enableImsSwitch_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableImsSwitch_Promise_0600';
        try {
            apiToReliability({
                func: 'enableImsSwitch',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableImsSwitch_Async_0800
     * @tc.name    Run function disableImsSwitch by args
     *             slotId DEFAULT_SLOT_ID by callback for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_disableImsSwitch_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableImsSwitch_Async_0800';
        try {
            apiToReliability({
                func: 'disableImsSwitch',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} disableImsSwitch error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableImsSwitch_Promise_0800
     * @tc.name    Run function disableImsSwitch by args
     *             slotId DEFAULT_SLOT_ID by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_disableImsSwitch_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableImsSwitch_Promise_0800';
        try {
            apiToReliability({
                func: 'disableImsSwitch',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} disableImsSwitch error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isImsSwitchEnabled_Async_0700
     * @tc.name    Run function isImsSwitchEnabled by args
     *             slotId DEFAULT_SLOT_ID by callback for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_isImsSwitchEnabled_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_isImsSwitchEnabled_Async_0700';
        try {
            apiToReliability({
                func: 'isImsSwitchEnabled',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} isImsSwitchEnabled error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isImsSwitchEnabled_Promise_0700
     * @tc.name    Run function disableImsSwitch by args
     *             slotId DEFAULT_SLOT_ID by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_isImsSwitchEnabled_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_isImsSwitchEnabled_Promise_0700';
        try {
            apiToReliability({
                func: 'isImsSwitchEnabled',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} isImsSwitchEnabled error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallTransferInfo_Async_1300
     * @tc.name    Run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             type TRANSFER_TYPE_UNCONDITIONAL  by callback,
     *             the function return status TRANSFER_DISABLE,number PHONE_NUMBER_LENGTH_11,
     *             type TRANSFER_TYPE_UNCONDITIONAL,last cancel transfer
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_getCallTransferInfo_Async_1300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallTransferInfo_Async_1300';
        apiToReliability({
            func: 'getCallTransferInfo',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data && data.status === TRANSFER_DISABLE;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_UNCONDITIONAL, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallTransferInfo_Promise_1300
     * @tc.name    Run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             type TRANSFER_TYPE_UNCONDITIONAL  by promise,
     *             the function return status TRANSFER_DISABLE,number PHONE_NUMBER_LENGTH_11,
     *             type TRANSFER_TYPE_UNCONDITIONAL,last cancel transfer
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_getCallTransferInfo_Promise_1300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallTransferInfo_Promise_1300';
        apiToReliability({
            func: 'getCallTransferInfo',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data && data.status === TRANSFER_DISABLE;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            }
        }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_UNCONDITIONAL, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallTransfer_Async_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType CALL_TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NOT_REACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by callback
     * `           for TEST_RELY_NUMBER times,the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_setCallTransfer_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallTransfer_Async_1100';
        try {
            apiToReliability({
                func: 'setCallTransfer',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    scenceTransferCancel(caseName).then(data => {
                        done();
                    }).catch(error => {
                        done();
                    });
                }
            }, [
                DEFAULT_SLOT_ID, {
                    settingType:CALL_TRANSFER_ENABLE,
                    type:TRANSFER_TYPE_NOT_REACHABLE,
                    transferNum:PHONE_NUMBER_VOICE_MAIL
                }, function () {}
            ]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallTransfer error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallTransfer_Promise_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType CALL_TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NOT_REACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by promise
     *             for TEST_RELY_NUMBER times,the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_setCallTransfer_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallTransfer_Promise_1100';
        try {
            apiToReliability({
                func: 'setCallTransfer',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    scenceTransferCancel(caseName).then(data => {
                        done();
                    }).catch(error => {
                        done();
                    });
                }
            }, [
                DEFAULT_SLOT_ID, {
                    settingType:CALL_TRANSFER_ENABLE,
                    type:TRANSFER_TYPE_NOT_REACHABLE,
                    transferNum:PHONE_NUMBER_VOICE_MAIL
                }
            ]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallTransfer error,case failed,error:${toString(error)}`);
            done();
        }
    });
});
