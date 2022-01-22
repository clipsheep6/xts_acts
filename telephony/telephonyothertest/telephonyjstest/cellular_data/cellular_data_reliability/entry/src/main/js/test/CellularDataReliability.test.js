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
import { describe, beforeAll, it, expect } from "deccjsunit/index";

const SLOT_ID = 0;
const TEST_RUN_TIME = 1000;

describe("TelephonyCellularDataReliability", function () {

    beforeAll(async function () {
        try {
            await cellular.setDefaultCellularDataSlotId(SLOT_ID);
            console.log("Telephony_CellularData_beforeAll setDefaultCellularDataSlotId finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_beforeAll setDefaultCellularDataSlotId fail");
        }
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0700
     * @tc.name     Loop through the setDefaultCellularDataSlotId() interface 1000 times to see the result
     * @tc.desc     Reliability test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0700", 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done();
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0700 finish");
                return;
            }
            cellular.setDefaultCellularDataSlotId(SLOT_ID, (err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0700  fail");
                    done();
                    return;
                }
                Recursive(n - 1);
            })
        }
        Recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0700
     * @tc.name     Loop through the setDefaultCellularDataSlotId() interface 1000 times to see the result
     * @tc.desc     Reliability test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0700", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.setDefaultCellularDataSlotId(SLOT_ID);
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0700 fail");
                done();
                return;
            }
        }
        console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0700 finish");
        done();
    })

    /*
     * @tc.number   Telephony_CellularData_getDefaultCellularDataSlotId_Async_0100
     * @tc.name     Loop through the getDefaultCellularDataSlotId() interface 1000 times to see the result of the callback
     * @tc.desc     Reliability test
     */
    it("Telephony_CellularData_getDefaultCellularDataSlotId_Async_0100", 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                done();
                console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Async_0100 finish");
                return;
            }
            cellular.getDefaultCellularDataSlotId((err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Async_0100  fail");
                    done();
                    return;
                }
                expect(data === SLOT_ID).assertTrue();
                Recursive(n - 1);
            })
        }
        Recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0100
     * @tc.name     Loop through the getDefaultCellularDataSlotId() interface 1000 times to see the result (promise)
     * @tc.desc     Reliability test
     */
    it("Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0100", 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await cellular.getDefaultCellularDataSlotId();
                expect(data === SLOT_ID).assertTrue();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0100 fail");
                done();
                return;
            }
        }
        console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0100 finish");
        done();
    })
})
