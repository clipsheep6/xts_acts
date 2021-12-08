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
import {Camera} from '@ohos.multimedia.camera_napi';
import camera from '@ohos.multimedia.camera_napi';
import {describe, afterAll, it, expect, beforeAll, afterEach} from 'deccjsunit/index';
import {
    scenceInCalling,
    hangupCall2,
    callDetailsChangeOn,
    callDetailsChangeOff,
    hangupCall
} from './lib/ScenceInCalling.js';
import {scenceLimitCalling} from './lib/ScenceLimitCalling.js';
import {
    CALL_STATUS_ACTIVE,
    DEVICE_SPEAKER,
    CALL_STATUS_DIALING,
    CALL_STATUS_DISCONNECTED,
    AUTO_ACCEPT_NUMBER,
    PHONE_NUMBER_LENGTH_11,
    CALL_ID_NOT_EXIST,
    IMAGE_PNG_PATH,
    PERF_GOAL_TIME,
    CALL_STATE_UNKNOWN,
    TEST_PERF_COUNT,
    CALL_STATE_IDLE,
    CARMER_ID_SPACE,
    DEVICE_SPEAKER,
    RESTRICTION_TYPE_ROAMING_INCOMING,
    CALL_ID_NOT_EXIST,
    RIGHT_PASSWORD,
    DEFAULT_SLOT_ID,
    
    TRANSFER_DISABLE,
    TRANSFER_TYPE_ALWAYS,
    TRANSFER_TYPE_UNREACHABLE,
    PHONE_NUMBER_VOICE_MAIL,
    RESTRICTION_MODE_DEACTIVATION,
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {apiToPerfomace} from './lib/ApiToPromisePerfomance.js';
import {scenceTransferCalling} from './lib/ScenceTransfer.js';
let callId = null;
describe('CallManagementReliablePerformance', function () {
    beforeAll(function () {
        callDetailsChangeOn();
    });

    afterAll(function () {
        callDetailsChangeOff();
        console.log('Telephony_CallManager all 24 case is over for callmanager CallManagementReliablePerformance');
    });

    afterEach(async function () {
        try {
            let callState = await call.getCallState();
            console.log(`Telephony_CallManager callState ${callState}`);
            if (callState === CALL_STATE_UNKNOWN || callState === CALL_STATE_IDLE) {
                return;
            }
            if (callId) {
                let data = await hangupCall('Telephony_CallManager', callId);
                console.log(`Telephony_CallManager hangupCall success ${toString(data)}`);
            }
        } catch (error) {
            console.log('Telephony_CallManager getCallState,hangupCall, error');
        }
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Async_0500
     * @tc.name    Run TEST_PERF_COUNT times function separateConference by callback
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
     it('Telephony_CallManager_separateConference_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Async_0500';
        apiToPerfomace({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Promise_0500
     * @tc.name    Run TEST_PERF_COUNT times function separateConference by promise
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_separateConference_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Promise_0500';
        apiToPerfomace({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Async_0500
     * @tc.name    Run TEST_PERF_COUNT times function isNewCallAllowed by callback ,
     *             the function always return true,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isNewCallAllowed_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Async_0500';
        apiToPerfomace({
            func: 'isNewCallAllowed',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Promise_0500
     * @tc.name    Run TEST_PERF_COUNT times function isNewCallAllowed by promise ,
     *             the function always return true,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isNewCallAllowed_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Promise_0500';
        apiToPerfomace({
            func: 'isNewCallAllowed',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, []);
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Async_0500
     * @tc.name    Run TEST_PERF_COUNT times function isRinging by callback ,
     *             the function always return false,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isRinging_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Async_0500';
        apiToPerfomace({
            func: 'isRinging',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === false;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Promise_0500
     * @tc.name    Run TEST_PERF_COUNT times function isRinging by promise ,
     *             the function always return false,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isRinging_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Promise_0500';
        apiToPerfomace({
            func: 'isRinging',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === false;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, []);
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Async_0500
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setMuted by callback and by arg true for 20times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setMuted_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Async_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'setMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [function () {}]);
        } catch (error) {
            expect().assertFail();
            if (callId) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            } else {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                done();
            }
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Promise_0500
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setMuted by promise and by arg true for
     *             TEST_PERF_COUNT times,the function always return void,and the cost less than
     *             PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setMuted_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Promise_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'setMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, []);
        } catch (error) {
            expect().assertFail();
            if (callId) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            } else {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                done();
            }
        }
    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Async_0500
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted then run function cancelMuted by callback for TEST_RELY_NUMBER times,
     *             the function cancelMuted always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_cancelMuted_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Async_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success,data:${toString(data)}`);
            callId = data.callId;
            data = await call.setMuted();
            console.log(`${caseName} setMuted success,data:${toString(data)}`);
            apiToPerfomace({
                func: 'cancelMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
            }, [function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            if (callId) {
                hangupCall2(caseName, done, callId);
            } else {
                done();
            }
        }

    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Promise_0500
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted then run function cancelMuted by promise  for TEST_RELY_NUMBER times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_cancelMuted_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Promise_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success,data:${toString(data)}`);
            callId = data.callId;
            data = await call.setMuted();
            console.log(`${caseName} setMuted success,data:${toString(data)}`);
            apiToPerfomace({
                func: 'cancelMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                }
            }, []);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
            if (callId) {
                hangupCall2(caseName, done, callId);
            } else {
                done();
            }
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Async_0700
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setAudioDevice by callback and by arg DEVICE_SPEAKER,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0700';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'setAudioDevice',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [DEVICE_SPEAKER, function () {}]);
        } catch (error) {
            expect().assertFail();
            if (callId) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            } else {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                done();
            }
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0700
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setAudioDevice by promise and by arg DEVICE_SPEAKER,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0700';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPerfomace({
                func: 'setAudioDevice',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [DEVICE_SPEAKER]);
        } catch (error) {
            expect().assertFail();
            if (callId) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            } else {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                done();
            }
        }
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Async_0400
     * @tc.name    Unwanted state,run function muteRinger by callback and TEST_PERF_COUNT times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_muteRinger_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Async_0400';
        apiToPerfomace({
            func: 'muteRinger',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Promise_0400
     * @tc.name    Unwanted state,run function muteRinger by callback and TEST_PERF_COUNT times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_muteRinger_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Promise_0400';
        apiToPerfomace({
            func: 'muteRinger',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, []);
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1700
     * @tc.name    Run function setCallRestriction by callback by arg
     *             callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_DEACTIVATION for TEST_PERF_COUNT times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1700';
        apiToPerfomace({
            func: 'setCallRestriction',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [
            1, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:RIGHT_PASSWORD,
                mode:RESTRICTION_MODE_DEACTIVATION
            }, function () {}
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1700
     * @tc.name    Run function setCallRestriction by promise by arg
     *             callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_DEACTIVATION for TEST_PERF_COUNT times,
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1700';
        apiToPerfomace({
            func: 'setCallRestriction',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [
            1, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:RIGHT_PASSWORD,
                mode:RESTRICTION_MODE_DEACTIVATION
            }
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1200
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING off and run function getCallRestrictionStatus
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for TEST_PERF_COUNT times,the function always return {status:0},and the cost less
     *             than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1200';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_DEACTIVATION);
            console.log(`${caseName} success,scenceLimitCalling,data:${toString(data)}`);
            apiToPerfomace({
                func: 'getCallRestrictionStatus',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === 1;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                },
            }, [1, RESTRICTION_TYPE_ROAMING_INCOMING, function () {}]);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1200
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING off and run function getCallRestrictionStatus
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for TEST_PERF_COUNT times,the function always return {status:0},and the cost less
     *             than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1200';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_DEACTIVATION);
            console.log(`${caseName} scenceLimitCalling success,data:${toString(data)}`);
            apiToPerfomace({
                func: 'getCallRestrictionStatus',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === 0;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                },
            }, [1, RESTRICTION_TYPE_ROAMING_INCOMING]);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by callback for
     *             TEST_PERF_COUNT times,the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1200';
        apiToPerfomace({
            func: 'setCallTransfer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:PHONE_NUMBER_VOICE_MAIL
            }, function () {}
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by promise for
     *             TEST_PERF_COUNT times,the function always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1200';
        apiToPerfomace({
            func: 'setCallTransfer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:PHONE_NUMBER_VOICE_MAIL
            }
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum PHONE_NUMBER_VOICE_MAIL to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by callback TEST_PERF_COUNT times,
     *             the function always return status TRANSFER_DISABLE,number PHONE_NUMBER_VOICE_MAIL,
     *             type TRANSFER_TYPE_ALWAYS,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1400';
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE, TRANSFER_TYPE_ALWAYS,
                PHONE_NUMBER_VOICE_MAIL);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            apiToPerfomace({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === PHONE_NUMBER_VOICE_MAIL && data.type === TRANSFER_TYPE_ALWAYS;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [0, TRANSFER_TYPE_ALWAYS, function () {}]);
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum PHONE_NUMBER_VOICE_MAIL to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by promise TEST_PERF_COUNT times,
     *             the function always return status TRANSFER_DISABLE,number PHONE_NUMBER_VOICE_MAIL,
     *             type TRANSFER_TYPE_ALWAYS,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallTransferInfo_Promise_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1400';
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE, TRANSFER_TYPE_ALWAYS,
                PHONE_NUMBER_VOICE_MAIL);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            apiToPerfomace({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === PHONE_NUMBER_VOICE_MAIL && data.type === TRANSFER_TYPE_ALWAYS;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                },
            }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS]);
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_dial_Async_1200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by callback,
     *             before being accepted,run function hangup by callback to hunup the call for TEST_RELY_NUMBER times
     *             the function dial always return true,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_dial_Async_1200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_dial_Async_1200';
        let count = 0;
        let startTime = new Date();
        call.on('callDetailsChange', (err, callStateInfo) => {
            if (err) {
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId, (error, data) => {
                    if (error) {
                        console.log(`${caseName} hangup error,test end`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    }
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_PERF_COUNT) {
                    call.off('callDetailsChange');
                    expect((new Date() - startTime) <= PERF_GOAL_TIME).assertTrue();
                    console.log(`${caseName} test end`);
                    done();
                }
                if (count < TEST_PERF_COUNT) {
                    call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
                        count++;
                        if (error) {
                            console.log(`${caseName} dial error,test end`);
                            expect().assertFail();
                            call.off('callDetailsChange');
                            done();
                        }
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
            count++;
            if (error) {
                console.log(`${caseName} dial error,test end`);
                expect().assertFail();
                call.off('callDetailsChange');
                done();
            }
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_dial_Async_1200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by callback
     *             before being accepted,run function hangup by callback to hunup the call for TEST_RELY_NUMBER times
     *             the function dial always return true,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_dial_Async_1200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_dial_Async_1200';
        let count = 0;
        let startTime = new Date();
        call.on('callDetailsChange', (err, callStateInfo) => {
            if (err) {
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId).catch(error => {
                    console.log(`${caseName} hangup error,test end`);
                    expect().assertFail();
                    call.off('callDetailsChange');
                    done();
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_PERF_COUNT) {
                    call.off('callDetailsChange');
                    expect((new Date() - startTime) <= PERF_GOAL_TIME).assertTrue();
                    console.log(`${caseName} test end`);
                    done();
                }
                if (count < TEST_PERF_COUNT) {
                    call.dial(PHONE_NUMBER_LENGTH_11).then(data => {
                        count++;
                    }).catch(error => {
                        console.log(`${caseName} dial error,test end`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11).then(data => {
            count++;
        }).catch(error => {
            console.log(`${caseName} dial error,test end`);
            expect().assertFail();
            call.off('callDetailsChange');
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_answer_Async_0300
     * @tc.name    Run TEST_RELY_NUMBER times answer by callback
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_answer_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_answer_Async_0300';
        apiToPerfomace({
            func: 'answer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_answer_Promise_0300
     * @tc.name    Run TEST_RELY_NUMBER times answer by promise
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_answer_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_answer_Promise_0300';
        apiToPerfomace({
            func: 'answer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_reject_Async_0300
     * @tc.name    Run TEST_RELY_NUMBER times reject by callback
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_reject_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_reject_Async_0300';
        apiToPerfomace({
            func: 'reject',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_reject_Promise_0300
     * @tc.name    Run TEST_RELY_NUMBER times answer by promise
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_reject_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_reject_Promise_0300';
        apiToPerfomace({
            func: 'reject',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            runedFunc:function (flag) {
                expect(flag).assertTrue();
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                done();
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_hangup_Async_0300
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by callback
     *             before being accepted,run function hangup by callback to hunup the call for TEST_PERF_COUNT times
     *             the function hangup always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_hangup_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_hangup_Async_0300';
        let count = 0;
        let startTime = new Date();
        call.on('callDetailsChange', (err, callStateInfo) => {
            if (err) {
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId, (error, data) => {
                    count++;
                    if (error) {
                        console.log(`${caseName} hangup error,test end`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    }
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_PERF_COUNT) {
                    call.off('callDetailsChange');
                    expect((new Date() - startTime) <= PERF_GOAL_TIME).assertTrue();
                    console.log(`${caseName} test end`);
                    done();
                }
                if (count < TEST_PERF_COUNT) {
                    call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
                        if (error) {
                            console.log(`${caseName} dial error,test end`);
                            expect().assertFail();
                            call.off('callDetailsChange');
                            done();
                        }
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
            if (error) {
                console.log(`${caseName} dial error,test end`);
                expect().assertFail();
                call.off('callDetailsChange');
                done();
            }
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_dial_Async_1200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by promise
     *             before being accepted,run function hangup by promise to hunup the call for TEST_PERF_COUNT times
     *             the function hangup always return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_dial_Async_1200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_dial_Async_1200';
        let count = 0;
        let startTime = new Date();
        call.on('callDetailsChange', (err, callStateInfo) => {
            if (err) {
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId).then(data => {
                    count++;
                }).catch(error => {
                    console.log(`${caseName} hangup error,test end`);
                    expect().assertFail();
                    call.off('callDetailsChange');
                    done();
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_PERF_COUNT) {
                    call.off('callDetailsChange');
                    expect((new Date() - startTime) <= PERF_GOAL_TIME).assertTrue();
                    console.log(`${caseName} test end`);
                    done();
                }
                if (count < TEST_PERF_COUNT) {
                    call.dial(PHONE_NUMBER_LENGTH_11).catch(error => {
                        console.log(`${caseName} dial error,test end`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11).catch(error => {
            console.log(`${caseName} dial error,test end`);
            expect().assertFail();
            call.off('callDetailsChange');
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startDTMF_Async_1500
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function startDTMF by callback and by arg
     *             callId currentCallId character C for TEST_PERF_COUNT times,the function always return void,
     *             and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_startDTMF_Async_1500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_startDTMF_Async_1500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'startDTMF',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [callId, 'C', function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startDTMF_Promise_1500
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function startDTMF by promise and by arg
     *             callId currentCallId character B for TEST_PERF_COUNT times,the function always return void,
     *             and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_startDTMF_Promise_1500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_startDTMF_Promise_1500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'startDTMF',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [callId, 'B']);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopDTMF_Async_0500
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function stopDTMF by callback and by arg
     *             callId currentCallId for TEST_PERF_COUNT times,the function always return void,
     *             and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_stopDTMF_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopDTMF_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'stopDTMF',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [callId, 'C', function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopDTMF_Promise_0500
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function stopDTMF by promise and by arg
     *             callId currentCallId for TEST_PERF_COUNT times,the function always return void,
     *             and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_IMS_stopDTMF_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopDTMF_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'stopDTMF',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [callId, 'B']);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Async_0400
     * @tc.name    Dial a call and after answering the call,run function getCameraIDs to get cameraId,
     *             run function controlCamera by args right cameraId by callback,
     *             the callback function for for TEST_PERF_COUNT times,the function always return void,
     *             and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_controlCamera_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let cameraIds = await camera.getCameraIDs();
            let cameraId = cameraIds && cameraIds.length && cameraIds[0];
            if (!cameraId) {
                console.log(`${caseName} error,case failed,carmerId is not exit`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
                return;
            }
            apiToPerfomace({
                func: 'controlCamera',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    call.controlCamera(CARMER_ID_SPACE);
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [cameraId, function () {}]);
        } catch (error) {
            expect().assertFail();
            if (callId) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                hangupCall2(caseName, done, callId);
            } else {
                console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                done();
            }
        }
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Promise_0400
     * @tc.name    Dial a call and after answering the call,run function getCameraIDs to get cameraId,
     *             run function controlCamera by args right cameraId by promise,
     *             the callback function for for TEST_PERF_COUNT times,the function always return void,
     *             and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_controlCamera_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let cameraIds = await camera.getCameraIDs();
            let cameraId = cameraIds && cameraIds.length && cameraIds[0];
            if (!cameraId) {
                console.log(`${caseName} error,case failed,carmerId is not exit`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
                return;
            }
            apiToPerfomace({
                func: 'controlCamera',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    call.controlCamera(CARMER_ID_SPACE);
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [cameraId]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0600
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by callback for TEST_PERF_COUNT times,
     *             the callback function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToPerfomace({
                func: 'setPreviewWindow',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [info, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0600
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by promise for TEST_PERF_COUNT times,
     *             the function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToPerfomace({
                func: 'setPreviewWindow',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [info]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0600
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by callback for TEST_PERF_COUNT times,
     *             the callback function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToPerfomace({
                func: 'setDisplayWindow',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [info, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0600
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by promise for TEST_PERF_COUNT times,
     *             the function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0600';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToPerfomace({
                func: 'setDisplayWindow',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [info]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Async_0700
     * @tc.name    Dial a call and after answering the call,run function getSupportedZoomRange to to get the zoomRatio,
     *             run function setCameraZoom by args getted zoomRatio by callback for TEST_PERF_COUNT times,
     *             the callback function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCameraZoom_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Async_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            console.log(`${caseName} scenceInCalling success`);
            data = await new Camera().getSupportedZoomRange();
            console.log(`${caseName} getSupportedZoomRange success`);
            let zoomRatio = data && data.length ? data[0] : 5.0;
            apiToPerfomace({
                func: 'setCameraZoom',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [zoomRatio, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Promise_0700
     * @tc.name    Dial a call and after answering the call,run function getSupportedZoomRange to to get the zoomRatio,
     *             run function setCameraZoom by args getted zoomRatio by promise for TEST_PERF_COUNT times,
     *             the function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCameraZoom_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Promise_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            console.log(`${caseName} scenceInCalling success`);
            data = await new Camera().getSupportedZoomRange();
            console.log(`${caseName} getSupportedZoomRange success`);
            let zoomRatio = data && data.length ? data[0] : 5.0;
            apiToPerfomace({
                func: 'setCameraZoom',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [zoomRatio]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0800
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by callback for TEST_PERF_COUNT times,
     *             the callback function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setPausePicture_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0800';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'setPausePicture',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [IMAGE_PNG_PATH, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0800
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by promise for TEST_PERF_COUNT times,
     *             the function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0800';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'setPausePicture',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [IMAGE_PNG_PATH]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0900
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection by args
     *             rotation 0 by callback for TEST_PERF_COUNT times,
     *             the callback function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0900';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'setDeviceDirection',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [0, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0900
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection by args
     *             rotation 0 by promise for TEST_PERF_COUNT times,
     *             the function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0900';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToPerfomace({
                func: 'setDeviceDirection',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return !error;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    hangupCall2(caseName, done, callId);
                },
                perfTime:PERF_GOAL_TIME
            }, [0]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });
});
