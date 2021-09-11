/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import radio from '@ohos.telephony_radio'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('NetworkSearchTest', function () {
    //Long name of operator
    var g_arrLongOperatorName = [
        "CHINA MOBILE",
        "CHN-UNICOM",
        "CHINA TELECOM"
    ]
    //Short name of operator
    var g_arrShortOperatorName = ["CMCC", "UNICOM", "CTCC"]
    //Plmn ID of operator
    var g_arrPlmnNumeric = [
        "46000",
        "46001",
        "46002",
        "46003",
        "46006",
        "46007",
        "46020",
        "46005",
        "46011"
    ]
    //Resident status
    var g_arrRegState = [
        radio.REG_STATE_NO_SERVICE,
        radio.REG_STATE_IN_SERVICE,
        radio.REG_STATE_EMERGENCY_CALL_ONLY,
        radio.REG_STATE_POWER_OFF
    ]
    //NSA network registration status
    var g_arrNsaState = [
        radio.NSA_STATE_NOT_SUPPORT,
        radio.NSA_STATE_NO_DETECT,
        radio.NSA_STATE_CONNECTED_DETECT,
        radio.NSA_STATE_IDLE_DETECT,
        radio.NSA_STATE_DUAL_CONNECTED,
        radio.NSA_STATE_SA_ATTACHED
    ]
    //Available network formats
    var g_arrRadioTech = [
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
        radio.RADIO_TECHNOLOGY_NR
    ]
    //Network type corresponding to signal
    var g_arrSignalType = [
        radio.NETWORK_TYPE_UNKNOWN,
        radio.NETWORK_TYPE_GSM,
        radio.NETWORK_TYPE_CDMA,
        radio.NETWORK_TYPE_WCDMA,
        radio.NETWORK_TYPE_TDSCDMA,
        radio.NETWORK_TYPE_LTE,
        radio.NETWORK_TYPE_NR
    ]
    //Corresponding level of signal
    var g_arrSignalLevel = [0, 1, 2, 3, 4, 5]

    const SLOT_0 = 0
    const ISO_COUNTRY_CODE = 'cn'

    function MatchAllResult(arr, value, name) {
        var result = arr.find((item) => {
            return item = value
        })
        console.log('Telephony_NetworkSearch ' + name + ' : ' + value)
        expect(result != undefined).assertTrue()
    }

    afterAll(async function () {
        console.log('Telephony_NetworkSearch_InformationTest End!!!')
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0100
     * @tc.name    Test the getNetworkState() query function and return the default card 0 network registration status
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0100', 0, async function (done) {
        radio.getNetworkState((err, data) => {
            if (err) {
                console.log('Telephony_NetworkSearch_getNetworkState_Async_0100 fail')
                expect().assertFail()
                done()
                return
            }
            expect(data != null && data != undefined).assertTrue()
            MatchAllResult(g_arrLongOperatorName, data.longOperatorName, 'LongOperatorName')
            MatchAllResult(g_arrShortOperatorName, data.shortOperatorName, 'ShortOperatorName')
            MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric, 'PlmnNumeric')
            MatchAllResult(g_arrRegState, data.regStatus, 'RegState')
            MatchAllResult(g_arrNsaState, data.nsaState, 'NsaState')
            expect(data.isRoaming == false).assertTrue()
            expect(data.isCaActive == false).assertTrue()
            expect(data.isEmergency == false).assertTrue()
            console.log('Telephony_NetworkSearch_getNetworkState_Async_0100 finish')
            done()
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0200
     * @tc.name    The slotId parameter input is 0, test the getNetworkState() query function,
     *             and return the network registration status of card 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0200', 0, async function (done) {
        radio.getNetworkState(SLOT_0, (err, data) => {
            if (err) {
                console.log('Telephony_NetworkSearch_getNetworkState_Async_0200 fail')
                expect().assertFail()
                done()
                return
            }
            expect(data != null && data != undefined).assertTrue()
            MatchAllResult(g_arrLongOperatorName, data.longOperatorName, 'LongOperatorName')
            MatchAllResult(g_arrShortOperatorName, data.shortOperatorName, 'ShortOperatorName')
            MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric, 'PlmnNumeric')
            MatchAllResult(g_arrRegState, data.regStatus, 'RegState')
            MatchAllResult(g_arrNsaState, data.nsaState, 'NsaState')
            expect(data.isRoaming == false).assertTrue()
            expect(data.isCaActive == false).assertTrue()
            expect(data.isEmergency == false).assertTrue()
            console.log('Telephony_NetworkSearch_getNetworkState_Async_0100 finish')
            done()
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0100
     * @tc.name    SlotId parameter input is 0, test getRadioTech() query function, return PS, CS network mode
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0100', 0, async function (done) {
        radio.getRadioTech(SLOT_0, (err, { psRadioTech, csRadioTech }) => {
            if (err) {
                console.log('Telephony_NetworkSearch_getRadioTech_Async_0100 fail')
                expect().assertFail()
                done()
                return
            }
            MatchAllResult(g_arrRadioTech, psRadioTech, 'PsRadioTech')
            MatchAllResult(g_arrRadioTech, csRadioTech, 'CsRadioTech')
            console.log('Telephony_NetworkSearch_getRadioTech_Async_0100 finish')
            done()
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Async_0100
     * @tc.name    SlotId parameter input is 0, test getSignalInformation() query function,
     *             return signal strength list information
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Async_0100', 0, async function (done) {
        radio.getSignalInformation(SLOT_0, (err, data) => {
            if (err) {
                console.log('Telephony_NetworkSearch_getSignalInformation_Async_0100 err fail')
                expect().assertFail()
                done()
                return
            }
            expect(data != null && data != undefined).assertTrue()
            if (data.length <= 0) {
                console.log('Telephony_NetworkSearch_getSignalInformation_Async_0100 fail')
                expect().assertFail()
                done()
                return
            }
            MatchAllResult(g_arrSignalType, data[0].signalType, 'SignalType')
            MatchAllResult(g_arrSignalLevel, data[0].signalLevel, 'SignalLevel')
            console.log('Telephony_NetworkSearch_getSignalInformation_Async_0100 finish')
            done()
        })
    })

    /**
    * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0100
    * @tc.name    Test the getNetworkState() query function and return the default card 0 network registration status
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0100', 0, async function (done) {
        try {
            var data = await radio.getNetworkState()
            expect(data != null && data != undefined).assertTrue()
            MatchAllResult(g_arrLongOperatorName, data.longOperatorName, 'LongOperatorName')
            MatchAllResult(g_arrShortOperatorName, data.shortOperatorName, 'ShortOperatorName')
            MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric, 'PlmnNumeric')
            MatchAllResult(g_arrRegState, data.regStatus, 'RegState')
            MatchAllResult(g_arrNsaState, data.nsaState, 'NsaState')
            expect(data.isRoaming == false).assertTrue()
            expect(data.isCaActive == false).assertTrue()
            expect(data.isEmergency == false).assertTrue()
            console.log('Telephony_NetworkSearch_getNetworkState_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkState_Promise_0100 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0200
     * @tc.name    The slotId parameter input is 0, test the getNetworkState() query function,
     *             and return the network registration status of card 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0200', 0, async function (done) {
        try {
            var data = await radio.getNetworkState(SLOT_0)
            expect(data != null && data != undefined).assertTrue()
            MatchAllResult(g_arrLongOperatorName, data.longOperatorName, 'LongOperatorName')
            MatchAllResult(g_arrShortOperatorName, data.shortOperatorName, 'ShortOperatorName')
            MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric, 'PlmnNumeric')
            MatchAllResult(g_arrRegState, data.regStatus, 'RegState')
            MatchAllResult(g_arrNsaState, data.nsaState, 'NsaState')
            expect(data.isRoaming == false).assertTrue()
            expect(data.isCaActive == false).assertTrue()
            expect(data.isEmergency == false).assertTrue()
            console.log('Telephony_NetworkSearch_getNetworkState_Promise_0200 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkState_Promise_0200 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0100
     * @tc.name    SlotId parameter input is 0, test getRadioTech() query function, return PS, CS network mode
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0100', 0, async function (done) {
        try {
            var data = await radio.getRadioTech(SLOT_0)
            expect(data != null && data != undefined).assertTrue()
            MatchAllResult(g_arrRadioTech, data.psRadioTech, 'PsRadioTech')
            MatchAllResult(g_arrRadioTech, data.csRadioTech, 'CsRadioTech')
            console.log('Telephony_NetworkSearch_getRadioTech_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getRadioTech_Promise_0100 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Promise_0100
     * @tc.name    SlotId parameter input is 0, test getSignalInformation() query function,
     *             return signal strength list information
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Promise_0100', 0, async function (done) {
        try {
            var data = await radio.getSignalInformation(SLOT_0)
            expect(data != null && data != undefined).assertTrue()
            if (data.length <= 0) {
                console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0100 fail')
                expect().assertFail()
                done()
                return
            }
            MatchAllResult(g_arrSignalType, data[0].signalType, 'SignalType')
            MatchAllResult(g_arrSignalLevel, data[0].signalLevel, 'SignalLevel')
            console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0100  err fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
    * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0100
    * @tc.name    SlotId parameter input is 0, test getISOCountryCodeForNetwork() returns country code is 'cn'
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0100', 0, async function (done) {
        radio.getISOCountryCodeForNetwork(SLOT_0, (err, data) => {
            if (err) {
                console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0100 fail')
                expect().assertFail()
                done()
                return
            }
            expect(data == ISO_COUNTRY_CODE).assertTrue()
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0100 finish')
            done()
        })
    })

    /**
    * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0100
    * @tc.name    SlotId parameter input is 0, test getISOCountryCodeForNetwork() returns country code is 'cn'
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0100', 0, async function (done) {
        try {
            var data = await radio.getISOCountryCodeForNetwork(SLOT_0)
            expect(data == ISO_COUNTRY_CODE).assertTrue()
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0100 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

})