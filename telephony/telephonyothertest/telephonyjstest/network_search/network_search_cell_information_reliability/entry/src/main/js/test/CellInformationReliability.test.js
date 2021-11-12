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

describe('NetworkSearchCellInformationReliabilityTest', function () {
    const SLOT_0 = 0;
    const IMEI_LENGTH = 15;
    const NETWORK_TYPES = [
        radio.NETWORK_TYPE_UNKNOWN,
        radio.NETWORK_TYPE_GSM,
        radio.NETWORK_TYPE_CDMA,
        radio.NETWORK_TYPE_WCDMA,
        radio.NETWORK_TYPE_TDSCDMA,
        radio.NETWORK_TYPE_LTE,
        radio.NETWORK_TYPE_NR,
    ];
    const NETWORK_SIGNAL = [0, 1, 2, 3, 4, 5];
    const TEST_RUN_TIME = 10;
    
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
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Async_0800
     * @tc.name    Test getCellInformation() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getCellInformation_Async_0800', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getCellInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getCellInformation_Async_0800 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(NETWORK_TYPES).assertContain(data[0].networkType);
                expect(data[0].isCamped).assertTrue();
                expect(data[0].timeStamp).assertLarger(0);
                expect(NETWORK_TYPES).assertContain(data[0].signalInformation.signalType);
                expect(NETWORK_SIGNAL).assertContain(data[0].signalInformation.signalLevel);
                expect(data[0].data != undefined && data[0].data != '' && data[0].data != null).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Promise_0800
     * @tc.name    Test getCellInformation() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getCellInformation_Promise_0800', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getCellInformation(SLOT_0);
                expect(NETWORK_TYPES).assertContain(data[0].networkType);
                expect(data[0].isCamped).assertTrue();
                expect(data[0].timeStamp).assertLarger(0);
                expect(NETWORK_TYPES).assertContain(data[0].signalInformation.signalType);
                expect(NETWORK_SIGNAL).assertContain(data[0].signalInformation.signalLevel);
                expect(data[0].data != undefined && data[0].data != '' && data[0].data != null).assertTrue();
            } catch (err) {
                console.log('Telephony_NetworkSearch_getCellInformation_Promise_0800 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_sendUpdateCellLocationRequest_Async_0300
     * @tc.name    Test sendUpdateCellLocationRequest() The query function is executed TEST_RUN_TIME times,
     *             and sendUpdateCellLocationRequest successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_sendUpdateCellLocationRequest_Async_0300', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.sendUpdateCellLocationRequest( (err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_sendUpdateCellLocationRequest_Async_0300 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_sendUpdateCellLocationRequest_Promise_0300
     * @tc.name    Test sendUpdateCellLocationRequest() The query function is executed TEST_RUN_TIME times,
     *             and sendUpdateCellLocationRequest successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_sendUpdateCellLocationRequest_Promise_0300', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.sendUpdateCellLocationRequest();
            } catch (err) {
                console.log('Telephony_NetworkSearch_sendUpdateCellLocationRequest_Promise_0300 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_sendUpdateCellLocationRequest_Promise_0300 finish');
        done();
    })
})
