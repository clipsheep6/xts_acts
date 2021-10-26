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

/**
 * import call from '@ohos.tel_call_manager_inner_api'
 * import call_inner from '@ohos.tel_call_manager_inner_api'
 */
import {describe, afterAll, it, expect, beforeAll} from 'deccjsunit/index';
import {apiToPromiseReliability} from './lib/ApiToPromiseReliability.js';
import {scenceInCalling, hangupCall2, callDetailsChangeOn} from './lib/ScenceInCalling.js';
import {scenceLimitCalling} from './lib/ScenceLimitCalling.js';
import {
    TATUS_ACTIVE, DEVICE_SPEAKER,
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
    TRAN_PHONE_NUMBER_12599,
    TRAN_PHONE_NUMBER_86459751,
    PERF_GOAL_TIME,
    RESTRICTION_MODE_DEACTIVATION,
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {apiToPromisePerfomace} from './lib/ApiToPromisePerfomance.js';
import {scenceTransferCalling} from './lib/ScenceTransfer.js';

describe('CallManagementReliablePerformance', function () {
    beforeAll(function () {
        callDetailsChangeOn();
    });

    afterAll(function () {
        console.log('Telephony_CallManager all 44 case is over for callmanager CallManagementReliablePerformance');
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Async_0400
     * @tc.name    Run 1000 times separateConference by callback
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_separateConference_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Async_0400';
        apiToPromiseReliability({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            }
        }, [CALL_ID_NOT_EXIST, function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Promise_0400
     * @tc.name    Run 1000 times separateConference by promise
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_separateConference_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Promise_0400';
        apiToPromiseReliability({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            }
        }, [CALL_ID_NOT_EXIST])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Async_0400
     * @tc.name    Run 1000 times isNewCallAllowed by callback,the function always return true
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isNewCallAllowed_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Async_0400';
        apiToPromiseReliability({
            func: 'isNewCallAllowed',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            }
        }, [function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Promise_0400
     * @tc.name    Run 1000 times isNewCallAllowed by promise,the function always return true
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isNewCallAllowed_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Promise_0400';
        apiToPromiseReliability({
            func: 'isNewCallAllowed',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            }
        }, [])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Async_0400
     * @tc.name    Run 1000 times isRinging by callback,the function always return false
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isRinging_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Async_0400';
        apiToPromiseReliability({
            func: 'isRinging',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === false;
            }
        }, [function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Promise_0400
     * @tc.name    Run 1000 times isRinging by promise,the function always return false
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_isRinging_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Promise_0400';
        apiToPromiseReliability({
            func: 'isRinging',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === false;
            }
        }, [])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Async_0400
     * @tc.name    Calling to 10086,run function setMuted by callback and by arg true 1000 times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setMuted_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Async_0400';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromiseReliability({
                func: 'setMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, [function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     * @tc.name    Calling to 10086,run function setMuted by promise and by arg true 1000 times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setMuted_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Promise_0400';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromiseReliability({
                func: 'setMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, []);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     *             run function setMuted then run function cancelMuted by callback 1000 times,
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
                checkState:TATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success,data:${toString(data)}`);
            callId = data.callId;
            data = await call.setMuted();
            console.log(`${caseName} setMuted success,data:${toString(data)}`);
            let flag = await apiToPromiseReliability({
                func: 'cancelMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, [function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     *             run function setMuted then run function cancelMuted by promise 1000 times,
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
                checkState:TATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success,data:${toString(data)}`);
            callId = data.callId;
            data = await call.setMuted();
            console.log(`${caseName} setMuted success,data:${toString(data)}`);
            let flag = await apiToPromiseReliability({
                func: 'cancelMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, []);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     * @tc.name    Calling to 10086,run function setAudioDevice by callback and by arg DEVICE_SPEAKER 1000 times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0600';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromiseReliability({
                func: 'setAudioDevice',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, [DEVICE_SPEAKER, function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     * @tc.name    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_SPEAKER 1000 times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0600';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromiseReliability({
                func: 'setAudioDevice',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, [DEVICE_SPEAKER]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     * @tc.name    Unwanted state,run function muteRinger by callback and 1000 times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_muteRinger_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Async_0300';
        apiToPromiseReliability({
            func: 'muteRinger',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            }
        }, [function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Promise_0300
     * @tc.name    Unwanted state,run function muteRinger by promise and 1000 times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_muteRinger_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Promise_0300';
        apiToPromiseReliability({
            func: 'muteRinger',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            }
        }, [function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1600
     * @tc.name    Run function setCallRestriction by callback
     *             by arg callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION for 1000 times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1600';
        apiToPromiseReliability({
            func: 'setCallRestriction',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            }
        }, [
            DEFAULT_SLOT_ID, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:RIGHT_PASSWORD,
                mode:RESTRICTION_MODE_ACTIVATION
            }, function () {}
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1600
     * @tc.name    Run function setCallRestriction by promise
     *             by arg callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION for 1000 times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1600';
        apiToPromiseReliability({
            func: 'setCallRestriction',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            }
        }, [
            DEFAULT_SLOT_ID, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:RIGHT_PASSWORD,
                mode:RESTRICTION_MODE_ACTIVATION
            }
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1100
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING on and run function getCallRestriction
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for 1000 times,the function always return {status:1}
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1100';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_ACTIVATION);
            console.log(`${caseName} scenceLimitCalling success,data:${toString(data)}`);
            let flag = await apiToPromiseReliability({
                func: 'getCallRestrictionStatus',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === 1;
                }
            }, [DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING, function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1100
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING on and run function getCallRestrictionStatus
     *             by promise by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for 1000 times,the function always return {status:1}
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1100';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_ACTIVATION);
            console.log(`${caseName} scenceLimitCalling success,data:${toString(data)}`);
            let flag = await apiToPromiseReliability({
                func: 'getCallRestrictionStatus',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data.status === 1;
                }
            }, [DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        done();
    });




    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_12599 by callback for 1000 times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    var caseName = 'Telephony_CallManager_setCallTransfer_Async_1100';
    it(caseName, 0, function (done) {
        apiToPromiseReliability({
            func: 'setCallTransfer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            }
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:TRAN_PHONE_NUMBER_12599
            }, function () {}
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch(() => {
                console.log(`${caseName} error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_12599 by promise
     *             for 1000 times,the function always return void
     * @tc.desc    Reliability test
     */
    caseName = 'Telephony_CallManager_setCallTransfer_Promise_1100';
    it(caseName, 0, function (done) {
        apiToPromiseReliability({
            func: 'setCallTransfer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            }
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:TRAN_PHONE_NUMBER_12599
            }
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch(() => {
                console.log(`${caseName} error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_86459751 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by callback 1000 times,
     *             the function always return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_86459751,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Reliability test
     */
    caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1300';
    it(caseName, 0, async function (done) {
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_ALWAYS, TRAN_PHONE_NUMBER_86459751);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            let flag = await apiToPromiseReliability({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === TRAN_PHONE_NUMBER_86459751 && data.type === TRANSFER_TYPE_ALWAYS;
                }
            }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS, function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();

        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_86459751 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by promise 1000 times,
     *             the function always return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_86459751,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Reliability test
     */
    caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1300';
    it(caseName, 0, async function (done) {
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_ALWAYS, TRAN_PHONE_NUMBER_86459751);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            let flag = await apiToPromiseReliability({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === TRAN_PHONE_NUMBER_86459751 && data.type === TRANSFER_TYPE_ALWAYS;
                }
            }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
        }
        done();
    });



    /**
     * @tc.number  Telephony_CallManager_separateConference_Async_0500
     * @tc.name    Run 20 times function separateConference by callback
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function return error,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_separateConference_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Async_0500';
        apiToPromisePerfomace({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST, function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Promise_0500
     * @tc.name    Run 20 times function separateConference by promise
     *             when callId is any number(such as 1234) that is not exit in calllist,
     *             the function return error,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_separateConference_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Promise_0500';
        apiToPromisePerfomace({
            func: 'separateConference',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return !!error;
            },
            perfTime:PERF_GOAL_TIME
        }, [CALL_ID_NOT_EXIST])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Async_0500
     * @tc.name    Run 20 times function isNewCallAllowed by callback ,
     *             the function always return true,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isNewCallAllowed_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Async_0500';
        apiToPromisePerfomace({
            func: 'isNewCallAllowed',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            perfTime:PERF_GOAL_TIME
        }, [function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Promise_0500
     * @tc.name    Run 20 times function isNewCallAllowed by promise ,
     *             the function always return true,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isNewCallAllowed_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Promise_0500';
        apiToPromisePerfomace({
            func: 'isNewCallAllowed',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            perfTime:PERF_GOAL_TIME
        }, [])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Async_0500
     * @tc.name    Run 20 times function isRinging by callback ,
     *             the function always return false,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isRinging_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Async_0500';
        apiToPromisePerfomace({
            func: 'isRinging',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === false;
            },
            perfTime:PERF_GOAL_TIME
        }, [function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Promise_0500
     * @tc.name    Run 20 times function isRinging by promise ,
     *             the function always return false,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_isRinging_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Promise_0500';
        apiToPromisePerfomace({
            func: 'isRinging',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === false;
            },
            perfTime:PERF_GOAL_TIME
        }, [])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Async_0500
     * @tc.name    Calling to 10086,run function setMuted by callback and by arg true for 20times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setMuted_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Async_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromisePerfomace({
                func: 'setMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                },
                perfTime:PERF_GOAL_TIME
            }, [function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     * @tc.name    Calling to 10086,run function setMuted by promise and by arg true for 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setMuted_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Promise_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromisePerfomace({
                func: 'setMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                },
                perfTime:PERF_GOAL_TIME
            }, []);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     *             run function setMuted then run function cancelMuted by callback for 20 times,
     *             the function cancelMuted always return void,and the cost less than 10ms
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_cancelMuted_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Async_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success,data:${toString(data)}`);
            callId = data.callId;
            data = await call.setMuted();
            console.log(`${caseName} setMuted success,data:${toString(data)}`);
            let flag = apiToPromisePerfomace({
                func: 'cancelMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, [function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     *             run function setMuted then run function cancelMuted by promise  for 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_cancelMuted_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Promise_0500';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            console.log(`${caseName} scenceInCalling success,data:${toString(data)}`);
            callId = data.callId;
            data = await call.setMuted();
            console.log(`${caseName} setMuted success,data:${toString(data)}`);
            let flag = await apiToPromisePerfomace({
                func: 'cancelMuted',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                }
            }, []);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     * @tc.name    Calling to 10086,run function setAudioDevice by callback and by arg DEVICE_SPEAKER,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0700';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromisePerfomace({
                func: 'setAudioDevice',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                },
                perfTime:PERF_GOAL_TIME
            }, [DEVICE_SPEAKER, function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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


    // Telephony_CallManager_cancelMuted_Async_0500

    // Telephony_CallManager_cancelMuted_Promise_0500

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0700
     * @tc.name    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_SPEAKER,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0700';
        let callId = null;
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            callId = data.callId;
            let flag = await apiToPromisePerfomace({
                func: 'setAudioDevice',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data === null;
                },
                perfTime:PERF_GOAL_TIME
            }, [DEVICE_SPEAKER]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
            hangupCall2(caseName, done, callId);
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
     * @tc.name    Unwanted state,run function muteRinger by callback and 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_muteRinger_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Async_0400';
        apiToPromisePerfomace({
            func: 'muteRinger',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            },
            perfTime:PERF_GOAL_TIME
        }, [function () {}])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Promise_0400
     * @tc.name    Unwanted state,run function muteRinger by callback and 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_muteRinger_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Promise_0400';
        apiToPromisePerfomace({
            func: 'muteRinger',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            },
            perfTime:PERF_GOAL_TIME
        }, [])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_on_0500
     * @tc.name
     * @tc.desc    Performance test
     */
    // waiting to write maybe diffcult

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1700
     * @tc.name    Run function setCallRestriction by callback by arg
     *             callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION for 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1700';
        apiToPromisePerfomace({
            func: 'setCallRestriction',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            },
            perfTime:PERF_GOAL_TIME
        }, [
            1, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:'0000',
                mode:RESTRICTION_MODE_DEACTIVATION
            }, function () {}
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1700
     * @tc.name    Run function setCallRestriction by promise by arg
     *             callid 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION for 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1700';
        apiToPromisePerfomace({
            func: 'setCallRestriction',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === null;
            },
            perfTime:PERF_GOAL_TIME
        }, [
            1, {
                type:RESTRICTION_TYPE_ROAMING_INCOMING,
                password:RIGHT_PASSWORD,
                mode:RESTRICTION_MODE_DEACTIVATION
            }
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1200
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING off and run function getCallRestrictionStatus
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for 20 times,the function always return {status:0},and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1200';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_DEACTIVATION);
            console.log(`${caseName} success,scenceLimitCalling,data:${toString(data)}`);
            let flag = await apiToPromisePerfomace({
                func: 'getCallRestrictionStatus',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === 1;
                }
            }, [1, RESTRICTION_TYPE_ROAMING_INCOMING, function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1200
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING off and run function getCallRestrictionStatus
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING
     *             for 20 times,the function always return {status:0},and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1200';
        try {
            let data = await scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING,
                RESTRICTION_MODE_DEACTIVATION);
            console.log(`${caseName} scenceLimitCalling success,data:${toString(data)}`);
            let flag = await apiToPromisePerfomace({
                func: 'getCallRestrictionStatus',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === 0;
                }
            }, [1, RESTRICTION_TYPE_ROAMING_INCOMING]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        done();
    });



    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_12599 by callback for 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    var caseName = 'Telephony_CallManager_setCallTransfer_Async_1200';
    it(caseName, 0, function (done) {
        apiToPromisePerfomace({
            func: 'setCallTransfer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            perfTime:PERF_GOAL_TIME
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:TRAN_PHONE_NUMBER_12599
            }, function () {}
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch(() => {
                console.log(`${caseName} error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_12599 by promise for 20 times,
     *             the function always return void,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    caseName = 'Telephony_CallManager_setCallTransfer_Promise_1200';
    it(caseName, 0, function (done) {
        apiToPromisePerfomace({
            func: 'setCallTransfer',
            caseName: caseName,
            target: call,
            compareFunc: function (error, data) {
                return data === true;
            },
            perfTime:PERF_GOAL_TIME
        }, [
            DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:TRAN_PHONE_NUMBER_12599
            }
        ])
            .then(flag => {
                console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
                expect(flag).assertTrue();
                done();
            })
            .catch(() => {
                console.log(`${caseName} error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_12599 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by callback 20 times,
     *             the function always return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_12599,
     *             type TRANSFER_TYPE_ALWAYS,and the cost less than 10ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_1400', 0, async function (done) {
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE, TRANSFER_TYPE_ALWAYS,
                TRAN_PHONE_NUMBER_12599);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            let flag = await apiToPromisePerfomace({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === TRAN_PHONE_NUMBER_12599 && data.type === TRANSFER_TYPE_ALWAYS;
                }
            }, [0, TRANSFER_TYPE_ALWAYS, function () {}]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();

        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_12599 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by promise 20 times,
     *             the function always return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_12599,
     *             type TRANSFER_TYPE_ALWAYS,and the cost less than 10ms
     * @tc.desc    Performance test
     */

    it(caseName, 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1400';
        try {
            let data = await scenceTransferCalling(caseName, TRANSFER_DISABLE, TRANSFER_TYPE_ALWAYS,
                TRAN_PHONE_NUMBER_12599);
            console.log(`${caseName} scenceTransferCalling success,data:${toString(data)}`);
            let flag = await apiToPromisePerfomace({
                func: 'getCallTransferInfo',
                caseName: caseName,
                target: call,
                compareFunc: function (error, data) {
                    return data && data.status === TRANSFER_DISABLE &&
            data.number === TRAN_PHONE_NUMBER_12599 && data.type === TRANSFER_TYPE_ALWAYS;
                }
            }, [DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS]);
            console.log(`${caseName} success,case ${flag ? 'success' : 'failed'}`);
            expect(flag).assertTrue();
        } catch (error) {
            console.log(`${caseName} error,case failed`);
            expect().assertFail();
        }
        done();
    });


});
