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
const DELAYL_LIMIT = 10;
const TEST_RUN_TIME = 10;

describe("TelephonyCellularDataRoamingReliability", function () {

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Async_0800
     * @tc.name     Cycle call interface setDefaultCellularDataSlotId (1000 times), all normal into the parameter, to check
     *              the correction results time
     * @tc.desc     Performance test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0800", 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0800 setDefaultCellularDataSlotId finish");
                return;
            }
            startTime = new Date().getTime();
            cellular.setDefaultCellularDataSlotId(SLOT_ID, (err) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Async_0800 setDefaultCellularDataSlotId fail");
                    done();
                    return;
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_getDefaultCellularDataSlotId_Async_0200
     * @tc.name     Cycle call interface setDefaultCellularDataSlotId (1000 times), all normal into the parameter, to check
     *              the correction results time
     * @tc.desc     Performance test
     */
    it("Telephony_CellularData_getDefaultCellularDataSlotId_Async_0200", 0, async function (done) {
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Async_0200 getDefaultCellularDataSlotId finish");
                return;
            }
            startTime = new Date().getTime();
            cellular.getDefaultCellularDataSlotId((err) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Async_0200 getDefaultCellularDataSlotId fail");
                    done();
                    return;
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /*
     * @tc.number   Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0800
     * @tc.name     Cycle call interface setDefaultCellularDataSlotId (1000 times), all normal into the parameter, to check
     *              the correction results time
     * @tc.desc     Performance test
     */
    it("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0800", 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.setDefaultCellularDataSlotId(SLOT_ID);
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0800 fail");
                done();
                return;
            }
        }
        let endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        console.log("Telephony_CellularData_setDefaultCellularDataSlotId_Promise_0800 finish");
        done();
    })

    /*
     * @tc.number   Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0200
     * @tc.name     Cycle call interface setDefaultCellularDataSlotId (1000 times), all normal into the parameter, to check
     *              the correction results time
     * @tc.desc     Performance test
     */
    it("Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0200", 0, async function (done) {
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.getDefaultCellularDataSlotId();
            } catch (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0200 fail");
                done();
                return;
            }
        }
        let endTime = new Date().getTime();
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        console.log("Telephony_CellularData_getDefaultCellularDataSlotId_Promise_0200 finish");
        done();
    })
})
