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

describe('NetworkSearchInformationReliabilityTest', function () {

    //Available network formats
    const garrRadioTech = [
        radio.RADIO_TECHNOLOGY_UNKNOWN,
        radio.RADIO_TECHNOLOGY_GSM,
        radio.RADIO_TECHNOLOGY_1XRTT,
        radio.RADIO_TECHNOLOGY_WCDMA,
        radio.RADIO_TECHNOLOGY_HSPA,
        radio.RADIO_TECHNOLOGY_HSPAP,
        radio.RADIO_TECHNOLOGY_TD_SCDMA,
        radio.RADIO_TECHNOLOGY_EVDO,
        radio.RADIO_TECHNOLOGY_EHRPD,
        radio.RADIO_TECHNOLOGY_LTE,
        radio.RADIO_TECHNOLOGY_LTE_CA,
        radio.RADIO_TECHNOLOGY_IWLAN,
        radio.RADIO_TECHNOLOGY_NR,
    ];
  
    //Network type corresponding to signal
    const garrSignalType = [
        radio.NETWORK_TYPE_UNKNOWN,
        radio.NETWORK_TYPE_GSM,
        radio.NETWORK_TYPE_CDMA,
        radio.NETWORK_TYPE_WCDMA,
        radio.NETWORK_TYPE_TDSCDMA,
        radio.NETWORK_TYPE_LTE,
        radio.NETWORK_TYPE_NR,
    ];

    //Corresponding level of signal
    const garrSignalLevel = [0, 1, 2, 3, 4, 5];

    const SLOT_0 = 0;
    const TEST_RUN_TIME = 10;
    const ISO_COUNTRY_CODE = 'cn';
    
    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0300
     * @tc.name    Test getNetworkState() The query function is executed TEST_RUN_TIME times,
     *             and the network registration status of the default card 0 can be finishfully returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0300', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getNetworkState((err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkState_Async_0300 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.plmnNumeric.length == 5 && data.plmnNumeric.substr(0, 3) === '460').assertTrue();
                expect(data.regStatus === radio.REG_STATE_IN_SERVICE).assertTrue();
                expect(data.nsaState === radio.NSA_STATE_NOT_SUPPORT).assertTrue();
                expect(data.isRoaming === false).assertTrue();
                expect(data.isCaActive === false).assertTrue();
                expect(data.isEmergency === false).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0500
     * @tc.name    The slotId parameter input is 0, the test getNetworkState() query function is executed
     *             TEST_RUN_TIME times, and the network registration status can be returned every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0500', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getNetworkState(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkState_Async_0500 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.plmnNumeric.length == 5 && data.plmnNumeric.substr(0, 3) === '460').assertTrue();
                expect(data.regStatus === radio.REG_STATE_IN_SERVICE).assertTrue();
                expect(data.nsaState === radio.NSA_STATE_NOT_SUPPORT).assertTrue();
                expect(data.isRoaming === false).assertTrue();
                expect(data.isCaActive === false).assertTrue();
                expect(data.isEmergency === false).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0200 fixme
     * @tc.name    The slotId parameter input is 0, the test getRadioTech() query function is
     *             executed TEST_RUN_TIME times, and the network mode of PS and CS is returned
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0200', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getRadioTech(SLOT_0, (err, { psRadioTech, csRadioTech }) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getRadioTech_Async_0200 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(garrRadioTech).assertContain(psRadioTech);
                expect(garrRadioTech).assertContain(csRadioTech);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Async_0200
     * @tc.name    The slotId parameter input is 0, the test getSignalInformation() query function is
     *             executed TEST_RUN_TIME times, and the signal strength list information is returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Async_0200', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getSignalInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getSignalInformation_Async_0200 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data != null && data != undefined).assertTrue();
                expect(data.length > 0).assertTrue();
                expect(garrSignalType).assertContain(data[0].signalType);
                expect(garrSignalLevel).assertContain(data[0].signalLevel);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0300
     * @tc.name    Test getNetworkState() The query function is executed TEST_RUN_TIME times,
     *             and the network registration status of the default card 1 can be finishfully returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0300', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getNetworkState();
                expect(data.plmnNumeric.length == 5 && data.plmnNumeric.substr(0, 3) === '460').assertTrue();
                expect(data.regStatus === radio.REG_STATE_IN_SERVICE).assertTrue();
                expect(data.nsaState === radio.NSA_STATE_NOT_SUPPORT).assertTrue();
                expect(data.isRoaming === false).assertTrue();
                expect(data.isCaActive === false).assertTrue();
                expect(data.isEmergency === false).assertTrue();
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkState_Promise_0300 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkState_Promise_0300 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0500
     * @tc.name    The slotId parameter input is 0, the test getNetworkState() query function is
     *             executed TEST_RUN_TIME times, and the network registration status can be returned every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0500', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getNetworkState(SLOT_0);
                expect(data.plmnNumeric.length == 5 && data.plmnNumeric.substr(0, 3) === '460').assertTrue();
                expect(data.regStatus === radio.REG_STATE_IN_SERVICE).assertTrue();
                expect(data.nsaState === radio.NSA_STATE_NOT_SUPPORT).assertTrue();
                expect(data.isRoaming === false).assertTrue();
                expect(data.isCaActive === false).assertTrue();
                expect(data.isEmergency === false).assertTrue();
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkState_Promise_0500 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkState_Promise_0500 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0200 fixme
     * @tc.name    The slotId parameter input is 0, the test getRadioTech() query function is
     *             executed TEST_RUN_TIME times, and the network mode of PS and CS is returned.
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getRadioTech(SLOT_0);
                expect(data != null && data != undefined).assertTrue();
                expect(garrRadioTech).assertContain(data.psRadioTech);
                expect(garrRadioTech).assertContain(data.csRadioTech);
            } catch (err) {
                console.log('Telephony_NetworkSearch_getRadioTech_Promise_0200 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getRadioTech_Promise_0200 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Promise_0200 fixme
     * @tc.name    The slotId parameter input is 0, the test getSignalInformation() query function is
     *             executed TEST_RUN_TIME times, and the signal strength list information is returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getSignalInformation(SLOT_0);
                expect(data != null && data != undefined).assertTrue();
                expect(data.length > 0).assertTrue();
                expect(garrSignalType).assertContain(data[0].signalType);
                expect(garrSignalLevel).assertContain(data[0].signalLevel);
            } catch (err) {
                console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0200 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0200 finish');
        done();
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0200
     * @tc.name    The slotId parameter input is 0, the test getISOCountryCodeForNetwork() query function is
     *             executed TEST_RUN_TIME times, and the ISOCountryCode is returned each time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0200', 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                return;
            }
            radio.getISOCountryCodeForNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log(
                        'Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0200 fail err: ' + err);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data === ISO_COUNTRY_CODE).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200
     * @tc.name    The slotId parameter input is 0, the test getISOCountryCodeForNetwork() query function is
     *             executed TEST_RUN_TIME times, and the ISOCountryCode is returned each time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await radio.getISOCountryCodeForNetwork(SLOT_0);
                expect(data === ISO_COUNTRY_CODE).assertTrue();
            } catch (err) {
                console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200 fail err: ' + err);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200 finish');
        done();
    })
})
