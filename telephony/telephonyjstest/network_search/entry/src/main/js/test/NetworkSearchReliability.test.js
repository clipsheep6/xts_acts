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
    var g_slot = 0
    var g_radioTech = '2'
    var g_operatorName = 'CMCC'
    var g_operatorNumeric = '46000'
    var g_networkSMode = {
        slotId: g_slot,
        selectMode: radio.NETWORK_SELECTION_AUTOMATIC,
        networkInformation: {
            operatorName: g_operatorName,
            operatorNumeric: g_operatorNumeric,
            state: radio.NETWORK_AVAILABLE,
            radioTech: g_radioTech
        },
        resumeSelection: false
    }
    //Long name of operator
    var g_arrLongOperatorName = [
        "CHINA MOBILE",
        "CHN-UNICOM",
        "CHINA TELECOM"
    ]
    //Short name of operator
    var g_arrShortOperatorName = ["CMCC", "CU", "CT"]
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
    //Network status
    var g_arrNetworkState = [
        radio.NETWORK_UNKNOWN,
        radio.NETWORK_AVAILABLE,
        radio.NETWORK_CURRENT,
        radio.NETWORK_CURRENT
    ]
    //Network system
    var g_arrNetworkRadioTech = [
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
        radio.NETWORK_TYPE_NR]
    //Corresponding level of signal
    var g_arrSignalLevel = [0, 1, 2, 3, 4, 5]

    async function RecoverNetworkSelectionMode() {
        try {
            await radio.setNetworkSelectionMode(g_networkSMode)
            console.log('Telephony_NetworkSearch_RecoverNetworkSelectionMode success')
        } catch (err) {
            console.log('Telephony_NetworkSearch_RecoverNetworkSelectionMode fail')
        }
    }

    async function RecoverRadioState() {
        try {
            await radio.turnOnRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_RecoverRadioState success')
        } catch (err) {
            console.log('Telephony_NetworkSearch_RecoverRadioState fail')
        }
    }

    function MatchAllResult(arr, value) {
        var result = arr.find((item) => {
            return item = value
        })
        console.log('Telephony_NetworkSearch-------------' + value)
        expect(result != undefined).assertTrue()
    }

    afterAll(async function () {
        //Initialize network selection mode after all test cases
        RecoverNetworkSelectionMode()
        //Initialize radio status after all test cases
        RecoverRadioState()
    })

    const SLOT_0 = 0
    const TEST_RUN_TIME = 10
    const OPERATOR_NAME = 'CMCC'
    const OPERATOR_NUMERIC_46000 = '46000'
    const RADIO_TECH = '2'

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0300
     * @tc.name    Test getNetworkState() The query function is executed 10 times, and the network registration status
     *             of the default card 0 can be finishfully returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0300', 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.getNetworkState((err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkState_Async_0300 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data != null && data != undefined).assertTrue()
                MatchAllResult(g_arrLongOperatorName, data.longOperatorName)
                MatchAllResult(g_arrShortOperatorName, data.shortOperatorName)
                MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric)
                expect(data.isRoaming == true || data.isRoaming == false).assertTrue()
                MatchAllResult(g_arrRegState, data.regStatus)
                MatchAllResult(g_arrNsaState, data.nsaState)
                expect(data.isCaActive == true || data.isCaActive == false).assertTrue()
                expect(data.isEmergency == true || data.isEmergency == false).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })
    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0500
     * @tc.name    The slotId parameter input is 0, the test getNetworkState() query function is executed 10 times,
     *             and the network registration status can be returned every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0500', 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.getNetworkState(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkState_Async_0500 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data != null && data != undefined).assertTrue()
                MatchAllResult(g_arrLongOperatorName, data.longOperatorName)
                MatchAllResult(g_arrShortOperatorName, data.shortOperatorName)
                MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric)
                expect(data.isRoaming == true || data.isRoaming == false).assertTrue()
                MatchAllResult(g_arrRegState, data.regStatus)
                MatchAllResult(g_arrNsaState, data.nsaState)
                expect(data.isCaActive == true || data.isCaActive == false).assertTrue()
                expect(data.isEmergency == true || data.isEmergency == false).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0200 fixme
     * @tc.name    The slotId parameter input is 0, the test getRadioTech() query function is executed 10 times,
     *             and the network mode of PS and CS is returned.
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0200', 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.getRadioTech(SLOT_0, (err, { psRadioTech, csRadioTech }) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getRadioTech_Async_0200 fail')
                    expect().assertFail()
                    done()
                    return
                }
                MatchAllResult(g_arrRadioTech, psRadioTech)
                MatchAllResult(g_arrRadioTech, csRadioTech)
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Async_0200
     * @tc.name    The slotId parameter input is 0, the test getSignalInformation() query function is executed 10
     *             times, and the signal strength list information is returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Async_0200', 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.getSignalInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getSignalInformation_Async_0200 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data != null && data != undefined).assertTrue()
                if (data.length <= 0) {
                    console.log('Telephony_NetworkSearch_getSignalInformation_Async_0200 fail')
                    expect().assertFail()
                    done()
                    return
                }
                MatchAllResult(g_arrSignalType, data.signalType[0])
                MatchAllResult(g_arrSignalLevel, data.signalLevel[0])
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
    * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0300
    * @tc.name    Test getNetworkState() The query function is executed 10 times, and the network registration status
    *             of the default card 1 can be finishfully returned each time
    * @tc.desc    Reliability test
    */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0300', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await radio.getNetworkState()
                expect(data != null && data != undefined).assertTrue()
                MatchAllResult(g_arrLongOperatorName, data.longOperatorName)
                MatchAllResult(g_arrShortOperatorName, data.shortOperatorName)
                MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric)
                expect(data.isRoaming == true || data.isRoaming == false).assertTrue()
                MatchAllResult(g_arrRegState, data.regState)
                MatchAllResult(g_arrNsaState, data.nsaState)
                expect(data.isCaActive == true || data.isCaActive == false).assertTrue()
                expect(data.isEmergency == true || data.isEmergency == false).assertTrue()
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkState_Promise_0300 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkState_Promise_0300 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0500
     * @tc.name    The slotId parameter input is 0, the test getNetworkState() query function is executed 10 times,
     *             and the network registration status can be returned every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0500', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await radio.getNetworkState(SLOT_0)
                expect(data != null && data != undefined).assertTrue()
                MatchAllResult(g_arrLongOperatorName, data.longOperatorName)
                MatchAllResult(g_arrShortOperatorName, data.shortOperatorName)
                MatchAllResult(g_arrPlmnNumeric, data.plmnNumeric)
                expect(data.isRoaming == true || data.isRoaming == false).assertTrue()
                MatchAllResult(g_arrRegState, data.regState)
                MatchAllResult(g_arrNsaState, data.nsaState)
                expect(data.isCaActive == true || data.isCaActive == false).assertTrue()
                expect(data.isEmergency == true || data.isEmergency == false).assertTrue()
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkState_Promise_0500 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkState_Promise_0500 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0200 fixme
     * @tc.name    The slotId parameter input is 0, the test getRadioTech() query function is executed 10 times,
     *             and the network mode of PS and CS is returned.
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await radio.getRadioTech(SLOT_0)
                expect(data != null && data != undefined).assertTrue()
                MatchAllResult(g_arrRadioTech, data.psRadioTech)
                MatchAllResult(g_arrRadioTech, data.csRadioTech)
            } catch (err) {
                console.log('Telephony_NetworkSearch_getRadioTech_Promise_0200 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_getRadioTech_Promise_0200 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Promise_0200 fixme
     * @tc.name    The slotId parameter input is 0, the test getSignalInformation() query function is executed 10
     *             times, and the signal strength list information is returned each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await radio.getSignalInformation(SLOT_0)
                expect(data != null && data != undefined).assertTrue()
                if (data.length <= 0) {
                    console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0200 fail')
                    expect().assertFail()
                    done()
                    return
                }
                MatchAllResult(g_arrSignalType, data.signalType[0])
                MatchAllResult(g_arrSignalLevel, data.signalLevel[0])
            } catch (err) {
                console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0200 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_getSignalInformation_Promise_0200 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Async_0300
     * @tc.name    Test is executed 10 times, and the network selection mode obtained each time is not empty
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0300', 0, async function (done) {
        RecoverNetworkSelectionMode()
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.getNetworkSelectionMode(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0300 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300
     * @tc.name    The slotId is 1, and the network selection mode obtained each time is not empty
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300', 0, async function (done) {
        RecoverNetworkSelectionMode()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await radio.getNetworkSelectionMode(SLOT_0)
                expect(data == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0300 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Async_0900
     * @tc.name    Test cyclicallyeach time the network selection mode can be finishfully set
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0900', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_AUTOMATIC,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.setNetworkSelectionMode(networkSMode, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0900 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data != null).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900
     * @tc.name    Test execute 10 times, each time the network selection mode can be finishfully set
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900', 0, async function (done) {
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_AUTOMATIC,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await radio.setNetworkSelectionMode(networkSMode)
                expect(data != null).assertTrue()
            } catch (err) {
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0900 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0200
     * @tc.name    SlotId parameter input is 0, test getISOCountryCodeForNetwork() returns country code is not empty
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0200', 0, async function (done) {
        RecoverRadioState()
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.getISOCountryCodeForNetwork(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0200 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data != null).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200
     * @tc.name    SlotId parameter input is 0, test getISOCountryCodeForNetwork() returns country code is not empty
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await radio.getISOCountryCodeForNetwork(SLOT_0)
                expect(data != null).assertTrue()
            } catch (err) {
                console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0200 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Async_0300
     * @tc.name    Test turnOnRadio() is executed 10 times, and it can be executed finishfully every time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Async_0300', 0, async function (done) {
        RecoverRadioState()
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.turnOnRadio(SLOT_0, (err) => {
                if (err) {
                    //Error code judgment is required here
                    Recursive(n - 1)
                } else {
                    console.log('Telephony_NetworkSearch_turnOnRadio_Async_0300 fail')
                    expect().assertFail()
                    done()
                    return
                }
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Promise_0300
     * @tc.name    Test turnOnRadio() is executed 10 times, and it can be executed finishfully every time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Promise_0300', 0, async function (done) {
        RecoverRadioState()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.turnOnRadio(SLOT_0)
                var data = await radio.isRadioOn(SLOT_0)
                expect(data).assertTrue()
            } catch (err) {
                console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0300 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0300 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0300
     * @tc.name    Test turnOffRadio() is executed 10 times, and it can be executed finishfully every time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0300', 0, async function (done) {
        RecoverRadioState()
        radio.turnOffRadio(SLOT_0, (err) => {
            function Recursive(n) {
                if (n <= 0) {
                    done()
                    return
                }
                radio.turnOffRadio(SLOT_0, (err) => {
                    if (err) {
                        //Error code judgment is required here
                        Recursive(n - 1)
                    } else {
                        console.log('Telephony_NetworkSearch_turnOffRadio_Async_0300 fail')
                        expect().assertFail()
                        done()
                        return
                    }
                })

            }
            Recursive(TEST_RUN_TIME)
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0300
     * @tc.name    Test turnOffRadio() is executed 10 times, and it can be executed finishfully every time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0300', 0, async function (done) {
        RecoverRadioState()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await radio.turnOffRadio(SLOT_0)
                var data = radio.isRadioOn(SLOT_0)
                expect(data).assertFalse()
            } catch (err) {
                console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0300 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0300 finish')
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Async_0300
     * @tc.name    The slotId input is 0, test isRadioOn() is executed 10 times, and the data can be returned each time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Async_0300', 0, async function (done) {
        RecoverRadioState()
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.isRadioOn(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_isRadioOn_Async_0300 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Promise_0300
     * @tc.name    The slotId input is 0, test isRadioOn() is executed 10 times, and the data can be returned each time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Promise_0300', 0, async function (done) {
        RecoverRadioState()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = radio.isRadioOn(SLOT_0)
                expect(data).assertTrue()
            } catch (err) {
                console.log('Telephony_NetworkSearch_isRadioOn_Promise_0300 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_isRadioOn_Promise_0300 finish')
        done()
    })

    /**
    * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Async_0200
    * @tc.name    The slotId input is 0, test isRadioOn() is executed 10 times, and the data can be returned each time
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0200', 0, async function (done) {
        RecoverNetworkSelectionMode()
        function Recursive(n) {
            if (n <= 0) {
                done()
                return
            }
            radio.getNetworkSearchInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0200 fail')
                    expect().assertFail()
                    done()
                    return
                }
                expect(data != null && data != undefined).assertTrue()
                expect(data.isNetworkSearchSuccess).assertTrue()
                MatchAllResult(g_arrShortOperatorName, data.networkSearchResult.operatorName)
                MatchAllResult(g_arrPlmnNumeric, data.networkSearchResult.plmnNumeric)
                MatchAllResult(g_arrNetworkState, data.networkSearchResult.state)
                MatchAllResult(g_arrNetworkRadioTech, data.networkSearchResult.radioTech)
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200
     * @tc.name    The slotId input is 0, test isRadioOn() is executed 10 times, and the data can be returned each time
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200', 0, async function (done) {
        RecoverNetworkSelectionMode()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = radio.getNetworkSearchInformation(SLOT_0)
                expect(data != null && data != undefined).assertTrue()
                expect(data.isNetworkSearchSuccess).assertTrue()
                MatchAllResult(g_arrShortOperatorName, data.networkSearchResult.operatorName)
                MatchAllResult(g_arrPlmnNumeric, data.networkSearchResult.plmnNumeric)
                MatchAllResult(g_arrNetworkState, data.networkSearchResult.state)
                MatchAllResult(g_arrNetworkRadioTech, data.networkSearchResult.radioTech)
            } catch (err) {
                console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200 fail')
                expect().assertFail()
                done()
                return
            }
        }
        console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0200 finish')
        done()
    })
})