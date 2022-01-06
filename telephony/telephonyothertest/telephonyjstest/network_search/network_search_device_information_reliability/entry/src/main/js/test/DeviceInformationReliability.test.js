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

describe('DeviceInformationReliability', function () {
    const SLOT_0 = 0;
    const IMEI_LENGTH = 15;
    const MEID_LENGTH = 14;
    const TEST_RUN_TIME = 1000;

    /**
     * @tc.number  Telephony_NetworkSearch_getImei_Async_0800
     * @tc.name    Test getImei() The query function is executed TEST_RUN_TIME times,
     *             and the imei can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getImei_Async_0800', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getImei(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getImei_Async_0800 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.length).assertEqual(IMEI_LENGTH);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getImei_Promise_0800
     * @tc.name    Test getImei() The query function is executed TEST_RUN_TIME times,
     *             and the imei can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getImei_Promise_0800', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getImei(SLOT_0);
                expect(data.length).assertEqual(IMEI_LENGTH);
            } catch (err) {
                console.log('Telephony_NetworkSearch_getImei_Promise_0800 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getImei_Promise_0800 finish');
        done();
    })


    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Async_0800
     * @tc.name    Test getUniqueDeviceId() The query function is executed TEST_RUN_TIME times,
     *             and the uniqueDeviceId can be called back successfully every time
     * @tc.desc    Reliability test
     */
      it('Telephony_NetworkSearch_getUniqueDeviceId_Async_0800', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getUniqueDeviceId(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getUniqueDeviceId_Async_0800 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getUniqueDeviceId_Promise_0800
     * @tc.name    Test getUniqueDeviceId() The query function is executed TEST_RUN_TIME times,
     *             and the uniqueDeviceId can be called back successfully every time
     * @tc.desc    Reliability test
     */
      it('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0800', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getUniqueDeviceId(SLOT_0);
                expect(data.length === IMEI_LENGTH || data.length === MEID_LENGTH).assertTrue();
            } catch (err) {
                console.log('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0800 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getUniqueDeviceId_Promise_0800 finish');
        done();
    })
})
