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
import { describe, it, expect } from 'deccjsunit/index';

describe('NetworkSearchInformationPerformanceTest', function () {
    const SLOT_0 = 0;
    const TEST_RUN_TIME = 10;
    const TIME_SPAN = 5;
 
    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0400
     * @tc.name    Test getNetworkState() query function is executed TEST_RUN_TIME times,
     *             and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0400', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getNetworkState_Async_0400 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getNetworkState((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNetworkState_Async_0400 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0600
     * @tc.name    The slotId parameter input is 0, the test getNetworkState() query function is
     *             executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0600', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getNetworkState_Async_0600 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getNetworkState(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNetworkState_Async_0600 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0300
     * @tc.name    The slotId parameter input is 0, the test getRadioTech() query function is
     *             executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0300', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0300 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getRadioTech(SLOT_0, (err, { psRadioTech, csRadioTech }) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getRadioTech_Async_0300 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Async_0300
     * @tc.name    The slotId parameter input is 0, the test getSignalInformation() query function is
     *             executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Async_0300', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0300 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getSignalInformation(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0300 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0400
     * @tc.name    Test getNetworkState() query function is executed TEST_RUN_TIME times,
     *             and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0400', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getNetworkState();
                console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0400 data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0400 err: ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0400 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(TIME_SPAN);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0600
     * @tc.name    The slotId parameter input is 0, the test getNetworkState() query function is
     *             executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0600', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getNetworkState(SLOT_0);
                console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0600 data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0600 fail err: ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0600 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(TIME_SPAN);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0300
     * @tc.name    The slotId parameter input is 0, the test getRadioTech() query function is
     *             executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0300', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getRadioTech(SLOT_0);
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0300 data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0300 fail err: ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0300 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(TIME_SPAN);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Promise_0300
     * @tc.name    The slotId parameter input is 0, the test getNetworkState() query function is
     *             executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Promise_0300', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getSignalInformation(SLOT_0);
                console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0300 data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0300 fail err: ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0300 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(TIME_SPAN);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0300
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0300', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(
                    `Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0300 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getISOCountryCodeForNetwork(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0300 fail err: ${err}`);
                }
                console.log(
                    `Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0300 data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0300
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0300', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getISOCountryCodeForNetwork(SLOT_0);
                console.log(
                    `Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0300 data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0300 fail err: ${err}` );
            }
        }
        let endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(TIME_SPAN);
        console.log(
            `Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0300 finish useTime: ${endTime - startTime}`);
        done();
    })
})
