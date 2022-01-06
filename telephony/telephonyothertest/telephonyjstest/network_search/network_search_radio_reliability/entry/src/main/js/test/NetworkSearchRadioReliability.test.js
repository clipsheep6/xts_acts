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

describe('NetworkSearchRadioReliabilityTest', function () {
    const TEST_RUN_TIME = 10;

    async function recoverRadioState() {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
    }

    afterAll(async function () {
        //Initialize radio status after all test cases
        recoverRadioState();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Async_0300
     * @tc.name    Test turnOnRadio() is executed TEST_RUN_TIME times,
     *             and it can be executed finishfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Async_0300', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.turnOnRadio((err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOnRadio_Async_0300 fail err: ' + err.message);
                    expect().assertFail();
                    done();
                    return;
                }
                recursive(n - 1);
                
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Promise_0300
     * @tc.name    Test turnOnRadio() is executed 10 times, and it can be executed finishfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Promise_0300', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.turnOnRadio();
            } catch (err) {
                console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0300 fail err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0300 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0300
     * @tc.name    Test turnOffRadio() is executed TEST_RUN_TIME times,
     *             and it can be executed finishfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0300', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.turnOffRadio((err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOffRadio_Async_0300 fail err: ' + err.message);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0300 turnOff ok');
                recursive(n - 1);

            })
        }
        recursive(TEST_RUN_TIME);

    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0300
     * @tc.name    Test turnOffRadio() is executed TEST_RUN_TIME times,
     *             and it can be executed finishfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0300', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.turnOffRadio();
            } catch (err) {
                console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0300 fail err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0300 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Async_0300
     * @tc.name    The slotId input is 0, test isRadioOn() is executed TEST_RUN_TIME times,
     *             and the data can be returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_isRadioOn_Async_0300', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.isRadioOn((err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_isRadioOn_Async_0300 fail err: ' + err.message);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Promise_0300
     * @tc.name    The slotId input is 0, test isRadioOn() is executed TEST_RUN_TIME times,
     *             and the data can be returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_isRadioOn_Promise_0300', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverRadioState fail err: ' + err.message);
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data =await radio.isRadioOn();
                expect(data).assertTrue();
            } catch (err) {
                console.log('Telephony_NetworkSearch_isRadioOn_Promise_0300 fail err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_isRadioOn_Promise_0300 finish');
        done();
    })

})
