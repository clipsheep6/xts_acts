/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
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

import cellular from "@ohos.telephony.data";
import radio from '@ohos.telephony.radio';
import { describe, beforeAll, beforeEach, afterAll, it, expect } from "deccjsunit/index";

const Time = 2000;
const Radio_Time = 10000;
var RadioinItialState = true;
var DatainItialState = true;

describe("TelephonyCellularData", function () {
    const sleep = (time) => {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time);
        })
    };

    beforeAll(function () {
        radio.isRadioOn((err,data) => {
            if(err){
                console.log("Telephony_CellularData_isRadioOn_beforeAll fail");
                return;
            }
            console.log("Telephony_CellularData_isRadioOn_beforeAll finish");
            RadioinItialState = data;
        })
        cellular.isCellularDataEnabled((err, data) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll fail");
                return;
            }
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll finish");
            DatainItialState = data;
        })
    })

    afterAll(function () {
        radio.isRadioOn((err,data) => {
            if(err){
                console.log("Telephony_CellularData_isCellularDataEnabled_afterAll fail");
                return;
            }
            console.log("Telephony_CellularData_isCellularDataEnabled_afterAll finish");
            if(data === RadioinItialState) {
                return;
            } else if (RadioinItialState) {
                radio.turnOffRadio(async(err) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOffRadio fail");
                        return;
                    }
                    await sleep(Radio_Time);
                    console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOffRadio finish");
                })
            } else {
                radio.turnOffRadio(async(err) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOnRadio fail");
                        return;
                    }
                    await sleep(Radio_Time);
                    console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOnRadio finish");
                })
            }
        })
        cellular.isCellularDataEnabled((err, data) => {
            if(err) {
                expect().assertFail();
                console.log("Telephony_CellularData_isCellularDataEnabled_afterAll fail");
                return;
            }
            console.log("Telephony_CellularData_isCellularDataEnabled_afterAll finish");
            if(data === DatainItialState)
            {
                return;
            } else if (DatainItialState) {
                cellular.enableCellularData(async (err) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_isCellularDataEnabled_afterAll enableCellularData fail");
                        return;
                    }
                    console.log("Telephony_CellularData_isCellularDataEnabled_afterAll enableCellularData finish");
                    await sleep(Time);
                })
            } else {
                cellular.disableCellularData(async (err) => {
                    if (err) {
                        console.log("Telephony_CellularData_isCellularDataEnabled_afterAll fail");
                        return;
                    }
                    console.log("Telephony_CellularData_isCellularDataEnabled_afterAll finish");
                    await sleep(Time);
                })
            }
        })
    })

    /*
     * @tc.number   Telephony_CellularData_ActivationDeactivation_0100
     * @tc.name     Call the enableCellularData interface and then call the isCellularDataEnabled interface.
     *              The result is true
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_ActivationDeactivation_0100", 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverRadioState fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.turnOnRadio(async(err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_ActivationDeactivation_0100 turnOnRadio fail");
                done();
                return;
            }
            await sleep(Radio_Time);
            console.log("Telephony_CellularData_ActivationDeactivation_0100 turnOnRadio finish");
            cellular.enableCellularData(async(err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_ActivationDeactivation_0100 enableCellularData fail");
                    done();
                    return;
                }
                console.log("Telephony_CellularData_ActivationDeactivation_0100 enableCellularData finish");
                await sleep(Time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_ActivationDeactivation_0100 getCellularDataState fail");
                        done();
                        return;
                    }
                    expect(data === cellular.DATA_STATE_CONNECTED).assertTrue();
                    console.log(
                        "Telephony_CellularData_ActivationDeactivation_0100 getCellularDataState finish");
                    radio.turnOffRadio(async(err) => {
                        if (err) {
                            expect().assertFail();
                            console.log("Telephony_CellularData_ActivationDeactivation_0100 turnOffRadio fail");
                            done();
                            return;
                        }
                        await sleep(Radio_Time);
                        console.log("Telephony_CellularData_ActivationDeactivation_0100 turnOffRadio finish");
                        cellular.getCellularDataState((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_ActivationDeactivation_0100 getCellularDataState fail");
                                done();
                                return;
                            }
                            expect(data === cellular.DATA_STATE_DISCONNECTED).assertTrue();
                            console.log(
                                "Telephony_CellularData_ActivationDeactivation_0100 getCellularDataState finish");
                            done();
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_ActivationDeactivation_0200
     * @tc.name     Call the enableCellularData interface and then call the isCellularDataEnabled interface.
     *              The result is true
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_ActivationDeactivation_0200", 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverRadioState fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        radio.turnOffRadio(async(err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_ActivationDeactivation_0200 turnOnRadio fail");
                done();
                return;
            }
            await sleep(Radio_Time);
            console.log("Telephony_CellularData_ActivationDeactivation_0200 turnOnRadio finish");
            cellular.enableCellularData(async(err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_ActivationDeactivation_0200 enableCellularData fail");
                    done();
                    return;
                }
                console.log("Telephony_CellularData_ActivationDeactivation_0200 enableCellularData finish");
                await sleep(Time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_ActivationDeactivation_0200 getCellularDataState fail");
                        done();
                        return;
                    }
                    expect(data === cellular.DATA_STATE_DISCONNECTED).assertTrue();
                    console.log(
                        "Telephony_CellularData_ActivationDeactivation_0200 getCellularDataState finish");
                    radio.turnOnRadio(async(err) => {
                        if (err) {
                            expect().assertFail();
                            console.log("Telephony_CellularData_ActivationDeactivation_0200 turnOffRadio fail");
                            done();
                            return;
                        }
                        await sleep(Radio_Time);
                        console.log("Telephony_CellularData_ActivationDeactivation_0200 turnOffRadio finish");
                        cellular.getCellularDataState((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_ActivationDeactivation_0200 getCellularDataState fail");
                                done();
                                return;
                            }
                            expect(data === cellular.DATA_STATE_CONNECTED).assertTrue();
                            console.log(
                                "Telephony_CellularData_ActivationDeactivation_0200 getCellularDataState finish");
                            done();
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_ActivationDeactivation_Promise_0100
     * @tc.name     Call the enableCellularData interface, call the getCellularDataState interface,
     *              and get the result 1 or 2
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_ActivationDeactivation_Promise_0100", 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverRadioState fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.turnOnRadio();
            console.log('Telephony_CellularData_ActivationDeactivation_Promise_0100 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_CellularData_ActivationDeactivation_Promise_0100 turnOffRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(Radio_Time);
        try {
            await cellular.enableCellularData();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 fail");
            done();
            return;
        }
        await sleep(Time);
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 finish");
            expect(result === cellular.DATA_STATE_CONNECTED).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 fail");
            done();
        }
        try {
            await radio.turnOffRadio();
            console.log('Telephony_CellularData_ActivationDeactivation_Promise_0100 turnOnRadio success');
        } catch (err) {
            console.log(`Telephony_CellularData_ActivationDeactivation_Promise_0100 turnOnRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(Radio_Time);
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 finish");
            expect(result === cellular.DATA_STATE_DISCONNECTED).assertTrue();
            done();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 fail");
            done();
        }
    })

    /*
     * @tc.number   Telephony_CellularData_ActivationDeactivation_Promise_0200
     * @tc.name     Call the enableCellularData interface, call the getCellularDataState interface,
     *              and get the result 1 or 2
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_ActivationDeactivation_Promise_0200", 0, async function (done) {
        try {
            await radio.turnOnRadio();
            console.log('Telephony_NetworkSearch_recoverRadioState success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_recoverRadioState fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        try {
            await radio.turnOffRadio();
            console.log('Telephony_CellularData_ActivationDeactivation_Promise_0200 turnOffRadio finish');
        } catch (err) {
            console.log(`Telephony_CellularData_ActivationDeactivation_Promise_0200 turnOffRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(Radio_Time);
        try {
            await cellular.enableCellularData();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0200 fail");
            done();
            return;
        }
        await sleep(Time);
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0200 finish");
            expect(result === cellular.DATA_STATE_DISCONNECTED).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0200 fail");
            done();
        }
        try {
            await radio.turnOnRadio();
            console.log('Telephony_CellularData_ActivationDeactivation_Promise_0200 turnOnRadio success');
        } catch (err) {
            console.log(`Telephony_CellularData_ActivationDeactivation_Promise_0200 turnOnRadio fail ${err}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(Radio_Time);
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0200 finish");
            expect(result === cellular.DATA_STATE_CONNECTED).assertTrue();
            done();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0200 fail");
            done();
        }
    })
})
