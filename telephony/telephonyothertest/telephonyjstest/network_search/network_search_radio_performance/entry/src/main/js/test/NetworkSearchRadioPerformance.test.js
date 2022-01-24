/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import radio from '@ohos.telephony.radio';
import { describe, afterAll, it, expect } from 'deccjsunit/index';

describe('NetworkSearchRadioPerformanceTest', function () {
    const TEST_RUN_TIME = 10;
    const MSEC_5 = 5;
   
    async function recoverRadioState() {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverRadioState fail err: ${err}`);
        }
    }

    afterAll(async function () {
        //Initialize radio status after all test cases
        recoverRadioState();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Async_0400
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than MSEC_5 (ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Async_0400', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_turnOnRadio_Async_0400 exec done useTime: ${totalTime}`)
                expect(totalTime).assertLess(MSEC_5);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.turnOnRadio((err) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err){
                    console.log(`Telephony_NetworkSearch_turnOnRadio_Async_0400 fail err: ${err.message}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Promise_0400
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than MSEC_5 (ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Promise_0400', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.turnOnRadio();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_turnOnRadio_Promise_0400 fail err: ${err.message}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_turnOnRadio_Promise_0400 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(MSEC_5);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0400
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than MSEC_5 (ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0400', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_turnOffRadio_Async_0400 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(MSEC_5);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.turnOffRadio( (err) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    //Error code judgment is required here
                    console.log(`Telephony_NetworkSearch_turnOffRadio_Async_0400 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0400
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than MSEC_5 (ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0400', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.turnOffRadio();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_turnOffRadio_Promise_0400 fail err: ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_turnOffRadio_Promise_0400 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(MSEC_5);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Async_0400
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than MSEC_5 (ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_isRadioOn_Async_0400', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_isRadioOn_Async_0400 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(MSEC_5);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.isRadioOn((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_isRadioOn_Async_0400 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Promise_0400
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than MSEC_5 (ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_isRadioOn_Promise_0400', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.isRadioOn();
            } catch (err) {
                console.log('Telephony_NetworkSearch_isRadioOn_Promise_0400 fail err: ' + err.message);
                
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_isRadioOn_Promise_0400 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(MSEC_5);
        done();
    })
})
