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

import {describe, afterAll, it, expect} from 'deccjsunit/index';
import {
    TRANSFER_ENABLE,
    TRANSFER_DISABLE,
    TRANSFER_INVALID,
    TRANSFER_INVALID2,
    TRANSFER_TYPE_ALWAYS,
    TRANSFER_TYPE_BUSY,
    TRANSFER_TYPE_NO_ANSWER,
    TRANSFER_TYPE_UNREACHABLE,
    TRANSFER_TYPE_INVALID,
    TRANSFER_TYPE_INVALID4,
    DEFAULT_SLOT_ID,
    SLOT_ID1,
    SLOT_ID_INVALID,
    SLOT_ID_INVALID_2,
    TRAN_PHONE_NUMBER_00000000000,
    TRNS_PHONE_NUMBER_089800000000,
    TRAN_PHONE_NUMBER_12599,
    TRAN_PHONE_NUMBER_LONG,
    TRAN_PHONE_NUMBER_86459751,
    TRAN_PHONE_NUMBER_089899855857
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {scenceTransferCalling} from './lib/ScenceTransfer.js';
describe('CallManagementCallTransfer', function () {

    afterAll(function () {
        console.log('Telephony_CallManager all 62 case is over for callmanager CallManagementCallTransfer');
    });


    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0100';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_BUSY,
            phoneNumber:TRAN_PHONE_NUMBER_12599
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success, data:${toString(data)}`);
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_LONG by callback,the function return error
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0200';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_BUSY,
            phoneNumber:TRAN_PHONE_NUMBER_LONG
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case success,error ${error.message}`);
                expect(true).assertTrue();
                done();
                return;
            }
            console.log(`${caseName} case failed, result =${toString(data)}`);
            expect().assertFail();
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum '' by callback,the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0300';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_BUSY,
            phoneNumber:''
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case success,data:${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 by callback,the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0400';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_BUSY,
            phoneNumber:TRAN_PHONE_NUMBER_12599
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case failed, ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success, result = ${toString(data)}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0500
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0500';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case failed ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success,data:${toString(data)}`);
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0600
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0600';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case failed,error ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success,data:${toString(data)}`);
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0700
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0700';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_UNREACHABLE,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case failed,error ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success,data:${toString(data)}`);
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0800
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0800';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_UNREACHABLE,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case failed,${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success,data:${toString(data)}`);
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_0900
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_0900';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_ALWAYS,
            phoneNumber:TRNS_PHONE_NUMBER_089800000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case failed ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success,data:${toString(data)}`);
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1000
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1000';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_ALWAYS,
            phoneNumber:TRNS_PHONE_NUMBER_089800000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error, case failed ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success,data:${toString(data)}`);
            done();

        });
    });


    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1300
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID_INVALID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1300';
        call.setCallTransfer(SLOT_ID_INVALID, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} case success, error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1400
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID_INVALID_2,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1400';
        call.setCallTransfer(SLOT_ID_INVALID_2, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} case success, error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1500
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID1,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1500';
        call.setCallTransfer(SLOT_ID1, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success, data:${toString(data)}`);
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1600
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_INVALID,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1600';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_INVALID,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} case success, error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1700
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_INVALID,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1700';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_INVALID,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} case success, error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1800
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return void,then Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_NO_ANSWER,transferNum
     *             TRNS_PHONE_NUMBER_089800000000 by callback,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1800';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} data:${toString(data)}`);
            call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_NO_ANSWER,
                phoneNumber:TRNS_PHONE_NUMBER_089800000000
            }, (error, data) => {
                if (error) {
                    console.log(`${caseName} error,case failed,error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName} case success, data:${toString(data)}`);
                done();
            });
        });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Async_1900
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by callback,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Async_1900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Async_1900';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_NO_ANSWER,
            phoneNumber:TRAN_PHONE_NUMBER_00000000000
        }, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} case success, data:${toString(data)}`);
            done();
        });
    });


    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0100';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_BUSY,
                phoneNumber:TRAN_PHONE_NUMBER_12599
            });
            console.log(`${caseName} case success, data:${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,err:${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_LONG by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0200';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_BUSY,
                phoneNumber:TRAN_PHONE_NUMBER_LONG
            });
            console.log(`${caseName} case failed, data:${toString(data)}`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success, err:${toString(err)}`);
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum '' by callback,the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0300';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_BUSY,
                phoneNumber:''
            });
            console.log(`${caseName} case success,data ${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 by callback,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0400';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_BUSY,
                phoneNumber:TRAN_PHONE_NUMBER_12599
            });
            console.log(`${caseName} case success,data ${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0500
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0500';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_NO_ANSWER,
                phoneNumber:TRAN_PHONE_NUMBER_00000000000
            });
            console.log(`${caseName} case success,data ${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed, err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0600
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0600';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_NO_ANSWER,
                phoneNumber:TRAN_PHONE_NUMBER_00000000000
            });
            console.log(`${caseName} case success,data ${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0700
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_00000000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0700';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:TRAN_PHONE_NUMBER_00000000000
            });
            console.log(`${caseName} case success, data ${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0800
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRAN_PHONE_NUMBER_00000000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0800';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_UNREACHABLE,
                phoneNumber:TRAN_PHONE_NUMBER_00000000000
            });
            console.log(`${caseName} case success,data ${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_0900
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_0900';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_ENABLE,
            type:TRANSFER_TYPE_ALWAYS,
            phoneNumber:TRNS_PHONE_NUMBER_089800000000
        })
            .then(data => {
                console.log(`${caseName} data,case success,data:${toString(data)}`);
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${error}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1000
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallTransfer_Promise_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1000';
        call.setCallTransfer(DEFAULT_SLOT_ID, {
            settingType:TRANSFER_DISABLE,
            type:TRANSFER_TYPE_ALWAYS,
            phoneNumber:TRNS_PHONE_NUMBER_089800000000
        })
            .then(data => {
                console.log(`${caseName} case success,data:${toString(data)}`);
                done();
            })
            .catch((error) => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });


    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1300
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID_INVALID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1300';
        try {
            var data = await call.setCallTransfer(SLOT_ID_INVALID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_ALWAYS,
                phoneNumber:TRNS_PHONE_NUMBER_089800000000
            });
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success, err:${toString(err)}`);
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1400
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID_INVALID_2,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1400';
        try {
            var data = await call.setCallTransfer(SLOT_ID_INVALID_2, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_ALWAYS,
                phoneNumber:TRNS_PHONE_NUMBER_089800000000
            });
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success, err:${toString(err)}`);
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1500
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID1,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1500';
        try {
            var data = await call.setCallTransfer(SLOT_ID1, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_ALWAYS,
                phoneNumber:TRNS_PHONE_NUMBER_089800000000
            });
            console.log(`${caseName} case success, data:${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,error:${toString(err)}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1600
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID1,settingType TRANSFER_INVALID2,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1600';
        try {
            var data = await call.setCallTransfer(SLOT_ID1, {
                settingType:TRANSFER_INVALID2,
                type:TRANSFER_TYPE_ALWAYS,
                phoneNumber:TRNS_PHONE_NUMBER_089800000000
            });
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success, err:${toString(err)}`);
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1700
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID1,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_INVALID4,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1700';
        try {
            var data = await call.setCallTransfer(SLOT_ID1, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_INVALID4,
                phoneNumber:TRNS_PHONE_NUMBER_089800000000
            });
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success,err:${toString(err)}`);
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1800
     * @tc.name    Run function setCallTransfer by args slotId SLOT_ID1,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRNS_PHONE_NUMBER_089800000000 by promise,
     *             the function return void,then Run function setCallTransfer by args slotId
     *             DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1800';
        try {
            var data = await call.setCallTransfer(SLOT_ID1, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_ALWAYS,
                phoneNumber:TRNS_PHONE_NUMBER_089800000000
            });
            console.log(`${caseName} data:${toString(data)}`);
            data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_ENABLE,
                type:TRANSFER_TYPE_NO_ANSWER,
                phoneNumber:TRAN_PHONE_NUMBER_00000000000
            });
            console.log(`${caseName} case success, data:${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,error:${toString(err)}`);
            expect().assertFail();
        }
        done();
    });

    /**
     * @tc.number  Telephony_CallManager_setCallTransfer_Promise_1900
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 by promise,
     *             the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallTransfer_Promise_1900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_setCallTransfer_Promise_1900';
        try {
            var data = await call.setCallTransfer(DEFAULT_SLOT_ID, {
                settingType:TRANSFER_DISABLE,
                type:TRANSFER_TYPE_NO_ANSWER,
                phoneNumber:TRAN_PHONE_NUMBER_00000000000
            });
            console.log(`${caseName} case success, data:${toString(data)}`);
        } catch (err) {
            console.log(`${caseName} case failed,error:${toString(err)}`);
            expect().assertFail();
        }
        done();
    });




    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_BUSY by callback,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_BUSY
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0100';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_BUSY, '');
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_BUSY, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_ENABLE && data.number === '' && data.type === TRANSFER_TYPE_BUSY;
                console.log(`${caseName} getCallTransferInfo success,case` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_BUSY  by callback,
     *             the function return status TRANSFER_ENABLE,number TRAN_PHONE_NUMBER_12599,type TRANSFER_TYPE_BUSY
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0200';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE,
                TRANSFER_TYPE_BUSY, TRAN_PHONE_NUMBER_12599);
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_BUSY, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_ENABLE && data.number === TRAN_PHONE_NUMBER_12599 &&
          data.type === TRANSFER_TYPE_BUSY;
                console.log(`${caseName} getCallTransferInfo success,case ` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_BUSY  by callback,
     *             the function return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_12599,type TRANSFER_TYPE_BUSY
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0300';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_BUSY, TRAN_PHONE_NUMBER_12599);
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_BUSY, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_DISABLE && data.number === TRAN_PHONE_NUMBER_12599 &&
          data.type === TRANSFER_TYPE_BUSY;
                console.log(`${caseName} getCallTransferInfo success,case` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_NO_ANSWER  by callback,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_NO_ANSWER
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0400';
        scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_NO_ANSWER, '')
            .then(() => {
                call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_NO_ANSWER, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    const flag = data.status === TRANSFER_ENABLE && data.number === '' &&
                        data.type === TRANSFER_TYPE_NO_ANSWER;
                    console.log(`${caseName} getCallTransferInfo success,case` +
            ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                    expect(flag).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceTransferCalling error,case failed`);
                expect().assertFail();
                done();

            });
    });


    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0500
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_NO_ANSWER  by callback,
     *             the function return status TRANSFER_ENABLE,number TRAN_PHONE_NUMBER_00000000000,
     *             type TRANSFER_TYPE_NO_ANSWER
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0500';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE,
                TRANSFER_TYPE_NO_ANSWER, TRAN_PHONE_NUMBER_00000000000);
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_NO_ANSWER, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_ENABLE && data.number === TRAN_PHONE_NUMBER_00000000000 &&
          data.type === TRANSFER_TYPE_NO_ANSWER;
                console.log(`${caseName} getCallTransferInfo success,case` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0600
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRNS_PHONE_NUMBER_089800000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_NO_ANSWER  by callback,
     *             the function return status TRANSFER_DISABLE,number TRNS_PHONE_NUMBER_089800000000,
     *             type TRANSFER_TYPE_NO_ANSWER
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0600';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_NO_ANSWER, TRNS_PHONE_NUMBER_089800000000);
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_NO_ANSWER, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_DISABLE && data.number === TRNS_PHONE_NUMBER_089800000000 &&
          data.type === TRANSFER_TYPE_NO_ANSWER;
                console.log(`${caseName} getCallTransferInfo success,case` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });


    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0700
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_UNREACHABLE  by callback,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_UNREACHABLE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0700';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_UNREACHABLE, '');
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_UNREACHABLE, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_ENABLE && data.number === '' &&
          data.type === TRANSFER_TYPE_UNREACHABLE;
                console.log(`${caseName} getCallTransferInfo success,case` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0800
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRNS_PHONE_NUMBER_089800000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_UNREACHABLE  by callback,
     *             the function return status TRANSFER_ENABLE,number TRNS_PHONE_NUMBER_089800000000,
     *             type TRANSFER_TYPE_UNREACHABLE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0800';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE,
                TRANSFER_TYPE_UNREACHABLE, TRNS_PHONE_NUMBER_089800000000);
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_UNREACHABLE, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_ENABLE && data.number === TRNS_PHONE_NUMBER_089800000000 &&
          data.type === TRANSFER_TYPE_UNREACHABLE;
                console.log(`${caseName} getCallTransferInfo success,case` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_0900
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRNS_PHONE_NUMBER_089800000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_UNREACHABLE  by callback,
     *             the function return status TRANSFER_DISABLE,number TRNS_PHONE_NUMBER_089800000000,
     *             type TRANSFER_TYPE_UNREACHABLE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_0900';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_DISABLE, TRANSFER_TYPE_UNREACHABLE,
                TRNS_PHONE_NUMBER_089800000000);
            console.log(`${caseName} scenceTransferCalling success`);
            call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_UNREACHABLE, (error, data) => {
                if (error) {
                    console.log(`${caseName} getCallTransferInfo error, case failed. error:${toString(error)}`);
                    expect().assertFail();
                    done();
                    return;
                }
                const flag = data.status === TRANSFER_DISABLE && data.number === TRNS_PHONE_NUMBER_089800000000 &&
          data.type === TRANSFER_TYPE_UNREACHABLE;
                console.log(`${caseName} getCallTransferInfo success,case` +
          ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                expect(flag).assertTrue();
                done();

            });
        } catch (err) {
            console.log(`${caseName} scenceTransferCalling error, case failed. error:${toString(err)}`);
            expect().assertFail();
            done();

        }
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1000
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_ALWAYS  by callback,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1000';
        scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_ALWAYS, '')
            .then(() => {
                call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    const flag = data.status === TRANSFER_ENABLE && data.number === '' &&
            data.type === TRANSFER_TYPE_ALWAYS;
                    console.log(`${caseName} getCallTransferInfo success,case` +
            ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                    expect(flag).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceTransferCalling error,case failed`);
                expect().assertFail();
                done();

            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_00000000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_ALWAYS  by callback,
     *             the function return status TRANSFER_ENABLE,number TRAN_PHONE_NUMBER_00000000000,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Async_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1100';
        scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_ALWAYS, TRAN_PHONE_NUMBER_00000000000)
            .then(() => {
                call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    const flag = data.status === TRANSFER_ENABLE && data.number === TRAN_PHONE_NUMBER_00000000000 &&
            data.type === TRANSFER_TYPE_ALWAYS;
                    console.log(`${caseName} getCallTransferInfo success,case` +
            ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                    expect(flag).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceTransferCalling error,case failed`);
                expect().assertFail();
                done();

            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_00000000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS  by callback,
     *             the function return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_00000000000,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1200';
        scenceTransferCalling(caseName, TRANSFER_DISABLE, TRANSFER_TYPE_ALWAYS, TRAN_PHONE_NUMBER_00000000000)
            .then(() => {
                call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    const flag = data.status === TRANSFER_DISABLE && data.number === TRAN_PHONE_NUMBER_00000000000 &&
            data.type === TRANSFER_TYPE_ALWAYS;
                    console.log(`${caseName} getCallTransferInfo success,case` +
            ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                    expect(flag).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceTransferCalling error,case failed`);
                expect().assertFail();
                done();

            });
    });


    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1500
     * @tc.name    Run function getCallTransferInfo by args slotId SLOT_ID_INVALID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS  by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_1500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1500';
        call.getCallTransferInfo(SLOT_ID_INVALID, TRANSFER_TYPE_ALWAYS, (error, data) => {
            if (error) {
                console.log(`${caseName} getCallTransferInfo error, case success. error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} getCallTransferInfo success,case failed,data:${toString(data)}`);
            expect().assertFail();
            done();

        });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Async_1600
     * @tc.name    Run function getCallTransferInfo by args slotId SLOT_ID_INVALID_2,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS  by callback,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Async_1600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Async_1600';
        call.getCallTransferInfo(SLOT_ID_INVALID_2, TRANSFER_TYPE_ALWAYS, (error, data) => {
            if (error) {
                console.log(`${caseName} getCallTransferInfo error, case success. error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} getCallTransferInfo success,case failed,data:${toString(data)}`);
            expect().assertFail();
            done();

        });
    });





    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_BUSY by promise,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_BUSY
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0100';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_BUSY, '');

            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_BUSY);
            const flag = data.status === TRANSFER_ENABLE && data.number === '' &&
        data.type === TRANSFER_TYPE_BUSY;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_BUSY by promise,
     *             the function return status TRANSFER_ENABLE,number TRAN_PHONE_NUMBER_12599,type TRANSFER_TYPE_BUSY
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0200';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE,
                TRANSFER_TYPE_BUSY, TRAN_PHONE_NUMBER_12599);
            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_BUSY);
            const flag = data.status === TRANSFER_ENABLE && data.number === TRAN_PHONE_NUMBER_12599 &&
        data.type === TRANSFER_TYPE_BUSY;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0300
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_BUSY,transferNum TRAN_PHONE_NUMBER_12599 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_BUSY by promise,
     *             the function return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_12599,type TRANSFER_TYPE_BUSY
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0300';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_BUSY, TRAN_PHONE_NUMBER_12599);

            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_BUSY);
            const flag = data.status === TRANSFER_DISABLE && data.number === TRAN_PHONE_NUMBER_12599 &&
        data.type === TRANSFER_TYPE_BUSY;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed, err: ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0400
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_NO_ANSWER by promise,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_NO_ANSWER
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0400';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_NO_ANSWER, '');

            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_NO_ANSWER);
            const flag = data.status === TRANSFER_ENABLE && data.number === '' &&
        data.type === TRANSFER_TYPE_NO_ANSWER;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed,err ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number   Telephony_CallManager_getCallTransferInfo_Promise_0500
     * @tc.name     Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *              type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 to set,
     *              then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *              settingType TRANSFER_ENABLE,type TRANSFER_TYPE_NO_ANSWER by promise,
     *              the function return status TRANSFER_ENABLE,number TRAN_PHONE_NUMBER_00000000000,
     *              type TRANSFER_TYPE_NO_ANSWER
     * @tc.type     Function
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0500';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE,
                TRANSFER_TYPE_NO_ANSWER, TRAN_PHONE_NUMBER_00000000000);

            console.log(`${caseName}  scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_NO_ANSWER);
            const flag = data.status === TRANSFER_ENABLE && data.number === TRAN_PHONE_NUMBER_00000000000 &&
        data.type === TRANSFER_TYPE_NO_ANSWER;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed, err = ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0600
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_NO_ANSWER,transferNum TRAN_PHONE_NUMBER_00000000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_NO_ANSWER by promise,
     *             the function return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_00000000000,
     *             type TRANSFER_TYPE_NO_ANSWER
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0600';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_NO_ANSWER, TRAN_PHONE_NUMBER_00000000000);

            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_NO_ANSWER);
            const flag = data.status === TRANSFER_DISABLE && data.number === TRAN_PHONE_NUMBER_00000000000 &&
        data.type === TRANSFER_TYPE_NO_ANSWER;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed,err = ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0700
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_UNREACHABLE by promise,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_UNREACHABLE
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0700';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_UNREACHABLE, '');

            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_UNREACHABLE);
            const flag = data.status === TRANSFER_ENABLE && data.number === '' &&
        data.type === TRANSFER_TYPE_UNREACHABLE;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed,err = ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0800
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRNS_PHONE_NUMBER_089800000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_UNREACHABLE by promise,
     *             the function return status TRANSFER_ENABLE,number TRNS_PHONE_NUMBER_089800000000,
     *             type TRANSFER_TYPE_UNREACHABLE
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0800';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_ENABLE,
                TRANSFER_TYPE_UNREACHABLE, TRNS_PHONE_NUMBER_089800000000);

            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_UNREACHABLE);
            const flag = data.status === TRANSFER_ENABLE && data.number === TRNS_PHONE_NUMBER_089800000000 &&
        data.type === TRANSFER_TYPE_UNREACHABLE;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed, err = ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_0900
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_UNREACHABLE,transferNum TRNS_PHONE_NUMBER_089800000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_UNREACHABLE by promise,
     *             the function return status TRANSFER_DISABLE,number TRNS_PHONE_NUMBER_089800000000,
     *             type TRANSFER_TYPE_UNREACHABLE
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Promise_0900', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_0900';
        try {
            var data = await scenceTransferCalling(caseName, TRANSFER_DISABLE,
                TRANSFER_TYPE_UNREACHABLE, TRNS_PHONE_NUMBER_089800000000);

            console.log(`${caseName} scenceTransferCalling : data = ${toString(data)}`);
            data = await call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_UNREACHABLE);
            const flag = data.status === TRANSFER_DISABLE && data.number === TRNS_PHONE_NUMBER_089800000000 &&
        data.type === TRANSFER_TYPE_UNREACHABLE;
            console.log(`${caseName} getCallTransferInfo success,case` +
        ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
            expect(flag).assertTrue();
        } catch (err) {
            console.log(`${caseName} case failed ,err = ${toString(err)}`);
            expect().assertFail();
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1000
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum '' to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_ALWAYS by promise,
     *             the function return status TRANSFER_ENABLE,number '',type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_1000', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1000';
        scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_BUSY, '')
            .then(() => {
                call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS)
                    .then(data => {
                        const flag = data.status === TRANSFER_ENABLE && data.number === '' &&
              data.type === TRANSFER_TYPE_ALWAYS;
                        console.log(`${caseName} getCallTransferInfo success,case` +
              ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                        expect(flag).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceTransferCalling error,case failed`);
                expect().assertFail();
                done();

            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1100
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_ENABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_00000000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_ENABLE,type TRANSFER_TYPE_ALWAYS by promise,
     *             the function return status TRANSFER_ENABLE,number TRAN_PHONE_NUMBER_00000000000,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_1100', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1100';
        scenceTransferCalling(caseName, TRANSFER_ENABLE, TRANSFER_TYPE_ALWAYS, TRAN_PHONE_NUMBER_00000000000)
            .then(() => {
                call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS)
                    .then(data => {
                        const flag = data.status === TRANSFER_ENABLE && data.number === TRAN_PHONE_NUMBER_00000000000 &&
              data.type === TRANSFER_TYPE_ALWAYS;
                        console.log(`${caseName} getCallTransferInfo success,case` +
              ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                        expect(flag).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceTransferCalling error,case failed`);
                expect().assertFail();
                done();

            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1200
     * @tc.name    Run function setCallTransfer by args slotId DEFAULT_SLOT_ID,settingType TRANSFER_DISABLE,
     *             type TRANSFER_TYPE_ALWAYS,transferNum TRAN_PHONE_NUMBER_00000000000 to set,
     *             then run function getCallTransferInfo by args slotId DEFAULT_SLOT_ID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_ALWAYS by promise,
     *             the function return status TRANSFER_DISABLE,number TRAN_PHONE_NUMBER_00000000000,
     *             type TRANSFER_TYPE_ALWAYS
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_getCallTransferInfo_Promise_1200', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1200';
        scenceTransferCalling(caseName, TRANSFER_DISABLE, TRANSFER_TYPE_ALWAYS, TRAN_PHONE_NUMBER_00000000000)
            .then(() => {
                call.getCallTransferInfo(DEFAULT_SLOT_ID, TRANSFER_TYPE_ALWAYS)
                    .then(data => {
                        const flag = data.status === TRANSFER_DISABLE &&
                            data.number === TRAN_PHONE_NUMBER_00000000000 &&
                            data.type === TRANSFER_TYPE_ALWAYS;
                        console.log(`${caseName} getCallTransferInfo success,case` +
              ` ${flag ? 'success' : 'failed'},data:${toString(data)}`);
                        expect(flag).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName}  scenceTransferCalling error,case failed`);
                expect().assertFail();
                done();

            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1500
     * @tc.name    Run function getCallTransferInfo by args slotId SLOT_ID_INVALID,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_UNREACHABLE by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Promise_1500', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1500';
        try {
            var data = await call.getCallTransferInfo(SLOT_ID_INVALID, TRANSFER_TYPE_UNREACHABLE);
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success. error:${toString(err)}`);
        }
        done();

    });

    /**
     * @tc.number  Telephony_CallManager_getCallTransferInfo_Promise_1600
     * @tc.name    Run function getCallTransferInfo by args slotId SLOT_ID_INVALID_2,
     *             settingType TRANSFER_DISABLE,type TRANSFER_TYPE_UNREACHABLE by promise,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallTransferInfo_Promise_1600', 0, async function (done) {
        let caseName = 'Telephony_CallManager_getCallTransferInfo_Promise_1600';
        try {
            var data = await call.getCallTransferInfo(SLOT_ID_INVALID_2, TRANSFER_TYPE_UNREACHABLE);
            console.log(`${caseName} case failed,data:${toString(data)}`);
            expect().assertFail();
        } catch (err) {
            console.log(`${caseName} case success. error:${toString(err)}`);
        }
        done();

    });

});