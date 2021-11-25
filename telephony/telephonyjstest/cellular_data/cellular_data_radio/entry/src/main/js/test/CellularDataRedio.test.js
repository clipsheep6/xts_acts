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
var RadioinItialState = 0;
var DatainItialState = true;
var callId = 0;
const CMCC_CALLMANAGER_TEST_PHONY_NUMBER = "16620868207";

describe("CellularDataDialCMCC", function () {
    const sleep = (time) => {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time);
        })
    };

    beforeAll(function () {
//        radio.isRadioOn((err,data) => {
//            if(err){
//                console.log("Telephony_CellularData_isRadioOn_beforeAll fail");
//                return;
//            }
//            console.log("Telephony_CellularData_isRadioOn_beforeAll finish");
//            RadioinItialState = data;
//        })
        cellular.isCellularDataEnabled((err, data) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll fail");
                return;
            }
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll finish");
            DatainItialState = data;
        })
//        call.on('callDetailsChange', (err, callStateInfo) => {
//            if (err) {
//                expect().assertFail();
//                console.log('Telephony_CallManager_on_Async fail err = ' + err);
//                return;
//            }
//            console.log('Telephony_CallManager_callDetailsChange: ' + JSON.stringify(callStateInfo));
//            callId = callStateInfo.callId;
//            console.log('Telephony_CellularData_callID ' + callId);
//        })
    })

    afterAll(function () {
//        call.off('callDetailsChange', (err) => {
//            if (err) {
//                expect().assertFail();
//                console.log('Telephony_CallManager_off_Async fail err = ' + err);
//            }
//        })
//        radio.isRadioOn((err,data) => {
//            if(err){
//                console.log("Telephony_CellularData_isCellularDataEnabled_afterAll fail");
//                return;
//            }
//            console.log("Telephony_CellularData_isCellularDataEnabled_afterAll finish");
//            if(data === RadioinItialState) {
//                return;
//            } else if (RadioinItialState) {
//                radio.turnOffRadio(async(err) => {
//                    if (err) {
//                        expect().assertFail();
//                        console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOffRadio fail");
//                        return;
//                    }
//                    await sleep(Radio_Time);
//                    console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOffRadio finish");
//                })
//            } else {
//                radio.turnOffRadio(async(err) => {
//                    if (err) {
//                        expect().assertFail();
//                        console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOnRadio fail");
//                        return;
//                    }
//                    await sleep(Radio_Time);
//                    console.log("Telephony_CellularData_isCellularDataEnabled_afterAll turnOnRadio finish");
//                })
//            }
//        })
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
            console.log('Telephony_CellularData_ActivationDeactivation_0600 set success');
        } catch (err) {
            console.log(`Telephony_CellularData_ActivationDeactivation_0600 set fail err: ${err}`);
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
        radio.setPreferredNetwork(SLOT_0, radio.PREFERRED_NETWORK_MODE_GSM, async(err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_ActivationDeactivation_0600 setPreferredNetwork fail");
                done();
                return;
            }
            await sleep(Radio_Time);
            console.log("Telephony_CellularData_ActivationDeactivation_0600 setPreferredNetwork finish");
            radio.getNetworkSelectionMode(SLOT_0, (err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_ActivationDeactivation_0600 getNetworkSelectionMode fail");
                    done();
                    return;
                }
                console.log("Telephony_CellularData_ActivationDeactivation_0600 getNetworkSelectionMode finish" + data);
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
                        call.dial(CMCC_CALLMANAGER_TEST_PHONY_NUMBER, async (err, data) => {
                            if (err) {
                                console.log('Telephony_CellularData_ActivationDeactivation_0600 dial fail' + err);
                                expect().assertFail();
                                done();
                                return;
                            }
                            expect(data).assertTrue();
                            console.log('Telephony_CellularData_ActivationDeactivation_0600 dial finish data = ' + data);
                            await sleep(15000);
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
                                    "Telephony_CellularData_ActivationDeactivation_0600 getCellularDataState finish" + data);
                                //                            call.hangup(callId, (err) => {
                                //                                if (err) {
                                //                                    expect().assertFail();
                                //                                    console.log('Telephony_CellularData_ActivationDeactivation_0600 hangup fail err  = ' + err);
                                //                                    return;
                                //                                }
                                //                                console.log('Telephony_CallManager_hangup_Async finish');
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
                                        "Telephony_CellularData_ActivationDeactivation_0600 getCellularDataState finish" + data);
                                    done();
                                })
                            })
                        })
                    })
                })
            })
        })
    })
})
