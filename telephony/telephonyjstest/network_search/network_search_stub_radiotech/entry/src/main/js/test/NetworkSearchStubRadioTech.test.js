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
import { describe, it, expect, beforeAll, afterEach } from 'deccjsunit/index';

describe('NetworkSearchStubRadioTechTest', function () {
    const SLOT_0 = 0;
    const WAIT_TIME = 5000;
    const CELL_LAC_TAC_MAX = 0xffff;
    const CELL_CELLID_MAX = 0xfffffff;
    const CELL_GSM_CELLID_MAX = 0xffff;
    const CELL_ARFCN_MAX = 1023;
    const CELL_EARFCN_MAX = 41589;
    const CELL_BSIC_MAX = 63;
    const CELL_PSC_MAX = 511;
    const CELL_PCI_MAX = 503;
    const CELL_MCC = 460;
    const CELL_MNC_MAX = 20;
    const CELL_INFO_MIN = 0;
    const CELL_CDMA_BASEID_MAX = 65535;
    const CELL_CDMA_LATITUDE_MIN = -1296000;
    const CELL_CDMA_LATITUDE_MAX = 1296000;
    const CELL_CDMA_LONGITUDE_MIN = -2592000;
    const CELL_CDMA_LONGITUDE_MAX = 2592000;
    const CELL_CDMA_NID_MAX = 65535;
    const CELL_CDMA_SID_MAX = 32767;
    const CELL_TDSCDMA_CPID_MAX = 127;
    const CELL_TDSCDMA_UARFCN1_MIN = 9400;
    const CELL_TDSCDMA_UARFCN1_MAX = 9600;
    const CELL_TDSCDMA_UARFCN2_MIN = 10050;
    const CELL_TDSCDMA_UARFCN2_MAX = 10125;
    const CELL_TDSCDMA_UARFCN3_MIN = 11500;
    const CELL_TDSCDMA_UARFCN3_MAX = 12000;

    const RADIO_TECH_NOLOGY = [
        radio.RADIO_TECHNOLOGY_UNKNOWN,
        radio.RADIO_TECHNOLOGY_GSM,
        radio.RADIO_TECHNOLOGY_1XRTT,
        radio.RADIO_TECHNOLOGY_WCDMA,
        radio.RADIO_TECHNOLOGY_HSPA,
        radio.RADIO_TECHNOLOGY_HSPAP,
        radio.RADIO_TECHNOLOGY_TD_SCDMA,
        radio.RADIO_TECHNOLOGY_EVDO,
        radio.RADIO_TECHNOLOGY_EHRPD,
        radio.RADIO_TECHNOLOGY_LTE
    ];

    const NETWORK_TYPES = [
        radio.NETWORK_TYPE_UNKNOWN,
        radio.NETWORK_TYPE_GSM,
        radio.NETWORK_TYPE_CDMA,
        radio.NETWORK_TYPE_WCDMA,
        radio.NETWORK_TYPE_TDSCDMA,
        radio.NETWORK_TYPE_LTE,
        radio.NETWORK_TYPE_NR
    ];

    const NETWORK_SIGNAL = [0, 1, 2, 3, 4, 5];

    function sleep(timeout) {
        return new Promise((reslove, reject) => {
            setTimeout(() => {
                reslove();
            }, timeout);
        })
    }

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
            } else if (data[i].networkType === radio.NETWORK_TYPE_CDMA) {
                expect(data[i].data.latitude >= CELL_CDMA_LATITUDE_MIN &&
                    data[i].data.latitude <= CELL_CDMA_LATITUDE_MAX).assertTrue();
                expect(data[i].data.baseId >= CELL_INFO_MIN &&
                    data[i].data.baseId <= CELL_CDMA_BASEID_MAX).assertTrue();
                expect(data[i].data.longitude >= CELL_CDMA_LONGITUDE_MIN &&
                    data[i].data.longitude <= CELL_CDMA_LONGITUDE_MAX).assertTrue();
                expect(data[i].data.nid >= CELL_INFO_MIN && data[i].data.nid <= CELL_CDMA_NID_MAX).assertTrue();
                expect(data[i].data.sid >= CELL_INFO_MIN && data[i].data.sid <= CELL_CDMA_SID_MAX).assertTrue();
            } else if (data[i].networkType === radio.NETWORK_TYPE_TDSCDMA) {
                expect(data[i].data.lac >= CELL_INFO_MIN && data[i].data.lac <= CELL_LAC_TAC_MAX).assertTrue();
                expect(data[i].data.cellId >= CELL_INFO_MIN && data[i].data.cellId <= CELL_CELLID_MAX).assertTrue();
                expect((data[i].data.uarfcn >= CELL_TDSCDMA_UARFCN1_MIN &&
                    data[i].data.uarfcn <= CELL_TDSCDMA_UARFCN1_MAX) ||
                    (data[i].data.uarfcn >= CELL_TDSCDMA_UARFCN2_MIN &&
                        data[i].data.uarfcn <= CELL_TDSCDMA_UARFCN2_MAX) ||
                    (data[i].data.uarfcn >= CELL_TDSCDMA_UARFCN3_MIN &&
                        data[i].data.uarfcn <= CELL_TDSCDMA_UARFCN3_MAX)).assertTrue();
                expect(data[i].data.cpid >= CELL_INFO_MIN && data[i].data.cpid <= CELL_TDSCDMA_CPID_MAX).assertTrue();
                expect(data[i].data.mnc >= CELL_INFO_MIN && data[i].data.mnc <= CELL_MNC_MAX).assertTrue();
                expect(data[i].data.mcc).assertEqual(CELL_MCC);
            } else {
                expect().assertFail();
            }
        }
    }

    async function turnOnRadio() {
        let isOn = await radio.isRadioOn();
        if (!isOn) {
            await radio.turnOnRadio();
            await sleep(WAIT_TIME);
        }
    }

    beforeAll(async function () {
        await turnOnRadio();
        await radio.setPreferredNetwork(radio.PREFERRED_NETWORK_MODE_AUTO);
        await sleep(WAIT_TIME);
    })

    afterEach(async function () {
        await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
        await sleep(WAIT_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0100
     * @tc.name    Test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0100', 0, async function (done) {
        radio.getRadioTech(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0100 get fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getRadioTech_Async_0100 end data: ${JSON.stringify(data)}`);
            expect(RADIO_TECH_NOLOGY).assertContain(data.psRadioTech);
            expect(RADIO_TECH_NOLOGY).assertContain(data.csRadioTech)
            done();
        });
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0500
     * @tc.name    Simulated preferred network mode is 1XRTT and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0500 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getRadioTech_Async_0500 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0500 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_1XRTT);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_1XRTT)
                done();
            });
        })

    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0600
     * @tc.name    Simulated preferred network mode is TD_SCDMA and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0600 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getRadioTech_Async_0600 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0600 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_TD_SCDMA);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_TD_SCDMA);
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0700
     * @tc.name    Simulated preferred network mode is EVDO and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0700', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0700 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getRadioTech_Async_0700 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0700 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EVDO);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EVDO);
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0800
     * @tc.name    Simulated preferred network mode is EHRPD and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0800 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getRadioTech_Async_0800 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0800 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EHRPD);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EHRPD);
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_0900
     * @tc.name    Simulated preferred network mode is HSPA and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_0900', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0900 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getRadioTech_Async_0900 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_0900 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPA);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPA);
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Async_1000
     * @tc.name    Simulated preferred network mode is HSPAP and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Async_1000', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO_CDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_1000 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getRadioTech_Async_1000 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getRadioTech_Async_1000 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPAP);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPAP);
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0100
     * @tc.name    Test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0100', 0, async function (done) {
        radio.getRadioTech(SLOT_0).then(data => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0100 end data: ${JSON.stringify(data)}`);
            expect(RADIO_TECH_NOLOGY).assertContain(data.psRadioTech);
            expect(RADIO_TECH_NOLOGY).assertContain(data.csRadioTech);
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0100 fail: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0500
     * @tc.name    Simulated preferred network mode is 1XRTT and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0500 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_1XRTT);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_1XRTT);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0500 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0500 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0600
     * @tc.name    Simulated preferred network mode is TD_SCDMA and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0600 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_TD_SCDMA);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_TD_SCDMA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0600 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0600 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0700
     * @tc.name    Simulated preferred network mode is EVDO and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0700', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO).then(async () => {
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0700 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EVDO);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EVDO);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0700 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0700 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0800
     * @tc.name    Simulated preferred network mode is EHRPD and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_WCDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0800 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EHRPD);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_EHRPD);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0800 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0800 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_0900
     * @tc.name    Simulated preferred network mode is HSPA and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_0900', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE_WCDMA_GSM_EVDO_CDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0900 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPA);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPA);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0900 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_0900 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getRadioTech_Promise_1000
     * @tc.name    Simulated preferred network mode is HSPAP and test getRadioTech(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getRadioTech_Promise_1000', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_EVDO_CDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getRadioTech(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_1000 end data: ${JSON.stringify(data)}`);
                expect(data.psRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPAP);
                expect(data.csRadioTech).assertEqual(radio.RADIO_TECHNOLOGY_HSPAP);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getRadioTech_Promise_1000 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getRadioTech_Promise_1000 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Async_0800
     * @tc.name    Simulated residement is limited and test getNetworkState(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkState_Async_0800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_GSM, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getNetworkState_Async_0800 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getNetworkState(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getNetworkState_Async_0800 get fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getNetworkState_Async_0800 end data: ${JSON.stringify(data)}`);
                expect(data.longOperatorName.length).assertLarger(0);
                expect(data.shortOperatorName.length).assertLarger(0);
                expect(data.plmnNumeric.length).assertLarger(0);
                expect(data.regState).assertEqual(radio.REG_STATE_EMERGENCY_CALL_ONLY);
                expect(data.nsaState).assertEqual(radio.NSA_STATE_NOT_SUPPORT);
                expect(data.isRoaming === false).assertTrue();
                expect(data.isCaActive === false).assertTrue();
                expect(data.isEmergency === true).assertTrue();
                done();
            });
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getNetworkState_Promise_0800
     * @tc.name    Simulated residement is limited and test getNetworkState(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getNetworkState_Promise_0800', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA_GSM).then(async () => {
            await sleep(WAIT_TIME);
            radio.getNetworkState(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0800 end data: ${JSON.stringify(data)}`);
                expect(data.longOperatorName.length).assertLarger(0);
                expect(data.shortOperatorName.length).assertLarger(0);
                expect(data.plmnNumeric.length).assertLarger(0);
                expect(data.regState).assertEqual(radio.REG_STATE_EMERGENCY_CALL_ONLY);
                expect(data.nsaState).assertEqual(radio.NSA_STATE_NOT_SUPPORT);
                expect(data.isRoaming === false).assertTrue();
                expect(data.isCaActive === false).assertTrue();
                expect(data.isEmergency === true).assertTrue();
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0800 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getNetworkState_Promise_0800 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Async_0100
     * @tc.name    Test getSignalInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Async_0100', 0, async function (done) {
        radio.getSignalInformation(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0100 fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0100 end data: ${JSON.stringify(data)}`);
            expect(data.length).assertLarger(0);
            expect(NETWORK_TYPES).assertContain(data[0].signalType);
            expect(NETWORK_SIGNAL).assertContain(data[0].signalLevel);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Async_0500
     * @tc.name    Simulate the CDMA network type and test getSignalInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Async_0500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0500 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getSignalInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0500 fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0500 end data:${JSON.stringify(data)}`)
                expect(data.length).assertLarger(0);
                expect(data[0].signalType).assertEqual(radio.NETWORK_TYPE_CDMA);
                expect(data[0].signalLevel).assertEqual(5);
                done();
            });
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Async_0600
     * @tc.name    Simulate the TD_SCDMA network type and test getSignalInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Async_0600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0600 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getSignalInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0600 fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getSignalInformation_Async_0600 end data:${JSON.stringify(data)}`)
                expect(data.length).assertLarger(0);
                expect(data[0].signalType).assertEqual(radio.NETWORK_TYPE_TDSCDMA);
                expect(data[0].signalLevel).assertEqual(5);
                done();
            });
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Promise_0100
     * @tc.name    Test getSignalInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Promise_0100', 0, async function (done) {
        radio.getSignalInformation(SLOT_0).then(data => {
            console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0100 end data: ${JSON.stringify(data)}`);
            expect(data.length).assertLarger(0);
            expect(NETWORK_TYPES).assertContain(data[0].signalType);
            expect(NETWORK_SIGNAL).assertContain(data[0].signalLevel);
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0100 fail: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Promise_0500
     * @tc.name    Simulate the CDMA network type and test getSignalInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Promise_0500', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getSignalInformation(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0500  data:${JSON.stringify(data)}`);
                expect(data.length).assertLarger(0);
                expect(data[0].signalType).assertEqual(radio.NETWORK_TYPE_CDMA);
                expect(data[0].signalLevel).assertEqual(5);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0500 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0500 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getSignalInformation_Promise_0600
     * @tc.name    Simulate the TD_SCDMA network type and test getSignalInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getSignalInformation_Promise_0600', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getSignalInformation(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0600 data: ${JSON.stringify(data)}`);
                expect(data.length).assertLarger(0);
                expect(data[0].signalType).assertEqual(radio.NETWORK_TYPE_TDSCDMA);
                expect(data[0].signalLevel).assertEqual(5);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0600 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getSignalInformation_Promise_0600 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Async_0100
     * @tc.name    Test getCellInformation() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Async_0100', 0, async function (done) {
        radio.getCellInformation((err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getCellInformation_Async_0100 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getCellInformation_Async_0100 end data: ${JSON.stringify(data)}`);
            assertCellInformation(data);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Async_0300
     * @tc.name    Test getCellInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Async_0300', 0, async function (done) {
        radio.getCellInformation(SLOT_0, (err, data) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getCellInformation_Async_0300 fail: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`Telephony_NetworkSearch_getCellInformation_Async_0300 end data: ${JSON.stringify(data)}`);
            assertCellInformation(data);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Async_1000
     * @tc.name    Simulate the CDMA network type and test getCellInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Async_1000', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getCellInformation_Async_1000 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getCellInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getCellInformation_Async_1000 fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getCellInformation_Async_1000 end data:${JSON.stringify(data)}`);
                expect(data[0].networkType).assertEqual(radio.NETWORK_TYPE_CDMA);
                assertCellInformation(data);
                done();
            });
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Async_1100
     * @tc.name    Simulate the TD_SCDMA network type and test getCellInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Async_1100', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA, async (err) => {
            if (err) {
                console.log(`Telephony_NetworkSearch_getCellInformation_Async_1100 set fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
            await sleep(WAIT_TIME);
            radio.getCellInformation(SLOT_0, (err, data) => {
                if (err) {
                    console.log(`Telephony_NetworkSearch_getCellInformation_Async_1100 fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`Telephony_NetworkSearch_getCellInformation_Async_1100 end data:${JSON.stringify(data)}`);
                expect(data[0].networkType).assertEqual(radio.NETWORK_TYPE_TDSCDMA);
                assertCellInformation(data);
                done();
            });
        })
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Promise_0100
     * @tc.name    Test getCellInformation() to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Promise_0100', 0, async function (done) {
        radio.getCellInformation().then(data => {
            console.log(`Telephony_NetworkSearch_getCellInformation_Promise_0100 end data: ${JSON.stringify(data)}`);
            assertCellInformation(data);
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getCellInformation_Promise_0100 fail: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Promise_0300
     * @tc.name    Test getCellInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Promise_0300', 0, async function (done) {
        radio.getCellInformation(SLOT_0).then(data => {
            console.log(`Telephony_NetworkSearch_getCellInformation_Promise_0300 end data: ${JSON.stringify(data)}`);
            assertCellInformation(data);
            done();
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getCellInformation_Promise_0300 fail: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Promise_1000
     * @tc.name    Simulate the CDMA network type and test getCellInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Promise_1000', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_CDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getCellInformation(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getCellInformation_Promise_1000 end data:${JSON.stringify(data)}`)
                expect(data[0].networkType).assertEqual(radio.NETWORK_TYPE_CDMA);
                assertCellInformation(data);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getCellInformation_Promise_1000 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getCellInformation_Promise_1000 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_getCellInformation_Promise_1100
     * @tc.name    Simulate the TD_SCDMA network type and test getCellInformation(0) to check the callback result
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getCellInformation_Promise_1100', 0, async function (done) {
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_TDSCDMA).then(async () => {
            await sleep(WAIT_TIME);
            radio.getCellInformation(SLOT_0).then(data => {
                console.log(`Telephony_NetworkSearch_getCellInformation_Promise_1100 end data:${JSON.stringify(data)}`)
                expect(data[0].networkType).assertEqual(radio.NETWORK_TYPE_TDSCDMA);
                assertCellInformation(data);
                done();
            }).catch(err => {
                console.log(`Telephony_NetworkSearch_getCellInformation_Promise_1100 fail: ${err}`);
                expect().assertFail();
                done();
            })
        }).catch(err => {
            console.log(`Telephony_NetworkSearch_getCellInformation_Promise_1100 set fail err: ${err}`);
            expect().assertFail();
            done();
        })
    })
});