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
import {describe, afterAll, beforeAll, it, expect} from 'deccjsunit/index';
import {
    AUTO_ACCEPT_NUMBER,
    TATUS_ACTIVE,
    CALL_STATUS_DIALING,
    BOUNDARY_NUMBER_INT,
    CALL_ID_NOT_EXIST,
    DEVICE_SPEAKER,
    DEVICE_WIRED_HEADSET,
    DEVICE_BLUETOOTH_SCO,
    DEVICE_EARPIECE
} from './lib/Const.js';
import {scenceInCalling, scenceInCallingNull, hangupCall2, callDetailsChangeOn} from './lib/ScenceInCalling.js';
import {toString} from './lib/ApiToPromise.js';
describe('CallManagementCallMedia', function () {
    beforeAll(function () {
        callDetailsChangeOn();
    });

    afterAll(function () {
        console.log('Telephony_CallManager all 46 case is over for callmanager CallManagementCallMedia');
    });


    /**
     * @tc.number  Telephony_CallManager_separateConference_Async_0100
     * @tc.name    Run separateConference by callback when callId is any number(such as 1234)
     *             that is not exit in calllist,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_separateConference_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Async_0100';
        call.separateConference(CALL_ID_NOT_EXIST, function (error, data) {
            if (error) {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
                return;
            }
            console.log(`${caseName} success,case failed,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Async_0200
     * @tc.name    Run separateConference by callback when callId is number at boundary ,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_separateConference_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Async_0200';
        call.separateConference(BOUNDARY_NUMBER_INT, function (error, data) {
            if (error) {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
                return;
            }
            console.log(`${caseName}  success,case error,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Async_0300
     * @tc.name    Dial a call and get the callId,the function separateConference by callback return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_separateConference_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.separateConference(callId, function (error, data) {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    expect(!!error).assertTrue();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case failed,data:${toString(data)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });




    /**
     * @tc.number  Telephony_CallManager_separateConference_Promise_0100
     * @tc.name    Run separateConference by promise when callId is any number(such as 1234)
     *             that is not exit in calllist,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_separateConference_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Promise_0100';
        call.separateConference(CALL_ID_NOT_EXIST)
            .then(data => {
                console.log(`${caseName} success,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Promise_0200
     * @tc.name    Run separateConference by promise when callId is number at boundary ,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_separateConference_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Promise_0200';
        call.separateConference(BOUNDARY_NUMBER_INT)
            .then((data) => {
                console.log(`${caseName} success,case error,data:${toString(data)}`);
                expect().assertFail();

                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });

    });

    /**
     * @tc.number  Telephony_CallManager_separateConference_Promise_0300
     * @tc.name    Dial a call and get the callId,the function separateConference by promise return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_separateConference_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_separateConference_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.separateConference(callId)
                .then(data => {
                    console.log(`${caseName} success,case ${data === null ?
                        'success' : 'failded'},data:${toString(data)}`);
                    expect(data === null).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    expect(!!error).assertTrue();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });






    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Async_0100
     * @tc.name    Dial a call,run the function isNewCallAllowed by callback,the function return true
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_isNewCallAllowed_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.isNewCallAllowed((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === true).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });


    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Async_0200
     * @tc.name    Unwanted state ,run the function isNewCallAllowed by callback ,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isNewCallAllowed_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Async_0200';
        call.isNewCallAllowed(function (error, data) {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === true).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Async_0300
     * @tc.name    Dial a call and before answering the call,
     *             run the function isNewCallAllowed by callback,
     *             the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isNewCallAllowed_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.isNewCallAllowed((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === false).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });




    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Promise_0100
     * @tc.name    Dial a call,run the function isNewCallAllowed by promise,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isNewCallAllowed_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE// state maybe other number,need a state (Will definitely arrive)
            });
            let callId = data.callId;
            call.isNewCallAllowed()
                .then(data => {
                    console.log(`${caseName} success,case ${data === true ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === true).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Promise_0200
     * @tc.name    Unwanted state ,run the function isNewCallAllowed by promise ,the function return true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isNewCallAllowed_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Promise_0200';
        call.isNewCallAllowed()
            .then(data => {
                console.log(`${caseName} success,case ${data === true ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === true).assertTrue();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isNewCallAllowed_Promise_0300
     * @tc.name    Dial a call and before answering the call,
     *             run the function isNewCallAllowed by promise,
     *             the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isNewCallAllowed_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isNewCallAllowed_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.isNewCallAllowed()
                .then(data => {
                    console.log(`${caseName} success,case ${data === false ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === false).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });



    /**
     * @tc.number  Telephony_CallManager_isRinging_Async_0100
     * @tc.name    Unwanted state ,run the function isRinging by callback ,the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isRinging_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Async_0100';
        call.isRinging(function (error, data) {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === false).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Async_0200
     * @tc.name    Unwanted state ,Dial a call with number null and after finished the call,
     *             run the function isRinging by callback,the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isRinging_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Async_0200';
        try {
            await scenceInCallingNull({
                caseName:caseName
            });
            call.isRinging((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === false).assertTrue();
                done();
            });
        } catch (error) {
            console.log(`${caseName} scenceInCallingNull error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Async_0300
     * @tc.name    Unwanted state ,Dial a call with number before acceptting ,
     *             run the function isRinging by callback,the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isRinging_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.isRinging((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === false).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });




    /**
     * @tc.number  Telephony_CallManager_isRinging_Promise_0100
     * @tc.name    Unwanted state ,run the function isRinging by promise ,the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isRinging_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Promise_0100';
        call.isRinging()
            .then(data => {
                console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === false).assertTrue();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Promise_0200
     * @tc.name    Unwanted state ,Dial a call with number null and after finished the call,
     *             run the function isRinging by promise,the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isRinging_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Promise_0200';
        try {
            await scenceInCallingNull({
                caseName:caseName
            });
            call.isRinging()
                .then(data => {
                    console.log(`${caseName} success,case ${data === false ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === false).assertTrue();
                    done();
                })
                .catch(error => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    done();
                });
        } catch (error) {
            console.log(`${caseName} scenceInCallingNull error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_isRinging_Promise_0300
     * @tc.name    Unwanted state ,Dial a call with number before acceptting ,
     *             run the function isRinging by promise,the function return false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isRinging_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_isRinging_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.isRinging()
                .then(data => {
                    console.log(`${caseName} success,case ${data === false ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === false).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });





    /**
     * @tc.number  Telephony_CallManager_muteRinger_Async_0100
     * @tc.name    Unwanted state,run function muteRinger by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_muteRinger_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Async_0100';
        call.muteRinger((error, data) => {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === null).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Async_0200
     * @tc.name    Calling to 10086,run function muteRinger by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_muteRinger_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.muteRinger((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === null).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Async_0500
     * @tc.name    Calling to 10086, when CALL_STATUS_DIALING ,run function muteRinger by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_muteRinger_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Async_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.muteRinger((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === null).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });




    /**
     * @tc.number  Telephony_CallManager_muteRinger_Promise_0100
     * @tc.name    Unwanted state,run function muteRinger by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_muteRinger_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Promise_0100';
        call.muteRinger()
            .then(data => {
                console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === null).assertTrue();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Promise_0200
     * @tc.name    Calling to 10086,run function muteRinger by promise,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_muteRinger_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.muteRinger()
                .then(data => {
                    console.log(`${caseName} success,case ${data === null ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === null).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch((error) => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_muteRinger_Promise_0500
     * @tc.name    Calling to 10086, when CALL_STATUS_DIALING ,run function muteRinger by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_muteRinger_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_muteRinger_Promise_0500';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.muteRinger()
                .then(data => {
                    console.log(`${caseName} success,case ${data === null ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === null).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch((error) => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });




    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Async_0100
     * @tc.name    Calling to 10086,run function setAudioDevice by callback and by arg DEVICE_EARPIECE,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_EARPIECE, (error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === null).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Async_0200
     * @tc.name    Calling to 10086,run function setAudioDevice by callback and by arg DEVICE_SPEAKER,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_SPEAKER, (error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === null).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Async_0300
     * @tc.name    Calling to 10086,run function setAudioDevice
     *             by callback and by arg DEVICE_WIRED_HEADSET,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_WIRED_HEADSET, (error, data) => {
                if (error) {
                    console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                    expect(!!error).assertTrue();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Async_0400
     * @tc.name    Calling to 10086,run function setAudioDevice
     *             by callback and by arg DEVICE_BLUETOOTH_SCO,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_BLUETOOTH_SCO, (error, data) => {
                if (error) {
                    console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                    expect(!!error).assertTrue();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Async_0500
     * @tc.name    Unwanted state,run function setAudioDevice by callback and by arg DEVICE_EARPIECE,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Async_0500';
        call.setAudioDevice(DEVICE_EARPIECE, (error, data) => {
            if (error) {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
                return;
            }
            console.log(`${caseName} error,case failed,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });




    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0100
     * @tc.name    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_EARPIECE,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_EARPIECE)
                .then(data => {
                    console.log(`${caseName} success,case ${data === null ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === null).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0200
     * @tc.name    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_SPEAKER,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_SPEAKER)
                .then(data => {
                    console.log(`${caseName} success,case ${data === null ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === null).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0300
     * @tc.name    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_BLUETOOTH_SCO,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0300';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_BLUETOOTH_SCO)
                .then(data => {
                    console.log(`${caseName} error,case failed,data:${toString(data)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                    expect(!!error).assertTrue();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0400
     * @tc.name    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_BLUETOOTH_SCO,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0400';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setAudioDevice(DEVICE_BLUETOOTH_SCO)
                .then(data => {
                    console.log(`${caseName} error,case failed,data:${toString(data)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                    expect(!!error).assertTrue();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0500
     * @tc.name    Unwanted state,run function setAudioDevice by promise and by arg DEVICE_EARPIECE,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setAudioDevice_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0500';
        call.setAudioDevice(DEVICE_EARPIECE)
            .then(data => {
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch(error => {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });




    /**
     * @tc.number  Telephony_CallManager_setMuted_Async_0100
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setMuted_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            console.log(`${caseName} scenceInCalling data:${toString(data)},${typeof call.setMuted}`);
            call.setMuted((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === null).assertTrue();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Async_0200
     * @tc.name    Dial a number after the call is accepted,
     *             run function cancelMuted by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_cancelMuted_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.cancelMuted((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case failed,data:${toString(data)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Async_0300
     * @tc.name    Unwanted state,run function setMuted by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setMuted_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Async_0300';
        call.setMuted((error, data) => {
            if (error) {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
                return;
            }
            console.log(`${caseName} success,case failed,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Async_0300
     * @tc.name    Unwanted state,run function cancelMuted by callback,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_cancelMuted_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Async_0300';
        call.cancelMuted((error, data) => {
            if (error) {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} success,case failed,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });




    /**
     * @tc.number  Telephony_CallManager_setMuted_Promise_0100
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setMuted_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setMuted()
                .then(data => {
                    console.log(`${caseName} success,case ${data === null ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === null).assertTrue();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Promise_0200
     * @tc.name    Dial a number after the call is accepted,
     *             run function cancelMuted by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_cancelMuted_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.cancelMuted()
                .then(data => {
                    console.log(`${caseName} success,case failed,data:${toString(data)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Promise_0300
     * @tc.name    Unwanted state,run function setMuted by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setMuted_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Promise_0300';
        call.setMuted()
            .then(data => {
                console.log(`${caseName} success,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Promise_0300
     * @tc.name    Unwanted state,run function cancelMuted by promise,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_cancelMuted_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Promise_0300';
        call.cancelMuted()
            .then(data => {
                console.log(`${caseName} success,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                done();
            });
    });


    /**
     * @tc.number  Telephony_CallManager_setMuted_Async_0200
     * @tc.name    Dial a number after the call is dialing,
     *             run function setMuted by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setMuted_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Async_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.setMuted((error, data) => {
                if (error) {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                    return;
                }
                console.log(`${caseName} success,case failed,data:${toString(data)}`);
                expect().assertFail();
                hangupCall2(caseName, done, callId);
            });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_setMuted_Promise_0200
     * @tc.name    Dial a number after the call is dialing,
     *             run function setMuted by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setMuted_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setMuted_Promise_0200';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:CALL_STATUS_DIALING
            });
            let callId = data.callId;
            call.setMuted()
                .then(data => {
                    console.log(`${caseName} success,case failed,data:${toString(data)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                })
                .catch(error => {
                    console.log(`${caseName} error,case success,error:${toString(error)}`);
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Async_0100
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted then run function cancelMuted by callback,
     *             the function cancelMuted return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_cancelMuted_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Async_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setMuted()
                .then(data => {
                    call.cancelMuted((error, data) => {
                        if (error) {
                            console.log(`${caseName} error,case faild,error:${toString(error)}`);
                            expect().assertFail();
                            hangupCall2(caseName, done, callId);
                            return;
                        }
                        console.log(`${caseName} success,case success,data:${toString(data)}`);
                        hangupCall2(caseName, done, callId);
                    });
                })
                .catch(error => {
                    console.log(`${caseName} setMuted error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });

    /**
     * @tc.number  Telephony_CallManager_cancelMuted_Promise_0100
     * @tc.name    Dial a number after the call is accepted,
     *             run function setMuted then run function cancelMuted by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_cancelMuted_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_cancelMuted_Promise_0100';
        try {
            let data = await scenceInCalling({
                caseName:caseName,
                phoneNumber:AUTO_ACCEPT_NUMBER,
                checkState:TATUS_ACTIVE
            });
            let callId = data.callId;
            call.setMuted()
                .then(data => {
                    call.cancelMuted()
                        .then(data => {
                            console.log(`${caseName} success,case success,data:${toString(data)}`);
                            hangupCall2(caseName, done, callId);
                        })
                        .catch(error => {
                            console.log(`${caseName} error,case faild,error:${toString(error)}`);
                            expect().assertFail();
                            hangupCall2(caseName, done, callId);
                        });
                })
                .catch(error => {
                    console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    hangupCall2(caseName, done, callId);
                });
        } catch (error) {
            console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
            expect().assertFail();
            done();
        }
    });



});
