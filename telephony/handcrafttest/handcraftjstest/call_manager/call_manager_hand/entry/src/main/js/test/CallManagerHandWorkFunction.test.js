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

import {describe, afterAll, it, expect, beforeAll, afterEach} from 'deccjsunit/index';
import {
    IMAGE_PNG_PATH,
    IMAGE_JPG_PATH,
    IMAGE_BMP_PATH,
    IMAGE_WEBP_PATH,
    IMAGE_LOCAL_ERROR_PATH,
    IMAGE_SPACE_PATH,
    AUTO_ACCEPT_NUMBER,
    AUTO_ACCEPT_NUMBER2,
    CALL_STATUS_DIALING,
    CALL_STATE_UNKNOWN,
    CALL_STATE_IDLE,
    DEFAULT_SLOT_ID,
    CALL_MODE_CS,
    PERF_GOAL_TIME
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {scenceInCalling, hangupCall2, hangupCall, callDetailsChangeOn} from './lib/ScenceInCalling.js';
import {apiToPerfomace} from './lib/ApiToPromisePerfomance.js';
import {apiToReliability} from './lib/ApiToPromiseReliability.js';
let callId = null;

describe('CallManageCallCarmer', function () {
    beforeAll(async function (done) {
        callDetailsChangeOn();
        try {
            await call.setCallPreferenceMode(DEFAULT_SLOT_ID, CALL_MODE_CS);
            console.log('Telephony_CallManager setCallPreferenceMode success');
        } catch (error) {
            console.log(`Telephony_CallManager setCallPreferenceMode error,error:${toString(error)}`);
        }
        done();
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

    afterAll(function () {
        console.log('Telephony_CallManager all  case 60 is over for callmanager CallManageCallCarmer');
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_01001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by promise,the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_01001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_01001';
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
            await call.setPausePicture(IMAGE_PNG_PATH);
            console.log(`${caseName} case success`);
        } catch (error) {
            console.log(`${caseName} error,case failed,error:${toString(error)}`);
            expect().assertFail();
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_02001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_JPG_PATH by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_02001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_02001';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_JPG_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_03001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_BMP_PATH by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_03001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_03001';
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
            await call.setPausePicture(IMAGE_BMP_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_04001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_WEBP_PATH by promise,the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_04001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_04001';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_WEBP_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_05001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture
     *             by args path IMAGE_LOCAL_ERROR_PATH by promise,
     *             the callback function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_05001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_05001';
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
            await call.setPausePicture(IMAGE_LOCAL_ERROR_PATH);
            console.log(`${caseName} success,case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_06001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture
     *             by args path IMAGE_SPACE_PATH by promise,
     *             the callback function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setPausePicture_Promise_06001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_06001';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_DIALING
            });
            callId = data.callId;
        } catch (error) {
            console.log(`${caseName} scenceInCalling error ,case failed,error:${toString(error)}`);
            done();
            return;
        }
        try {
            await call.setPausePicture(IMAGE_SPACE_PATH);
            console.log(`${caseName} success, case failed`);
            expect().assertFail();
        } catch (error) {
            console.log(`${caseName} error,case success,error:${toString(error)}`);
        }
        hangupCall2(caseName, done, callId);
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_07001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by callback for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setPausePicture_Async_07001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_07001';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_07001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by promise for TEST_RELY_NUMBER times,
     *             the function always return void
     * @tc.desc    Reliability test
     */
    it('Telephony_CallManager_setPausePicture_Promise_07001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_07001';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_DIALING
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Async_08001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by callback for TEST_PERF_COUNT times,
     *             the function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setPausePicture_Async_08001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Async_08001';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setPausePicture_Promise_08001
     * @tc.name    Dial a call and after answering the call,run function setPausePicture by args
     *             path IMAGE_PNG_PATH by promise for TEST_PERF_COUNT times,
     *             the function return void,and the cost less than PERF_GOAL_TIME ms
     * @tc.desc    Performance test
     */
    it('Telephony_CallManager_setPausePicture_Promise_08001', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setPausePicture_Promise_08001';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER2,
                checkState:CALL_STATUS_DIALING
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
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            done();
        }
    });
});