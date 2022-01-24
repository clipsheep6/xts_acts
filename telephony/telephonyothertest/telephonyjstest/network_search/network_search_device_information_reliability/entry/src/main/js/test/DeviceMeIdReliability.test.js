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
import { describe, it, expect, beforeAll, afterAll, afterEach } from 'deccjsunit/index';

describe('DeviceMeIdReliability', function () {
    const SLOT_0 = 0;
    const MEID_LENGTH = 14;
    const TIME_RADIO_TURNON = 5000;
    const TEST_RUN_TIME = 1000;
    
    function sleep(timeout) {
        return new Promise((reslove, reject) => {
            setTimeout(() => {
                reslove();
            }, timeout);
        })
    }

    async function turnOnRadio() {
        let isOn = await radio.isRadioOn();
        if (!isOn) {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_DeviceMeId turnOnRadio success');
            await sleep(TIME_RADIO_TURNON);
        }
    }

    beforeAll(async function () {
        await radio.setPreferredNetwork(SLOT_0, 200);
        await turnOnRadio();
    })

    afterAll(async function () {
        await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getMeId_Async_0800
     * @tc.name    Test getMeId() The query function is executed TEST_RUN_TIME times,
     *             and the meid can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getMeId_Async_0800', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getMeId(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getMeId_Async_0800 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.length).assertEqual(MEID_LENGTH);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getMeId_Promise_0800
     * @tc.name    Test getMeId() The query function is executed TEST_RUN_TIME times,
     *             and the meid can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getMeId_Promise_0800', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getMeId(SLOT_0);
                expect(data.length).assertEqual(MEID_LENGTH);
            } catch (err) {
                console.log('Telephony_NetworkSearch_getMeId_Promise_0800 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getMeId_Promise_0800 finish');
        done();
    })
})
