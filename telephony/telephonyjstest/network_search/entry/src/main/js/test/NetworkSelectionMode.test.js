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
    //Network status
    var g_arrNetworkState = [
        radio.NETWORK_UNKNOWN,
        radio.NETWORK_AVAILABLE,
        radio.NETWORK_CURRENT,
        radio.NETWORK_FORBIDDEN
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

    const SLOT_0 = 0
    const OPERATOR_NAME = '46000'
    const OPERATOR_NUMERIC_46000 = '46000'
    const OPERATOR_NUMERIC_46001 = '46001'
    const RADIO_TECH = '2'
    const ERR_VALUE_5 = 5
    const ERR_VALUE_10 = 10
    const ERR_VALUE_999 = 999

    async function RecoverNetworkSelectionMode() {
        try {
            await radio.setNetworkSelectionMode(g_networkSMode)
            console.log('Telephony_NetworkSearch_RecoverNetworkSelectionMode success')
        } catch (err) {
            console.log('Telephony_NetworkSearch_RecoverNetworkSelectionMode fail')
        }
    }

    function MatchAllResult(arr, value, name) {
        var result = arr.find((item) => {
            return item = value
        })
        console.log('Telephony_NetworkSearch ' + name + ' : ' + value)
        expect(result != undefined).assertTrue()
    }

    afterAll(async function () {
        //Initialize network selection mode after all test cases
        RecoverNetworkSelectionMode()
        console.log('Telephony_NetworkSearch_SelectionModeTest End!!!')
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Async_0100
     * @tc.name    Test the getNetworkSelectionMode() query function and set the slotId parameter input to 0,
     *             test the return value as NETWORK_SELECTION_AUTOMATIC
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0100', 0, async function (done) {
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
        await new Promise((resolve, reject) => {
            radio.setNetworkSelectionMode(networkSMode, (err) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0100 set finish')
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0100 set fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.getNetworkSelectionMode(SLOT_0, (err, res) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0100 get finish')
                expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0100 get fail')
            expect().assertFail()
            done()
            return
        })
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Async_0200
     * @tc.name    Test the getNetworkSelectionMode() query function and set the slotId parameter input to 0,
     *             and test the return value as NETWORK_SELECTION_MANUAL
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0200', 0, async function (done) {
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_MANUAL,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        await new Promise((resolve, reject) => {
            radio.setNetworkSelectionMode(networkSMode, (err) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0200 set finish')
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0200 set fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.getNetworkSelectionMode(SLOT_0, (err, res) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0200 get finish')
                expect(res == radio.NETWORK_SELECTION_MANUAL).assertTrue()
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Async_0200 get fail')
            expect().assertFail()
            done()
            return
        })
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0100
     * @tc.name    Test the getNetworkSelectionMode() query function and set the slotId parameter input to 0,
     *             and test the return value as NETWORK_SELECTION_AUTOMATIC
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0100', 0, async function (done) {
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
        try {
            await radio.setNetworkSelectionMode(networkSMode)
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0100 set finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0100 set fail')
            expect().assertFail()
            done()
            return
        }
        try {
            var res = await radio.getNetworkSelectionMode(SLOT_0)
            expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0100 get finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0100 get fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200
     * @tc.name    Test the getNetworkSelectionMode() query function and set the slotId parameter input to 0,
     *             and test the return value as "1"
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200', 0, async function (done) {
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_MANUAL,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        try {
            await radio.setNetworkSelectionMode(networkSMode)
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 set finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 set fail')
            expect().assertFail()
            done()
            return
        }
        try {
            var res = await radio.getNetworkSelectionMode(SLOT_0)
            expect(res == radio.NETWORK_SELECTION_MANUAL).assertTrue()
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 get finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 get fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })



    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Async_0100
     * @tc.name    Test the setNetworkSelectionMode() query function and set the selectmode parameter input to
     *             "NETWORK_SELECTION_UNKNOWN" and test the return value is "False" and the network selection mode
     *             update failed
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0100', 0, async function (done) {
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_UNKNOWN,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        await new Promise((resolve, reject) => {
            radio.setNetworkSelectionMode(networkSMode, (err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0100 set finish')
                    resolve()
                }
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0100 set fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.getNetworkSelectionMode(SLOT_0, (err, res) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0100 get finish')
                expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0100 get fail')
            expect().assertFail()
            done()
            return
        })
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Async_0200
     * @tc.name    Test the setNetworkSelectionMode() query function and set the selectmode parameter input to "5"
     *             and test the return value is "False" and the network selection mode update failed
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0200', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: ERR_VALUE_5,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        await new Promise((resolve, reject) => {
            radio.setNetworkSelectionMode(networkSMode, (err) => {
                if (err) {
                    resolve()
                }
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0200 set fail')
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0200 set finish')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.getNetworkSelectionMode(SLOT_0, (err, res) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0200 get finish')
                expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0200 get fail')
            expect().assertFail()
            done()
            return
        })
        done()
    })



    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Async_0300
     * @tc.name    Test the setNetworkSelectionMode() and set the operatorNumeric parameter input to "46001"
     *             and test value is "False" and the network selection mode update fails
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0300', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_MANUAL,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46001,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        await new Promise((resolve, reject) => {
            radio.setNetworkSelectionMode(networkSMode, (err) => {
                if (err) {
                    resolve()
                }
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0300 set fail')
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0300 set finish')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.getNetworkSelectionMode(SLOT_0, (err, res) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0300 get finish')
                expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0300 get fail')
            expect().assertFail()
            done()
            return
        })
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Async_0400
     * @tc.name    Test the setNetworkSelectionMode() and set the resumeSelection parameter input to "true"
     *             and test value is "False" and the network selection mode update fails
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0400', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_MANUAL,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: true
        }
        await new Promise((resolve, reject) => {
            radio.setNetworkSelectionMode(networkSMode, (err) => {
                if (err) {
                    resolve()
                }
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0400 set fail')
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0400 set finish')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.getNetworkSelectionMode(SLOT_0, (err, res) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0400 get finish')
                expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Async_0400 get fail')
            expect().assertFail()
            done()
            return
        })
        done()
    })


    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0100
     * @tc.name    Test the setNetworkSelectionMode() and set the selectmode parameter input to
     *             "NETWORK_SELECTION_UNKNOWN" and test value is "False" and the network selection mode update fails
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0100', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_UNKNOWN,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        try {
            await radio.setNetworkSelectionMode(networkSMode)
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 set fail')
            expect().assertFail()
            done()
            return
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 set finish')
        }
        try {
            var res = await radio.getNetworkSelectionMode(SLOT_0)
            expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 get finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkSelectionMode_Promise_0200 get fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0200
     * @tc.name    Test the setNetworkSelectionMode() and enter an outlier selectMode: 5 return value is "False" and
     *             the network selection mode update fails
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0200', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: ERR_VALUE_5,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        try {
            await radio.setNetworkSelectionMode(networkSMode)
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0200 set fail')
            expect().assertFail()
            done()
            return
        } catch (err) {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0200 set finish')
        }
        try {
            var res = await radio.getNetworkSelectionMode(SLOT_0)
            expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0200 get finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0200 get fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })


    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0300
     * @tc.name    Test the setNetworkSelectionMode() and enter an outlier operatorNumeric: '46001'
     *             return value is "False" and the network selection mode update fails
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0300', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_MANUAL,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46001,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: false
        }
        try {
            await radio.setNetworkSelectionMode(networkSMode)
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0300 set fail')
            expect().assertFail()
            done()
            return
        } catch (err) {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0300 set finish')
        }
        try {
            var res = await radio.getNetworkSelectionMode(SLOT_0)
            expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0300 get finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0300 get fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0400
     * @tc.name    Test the setNetworkSelectionMode() query function and set the resumeSelection parameter input to
     *             "true" and test the return value is "True" and the network selection mode is updated to automatic
     *             network search
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0400', 0, async function (done) {
        RecoverNetworkSelectionMode()
        var networkSMode = {
            slotId: SLOT_0,
            selectMode: radio.NETWORK_SELECTION_MANUAL,
            networkInformation: {
                operatorName: OPERATOR_NAME,
                operatorNumeric: OPERATOR_NUMERIC_46000,
                state: radio.NETWORK_AVAILABLE,
                radioTech: RADIO_TECH
            },
            resumeSelection: true
        }
        try {
            await radio.setNetworkSelectionMode(networkSMode)
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0400 set fail')
            expect().assertFail()
            done()
            return
        } catch (err) {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0400 set finish')
        }
        try {
            var res = await radio.getNetworkSelectionMode(SLOT_0)
            expect(res == radio.NETWORK_SELECTION_AUTOMATIC).assertTrue()
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0400 get finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_setNetworkSelectionMode_Promise_0400 get fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Async_0100
     * @tc.name    Test the getNetworkSearchInformation() query function and set the slotId parameter input to 0,
     *             test the return value isNetworkSearchSuccess is true and specific operator information
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0100', 0, async function (done) {
        RecoverNetworkSelectionMode()
        radio.getNetworkSearchInformation(SLOT_0, (err, data) => {
            if (err) {
                console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0100 err fail')
                expect().assertFail()
                done()
                return
            }
            expect(data != null && data != undefined).assertTrue()
            expect(data.isNetworkSearchSuccess).assertTrue()
            if (data.networkSearchResult.length <= 0) {
                console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0100 fail')
                expect().assertFail()
                done()
                return
            }
            MatchAllResult(g_arrLongOperatorName, data.networkSearchResult[0].operatorName, 'LongOperatorName')
            MatchAllResult(g_arrPlmnNumeric, data.networkSearchResult[0].operatorNumeric, 'PlmnNumeric')
            MatchAllResult(g_arrNetworkState, data.networkSearchResult[0].state, 'NetworkState')
            MatchAllResult(g_arrNetworkRadioTech, data.networkSearchResult[0].radioTech, 'NetworkRadioTech')
            console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Async_0100 finish')
            done()
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0100
     * @tc.name    Test the getNetworkSearchInformation() query function and set the slotId parameter input to 0,
     *             test the return value isNetworkSearchSuccess is true and specific operator information
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0100', 0, async function (done) {
        RecoverNetworkSelectionMode()
        try {
            var data = await radio.getNetworkSearchInformation(SLOT_0)
            expect(data != null && data != undefined).assertTrue()
            expect(data.isNetworkSearchSuccess).assertTrue()
            if (data.networkSearchResult.length <= 0) {
                console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0100 fail')
                expect().assertFail()
                done()
                return
            }
            MatchAllResult(g_arrLongOperatorName, data.networkSearchResult[0].operatorName, 'LongOperatorName')
            MatchAllResult(g_arrPlmnNumeric, data.networkSearchResult[0].operatorNumeric, 'PlmnNumeric')
            MatchAllResult(g_arrNetworkState, data.networkSearchResult[0].state, 'NetworkState')
            MatchAllResult(g_arrNetworkRadioTech, data.networkSearchResult[0].radioTech, 'NetworkRadioTech')
            console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_getNetworkSearchInformation_Promise_0100 err fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })
})