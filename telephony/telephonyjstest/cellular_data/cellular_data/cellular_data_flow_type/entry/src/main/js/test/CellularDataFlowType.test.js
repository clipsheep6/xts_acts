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

describe("ActsCellularDataFlowTypeTest", function () {
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
                expect().assertFail();
                console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll fail");
                return;
            }
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeAll finish");
            inItialState = data;
        })
    })

    beforeEach(async function () {
        try{
            await cellular.disableCellularData();
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeEach_disableCellularData finish");
            await sleep(time);
        }catch (err){
            expect().assertFail();
            console.log("Telephony_CellularData_isCellularDataEnabled_beforeEach_disableCellularData fail");
        }
    })

    afterAll(function () {
        if (inItialState) {
            cellular.enableCellularData((err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_isCellularDataEnabled_enableCellularData fail");
                    return;
                }
                console.log("Telephony_CellularData_isCellularDataEnabled_enableCellularData finish");
            })
        } else {
            cellular.disableCellularData((err) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_isCellularDataEnabled_disableCellularData fail");
                    return;
                }
                console.log("Telephony_CellularData_isCellularDataEnabled_disableCellularData finish");
            })
        }
    })

    /*
     * @tc.number   Telephony_CellularData_getCellularDataFlowType_Async_0100
     * @tc.name     Call the enableCellularData interface and then call the isCellularDataEnabled interface.
     *              The result is true
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_getCellularDataFlowType_Async_0100", 0, async function (done) {
        cellular.enableCellularData(async (err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_getCellularDataFlowType_Async_0100 enableCellularData fail");
                done();
                return;
            }
            console.log("Telephony_CellularData_getCellularDataFlowType_Async_0100 enableCellularData finish");
            await sleep(time);
            cellular.getCellularDataFlowType((err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_getCellularDataFlowType_Async_0100 fail");
                    done();
                    return;
                }
                expect(data === cellular.DATA_FLOW_TYPE_NONE || data === cellular.DATA_FLOW_TYPE_DOWN ||
                data === cellular.DATA_FLOW_TYPE_UP || data === cellular.DATA_FLOW_TYPE_UP_DOWN).assertTrue();
                console.log("Telephony_CellularData_getCellularDataFlowType_Async_0100 finish");
                done();
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_getCellularDataFlowType_Async_0200
     * @tc.name     Call the disableCellularData interface and then the isCellularDataEnabled interface.
     *              The return result is false
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_getCellularDataFlowType_Async_0200", 0, async function (done) {
        cellular.disableCellularData(async (err) => {
            if (err) {
                expect().assertFail();
                console.log("Telephony_CellularData_getCellularDataFlowType_Async_0200 disableCellularData fail");
                done();
                return;
            }
            console.log("Telephony_CellularData_getCellularDataFlowType_Async_0200 disableCellularData finish");
            await sleep(time);
            cellular.getCellularDataFlowType((err, data) => {
                if (err) {
                    expect().assertFail();
                    console.log("Telephony_CellularData_getCellularDataFlowType_Async_0200 fail");
                    done();
                    return;
                }
                expect(data === cellular.DATA_FLOW_TYPE_NONE).assertTrue();
                console.log("Telephony_CellularData_getCellularDataFlowType_Async_0200 finish");
                done();
            })
        })
    })

    /*
     * @tc.number   Telephony_CellularData_getCellularDataFlowType_Promise_0100
     * @tc.name     Call the enableCellularData interface and then call the isCellularDataEnabled interface.
     *              The result is true
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_getCellularDataFlowType_Promise_0100", 0, async function (done) {
        try {
            await cellular.enableCellularData();
            console.log("Telephony_CellularData_getCellularDataFlowType_Promise_0100 enableCellularData finish");
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_getCellularDataFlowType_Promise_0100 enableCellularData fail");
            done();
            return;
        }
        try {
            let data = await cellular.getCellularDataFlowType();
            expect(data === cellular.DATA_FLOW_TYPE_NONE || data === cellular.DATA_FLOW_TYPE_DOWN ||
            data === cellular.DATA_FLOW_TYPE_UP || data === cellular.DATA_FLOW_TYPE_UP_DOWN).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_getCellularDataFlowType_Promise_0100 fail");
            done();
            return;
        }
        console.log("Telephony_CellularData_getCellularDataFlowType_Promise_0100 finish");
        done();
    })

    /*
     * @tc.number   Telephony_CellularData_getCellularDataFlowType_Promise_0200
     * @tc.name     Call the enableCellularData interface and then call the isCellularDataEnabled interface.
     *              The result is false
     * @tc.desc     Function test
     */
    it("Telephony_CellularData_getCellularDataFlowType_Promise_0200", 0, async function (done) {
        try {
            await cellular.disableCellularData();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_getCellularDataFlowType_Promise_0200 disableCellularData fail");
            done();
            return;
        }
        await sleep(time);
        try {
            let data = await cellular.getCellularDataFlowType();
            expect(data === cellular.DATA_FLOW_TYPE_NONE).assertTrue();
        } catch (err) {
            expect().assertFail();
            console.log("Telephony_CellularData_getCellularDataFlowType_Promise_0200 fail");
            done();
            return;
        }
        console.log("Telephony_CellularData_getCellularDataFlowType_Promise_0200 finish");
        done();
    })
})
