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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

describe('SelectModePerformanceTest', function () {
    let gslot = 0;
    let gradioTech = radio.RADIO_TECHNOLOGY_GSM.toString();
    let goperatorName = '';
    let goperatorNumeric = '';
    let gnetworkSMode = {
        slotId: gslot,
        selectMode: radio.NETWORK_SELECTION_AUTOMATIC,
        networkInformation: {
            operatorName: goperatorName,
            operatorNumeric: goperatorNumeric,
            state: radio.NETWORK_AVAILABLE,
            radioTech: gradioTech,
        },
        resumeSelection: false,
    };

    const SLOT_0 = 0;
    const TEST_RUN_TIME = 10;
    const TIME_SPAN = 5;
   

    beforeAll(async function () {
        let data = await radio.getNetworkState(SLOT_0);
        console.log(`Telephony_NetworkSearch_getNetworkState data: ${JSON.stringify(data)}`)
        if (data.plmnNumeric != '' && data.plmnNumeric != undefined) {
            goperatorNumeric = data.plmnNumeric;
            goperatorName = data.longOperatorName;
        } else {
            console.log(`Telephony_NetworkSearch_getNetworkState fail`)
            return;
        }
    })


    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Async_0400
     * @tc.name    The slotId input is 0, the test is executed TEST_RUN_TIME times,
     *             and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0400', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(
                    `Telephony_NetworkSearch_getNetworkSelectionMode_Async_0400 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getNetworkSelectionMode(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNetworkSelectionMode_Async_0400 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0400
     * @tc.name    The slotId input is 0, the test is executed TEST_RUN_TIME times,
     *             and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0400', 0, async function (done) {
        const startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.getNetworkSelectionMode(SLOT_0);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0400 fail err: ${err}`);
            }
        }
        const endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(TIME_SPAN);
        console.log(
            `Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0400 finish useTime: ${endTime - startTime}`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Async_1000
     * @tc.name    Test is executed TEST_RUN_TIME times in a loop, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Async_1000', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(
                    `Telephony_NetworkSearch_setNetworkSelectionMode_Async_1000 exec done useTime: ${totalTime}`);
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.setNetworkSelectionMode(gnetworkSMode, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_setNetworkSelectionMode_Async_1000 fail err: ${err}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Promise_1000
     * @tc.name    Test executed TEST_RUN_TIME times in a loop, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_1000', 0, async function (done) {
        const startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.setNetworkSelectionMode(gnetworkSMode);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setNetworkSelectionMode_Promise_1000 fail err: ${err}`);
            }
        }
        const endTime = new Date().getTime();
        console.log(
            `Telephony_NetworkSearch_setNetworkSelectionMode_Promise_1000 finish useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(TIME_SPAN);
        done();
    })

    
    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Async_0300
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0300', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(
                    'Telephony_NetworkSearch_getNetworkSearchInformation_Async_0300 exec done useTime:' + totalTime);
                console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0300 finish');
                expect(totalTime).assertLess(TIME_SPAN);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getNetworkSearchInformation(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0300 fail err: ' + err);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0300
     * @tc.name    Test is executed TEST_RUN_TIME times, and the output delay is less than TIME_SPAN(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0300', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.getNetworkSearchInformation(SLOT_0);
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0300 fail err: ' + err);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0300 useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(TIME_SPAN);
        done();
    })
})
