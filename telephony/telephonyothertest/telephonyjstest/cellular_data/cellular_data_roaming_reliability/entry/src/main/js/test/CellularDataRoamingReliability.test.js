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
import { describe, it, expect } from "deccjsunit/index";

const SLOT_ID = 0;
const TEST_RUN_TIME = 1000;

describe("TelephonyCellularDataRoamingReliability", function () {

    /*
     * @tc.number   Telephony_CellularData_enableCellularDataRoaming_Async_0400
     * @tc.name     Cycle call interface enableCellularDataRoaming (1000 times), all normal into the parameter, to check
     *              the correction results
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_enableCellularDataRoaming_Async_0400", 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                console.log("Telephony_CellularData_enableCellularDataRoaming_Async_0400 enableCellularData finish");
                return;
            }
            cellular.enableCellularDataRoaming(SLOT_ID, (err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_enableCellularDataRoaming_Async_0400 enableCellularData fail");
                    done();
                    return;
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
        cellular.disableCellularDataRoaming(SLOT_ID, (err) => {
            if (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_enableCellularDataRoaming_Async_0400 disableCellularDataRoaming fail"
                );
                done();
                return;
            }
            done();
            console.log(
                "Telephony_CellularData_enableCellularDataRoaming_Async_0400 disableCellularDataRoaming finish"
            );
        })
    })

    /*
     * @tc.number   Telephony_CellularData_disableCellularDataRoaming_Async_0400
     * @tc.name     Cycle call disableCellularDataRoaming () interface 1000 times, all normal into, see return the
     *              result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_disableCellularDataRoaming_Async_0400", 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                console.log(
                    "Telephony_CellularData_disableCellularDataRoaming_Async_0400 disableCellularDataRoaming finish"
                );
                return;
            }
            cellular.disableCellularDataRoaming(SLOT_ID, (err) => {
                if (err) {
                    expect().assertFail();
                    console.log(
                        "Telephony_CellularData_disableCellularDataRoaming_Async_0400 disableCellularDataRoaming fail"
                    );
                    done();
                    return;
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_isCellularDataRoamingEnabled_Async_0400
     * @tc.name     Cycle interface isCellularDataRoamingEnabled (1000 times), all normal into, see return the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_isCellularDataRoamingEnabled_Async_0400", 0, async function (done) {
        function recursive(n) {
            if (n <= 0) {
                done();
                console.log("Telephony_CellularData_isCellularDataRoamingEnabled_Async_0400 finish");
                return;
            }
            cellular.isCellularDataRoamingEnabled(SLOT_ID, (err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_isCellularDataRoamingEnabled_Async_0400 fail");
                    done();
                    return;
                }
                recursive(n - 1);
                expect(data === false).assertTrue();
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_enableCellularDataRoaming_Promise_0400
     * @tc.name     Cycle call interface enableCellularDataRoaming (1000 times), all normal into the parameter, to check
     *              the correction results
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_enableCellularDataRoaming_Promise_0400", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.enableCellularDataRoaming(SLOT_ID);
            } catch (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_enableCellularDataRoaming_Promise_0400 enableCellularDataRoaming fail");
                done();
                return;
            }
        }
        console.log(
            "Telephony_CellularData_enableCellularDataRoaming_Promise_0400 enableCellularDataRoaming finish"
        );
        try {
            await cellular.disableCellularDataRoaming(SLOT_ID);
        } catch (err) {
            expect().assertFail();
            console.log(
                "Telephony_CellularData_enableCellularDataRoaming_Promise_0400 disableCellularDataRoaming fail");
            done();
            return;
        }
        done();
        console.log(
            "Telephony_CellularData_enableCellularDataRoaming_Promise_0400 disableCellularDataRoaming finish"
        );
    })

    /*
     * @tc.number   Telephony_CellularData_disableCellularDataRoaming_Promise_0400
     * @tc.name     Cycle call disableCellularDataRoaming () interface 1000 times, all normal into, see return the
     *              result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_disableCellularDataRoaming_Promise_0400", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.disableCellularDataRoaming(SLOT_ID);
            } catch (err) {
                expect().assertFail();
                console.log(
                    "Telephony_CellularData_disableCellularDataRoaming_Promise_0400 disableCellularDataRoaming fail");
                done();
                return;
            }
        }
        done();
        console.log(
            "Telephony_CellularData_disableCellularDataRoaming_Promise_0400 disableCellularDataRoaming finish"
        );
    })

    /*
     * @tc.number   Telephony_CellularData_isCellularDataRoamingEnabled_Promise_0400
     * @tc.name     Cycle interface isCellularDataRoamingEnabled (1000 times), all normal into, see return the result
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_isCellularDataRoamingEnabled_Promise_0400", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await cellular.isCellularDataRoamingEnabled(SLOT_ID);
                expect(data === false).assertTrue();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_isCellularDataRoamingEnabled_Promise_0400 fail");
                done();
                return;
            }
        }
        done();
        console.log("Telephony_CellularData_isCellularDataRoamingEnabled_Promise_0400 finish");
    })
})
