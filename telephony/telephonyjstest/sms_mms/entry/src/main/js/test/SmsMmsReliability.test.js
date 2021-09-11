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

describe('SmsMmsRelTest', function () {
    const TEST_RUN_TIME = 10
    const TEST_PHONY_NUMBER = "18211305277"

    const true_slot_id = 1
    const IDENTIFIER_MIN = 0
    const IDENTIFIER_MAX = 0xFFFF - 1
    const RANTYPE_GSM = 1
    const RANTYPE_CDMA = 2
    const PROTOCOL_ID = 145
    const SC_TIMESTAMP = 1644112405
    var rawArray = new Array(
        0x30, 0x00, 0x01, 0x00, 0x0D, 0x91, 0x68, 0x71, 0x26, 0x30,
        0x37, 0x25, 0xF7, 0x00, 0x08, 0x10, 0x54, 0xC8, 0x7F, 0x57,
        0xFF, 0x01, 0x00, 0x7A, 0x00, 0x65, 0x00, 0x73, 0x00, 0x74, 0x30, 0x02)

    const OTHER_SMSC_NUMBER = "+8613800755500"
    const USABLE_SMSC_NUMBER = "+8613800512500"
    const CORRECT_SMS_PDU = "01000D91683106019196F4000800"
    const RECEIVE_SMS_PDU = "240D91689141468496F600001270721142432302B319"
    const INVALID_SMS_VALUES = '00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF'

    var g_dataScAddr = ""
    var g_defaultSmsSlotId = 1
    var smsIndex = 0;
    beforeAll (async function ()
    {
        g_dataScAddr = await sms.getSmscAddr(true_slot_id)
        g_defaultSmsSlotId = await sms.getDefaultSmsSlotId()
        let allSmsRecord = await sms.getAllSimMessages(true_slot_id)
        smsIndex = allSmsRecord.letgh
        for(let index = 0; index < smsIndex; ++index) {
            await sms.delSimMessage(true_slot_id,index)
        }
    })

    afterEach (async function ()
    {
        await sms.setSmscAddr(true_slot_id,g_dataScAddr)
        await sms.setDefaultSmsSlotId(g_defaultSmsSlotId)
        for(let index = 0; index < smsIndex; ++index) {
            await sms.delSimMessage(true_slot_id,index)
        }
    })

//    var g_dataScAddr = ""
//    var g_defaultSmsSlotId = 1
//    beforeAll (async function () {
//        g_dataScAddr = await sms.getSmscAddr(true_slot_id)
//        g_defaultSmsSlotId = await sms.getDefaultSmsSlotId()
//    })
//
//    beforeEach(async function () {
//        await sms.setSmscAddr(true_slot_id,g_dataScAddr)
//        await sms.setDefaultSmsSlotId(g_defaultSmsSlotId)
//        var smsRecord = await sms.getAllSimMessages(true_slot_id)
//        for(let index = 0; index < smsRecord.length; ++index) {
//            await sms.delSimMessage(true_slot_id,index)
//        }
//    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_1500
    * @tc.name    The loop calls the interface SendMessage1000 times,
    *             and the message is sent successfully each time
    * @tc.desc    Reliability test
    */
    it('Telephony_SmsMms_sendMessage_1500', 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_addSimMessage_Async_2300 finish")
                done()
                return
            }
            sms.sendMessage({
                slotId: true_slot_id,
                destinationHost: TEST_PHONY_NUMBER,
                content: 'hello',
                sendCallback: (err, value) => {
                    if (err) {
                        expect().assertFail()
                        return
                    }
                    expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                    Recursive(n - 1)
                },
                deliveryCallback: (err, value) => {
                    if (err) {
                        expect().assertFail()
                        return
                    }
                    console.log("deliveryCallback success sendResult = " + value.pdu)
                }
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_1000
     * @tc.name     The loop calls SetSmscAddr() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_1000', 0, async function (done) {
        let curAddr = OTHER_SMSC_NUMBER
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
                expect(promiseSet).assertTrue()
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Promise_1000 fail")
                done()
                return
            }
            try {
                let promise = await sms.getSmscAddr(true_slot_id)
                expect(promise == curAddr).assertTrue()
                if (index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_setSmscAddr_Promise_1000 finish")
                    done()
                }
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Promise_1000 fail")
                done()
                return
            }
        }
    })

    /*
    * @tc.number  Telephony_SmsMms_createMessage_Async_0500
    * @tc.name    Loop through the createMessage() TEST_RUN_TIME times
    * @tc.desc    Reliability test
    */
    it('Telephony_SmsMms_createMessage_Async_0500', 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_createMessage_Async_0500 finish")
                done()
                return
            }
            sms.createMessage(rawArray, "3gpp", (err, shortMessage) => {
                if (err) {
                    expect().assertFail()
                    return
                }
                expect(shortMessage.protocolId == PROTOCOL_ID).assertTrue()
                expect(shortMessage.scTimestamp == SC_TIMESTAMP).assertTrue()
                expect(shortMessage.isReplaceMessage).assertFalse()
                expect(shortMessage.hasReplyPath).assertFalse()
                expect(shortMessage.pdu.length > 0).assertTrue()
                expect(shortMessage.status == 0).assertTrue()
                expect(shortMessage.isSmsStatusReportMessage).assertFalse()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /*
    * @tc.number  Telephony_SmsMms_createMessage_Promise_0500
    * @tc.name    Loop through the createMessage() TEST_RUN_TIME times promise
    * @tc.desc    Reliability test
    */
    it('Telephony_SmsMms_createMessage_Promise_0500', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                var promise = await sms.createMessage(rawArray, '3gpp')
                expect(promise.protocolId == PROTOCOL_ID).assertTrue()
                expect(promise.scTimestamp == SC_TIMESTAMP).assertTrue()
                expect(promise.isReplaceMessage).assertFalse()
                expect(promise.hasReplyPath).assertFalse()
                expect(promise.pdu.length > 0).assertTrue()
                expect(promise.status == 0).assertTrue()
                expect(promise.isSmsStatusReportMessage).assertFalse()
            } catch (err) {
                expect().assertFail()
                done()
                return
            }
        }
        console.log("Telephony_SmsMms_createMessage_Promise_0500 finish")
        done()
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Async_0300
     * @tc.name     The loop calls getSmscAddr() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_getSmscAddr_Async_0300', 0, async function (done) {
        let curAddr = USABLE_SMSC_NUMBER
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_getSmscAddr_Async_0300 finish")
                done()
                return
            }
            sms.getSmscAddr(true_slot_id,(geterr, getresult) => {
                if (geterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getSmscAddr_Async_0300 fail")
                    done()
                    return
                }
                expect(getresult == curAddr).assertTrue()
                Recursive(n - 1)
            })
        }
        sms.setSmscAddr(true_slot_id, curAddr, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getSmscAddr_Async_0300 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_getSmscAddr_Async_0300 setSmscAddr result = " + result)
            Recursive(TEST_RUN_TIME)
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Promise_0300
     * @tc.name     The loop calls getSmscAddr() LOOP_MULTITUDE_NUMBER times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_getSmscAddr_Promise_0300', 0, async function (done) {
        let curAddr = OTHER_SMSC_NUMBER
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_getSmscAddr_Promise_0300 setSmscAddr : " +  promiseSet)
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getSmscAddr_Promise_0100 fail")
            done()
            return
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promise = await sms.getSmscAddr(true_slot_id)
                expect(promise == curAddr).assertTrue()
                if (index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_getSmscAddr_Promise_0300 finish")
                    done()
                }
            } catch (err) {
                expect().assertFail()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_1200
     * @tc.name     The loop calls SetCBConfig() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setCBConfig_Async_1200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_getSmscAddr_Async_0300 finish")
                done()
                return
            }
            sms.setCBConfig(data, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBConfig_Async_1200 fail")
                    done()
                    return
                }
                expect(result).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_1200
     * @tc.name     The loop calls SetCBConfig() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_1200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseSet = await sms.setCBConfig(data)
                expect(promiseSet).assertTrue()
                if (index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_setCBConfig_Promise_1200  finish")
                    done()
                }
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Promise_1200  fail")
                done()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_1100
     * @tc.name     The loop calls setCBRangeConfig() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_1100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_CDMA
        }
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_1100 finish")
                done()
                return
            }
            sms.setCBRangeConfig(data, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBRangeConfig_Async_1100 fail")
                    done()
                    return
                }
                expect(result).assertFalse()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_1100
     * @tc.name     The loop calls setCBRangeConfig() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_1100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        var cnt = 0
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseInit = await sms.setCBRangeConfig(data)
                expect(promiseInit).assertTrue()
                cnt++
                if (cnt == TEST_RUN_TIME) {
                    console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1100 finish")
                    done()
                }
            } catch (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1100 fail")
                done()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Async_0300
     * @tc.name     The loop calls setDefaultSmsSlotId() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Async_0300', 0, async function (done) {
        let slotId = true_slot_id
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0300 finish")
                done()
                return
            }
            sms.setDefaultSmsSlotId(slotId,(err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0300 fail")
                    done()
                    return
                }
                expect(result).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Promise_0300
     * @tc.name     The loop calls setDefaultSmsSlotId() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Promise_0300', 0, async function (done) {
        let slotId = true_slot_id
        let cnt = 0
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseSet = await sms.setDefaultSmsSlotId(slotId)
                expect(promiseSet).assertTrue()
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0300 finish")
                    done()
                }
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0300  fail")
                done()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Async_0300
     * @tc.name     The loop calls GetDefaultSmsSlotId() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Async_0300', 0, async function (done) {
        let slotId = true_slot_id
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0300 finish")
                done()
                return
            }
            sms.getDefaultSmsSlotId((geterr, getresult) => {
                if (geterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0300 fail")
                    done()
                    return
                }
                expect(getresult == slotId).assertTrue()
                Recursive(n - 1)
            })
        }
        sms.setDefaultSmsSlotId(slotId ,(err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0300 set fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0300 set finish")
            Recursive(TEST_RUN_TIME)
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Promise_0300
     * @tc.name     The loop calls GetDefaultSmsSlotId() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Promise_0300', 0, async function (done) {
        let slotId = true_slot_id
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promise = await sms.getDefaultSmsSlotId()
                expect(promise != undefined || promise != "")
                if (index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0300 finish")
                    done()
                }
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0300 fail")
                done()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_1000
     * @tc.name     The loop calls SetSmscAddr() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_1000', 0, async function (done) {
        let curAddr = USABLE_SMSC_NUMBER
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setSmscAddr_Async_1000 finish")
                done()
                return
            }
            sms.setSmscAddr(true_slot_id, curAddr, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setSmscAddr_Async_1000 fail")
                    done()
                    return
                }
                expect(result).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_2200
    * @tc.name     loops Failed to save SMS to SIM TEST_RUN_TIME
    * @tc.desc     Reliability test
    */
    it('Telephony_SmsMms_addSimMessage_Async_2200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setSmscAddr_Async_1000 finish")
                done()
                return
            }
            sms.addSimMessage(data, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_addSimMessage_Async_2200 fail")
                    done()
                    return
                }
                expect(result).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

    /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_2200
    * @tc.name     loops Failed to save SMS to SIM TEST_RUN_TIME
    * @tc.desc     Reliability test
    */
    it('Telephony_SmsMms_addSimMessage_Promise_2200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_NOT_SENT
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseSet = await sms.addSimMessage(data)
                expect(promiseSet).assertTrue()
                if(index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_addSimMessage_Promise_2200 finish")
                    done()
                }
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_addSimMessage_Promise_2200 fail")
                done()
                return
            }
        }
    })

    /**
    * @tc.number   Telephony_SmsMms_delSimMessag_Async_0400
    * @tc.name     loops Deletes a text message from the SIM card TEST_RUN_TIME
    * @tc.desc     Reliability test
    */
    it('Telephony_SmsMms_delSimMessag_Async_0400', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        let delIndex = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_SmsMms_setSmscAddr_Async_1000 finish")
                done()
                return
            }
            sms.delSimMessage(true_slot_id, delIndex, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_delSimMessag_Async_0400 fail")
                    done()
                    return
                }
                expect(result).assertTrue()
                Recursive(n - 1)
            })
        }
        sms.getAllSimMessages(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_delSimMessag_Async_0400 fail")
                done()
                return
            }
            beforeSmsRecord = result
            console.log("Telephony_SmsMms_delSimMessag_Async_0400 getAllSimMessages before finish")
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
    * @tc.number   Telephony_SmsMms_delSimMessag_Promise_0400
    * @tc.name     loops Deletes a text message from the SIM card LOOP_MULTITUDE_NUMBER
    * @tc.desc     Reliability test
    */
    it('Telephony_SmsMms_delSimMessag_Promise_0400', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let cnt = 0
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
            console.log("Telephony_SmsMms_delSimMessag_Promise_0400 getAllSimMessages before finish")
            for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
                if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                    addIndex[count]  = index;
                    count++
                    if(count == TEST_RUN_TIME){
                        break;
                    }
                }
            }
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_delSimMessag_Promise_0400 fail")
            done()
            return
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseSet = await sms.addSimMessage(data)
                expect(promiseSet).assertTrue()
                if(index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_delSimMessag_Promise_0400 addSimMessage finish")
                }
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_delSimMessag_Promise_0400 fail")
                done()
                return
            }
        }
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            expect(promiseGet[addIndex[0]] != INVALID_SMS_VALUES || promiseGet[addIndex[0]].length != 0).assertTrue()
            console.log("Telephony_SmsMms_delSimMessag_Promise_0400 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_delSimMessag_Promise_0400 fail")
            done()
            return
        }
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            let delIndex = addIndex[index]
            try {
                let promiseDel = await sms.delSimMessage(true_slot_id,delIndex)
                expect(promiseDel).assertTrue()
                cnt++
                if(cnt == TEST_RUN_TIME) {
                    console.log("Telephony_SmsMms_delSimMessag_Promise_0400 delAllSIMMessages cur finish")
                    done()
                }
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_delSimMessag_Promise_0400 fail")
                done()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getAllSIMMessages_Promise_0500
     * @tc.name     The loop calls getAllSimMessages() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_getAllSIMMessages_Promise_0500', 0, async function (done) {
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promise = await sms.getAllSimMessages(true_slot_id)
                expect(promise != null || promise != undefined).assertTrue()
                if(index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0500 addSimMessage finish")
                    done()
                }
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0500 fail")
                done()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Async_2300
     * @tc.name     The loop calls updateSIMMessage() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_updateSIMMessage_Async_2300', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : RECEIVE_SMS_PDU,
            status : sms.MESSAGE_HAVE_READ
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : sms.MESSAGE_HAVE_READ,
            pdu : RECEIVE_SMS_PDU,
            smsc : ""
        }
        function Recursive(n) {
            if(n < 0) {
                console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 finish")
                done()
                return
            }
            if (n == 0) {
                sms.getAllSimMessages(true_slot_id, (err, result) => {
                    if (err) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 fail")
                        done()
                        return
                    }
                    if(nextIndex == addIndex) {
                        expect(result[addIndex] != INVALID_SMS_VALUES || result[addIndex].length != 0 ).assertTrue()
                    } else {
                        expect(result[nextIndex] == INVALID_SMS_VALUES || result[nextIndex].length == 0 ).assertTrue()
                    }
                    console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 getAllSimMessages cur finish")
                    Recursive(n - 1)
                })
            }
            sms.updateSimMessage(upData, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 update fail")
                    done()
                    return
                }
                expect(result).assertTrue()
                Recursive(n - 1)
            })
        }
        sms.getAllSimMessages(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 fail")
                done()
                return
            }
            beforeSmsRecord = result
            console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 getAllSimMessages before finish")
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
            sms.addSimMessage(data, (adderr, addresult) => {
                if (adderr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 fail")
                    done()
                    return
                }
                expect(addresult).assertTrue()
                console.log("Telephony_SmsMms_updateSIMMessage_Async_2300 finish")
            })
            Recursive(TEST_RUN_TIME)
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_2300
     * @tc.name     The loop calls updateSIMMessage() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_2300', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : RECEIVE_SMS_PDU,
            status : sms.MESSAGE_HAVE_READ
        }
        let addIndex = 0
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2300 getAllSimMessages before finish")
            for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
                if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0) {
                    addIndex = index
                    break;
                }
            }
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2300 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2300 addSimMessage  : " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2300 fail")
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
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let promiseUpdata = await sms.updateSimMessage(upData)
                expect(promiseUpdata).assertFalse()
                if(index == TEST_RUN_TIME - 1) {
                    console.log("Telephony_SmsMms_updateSIMMessage_Promise_2300  finish")
                    done()
                }
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_updateSIMMessage_Promise_2300 fail")
                done()
                return
            }
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getAllSIMMessages_Async_0500
     * @tc.name     The loop calls getAllSimMessages() TEST_RUN_TIME times
     * @tc.desc     Reliability test
     */
    it('Telephony_SmsMms_getAllSIMMessages_Async_0500', 0, async function (done) {
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getISOCountryCodeForSim_Async_0300 finish")
                done()
                return
            }
            sms.getAllSimMessages(true_slot_id, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getAllSIMMessages_Async_0500 fail")
                    done()
                    return
                }
                expect(result != null || result != undefined).assertTrue()
                Recursive(n - 1)
            })
        }
        Recursive(TEST_RUN_TIME)
    })

})
