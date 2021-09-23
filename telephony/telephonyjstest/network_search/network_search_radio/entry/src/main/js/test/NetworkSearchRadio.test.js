/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import radio from '@ohos.telephony_radio';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

describe('NetworkSearchTest', function () {
    const SLOT_0 = 0;
    const SLOT_ID_ERR = -3;
    const ISO_COUNTRY_CODE = 'cn';
    const PLMN_SIZE = 5;

    async function RecoverRadioState() {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_RecoverRadioState success');
        } catch (err) {
            console.log('Telephony_NetworkSearch_RecoverRadioState fail : ' + err.message);
        }
    }

    beforeEach(async function () {
        await RecoverRadioState();
    });

    afterAll(async function () {
        //Initialize radio status after all test cases
        await RecoverRadioState();
        console.log('Telephony_NetworkSearch_RadioTest End!!!');
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Async_0100
     * @tc.name    Radio is off, test The Radio module is turned on and the Radio status is changed to 'true'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Async_0100', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOff fail : ' + err.message);
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOff finish');
                resolve();
            });
        }).catch((err) => {
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.turnOnRadio((err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOn fail : ' + err.message);
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOn finish');
                resolve();
            });
        }).catch((err) => {
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.isRadioOn((err, data) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 isOn fail : ' + err.message);
                    reject(err);
                }
                expect(data).assertTrue();
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 finish');
                done();
            });
        }).catch((err) => {
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Async_0200
     * @tc.name    Radio is on, test The Radio module is turned on and the Radio status is changed to 'true'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Async_0200', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOnRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn1 finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn1 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.turnOnRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn2 finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn2 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.isRadioOn((err, data) => {
                if (err) {
                    reject(err);
                }
                expect(data).assertTrue();
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 finish');
                done();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 isOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0100
     * @tc.name    Radio is on, test The Radio module is turned off and the Radio status is changed to 'false'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0100', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOnRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOn1 finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOff finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.isRadioOn((err, data) => {
                if (err) {
                    reject(err);
                }
                expect(data).assertEqual(false);
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 finish');
                resolve();
                done();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 isOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0200
     * @tc.name    Radio is off, test The Radio module is turned off and the Radio status is changed to 'false'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0200', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff1 finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff1 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff2 finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff2 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.isRadioOn((err, data) => {
                if (err) {
                    reject(err);
                }
                expect(data).assertEqual(false);
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 finish');
                done();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 isOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0500
     * @tc.name    Radio is off, test the getNetworkState() longOperatorName is null and shortOperatorName is null and
     *             plmnNumeric is null and regStatus is REG_STATE_EMERGENCY_CALL_ONLY and nsaState is NSA_STATE_NOT_SUPPORT and
     *             isRoaming is false and isCaActive is false and isEmergency is false
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0500', 0, async function (done) {
        let data = {};
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0500 turnOff finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0500 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.getNetworkState((err, networkState) => {
                if (err) {
                    reject(err);
                }
                data = networkState;
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0500 get data : ' + JSON.stringify(data));
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0500 get fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        expect(
            data.longOperatorName === undefined || data.longOperatorName === '' || data.longOperatorName === null
        ).assertTrue();
        expect(
            data.shortOperatorName === undefined || data.shortOperatorName === '' || data.shortOperatorName === null
        ).assertTrue();
        expect(data.plmnNumeric === undefined || data.plmnNumeric === '' || data.plmnNumeric === null).assertTrue();
        expect(data.regStatus === radio.REG_STATE_POWER_OFF).assertTrue();
        expect(data.nsaState === radio.NSA_STATE_NOT_SUPPORT).assertTrue();
        expect(data.isRoaming === false).assertTrue();
        expect(data.isCaActive === false).assertTrue();
        expect(data.isEmergency === false).assertTrue();
        console.log('Telephony_NetworkSearch_turnOffRadio_Async_0500 finish');
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0600
     * @tc.name    Radio is off, test the getSignalInformation() return the data length is 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0600', 0, async function (done) {
        let data = {};
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0600 turnOff finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0600 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.getSignalInformation(SLOT_0, (err, signalInformation) => {
                if (err) {
                    reject(err);
                }
                data = signalInformation;
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0600 get fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        expect(data != null && data != undefined).assertTrue();
        expect(data.length === 0).assertTrue();
        console.log('Telephony_NetworkSearch_turnOffRadio_Async_0600 finish');
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0700
     * @tc.name    Radio is off, test the getRadioTech() return the psRadioTech is RADIO_TECHNOLOGY_UNKNOWN and
     *             csRadioTech is RADIO_TECHNOLOGY_UNKNOWN
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0700', 0, async function (done) {
        let psRadio;
        let csRadio;
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0700 turnOff finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0700 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.getRadioTech(SLOT_0, (err, {psRadioTech,
                csRadioTech}) => {
                if (err) {
                    reject(err);
                }
                psRadio = psRadioTech;
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0700 get fail : ' + JSON.stringify(psRadioTech));
                csRadio = csRadioTech;
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0700 get fail : ' + JSON.stringify(csRadioTech));
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0700 get fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        expect(psRadio === radio.RADIO_TECHNOLOGY_UNKNOWN).assertTrue();
        expect(csRadio === radio.RADIO_TECHNOLOGY_UNKNOWN).assertTrue();
        console.log('Telephony_NetworkSearch_turnOffRadio_Async_0700 finish');
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Async_0100
     * @tc.name    Turn off Radio, input slotId parameter as 1, test isRadioOn() returns 'false'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Async_0100', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 turnOff finish');
                resolve();
                done();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.isRadioOn((err, resv) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 finish');
                expect(resv).assertEqual(false);
                resolve();
                done();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 isOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Async_0200
     * @tc.name    Turn on Radio, input slotId parameter as 1, test isRadioOn() returns 'true'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Async_0200', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOnRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 turnOn finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 turnOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.isRadioOn((err, resv) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 finish');
                expect(resv).assertTrue();
                resolve();
                done();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 isOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Promise_0100
     * @tc.name    Radio is off, test The Radio module is turned on and the Radio status is changed to 'true'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Promise_0100', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOff finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOn finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOn fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.isRadioOn();
            expect(data).assertTrue();
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOnRadio_Promise_0200
     * @tc.name    Radio is on, test The Radio module is turned on and the Radio status is changed to 'true'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Promise_0200', 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 turnOn finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 turnOn fail');
            expect().assertFail();
            done();
        }
        try {
            let data = await radio.isRadioOn();
            expect(data).assertTrue();
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0100
     * @tc.name    Radio is on, test The Radio module is turned off and the Radio status is changed to 'false'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0100', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 turnOff finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.isRadioOn();
            expect(data).assertEqual(false);
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0200
     * @tc.name    Radio is off, test The Radio module is turned off and the Radio status is changed to 'false'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0200', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff1 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff1 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff2 finish');
            done();
            return;
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff2 fail : ' + err.message);
            expect().assertFail();
            done();
        }
        try {
            let data = await radio.isRadioOn();
            expect(data).assertEqual(false);
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0500
     * @tc.name    Radio is off, test the getNetworkState() longOperatorName is null and shortOperatorName is null and
     *             plmnNumeric is null and regStatus is REG_STATE_EMERGENCY_CALL_ONLY and nsaState is NSA_STATE_NOT_SUPPORT and
     *             isRoaming is false and isCaActive is false and isEmergency is false
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0500', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0500 turnOff finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0500 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getNetworkState();
            expect(data != null && data != undefined).assertTrue();
            expect(
                data.longOperatorName === undefined || data.longOperatorName === '' || data.longOperatorName === null
            ).assertTrue();
            expect(
                data.shortOperatorName === undefined || data.shortOperatorName === '' || data.shortOperatorName === null
            ).assertTrue();
            expect(data.plmnNumeric === undefined || data.plmnNumeric === '' || data.plmnNumeric === null).assertTrue();
            expect(data.regStatus === radio.REG_STATE_POWER_OFF).assertTrue();
            expect(data.nsaState === radio.NSA_STATE_NOT_SUPPORT).assertTrue();
            expect(data.isRoaming === false).assertTrue();
            expect(data.isCaActive === false).assertTrue();
            expect(data.isEmergency === false).assertTrue();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0500 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0500 fail err: ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0600
     * @tc.name    Radio is off, test the getSignalInformation() return the data length is 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0600', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0600 turnOff finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0600 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getSignalInformation(SLOT_0);
            expect(data != null && data != undefined).assertTrue();
            expect(data.length === 0).assertTrue();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0600 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0600 fail err: ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0700
     * @tc.name    Radio is off, test the getRadioTech() return the psRadioTech is RADIO_TECHNOLOGY_UNKNOWN and
     *             csRadioTech is RADIO_TECHNOLOGY_UNKNOWN
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0700', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0700 turnOff finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0700 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getRadioTech(SLOT_0);
            expect(data != null && data != undefined).assertTrue();
            expect(data.psRadioTech === radio.RADIO_TECHNOLOGY_UNKNOWN).assertTrue();
            expect(data.csRadioTech === radio.RADIO_TECHNOLOGY_UNKNOWN).assertTrue();
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0700 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0700 fail err: ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Promise_0100
     * @tc.name    Turn off Radio, input slotId parameter as 1, test isRadioOn() returns 'false'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Promise_0100', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 turnOff finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.isRadioOn();
            expect(data).assertEqual(false);
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Promise_0200
     * @tc.name    Turn on Radio, input slotId parameter as 1, test isRadioOn() returns 'true'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Promise_0200', 0, async function (done) {
        try {
            let data = await radio.isRadioOn();
            expect(data).assertTrue();
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0200 finish');
        } catch (err) {
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0200 fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0500
     * @tc.name    Radio is off, test the getISOCountryCodeForNetwork() return the data is 'cn'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0500', 0, async function (done) {
        let data = {};
        await new Promise((resolve, reject) => {
            radio.turnOffRadio((err) => {
                if (err) {
                    reject(err);
                }
                console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0500 turnOff finish');
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0500 turnOff fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        await new Promise((resolve, reject) => {
            radio.getISOCountryCodeForNetwork(SLOT_0, (err, ISOCountry) => {
                if (err) {
                    reject(err);
                }
                data = ISOCountry;
                resolve();
            });
        }).catch((err) => {
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0500 get fail : ' + err.message);
            expect().assertFail();
            done();
            return;
        });
        expect(data === "" || data === undefined || data === null).assertTrue();
        console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Async_0100 finish : ' + data);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0500
     * @tc.name    Radio is off, test the getISOCountryCodeForNetwork() return the data is 'cn'
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0500', 0, async function (done) {
        try {
            await radio.turnOffRadio();
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0500 turnOff finish');
        } catch (err) {
            console.log(
                'Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0500 turnOff fail : ' + err.message
            );
            expect().assertFail();
            done();
            return;
        }
        try {
            let data = await radio.getISOCountryCodeForNetwork(SLOT_0);
            expect(data === "" || data === undefined || data === null).assertTrue();
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0500 finish : ' + data);
        } catch (err) {
            console.log('Telephony_NetworkSearch_getISOCountryCodeForNetwork_Promise_0500 fail err: ' + err.message);
            expect().assertFail();
            done();
            return;
        }
        done();
    });
});
