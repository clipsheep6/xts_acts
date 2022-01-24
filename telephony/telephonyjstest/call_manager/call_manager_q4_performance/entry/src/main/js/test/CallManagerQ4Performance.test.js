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

import call from '@ohos.telephony.calltest';
import {describe, afterAll, it, expect, beforeAll} from 'deccjsunit/index';
import {
    scenceInCalling,
    hangupCall2,
    callDetailsChangeOn,
    callDetailsChangeOff,
    callId as gloabalCallId,
    hangupCall
} from './lib/ScenceInCalling.js';
import {scenceLimitCalling, scenceLimitCancel} from './lib/ScenceLimitCalling.js';
import {
    CALL_STATUS_ACTIVE,
    DEVICE_SPEAKER,
    AUTO_ACCEPT_NUMBER,
    RESTRICTION_TYPE_ROAMING_INCOMING,
    CALL_ID_NOT_EXIST,
    RIGHT_PASSWORD,
    DEFAULT_SLOT_ID,
    TRANSFER_DISABLE,
    TRANSFER_TYPE_UNCONDITIONAL,
    TRANSFER_TYPE_NOT_REACHABLE,
    PHONE_NUMBER_VOICE_MAIL,
    PERF_GOAL_TIME,
    RESTRICTION_MODE_DEACTIVATION,
    CALL_STATE_IDLE,
    TRANSFERSETTING_DISABLE
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {apiToPerfomace} from './lib/ApiToPromisePerfomance.js';
import {scenceTransferCalling, scenceTransferCancel} from './lib/ScenceTransfer.js';

describe('CallManagementReliablePerformance', function () {
    beforeAll(function () {
        callDetailsChangeOn();
    });

    afterEach(async function () {
        try {
            let callState = await call.getCallState();
            console.log(`Telephony_CallManager callState ${callState}`);
            if (callState === CALL_STATE_IDLE) {
                return;
            }
            if (gloabalCallId) {
                let data = await hangupCall('Telephony_CallManager', gloabalCallId);
                console.log(`Telephony_CallManager hangupCall success ${toString(data)}`);
            }
        } catch (error) {
            console.log('Telephony_CallManager hangupCall or getCallState error');
        }
    });

    afterAll(function () {
        callDetailsChangeOff();
        console.log('Telephony_CallManager all 22 case is over for callmanager CallManagementReliablePerformance');
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
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms,
     *             last cancel limit
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
                scenceLimitCancel(caseName, RESTRICTION_TYPE_ROAMING_INCOMING).then(data => {
                    done();
                }).catch(error => {
                    done();
                });
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
     *             the function always return void,and the cost less than PERF_GOAL_TIME ms,
     *             last cancel limit
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
                scenceLimitCancel(caseName, RESTRICTION_TYPE_ROAMING_INCOMING).then(data => {
                    done();
                }).catch(error => {
                    done();
                });
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
     *             than PERF_GOAL_TIME ms,last cancel limit
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
                    scenceLimitCancel(caseName, RESTRICTION_TYPE_ROAMING_INCOMING).then(data => {
                        done();
                    }).catch(error => {
                        done();
                    });
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
     *             than PERF_GOAL_TIME ms,last cancel limit
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
                    scenceLimitCancel(caseName, RESTRICTION_TYPE_ROAMING_INCOMING).then(data => {
                        done();
                    }).catch(error => {
                        done();
                    });
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
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFERSETTING_DISABLE,
     *             type TRANSFER_TYPE_NOT_REACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by callback for
     *             TEST_PERF_COUNT times,the function always return void,and the cost less than PERF_GOAL_TIME ms,
     *             last cancel transfer
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
                scenceTransferCancel(caseName).then(data => {
                    done();
                }).catch(error => {
                    done();
                });
            },
            perfTime:PERF_GOAL_TIME
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFERSETTING_DISABLE,
                type:TRANSFER_TYPE_NOT_REACHABLE,
                phoneNumber:PHONE_NUMBER_VOICE_MAIL
            }, function () {}
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFERSETTING_DISABLE,
     *             type TRANSFER_TYPE_NOT_REACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by promise for
     *             TEST_PERF_COUNT times,the function always return void,and the cost less than PERF_GOAL_TIME ms,
     *             last cancel transfer
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
                scenceTransferCancel(caseName).then(data => {
                    done();
                }).catch(error => {
                    done();
                });
            },
            perfTime:PERF_GOAL_TIME
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFERSETTING_DISABLE,
                type:TRANSFER_TYPE_NOT_REACHABLE,
                phoneNumber:PHONE_NUMBER_VOICE_MAIL
            }
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFERSETTING_DISABLE,
     *             type TRANSFER_TYPE_UNCONDITIONAL,transferNum PHONE_NUMBER_VOICE_MAIL to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFERSETTING_DISABLE,
     *             type TRANSFER_TYPE_UNCONDITIONAL by callback TEST_PERF_COUNT times,
     *             the function always return status TRANSFER_DISABLE,number PHONE_NUMBER_VOICE_MAIL,
     *             type TRANSFER_TYPE_UNCONDITIONAL,and the cost less than PERF_GOAL_TIME ms,
     *             last cancel transfer
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1400';
        try {
            let data = await scenceTransferCalling(caseName, TRANSFERSETTING_DISABLE, TRANSFER_TYPE_UNCONDITIONAL,
                PHONE_NUMBER_VOICE_MAIL);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            apiToPerfomace({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === PHONE_NUMBER_VOICE_MAIL && data.type === TRANSFER_TYPE_UNCONDITIONAL;
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
            }, [0, TRANSFER_TYPE_UNCONDITIONAL, function () {}]);
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFERSETTING_DISABLE,
     *             type TRANSFER_TYPE_UNCONDITIONAL,transferNum PHONE_NUMBER_VOICE_MAIL to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFERSETTING_DISABLE,
     *             type TRANSFER_TYPE_UNCONDITIONAL by promise TEST_PERF_COUNT times,
     *             the function always return status TRANSFER_DISABLE,number PHONE_NUMBER_VOICE_MAIL,
     *             type TRANSFER_TYPE_UNCONDITIONAL,and the cost less than PERF_GOAL_TIME ms,
     *             last cancel transfer
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallTransferInfo_Promise_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1400';
        try {
            let data = await scenceTransferCalling(caseName, TRANSFERSETTING_DISABLE, TRANSFER_TYPE_UNCONDITIONAL,
                PHONE_NUMBER_VOICE_MAIL);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            apiToPerfomace({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === PHONE_NUMBER_VOICE_MAIL && data.type === TRANSFER_TYPE_UNCONDITIONAL;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    scenceTransferCancel(caseName).then(data => {
                        done();
                    }).catch(error => {
                        done();
                    });
                },
            }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_UNCONDITIONAL]);
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
            done();
        }
    });

});
