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
import { describe, beforeAll, beforeEach, afterAll, it, expect } from "deccjsunit/index";

var inItialState = false;
const time = 2000;
const TEST_RUN_TIME = 1000;

describe("TelephonyCellularDataReliability", function () {
    const sleep = (time) => {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time);
        })
    };

    beforeAll(function () {
        cellular.isCellularDataEnabled((err, data) => {
            if (err) {
                console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll fail");
                return;
            }
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll finish");
            inItialState = data;
        })
    })

    beforeEach(function () {
        cellular.disableCellularData(async(err) => {
            if (err) {
                console.log("Telephony_CellularData_isCellularDataEnabled_beforeEach_disableCellularData fail");
                return;
            }
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeEach_disableCellularData finish");
            await sleep(time);
        })
    })

    afterAll(function () {
        if (inItialState === true) {
            cellular.enableCellularData((err) => {
                if (err) {
                    console.log("Telephony_CellularData_isCellularDataEnabled_enableCellularData fail");
                    return;
                }
                console.log("Telephony_CellularData_isCellularDataEnabled_enableCellularData finish");
            })
        } else {
            cellular.disableCellularData((err) => {
                if (err) {
                    console.log("Telephony_CellularData_isCellularDataEnabled_disableCellularData fail");
                    return;
                }
                console.log("Telephony_CellularData_isCellularDataEnabled_disableCellularData finish");
            })
        }
    })

    /*
     * @tc.number   Telephony_CellularData_isCellularDataEnabled_Async_0300
     * @tc.name     Loop through the isCellularDataEnabled() interface 1000 times to see the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_isCellularDataEnabled_Async_0300", 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done();
                console.log("Telephony_CellularData_isCellularDataEnabled_Async_0300 finish");
                return;
            }
            cellular.isCellularDataEnabled((err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_isCellularDataEnabled_Async_0300 fail");
                    done();
                    return;
                }
                expect(data === false).assertTrue();
                Recursive(n - 1);
            })
        }
        Recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_isCellularDataEnabled_Promise_0300
     * @tc.name     Loop through the isCellularDataEnabled() interface 1000 times to see the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_isCellularDataEnabled_Promise_0300", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await cellular.isCellularDataEnabled();
                expect(data === false).assertTrue();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_isCellularDataEnabled_Promise_0300 fail");
                done();
                return;
            }
        }
        console.log("Telephony_CellularData_isCellularDataEnabled_Promise_0300 finish");
        done();
    })

    /*
     * @tc.number   Telephony_CellularData_getCellularDataState_Async_0300
     * @tc.name     Loop through the getCellularDataState() interface 1000 times to see the result of the callback
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_getCellularDataState_Async_0300", 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done();
                console.log("Telephony_CellularData_getCellularDataState_Async_0300 finish");
                return;
            }
            cellular.getCellularDataState((err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_getCellularDataState_Async_0300 fail");
                    done();
                    return;
                }
                expect(data === cellular.DATA_STATE_DISCONNECTED).assertTrue();
                Recursive(n - 1);
            })
        }
        Recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_getCellularDataState_Promise_0300
     * @tc.name     Loop through the getCellularDataState() interface 1000 times to see the result (promise)
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_getCellularDataState_Promise_0300", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await cellular.getCellularDataState();
                expect(data === cellular.DATA_STATE_DISCONNECTED).assertTrue();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_getCellularDataState_Promise_0300 fail");
                done();
                break;
            }
        }
        console.log("Telephony_CellularData_getCellularDataState_Promise_0300 finish");
        done();
    })

    /*
     * @tc.number   Telephony_CellularData_enableCellularData_Async_0300
     * @tc.name     Loop through enableCellularData()1000 times to see the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_enableCellularData_Async_0300", 0, function (done) {
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_CellularData_enableCellularData_Async_0300 enableCellularData finish");
                done();
                return;
            }
            cellular.enableCellularData((err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_enableCellularData_Async_0300 enableCellularData fail");
                    done();
                    return;
                }
                Recursive(n - 1);
            })
        }
        Recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_enableCellularData_Promise_0300
     * @tc.name     Loop through enableCellularData()1000 times to see the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_enableCellularData_Promise_0300", 0,async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.enableCellularData();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_enableCellularData_Promise_0300 fail");
                done();
                return;
            }
        }
        done();
        console.log("Telephony_CellularData_enableCellularData_Promise_0300 finish");
    })

    /*
     * @tc.number   Telephony_CellularData_disableCellularData_Async_0300
     * @tc.name     Loop through the disableCellularData() interface 1000 times to see the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_disableCellularData_Async_0300", 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_CellularData_disableCellularData_Async_0300 disableCellularData finish");
                done();
                return;
            }
            cellular.disableCellularData((err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_disableCellularData_Async_0300 disableCellularData fail");
                    done();
                    return;
                }
                Recursive(n - 1);
            })
        }
        Recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_disableCellularData_Promise_0300
     * @tc.name     Loop through the disableCellularData() interface 1000 times to see the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_disableCellularData_Promise_0300", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.disableCellularData();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_disableCellularData_Promise_0300 fail");
                done();
                return;
            }
        }
        done();
        console.log("Telephony_CellularData_disableCellularData_Promise_0300 finish");
    })
})