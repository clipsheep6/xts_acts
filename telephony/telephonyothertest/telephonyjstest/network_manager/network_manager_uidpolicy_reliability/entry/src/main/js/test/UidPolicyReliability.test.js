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

describe('NetworkManagerUidPolicyReliabilityTest', function () {

    /**
     * @tc.number  Telephony_NetworkManager_setUidPolicy_Async_1100
     * @tc.name    Test setUidPolicy() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setUidPolicy_Async_1100', 0, async function (done) {
        let caseName ='Telephony_NetworkManager_setUidPolicy_Async_1100';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            netpolicy.setUidPolicy(UID_1,netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND,(err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect() //todo
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setUidPolicy_Promise_1100
     * @tc.name    Test setUidPolicy() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setUidPolicy_Promise_1100', 0, async function (done) {
        let caseName='Telephony_NetworkManager_setUidPolicy_Promise_1100';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await  netpolicy.setUidPolicy(UID_1,netpolicy.NET_POLICY_ALLOW_METERED_BACKGROUND);
                expect() //todo
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

  
})
