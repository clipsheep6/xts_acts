// @ts-nocheck
// @ts-nocheck
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

import cellular from '@ohos.telephony_data'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

var Initial_state = false;

beforeAll (async function () {
    var res = await cellular.isCellularDataEnabled()
    Initial_state = res
})

afterAll(async function () {
    if(Initial_state === true) {
        //Turn on the cellular data switch
        await cellular.enableCellularData()
    } else {
        //Turn off the cellular data switch
        await cellular.disableCellularData()
    }
})


describe('Telephony_CellularData', function () {
    const TIME_SPAN = 5
    const TEST_RUN_TIME = 10

    beforeEach(async function () {
        //Turn off the cellular data switch
        await cellular.disableCellularData()
    })

    /**
     * @tc.number   Telephony_CellularData_isCellularDataEnabled_Async_0300
     * @tc.name     CellularData Open state 1000 queries
     * @tc.desc     Performance test
     */
    it('Telephony_CellularData_isCellularDataEnabled_Async_0300', 0, async function (done) {
        var cnt = 0
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            cellular.isCellularDataEnabled((err, data) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_isCellularDataEnabled_Async_0300 fail")
                    done()
                    return
                }
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    const endTime = (new Date).getTime()
                    console.log("cellulardata:Telephony_CellularData_isCellularDataEnabled_Async_0300: useTime : "
                    + (endTime - startTime) + "ms")
                    expect(endTime - startTime).assertLess(USEC_500);
                    console.log("Telephony_CellularData_isCellularDataEnabled_Async_0300 finish")
                    done()
                }
            })
        }
    })

    /**
    * @tc.number   Telephony_CellularData_isCellularDataEnabled_Promise_0300
    * @tc.name     IsCellularDataEnabled Perform an average of 20 performance tests
    * @tc.desc     Performance test
    */
    it('Telephony_CellularData_isCellularDataEnabled_Promise_0300', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.isCellularDataEnabled()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_isCellularDataEnabled_Promise_0300 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        console.log("cellulardata:Telephony_CellularData_isCellularDataEnabled_Promise_0300: useTime : "
        + (endTime - startTime) + "ms")
        expect(endTime - startTime).assertLess(USEC_500);
        console.log("Telephony_CellularData_isCellularDataEnabled_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number   Telephony_CellularData_getCellularDataState_Async_0300
     * @tc.name     getCellularDataState Perform an average of 1000 performance tests
     * @tc.desc     Performance test
     */
    it('Telephony_CellularData_getCellularDataState_Async_0300', 0, async function (done) {
        var cnt = 0
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            cellular.getCellularDataState((err, data) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_getCellularDataState_Async_0300 fail")
                    done()
                    return
                }
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    expect(data == cellular.DATA_STATE_CONNECTED ||
                            data == cellular.DATA_STATE_DISCONNECTED).assertTrue()
                    const endTime = (new Date).getTime()
                    console.log("cellulardata:Telephony_CellularData_getCellularDataState_Async_0300: useTime : "
                    + (endTime - startTime) + "ms")
                    expect(endTime - startTime).assertLess(USEC_500);
                    console.log("Telephony_CellularData_getCellularDataState_Async_0300 finish")
                    done()
                }
            })
        }
    })

    /**
    * @tc.number   Telephony_CellularData_getCellularDataState_Promise_0300
    * @tc.name     getCellularDataState Perform an average of 1000 performance tests
    * @tc.desc     Performance test
    */
    it('Telephony_CellularData_getCellularDataState_Promise_0300', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.getCellularDataState()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_getCellularDataState_Promise_0300 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        console.log("cellulardata:Telephony_CellularData_getCellularDataState_Promise_0300: useTime : "
        + (endTime - startTime) + "ms")
        expect(endTime - startTime).assertLess(USEC_500);
        console.log("Telephony_CellularData_getCellularDataState_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number   Telephony_CellularData_enableCellularData_Async_0300
     * @tc.name     getCellularDataState Perform an average of 1000 performance tests
     * @tc.desc     Performance test
     */
    it('Telephony_CellularData_enableCellularData_Async_0300', 0, async function (done) {
        var cnt = 0
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            cellular.enableCellularData((err, data) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_enableCellularData_Async_0300 fail")
                    done()
                    return
                }
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    const endTime = (new Date).getTime()
                    expect(endTime - startTime).assertLess(USEC_500);
                    console.log("cellulardata:Telephony_CellularData_enableCellularData_Async_0300: useTime : "
                    + (endTime - startTime) + "ms")
                    console.log("Telephony_CellularData_enableCellularData_Async_0300 finish")
                    done()
                }
            })
        }
    })

    /**
    * @tc.number   Telephony_CellularData_enableCellularData_Promise_0300
    * @tc.name     getCellularDataState Perform an average of 1000 performance tests
    * @tc.desc     Performance test
    */
    it('Telephony_CellularData_enableCellularData_Promise_0300', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.enableCellularData()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_enableCellularData_Promise_0300 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(USEC_500);
        console.log("cellulardata:Telephony_CellularData_enableCellularData_Promise_0300: useTime : "
        + (endTime - startTime) + "ms")
        console.log("Telephony_CellularData_enableCellularData_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number   Telephony_CellularData_disableCellularData_Async_0300
     * @tc.name     getCellularDataState Perform an average of 1000 performance tests
     * @tc.desc     Performance test
     */
    it('Telephony_CellularData_disableCellularData_Async_0300', 0, async function (done) {
        var cnt = 0
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            cellular.disableCellularData((err, data) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_disableCellularData_Async_0300 fail")
                    done()
                    return
                }
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    const endTime = (new Date).getTime()
                    expect(endTime - startTime).assertLess(USEC_500);
                    console.log("cellulardata:Telephony_CellularData_disableCellularData_Async_0300: useTime : "
                    + (endTime - startTime) + "ms")
                    console.log("Telephony_CellularData_disableCellularData_Async_0300 finish")
                    done()
                }
            })
        }
    })

    /**
    * @tc.number   Telephony_CellularData_disableCellularData_Promise_0300
    * @tc.name     getCellularDataState Perform an average of 1000 performance tests
    * @tc.desc     Performance test
    */
    it('Telephony_CellularData_disableCellularData_Promise_0300', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await cellular.disableCellularData()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_disableCellularData_Promise_0300 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(USEC_500);
        console.log("cellulardata:Telephony_CellularData_disableCellularData_Promise_0300: useTime : "
        + (endTime - startTime) + "ms")
        console.log("Telephony_CellularData_disableCellularData_Promise_0300 finish")
        done()
    })
})

