/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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
import sms from '@ohos.telephony_sms'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('SmsMmsPreTest', function () {
    const TEST_PHONY_NUMBER = "18211305277"

    const TEST_RUN_TIME = 10
    const TIME_SPAN = 5
    const true_slot_id = 1

    const IDENTIFIER_MIN = 0
    const IDENTIFIER_MAX = 0xFFFF - 1
    const RANTYPE_GSM = 1
    const RANTYPE_CDMA = 2
    var rawArray = new Array(
        0x30, 0x00, 0x01, 0x00, 0x0D, 0x91, 0x68, 0x71, 0x26, 0x30,
        0x37, 0x25, 0xF7, 0x00, 0x08, 0x10, 0x54, 0xC8, 0x7F, 0x57,
        0xFF, 0x01, 0x00, 0x7A, 0x00, 0x65, 0x00, 0x73, 0x00, 0x74, 0x30, 0x02)

    const OTHER_SMSC_NUMBER = "+8613800755500"
    const USABLE_SMSC_NUMBER = "+8613800512500"
    const CORRECT_SMS_PDU = "01000D91683106019196F4000800"
    const OTHER_SMS_PDU = "01000D91683108705505F0000800"
    const RECEIVE_SMS_PDU = "240D91689141468496F600001270721142432302B319"
    const RECEIVE_OTHER_SMS_PDU = "240D91689141468496F600001270721174322302B91C"
    const INVALID_SMS_VALUES = '00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF'

    var g_dataScAddr = ""
    var g_defaultSmsSlotId = 1
    beforeAll (async function () {
        g_dataScAddr = await sms.getSmscAddr(true_slot_id)
        g_defaultSmsSlotId = await sms.getDefaultSmsSlotId()
    })

    beforeEach(async function () {
        await sms.setSmscAddr(true_slot_id,g_dataScAddr)
        await sms.setDefaultSmsSlotId(g_defaultSmsSlotId)
        var smsRecord = await sms.getAllSimMessages(true_slot_id)
        for(let index = 0; index < smsRecord.length; ++index) {
            await sms.delSimMessage(true_slot_id,index)
        }
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_1600
    * @tc.name    The loop calls the interface SendMessage10 times,
    *             Delay < TIME_SPAN
    * @tc.desc    Performance test
    */
    it('Telephony_SmsMms_sendMessage_1600', 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_sendMessage_1600 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_sendMessage_1600 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.sendMessage({
                slotId: true_slot_id,
                destinationHost: TEST_PHONY_NUMBER,
                content: 'hello',
                sendCallback: (err, value) => {
                    endTime = new Date().getTime()
                    totalTime += endTime - startTime
                    if (err) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_sendMessage_1600 fail")
                        done()
                        return
                    }
                    Recursive(n - 1)
                },
                deliveryCallback: (err, value) => {
                    if (err) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_sendMessage_1600 fail")
                        return
                    }
                    console.log("deliveryCallback success sendResult = " + value.pdu)
                }
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /*
    * @tc.number  Telephony_SmsMms_createMessage_Async_0600
    * @tc.name    Loop through the createMessage() TEST_RUN_TIME times,
    *             Time delay < TIME_SPAN
    * @tc.desc    Performance test
    */
    it('Telephony_SmsMms_createMessage_Async_0600', 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_createMessage_Async_0600 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_createMessage_Async_0600 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.createMessage(rawArray, "3gpp", (err, shortMessage) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /*
    * @tc.number  Telephony_SmsMms_createMessage_Promise_0600
    * @tc.name    Loop through the createMessage() TEST_RUN_TIME times promise,
    *             Time delay < TIME_SPAN
    * @tc.desc    Performance test
    */
    it('Telephony_SmsMms_createMessage_Promise_0600', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.createMessage(rawArray, '3gpp')
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_createMessage_Promise_0600 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_createMessage_Promise_0600 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_1100
     * @tc.name     The loop calls SetSmscAddr() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_SPAN
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_1100', 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        let curAddr = USABLE_SMSC_NUMBER
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setSmscAddr_Async_1100 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_setSmscAddr_Async_1100 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.setSmscAddr(true_slot_id, curAddr, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Async_0400
     * @tc.name     The loop calls GetDefaultSmsSlotId() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_SPAN
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Async_0400', 0, async function (done) {
        let slotId = true_slot_id
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0400 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0400 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.getDefaultSmsSlotId((err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0400 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        sms.setDefaultSmsSlotId(slotId, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0400 set fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0400 set finish")
            Recursive(TEST_RUN_TIME)
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400
     * @tc.name     The loop calls setDefaultSmsSlotId() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400', 0, async function (done) {
        let slotId = true_slot_id
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.setDefaultSmsSlotId(slotId)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0400 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Async_0400
     * @tc.name     The loop calls setDefaultSmsSlotId() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_SPAN
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Async_0400', 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0400 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0400 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.setDefaultSmsSlotId(true_slot_id, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0400 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_1200
     * @tc.name     The loop calls setCBRangeConfig() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_1200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.setCBRangeConfig(data)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1200 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1200 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_1200
     * @tc.name     The loop calls setCBRangeConfig() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_1200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_CDMA
        }
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_1200 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_1200 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.setCBRangeConfig(data, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBRangeConfig_Async_1200 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_1300
     * @tc.name     The loop calls SetCBConfig() LOOP_MULTITUDE_NUMBER times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_1300', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.setCBConfig(data)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Promise_1300 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_setCBConfig_Promise_1300 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_1300
     * @tc.name     The loop calls SetCBConfig() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setCBConfig_Async_1300', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setCBConfig_Async_1300 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_setCBConfig_Async_1300 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.setCBConfig(data, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBConfig_Async_1300 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Promise_0400
     * @tc.name     The loop calls getSmscAddr() LOOP_MULTITUDE_NUMBER times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_getSmscAddr_Promise_0400', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.getSmscAddr(true_slot_id)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getSmscAddr_Promise_0400 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_getSmscAddr_Promise_0400 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Async_0400
     * @tc.name     The loop calls getSmscAddr() LOOP_MULTITUDE_NUMBER times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_getSmscAddr_Async_0400', 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_getSmscAddr_Async_0400 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_getSmscAddr_Async_0400 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.getSmscAddr(true_slot_id, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getSmscAddr_Async_0400 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_1100
     * @tc.name     The loop calls SetSmscAddr() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_SPAN
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_1100', 0, async function (done) {
        const startTime = (new Date).getTime()
        let curAddr = OTHER_SMSC_NUMBER
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.setSmscAddr(true_slot_id, curAddr)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Promise_1100 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_setSmscAddr_Promise_1100 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Promise_0400
     * @tc.name     The loop calls GetDefaultSmsSlotId() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_SPAN
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Promise_0400', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.getDefaultSmsSlotId()
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0400 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0400 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_getAllSIMMessages_Promise_0600
     * @tc.name     The loop calls getAllSimMessages() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_SPAN
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_getAllSIMMessages_Promise_0600', 0, async function (done) {
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.getAllSimMessages(true_slot_id)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0600 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0600 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_getAllSIMMessages_Async_0600
     * @tc.name     The loop calls getAllSimMessages() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_SPAN
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_getAllSIMMessages_Async_0600', 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_getAllSIMMessages_Async_0600 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_getAllSIMMessages_Async_0600 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.getAllSimMessages(true_slot_id, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getAllSIMMessages_Async_0600 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Async_2400
     * @tc.name     The loop calls updateSIMMessage() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_updateSIMMessage_Async_2400', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let addIndex = 0
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : RECEIVE_SMS_PDU,
            status : sms.MESSAGE_HAVE_READ
        }
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : sms.MESSAGE_HAVE_READ,
            pdu : RECEIVE_SMS_PDU,
            smsc : ""
        }
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_updateSIMMessage_Async_2400 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_updateSIMMessage_Async_2400 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.updateSimMessage(upData, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_updateSIMMessage_Async_2400 update fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        sms.getAllSimMessages(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_updateSIMMessage_Async_2400 fail")
                done()
                return
            }
            beforeSmsRecord = result
            console.log("Telephony_SmsMms_updateSIMMessage_Async_2400 getAllSimMessages before finish")
            for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
                if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0) {
                    addIndex = index
                    break;
                }
            }
            sms.addSimMessage(data, (adderr, addresult) => {
                if (adderr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_updateSIMMessage_Async_2400 fail")
                    done()
                    return
                }
                expect(addresult).assertTrue()
                console.log("Telephony_SmsMms_updateSIMMessage_Async_2400 finish")
                Recursive(TEST_RUN_TIME)
            })
        })

    })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_2400
     * @tc.name     The loop calls updateSIMMessage() TEST_RUN_TIME times,
     *              Determine that the running time is less than TIME_USEC_500
     * @tc.desc     Performance test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_2400', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let cnt = 0
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : RECEIVE_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2400 getAllSimMessages before finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2400 fail")
            done()
            return
        }
        for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
            if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0) {
                if (isSecond) {
                    nextIndex = index
                    break;
                } else {
                    addIndex = index
                }
                isSecond = true
            }
        }
        if(nextIndex == 0) {
            nextIndex = addIndex
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("setSmscAddr beforeAddr  " )
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2400 fail")
            done()
            return
        }
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : sms.MESSAGE_HAS_BEEN_SENT,
            pdu : RECEIVE_SMS_PDU,
            smsc : ""
        }
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.updateSimMessage(upData)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_updateSIMMessage_Promise_2400 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_updateSIMMessage_Promise_2400 finish")
        done()
    })

    /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_2300
    * @tc.name     loops Failed to save SMS to SIM LOOP_MULTITUDE_NUMBER,
    *              Determine that the running time is less than TIME_USEC_500
    * @tc.desc     Performance test
    */
    it('Telephony_SmsMms_addSimMessage_Async_2300', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_NOT_SENT
        }
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_addSimMessage_Async_2300 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_addSimMessage_Async_2300 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.addSimMessage(data, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_addSimMessage_Async_2300 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_2300
    * @tc.name     loops Failed to save SMS to SIM LOOP_MULTITUDE_NUMBER,
    *              Determine that the running time is less than TIME_USEC_500
    * @tc.desc     Performance test
    */
    it('Telephony_SmsMms_addSimMessage_Promise_2300', 0, async function (done) {
        const startTime = (new Date).getTime()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_NOT_SENT
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await sms.addSimMessage(data)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_addSimMessage_Promise_2300 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_addSimMessage_Promise_2300 finish")
        done()
    })

    /**
    * @tc.number   Telephony_SmsMms_delSimMessag_Async_0500
    * @tc.name     loops Deletes a text message from the SIM card LOOP_MULTITUDE_NUMBER,
    *              Determine that the running time is less than TIME_USEC_500
    * @tc.desc     Performance test
    */
    it('Telephony_SmsMms_delSimMessag_Async_0500', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let delIndex = 0
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_delSimMessag_Async_0500 exec done useTime:" + totalTime)
                console.log("Telephony_SmsMms_delSimMessag_Async_0500 finish")
                expect(totalTime).assertLess(TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sms.delSimMessage(true_slot_id, delIndex, (err, result) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_delSimMessag_Async_0500 fail")
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        sms.getAllSimMessages(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_delSimMessag_Async_0500 fail")
                done()
                return
            }
            beforeSmsRecord = result
            console.log("Telephony_SmsMms_delSimMessag_Async_0500 getAllSimMessages before finish")
            for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
                if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                    delIndex = index
                    break
                }
            }
            Recursive(TEST_RUN_TIME)
        })
    })

    /**
    * @tc.number   Telephony_SmsMms_delSimMessag_Promise_0500
    * @tc.name     loops Deletes a text message from the SIM card TEST_RUN_TIME,
    *              Determine that the running time is less than TIME_USEC_500
    * @tc.desc     Performance test
    */
    it('Telephony_SmsMms_delSimMessag_Promise_0500', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : RECEIVE_SMS_PDU,
            status : sms.MESSAGE_HAVE_READ
        }
        let addIndex = new Array()
        let count = 0
        try {
            let promiseinit = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseinit
            console.log("Telephony_SmsMms_delSimMessag_Promise_0500 getAllSimMessages before finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_delSimMessag_Promise_0500 fail")
            done()
            return
        }
        for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
            if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                addIndex[count]  = index;
                if(count == TEST_RUN_TIME){
                    break;
                }
            }
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseSet = await sms.addSimMessage(data)
                expect(promiseSet).assertTrue()
                if(index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_delSimMessag_Promise_0500 addSimMessage finish")
                }
                done()
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_delSimMessag_Promise_0500 fail")
                done()
                return
            }
        }
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            expect(promiseGet[addIndex[0]] != INVALID_SMS_VALUES || promiseGet[addIndex[0]].length != 0).assertTrue()
            console.log("Telephony_SmsMms_delSimMessag_Promise_0500 getAllSimMessages before finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_delSimMessag_Promise_0500 fail")
            done()
            return
        }
        const startTime = (new Date).getTime()
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let delIndex = addIndex[index]
                await sms.addSimMessage(true_slot_id,delIndex)
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_delSimMessag_Promise_0500 fail")
                done()
                return
            }
        }
        const endTime = (new Date).getTime()
        expect(endTime - startTime).assertLess(TIME_SPAN)
        console.log("Telephony_SmsMms_delSimMessag_Promise_0500 finish")
        done()
    })

})
