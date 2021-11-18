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
import {describe, afterAll, it, expect, beforeAll} from 'deccjsunit/index';
import {apiToReliability} from './lib/ApiToPromiseReliability.js';
import {
    scenceInCalling,
    hangupCall2,
    callDetailsChangeOn,
    callDetailsChangeOff
} from './lib/ScenceInCalling.js';
import {scenceLimitCalling} from './lib/ScenceLimitCalling.js';
import {
    CALL_STATUS_ACTIVE,
    DEVICE_SPEAKER,
    AUTO_ACCEPT_NUMBER,
    RESTRICTION_TYPE_ROAMING_INCOMING,
    RESTRICTION_MODE_ACTIVATION,
    CALL_ID_NOT_EXIST,
    RIGHT_PASSWORD,
    DEFAULT_SLOT_ID,
    TRANSFER_ENABLE,
    TRANSFER_DISABLE,
    TRANSFER_TYPE_ALWAYS,
    TRANSFER_TYPE_UNREACHABLE,
    PHONE_NUMBER_VOICE_MAIL,
    PHONE_NUMBER_LENGTH_8,
    PERF_GOAL_TIME,
    RESTRICTION_MODE_DEACTIVATION,
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {apiToPerfomace} from './lib/ApiToPromisePerfomance.js';
import {scenceTransferCalling} from './lib/ScenceTransfer.js';

describe('CallManagementReliablePerformance', function () {
    beforeAll(function () {
        callDetailsChangeOn();
    });

    afterAll(function () {
        callDetailsChangeOff();
        console.log('Telephony_CallManager all 44 case is over for callmanager CallManagementReliablePerformance');
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Async_0400
     * @tc.name    Run TEST_RELY_NUMBER times separateConference by callback
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_separateConference_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Async_0400';
        apiToReliability({
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
            }
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Promise_0400
     * @tc.name    Run TEST_RELY_NUMBER times separateConference by promise
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_separateConference_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Promise_0400';
        apiToReliability({
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
            }
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Async_0400
     * @tc.name    Run TEST_RELY_NUMBER times isNewCallAllowed by callback,the function always return true
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isNewCallAllowed_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Async_0400';
        apiToReliability({
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
            }
        }, [function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Promise_0400
     * @tc.name    Run TEST_RELY_NUMBER times isNewCallAllowed by promise,the function always return true
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isNewCallAllowed_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Promise_0400';
        apiToReliability({
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
            }
        }, []);
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Async_0400
     * @tc.name    Run TEST_RELY_NUMBER times isRinging by callback,the function always return false
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isRinging_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Async_0400';
        apiToReliability({
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
            }
        }, [function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Promise_0400
     * @tc.name    Run TEST_RELY_NUMBER times isRinging by promise,the function always return false
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isRinging_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Promise_0400';
        apiToReliability({
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
            }
        }, []);
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Async_0400
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setMuted by callback and by arg true
     *             TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setMuted_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Async_0400';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
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
     * @tc.number  Telephony_CallManager_setMuted_Promise_0400
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setMuted by promise and by arg true
     *             TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setMuted_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Promise_0400';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
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
     * @tc.number  Telephony_CallManager_cancelMuted_Async_0400
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted then run function cancelMuted by callback TEST_RELY_NUMBER times,
     *             the function cancelMuted always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_cancelMuted_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Async_0400';
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
            apiToReliability({
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
     * @tc.number  Telephony_CallManager_cancelMuted_Promise_0400
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted then run function cancelMuted by promise TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_cancelMuted_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Promise_0400';
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
            apiToReliability({
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
     * @tc.number  Telephony_CallManager_setAudioDevice_Async_0600
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setAudioDevice by callback and by arg
     *             DEVICE_SPEAKER TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0600';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
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
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0600
     * @tc.name    Calling to AUTO_ACCEPT_NUMBER,run function setAudioDevice by promise and by arg
     *             DEVICE_SPEAKER TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0600';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
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
     * @tc.number  Telephony_CallManager_muteRinger_Async_0300
     * @tc.name    Unwanted state,run function muteRinger by callback and TEST_RELY_NUMBER times,the function
     *             always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_muteRinger_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Async_0300';
        apiToReliability({
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
            }
        }, [function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Promise_0300
     * @tc.name    Unwanted state,run function muteRinger by promise and TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_muteRinger_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Promise_0300';
        apiToReliability({
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
            }
        }, [function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1600
     * @tc.name    Run function setCallRestriction by callback
     *             by arg callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_ACTIVATION for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1600';
        apiToReliability({
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
            }
        }, [
            DEFAULT_SLOT_ID, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:RIGHT_PASSWORD,
                mode:RESTRICTION_MODE_ACTIVATION
            }, function () {}
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1600
     * @tc.name    Run function setCallRestriction by promise
     *             by arg callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password RIGHT_PASSWORD
     *             mode RESTRICTION_MODE_ACTIVATION for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1600';
        apiToReliability({
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
            }
        }, [
            DEFAULT_SLOT_ID, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:RIGHT_PASSWORD,
                mode:RESTRICTION_MODE_ACTIVATION
            }
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1100
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING on and run function getCallRestriction
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for TEST_RELY_NUMBER times,the function always return {status:1}
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1100';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_ACTIVATION);
            console.log(`${caseName} scenceLimitCalling success,data:${toString(data)}`);
            apiToReliability({
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
                }
            }, [DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING, function () {}]);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1100
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING on and run function getCallRestrictionStatus
     *             by promise by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for TEST_RELY_NUMBER times,the function always return {status:1}
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1100';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_ACTIVATION);
            console.log(`${caseName} scenceLimitCalling success,data:${toString(data)}`);
            apiToReliability({
                func: 'getCallRestrictionStatus',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data.status === 1;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING]);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by callback for
     *             TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1100';
        apiToReliability({
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
            }
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:PHONE_NUMBER_VOICE_MAIL
            }, function () {}
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum PHONE_NUMBER_VOICE_MAIL by promise
     *             for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1100';
        apiToReliability({
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
            }
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:PHONE_NUMBER_VOICE_MAIL
            }
        ]);
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum PHONE_NUMBER_LENGTH_8 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by callback TEST_RELY_NUMBER times,
     *             the function always return status TRANSFER_DISABLE,number PHONE_NUMBER_LENGTH_8,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_1300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1300';
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_ALWAYS, PHONE_NUMBER_LENGTH_8);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            apiToReliability({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === PHONE_NUMBER_LENGTH_8 && data.type === TRANSFER_TYPE_ALWAYS;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS, function () {}]);
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum PHONE_NUMBER_LENGTH_8 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by promise TEST_RELY_NUMBER times,
     *             the function always return status TRANSFER_DISABLE,number PHONE_NUMBER_LENGTH_8,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_getCallTransferInfo_Promise_1300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1300';
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_ALWAYS, PHONE_NUMBER_LENGTH_8);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            apiToReliability({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === PHONE_NUMBER_LENGTH_8 && data.type === TRANSFER_TYPE_ALWAYS;
                },
                runedFunc:function (flag) {
                    expect(flag).assertTrue();
                    console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                    done();
                }
            }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS]);
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
            done();
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
     * @tc.desc    Reliability test
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
     * @tc.desc    Reliability test
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

});
