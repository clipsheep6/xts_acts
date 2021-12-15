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

import netpolicy from '@ohos.netmanager.netpolicy';
import { describe, it, expect } from 'deccjsunit/index';

describe('NetworkManagerUidPolicyPerformanceTest', function () {
    const UID_1 = 1;

    /**
     * @tc.number  Telephony_NetworkManager_setUidPolicy_Async_1200
     * @tc.name    Test setUidPolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setUidPolicy_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setUidPolicy_Async_1200'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            netpolicy.setUidPolicy(UID_1,netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND,(err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }else{
                    console.log(`${caseName} data: ${JSON.stringify(data)}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setUidPolicy_Promise_1200
     * @tc.name    Test setUidPolicy() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setUidPolicy_Promise_1200', 0, async function (done) {
        let caseName ='Telephony_NetworkManager_setUidPolicy_Promise_1200';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = awaitnetpolicy.setUidPolicy(UID_1,netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    
})
