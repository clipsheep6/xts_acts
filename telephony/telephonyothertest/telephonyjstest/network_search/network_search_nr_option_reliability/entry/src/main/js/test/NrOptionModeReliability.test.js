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

describe('ActsNetworkSearchNrOptionModeReliabilityTest', function () {
    const SLOT_0 = 0;
    const TEST_RUN_TIME = 1000;
    const NROPTION_MODE = [
        radio.NR_OPTION_UNKNOWN,
        radio.NR_OPTION_NSA_ONLY,
        radio.NR_OPTION_SA_ONLY,
        radio.NR_OPTION_NSA_AND_SA
    ]

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Async_0800
     * @tc.name    Test getNrOptionMode() The query function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Async_0800', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getNrOptionMode(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNrOptionMode_Async_0800 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(NROPTION_MODE).assertContain(data);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNrOptionMode_Promise_0800
     * @tc.name    Test getNrOptionMode() The query function is executed TEST_RUN_TIME times,
     *             and the mode can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNrOptionMode_Promise_0800', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getNrOptionMode(SLOT_0);
                expect(NROPTION_MODE).assertContain(data);
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNrOptionMode_Promise_0800 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getNrOptionMode_Promise_0800 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isNrSupported_0300
     * @tc.name    Test isNrSupported() The query function is executed TEST_RUN_TIME times,
     *             and successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_isNrSupported_0300', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            let data = radio.isNrSupported();
            expect(data === true).assertTrue();
        }
        console.log('Telephony_NetworkSearch_isNrSupported_0300 finish');
        done();
    })
})