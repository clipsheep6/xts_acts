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
    let DELAY = 200;

    function sleep(timeout) {
        for(var t = Date.now();Date.now() - t <= timeout;);
    }

    /**
     * @tc.number  Telephony_NetworkManager_on_Async_1200
     * @tc.name    Application APP calls registration and cancels registration to
     *             monitor network policy changes for 50 times, and each call can be successful
     *             NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 1
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_on_Async_1200', 0, async function(done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1200';
        for (var i = 0; i< TEST_RUN_TIME; i++){
            policy.on('netUidPolicyChange', (err, value) => {
                if (err) {
                    console.log(`${caseName} register fail: ${err}`);
                    expect().assertFail();
                    done();
                } else {
                }
            });
            sleep(DELAY);
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                    expect().assertFail();
                    done();
                } else {
                }
            });
            sleep(DELAY);
            console.log(`${caseName}  times: ${i}`);
        }
    });
});