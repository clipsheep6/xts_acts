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
import {describe, afterAll, it, expect} from 'deccjsunit/index';
import {
    BOUNDARY_NUMBER_INT,
    RESTRICTION_TYPE_ALL_INCOMING,
    RESTRICTION_MODE_ACTIVATION,
    RESTRICTION_TYPE_ROAMING_INCOMING,
    RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
    RESTRICTION_TYPE_INTERNATIONAL,
    RESTRICTION_TYPE_ALL_OUTGOING,
    RESTRICTION_MODE_DEACTIVATION,
    DEFAULT_SLOT_ID,
    ERROR_PASSWORD,
    RIGHT_PASSWORD,
    RESTRICTION_TYPE_ANONYMOUS,
    RESTRICTION_TYPE_SPECIFIC_INCOMING,
    RESTRICTION_TYPE_INCOMING_SERVICES,
    RESTRICTION_TYPE_OUTGOING_SERVICES,
    RESTRICTION_TYPE_ALL_CALLS,
    RESTRICTION_DISABLE,
    RESTRICTION_ENABLE
} from './lib/Const.js';
import {toString} from './lib/ApiToPromise.js';
import {scenceLimitCalling} from './lib/ScenceLimitCalling.js';
describe('CallManagementCallRestriction', function () {

    afterAll(function () {
        console.log('Telephony_CallManager all 64 case is over for callmanager CallManagementCallRestriction');
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0100
     * @tc.name    Run function setCallRestriction by callback by arg
     *             slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0100';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0200
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATIO,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0200';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0300
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0001
     *             mode RESTRICTION_MODE_DEACTIVATIO,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0300';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_INCOMING,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0400
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0400';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_OUTGOING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0500
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0500';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_OUTGOING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0600
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0600';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_OUTGOING,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0700
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0700';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0800
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0800';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_0900
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_0900';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1000
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1000', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1000';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1100
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1100';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1200
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1200';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1300
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1300';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ROAMING_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1400
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1400';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ROAMING_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1500
     * @tc.name    Run function setCallRestriction by callback
     *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Async_1500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1500';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ROAMING_INCOMING,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Async_1800
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId that is at boundary type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */

    it('Telephony_CallManager_setCallRestriction_Async_1800', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Async_1800';
        call.setCallRestriction(BOUNDARY_NUMBER_INT, {
            type:RESTRICTION_TYPE_ROAMING_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        }, (error, data) => {
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0100
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0100';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0200
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATIO,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0200';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0300
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0001
     *             mode RESTRICTION_MODE_DEACTIVATIO,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0300';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_INCOMING,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        })
            .then(data => {
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0400
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0400';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_OUTGOING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0500
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0500';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_OUTGOING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0600
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0600';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ALL_OUTGOING,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
            .then(data => {
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0700
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0700';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0800
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0800';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0900
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0900';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
            .then(data => {
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1000
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1000', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1000';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1100
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1100', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1100';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1200
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1200', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1200';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
            .then(data => {
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1300
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1300', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1300';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ROAMING_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1400
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
     *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1400', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1400';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ROAMING_INCOMING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_DEACTIVATION
        })
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
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1500
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0001
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1500', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1500';
        call.setCallRestriction(DEFAULT_SLOT_ID, {
            type:RESTRICTION_TYPE_ROAMING_INCOMING,
            password:ERROR_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
            .then(data => {
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1800
     * @tc.name    Run function setCallRestriction by promise
     *             by arg slotId that is at boundary type RESTRICTION_TYPE_ALL_OUTGOING password 0000
     *             mode RESTRICTION_MODE_ACTIVATION,the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_setCallRestriction_Promise_1800', 0, function (done) {
        let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1800';
        call.setCallRestriction(BOUNDARY_NUMBER_INT, {
            type:RESTRICTION_TYPE_ALL_OUTGOING,
            password:RIGHT_PASSWORD,
            mode:RESTRICTION_MODE_ACTIVATION
        })
            .then(data => {
                console.log(`${caseName} error,case failed,data:${toString(data)}`);
                expect().assertFail();
                done();
            })
            .catch((error) => {
                console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
                expect(!!error).assertTrue();
                done();
            });
    });




    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0100
     * @tc.name    Set RESTRICTION_TYPE_ALL_INCOMING on and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_INCOMING ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0100';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_INCOMING, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_INCOMING, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_ENABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0200
     * @tc.name    Set RESTRICTION_TYPE_ALL_INCOMING off and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_INCOMING ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0200';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_INCOMING, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_INCOMING, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_DISABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0300
     * @tc.name    Set RESTRICTION_TYPE_ALL_OUTGOING on and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_OUTGOING ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0300';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_OUTGOING, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_OUTGOING, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_ENABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0400
     * @tc.name    Set RESTRICTION_TYPE_ALL_OUTGOING off and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_OUTGOING ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0400';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_OUTGOING, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_OUTGOING, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_DISABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0500
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL on and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0500';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_ENABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0600
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL off and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0600';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_DISABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0700
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME on and run function getCallRestrictionStatus
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0700';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
                    (error, data) => {
                        if (error) {
                            console.log(`${caseName} error,case failed,error:${toString(error)}`);
                            expect().assertFail();
                            done();
                            return;
                        }
                        console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_ENABLE).assertTrue();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0800
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME off and run function getCallRestrictionStatus
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0800';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(
                    DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
                    (error, data) => {
                        if (error) {
                            console.log(`${caseName} error,case failed,error:${toString(error)}`);
                            expect().assertFail();
                            done();
                            return;
                        }
                        console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_DISABLE).assertTrue();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_0900
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING on and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_0900';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_ENABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1000
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING off and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1000', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1000';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING, (error, data) => {
                    if (error) {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                        'success' : 'failed'},data:${toString(data)}`);
                    expect(data === RESTRICTION_DISABLE).assertTrue();
                    done();
                });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1300
     * @tc.name    Run function getCallRestrictionStatus by callback by arg slotId
     *             that is at boundary CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING ,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1300', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1300';
        call.getCallRestrictionStatus(BOUNDARY_NUMBER_INT, RESTRICTION_TYPE_ROAMING_INCOMING, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case success,error:${toString(error)}`);
                done();
                return;
            }
            console.log(`${caseName} success,case faild,data:${toString(data)}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1400
     * @tc.name    run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_CALLS ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1400', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1400';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_CALLS, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case faild,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
        data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1500
     * @tc.name    run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_OUTGOING_SERVICES ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1500', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1500';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_OUTGOING_SERVICES, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case faild,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
        data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1600
     * @tc.name    run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INCOMING_SERVICES ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1600', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1600';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INCOMING_SERVICES, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case faild,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
        data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1700
     * @tc.name    run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_SPECIFIC_INCOMING ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1700', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1700';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_SPECIFIC_INCOMING, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case faild,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
        data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Async_1800
     * @tc.name    run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ANONYMOUS ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Async_1800', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Async_1800';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ANONYMOUS, (error, data) => {
            if (error) {
                console.log(`${caseName} error,case faild,error:${toString(error)}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
        data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
            expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
            done();
        });
    });







    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0100
     * @tc.name    Set RESTRICTION_TYPE_ALL_INCOMING on and run function getCallRestrictionStatus by promise
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_INCOMING ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0100', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0100';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_INCOMING, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_INCOMING)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_ENABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0200
     * @tc.name    Set RESTRICTION_TYPE_ALL_INCOMING off and run function getCallRestrictionStatus by promise
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_INCOMING ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0200', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0200';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_INCOMING, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_INCOMING)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_DISABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0300
     * @tc.name    Set RESTRICTION_TYPE_ALL_OUTGOING on and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_OUTGOING ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0300', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0300';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_OUTGOING, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_OUTGOING)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_ENABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0400
     * @tc.name    Set RESTRICTION_TYPE_ALL_OUTGOING off and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ALL_OUTGOING ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0400', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0400';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ALL_OUTGOING, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_OUTGOING)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_ENABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0500
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL on and run function getCallRestrictionStatus by promise
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0500', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0500';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_ENABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0600
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL off and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0600', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0600';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_DISABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0700
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME on and run function getCallRestrictionStatus
     *             by promise by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0700', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0700';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_ENABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0800
     * @tc.name    Set RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME off and run function getCallRestrictionStatus
     *             by callback by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0800', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0800';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_DISABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_0900
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING on and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING ,
     *             the function return {status:1}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_0900', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_0900';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING, RESTRICTION_MODE_ACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_ENABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_ENABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1000
     * @tc.name    Set RESTRICTION_TYPE_ROAMING_INCOMING off and run function getCallRestrictionStatus by callback
     *             by arg slotId 1 CallRestrictionType RESTRICTION_TYPE_ROAMING_INCOMING ,
     *             the function return {status:0}
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1000', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1000';
        scenceLimitCalling(caseName, RESTRICTION_TYPE_ROAMING_INCOMING, RESTRICTION_MODE_DEACTIVATION)
            .then(() => {
                call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ROAMING_INCOMING)
                    .then(data => {
                        console.log(`${caseName} success,case ${data === RESTRICTION_DISABLE ?
                            'success' : 'failed'},data:${toString(data)}`);
                        expect(data === RESTRICTION_DISABLE).assertTrue();
                        done();
                    })
                    .catch(error => {
                        console.log(`${caseName} error,case failed,error:${toString(error)}`);
                        expect().assertFail();
                        done();
                    });
            })
            .catch(() => {
                console.log(`${caseName} scenceLimitCalling error,case failed`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1300
     * @tc.name    Run function getCallRestrictionStatus by promise by arg slotId (that is at boundary)
     *             CallRestrictionType RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME ,
     *             the function return error
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1300', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1300';
        call.getCallRestrictionStatus(BOUNDARY_NUMBER_INT, RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME)
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
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1400
     * @tc.name    Run function getCallRestrictionStatus by promise by arg slotId 1
     *             CallRestrictionType RESTRICTION_TYPE_ALL_CALLS ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1400', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1400';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ALL_CALLS)
            .then(data => {
                console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
          data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1500
     * @tc.name    Run function getCallRestrictionStatus by promise by arg slotId 1
     *             CallRestrictionType RESTRICTION_TYPE_OUTGOING_SERVICES ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1500', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1500';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_OUTGOING_SERVICES)
            .then(data => {
                console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
          data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1600
     * @tc.name    Run function getCallRestrictionStatus by promise by arg slotId 1
     *             CallRestrictionType RESTRICTION_TYPE_INCOMING_SERVICES ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1600', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1600';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_INCOMING_SERVICES)
            .then(data => {
                console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
          data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1700
     * @tc.name    Run function getCallRestrictionStatus by promise by arg slotId 1
     *             CallRestrictionType RESTRICTION_TYPE_SPECIFIC_INCOMING ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1700', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1700';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_SPECIFIC_INCOMING)
            .then(data => {
                console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
          data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });

    /**
     * @tc.number  Telephony_CallManager_getCallRestrictionStatus_Promise_1800
     * @tc.name    Run function getCallRestrictionStatus by promise by arg slotId 1
     *             CallRestrictionType RESTRICTION_TYPE_ANONYMOUS ,
     *             the function return default status
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_getCallRestrictionStatus_Promise_1800', 0, function (done) {
        let caseName = 'Telephony_CallManager_getCallRestrictionStatus_Promise_1800';
        call.getCallRestrictionStatus(DEFAULT_SLOT_ID, RESTRICTION_TYPE_ANONYMOUS)
            .then(data => {
                console.log(`${caseName} success,case ${data === RESTRICTION_MODE_ACTIVATION ||
          data === RESTRICTION_MODE_DEACTIVATION ? 'success' : 'failed'},data:${toString(data)}`);
                expect(data === RESTRICTION_MODE_ACTIVATION || data === RESTRICTION_MODE_DEACTIVATION).assertTrue();
                done();
            })
            .catch(error => {
                console.log(`${caseName} error,case failed,error:${toString(error)}`);
                expect().assertFail();
                done();
            });
    });



});
