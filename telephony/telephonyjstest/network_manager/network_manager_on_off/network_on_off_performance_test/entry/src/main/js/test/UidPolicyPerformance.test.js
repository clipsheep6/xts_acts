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

import policy from '@ohos.net.policy';
import { describe, it, expect } from 'deccjsunit/index';

describe('NetworkManagerUidPolicyPerformanceTest', function() {
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 1000;

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_1300
     * @tc.name    APP calls on()1000 times, and the output delay is less than 1000μs
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_on_Async_1300', 0, async function(done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1300'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let times = 0;
        console.log(`${caseName} running ===========`);
        async function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            await policy.on('netUidPolicyChange')
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            times++;
            console.log(`${caseName} data: ${times}`);
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_off_Async_0400
     * @tc.name    APP calls off()1000 times, and the output delay is less than 1000μs
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_off_Async_0400', 0, async function(done) {
        let caseName = 'Telephony_NetworkManager_off_Async_0400'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let times = 0;
        console.log(`${caseName} running ===========`);
        async function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            await policy.off('netUidPolicyChange');
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            times++;
            console.log(`${caseName} data: ${times}`);
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME);
    })
})