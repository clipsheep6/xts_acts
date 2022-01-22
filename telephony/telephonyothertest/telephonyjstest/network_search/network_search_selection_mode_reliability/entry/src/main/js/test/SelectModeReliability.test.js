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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

describe('NetworkSearchSelectModeReliabilityTest', function () {
    let gslot = 0;
    let gradioTech = radio.RADIO_TECHNOLOGY_GSM.toString();
    let goperatorName = '';
    let goperatorNumeric = '';
    let gnetworkSMode = {
        slotId: gslot,
        selectMode: radio.NETWORK_SELECTION_AUTOMATIC,
        networkInformation: {
            operatorName: goperatorName,
            operatorNumeric: goperatorNumeric,
            state: radio.NETWORK_AVAILABLE,
            radioTech: gradioTech,
        },
        resumeSelection: false,
    };

    const SLOT_0 = 0;
    const TEST_RUN_TIME = 10;

    //Network status
    let garrNetworkState = [
        radio.NETWORK_UNKNOWN,
        radio.NETWORK_AVAILABLE,
        radio.NETWORK_CURRENT,
        radio.NETWORK_CURRENT,
    ];
    //Network system
    let garrNetworkRadioTech = [
        'UNKNOWN', 'GSM', '1XRTT', 'WCDMA',
        'HSPA', 'HSPAP', 'TD_SCDMA', 'EVDO',
        'EHRPD', 'LTE', 'LTE_CA', 'IWLAN', 'NR'];

    async function recoverNetworkSelectionMode() {
        try {
            radio.setNetworkSelectionMode(gnetworkSMode);
            console.log('Telephony_NetworkSearch_rcoverNetworkSelectionMode success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_recoverNetworkSelectionMode fail err: ' + err.message);
        }
    }

    beforeAll(async function () {
        let data = await radio.getNetworkState(SLOT_0);
        console.log(`Telephony_NetworkSearch_getNetworkState data: ${JSON.stringify(data)}`)
        if (data.plmnNumeric != '' && data.plmnNumeric != undefined) {
            goperatorNumeric = data.plmnNumeric;
            goperatorName = data.longOperatorName;
        } else {
            console.log(`Telephony_NetworkSearch_getNetworkState fail`)
            return;
        }
    })

    afterAll(async function(){
        recoverNetworkSelectionMode();
    })
   
    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Async_0300
     * @tc.name    Test is executed TEST_RUN_TIME times, and the network selection mode obtained each time is not empty
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0300', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getNetworkSelectionMode(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0300 fail err: ' + err.message);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data === radio.NETWORK_SELECTION_AUTOMATIC).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300
     * @tc.name    The slotId is 0, and the network selection mode obtained each time is not empty
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getNetworkSelectionMode(SLOT_0);
                expect(data === radio.NETWORK_SELECTION_AUTOMATIC).assertTrue();
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300 fail err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Async_0900
     * @tc.name    Test cyclicallyeach time the network selection mode can be finishfully set
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0900', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.setNetworkSelectionMode(gnetworkSMode, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0900 fail err: ' + err.message);
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
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900
     * @tc.name    Test execute TEST_RUN_TIME times, each time the network selection mode can be finishfully set
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.setNetworkSelectionMode(gnetworkSMode);
            } catch (err) {
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900 fail err: ' + err.message);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Async_0200
     * @tc.name    The slotId input is 0, test getNetworkSearchInformation() is executed TEST_RUN_TIME times,
     *             and the data can be returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0200', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getNetworkSearchInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log(
                        'Telephony_NetworkSearch_getNetworkSearchInformation_Async_0200 fail err: ' + err.message);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0200 finish data: '+ 
                JSON.stringify(data));
                expect(data != null && data != undefined).assertTrue();
                expect(data.isNetworkSearchSuccess).assertTrue();
                expect(garrNetworkState).assertContain(data.networkSearchResult[0].state);
                expect(garrNetworkRadioTech).assertContain(data.networkSearchResult[0].radioTech);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200
     * @tc.name    The slotId input is 0, test getNetworkSearchInformation() is executed TEST_RUN_TIME times,
     *             and the data can be returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = radio.getNetworkSearchInformation(SLOT_0);
                expect(data != null && data != undefined).assertTrue();
                expect(data.isNetworkSearchSuccess).assertTrue();
                expect(garrNetworkState).assertContain(data.networkSearchResult[0].state);
                expect(garrNetworkRadioTech).assertContain(data.networkSearchResult[0].radioTech);
            } catch (err) {
                console.log(
                    'Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200 fail err: ' + err.message
                );
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200 finish');
        done();
    })
})
