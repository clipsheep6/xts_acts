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
import {apiToReliability} from './lib/ApiToPromiseReliability.js';
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
    RESTRICTION_TYPE_ROAMING_INCOMING,
    RESTRICTION_MODE_ACTIVATION,
    PHONE_NUMBER_LENGTH_11,
    CALL_ID_NOT_EXIST,
    RIGHT_PASSWORD,
    DEFAULT_SLOT_ID,
    TRANSFER_ENABLE,
    TRANSFER_DISABLE,
    TRANSFER_TYPE_ALWAYS,
    TRANSFER_TYPE_UNREACHABLE,
    PHONE_NUMBER_VOICE_MAIL,
    PHONE_NUMBER_LENGTH_8,
    IMAGE_PNG_PATH,
    CALL_STATE_UNKNOWN,
    TEST_RELY_NUMBER,
    CALL_STATE_IDLE,
    CARMER_ID_SPACE
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
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
     * @tc.number  Telephony_CallManager_IMS_dial_Async_1100
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by callback
     *             before being accepted,run function hangup by callback to hunup the call for TEST_RELY_NUMBER times
     *             the function dial always return true
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_dial_Async_1100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_dial_Async_1100';
        let count = 0;
        call.on('callDetailsChange', (err, callStateInfo) => {
            console.log(`${caseName} callDetailsChange error ${toString(err)}` +
          `,callStateInfo ${toString(callStateInfo)}`);
            if (err) {
                console.log(`${caseName} callDetailsChange error,case failed,error:${toString(err)}`);
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId, (error, data) => {
                    if (error) {
                        console.log(`${caseName} hangup error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    }
                    console.log(`${caseName} hangup success,data:${toString(data)}`);
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_RELY_NUMBER) {
                    console.log(`${caseName} case success`);
                    call.off('callDetailsChange');
                    done();
                }
                if (count < TEST_RELY_NUMBER) {
                    call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
                        count++;
                        if (error) {
                            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                            expect().assertFail();
                            call.off('callDetailsChange');
                            done();
                        }
                        console.log(`${caseName} dial success,data:${toString(data)}`);
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
            count++;
            if (error) {
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                expect().assertFail();
                call.off('callDetailsChange');
                done();
            }
            console.log(`${caseName} dial success,data:${toString(data)}`);
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_dial_Promise_1100
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by promise,
     *             before being accepted,run function hangup by promise to hunup the call
     *             for TEST_RELY_NUMBER times,the function dial always return true
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_dial_Promise_1100', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_dial_Promise_1100';
        let count = 0;
        call.on('callDetailsChange', (err, callStateInfo) => {
            console.log(`${caseName} callDetailsChange error ${toString(err)}` +
          `,callStateInfo ${toString(callStateInfo)}`);
            if (err) {
                console.log(`${caseName} callDetailsChange error,case failed,error:${toString(err)}`);
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId).then(data => {
                    console.log(`${caseName} hangup success,data:${toString(data)}`);
                }).catch(error => {
                    console.log(`${caseName} hangup error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    call.off('callDetailsChange');
                    done();
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_RELY_NUMBER) {
                    console.log(`${caseName} case success`);
                    call.off('callDetailsChange');
                    done();
                }
                if (count < TEST_RELY_NUMBER) {
                    call.dial(PHONE_NUMBER_LENGTH_11).then(data => {
                        count++;
                        console.log(`${caseName} dial success,data:${toString(data)}`);
                    }).catch(error => {
                        console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11).then(data => {
            count++;
            console.log(`${caseName} dial success,data:${toString(data)}`);
        }).catch(error => {
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            expect().assertFail();
            call.off('callDetailsChange');
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_answer_Async_0200
     * @tc.name    Run TEST_RELY_NUMBER times answer by callback
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_answer_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_answer_Async_0200';
        apiToReliability({
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
            }
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_answer_Promise_0200
     * @tc.name    Run TEST_RELY_NUMBER times answer by promise
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_answer_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_answer_Promise_0200';
        apiToReliability({
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
            }
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_reject_Async_0200
     * @tc.name    Run TEST_RELY_NUMBER times reject by callback
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_reject_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_reject_Async_0200';
        apiToReliability({
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
            }
        }, [CALL_ID_NOT_EXIST, function () {}]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_reject_Promise_0200
     * @tc.name    Run TEST_RELY_NUMBER times reject by promise
     *             when callId is CALL_ID_NOT_EXIST,
     *             the function always return error
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_reject_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_reject_Promise_0200';
        apiToReliability({
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
            }
        }, [CALL_ID_NOT_EXIST]);
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_hangup_Async_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by callback
     *             before being accepted,run function hangup by callback to hunup the call for TEST_RELY_NUMBER times
     *             the function hangup always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_hangup_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_hangup_Async_0200';
        let count = 0;
        call.on('callDetailsChange', (err, callStateInfo) => {
            console.log(`${caseName} callDetailsChange error ${toString(err)}` +
          `,callStateInfo ${toString(callStateInfo)}`);
            if (err) {
                console.log(`${caseName} callDetailsChange error,case failed,error:${toString(err)}`);
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId, (error, data) => {
                    count++;
                    if (error) {
                        console.log(`${caseName} hangup error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    }
                    console.log(`${caseName} hangup success,data:${toString(data)}`);
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_RELY_NUMBER) {
                    console.log(`${caseName} case success`);
                    call.off('callDetailsChange');
                    done();
                }
                if (count < TEST_RELY_NUMBER) {
                    call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
                        if (error) {
                            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                            expect().assertFail();
                            call.off('callDetailsChange');
                            done();
                        }
                        console.log(`${caseName} dial success,data:${toString(data)}`);
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11, (error, data) => {
            if (error) {
                console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                expect().assertFail();
                call.off('callDetailsChange');
                done();
            }
            console.log(`${caseName} dial success,data:${toString(data)}`);
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_hangup_Promise_0200
     * @tc.name    Dial a call by function dial by args phoneNumber PHONE_NUMBER_LENGTH_11 by promise
     *             before being accepted,run function hangup by promise to hunup the call for
     *             TEST_RELY_NUMBER times,the function hangup always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_hangup_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_IMS_hangup_Promise_0200';
        let count = 0;
        call.on('callDetailsChange', (err, callStateInfo) => {
            console.log(`Telephony_CallManager callDetailsChange error ${toString(err)}` +
          `,callStateInfo ${toString(callStateInfo)}`);
            if (err) {
                expect().assertFail();
                done();
                return;
            }
            callId = callStateInfo.callId;
            if (callStateInfo.callState === CALL_STATUS_DIALING) {
                call.hangup(callId).then(data => {
                    count++;
                    console.log(`${caseName} hangup success,data:${toString(data)}`);
                }).catch(error => {
                    console.log(`${caseName} hangup error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    call.off('callDetailsChange');
                    done();
                });
            }
            if (callStateInfo.callState === CALL_STATUS_DISCONNECTED) {
                if (count === TEST_RELY_NUMBER) {
                    call.off('callDetailsChange');
                    done();
                }
                if (count < TEST_RELY_NUMBER) {
                    call.dial(PHONE_NUMBER_LENGTH_11).then(data => {
                        console.log(`${caseName} dial success,data:${toString(data)}`);
                    }).catch(error => {
                        console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        call.off('callDetailsChange');
                        done();
                    });
                }
            }
        });
        call.dial(PHONE_NUMBER_LENGTH_11).then(data => {
            console.log(`${caseName} dial success,data:${toString(data)}`);
        }).catch(error => {
            console.log(`${caseName} dial error,case failed,error:${toString(error)}`);
            expect().assertFail();
            call.off('callDetailsChange');
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startDTMF_Async_1400
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function startDTMF by callback and by arg callId currentCallId
     *             character C for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_startDTMF_Async_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_startDTMF_Async_1400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [callId, 'C', function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_startDTMF_Promise_1400
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function startDTMF by promise and by arg callId currentCallId
     *             character B for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_startDTMF_Promise_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_startDTMF_Promise_1400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [callId, 'B']);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopDTMF_Async_0400
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function stopDTMF by callback and by arg
     *             callId currentCallId for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_stopDTMF_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopDTMF_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [callId, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_IMS_stopDTMF_Promise_0400
     * @tc.name    Calling to PHONE_NUMBER_LENGTH_11,run function stopDTMF by promise and by arg
     *             callId currentCallId for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_IMS_stopDTMF_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_IMS_stopDTMF_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [callId]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Async_0300
     * @tc.name    Dial a call and after answering the call,run function getCameraIDs to get cameraId,
     *             run function controlCamera by args right cameraId by callback,
     *             the callback function for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_controlCamera_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Async_0300';
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
            apiToReliability({
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
                }
            }, [cameraId, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_controlCamera_Promise_0300
     * @tc.name    Dial a call and after answering the call,run function getCameraIDs to get cameraId,
     *             run function controlCamera by args right cameraId by promise,
     *             the callback function for TEST_RELY_NUMBER times,the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_controlCamera_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_controlCamera_Promise_0300';

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
            apiToReliability({
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
                }
            }, [cameraId]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Async_0500
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by callback for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setPreviewWindow_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToReliability({
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
                }
            }, [info, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPreviewWindow_Promise_0500
     * @tc.name    Dial a call and after answering the call,run function setPreviewWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setPreviewWindow_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPreviewWindow_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToReliability({
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
                }
            }, [info]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Async_0500
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by callback for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setDisplayWindow_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToReliability({
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
                }
            }, [info, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDisplayWindow_Promise_0500
     * @tc.name    Dial a call and after answering the call,run function setDisplayWindow by args
     *             x 700,y 10,z 1,width 300,height 600 by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setDisplayWindow_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDisplayWindow_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            let info = {x: 700, y: 10, z: 1, width: 300, height: 600};
            apiToReliability({
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
                }
            }, [info]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Async_0600
     * @tc.name    Dial a call and after answering the call,run function getSupportedZoomRange to to get the zoomRatio,
     *             run function setCameraZoom by args getted zoomRatio by callback for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCameraZoom_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Async_0600';
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
            apiToReliability({
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
                }
            }, [zoomRatio, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling or getSupportedZoomRange error,case failed,error:${
                toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setCameraZoom_Promise_0600
     * @tc.name    Dial a call and after answering the call,run function getSupportedZoomRange to to get the zoomRatio,
     *             run function setCameraZoom by args getted zoomRatio by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setCameraZoom_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCameraZoom_Promise_0600';
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
            apiToReliability({
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
                }
            }, [zoomRatio]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_0700
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by callback for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setPausePicture_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [IMAGE_PNG_PATH, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_0700
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setPausePicture_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_0700';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [IMAGE_PNG_PATH]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Async_0800
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection by args
     *             rotation 0 by callback for TEST_RELY_NUMBER times,
     *             the callback function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setDeviceDirection_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Async_0800';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [0, function () {}]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setDeviceDirection_Promise_0800
     * @tc.name    Dial a call and after answering the call,run function setDeviceDirection by args
     *             rotation 0 by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setDeviceDirection_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setDeviceDirection_Promise_0800';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_ACTIVE
            });
            callId = data.callId;
            apiToReliability({
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
                }
            }, [0]);
        } catch (error) {
            expect().assertFail();
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
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

});
