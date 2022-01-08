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
    AUTO_ACCEPT_NUMBER,
    AUTO_ACCEPT_NUMBER2,
    CALL_STATUS_ACTIVE,
    PHONE_NUMBER_LENGTH_11,
    CALL_STATUS_DIALING,
    CALL_ID_NOT_EXIST,
    CALL_STATE_UNKNOWN,
    CALL_STATE_IDLE,
    DEFAULT_SLOT_ID,
    CALL_MODE_IMS,
    SLOT_ID1,
    SLOT_ID_INVALID,
    SLOT_ID_INVALID_2,
    PHONE_LIST2,
    RTT_MSG,
    CALL_MODE_SEND_RECEIVE,
    CALL_MODE_AUDIO_ONLY,
    CALL_EMERGENCY,
    EMERGENCY_NUMBER,
    POS_700,
    POS_10,
    POS_LENGTH_300,
    POS_LENGTH_600,
    POS_Z_1,
    POS_Z_0
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {
    scenceInCalling,
    hangupCall2,
    hangupCall,
    callDetailsChangeOn,
    callId as gloabCallId,
    reachState
} from './lib/ScenceInCalling.js';
let callId = null;
describe('CallManageImsCall', function () {
    beforeAll(async function (done) {
        callDetailsChangeOn();
        try {
            await call.enableVoLTE(DEFAULT_SLOT_ID);
            console.log('Telephony_CallManager enableVoLTE success');
            await call.setCallPreferenceMode(DEFAULT_SLOT_ID, CALL_MODE_IMS);
            console.log('Telephony_CallManager setCallPreferenceMode success');
        } catch (error) {
            console.log(`Telephony_CallManager setCallPreferenceMode or enableVoLTE error,error:${toString(error)}`);
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
    });

    afterAll(function () {
        console.log('Telephony_CallManager all 54 case is over for callmanager CallManageImsCall');
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_combineConference_Async_0100
     * @tc.name    Run the function combineConference by args callId CALL_ID_NOT_EXIST by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_combineConference_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_combineConference_Async_0100';
        call.combineConference(CALL_ID_NOT_EXIST, (error, data) => {
            if (error) {
                console.log(`${caseName} combineConference ${CALL_ID_NOT_EXIST} error,case success,error:${
                    toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} combineConference success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_combineConference_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER when after being accepted,
     *             run function combineConference by args callId current callId by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_combineConference_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_combineConference_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.combineConference(callId, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} combineConference ${callId} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} combineConference success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_combineConference_Promise_0100
     * @tc.name    Run the function combineConference by args callId CALL_ID_NOT_EXIST by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_combineConference_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_combineConference_Promise_0100';
        call.combineConference(CALL_ID_NOT_EXIST).then(data => {
            expect().assertFail();
            console.log(`${caseName} combineConference success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} combineConference ${CALL_ID_NOT_EXIST} error,case success,error:${
                toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_combineConference_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 when after being accepted,
     *             run function combineConference by args callId current callId by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_combineConference_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_combineConference_Promise_0200';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            flag = data.callState === CALL_STATUS_ACTIVE;
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            let data = await call.combineConference(callId);
            expect().assertFail();
            console.log(`${caseName} combineConference success,case failed,data:${toString(data)}`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} combineConference ${callId} error,case ${flag ? 'success' :
                'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_separateConference_Async_0100
     * @tc.name    Run the function separateConference by args callId CALL_ID_NOT_EXIST by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_separateConference_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_separateConference_Async_0100';
        call.separateConference(CALL_ID_NOT_EXIST, (error, data) => {
            if (error) {
                console.log(`${caseName} separateConference ${CALL_ID_NOT_EXIST} error,case success,error:${
                    toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} separateConference success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_separateConference_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function separateConference by args callId current callId by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_separateConference_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_separateConference_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.separateConference(callId, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} separateConference ${callId} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} separateConference success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_separateConference_Promise_0100
     * @tc.name    Run the function separateConference by args callId CALL_ID_NOT_EXIST by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_separateConference_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_separateConference_Promise_0100';
        call.separateConference(CALL_ID_NOT_EXIST).then(data => {
            expect().assertFail();
            console.log(`${caseName} separateConference success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} separateConference ${CALL_ID_NOT_EXIST} error,case success,error:${
                toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_separateConference_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 when before being accepted,
     *             run function separateConference by args callId current callId by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_separateConference_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_separateConference_Promise_0200';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            flag = data.callState === CALL_STATUS_DIALING;
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            let data = await call.separateConference(callId);
            expect().assertFail();
            console.log(`${caseName} separateConference success,case failed,data:${toString(data)}`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} separateConference ${callId} error,case ${flag ? 'success' :
                'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_joinConference_Async_0100
     * @tc.name    Run the function joinConference by args mainCallId CALL_ID_NOT_EXIST,
     *             callNumberList PHONE_LIST2 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_joinConference_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_joinConference_Async_0100';
        call.joinConference(CALL_ID_NOT_EXIST, PHONE_LIST2, (error, data) => {
            if (error) {
                console.log(`${caseName} joinConference ${CALL_ID_NOT_EXIST} error,case success,error:${
                    toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} joinConference success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_joinConference_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER,
     *             after being accepted run function joinConference by args mainCallId current callId,
     *             callNumberList PHONE_LIST2 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_joinConference_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_joinConference_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.joinConference(callId, PHONE_LIST2, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} joinConference ${callId} error,case ${flag ? 'success' :
                        'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} joinConference success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_joinConference_Promise_0100
     * @tc.name    Run the function joinConference by args mainCallId CALL_ID_NOT_EXIST,
     *             callNumberList PHONE_LIST2 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_joinConference_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_joinConference_Promise_0100';
        call.joinConference(CALL_ID_NOT_EXIST, PHONE_LIST2).then(data => {
            expect().assertFail();
            console.log(`${caseName} joinConference success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} joinConference ${CALL_ID_NOT_EXIST} error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_joinConference_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2,
     *             after being accepted run function joinConference by args mainCallId current callId,
     *             callNumberList PHONE_LIST2 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_joinConference_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_joinConference_Promise_0200';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            flag = data.callState === CALL_STATUS_ACTIVE;
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            let data = await call.joinConference(callId, PHONE_LIST2);
            expect().assertFail();
            console.log(`${caseName} joinConference success,case failed,data:${toString(data)}`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} joinConference ${callId} error,case ${flag ? 'success' :
                'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0100
     * @tc.name    Run the function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0100';
        call.enableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableLteEnhanceMode error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} enableLteEnhanceMode success,case success,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0200
     * @tc.name    Run the function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by callback,the function return void,then Run the function
     *             enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0200';
        call.disableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} disableLteEnhanceMode error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.enableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} enableLteEnhanceMode error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                console.log(`${caseName} enableLteEnhanceMode success,case success,data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0300
     * @tc.name    Run the function enableLteEnhanceMode by args slotId SLOT_ID1,
     *             by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0300';
        call.enableLteEnhanceMode(SLOT_ID1, (error, data) => {
            if (error) {
                console.log(`${caseName} enableLteEnhanceMode error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0400
     * @tc.name    Run the function enableLteEnhanceMode by args slotId SLOT_ID_INVALID,
     *             by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0400';
        call.enableLteEnhanceMode(SLOT_ID_INVALID, (error, data) => {
            if (error) {
                console.log(`${caseName} enableLteEnhanceMode error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0500
     * @tc.name    Run the function enableLteEnhanceMode by args slotId SLOT_ID_INVALID_2,
     *             by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Async_0500';
        call.enableLteEnhanceMode(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} enableLteEnhanceMode error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0100
     * @tc.name    Run the function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0100';
        call.enableLteEnhanceMode(DEFAULT_SLOT_ID).then(data => {
            console.log(`${caseName} enableLteEnhanceMode success,case success,data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0200
     * @tc.name    Run the function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by promise,the function return void,Run the function
     *             enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0200';
        try {
            let data = await call.disableLteEnhanceMode(DEFAULT_SLOT_ID);
            console.log(`${caseName} disableLteEnhanceMode success,data:${toString(data)}`);
            data = await call.enableLteEnhanceMode(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableLteEnhanceMode success,case success,data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode or enableLteEnhanceMode error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0300
     * @tc.name    Run the function enableLteEnhanceMode by args slotId SLOT_ID1 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0300';
        call.enableLteEnhanceMode(SLOT_ID1).then(data => {
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} enableLteEnhanceMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0400
     * @tc.name    Run the function enableLteEnhanceMode by args slotId SLOT_ID_INVALID by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0400';
        call.enableLteEnhanceMode(SLOT_ID_INVALID).then(data => {
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} enableLteEnhanceMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0500
     * @tc.name    Run the function enableLteEnhanceMode by args slotId SLOT_ID_INVALID_2 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0500';
        call.enableLteEnhanceMode(SLOT_ID_INVALID_2, true).then(data => {
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} enableLteEnhanceMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0100
     * @tc.name    Run the function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0100';
        call.disableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} disableLteEnhanceMode error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} disableLteEnhanceMode success,case success,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0200
     * @tc.name    Run the function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by callback,the function return void,then Run the function
     *             disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0200';
        call.enableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableLteEnhanceMode error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.disableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} disableLteEnhanceMode error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                console.log(`${caseName} disableLteEnhanceMode success,case success,data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0300
     * @tc.name    Run the function disableLteEnhanceMode by args slotId SLOT_ID1,
     *             by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0300';
        call.disableLteEnhanceMode(SLOT_ID1, (error, data) => {
            if (error) {
                console.log(`${caseName} disableLteEnhanceMode error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0400
     * @tc.name    Run the function disableLteEnhanceMode by args slotId SLOT_ID_INVALID,
     *             by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0400';
        call.disableLteEnhanceMode(SLOT_ID_INVALID, (error, data) => {
            if (error) {
                console.log(`${caseName} disableLteEnhanceMode error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0500
     * @tc.name    Run the function disableLteEnhanceMode by args slotId SLOT_ID_INVALID_2,
     *             by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Async_0500';
        call.disableLteEnhanceMode(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} disableLteEnhanceMode error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0100
     * @tc.name    Run the function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0100';
        call.disableLteEnhanceMode(DEFAULT_SLOT_ID).then(data => {
            console.log(`${caseName} disableLteEnhanceMode success,case success,data:${toString(data)}`);
            done();
        }).catch(error => {
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode error,case failed,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0200
     * @tc.name    Run the function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by promise,the function return void,Run the function
     *             disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0200';
        try {
            let data = await call.enableLteEnhanceMode(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableLteEnhanceMode success,data:${toString(data)}`);
            data = await call.disableLteEnhanceMode(DEFAULT_SLOT_ID);
            console.log(`${caseName} disableLteEnhanceMode success,case success,data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode or disableLteEnhanceMode error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0300
     * @tc.name    Run the function disableLteEnhanceMode by args slotId SLOT_ID1 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0300';
        call.disableLteEnhanceMode(SLOT_ID1).then(data => {
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} disableLteEnhanceMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0400
     * @tc.name    Run the function disableLteEnhanceMode by args slotId SLOT_ID_INVALID by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0400';
        call.disableLteEnhanceMode(SLOT_ID_INVALID).then(data => {
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} disableLteEnhanceMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0500
     * @tc.name    Run the function disableLteEnhanceMode by args slotId SLOT_ID_INVALID_2 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_disableLteEnhanceMode_Promise_0500';
        call.disableLteEnhanceMode(SLOT_ID_INVALID_2, true).then(data => {
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} disableLteEnhanceMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0100
     * @tc.name    Run the function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             run the function isLteEnhanceModeEnabled by args slotId DEFAULT_SLOT_ID by callback,
     *             the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0100';
        call.enableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} enableLteEnhanceMode error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.isLteEnhanceModeEnabled(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} isLteEnhanceModeEnabled error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                expect(data).assertTrue();
                console.log(`${caseName} isLteEnhanceModeEnabled success,case ${data === true ?
                    'success' : 'failed'},data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0200
     * @tc.name    Run the function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,value false,
     *             run the function isLteEnhanceModeEnabled by args slotId DEFAULT_SLOT_ID by callback,
     *             the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0200';
        call.disableLteEnhanceMode(DEFAULT_SLOT_ID, (error, data) => {
            if (error) {
                expect().assertFail();
                console.log(`${caseName} disableLteEnhanceMode error,case failed,error:${toString(error)}`);
                done();
                return;
            }
            call.isLteEnhanceModeEnabled(DEFAULT_SLOT_ID, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} isLteEnhanceModeEnabled error,case failed,error:${toString(error)}`);
                    done();
                    return;
                }
                expect(data === false).assertTrue();
                console.log(`${caseName} isLteEnhanceModeEnabled success,case ${data === false ?
                    'success' : 'failed'},data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0300
     * @tc.name    Run the function isLteEnhanceModeEnabled by args slotId SLOT_ID1 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0300';
        call.isLteEnhanceModeEnabled(SLOT_ID1, (error, data) => {
            if (error) {
                console.log(`${caseName} isLteEnhanceModeEnabled error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0400
     * @tc.name    Run the function isLteEnhanceModeEnabled by args slotId SLOT_ID_INVALID by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0400';
        call.isLteEnhanceModeEnabled(SLOT_ID_INVALID, (error, data) => {
            if (error) {
                console.log(`${caseName} isLteEnhanceModeEnabled error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0500
     * @tc.name    Run the function isLteEnhanceModeEnabled by args slotId SLOT_ID_INVALID_2 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Async_0500';
        call.isLteEnhanceModeEnabled(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} isLteEnhanceModeEnabled error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0100
     * @tc.name    Run the function enableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             run the function isLteEnhanceModeEnabled by args slotId DEFAULT_SLOT_ID by promise,
     *             the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0100', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0100';
        try {
            await call.enableLteEnhanceMode(DEFAULT_SLOT_ID);
            console.log(`${caseName} enableLteEnhanceMode success`);
            let data = await call.isLteEnhanceModeEnabled(DEFAULT_SLOT_ID);
            expect(data).assertTrue();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case ${data === true ?
                'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} enableLteEnhanceMode or isLteEnhanceModeEnabled error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0200
     * @tc.name    Run the function disableLteEnhanceMode by args slotId DEFAULT_SLOT_ID,
     *             run the function isLteEnhanceModeEnabled by args slotId DEFAULT_SLOT_ID by promise,
     *             the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0200';
        try {
            await call.disableLteEnhanceMode(DEFAULT_SLOT_ID);
            console.log(`${caseName} disableLteEnhanceMode success`);
            let data = await call.isLteEnhanceModeEnabled(DEFAULT_SLOT_ID);
            expect(data === false).assertTrue();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case ${data === false ?
                'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} disableLteEnhanceMode or isLteEnhanceModeEnabled error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0300
     * @tc.name    Run the function isLteEnhanceModeEnabled by args slotId SLOT_ID1 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0300';
        call.isLteEnhanceModeEnabled(SLOT_ID1).then(data => {
            expect().assertFail();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} isLteEnhanceModeEnabled error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0400
     * @tc.name    Run the function isLteEnhanceModeEnabled by args slotId SLOT_ID_INVALID by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0400';
        call.isLteEnhanceModeEnabled(SLOT_ID_INVALID).then(data => {
            expect().assertFail();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} isLteEnhanceModeEnabled error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0500
     * @tc.name    Run the function isLteEnhanceModeEnabled by args slotId SLOT_ID_INVALID_2 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_isLteEnhanceModeEnabled_Promise_0500';
        call.isLteEnhanceModeEnabled(SLOT_ID_INVALID_2, (error, data) => {
            if (error) {
                console.log(`${caseName} isLteEnhanceModeEnabled error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} isLteEnhanceModeEnabled success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startRTT_Async_0100
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 before being accepted,
     *             run function startRTT by args callId current callId,msg RTT_MSG by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_startRTT_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_startRTT_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.startRTT(callId, RTT_MSG, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} startRTT ${callId} error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} startRTT success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startRTT_Async_0200
     * @tc.name    Run function startRTT by args callId CALL_ID_NOT_EXIST,msg RTT_MSG by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_startRTT_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_startRTT_Async_0200';
        call.startRTT(CALL_ID_NOT_EXIST, RTT_MSG, (error, data) => {
            if (error) {
                console.log(`${caseName} startRTT ${callId} error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} startRTT success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startRTT_Promise_0100
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 before being accepted,
     *             run function startRTT by args callId current callId,msg RTT_MSG by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_startRTT_Promise_0100', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_startRTT_Promise_0100';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            flag = data.callState === CALL_STATUS_DIALING;
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.startRTT(callId, RTT_MSG);
            expect().assertFail();
            console.log(`${caseName} startRTT success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} startRTT ${callId} error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startRTT_Promise_0200
     * @tc.name    Run function startRTT by args callId CALL_ID_NOT_EXIST,msg RTT_MSG by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_startRTT_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_startRTT_Promise_0200';
        call.startRTT(CALL_ID_NOT_EXIST, RTT_MSG).then(data => {
            expect().assertFail();
            console.log(`${caseName} startRTT success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} startRTT ${callId} error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopRTT_Async_0100
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 before being accepted,
     *             run function stopRTT by args callId current callId by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_stopRTT_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopRTT_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_DIALING;
            call.stopRTT(callId, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} stopRTT ${callId} error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} stopRTT success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopRTT_Async_0200
     * @tc.name    Run function stopRTT by args callId CALL_ID_NOT_EXIST by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_stopRTT_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopRTT_Async_0200';
        call.stopRTT(CALL_ID_NOT_EXIST, (error, data) => {
            if (error) {
                console.log(`${caseName} stopRTT ${callId} error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} stopRTT success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopRTT_Promise_0100
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 before being accepted,
     *             run function stopRTT by args callId current callId by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_stopRTT_Promise_0100', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_stopRTT_Promise_0100';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:PHONE_NUMBER_LENGTH_11,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            flag = data.callState === CALL_STATUS_DIALING;
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.stopRTT(callId);
            expect().assertFail();
            console.log(`${caseName} stopRTT success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} stopRTT ${callId} error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopRTT_Promise_0200
     * @tc.name    Run function stopRTT by args callId CALL_ID_NOT_EXIST by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_stopRTT_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopRTT_Promise_0200';
        call.stopRTT(CALL_ID_NOT_EXIST).then(data => {
            expect().assertFail();
            console.log(`${caseName} stopRTT success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} stopRTT ${callId} error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Async_0100
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateCallMediaMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect(flag).assertTrue();
                console.log(`${caseName} updateCallMediaMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateCallMediaMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} updateCallMediaMode success,data:${toString(data)}`);
                call.updateCallMediaMode(callId, CALL_MODE_AUDIO_ONLY, (error, data) => {
                    if (error) {
                        expect().assertFail();
                        console.log(`${caseName} updateCallMediaMode2 error,case failed,error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateCallMediaMode2 success,case ${flag ? 'success' : 'failed'},data:${
                        toString(data)}`);
                    hangupCall2(caseName, done, callId);
                });
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Async_0300
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateCallMediaMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                    if (error) {
                        expect(flag).assertTrue();
                        console.log(`${caseName} updateCallMediaMode2 error,case ${flag ?
                            'success' : 'failed'},error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    expect().assertFail();
                    console.log(`${caseName} updateCallMediaMode2 success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                });
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Async_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateCallMediaMode(callId, CALL_MODE_AUDIO_ONLY, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateCallMediaMode error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} updateCallMediaMode success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Async_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER before being accepted,
     *             run function updateCallMediaMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return error,
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateCallMediaMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateCallMediaMode error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} updateCallMediaMode success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Async_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by callback,the function return void
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Async_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateCallMediaMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} updateCallMediaMode success,data:${toString(data)}`);
                call.updateCallMediaMode(callId, CALL_MODE_AUDIO_ONLY, (error, data) => {
                    if (error) {
                        expect().assertFail();
                        console.log(`${caseName} updateCallMediaMode2 error,case failed,error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    console.log(`${caseName} updateCallMediaMode2 success,data:${toString(data)}`);
                    call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                        if (error) {
                            expect().assertFail();
                            console.log(`${caseName} updateCallMediaMode3 error,case failed,error:${toString(error)}`);
                            hangupCall2(caseName, done, callId);
                            return;
                        }
                        console.log(`${caseName} updateCallMediaMode3 success,data:${toString(data)}`);
                        expect(flag).assertTrue();
                        console.log(`${caseName} reachCallEventState3 success,case ${flag ?
                            'success' : 'failed'},error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                    });
                });

            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Async_0700
     * @tc.name    Run function updateCallMediaMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Async_0700';
        call.updateCallMediaMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE, (error, data) => {
            if (error) {
                console.log(`${caseName} updateCallMediaMode2 error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} updateCallMediaMode2 success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Promise_0100
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE).then(data => {
                expect(flag).assertTrue();
                console.log(`${caseName} updateCallMediaMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} updateCallMediaMode error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE);
            console.log(`${caseName} updateCallMediaMode success,data:${toString(data)}`);
            data = await call.updateCallMediaMode(callId, CALL_MODE_AUDIO_ONLY);
            expect(flag).assertTrue();
            console.log(`${caseName} updateCallMediaMode2 success,case ${flag ?
                'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling or updateCallMediaMode error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Promise_0300
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Promise_0300', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Promise_0300';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            flag = data.callState === CALL_STATUS_ACTIVE;
            await call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling or updateCallMediaMode error,case failed,error:${
                toString(error)}`);
            return;
        }
        try {
            await call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE);
            expect().assertFail();
            console.log(`${caseName} updateCallMediaMode2 success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateCallMediaMode error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Promise_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Promise_0400', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Promise_0400';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            flag = data.callState === CALL_STATUS_ACTIVE;
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.updateCallMediaMode(callId, CALL_MODE_AUDIO_ONLY);
            expect().assertFail();
            console.log(`${caseName} updateCallMediaMode success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateCallMediaMode error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Promise_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateCallMediaMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Promise_0500', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Promise_0500';
        let flag = false;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            flag = data.callState === CALL_STATUS_ACTIVE;
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.updateCallMediaMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE);
            expect().assertFail();
            console.log(`${caseName} updateCallMediaMode2 success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateCallMediaMode2 error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Promise_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void,
     *             run function updateCallMediaMode by args callId current callId,mode CALL_MODE_AUDIO_ONLY by promise,
     *             the function return void,
     *             run function updateCallMediaMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Promise_0600', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            data = await call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE);
            console.log(`${caseName} updateCallMediaMode success,data:${toString(data)}`);
            data = await call.updateCallMediaMode(callId, CALL_MODE_AUDIO_ONLY);
            console.log(`${caseName} updateCallMediaMode1 success,data:${toString(data)}`);
            data = await call.updateCallMediaMode(callId, CALL_MODE_SEND_RECEIVE);
            expect(flag).assertTrue();
            console.log(`${caseName} updateCallMediaMode3 success,case ${flag ?
                'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling or updateCallMediaMode error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateCallMediaMode_Promise_0700
     * @tc.name    Run function updateCallMediaMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateCallMediaMode_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateCallMediaMode_Promise_0700';
        call.updateCallMediaMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE).then(data => {
            expect().assertFail();
            console.log(`${caseName} updateCallMediaMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} updateCallMediaMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_on_0900
     * @tc.name    Dial a call by number EMERGENCY_NUMBER and before being accepted,
     *             the callDetailsChange event get the callStateInfo is
     *             {isEcc:true}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_on_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_on_0900';
        reachState(caseName, CALL_STATUS_DIALING, '', false).then(data => {
            let callId = data.callId;
            let flag = data.isEcc === true;
            console.log(`${caseName} reachState success,case ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data.isEcc === true).assertTrue();
            hangupCall2(caseName, done, callId);
        }).catch(error => {
            console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
        let options = {dialScene: CALL_EMERGENCY};
        call.dial(EMERGENCY_NUMBER, options, (err, data) => {
            if (err) {
                console.log(`${caseName} err:${err}`);
                return;
            }
            console.log(`${caseName} data:${data}`);
        });
    });

    /**
     * @tc.number  Telephony_CallManager_on_1000
     * @tc.name    Dial a call by number PHONE_NUMBER_LENGTH_11 and before being accepted,
     *             the callDetailsChange event get the callStateInfo is
     *             {isEcc:false}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_on_1000', 0, function (done) {
        let caseName = 'Telephony_CallManager_on_1000';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:PHONE_NUMBER_LENGTH_11,
            checkState:CALL_STATUS_DIALING
        })
            .then((data) => {
                let callId = data.callId;
                let flag = data.isEcc === false;
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data.isEcc === false).assertTrue();
                hangupCall2(caseName, done, callId);
            })
            .catch((error) => {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0700
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_1,width -POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0700';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let info = {x: POS_700, y: POS_10, z: POS_Z_1, width: -1 * POS_LENGTH_300, height:  POS_LENGTH_600};
            call.setPreviewWindow(info, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case faild`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0800
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height -POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0800';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            call.setPreviewWindow(info, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case faild`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0900
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width -POS_LENGTH_300,height -POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0900';
        scenceInCalling({
            caseName:caseName,
            phoneNumber:AUTO_ACCEPT_NUMBER,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: -1 * POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            call.setPreviewWindow(info, (error) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} case faild`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0700
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_1,width -POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_1, width: -1 * POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setPreviewWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0800
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height  -POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0800';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            await call.setPreviewWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0900
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width -POS_LENGTH_300,height -POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0900';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: -1 * POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            await call.setPreviewWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0700
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_1,width -POS_LENGTH_300,height  POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_1, width: -1 * POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0800
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height  -POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0800';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0900
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width -POS_LENGTH_300,height  -POS_LENGTH_600 by callback,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0900';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: -1 * POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0700
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width -POS_LENGTH_300,height  POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: -POS_LENGTH_300, height:  POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0800
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width POS_LENGTH_300,height  -POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0800';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0900
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x POS_700,y POS_10,z POS_Z_0,width -POS_LENGTH_300,height  -POS_LENGTH_600 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0900';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            let info = {x: POS_700, y: POS_10, z: POS_Z_0, width: -1 * POS_LENGTH_300, height:  -1 * POS_LENGTH_600};
            await call.setDisplayWindow(info);
            console.log(`${caseName} case faild`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });



});