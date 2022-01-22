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

describe('ActsNetworkSearchNrOptionModePerformanceTest', function () {
    const SLOT_0 = 0;
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 500

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0900
     * @tc.name    Test getNrOptionMode() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0900', 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0900 done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            radio.getNrOptionMode(SLOT_0, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0900 fail err: ${err}`);
                }
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Async_0900 data: ${JSON.stringify(data)}`);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0900
     * @tc.name    Test getNrOptionMode() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0900', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getNrOptionMode(SLOT_0);
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0900 data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0900 fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_getNrOptionMode_Promise_0900 done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isNrSupported_0400
     * @tc.name    Test isNrSupported() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkSearch_isNrSupported_0400', 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            let data = radio.isNrSupported();
            console.log(`Telephony_NetworkSearch_isNrSupported_0400 data: ${JSON.stringify(data)}`);
        }
        let endTime = new Date().getTime();
        console.log(`Telephony_NetworkSearch_isNrSupported_0400 done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })
})
