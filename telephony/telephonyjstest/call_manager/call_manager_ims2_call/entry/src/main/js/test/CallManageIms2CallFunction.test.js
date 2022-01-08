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
import {
    MINUS_BOUNDARY_NUMBER_INT,
    AUTO_ACCEPT_NUMBER,
    AUTO_ACCEPT_NUMBER2,
    CALL_STATUS_ACTIVE,
    CALL_STATUS_HOLDING,
    PHONE_NUMBER_LENGTH_11,
    CALL_STATUS_DIALING,
    CALL_ID_NOT_EXIST,
    BOUNDARY_NUMBER_INT,
    CALL_STATE_UNKNOWN,
    CALL_STATE_IDLE,
    DEFAULT_SLOT_ID,
    CALL_MODE_IMS,
    DIAL_SCENCE_CALL_PRIVILEGED,
    DIAL_CARRIER_TYPE,
    SLOT_ID1,
    SLOT_ID_INVALID,
    SLOT_ID_INVALID_2,
    MEDIA_TYPE_VOICE,
    COMMAND_CALL_WAITTING_OPEN,
    COMMAND_CALL_WAITTING_CLOSE,
    COMMAND_CALL_WAITTING_QUERY,
    COMMAND_CALL_TRANS_OPEN,
    COMMAND_CALL_TRANS_OPEN2,
    COMMAND_CALL_TRANS_RESET,
    COMMAND_CALL_ERROR,
    COMMAND_CALL_ERROR2,
    COMMAND_CALL_ERROR3,
    COMMAND_CALL_ERROR4,
    COMMAND_CALL_ERROR5,
    COMMAND_CALL_ERROR6,
    CALL_WAITING_DISABLE,
    CALL_WAITING_ENABLE,
    CALL_TYPE_CS,
    CALL_TYPE_IMS,
    EVENT_SEND_USSD_FAILED
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {
    scenceInCalling,
    hangupCall2,
    hangupCall,
    callDetailsChangeOn,
    reachState,
    reachCallEventState,
    TeleCall,
    callId as gloabCallId
} from './lib/ScenceInCalling.js';
let callId = null;
let call1 = new TeleCall();
let call2 = new TeleCall();
describe('CallManageImsCall', function () {
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
        try {
            if (call1.callId) {
                let data = await call1.callHangupCall('Telephony_CallManager');
                console.log(`Telephony_CallManager hangupCall ${call1.callId} success ${toString(data)}`);
            }
        } catch (error) {
            console.log(`Telephony_CallManager hangupCall ${call1.callId} error ${toString(error)}`);
        }
        try {
            if (call2.callId) {
                let data = await call2.callHangupCall('Telephony_CallManager');
                console.log(`Telephony_CallManager hangupCall ${call2.callId} success ${toString(data)}`);
            }
        } catch (error) {
            console.log(`Telephony_CallManager hangupCall ${call2.callId} error ${toString(error)}`);
        }
    });

    afterAll(function () {
        console.log('Telephony_CallManager all 130 case is over for callmanager CallManageImsCall');
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0100
     * @tc.name    Run the function holdCall by args callId CALL_ID_NOT_EXIST by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0100';
        call.holdCall(CALL_ID_NOT_EXIST, (error, data) => {
            if (error) {
                console.log(`${caseName} holdCall ${CALL_ID_NOT_EXIST} error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} holdCall success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function holdCall by args callId current callId by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.holdCall(callId, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} holdCall ${callId} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} holdCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0300
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function holdCall by args callId MINUS_BOUNDARY_NUMBER_INT by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.holdCall(MINUS_BOUNDARY_NUMBER_INT, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} holdCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} holdCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function holdCall by args callId current callId by callback,the function return void,
     *             and can reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                expect(flag).assertTrue();
                console.log(`${caseName} reachState success,case ${flag ? 'success' :
                    'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                    flag = false;

                }
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function holdCall by args callId BOUNDARY_NUMBER_INT by callback,the function return error,
     *             and can not reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' : 'faild'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(BOUNDARY_NUMBER_INT, (error, data) => {
                if (error) {
                    console.log(`${caseName} holdCall ${BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
                    return;
                }
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function holdCall by args callId current callId by callback,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function holdCall by args callId current callId
     *             by callback,the function return error,and can not reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                    expect().assertFail();
                    console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.holdCall(callId, (error, data) => {
                    if (error) {
                        console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                        return;
                    }
                    flag = false;
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                    flag = false;
                }
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Async_0700
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function holdCall by args callId current callId by callback,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function holdCall by args callId MINUS_BOUNDARY_NUMBER_INT
     *             by callback,the function return error,and can not reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Async_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                    expect().assertFail();
                    console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.holdCall(MINUS_BOUNDARY_NUMBER_INT, (error, data) => {
                    if (error) {
                        console.log(`${caseName} holdCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
                        return;
                    }
                    flag = false;
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                    flag = false;

                }
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0100
     * @tc.name    Run the function holdCall by args callId CALL_ID_NOT_EXIST by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0100';
        call.holdCall(CALL_ID_NOT_EXIST).then(data => {
            expect().assertFail();
            console.log(`${caseName} holdCall success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} holdCall ${CALL_ID_NOT_EXIST} error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function holdCall by args callId current callId by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.holdCall(callId).then(data => {
                expect().assertFail();
                console.log(`${caseName} holdCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} holdCall ${callId} error,case ${flag ? 'success' : 'failed'},error:${
                    toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0300
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function holdCall by args callId MINUS_BOUNDARY_NUMBER_INT by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.holdCall(MINUS_BOUNDARY_NUMBER_INT).then(data => {
                expect().assertFail();
                console.log(`${caseName} holdCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} holdCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ?
                    'success' : 'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function holdCall by args callId current callId by promise,the function return void,
     *             and can reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                expect(flag).assertTrue();
                console.log(`${caseName} reachState success,case ${flag ? 'success' :
                    'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId).catch(error => {
                console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function holdCall by args callId BOUNDARY_NUMBER_INT by promise,the function return error,
     *             and can not reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' : 'faild'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(BOUNDARY_NUMBER_INT).then(data => {
                flag = false;
            }).catch(error => {
                console.log(`${caseName} holdCall ${BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function holdCall by args callId current callId by promise,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function holdCall by args callId current callId
     *             by promise,the function return error,and can not reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                    expect().assertFail();
                    console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.holdCall(callId).then(data => {
                    flag = false;
                }).catch(error => {
                    console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId).catch(error => {
                console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_holdCall_Promise_0700
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function holdCall by args callId current callId by promise,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function holdCall by args callId MINUS_BOUNDARY_NUMBER_INT
     *             by promise,the function return error,and can not reach CALL_STATUS_HOLDING
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_holdCall_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_holdCall_Promise_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                    expect().assertFail();
                    console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.holdCall(MINUS_BOUNDARY_NUMBER_INT).then(data => {
                    flag = false;
                }).catch(error => {
                    console.log(`${caseName} holdCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId).catch(error => {
                console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0100
     * @tc.name    Run the function unHoldCall by args callId CALL_ID_NOT_EXIST by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0100';
        call.unHoldCall(CALL_ID_NOT_EXIST, (error, data) => {
            if (error) {
                console.log(`${caseName} unHoldCall ${CALL_ID_NOT_EXIST} error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} unHoldCall success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function unHoldCall by args callId current callId by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.unHoldCall(callId, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} unHoldCall ${callId} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} unHoldCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0300
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function unHoldCall by args callId MINUS_BOUNDARY_NUMBER_INT by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.unHoldCall(MINUS_BOUNDARY_NUMBER_INT, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} unHoldCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} unHoldCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function unHoldCall by args callId current callId by callback,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.unHoldCall(callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} unHoldCall ${callId} error,error:${toString(error)}`);
                    return;
                }
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function unHoldCall by args callId MINUS_BOUNDARY_NUMBER_INT by callback,
     *             the function return error,and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.unHoldCall(MINUS_BOUNDARY_NUMBER_INT, (error, data) => {
                if (error) {
                    console.log(`${caseName} unHoldCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
                    return;
                }
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function holdCall by args callId current callId by callback,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function unHoldCall by args callId current callId
     *             by callback,the function return void,and can reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                    flag = flag && (data.callState === CALL_STATUS_ACTIVE);
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState success,case ${flag ? 'success' :
                        'failed'},data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect().assertFail();
                    console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.unHoldCall(callId, (error, data) => {
                    if (error) {
                        console.log(`${caseName} unHoldCall ${callId} error,error:${toString(error)}`);
                        flag = false;

                    }
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                    flag = false;

                }
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Async_0700
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function holdCall by args callId current callId by callback,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function unHoldCall
     *             by args callId MINUS_BOUNDARY_NUMBER_INT by callback,
     *             the function return error,and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Async_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                    expect().assertFail();
                    console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState success,case ${flag ? 'success' :
                        'failed'},data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.unHoldCall(MINUS_BOUNDARY_NUMBER_INT, (error, data) => {
                    if (error) {
                        console.log(`${caseName} unHoldCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${
                            toString(error)}`);
                        return;
                    }
                    flag = false;
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                    flag = false;

                }
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0100
     * @tc.name    Run the function unHoldCall by args callId CALL_ID_NOT_EXIST by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0100';
        call.unHoldCall(CALL_ID_NOT_EXIST).then(data => {
            expect().assertFail();
            console.log(`${caseName} unHoldCall success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} unHoldCall ${CALL_ID_NOT_EXIST} error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function unHoldCall by args callId current callId by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.unHoldCall(callId).then(data => {
                expect().assertFail();
                console.log(`${caseName} unHoldCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} unHoldCall ${callId} error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0300
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function unHoldCall by args callId MINUS_BOUNDARY_NUMBER_INT by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.unHoldCall(MINUS_BOUNDARY_NUMBER_INT).then(data => {
                expect().assertFail();
                console.log(`${caseName} unHoldCall success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} unHoldCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function unHoldCall by args callId current callId by promise,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.unHoldCall(callId).then(data => {
                flag = false;
            }).catch(error => {
                console.log(`${caseName} unHoldCall ${callId} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function unHoldCall by args callId MINUS_BOUNDARY_NUMBER_INT by promise,
     *             the function return error,and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.unHoldCall(MINUS_BOUNDARY_NUMBER_INT).then(data => {
                flag = false;
            }).catch(error => {
                console.log(`${caseName} unHoldCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function holdCall by args callId current callId by promise,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function unHoldCall by args callId current callId
     *             by promise,the function return void,and can reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                    flag = flag && (data.callState === CALL_STATUS_ACTIVE);
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState success,case ${flag ? 'success' :
                        'failed'},data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect().assertFail();
                    console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.unHoldCall(callId).catch(error => {
                    console.log(`${caseName} unHoldCall ${callId} error,error:${toString(error)}`);
                    flag = false;
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId).catch(error => {
                console.log(`${caseName} unHoldCall ${callId} error,error:${toString(error)}`);
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_unHoldCall_Promise_0700
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function holdCall by args callId current callId by promise,the function return void,
     *             and can reach CALL_STATUS_HOLDING,then run function unHoldCall
     *             by args callId MINUS_BOUNDARY_NUMBER_INT by promise,
     *             the function return error,and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_unHoldCall_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_unHoldCall_Promise_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_HOLDING, '', false).then(data => {
                flag = flag && (data.callState === CALL_STATUS_HOLDING);
                reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                    expect().assertFail();
                    console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect(flag).assertTrue();
                    console.log(`${caseName} reachState success,case ${flag ? 'success' :
                        'failed'},data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                });
                call.unHoldCall(MINUS_BOUNDARY_NUMBER_INT).then(data => {
                    flag = false;
                }).catch(error => {
                    console.log(`${caseName} unHoldCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
                });
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.holdCall(callId).catch(error => {
                console.log(`${caseName} holdCall ${callId} error,error:${toString(error)}`);
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0100
     * @tc.name    Run the function switchCall by args callId CALL_ID_NOT_EXIST by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0100';
        call.switchCall(CALL_ID_NOT_EXIST, (error, data) => {
            if (error) {
                console.log(`${caseName} switchCall ${CALL_ID_NOT_EXIST} error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} switchCall ${CALL_ID_NOT_EXIST} success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId current callId by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.switchCall(callId, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} switchCall ${callId} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} switchCall ${callId} success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0300
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId MINUS_BOUNDARY_NUMBER_INT by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.switchCall(MINUS_BOUNDARY_NUMBER_INT, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} success,case failed,data:${
                    toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function switchCall by args callId MINUS_BOUNDARY_NUMBER_INT by callback,
     *             the function return error,and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.switchCall(MINUS_BOUNDARY_NUMBER_INT, (error, data) => {
                if (error) {
                    console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
                    return;
                }
                flag = false;
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} success,data:${toString(data)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function switchCall by args callId current callId by callback,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.switchCall(callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} switchCall ${callId} error,error:${toString(error)}`);
                    return;
                }
                flag = false;
                console.log(`${caseName} switchCall ${callId} success,data:${toString(data)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId current callId by callback,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0600';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            flag = flag && (data.callState === CALL_STATUS_DIALING);
            call2.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                done();
            });
            call.switchCall(call2.callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} switchCall ${call2.callId} error,error:${toString(error)}`);
                    return;
                }
                console.log(`${caseName} switchCall ${call2.callId} success,data:${toString(data)}`);
                flag = false;
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0700
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId pre callId by callback,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0700';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            flag = flag && (data.callState === CALL_STATUS_DIALING);
            call1.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                done();
            });
            call.switchCall(call1.callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} switchCall ${call1.callId} error,error:${toString(error)}`);
                    return;
                }
                flag = false;
                console.log(`${caseName} switchCall ${call1.callId} success,data:${toString(data)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0800
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function switchCall by args callId pre callId by callback,the function return void,
     *             and can reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0800';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            flag = flag && (data.callState === CALL_STATUS_ACTIVE);
            call1.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState success,case ${flag ? 'success' :
                    'failed'},data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                done();
            });

            call.switchCall(call1.callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} switchCall ${call1.callId} error,error:${toString(error)}`);
                    flag = false;
                    return;
                }
                console.log(`${caseName} switchCall ${call1.callId} success,data:${toString(data)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_0900
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function switchCall by args callId current callId by callback,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_0900';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            flag = flag && (data.callState === CALL_STATUS_ACTIVE);
            call2.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                done();
            });
            call.switchCall(call2.callId, (error, data) => {
                if (error) {
                    console.log(`${caseName} switchCall ${call2.callId} error,error:${toString(error)}`);
                    return;
                }
                flag = false;
                console.log(`${caseName} switchCall ${call2.callId} success,data:${toString(data)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Async_1000
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function switchCall by args callId MINUS_BOUNDARY_NUMBER_INT by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Async_1000';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            flag = flag && (data.callState === CALL_STATUS_ACTIVE);
            call.switchCall(MINUS_BOUNDARY_NUMBER_INT, async (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                } else {
                    expect().assertFail();
                    console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} success,case failed,data:${
                        toString(data)}`);
                }
                done();
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0100
     * @tc.name    Run the function switchCall by args callId CALL_ID_NOT_EXIST by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0100';
        call.switchCall(CALL_ID_NOT_EXIST).then(data => {
            expect().assertFail();
            console.log(`${caseName} switchCall ${CALL_ID_NOT_EXIST} success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} switchCall ${CALL_ID_NOT_EXIST} error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId current callId by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.switchCall(callId).then(data => {
                expect().assertFail();
                console.log(`${caseName} switchCall ${callId} success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} switchCall ${callId} error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0300
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId MINUS_BOUNDARY_NUMBER_INT by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.switchCall(MINUS_BOUNDARY_NUMBER_INT).then(data => {
                expect().assertFail();
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} success,case failed,data:${
                    toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function switchCall by args callId MINUS_BOUNDARY_NUMBER_INT by promise,
     *             the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.switchCall(MINUS_BOUNDARY_NUMBER_INT).then(data => {
                flag = false;
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} success,data:${toString(data)}`);
            }).catch(error => {
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function switchCall by args callId current callId by promise,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            reachState(caseName, CALL_STATUS_ACTIVE, '', false).then(data => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
            call.switchCall(callId).then(data => {
                flag = false;
                console.log(`${caseName} switchCall ${callId} success,data:${toString(data)}`);
            }).catch(error => {
                console.log(`${caseName} switchCall ${callId} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId current callId by callback,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0600';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            flag = flag && (data.callState === CALL_STATUS_DIALING);
            call2.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                done();
            });
            call.switchCall(call2.callId).then(data => {
                flag = false;
                console.log(`${caseName} switchCall ${call2.callId} success,data:${toString(data)}`);
            }).catch(error => {
                console.log(`${caseName} switchCall ${call2.callId} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0700
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function switchCall by args callId pre callId by promise,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0700';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            flag = flag && (data.callState === CALL_STATUS_DIALING);
            call1.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                done();
            });
            call.switchCall(call1.callId).then(data => {
                flag = false;
                console.log(`${caseName} switchCall ${call1.callId} success,data:${toString(data)}`);
            }).catch(error => {
                console.log(`${caseName} switchCall ${call1.callId} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0800
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function switchCall by args callId pre callId by promise,the function return void,
     *             and can reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0800';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            flag = flag && (data.callState === CALL_STATUS_ACTIVE);
            call1.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState success,case ${flag ? 'success' :
                    'failed'},data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect().assertFail();
                console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
                done();
            });
            call.switchCall(call1.callId).then(data => {
                console.log(`${caseName} switchCall ${call1.callId} success,data:${toString(data)}`);
            }).catch(error => {
                flag = false;
                console.log(`${caseName} switchCall ${call1.callId} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_0900
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function switchCall by args callId current callId by callback,the function return error,
     *             and can not reach CALL_STATUS_ACTIVE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_0900';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            flag = flag && (data.callState === CALL_STATUS_ACTIVE);
            call2.callReachState(caseName, CALL_STATUS_ACTIVE, '', false).then(async (data) => {
                expect().assertFail();
                console.log(`${caseName} reachState success,case failed,data:${toString(data)}`);
                done();
            }).catch(async (error) => {
                expect(flag).assertTrue();
                console.log(`${caseName} reachState error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                done();
            });
            call.switchCall(call2.callId).then(data => {
                flag = false;
                console.log(`${caseName} switchCall ${call2.callId} success,data:${toString(data)}`);
            }).catch(error => {
                console.log(`${caseName} switchCall ${call2.callId} error,error:${toString(error)}`);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_switchCall_Promise_1000
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function switchCall by args callId MINUS_BOUNDARY_NUMBER_INT by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_switchCall_Promise_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_switchCall_Promise_1000';
        callId = null;
        try {
            let data = await call1.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call2.callScenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            flag = flag && (data.callState === CALL_STATUS_ACTIVE);
            call.switchCall(MINUS_BOUNDARY_NUMBER_INT).then(async data => {
                expect().assertFail();
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} success,case failed,data:${
                    toString(data)}`);
                done();
            }).catch(async error => {
                expect(flag).assertTrue();
                console.log(`${caseName} switchCall ${MINUS_BOUNDARY_NUMBER_INT} error,case ${flag ? 'success' :
                    'failed'},error:${toString(error)}`);
                done();
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0100
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_WAITTING_OPEN by callback,
     *             the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0100';
        call.dial(COMMAND_CALL_WAITTING_OPEN, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0200
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_WAITTING_CLOSE options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by callback,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0200';
        call.dial(COMMAND_CALL_WAITTING_CLOSE, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0300
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_WAITTING_QUERY options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by callback,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0300';
        call.dial(COMMAND_CALL_WAITTING_QUERY, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0400
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_TRANS_OPEN options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by callback,the function return true,
     *             run the function dial by args phoneNumber COMMAND_CALL_TRANS_RESET to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0400';
        call.dial(COMMAND_CALL_TRANS_OPEN, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            } else {
                expect(data).assertTrue();
                console.log(`${caseName} dial success,case ${data === true ? 'success' :
                    'failed'},data:${toString(data)}`);
            }
            call.dial(COMMAND_CALL_TRANS_RESET, (error, data) => {
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0500
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_TRANS_OPEN2 options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by callback,the function return true,
     *             run the function dial by args phoneNumber COMMAND_CALL_TRANS_RESET to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0500';
        call.dial(COMMAND_CALL_TRANS_OPEN2, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            } else {
                expect(data).assertTrue();
                console.log(`${caseName} dial success,case ${data === true ? 'success' :
                    'failed'},data:${toString(data)}`);
            }
            call.dial(COMMAND_CALL_TRANS_RESET, (error, data) => {
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0600
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_ERROR options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by callback,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0600';
        call.dial(COMMAND_CALL_ERROR, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' :
                'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0700
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_ERROR2 options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by callback,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0700';
        call.dial(COMMAND_CALL_ERROR2, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' :
                'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Async_0800
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_ERROR3 options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by callback,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Async_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Async_0800';
        call.dial(COMMAND_CALL_ERROR3, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' :
                'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0100
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_WAITTING_OPEN by promise,
     *             the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0100';
        call.dial(COMMAND_CALL_WAITTING_OPEN).then(data => {
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0200
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_WAITTING_CLOSE options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by promise,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0200';
        call.dial(COMMAND_CALL_WAITTING_CLOSE, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}).then(data => {
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0300
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_WAITTING_QUERY options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by promise,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0300';
        call.dial(COMMAND_CALL_WAITTING_QUERY, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}).then(data => {
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0400
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_TRANS_OPEN options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by promise,the function return true,
     *             run the function dial by args phoneNumber COMMAND_CALL_TRANS_RESET to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0400', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0400';
        try {
            let data = await call.dial(COMMAND_CALL_TRANS_OPEN, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
                dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE});
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
        }
        try {
            await call.dial(COMMAND_CALL_TRANS_RESET);
        } catch (error) {

        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0500
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_TRANS_OPEN2 options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by promise,the function return true,
     *             run the function dial by args phoneNumber COMMAND_CALL_TRANS_RESET to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0500', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0500';
        try {
            let data = await call.dial(COMMAND_CALL_TRANS_OPEN2, {accountId:DEFAULT_SLOT_ID,
                videoState:MEDIA_TYPE_VOICE, dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE});
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
        }
        try {
            await call.dial(COMMAND_CALL_TRANS_RESET);
        } catch (error) {

        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0600
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_ERROR4 options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by promise,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0600';
        call.dial(COMMAND_CALL_ERROR4, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}).then(data => {
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0700
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_ERROR5 options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by promise,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0700';
        call.dial(COMMAND_CALL_ERROR5, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}).then(data => {
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_USSD_dial_Promise_0800
     * @tc.name    Run the function dial by args phoneNumber COMMAND_CALL_ERROR6 options
     *             {accountId:DEFAULT_SLOT_ID,videoState:MEDIA_TYPE_VOICE,dialScene:DIAL_SCENCE_CALL_PRIVILEGED,
     *             dialType:DIAL_CARRIER_TYPE} by promise,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_USSD_dial_Promise_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_USSD_dial_Promise_0800';
        call.dial(COMMAND_CALL_ERROR6, {accountId:DEFAULT_SLOT_ID, videoState:MEDIA_TYPE_VOICE,
            dialScene:DIAL_SCENCE_CALL_PRIVILEGED, dialType:DIAL_CARRIER_TYPE}).then(data => {
            expect(data).assertTrue();
            console.log(`${caseName} dial success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0100
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to open,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0100';
        call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} setCallWaiting success,case success,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0200
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by callback to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0200';
        call.setCallWaiting(DEFAULT_SLOT_ID, false, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
            } else {
                console.log(`${caseName} setCallWaiting success,case success,data:${toString(data)}`);
            }
            call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0300
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to open,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to open,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0300';
        call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                console.log(`${caseName} setCallWaiting success,case success,data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0400
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by callback to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by callback to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0400';
        call.setCallWaiting(DEFAULT_SLOT_ID, false, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.setCallWaiting(DEFAULT_SLOT_ID, false, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                } else {
                    console.log(`${caseName} setCallWaiting success,case success,data:${toString(data)}`);
                }
                call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0500
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to open,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by callback to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0500';
        call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.setCallWaiting(DEFAULT_SLOT_ID, false, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                } else {
                    console.log(`${caseName} setCallWaiting success,case success,data:${toString(data)}`);
                }
                call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0600
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID1 activate true by callback to open,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0600';
        call.setCallWaiting(SLOT_ID1, true, (error, data) => {
            if (error) {
                console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0700
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID_INVALID activate true by callback to open,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0700';
        call.setCallWaiting(SLOT_ID_INVALID, true, (error, data) => {
            if (error) {
                console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0800
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID_INVALID_2 activate false by callback to close,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0800';
        call.setCallWaiting(SLOT_ID_INVALID_2, false, (error, data) => {
            if (error) {
                console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Async_0900
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID1 activate false by callback to close,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Async_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Async_0900';
        call.setCallWaiting(SLOT_ID1, false, (error, data) => {
            if (error) {
                console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        });
    });


    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0100
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to open,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0100';
        call.setCallWaiting(DEFAULT_SLOT_ID, true).then(data => {
            console.log(`${caseName} setCallWaiting success,case success,data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0200
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by promise to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0200';
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, false);
            console.log(`${caseName} setCallWaiting success,case success`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
        }
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
        } catch (error) {

        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0300
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to open,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to open,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0300', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0300';
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
            console.log(`${caseName} setCallWaiting success,case success`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0400
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by promise to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by promise to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0400', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0400';
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, false);
            await call.setCallWaiting(DEFAULT_SLOT_ID, false);
            console.log(`${caseName} setCallWaiting success,case success`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
        }
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
        } catch (error) {

        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0500
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to open,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by promise to close,
     *             the function return void,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0500', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0500';
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
            await call.setCallWaiting(DEFAULT_SLOT_ID, false);
            console.log(`${caseName} setCallWaiting success,case success`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
        }
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
        } catch (error) {

        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0600
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID1 activate true by promise to open,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0600';
        call.setCallWaiting(SLOT_ID1, true).then(data => {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0700
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID_INVALID activate true by promise to open,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0700';
        call.setCallWaiting(SLOT_ID_INVALID, true).then(data => {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0800
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID_INVALID_2 activate false by promise to close,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0800';
        call.setCallWaiting(SLOT_ID_INVALID_2, false).then(data => {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_setCallWaiting_Promise_0900
     * @tc.name    Run the function setCallWaiting by args slotId SLOT_ID1 activate false by promise to close,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_setCallWaiting_Promise_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_setCallWaiting_Promise_0900';
        call.setCallWaiting(SLOT_ID1, false).then(data => {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} setCallWaiting error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Async_0100
     * @tc.name    Run the function getCallWaitingStatus by args slotId DEFAULT_SLOT_ID by callback,
     *             the function return CALL_WAITING_ENABLE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Async_0100';
        call.getCallWaitingStatus(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} getCallWaitingStatus error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            expect(data === CALL_WAITING_ENABLE);
            console.log(`${caseName} getCallWaitingStatus success,case ${data === CALL_WAITING_ENABLE ?
                'success' : 'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Async_0200
     * @tc.name    Run the function getCallWaitingStatus by args slotId SLOT_ID1 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Async_0200';
        call.getCallWaitingStatus(SLOT_ID1, (error, data) => {
            if (error) {
                console.log(`${caseName} getCallWaitingStatus error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} getCallWaitingStatus success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Async_0300
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback,
     *             the function return void,
     *             run the function getCallWaitingStatus by args slotId DEFAULT_SLOT_ID by callback,
     *             the function return CALL_WAITING_ENABLE,
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Async_0300';
        call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.getCallWaitingStatus(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} getCallWaitingStatus error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                expect(data === CALL_WAITING_ENABLE).assertTrue();
                console.log(`${caseName} getCallWaitingStatus success,case ${data === CALL_WAITING_ENABLE ?
                    'success' : 'error'},data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Async_0400
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by callback,
     *             the function return void,
     *             run the function getCallWaitingStatus by args slotId DEFAULT_SLOT_ID by callback,
     *             the function return CALL_WAITING_DISABLE,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by callback to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Async_0400';
        call.setCallWaiting(DEFAULT_SLOT_ID, false, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} setCallWaiting error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.getCallWaitingStatus(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} getCallWaitingStatus error,case failed,error:${toString(error)}`);
                } else {
                    expect(data === CALL_WAITING_DISABLE).assertTrue();
                    console.log(`${caseName} getCallWaitingStatus success,case ${data === CALL_WAITING_DISABLE ?
                        'success' : 'error'},data:${toString(data)}`);
                }
                call.setCallWaiting(DEFAULT_SLOT_ID, true, (error, data) => {
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Async_0500
     * @tc.name    Run the function getCallWaitingStatus by args slotId SLOT_ID_INVALID by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Async_0500';
        call.getCallWaitingStatus(SLOT_ID_INVALID, (error, data) => {
            if (error) {
                console.log(`${caseName} getCallWaitingStatus error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} getCallWaitingStatus success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Async_0600
     * @tc.name    Run the function getCallWaitingStatus by args slotId SLOT_ID_INVALID_2 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Async_0600';
        call.getCallWaitingStatus(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} getCallWaitingStatus error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} getCallWaitingStatus success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0100
     * @tc.name    Run the function getCallWaitingStatus by args slotId DEFAULT_SLOT_ID by promise,
     *             the function return CALL_WAITING_ENABLE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0100';
        call.getCallWaitingStatus(DEFAULT_SLOT_ID).then(data => {
            expect(data === CALL_WAITING_ENABLE);
            console.log(`${caseName} getCallWaitingStatus success,case ${data === CALL_WAITING_ENABLE ?
                'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} getCallWaitingStatus error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0200
     * @tc.name    Run the function getCallWaitingStatus by args slotId SLOT_ID1 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0200';
        call.getCallWaitingStatus(SLOT_ID1).then(data => {
            expect().assertFail();
            console.log(`${caseName} getCallWaitingStatus success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} getCallWaitingStatus error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0300
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise,
     *             the function return void,
     *             run the function getCallWaitingStatus by args slotId DEFAULT_SLOT_ID by promise,
     *             the function return CALL_WAITING_ENABLE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0300', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0300';
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
            console.log(`${caseName} setCallWaiting success`);
            let data = await call.getCallWaitingStatus(DEFAULT_SLOT_ID);
            expect(data === CALL_WAITING_ENABLE).assertTrue();
            console.log(`${caseName} getCallWaitingStatus success,case ${data === CALL_WAITING_ENABLE ?
                'success' : 'error'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting or getCallWaitingStatus error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0400
     * @tc.name    Run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate false by promise,
     *             the function return void,
     *             run the function getCallWaitingStatus by args slotId DEFAULT_SLOT_ID by promise,
     *             the function return CALL_WAITING_DISABLE,
     *             run the function setCallWaiting by args slotId DEFAULT_SLOT_ID activate true by promise to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0400';
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, false);
            console.log(`${caseName} setCallWaiting success`);
            let data = await call.getCallWaitingStatus(DEFAULT_SLOT_ID);
            expect(data === CALL_WAITING_DISABLE).assertTrue();
            console.log(`${caseName} getCallWaitingStatus success,case ${data === CALL_WAITING_DISABLE ?
                'success' : 'error'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} setCallWaiting or getCallWaitingStatus error,case failed,error:${
                toString(error)}`);
        }
        try {
            await call.setCallWaiting(DEFAULT_SLOT_ID, true);
        } catch (error) {

        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0500
     * @tc.name    Run the function getCallWaitingStatus by args slotId SLOT_ID_INVALID by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0500';
        call.getCallWaitingStatus(SLOT_ID_INVALID).then(data => {
            expect().assertFail();
            console.log(`${caseName} getCallWaitingStatus success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} getCallWaitingStatus error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0600
     * @tc.name    Run the function getCallWaitingStatus by args slotId SLOT_ID_INVALID_2 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_getCallWaitingStatus_Promise_0600';
        call.getCallWaitingStatus(SLOT_ID_INVALID_2).then(data => {
            expect().assertFail();
            console.log(`${caseName} getCallWaitingStatus success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} getCallWaitingStatus error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Async_0100
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Async_0100';
        call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} enableVoLTE success,case success,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Async_0200
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void,
     *             then run the function enableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Async_0200';
        call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} enableVoLTE2 error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                console.log(`${caseName} enableVoLTE success,case success,data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Async_0300
     * @tc.name    Run the function enableVoLTE by args callId SLOT_ID1 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Async_0300';
        call.enableVoLTE(SLOT_ID1, (error, data) => {
            if (error) {
                console.log(`${caseName} enableVoLTE error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} enableVoLTE success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Async_0400
     * @tc.name    Run the function enableVoLTE by args callId SLOT_ID_INVALID by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Async_0400';
        call.enableVoLTE(SLOT_ID_INVALID, (error, data) => {
            if (error) {
                console.log(`${caseName} enableVoLTE error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} enableVoLTE success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Async_0500
     * @tc.name    Run the function enableVoLTE by args callId SLOT_ID_INVALID_2 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Async_0500';
        call.enableVoLTE(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} enableVoLTE error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} enableVoLTE success,case failed,data:${toString(data)}`);
            done();
        });
    });


    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Promise_0100
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Promise_0100';
        call.enableVoLTE(DEFAULT_SLOT_ID).then(data => {
            console.log(`${caseName} enableVoLTE success,case success,data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Promise_0200
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void,
     *             then run the function enableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Promise_0200';
        try {
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableVoLTE success,case success`);
            done();
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Promise_0300
     * @tc.name    Run the function enableVoLTE by args callId SLOT_ID1 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Promise_0300';
        call.enableVoLTE(SLOT_ID1).then(data => {
            expect().assertFail();
            console.log(`${caseName} enableVoLTE success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} enableVoLTE error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Promise_0400
     * @tc.name    Run the function enableVoLTE by args callId SLOT_ID_INVALID by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Promise_0400';
        call.enableVoLTE(SLOT_ID_INVALID).then(data => {
            expect().assertFail();
            console.log(`${caseName} enableVoLTE success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} enableVoLTE error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableVoLTE_Promise_0500
     * @tc.name    Run the function enableVoLTE by args callId SLOT_ID_INVALID_2 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableVoLTE_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableVoLTE_Promise_0500';
        call.enableVoLTE(SLOT_ID_INVALID_2).then(data => {
            expect().assertFail();
            console.log(`${caseName} enableVoLTE success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} enableVoLTE error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Async_0100
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Async_0100';
        call.disableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} disableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} disableVoLTE success,case success,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Async_0200
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void,
     *             then run the function disableVoLTE by args callId DEFAULT_SLOT_ID by callback,
     *             the function return void,
     *             last run the function enableVoLTE by args callId DEFAULT_SLOT_ID to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Async_0200';
        call.disableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} disableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.disableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} disableVoLTE2 error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                    if (error) {
                        expect().assertFail();
                        console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
                        done();
                        return;
                    }
                    console.log(`${caseName} enableVoLTE success,case success,data:${toString(data)}`);
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Async_0300
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void,
     *             then run the function disableVoLTE by args callId DEFAULT_SLOT_ID by callback,
     *             the function return void,dial and get the state CALL_STATUS_DIALING and callType CALL_TYPE_CS
     *             last run the function enableVoLTE by args callId DEFAULT_SLOT_ID to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Async_0300';
        let flag = false;
        call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.disableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} disableVoLTE error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                scenceInCalling({
                    caseName:caseName,
                    phoneNumber:PHONE_NUMBER_LENGTH_11,
                    checkState:CALL_STATUS_DIALING
                }).then(data => {
                    flag = data.callType === CALL_TYPE_CS && data.callState === CALL_STATUS_DIALING;
                    expect(flag).assertTrue();
                    console.log(`${caseName} scenceInCalling success,case ${flag ? 'success' :
                        'failed'},data:${toString(data)}`);
                    callId = data.callId;
                    call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                        hangupCall2(caseName, done, callId);
                    });
                }).catch(error => {
                    expect().assertFail();
                    console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                    call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                        done();
                    });
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Async_0400
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void,
     *             then run the function enableVoLTE by args callId DEFAULT_SLOT_ID by callback,
     *             the function return void,dial and get the state CALL_STATUS_DIALING and callType CALL_TYPE_IMS
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Async_0400';
        call.disableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} disableVoLTE error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                scenceInCalling({
                    caseName:caseName,
                    phoneNumber:PHONE_NUMBER_LENGTH_11,
                    checkState:CALL_STATUS_DIALING
                }).then(data => {
                    const flag = data.callType === CALL_TYPE_IMS && data.callState === CALL_STATUS_DIALING;
                    expect(flag).assertTrue();
                    console.log(`${caseName} scenceInCalling success,case ${flag ? 'success' :
                        'failed'},data:${toString(data)}`);
                    callId = data.callId;
                    hangupCall2(caseName, done, callId);
                }).catch(error => {
                    expect().assertFail();
                    console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Async_0500
     * @tc.name    Run the function disableVoLTE by args callId SLOT_ID1 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Async_0500';
        call.disableVoLTE(SLOT_ID1, (error, data) => {
            if (error) {
                console.log(`${caseName} disableVoLTE error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} disableVoLTE success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Async_0600
     * @tc.name    Run the function disableVoLTE by args callId SLOT_ID_INVALID by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Async_0600';
        call.disableVoLTE(SLOT_ID_INVALID, (error, data) => {
            if (error) {
                console.log(`${caseName} disableVoLTE error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} disableVoLTE success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Async_0700
     * @tc.name    Run the function disableVoLTE by args callId SLOT_ID_INVALID_2 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Async_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Async_0700';
        call.disableVoLTE(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} disableVoLTE error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} disableVoLTE success,case failed,data:${toString(data)}`);
            done();
        });
    });


    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Promise_0100
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Promise_0100';
        call.disableVoLTE(DEFAULT_SLOT_ID).then(data => {
            console.log(`${caseName} disableVoLTE success,case success,data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} disableVoLTE error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Promise_0200
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void,
     *             then run the function disableVoLTE by args callId DEFAULT_SLOT_ID by promise,
     *             the function return void,
     *             last run the function enableVoLTE by args callId DEFAULT_SLOT_ID to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Promise_0200';
        try {
            await call.disableVoLTE(DEFAULT_SLOT_ID);
            await call.disableVoLTE(DEFAULT_SLOT_ID);
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableVoLTE success,case success`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} disableVoLTE or enableVoLTE error,case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Promise_0300
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void,
     *             then run the function disableVoLTE by args callId DEFAULT_SLOT_ID by promise,
     *             the function return void,dial and get the state CALL_STATUS_DIALING and callType CALL_TYPE_CS
     *             last run the function enableVoLTE by args callId DEFAULT_SLOT_ID to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Promise_0300', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Promise_0300';
        try {
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableVoLTE success`);
            await call.disableVoLTE(DEFAULT_SLOT_ID);
            console.log(`${caseName} disableVoLTE success`);
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            console.log(`${caseName} scenceInCalling success`);
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableVoLTE success`);
            await hangupCall(caseName, callId);
            console.log(`${caseName} hangupCall success`);
            const flag = data.callType === CALL_TYPE_CS && data.callState === CALL_STATUS_DIALING;
            expect(flag).assertTrue();
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} enableVoLTE,disableVoLTE,scenceInCalling or hangupCall error,` +
                   `case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Promise_0400
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void,
     *             then run the function enableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void,
     *             dial and get the state CALL_STATUS_DIALING and callType CALL_TYPE_IMS
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Promise_0400', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Promise_0400';
        try {
            await call.disableVoLTE(DEFAULT_SLOT_ID);
            console.log(`${caseName} disableVoLTE success`);
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableVoLTE success`);
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            console.log(`${caseName} scenceInCalling success`);
            await hangupCall(caseName, callId);
            console.log(`${caseName} hangupCall success`);
            const flag = data.callType === CALL_TYPE_IMS && data.callState === CALL_STATUS_DIALING;
            expect(flag).assertTrue();
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} disableVoLTE,enableVoLTE,scenceInCalling or hangupCall error,` +
                   `case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Promise_0500
     * @tc.name    Run the function disableVoLTE by args callId SLOT_ID1 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Promise_0500';
        call.disableVoLTE(SLOT_ID1).then(data => {
            expect().assertFail();
            console.log(`${caseName} disableVoLTE success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} disableVoLTE error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Promise_0600
     * @tc.name    Run the function disableVoLTE by args callId SLOT_ID_INVALID by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Promise_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Promise_0600';
        call.disableVoLTE(SLOT_ID_INVALID).then(data => {
            expect().assertFail();
            console.log(`${caseName} disableVoLTE success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} disableVoLTE error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableVoLTE_Promise_0700
     * @tc.name    Run the function disableVoLTE by args callId SLOT_ID_INVALID_2 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableVoLTE_Promise_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableVoLTE_Promise_0700';
        call.disableVoLTE(SLOT_ID_INVALID_2).then(data => {
            expect().assertFail();
            console.log(`${caseName} disableVoLTE success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} disableVoLTE error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Async_0100
     * @tc.name    Run the function isVoLTEEnabled by args callId DEFAULT_SLOT_ID by callback,
     *             the function return pre set
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Async_0100';
        call.isVoLTEEnabled(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} isVoLTEEnabled error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            const flag = data === true || data === false;
            expect(flag).assertTrue();
            console.log(`${caseName} isVoLTEEnabled success,case ${flag ? 'success' :
                'failed'},data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Async_0200
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void,
     *             Run the function isVoLTEEnabled by args callId DEFAULT_SLOT_ID by callback,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Async_0200';
        call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.isVoLTEEnabled(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} isVoLTEEnabled error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                expect(data === true).assertTrue();
                console.log(`${caseName} isVoLTEEnabled success,case ${data === true ? 'success' :
                    'failed'},data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Async_0300
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by callback,the function return void,
     *             Run the function isVoLTEEnabled by args callId DEFAULT_SLOT_ID by callback,the function return false,
     *             Run the function enableVoLTE by args callId DEFAULT_SLOT_ID to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Async_0300';
        call.disableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} disableVoLTE error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.isVoLTEEnabled(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} isVoLTEEnabled error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                expect(data === false).assertTrue();
                console.log(`${caseName} isVoLTEEnabled success,case ${data === false ? 'success' :
                    'failed'},data:${toString(data)}`);
                call.enableVoLTE(DEFAULT_SLOT_ID, (error, data) => {
                    done();
                });
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Async_0400
     * @tc.name    Run the function isVoLTEEnabled by args callId SLOT_ID1 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Async_0400';
        call.isVoLTEEnabled(SLOT_ID1, (error, data) => {
            if (error) {
                console.log(`${caseName} isVoLTEEnabled error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} isVoLTEEnabled success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Async_0500
     * @tc.name    Run the function isVoLTEEnabled by args callId SLOT_ID_INVALID by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Async_0500';
        call.isVoLTEEnabled(SLOT_ID_INVALID, (error, data) => {
            if (error) {
                console.log(`${caseName} isVoLTEEnabled error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} isVoLTEEnabled success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Async_0600
     * @tc.name    Run the function isVoLTEEnabled by args callId SLOT_ID_INVALID_2 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Async_0600';
        call.isVoLTEEnabled(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} isVoLTEEnabled error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} isVoLTEEnabled success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0100
     * @tc.name    Run the function isVoLTEEnabled by args callId DEFAULT_SLOT_ID by promise,the function return pre set
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0100';
        call.isVoLTEEnabled(DEFAULT_SLOT_ID).then(data => {
            const flag = data === true || data === false;
            expect(flag).assertTrue();
            console.log(`${caseName} isVoLTEEnabled success,case ${flag ? 'success' :
                'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} isVoLTEEnabled error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0200
     * @tc.name    Run the function enableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void,
     *             Run the function isVoLTEEnabled by args callId DEFAULT_SLOT_ID by promise,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0200';
        try {
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            let data = await call.isVoLTEEnabled(DEFAULT_SLOT_ID);
            expect(data === true).assertTrue();
            console.log(`${caseName} isVoLTEEnabled success,case ${data === true ? 'success' :
                'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} enableVoLTE or isVoLTEEnabled error,case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0300
     * @tc.name    Run the function disableVoLTE by args callId DEFAULT_SLOT_ID by promise,the function return void,
     *             Run the function isVoLTEEnabled by args callId DEFAULT_SLOT_ID by promise,the function return false,
     *             Run the function enableVoLTE by args callId DEFAULT_SLOT_ID to reset
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0300', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0300';
        try {
            await call.disableVoLTE(DEFAULT_SLOT_ID);
            let data = await call.isVoLTEEnabled(DEFAULT_SLOT_ID);
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            expect(data === false).assertTrue();
            console.log(`${caseName},case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} disableVoLTE,isVoLTEEnabled or enableVoLTE error,case failed,` +
                   `error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0400
     * @tc.name    Run the function isVoLTEEnabled by args callId SLOT_ID1 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0400';
        call.isVoLTEEnabled(SLOT_ID1).then(data => {
            expect().assertFail();
            console.log(`${caseName} isVoLTEEnabled success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} isVoLTEEnabled error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0500
     * @tc.name    Run the function isVoLTEEnabled by args callId SLOT_ID_INVALID by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0500';
        call.isVoLTEEnabled(SLOT_ID_INVALID).then(data => {
            expect().assertFail();
            console.log(`${caseName} isVoLTEEnabled success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} isVoLTEEnabled error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0600
     * @tc.name    Run the function isVoLTEEnabled by args callId SLOT_ID_INVALID_2 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isVoLTEEnabled_Promise_0600';
        call.isVoLTEEnabled(SLOT_ID_INVALID_2).then(data => {
            expect().assertFail();
            console.log(`${caseName} isVoLTEEnabled success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} isVoLTEEnabled error,case success,error:${toString(error)}`);
            done();
        });
    });
});