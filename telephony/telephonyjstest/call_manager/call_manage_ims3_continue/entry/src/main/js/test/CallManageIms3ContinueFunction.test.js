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
    CALL_MODE_SEND_RECEIVE,
    CALL_MODE_AUDIO_ONLY,
    CALL_MODE_SEND_ONLY,
    CALL_MODE_RECEIVE_ONLY,
    CALL_MODE_VIDEO_PAUSED,
    CALL_MODE_INVALID_MINUS_1,
    CALL_MODE_INVALID_5,
    CALL_EMERGENCY,
    EMERGENCY_NUMBER,
    POS_700,
    POS_10,
    POS_LENGTH_300,
    POS_LENGTH_600,
    POS_Z_1,
    POS_Z_0,
    EVENT_OTT_FUNCTION_UNSUPPORTED,
    HUNUP_SUCCESS_EVENT_ID,
    MEDIA_TYPE_VOICE,
    DIAL_SCENCE_CALL_NORMAL,
    DIAL_OTT_TYPE,
    TIMEOUT_LENTH
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {
    scenceInCalling,
    hangupCall2,
    hangupCall,
    callDetailsChangeOn,
    callId as gloabCallId,
    reachState,
    callDetailsChangeOff,
    reachCallEventState,
    reachCallDisconnectedCause
} from './lib/ScenceInCalling.js';
const REJECT_MESSAGE_STR = 'Hi,hello?';
const REJECT_MESSAGE_NUM = 1234567890123456789012345678901234567890;
class RejectMessageOptions {
    constructor (str) {
        this.messageContent = str;
    }
}
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
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0100
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect(flag).assertTrue();
                console.log(`${caseName} updateImsCallMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} updateImsCallMode success,data:${toString(data)}`);
                call.updateImsCallMode(callId, CALL_MODE_AUDIO_ONLY, (error, data) => {
                    if (error) {
                        expect().assertFail();
                        console.log(`${caseName} updateImsCallMode2 error,case failed,error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateImsCallMode2 success,case ${flag ? 'success' : 'failed'},data:${
                        toString(data)}`);
                    hangupCall2(caseName, done, callId);
                });
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0300
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                    if (error) {
                        expect(flag).assertTrue();
                        console.log(`${caseName} updateImsCallMode2 error,case ${flag ?
                            'success' : 'failed'},error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode2 success,case failed,data:${toString(data)}`);
                    hangupCall2(caseName, done, callId);
                });
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_AUDIO_ONLY, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateImsCallMode error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} updateImsCallMode success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER before being accepted,
     *             run function updateImsCallMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return error,
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateImsCallMode error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} updateImsCallMode success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by callback,the function return void
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} updateImsCallMode success,data:${toString(data)}`);
                call.updateImsCallMode(callId, CALL_MODE_AUDIO_ONLY, (error, data) => {
                    if (error) {
                        expect().assertFail();
                        console.log(`${caseName} updateImsCallMode2 error,case failed,error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    console.log(`${caseName} updateImsCallMode2 success,data:${toString(data)}`);
                    call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                        if (error) {
                            expect().assertFail();
                            console.log(`${caseName} updateImsCallMode3 error,case failed,error:${toString(error)}`);
                            hangupCall2(caseName, done, callId);
                            return;
                        }
                        console.log(`${caseName} updateImsCallMode3 success,data:${toString(data)}`);
                        expect(flag).assertTrue();
                        console.log(`${caseName} reachCallEventState3 success,case ${flag ?
                            'success' : 'failed'},error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                    });
                });

            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_0700
     * @tc.name    Run function updateImsCallMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_0700';
        call.updateImsCallMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE, (error, data) => {
            if (error) {
                console.log(`${caseName} updateImsCallMode2 error,case success,error:${toString(error)}`);
                done();
                return;
            }
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode2 success,case failed,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_1000
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_ONLY by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_1000';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_ONLY, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect(flag).assertTrue();
                console.log(`${caseName} updateImsCallMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_1100
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_RECEIVE_ONLY by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_1100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_RECEIVE_ONLY, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect(flag).assertTrue();
                console.log(`${caseName} updateImsCallMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_1200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by callback,the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_VIDEO_PAUSED by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_1200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE, (error, data) => {
                if (error) {
                    expect().assertFail();
                    console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} updateImsCallMode success,data:${toString(data)}`);
                call.updateImsCallMode(callId, CALL_MODE_VIDEO_PAUSED, (error, data) => {
                    if (error) {
                        expect().assertFail();
                        console.log(`${caseName} updateImsCallMode2 error,case failed,error:${toString(error)}`);
                        hangupCall2(caseName, done, callId);
                        return;
                    }
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateImsCallMode2 success,case ${flag ? 'success' : 'failed'},data:${
                        toString(data)}`);
                    hangupCall2(caseName, done, callId);
                });
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_1300
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_INVALID_MINUS_1 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_1300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_1300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_INVALID_MINUS_1, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateImsCallMode error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} updateImsCallMode success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Async_1400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_INVALID_5 by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Async_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Async_1400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_INVALID_5, (error, data) => {
                if (error) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} updateImsCallMode error,case ${flag ?
                        'success' : 'failed'},error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} updateImsCallMode success,case failed,data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0100
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE).then(data => {
                expect(flag).assertTrue();
                console.log(`${caseName} updateImsCallMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0200';
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${
                toString(error)}`);
            return;
        }
        try {
            let data = await call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE);
            console.log(`${caseName} updateImsCallMode success,data:${toString(data)}`);
            data = await call.updateImsCallMode(callId, CALL_MODE_AUDIO_ONLY);
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode2 success,case ${flag ?
                'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0300
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0300', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0300';
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
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${
                toString(error)}`);
            return;
        }
        try {
            await call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode error,case failed,error:${
                toString(error)}`);
            return;
        }
        try {
            await call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE);
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode2 success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_AUDIO_ONLY by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0400', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0400';
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.updateImsCallMode(callId, CALL_MODE_AUDIO_ONLY);
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0500
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0500', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0500';
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.updateImsCallMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE);
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode2 success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode2 error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0600
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void,
     *             run function updateImsCallMode by args callId current callId,mode CALL_MODE_AUDIO_ONLY by promise,
     *             the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0600', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0600';
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            let data = await call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE);
            console.log(`${caseName} updateImsCallMode success,data:${toString(data)}`);
            data = await call.updateImsCallMode(callId, CALL_MODE_AUDIO_ONLY);
            console.log(`${caseName} updateImsCallMode1 success,data:${toString(data)}`);
            data = await call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE);
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode3 success,case ${flag ?
                'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_0700
     * @tc.name    Run function updateImsCallMode by args callId CALL_ID_NOT_EXIST,
     *             mode CALL_MODE_SEND_RECEIVE by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_0700';
        call.updateImsCallMode(CALL_ID_NOT_EXIST, CALL_MODE_SEND_RECEIVE).then(data => {
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode success,case failed,data:${toString(data)}`);
            done();
        }).catch(error => {
            console.log(`${caseName} updateImsCallMode error,case success,error:${toString(error)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_1000
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_ONLY by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_1000';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_SEND_ONLY).then(data => {
                expect(flag).assertTrue();
                console.log(`${caseName} updateImsCallMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_1100
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_RECEIVE_ONLY by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_1100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success`);
            callId = data.callId;
            let flag = data.callState === CALL_STATUS_ACTIVE;
            call.updateImsCallMode(callId, CALL_MODE_RECEIVE_ONLY).then(data => {
                expect(flag).assertTrue();
                console.log(`${caseName} updateImsCallMode success,case ${flag ?
                    'success' : 'failed'},data:${toString(data)}`);
                hangupCall2(caseName, done, callId);
            }).catch(error => {
                expect().assertFail();
                console.log(`${caseName} updateImsCallMode error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_1200
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_SEND_RECEIVE by promise,the function return void,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_VIDEO_PAUSED by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_1200', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_1200';
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
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            let data = await call.updateImsCallMode(callId, CALL_MODE_SEND_RECEIVE);
            console.log(`${caseName} updateImsCallMode success,data:${toString(data)}`);
            data = await call.updateImsCallMode(callId, CALL_MODE_VIDEO_PAUSED);
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode2 success,case ${flag ?
                'success' : 'failed'},data:${toString(data)}`);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode error,case failed,error:${
                toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_1300
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER2 after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_INVALID_MINUS_1 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_1300', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_1300';
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.updateImsCallMode(callId, CALL_MODE_INVALID_MINUS_1);
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_updateImsCallMode_Promise_1400
     * @tc.name    Dial a call by function dial by args phoneNumber AUTO_ACCEPT_NUMBER after being accepted,
     *             run function updateImsCallMode by args callId current callId,
     *             mode CALL_MODE_INVALID_5 by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_IMS_updateImsCallMode_Promise_1400', 0, async function () {
        let caseName = 'Telephony_CallManager_IMS_updateImsCallMode_Promise_1400';
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
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            return;
        }
        try {
            await call.updateImsCallMode(callId, CALL_MODE_INVALID_5);
            expect().assertFail();
            console.log(`${caseName} updateImsCallMode success,case failed`);
        } catch (error) {
            expect(flag).assertTrue();
            console.log(`${caseName} updateImsCallMode error,case ${flag ?
                'success' : 'failed'},error:${toString(error)}`);
        }
    });

    /**
     * @tc.number  Telephony_CallManager_reject_Promise_0400
     * @tc.name    Test the function runs 10 times, stability test
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_reject_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_reject_Promise_0400';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            try {
                data = await call.reject(callId, new RejectMessageOptions(REJECT_MESSAGE_STR));
                expect().assertFail();
                console.log(`${caseName} reject success,case failed,data:${toString(data)}`);
                done();
            } catch (err) {
                console.log(`${caseName} reject error,case success,err:${toString(err)}`);
                done();
            }
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
  * @tc.number  Telephony_CallManager_reject_Async_0400
  * @tc.name    Test the function runs 10 times, stability test
  * @tc.desc    Function test
  */
    it('Telephony_CallManager_reject_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_reject_Async_0400';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
            call.reject(callId, new RejectMessageOptions(REJECT_MESSAGE_NUM), (err, data) => {
                if (err) {
                    console.log(`${caseName} reject error,case success,err:${toString(err)}`);
                    done();
                    return;
                }
                expect().assertFail();
                console.log(`${caseName} reject success,case failed,data:${toString(data)}`);
                done();
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_on_0700
     * @tc.name    Dial a call by number EMERGENCY_NUMBER and before being accepted,
     *             the callDetailsChange event get the callStateInfo is
     *             {isEcc:true}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_on_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_on_0700';
        reachState(caseName, CALL_STATUS_DIALING, '', false).then(data => {
            let callId = data.callId;
            let flag = data.isEcc === true;
            console.log(`${caseName} reachState success,case ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data.isEcc === true).assertTrue();
            hangupCall2(caseName, done, callId);
        }).catch(error => {
            console.log(`${caseName} reachState error,case failed,error:${toString(error)}`);
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
     * @tc.number  Telephony_CallManager_on_800
     * @tc.name    Dial a call by number PHONE_NUMBER_LENGTH_11 and before being accepted,
     *             the callDetailsChange event get the callStateInfo is
     *             {isEcc:false}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_on_800', 0, function (done) {
        let caseName = 'Telephony_CallManager_on_800';
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
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_on_0900
     * @tc.name    Dial a call by number AUTO_ACCEPT_NUMBER options {accountId: DEFAULT_SLOT_ID,
     *             videoState: MEDIA_TYPE_VOICE,dialScene: DIAL_SCENCE_CALL_NORMAL, dialType:DIAL_OTT_TYPE}
     *             and before being accepted,the callEventChange event get EVENT_OTT_FUNCTION_UNSUPPORTED
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_on_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_on_0900';
        let callId = null;
        reachCallEventState(EVENT_OTT_FUNCTION_UNSUPPORTED).then(data => {
            expect(data.eventId === EVENT_OTT_FUNCTION_UNSUPPORTED).assertTrue();
            console.log(`${caseName} reachCallEventState success,case ${
                data.eventId === EVENT_OTT_FUNCTION_UNSUPPORTED ?
                    'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            if (callId) {
                expect().assertFail();
                console.log(`${caseName} reachCallEventState error,case failed,error:${toString(error)}`);
                done();
            } else {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                done();
            }
        });
        let options = {accountId: DEFAULT_SLOT_ID, videoState: MEDIA_TYPE_VOICE,
            dialScene: DIAL_SCENCE_CALL_NORMAL, dialType:DIAL_OTT_TYPE};
        call.dial(AUTO_ACCEPT_NUMBER, options, (err, data) => {
            if (err) {
                console.log(`${caseName} dial err:${err}`);
                return;
            }
            console.log(`${caseName} dial success data:${data}`);
        });
    });

    /**
     * @tc.number  Telephony_CallManager_on_1000
     * @tc.name    Dial a call by number PHONE_NUMBER_LONG  and before being accepted,
     *             the callEventChange event get HUNUP_SUCCESS_EVENT_ID
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_on_1000', 0, function (done) {
        let caseName = 'Telephony_CallManager_on_1000';
        let callId = null;
        reachCallDisconnectedCause(HUNUP_SUCCESS_EVENT_ID).then(data => {
            expect(data.disconnectedCause === HUNUP_SUCCESS_EVENT_ID).assertTrue();
            console.log(`${caseName} reachCallDisconnectedCause success,case ${
                data.disconnectedCause === HUNUP_SUCCESS_EVENT_ID ?
                    'success' : 'failed'},data:${toString(data)}`);
            done();
        }).catch(error => {
            if (callId) {
                expect().assertFail();
                console.log(`${caseName} reachCallDisconnectedCause error,case failed,error:${toString(error)}`);
                done();
            } else {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                done();
            }
        });
        scenceInCalling({
            caseName:caseName,
            phoneNumber:PHONE_NUMBER_LENGTH_11,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            console.log(`${caseName} scenceInCalling success`);
            hangupCall(caseName, callId).catch(error => {
                console.log(`${caseName} scenceInCalling hangupCall error,error:${
                    toString(error)}`);
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error,error:${
                toString(error)}`);
        });
    });

    /**
     * @tc.number  Telephony_CallManager_off_0200
     * @tc.name    Dial a call by number AUTO_ACCEPT_NUMBER options {accountId: DEFAULT_SLOT_ID,
     *             videoState: MEDIA_TYPE_VOICE,dialScene: DIAL_SCENCE_CALL_NORMAL, dialType:DIAL_OTT_TYPE}
     *             and before being accepted,the callEventChange event get EVENT_OTT_FUNCTION_UNSUPPORTED,
     *             then off the the callEventChange event,then dial a call by number AUTO_ACCEPT_NUMBER2 options
     *             {accountId: DEFAULT_SLOT_ID, videoState: MEDIA_TYPE_VOICE,dialScene: DIAL_SCENCE_CALL_NORMAL,
     *             dialType:DIAL_OTT_TYPE} and before being accepted,
     *             the callEventChange event not get EVENT_OTT_FUNCTION_UNSUPPORTED
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_off_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_off_0200';
        let callId = null;
        let eventDate = null;
        let options = {accountId: DEFAULT_SLOT_ID, videoState: MEDIA_TYPE_VOICE,
            dialScene: DIAL_SCENCE_CALL_NORMAL, dialType:DIAL_OTT_TYPE};
        call.on('callEventChange', (err, value) => {
            console.log(`Telephony_CallManager callEventChange error ${toString(err)},callStateInfo ${
                toString(value)}`);
            if (err) {
                expect().assertFail();
                let message = `Telephony_CallManager callEventChange,case failed, err message = ${toString(err)}`;
                console.log(message);
                done();
                return;
            }
            eventDate = value.eventId;
            if (eventDate === EVENT_OTT_FUNCTION_UNSUPPORTED) {
                let flag = eventDate === EVENT_OTT_FUNCTION_UNSUPPORTED;
                expect(flag).assertTrue();
                call.off('callEventChange', (data, error) => {
                    if (error) {
                        expect().assertFail();
                        let message = `${caseName} callEventChange,case failed, err message = ${toString(error)}`;
                        console.log(message);
                        done();
                        return;
                    }
                    let eventDate = null;
                    let time = setTimeout(function () {
                        flag = flag && (eventDate === null);
                        expect(flag).assertTrue();
                        console.log(`${caseName},case ${flag ? 'success' : 'failed'}`);
                        done();
                    }, 20 * TIMEOUT_LENTH);
                    call.dial(AUTO_ACCEPT_NUMBER, options, (err, data) => {
                        if (err) {
                            console.log(`${caseName} dial error,case failed, err:${err}`);
                            clearTimeout(time);
                            done();
                            return;
                        }
                        console.log(`${caseName} dial success data:${data}`);
                    });
                });
            }
        });
        call.dial(AUTO_ACCEPT_NUMBER, options, (err, data) => {
            if (err) {
                console.log(`${caseName} dial error,case failed, err:${err}`);
                call.off('callEventChange');
                done();
                return;
            }
            console.log(`${caseName} dial success data:${data}`);
        });
    });

    /**
     * @tc.number  Telephony_CallManager_off_0300
     * @tc.name    Dial a call by number PHONE_NUMBER_LENGTH_11  and before being accepted,
     *             then hunup the call,the callDisconnectedCause event get HUNUP_SUCCESS_EVENT_ID,
     *             then off the the callDisconnectedCause event,then dial a call by number PHONE_NUMBER_LENGTH_11
     *             and before being accepted,then hunup the call,
     *             the callEventChange event not get HUNUP_SUCCESS_EVENT_ID
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_off_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_off_0300';
        let callId = null;
        let eventDate = null;
        call.on('callDisconnectedCause', (err, value) => {
            console.log(`Telephony_CallManager callDisconnectedCause error ${toString(err)},callStateInfo ${
                toString(value)}`);
            if (err) {
                expect().assertFail();
                let message = `Telephony_CallManager callDisconnectedCause,case failed, err message = ${toString(err)}`;
                console.log(message);
                done();
                return;
            }
            eventDate = value.disconnectedCause;
            if (eventDate === HUNUP_SUCCESS_EVENT_ID) {
                let flag = eventDate === HUNUP_SUCCESS_EVENT_ID;
                expect(flag).assertTrue();
                call.off('callDisconnectedCause', (data, error) => {
                    if (error) {
                        expect().assertFail();
                        let message = `${caseName} callDisconnectedCause,case failed, err message = ${toString(error)}`;
                        console.log(message);
                        done();
                        return;
                    }
                    eventDate = null;
                    scenceInCalling({
                        caseName:caseName,
                        phoneNumber:PHONE_NUMBER_LENGTH_11,
                        checkState:CALL_STATUS_DIALING
                    }).then(data => {
                        callId = data.callId;
                        let time = setTimeout(function () {
                            flag = flag && (eventDate === null);
                            expect(flag).assertTrue();
                            console.log(`${caseName},case ${flag ? 'success' : 'failed'}`);
                            done();
                        }, 20 * TIMEOUT_LENTH);
                        hangupCall(caseName, callId).then(data => {
                            console.log(`${caseName} hangupCall2 success`);
                        }).catch(error => {
                            console.log(`${caseName} hangupCall2 error,error:${
                                toString(error)}`);
                            clearTimeout(time);
                            done();
                        });
                    }).catch(error => {
                        console.log(`${caseName} scenceInCalling2 error,case failed,error:${
                            toString(error)}`);
                        done();
                    });
                });
            }
        });
        scenceInCalling({
            caseName:caseName,
            phoneNumber:PHONE_NUMBER_LENGTH_11,
            checkState:CALL_STATUS_DIALING
        }).then(data => {
            callId = data.callId;
            console.log(`${caseName} scenceInCalling success`);
            hangupCall(caseName, callId).then(data => {
                console.log(`${caseName} hunupcall success`);
            }).catch(error => {
                console.log(`${caseName} hangupCall error, case failed,error:${
                    toString(error)}`);
                call.off('callDisconnectedCause');
                done();
            });
        }).catch(error => {
            console.log(`${caseName} scenceInCalling error,case failed,error:${
                toString(error)}`);
            call.off('callDisconnectedCause');
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