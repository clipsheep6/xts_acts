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
    const TEST_RUN_TIME = 10

    beforeEach(async function () {
        //Turn off the cellular data switch
        await cellular.disableCellularData()
    })

   /**
    * @tc.number   Telephony_CellularData_isCellularDataEnabled_Async_0200
    * @tc.name     CellularData Open state 1000 queries
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_isCellularDataEnabled_Async_0200', 0, async function (done) {
        var cnt = 0
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            cellular.isCellularDataEnabled((err, data) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_isCellularDataEnabled_Async_0200 fail")
                    done()
                    return
                }
                expect(data).assertEqual(false)
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    console.log("Telephony_CellularData_isCellularDataEnabled_Async_0200 finish")
                    done()
                }
            })
        }
    })

   /**
    * @tc.number   Telephony_CellularData_isCellularDataEnabled_Promise_0200
    * @tc.name     CellularData Open state 1000 queries
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_isCellularDataEnabled_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await cellular.isCellularDataEnabled()
                expect(data).assertEqual(false)
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_isCellularDataEnabled_Promise_0200 fail")
                done()
                return
            }
        }
        console.log("Telephony_CellularData_isCellularDataEnabled_Promise_0200 fail")
        done()
    })

   /**
    * @tc.number   Telephony_CellularData_getCellularDataState_Async_0200
    * @tc.name     GetCellularDataState Perform an average of 20 Reliability test
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_getCellularDataState_Async_0200', 0, async function (done) {
        var cnt = 0
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            cellular.getCellularDataState((err, data) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_getCellularDataState_Async_0200 fail")
                    done()
                    return
                }
                expect(data == cellular.DATA_STATE_CONNECTED ||
                        data == cellular.DATA_STATE_DISCONNECTED).assertTrue()
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    console.log("Telephony_CellularData_getCellularDataState_Async_0200 finish")
                    done()
                }
            })
        }
    })

   /**
    * @tc.number   Telephony_CellularData_getCellularDataState_Promise_0200
    * @tc.name     GetCellularDataState Perform an average of 20 Reliability test
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_getCellularDataState_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var data = await cellular.getCellularDataState()
                expect(data == cellular.DATA_STATE_CONNECTED ||
                        data == cellular.DATA_STATE_CONNECTING ||
                        data == cellular.DATA_STATE_DISCONNECTED).assertTrue()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_getCellularDataState_Promise_0200 fail")
                done()
                return
            }
        }
        console.log("Telephony_CellularData_getCellularDataState_Promise_0200 finish")
        done()
    })

    /**
    * @tc.number   Telephony_CellularData_enableCellularData_Async_0200
    * @tc.name     Turn on cellular data switch 1000 times
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_enableCellularData_Async_0200', 0, async function (done) {
        var cnt = 0
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            //Turn on the cellular data switch
            cellular.enableCellularData((err) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_enableCellularData_Async_0200 fail")
                    done()
                    return
                }
            cellular.isCellularDataEnabled((err, data) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_CellularData_enableCellularData_Async_0200 fail")
                    done()
                    return
                }
                expect(data).assertEqual(true)
            })
            })
            cnt++
            if (cnt == TEST_RUN_TIME) {
                console.log("Telephony_CellularData_enableCellularData_Async_0200 finish")
                done()
            }
        }
    })

    /**
    * @tc.number   Telephony_CellularData_enableCellularData_Promise_0200
    * @tc.name     Turn on cellular data switch 1000 times
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_enableCellularData_Promise_0200', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            //Turn on the cellular data switch
            try {
                await cellular.enableCellularData()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_enableCellularData_Promise_0200 fail")
                done()
                return
            }
            try {
                var data = await cellular.isCellularDataEnabled()
                expect(data).assertEqual(true)
            } catch (err) {
               expect().assertFail()
               console.log("Telephony_CellularData_enableCellularData_Promise_0200 fail")
               done()
               return
            }
        }
        console.log("Telephony_CellularData_enableCellularData_Promise_0200 finish")
        done()
    })

    /**
    * @tc.number   Telephony_CellularData_disableCellularData_Async_0200
    * @tc.name     Turn off cellular data switch 1000 times
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_disableCellularData_Async_0200', 0, async function (done) {
        var cnt = 0
        //Turn on the cellular data switch
        cellular.enableCellularData((err) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_disableCellularData_Async_0200 fail")
                done()
                return
            }
        })
        for (let index = 0; index < TEST_RUN_TIME; index++) {
        //Turn off the cellular data switch
        cellular.disableCellularData((err) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_disableCellularData_Async_0200 fail")
                done()
                return
            }
        })
        cellular.isCellularDataEnabled((err, data) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_disableCellularData_Async_0200 fail")
                done()
                return
            }
            expect(data).assertEqual(false)
        })
            cnt++
            if (cnt == TEST_RUN_TIME) {
                console.log("Telephony_CellularData_disableCellularData_Async_0200 finish")
                done()
            }
        }
    })

    /**
    * @tc.number   Telephony_CellularData_disableCellularData_Promise_0200
    * @tc.name     Turn off cellular data switch 1000 times
    * @tc.desc     Reliability test
    */
    it('Telephony_CellularData_disableCellularData_Promise_0200', 0, async function (done) {
        //Turn on the cellular data switch
        try {
            await cellular.enableCellularData()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_CellularData_disableCellularData_Promise_0200 fail")
            done()
            return
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            //Turn off the cellular data switch
            try {
                await cellular.disableCellularData()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_CellularData_disableCellularData_Promise_0200 fail")
                done()
                return
            }
            try {
               var data = await cellular.isCellularDataEnabled()
               expect(data).assertEqual(false)
            } catch (err) {
               expect().assertFail()
               console.log("Telephony_CellularData_disableCellularData_Promise_0200 fail")
               done()
               return
            }
        }
        console.log("Telephony_CellularData_disableCellularData_Promise_0200 finish")
        done()
    })
})