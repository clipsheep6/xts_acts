/* Copyright (C) 2021 Huawei Device Co., Ltd.
   Licensed under the Apache License, Version 2.0 (the "License")
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

import call from '@ohos.telephony_call';
import callInner from '@ohos.tel_call_manager_inner_api';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('CallManagement', function () {
    const TEST_RUN_TIME = 10;
    const BAD_CALLID = -100;
    const ELAPSED_TIME = 5;
    const MAIN_CALLID_1001 = 1001;
    const TEST_PHONY_NUMBER = '17896789654';
    const SLOT_1 = 1;
    const CALLID_1 = 1;
    const ACTIVATE_TRUE = true;
    const ACTIVATE_FALSE = true;
    const NULLZERO = 0;

    /* @tc.number  Telephony_CallManager_answer_Promise_0300
       @tc.name    Test the total performance of running 10 times is less than 50000us
       @tc.desc    Performance test */
    it('Telephony_CallManager_answer_Promise_0300', 0, async function (done) {
        var callId999 = 999;
        const startTime = new Date().getTime();
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.answer(callId999);
            } catch (err) {
                // do nothing when err
            }
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(ELAPSED_TIME);
        console.log('Telephony_CallManager_answer_Promise_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_answer_Async_0300
       @tc.name    Test the total performance of running 10 times is less than 50000us
       @tc.desc    Performance test */
    it('Telephony_CallManager_answer_Async_0300', 0, async function (done) {
        var callId999 = 999;
        const startTime = new Date().getTime();
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.answer(callId999, (err, data) => {
                if (err) {
                    // do nothing when err
                }
            });
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(ELAPSED_TIME);
        console.log('Telephony_CallManager_answer_Async_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_answer_Promise_0400
       @tc.name    Test the total performance of running 10 times is less than 50000us
       @tc.desc    Performance test */
    it('Telephony_CallManager_answer_Promise_0400', 0, async function (done) {
        var callId999 = 999;
        const startTime = new Date().getTime();
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.answer(callId999);
            } catch (err) {
                // do nothing when err
            }
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(ELAPSED_TIME);
        console.log('Telephony_CallManager_answer_Promise_0400 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_reject_Async_0300
       @tc.name    Test the total performance of running 10 times is less than 50000us
       @tc.desc    Performance test */
    it('Telephony_CallManager_reject_Async_0300', 0, async function (done) {
        var callId999 = 999;
        const startTime = new Date().getTime();
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.reject(callId999, (err, data) => {
                if (err) {
                    // do nothing when err
                }
            });
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(ELAPSED_TIME);
        console.log('Telephony_CallManager_reject_Async_0300 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_reject_Promise_0400
       @tc.name    Test the total performance of running 10 times is less than 50000us
       @tc.desc    Performance test */
    it('Telephony_CallManager_reject_Promise_0400', 0, async function (done) {
        var callId999 = 999;
        const startTime = new Date().getTime();
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.reject(callId999);
            } catch (err) {
                // do nothing when err
            }
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(ELAPSED_TIME);
        console.log('Telephony_CallManager_reject_Promise_0400 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_hangup_Async_0400
       @tc.name    Test the total performance of running 10 times is less than 50000us
       @tc.desc    Performance test */
    it('Telephony_CallManager_hangup_Async_0400', 0, async function (done) {
        var callId999 = 999;
        const startTime = new Date().getTime();
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            call.hangup(callId999, (err, data) => {
                if (err) {
                    // do nothing when err
                }
            });
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(ELAPSED_TIME);
        console.log('Telephony_CallManager_hangup_Async_0400 finish');
        done();
    });

    /* @tc.number  Telephony_CallManager_hangup_Promise_0400
       @tc.name    Test the total performance of running 10 times is less than 50000us
       @tc.desc    Performance test */
    it('Telephony_CallManager_hangup_Promise_0400', 0, async function (done) {
        var callId999 = 999;
        const startTime = new Date().getTime();
        for (let index = 0;index < TEST_RUN_TIME;index++) {
            try {
                await call.hangup(callId999);
            } catch (err) {
                // do nothing when err
            }
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(ELAPSED_TIME);
        console.log('Telephony_CallManager_hangup_Promise_0400 finish');
        done();
    });
});
