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
import call from '@ohos.telephony.call';
import { describe, beforeAll, afterAll, it, expect } from "deccjsunit/index";

const Time = 2000;
const Radio_Time = 10000;
const SLOT_0 = 0;
var RadioinItialState = true;
var DatainItialState = true;
var callId = 0;
const CUCC_CALLMANAGER_TEST_PHONY_NUMBER = "10010";

describe("CellularDataDialCUCC", function () {

    const sleep = (time) => {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time);
        })
    };

    beforeAll(async function () {
        radio.getPreferredNetworkMode(SLOT_0, (err,data) => {
            if(err){
                console.log("Telephony_CellularData_getPreferredNetworkMode_beforeAll fail");
                return;
            }
            console.log("Telephony_CellularData_getPreferredNetworkMode_beforeAll finish");
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
        call.on('callDetailsChange', (err, callStateInfo) => {
            if (err) {
                expect().assertFail();
                console.log('Telephony_CallManager_on_Async fail err = ' + err);
                return;
            }
            console.log('Telephony_CallManager_callDetailsChange: ' + JSON.stringify(callStateInfo));
            callId = callStateInfo.callId;
        })
    })

    afterAll(async function () {
        call.off('callDetailsChange', (err) => {
            if (err) {
                expect().assertFail();
                console.log('Telephony_CallManager_off_Async fail err = ' + err);
            }
        })
        radio.setPreferredNetwork(SLOT_0, RadioinItialState, async(err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_setPreferredNetwork_afterAll setPreferredNetwork fail");
                return;
            }
            console.log("Telephony_CellularData_setPreferredNetwork_afterAll setPreferredNetwork finish");
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
     * @tc.number   Telephony_CellularData_ActivationDeactivation_0600
     * @tc.name     Call the enableCellularData interface and then call the isCellularDataEnabled interface
     *              The result is true
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_ActivationDeactivation_0600", 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await cellular.enableCellularData();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_0600 fail");
            done();
            return;
        }
        sleep(Time);
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA, async(err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_ActivationDeactivation_0600 setPreferredNetwork fail");
                done();
                return;
            }
            await sleep(Radio_Time);
            console.log("Telephony_CellularData_ActivationDeactivation_0600 setPreferredNetwork finish");
            cellular.enableCellularData(async(err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_ActivationDeactivation_0600 enableCellularData fail");
                    done();
                    return;
                }
                console.log("Telephony_CellularData_ActivationDeactivation_0600 enableCellularData finish");
                await sleep(Time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_ActivationDeactivation_0600 getCellularDataState fail");
                        done();
                        return;
                    }
                    expect(data === cellular.DATA_STATE_CONNECTED).assertTrue();
                    console.log(
                        "Telephony_CellularData_ActivationDeactivation_0600 getCellularDataState finish");
                    call.dial(CUCC_CALLMANAGER_TEST_PHONY_NUMBER, (err, data) => {
                        if (err) {
                            console.log('Telephony_CellularData_ActivationDeactivation_0600 dial fail' + err);
                            expect().assertFail();
                            done();
                            return;
                        }
                        expect(data).assertTrue();
                        console.log('Telephony_CellularData_ActivationDeactivation_0600 dial finish data = ' + data);
                        cellular.getCellularDataState((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_ActivationDeactivation_0600 getCellularDataState fail");
                                done();
                                return;
                            }
                            expect(data === cellular.DATA_STATE_DISCONNECTED).assertTrue();
                            console.log(
                                "Telephony_CellularData_ActivationDeactivation_0600 hangup getCellularDataState finish");
                            call.hangup(callId, (err) => {
                                if (err) {
                                    expect().assertFail();
                                    console.log('Telephony_CellularData_ActivationDeactivation_0600 hangup fail err  = ' + err);
                                    return;
                                }
                                console.log('Telephony_CallManager_hangup_Async finish');
                                cellular.getCellularDataState((err, data) => {
                                    if (err) {
                                        expect().assertFail();
                                        console.log(
                                            "Telephony_CellularData_ActivationDeactivation_0600 getCellularDataState fail");
                                        done();
                                        return;
                                    }
                                    expect(data === cellular.DATA_STATE_CONNECTED).assertTrue();
                                    console.log(
                                        "Telephony_CellularData_ActivationDeactivation_0600 getCellularDataState finish");
                                    done();
                                })
                            })
                        })
                    })
                })
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_ActivationDeactivation_0800
     * @tc.name     Call the enableCellularData interface and then call the isCellularDataEnabled interface
     *              The result is true
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_ActivationDeactivation_0800", 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await cellular.enableCellularData();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_enableCellularData_Promise_0200 fail");
            done();
            return;
        }
        sleep(Time);
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE, async(err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_ActivationDeactivation_0800 setPreferredNetwork fail");
                done();
                return;
            }
            await sleep(Radio_Time);
            console.log("Telephony_CellularData_ActivationDeactivation_0800 setPreferredNetwork finish");
            cellular.enableCellularData(async(err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_ActivationDeactivation_0800 enableCellularData fail");
                    done();
                    return;
                }
                console.log("Telephony_CellularData_ActivationDeactivation_0800 enableCellularData finish");
                await sleep(Time);
                cellular.getCellularDataState((err, data) => {
                    if (err) {
                        expect().assertFail();
                        console.log("Telephony_CellularData_ActivationDeactivation_0800 getCellularDataState fail");
                        done();
                        return;
                    }
                    expect(data === cellular.DATA_STATE_CONNECTED).assertTrue();
                    console.log(
                        "Telephony_CellularData_ActivationDeactivation_0800 getCellularDataState finish");
                    call.dial(CUCC_CALLMANAGER_TEST_PHONY_NUMBER, (err, data) => {
                        if (err) {
                            console.log('Telephony_CellularData_ActivationDeactivation_0800 dial fail' + err);
                            expect().assertFail();
                            done();
                            return;
                        }
                        expect(data).assertTrue();
                        console.log('Telephony_CellularData_ActivationDeactivation_0800 dial finish data = ' + data);
                        cellular.getCellularDataState((err, data) => {
                            if (err) {
                                expect().assertFail();
                                console.log(
                                    "Telephony_CellularData_ActivationDeactivation_0800 getCellularDataState fail");
                                done();
                                return;
                            }
                            expect(data === cellular.DATA_STATE_CONNECTED).assertTrue();
                            console.log(
                                "Telephony_CellularData_ActivationDeactivation_0800 getCellularDataState finish");
                            call.hangup(callId, (err) => {
                                if (err) {
                                    expect().assertFail();
                                    console.log('Telephony_CellularData_ActivationDeactivation_0800 hangup fail err  = ' + err);
                                    return;
                                }
                                console.log('Telephony_CellularData_ActivationDeactivation_0800 hangup finish');
                                cellular.getCellularDataState((err, data) => {
                                    if (err) {
                                        expect().assertFail();
                                        console.log(
                                            "Telephony_CellularData_ActivationDeactivation_0800 getCellularDataState fail");
                                        done();
                                        return;
                                    }
                                    expect(data === cellular.DATA_STATE_CONNECTED).assertTrue();
                                    console.log(
                                        "Telephony_CellularData_ActivationDeactivation_0800 getCellularDataState finish");
                                    done();
                                })
                            })
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
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await cellular.enableCellularData();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_enableCellularData_Promise_0200 fail");
            done();
            return;
        }
        sleep(Time);
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_WCDMA);
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set fail err: ${err}`);
            expect().assertFail();
            return;
        }
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
            var data = await call.dial(CUCC_CALLMANAGER_TEST_PHONY_NUMBER);
            expect(data).assertTrue();
            console.log('Telephony_CallManager_dial_Promise_1100 finish data = ' + data);
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_1100 fail err = ' + err);
            expect().assertFail();
            done();
            return;
        }
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 finish");
            expect(result === cellular.DATA_STATE_DISCONNECTED).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 fail");
            done();
        }
        try {
            var data = await call.hangup(callId);
            console.log('Telephony_CallManager_dial_Promise_1100 finish');
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_1100 fail err = ' + err);
            expect().assertFail();
            done();
            return;
        }
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 finish");
            expect(result === cellular.DATA_STATE_CONNECTED).assertTrue();
            done();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 fail");
            done();
        }
    })

    /*
     * @tc.number   Telephony_CellularData_ActivationDeactivation_Promise_0100
     * @tc.name     Call the enableCellularData interface, call the getCellularDataState interface,
     *              and get the result 1 or 2
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_ActivationDeactivation_Promise_0100", 0, async function (done) {
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_AUTO);
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set fail err: ${err}`);
            expect().assertFail();
            return;
        }
        try {
            await cellular.enableCellularData();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_enableCellularData_Promise_0200 fail");
            done();
            return;
        }
        sleep(Time);
        try {
            await radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_LTE);
            console.log('Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set success');
        } catch (err) {
            console.log(`Telephony_NetworkSearch_getPreferredNetwork_Async_0100 set fail err: ${err}`);
            expect().assertFail();
            return;
        }
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
            var data = await call.dial(CUCC_CALLMANAGER_TEST_PHONY_NUMBER);
            expect(data).assertTrue();
            console.log('Telephony_CallManager_dial_Promise_1100 finish data = ' + data);
        } catch (err) {
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 dail fail");
            expect().assertFail();
            done();
            return;
        }
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 getCellularDataState finish");
            expect(result === cellular.DATA_STATE_CONNECTED).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 getCellularDataState fail");
            done();
        }
        try {
            var data = await call.hangup(callId);
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 hangup finish");
        } catch (err) {
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 hangup fail");
            expect().assertFail();
            done();
            return;
        }
        try {
            let result = await cellular.getCellularDataState();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 getCellularDataState finish");
            expect(result === cellular.DATA_STATE_CONNECTED).assertTrue();
            done();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_ActivationDeactivation_Promise_0100 getCellularDataState fail");
            done();
        }
    })
})
