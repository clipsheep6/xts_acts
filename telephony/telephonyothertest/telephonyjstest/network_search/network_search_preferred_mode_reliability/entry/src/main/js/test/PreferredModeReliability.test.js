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
import { describe, it, expect,afterAll } from 'deccjsunit/index';

describe('ActsNetworkSearchPreferredReliabilityTest', function () {
    const SLOT_0 = 0;
    const TEST_RUN_TIME = 1000;
    const garrLongOperatorName = ['CHINA MOBILE', 'CHN-UNICOM', 'CHINA TELECOM'];

    afterAll(async function(){
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO)
    })
    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Async_0200
     * @tc.name    Test getOperatorName() The query function is executed TEST_RUN_TIME times,
     *             and the operator name can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getOperatorName_Async_0200', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getOperatorName(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getOperatorName_Async_0200 fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getOperatorName_Async_0200 data: ${data}`);
                expect(garrLongOperatorName).assertContain(data);
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getOperatorName_Promise_0200
     * @tc.name    Test getOperatorName() The query function is executed TEST_RUN_TIME times,
     *             and the operator name can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getOperatorName_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getOperatorName(SLOT_0);
                console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0200 data: ${data}`);
                expect(garrLongOperatorName).assertContain(data);
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getOperatorName_Promise_0200 FAIL ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Async_0500
     * @tc.name    Try getPreferredNetwork() to execute the query function TEST_RUN_TIME times,
     *             and the preferred network mode is called back each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Async_0500', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getPreferredNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0500 fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0500 data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);

    })

    /**
     * @tc.number  Telephony_NetworkSearch_getPreferredNetwork_Promise_0500
     * @tc.name    Try getPreferredNetwork() to execute the query function TEST_RUN_TIME times,
     *             and the preferred network mode is called back each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getPreferredNetwork_Promise_0500', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getPreferredNetwork(SLOT_0);
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0500 data: ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_AUTO).assertTrue();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_getPreferredNetwork_Promise_0500 FAIL ${err}`);
                expect().assertFail();
                done();
                return;
            }

        }
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Async_0200
     * @tc.name    Test setPreferredNetwork() The setting function is executed TEST_RUN_TIME times,
     *             and the preferred network mode is successfully set each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Async_0200', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_GSM, (err) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0200 set err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                radio.getPreferredNetwork(SLOT_0, (err, data) => {
                    if (err) {
                        console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0200 get err: ${err}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`Telephony_NetworkSearch_setPreferredNetwork_Async_0200 data: ${data}`);
                    expect(data === radio.PREFERRED_NETWORK_MODE_GSM).assertTrue();
                })
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setPreferredNetwork_Promise_0200
     * @tc.name    Test setPreferredNetwork() The setting function is executed TEST_RUN_TIME times,
     *             and the preferred network mode is successfully set each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_setPreferredNetwork_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_GSM)
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0200 set FAIL ${err}`);
                expect().assertFail();
                done();
                return;
            }
            try {
                let data = await radio.getPreferredNetwork(SLOT_0);
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0200 data= ${data}`);
                expect(data === radio.PREFERRED_NETWORK_MODE_GSM).assertTrue();
            } catch (err) {
                console.log(`Telephony_NetworkSearch_setPreferredNetwork_Promise_0200 get FAIL ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        done();
    })

})
