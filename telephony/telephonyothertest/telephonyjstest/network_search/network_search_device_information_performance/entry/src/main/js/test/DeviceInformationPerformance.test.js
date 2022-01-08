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

describe('DeviceInformationPerformance', function () {
    const SLOT_0 = 0;
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 500
    const MOKE_CDMA = 200;
    const WAIT_TIME = 5000;
    
    function sleep(timeout) {
        return new Promise((reslove, reject) => {
            setTimeout(() => {
                reslove();
            }, timeout);
        })
    }

    afterEach(async function () {
        await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
    })

    beforeAll(async function () {
        await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Async_0900
     * @tc.name    Test getIMEI() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getIMEI_Async_0900', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0900 done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getIMEI(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getIMEI_Async_0900 fail err: ${err}`);
                }
                console.log(`Telephony_NetworkSearch_getIMEI_Async_0900 data: ${data}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getIMEI_Promise_0900
     * @tc.name    Test getIMEI() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getIMEI_Promise_0900', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getIMEI(SLOT_0);
                console.log(`Telephony_NetworkSearch_getIMEI_Promise_0900 data: ${data}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getIMEI_Promise_0900 fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getIMEI_Promise_0900 done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getMEID_Async_0900
     * @tc.name    Test getMEID() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getMEID_Async_0900', 0, async function (done) {
        await radio.setPreferredNetwork(SLOT_0, MOKE_CDMA);
        await sleep(WAIT_TIME);
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getMEID_Async_0900 done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getMEID(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getMEID_Async_0900 fail err: ${err}`);
                }
                console.log(`Telephony_NetworkSearch_getMEID_Async_0900 data: ${data}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getMEID_Promise_0900
     * @tc.name    Test getMEID() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getMEID_Promise_0900', 0, async function (done) {
        await radio.setPreferredNetwork(SLOT_0, MOKE_CDMA);
        await sleep(WAIT_TIME);
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getMEID(SLOT_0);
                console.log(`Telephony_NetworkSearch_getMEID_Promise_0900 data: ${data}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getMEID_Promise_0900 fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getMEID_Promise_0900 done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0900
     * @tc.name    Test getUniqueDeviceId() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0900', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0900 done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getUniqueDeviceId(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0900 fail err: ${err}`);
                }
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Async_0900 data: ${data}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0900
     * @tc.name    Test getUniqueDeviceId() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0900', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getUniqueDeviceId(SLOT_0);
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0900 data: ${data}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0900 fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getUniqueDeviceId_Promise_0900 done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })
})
