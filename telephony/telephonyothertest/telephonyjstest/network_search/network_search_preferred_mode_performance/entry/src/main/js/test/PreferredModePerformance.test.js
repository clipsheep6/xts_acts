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

describe('ActsNetworkSearchPreferredPerformanceTest', function () {
    const SLOT_0 = 0;
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 500;

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Async_0300
     * @tc.name    Test getOperatorName() query function is executed TEST_RUN_TIME times,
     *             the output delay is less than DELAYL_LIMIT(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getOperatorName_Async_0300', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getOperatorName_Async_0300 exec done useTime: ${totalTime}`);
                console.log('Telephony_NetworkSearch_getOperatorName_Async_0300 finish');
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getOperatorName(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getOperatorName_Async_0300 fail err: ${err}`);
                }
                console.log(`Telephony_NetworkSearch_getOperatorName_Async_0300 data: ${data}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Promise_0300
     * @tc.name    Test getOperatorName() query function is executed TEST_RUN_TIME times,
     *             the output delay is less than DELAYL_LIMIT(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getOperatorName_Promise_0300', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getOperatorName(SLOT_0);
                console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0200 data: ${data}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0300 FAIL `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0300 finish  useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0600
     * @tc.name    Test getPreferredNetwork() query function is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0600', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0600 exec done useTime: ${totalTime}`);
                console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_0600 finish');
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0600 fail err: ${err}`);
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0600 data: ${data}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0600
     * @tc.name    Test getPreferredNetwork() query function is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0600', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getPreferredNetwork(SLOT_0)   
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0600 data= ${data}`);
            } catch (err) {
                console.log( `Telephony_NetworkSearch_getPreferredNetwork_Promise_0600 FAIL: ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0600 finish useTime= ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0300
     * @tc.name    Test setPreferredNetwork() setting function is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_0300', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0300 exec done useTime: ${totalTime}`);
                console.log('Telephony_NetworkSearch_setPreferredNetwork_Async_0300 finish');
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_GSM, (err) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0300 fail err: ${err}`);
                }
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);

    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0300
     * @tc.name    Test setPreferredNetwork() setting function is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT(ms)
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0300', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO)
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0300  FAIL `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0300 finish useTime= ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })
})
