/**
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
import radio from "@ohos.telephony.radio";
import call from "@ohos.telephony.call";
import { describe, beforeAll, beforeEach, afterAll, it, expect } from "deccjsunit/index";

describe("Telephony_CellularDataPreferredCMCC", function () {
    const SLOT_0 = 0;
    const TIME_INTERVAL = 0.5;
    const TIME_3_SECONDS = 3;
    const TIME_NET_CHANGE = 10;
    const TIME_CALL_CHANGE = 6;
    const CMCC_NUMBER = "10086";

    let callId = 0;

    const DataConnectState = {
        DATA_STATE_UNKNOWN: -1,
        DATA_STATE_DISCONNECTED: 0,
        DATA_STATE_CONNECTING: 1,
        DATA_STATE_CONNECTED: 2,
        DATA_STATE_SUSPENDED: 3,
    };

    const PreferredNetworkMode = {
        PREFERRED_NETWORK_MODE_AUTO: 0,
        PREFERRED_NETWORK_MODE_GSM: 1,
        PREFERRED_NETWORK_MODE_WCDMA: 2,
        PREFERRED_NETWORK_MODE_LTE: 3,
    };

    const sleep = function (s) {
        return new Promise((resolve) => {
            setTimeout(() => {
                resolve();
            }, s * 1000);
        })
    };

    const stateChange = async function (caseName, expectState, timeout) {
        let data = null;
        let start = new Date().getTime();
        while (new Date().getTime() - start < timeout * 1000) {
            try {
                data = await cellular.getCellularDataState();
                if (data === expectState) {
                    break;
                }
            } catch (err) {
                console.log(`${caseName} getCellularDataState err: ${err.message}`);
                return null;
            }
            await sleep(TIME_INTERVAL);
        }
        console.log(`${caseName} getCellularDataState finish: ${data}`);
        return data;
    };

    beforeAll(async function () {
        call.on("callDetailsChange", (err, data) => {
            if (err) {
                console.log(`Telephony_CellularData beforeAll on err: ${err.message}`);
                expect().assertFail();
                return;
            }
            callId = data.callId;
            console.log(`Telephony_CellularData beforeAll on callId: ${data.callId} state: ${data.callState}`);
        })
    })

    afterAll(async function () {
        call.off("callDetailsChange", (err) => {
            if (err) {
                console.log(`Telephony_CellularData afterAll off err: ${err.message}`);
                expect().assertFail();
                return;
            }
            console.log("Telephony_CellularData afterAll off finish");
        })
        try {
            await radio.setPreferredNetwork(SLOT_0, PreferredNetworkMode.PREFERRED_NETWORK_MODE_AUTO);
            await sleep(TIME_3_SECONDS);
        } catch (err) {
            console.log(`Telephony_CellularData afterAll err: ${err.message}`);
            expect().assertFail();
        }
    })

    beforeEach(async function () {
        try {
            const data = await radio.getPreferredNetwork(SLOT_0);
            if (data !== PreferredNetworkMode.PREFERRED_NETWORK_MODE_AUTO) {
                await radio.setPreferredNetwork(SLOT_0, PreferredNetworkMode.PREFERRED_NETWORK_MODE_AUTO);
                await sleep(TIME_3_SECONDS);
            }
        } catch (err) {
            console.log(`Telephony_CellularData beforeEach err: ${err.message}`);
            expect().assertFail();
        }
    })

    /**
     * @tc.number   Telephony_CellularData_activationDeactivation_Async_0500
     * @tc.name     The network switches from LTE to GSM with async callback, verify the cellular data is
     *              disconnected and reconnected
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_activationDeactivation_Async_0500", 0, async function (done) {
        const CASE_NAME = "Telephony_CellularData_activationDeactivation_Async_0500";
        radio.setPreferredNetwork(SLOT_0, PreferredNetworkMode.PREFERRED_NETWORK_MODE_LTE, async function (err) {
            if (err) {
                console.log(`${CASE_NAME} setPreferredNetwork err: ${err.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${CASE_NAME} setPreferredNetwork finish`);
            await sleep(TIME_NET_CHANGE);

            cellular.enableCellularData(async function (err) {
                if (err) {
                    console.log(`${CASE_NAME} enableCellularData err: ${err.message}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${CASE_NAME} enableCellularData finish`);
                await sleep(TIME_3_SECONDS);

                cellular.getCellularDataState(async function (err, data) {
                    if (err) {
                        console.log(`${CASE_NAME} getCellularDataState err: ${err.message}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                    console.log(`${CASE_NAME} getCellularDataState finish: ${data}`);

                    radio.setPreferredNetwork(
                        SLOT_0,
                        PreferredNetworkMode.PREFERRED_NETWORK_MODE_GSM,
                        async function (err) {
                            if (err) {
                                console.log(`${CASE_NAME} setPreferredNetwork err: ${err.message}`);
                                expect().assertFail();
                                done();
                                return;
                            }
                            console.log(`${CASE_NAME} setPreferredNetwork finish`);

                            let data = await stateChange(
                                CASE_NAME,
                                DataConnectState.DATA_STATE_DISCONNECTED,
                                TIME_NET_CHANGE
                            );
                            expect(data === DataConnectState.DATA_STATE_DISCONNECTED).assertTrue();
                            data = await stateChange(CASE_NAME, DataConnectState.DATA_STATE_CONNECTED, TIME_3_SECONDS);
                            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                            done();
                        }
                    );
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_CellularData_activationDeactivation_Async_0600
     * @tc.name     In GSM network make a call and hang up with async callback, verify the change of cellular data state
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_activationDeactivation_Async_0600", 0, async function (done) {
        const CASE_NAME = "Telephony_CellularData_activationDeactivation_Async_0600";
        radio.setPreferredNetwork(SLOT_0, PreferredNetworkMode.PREFERRED_NETWORK_MODE_GSM, async function (err) {
            if (err) {
                console.log(`${CASE_NAME} setPreferredNetwork err: ${err.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(`${CASE_NAME} setPreferredNetwork finish`);
            await sleep(TIME_NET_CHANGE);

            cellular.enableCellularData(async function (err) {
                if (err) {
                    console.log(`${CASE_NAME} enableCellularData err: ${err.message}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${CASE_NAME} enableCellularData finish`);
                await sleep(TIME_3_SECONDS);

                cellular.getCellularDataState(async function (err, data) {
                    if (err) {
                        console.log(`${CASE_NAME} getCellularDataState err: ${err.message}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                    console.log(`${CASE_NAME} getCellularDataState finish: ${data}`);

                    call.dial(CMCC_NUMBER, async function (err) {
                        if (err) {
                            console.log(`${CASE_NAME} call err: ${err.message}`);
                            expect().assertFail();
                            done();
                            return;
                        }
                        console.log(`${CASE_NAME} call start`);
                        await sleep(TIME_3_SECONDS);

                        cellular.getCellularDataState(async function (err, data) {
                            if (err) {
                                console.log(`${CASE_NAME} getCellularDataState err: ${err.message}`);
                                expect().assertFail();
                                done();
                                return;
                            }
                            expect(data === DataConnectState.DATA_STATE_DISCONNECTED).assertTrue();
                            console.log(`${CASE_NAME} getCellularDataState finish: ${data}`);

                            call.hangup(callId, async function (err) {
                                if (err) {
                                    console.log(`${CASE_NAME} hangup err: ${err.message}`);
                                    expect().assertFail();
                                    done();
                                    return;
                                }
                                console.log(`${CASE_NAME} hangup finish`);

                                const data = await stateChange(
                                    CASE_NAME,
                                    DataConnectState.DATA_STATE_CONNECTED,
                                    TIME_CALL_CHANGE
                                );
                                expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
                                done();
                            })
                        })
                    })
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_CellularData_activationDeactivation_Promise_0500
     * @tc.name     The network switches from LTE to GSM with promise, verify the cellular data is
     *              disconnected and reconnected
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_activationDeactivation_Promise_0500", 0, async function (done) {
        const CASE_NAME = "Telephony_CellularData_activationDeactivation_Promise_0500";
        try {
            await radio.setPreferredNetwork(SLOT_0, PreferredNetworkMode.PREFERRED_NETWORK_MODE_LTE);
            console.log(`${CASE_NAME} setPreferredNetwork finish`);
        } catch (err) {
            console.log(`${CASE_NAME} setPreferredNetwork err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(TIME_NET_CHANGE);

        try {
            await cellular.enableCellularData();
            console.log(`${CASE_NAME} enableCellularData finish`);
        } catch (err) {
            console.log(`${CASE_NAME} enableCellularData err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(TIME_3_SECONDS);

        try {
            const data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log(`${CASE_NAME} getCellularDataState finish: ${data}`);
        } catch (err) {
            console.log(`${CASE_NAME} getCellularDataState err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }

        try {
            await radio.setPreferredNetwork(SLOT_0, PreferredNetworkMode.PREFERRED_NETWORK_MODE_GSM);
            console.log(`${CASE_NAME} setPreferredNetwork finish`);
        } catch (err) {
            console.log(`${CASE_NAME} setPreferredNetwork err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }

        let data = await stateChange(CASE_NAME, DataConnectState.DATA_STATE_DISCONNECTED, TIME_NET_CHANGE);
        expect(data === DataConnectState.DATA_STATE_DISCONNECTED).assertTrue();
        data = await stateChange(CASE_NAME, DataConnectState.DATA_STATE_CONNECTED, TIME_3_SECONDS);
        expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
        done();
    })

    /**
     * @tc.number   Telephony_CellularData_activationDeactivation_Promise_0600
     * @tc.name     In GSM network make a call and hang up with promise, verify the change of cellular data state
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_activationDeactivation_Promise_0600", 0, async function (done) {
        const CASE_NAME = "Telephony_CellularData_activationDeactivation_Promise_0600";
        try {
            await radio.setPreferredNetwork(SLOT_0, PreferredNetworkMode.PREFERRED_NETWORK_MODE_GSM);
            console.log(`${CASE_NAME} setPreferredNetwork finish`);
        } catch (err) {
            console.log(`${CASE_NAME} setPreferredNetwork err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(TIME_NET_CHANGE);

        try {
            await cellular.enableCellularData();
            console.log(`${CASE_NAME} enableCellularData finish`);
        } catch (err) {
            console.log(`${CASE_NAME} enableCellularData err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(TIME_3_SECONDS);

        try {
            const data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
            console.log(`${CASE_NAME} getCellularDataState finish: ${data}`);
        } catch (err) {
            console.log(`${CASE_NAME} getCellularDataState err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }

        try {
            await call.dial(CMCC_NUMBER);
            console.log(`${CASE_NAME} call start`);
        } catch (err) {
            console.log(`${CASE_NAME} call err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }
        await sleep(TIME_3_SECONDS);

        try {
            const data = await cellular.getCellularDataState();
            expect(data === DataConnectState.DATA_STATE_DISCONNECTED).assertTrue();
            console.log(`${CASE_NAME} getCellularDataState finish: ${data}`);
        } catch (err) {
            console.log(`${CASE_NAME} getCellularDataState err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }

        try {
            await call.hangup(callId);
            console.log(`${CASE_NAME} hangup finish`);
        } catch (err) {
            console.log(`${CASE_NAME} hangup err: ${err.message}`);
            expect().assertFail();
            done();
            return;
        }

        const data = await stateChange(CASE_NAME, DataConnectState.DATA_STATE_CONNECTED, TIME_CALL_CHANGE);
        expect(data === DataConnectState.DATA_STATE_CONNECTED).assertTrue();
        done();
    })
})
