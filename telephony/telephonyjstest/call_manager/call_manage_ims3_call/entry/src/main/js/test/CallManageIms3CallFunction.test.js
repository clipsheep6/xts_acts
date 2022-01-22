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
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {
    scenceInCalling,
    hangupCall2,
    hangupCall,
    callDetailsChangeOn,
    callId as gloabCallId,
    callDetailsChangeOff,
} from './lib/ScenceInCalling.js';
let callId = null;
describe('CallManageImsCall', function () {
    beforeAll(async function (done) {
        callDetailsChangeOn();
        try {
            await call.enableImsSwitch(DEFAULT_SLOT_ID);
            console.log('Telephony_CallManager enableImsSwitch success');
            await call.setCallPreferenceMode(DEFAULT_SLOT_ID, CALL_MODE_IMS);
            console.log('Telephony_CallManager setCallPreferenceMode success');
        } catch (error) {
            console.log(`Telephony_CallManager setCallPreferenceMode or enableImsSwitch error,error:${
                toString(error)}`);
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
        callDetailsChangeOff();
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
                console.log(`${caseName} enableLteEnhanceMode error SLOT_ID1,case success,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} enableLteEnhanceMode success SLOT_ID1,case failed,data:${toString(data)}`);
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
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_enableLteEnhanceMode_Promise_0300';
        call.enableLteEnhanceMode(SLOT_ID1).then(data => {
            console.log(`${caseName} enableLteEnhanceMode success SLOT_ID1,case success,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} enableLteEnhanceMode error SLOT_ID1,case failed,error:${toString(error)}`);
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
        call.enableLteEnhanceMode(SLOT_ID_INVALID_2).then(data => {
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
                console.log(`${caseName} disableLteEnhanceMode error SLOT_ID1,case success,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} disableLteEnhanceMode success SLOT_ID1,case failed,data:${toString(data)}`);
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
            console.log(`${caseName} disableLteEnhanceMode success SLOT_ID1,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} disableLteEnhanceMode error SLOT_ID1,case success,error:${toString(error)}`);
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
        call.disableLteEnhanceMode(SLOT_ID_INVALID_2).then(data => {
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
                console.log(`${caseName} isLteEnhanceModeEnabled error SLOT_ID1,case success,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} isLteEnhanceModeEnabled success SLOT_ID1,case failed,data:${toString(data)}`);
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
            console.log(`${caseName} isLteEnhanceModeEnabled success SLOT_ID1,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} isLteEnhanceModeEnabled error SLOT_ID1,case success,error:${toString(error)}`);
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
});