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


describe('NetworkManagerOnOffTest', function() {
    const TEST_RUN_TIME = 1000;
    let DELAY = 1000;

    function sleep(timeout) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, timeout);
        })
    }

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_1200
     * @tc.name    APP called on (),SetPolicyByUid sets Policy to NET_POLICY_ALLOW_METERED_BACKGROUND and UID to 1.
     *             NetUidPolicyChanged is triggered each time.  The return value is
     *             NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 1
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_on_Async_1200', 0, async function(done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1200';
        let times = 0;

        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            policy.on('netUidPolicyChange', (err, value) => {
                if (err) {
                    console.log(`${caseName} register fail: ${err}`);
                    expect().assertFail();
                    done();
                } else {
                }
            });
            sleep(DELAY);
            times++;
            console.log(`${caseName} on success: ${times}`);
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_off_Async_0300
     * @tc.name    APP calls off()1000 times, each time successfully returning ERR_NONE
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_on_Async_1200', 0, async function(done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1200';
        let times = 0;
        async function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                    expect().assertFail();
                    done();
                } else {}
            });
            times++;
            console.log(`${caseName} off success: ${times}`);
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME);
    })
});