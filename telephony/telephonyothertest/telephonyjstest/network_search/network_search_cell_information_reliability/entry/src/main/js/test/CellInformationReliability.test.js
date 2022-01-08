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
    const TEST_RUN_TIME = 1000;
    const CELL_LAC_TAC_MAX = 0xffff;
    const CELL_CELLID_MAX = 0xfffffff;
    const CELL_GSM_CELLID_MAX = 0xffff;
    const CELL_ARFCN_MAX = 1023;
    const CELL_EARFCN_MAX = 41239;
    const CELL_BSIC_MAX = 63;
    const CELL_PSC_MAX = 511;
    const CELL_PCI_MAX = 503;
    const CELL_MCC = 460;
    const CELL_MNC_MAX = 20;
    const CELL_INFO_MIN = 0;

    function assertCellInformation(data) {
        expect(data !== '' && data != undefined && data != null).assertTrue();
        expect(data.length).assertLarger(0);
        for (let i = 0; i < data.length; i++) {
            expect(NETWORK_TYPES).assertContain(data[i].networkType);
            expect(data[i].isCamped).assertTrue();
            expect(data[i].timeStamp).assertLarger(0);
            expect(NETWORK_TYPES).assertContain(data[i].signalInformation.signalType);
            expect(NETWORK_SIGNAL).assertContain(data[i].signalInformation.signalLevel);
            expect(data[i].data != undefined && data[i].data != '' && data[i].data != null).assertTrue();
            if (data[0].networkType === radio.NETWORK_TYPE_LTE) {
                expect(data[i].data.tac >= CELL_INFO_MIN && data[i].data.tac <= CELL_LAC_TAC_MAX).assertTrue();
                expect(data[i].data.cgi >= CELL_INFO_MIN && data[i].data.cgi <= CELL_CELLID_MAX).assertTrue();
                expect(data[i].data.earfcn >= CELL_INFO_MIN && data[i].data.earfcn <= CELL_EARFCN_MAX).assertTrue();
                expect(data[i].data.pci >= CELL_INFO_MIN && data[i].data.pci <= CELL_PCI_MAX).assertTrue();
                expect(data[i].data.mnc >= CELL_INFO_MIN && data[i].data.mnc <= CELL_MNC_MAX).assertTrue();
                expect(data[i].data.mcc).assertEqual(CELL_MCC);
            } else if (data[i].networkType === radio.NETWORK_TYPE_WCDMA) {
                expect(data[i].data.lac >= CELL_INFO_MIN && data[i].data.lac <= CELL_LAC_TAC_MAX).assertTrue();
                expect(data[i].data.cellId >= CELL_INFO_MIN && data[i].data.cellId <= CELL_CELLID_MAX).assertTrue();
                expect(data[i].data.uarfcn >= CELL_INFO_MIN && data[i].data.uarfcn <= CELL_ARFCN_MAX).assertTrue();
                expect(data[i].data.psc >= CELL_INFO_MIN && data[i].data.psc <= CELL_PSC_MAX).assertTrue();
                expect(data[i].data.mnc >= CELL_INFO_MIN && data[i].data.mnc <= CELL_MNC_MAX).assertTrue();
                expect(data[i].data.mcc).assertEqual(CELL_MCC);
            } else if (data[i].networkType === radio.NETWORK_TYPE_GSM) {
                expect(data[i].data.lac >= CELL_INFO_MIN && data[i].data.lac <= CELL_LAC_TAC_MAX).assertTrue();
                expect(data[i].data.cellId >= CELL_INFO_MIN && data[i].data.cellId <= CELL_GSM_CELLID_MAX).assertTrue();
                expect(data[i].data.arfcn >= CELL_INFO_MIN && data[i].data.arfcn <= CELL_ARFCN_MAX).assertTrue();
                expect(data[i].data.bsic >= CELL_INFO_MIN && data[i].data.bsic <= CELL_BSIC_MAX).assertTrue();
                expect(data[i].data.mnc >= CELL_INFO_MIN && data[i].data.mnc <= CELL_MNC_MAX).assertTrue();
                expect(data[i].data.mcc).assertEqual(CELL_MCC);
            } else {
                expect().assertFail();
            }
        }
    }

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
                assertCellInformation(data);
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
                assertCellInformation(data);
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
