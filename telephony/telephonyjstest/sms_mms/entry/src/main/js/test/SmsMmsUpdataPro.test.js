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

describe('SmsMmsUpdataTest', function () {
    const true_slot_id = 1
    const false_slot_id = 9
    const CORRECT_SMS_PDU = "01000D91683106019196F4000800"
    const RECEIVE_SMS_PDU = "240D91689141468496F600001270721142432302B319"
    const RECEIVE_OTHER_SMS_PDU = "240D91689141468496F600001270721174322302B91C"

    const INVALID_SMS_VALUES = '00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF'

    const BEYOND_MAX_PDU = '01000D91683106019196F400084A0031003100' +
    '3100310031003100310031003100310031003100310031' +
    '00310031003100310031003100310031003100310031003' +
    '100310031003100310031003100310031003100310031'

    beforeAll (async function () {
        //Delete the first 10 SMS messages at each run to ensure the execution of the use case
        let allSmsRecord = await sms.getAllSimMessages(true_slot_id)
        if(allSmsRecord.length != 0) {
            for(let index = 0; index < 10; ++index) {
                await sms.delSimMessage(true_slot_id,index)
            }
        }
    })

    afterEach (async function () {
        for(let index = 0; index < 10; ++index) {
            await sms.delSimMessage(true_slot_id,index)
        }
    })

    /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0100
    * @tc.name     When SLOTID is the correct value,Update a SIM card SMS record.
    * @tc.desc     Function test
    */
    it('Telephony_SmsMms_updateSIMMessage_Promise_0100', 0, async function (done) {
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
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 get fail")
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
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 addSimMessage :  " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 add fail")
            done()
            return
        }
        let smsStatus = sms.MESSAGE_UNREAD
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : smsStatus,
            pdu : RECEIVE_SMS_PDU,
            smsc : ""
        }
        try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertTrue()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 promiseUpdata cur finish : " + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 fail")
           done()
           return
       }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            } else{
                expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0100 get 2 fail")
            done()
            return
        }
   })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0200
    * @tc.name     When SLOTID is the wrong value,Failed to update SIM card SMS record
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_0200', 0, async function (done) {
       let upData = {
           slotId : false_slot_id,
           msgIndex : 0,
           newStatus : sms.MESSAGE_UNREAD,
           pdu : RECEIVE_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0200 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0200 fail")
           done()
           return
       }
   })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0300
     * @tc.name     Example Change the SMS status from MESSAGE_HAVE_READ to MESSAGE_UNREAD,
     *              Update a SIM card SMS record.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_0300', 0, async function (done) {
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
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 getAllSimMessages before finish")
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
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 get fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 addSimMessage promiseAdd :" + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 add fail")
            done()
            return
        }
        let smsStatus = sms.MESSAGE_UNREAD
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : smsStatus,
            pdu : RECEIVE_SMS_PDU,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 updateSimMessage cur finish promiseUpdata : " + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 updata fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            } else{
                expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0300 fail")
            done()
            return
        }
    })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0400
    * @tc.name     Example Change the SMS status from MESSAGE_HAVE_READ to MESSAGE_HAS_BEEN_SENT,
    *              Failed to update the SMS record of the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_0400', 0, async function (done) {
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
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 addSimMessage  : " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 add fail")
           done()
           return
       }
       let smsStatus = sms.MESSAGE_HAS_BEEN_SENT
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : smsStatus,
           pdu : RECEIVE_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 getAllSimMessages cur finish : " + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 updata fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
               expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           } else {
               expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0400 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0500
    * @tc.name     Example Change the SMS status from MESSAGE_HAVE_READ to MESSAGE_NOT_SENT,
    *              Failed to update the SMS record of the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_0500', 0, async function (done) {
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
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 addSimMessage :  " +  promiseSet)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 add fail")
           done()
           return
       }
       let smsStatus = sms.MESSAGE_NOT_SENT
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : smsStatus,
           pdu : RECEIVE_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 updateSimMessage cur finish : " + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 updata fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
              expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           } else {
              expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0500 fail")
           done()
           return
       }
   })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0600
     * @tc.name     Example Change the SMS status from MESSAGE_UNREAD to MESSAGE_HAVE_READ,
     *              Update a SIM card SMS record.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_0600', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : RECEIVE_SMS_PDU,
            status : sms.MESSAGE_UNREAD
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 getAllSimMessages before finish")
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
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 get fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 addSimMessage promiseSet : " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 add fail")
            done()
            return
        }
        let smsStatus = sms.MESSAGE_HAVE_READ
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : smsStatus,
            pdu : RECEIVE_SMS_PDU,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 updateSimMessage finish promiseUpdata :" + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 updata fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            }
            else {
                expect(promise[nextIndex] != INVALID_SMS_VALUES || promise[nextIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0600 fail")
            done()
            return
        }
    })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0700
    * @tc.name     Example Change the SMS status from MESSAGE_UNREAD to MESSAGE_HAS_BEEN_SENT,
    *              Failed to update the SMS record of the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_0700', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_UNREAD
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 add fail")
           done()
           return
       }
       let smsStatus = sms.MESSAGE_HAS_BEEN_SENT
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : smsStatus,
           pdu : RECEIVE_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 getAllSimMessages cur finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 updata fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
               expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           } else {
              expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0700 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0800
    * @tc.name     Example Change the SMS status from MESSAGE_UNREAD to MESSAGE_NOT_SENT,
    *              Failed to update the SMS record of the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_0800', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_UNREAD
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 add fail")
           done()
           return
       }
       let smsStatus = sms.MESSAGE_NOT_SENT
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : smsStatus,
           pdu : RECEIVE_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 getAllSimMessages cur finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 updata fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
               expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           } else {
               expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_0800 fail")
           done()
           return
       }
   })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_0900
     * @tc.name     Example Change the SMS status from MESSAGE_HAS_BEEN_SENT to MESSAGE_NOT_SENT,
     *              Update a SIM card SMS record.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_0900', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 getAllSimMessages before finish")
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
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 get fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 addSimMessage  : " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 add fail")
            done()
            return
        }
        let smsStatus = sms.MESSAGE_NOT_SENT
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : smsStatus,
            pdu : CORRECT_SMS_PDU,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 promiseUpdata finish : " + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 updata fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            } else {
                expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_0900 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1000
     * @tc.name     Example Change the SMS status from MESSAGE_HAS_BEEN_SENT to MESSAGE_HAVE_READ,
     *              Failed to update the SMS record of the SIM card
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_1000', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 getAllSimMessages before finish")
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
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 get fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 addSimMessage  " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 add fail")
            done()
            return
        }
        let smsStatus = sms.MESSAGE_HAVE_READ
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : smsStatus,
            pdu : CORRECT_SMS_PDU,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertFalse()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 promiseUpdata  finish : " + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 updata fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            } else {
               expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1000 fail")
            done()
            return
        }
    })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1100
    * @tc.name     Example Change the SMS status from MESSAGE_HAS_BEEN_SENT to MESSAGE_UNREAD,
    *              Failed to update the SMS record of the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_1100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 addSimMessage :  " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 add fail")
           done()
           return
       }
       let smsStatus = sms.MESSAGE_UNREAD
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : smsStatus,
           pdu : CORRECT_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 promiseUpdata finish : " + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 updata fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
               expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           } else {
              expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1100 fail")
           done()
           return
       }
   })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1200
     * @tc.name     Example Change the SMS status from MESSAGE_NOT_SENT to MESSAGE_HAS_BEEN_SENT,
     *              Update a SIM card SMS record.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_1200', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_NOT_SENT
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 get fail")
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
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 addSimMessage :  " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 add fail")
            done()
            return
        }
        let smsStatus = sms.MESSAGE_HAS_BEEN_SENT
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : smsStatus,
            pdu : CORRECT_SMS_PDU,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 promiseUpdata  finish : " + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 updata  fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            }
            else {
               expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1200 fail")
            done()
            return
        }
    })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1300
    * @tc.name     Example Change the SMS status from MESSAGE_NOT_SENT to MESSAGE_HAVE_READ,
    *              Failed to update the SMS record of the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_1300', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_NOT_SENT
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 getAllSimMessages before finish")
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
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 get fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 addSimMessage :  " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 add fail")
           done()
           return
       }
       let smsStatus = sms.MESSAGE_HAVE_READ
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : smsStatus,
           pdu : CORRECT_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 promiseUpdata cur finish :" + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
               expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           }
           else {
              expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1300 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1400
    * @tc.name     Example Change the SMS status from MESSAGE_NOT_SENT to MESSAGE_UNREAD,
    *              Failed to update the SMS record of the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_1400', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_NOT_SENT
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 add :  "+ promiseSet)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 add fail")
           done()
           return
       }
       let smsStatus = sms.MESSAGE_UNREAD
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : smsStatus,
           pdu : CORRECT_SMS_PDU,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 promiseUpdata finish : " + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
               expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           }
           else {
              expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1400 fail")
           done()
           return
       }
   })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1500
     * @tc.name     Set PDU to the correct value,Update a SIM card SMS record.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_1500', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : RECEIVE_SMS_PDU,
            status : sms.MESSAGE_UNREAD
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 get fail")
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
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 addSimMessage  promiseSet :" + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 add fail")
            done()
            return
        }
        let index = addIndex
        let upDataPdu = RECEIVE_OTHER_SMS_PDU
        let upData = {
            slotId : true_slot_id,
            msgIndex : index,
            newStatus : sms.MESSAGE_UNREAD,
            pdu : upDataPdu,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 promiseUpdata finish ：" + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 add fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            }
            else {
               expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1500 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1600
     * @tc.name     Set the length of the PDU to exceed the maximum（176）,Update a SIM card SMS record.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_1600', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 get fail")
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
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 add  : " +  promiseSet)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 add fail")
            done()
            return
        }
        let updataPdu = BEYOND_MAX_PDU
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : sms.MESSAGE_HAS_BEEN_SENT,
            pdu : updataPdu,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertTrue()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 updateSimMessage finish : " + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 updata fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            }
            else {
               expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1600 fail")
            done()
            return
        }
    })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1700
    * @tc.name     Set the PDU to empty,Failed to update SIM card SMS record
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_1700', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1700 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1700 fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1700 add  :" + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1700 add fail")
           done()
           return
       }
       let updataPdu = ""
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : sms.MESSAGE_HAS_BEEN_SENT,
           pdu : updataPdu,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1700 updateSimMessage fail : " + promiseUpdata)
           done()
       } catch(err) {
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1700 updata  finish")
           done()
           return
       }
   })

    /**
     * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1800
     * @tc.name     Set the PDU to chinese,Failed to update SIM card SMS record
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_updateSIMMessage_Promise_1800', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        let addIndex = 0
        let nextIndex = 0
        let isSecond = false
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            beforeSmsRecord = promiseGet
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 get fail")
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
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 add = " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 add fail")
            done()
            return
        }
        let updataPdu = "这是一段用于测试的中文文本"
        let upData = {
            slotId : true_slot_id,
            msgIndex : addIndex,
            newStatus : sms.MESSAGE_HAS_BEEN_SENT,
            pdu : updataPdu,
            smsc : ""
        }
        try {
            let promiseUpdata = await sms.updateSimMessage(upData)
            expect(promiseUpdata).assertFalse()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 getAllSimMessages updata finish : " + promiseUpdata)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 updata fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            }
            else {
               expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_1800 fail")
            done()
            return
        }
    })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_1900
    * @tc.name     Set the PDU to English,Failed to update SIM card SMS record
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_1900', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_UNREAD
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 add : " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 add fail")
           done()
           return
       }
       let updataPdu = "This is an English text for the test"
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : sms.MESSAGE_UNREAD,
           pdu : updataPdu,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 updata fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           if(nextIndex != addIndex){
               expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
           }
           else {
              expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           }
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_1900 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_2000
    * @tc.name     Set the PDU to figure,Failed to update SIM card SMS record
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_2000', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_UNREAD
       }
       let addIndex = 0
       let nextIndex = 0
       let isSecond = false
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 add : " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 add fail")
           done()
           return
       }
       let updataPdu = "123123123123123123123"
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : sms.MESSAGE_UNREAD,
           pdu : updataPdu,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 getAllSimMessages cur finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 updata fail")
           done()
           return
       }
       try {
        let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            }
            else {
            expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2000 fail")
            done()
            return
        }
   })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_2100
    * @tc.name     Set the PDU to Special characters,Failed to update SIM card SMS record
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_2100', 0, async function (done) {
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
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 get fail")
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
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 add : " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 add fail")
           done()
           return
       }
       let updataPdu = "《》？*……%）（"
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : sms.MESSAGE_HAVE_READ,
           pdu : updataPdu,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 promiseUpdata cur finish : " + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 updata fail")
           done()
           return
       }
       try {
        let promise = await sms.getAllSimMessages(true_slot_id)
            if(nextIndex != addIndex){
                expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
            }
            else {
            expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
            }
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_updateSIMMessage_Promise_2100 fail")
            done()
            return
        }
   })

   /**
    * @tc.number   Telephony_SmsMms_updateSIMMessage_Promise_2200
    * @tc.name     Set the PDU to Mixed character,Failed to update SIM card SMS record
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_updateSIMMessage_Promise_2200', 0, async function (done) {
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
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 getAllSimMessages before finish")
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
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 get fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 add : " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 add fail")
           done()
           return
       }
       let updataPdu = "《123zw中文?"
       let upData = {
           slotId : true_slot_id,
           msgIndex : addIndex,
           newStatus : sms.MESSAGE_HAVE_READ,
           pdu : updataPdu,
           smsc : ""
       }
       try {
           let promiseUpdata = await sms.updateSimMessage(upData)
           expect(promiseUpdata).assertFalse()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 promiseUpdata cur finish : " + promiseUpdata)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 updata fail")
           done()
           return
       }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
                if(nextIndex != addIndex){
                    expect(promise[nextIndex] == INVALID_SMS_VALUES || promise[nextIndex].length == 0).assertTrue()
                }
                else {
                    expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
                }
                console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 getAllSimMessages cur finish")
                done()
            } catch(err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_updateSIMMessage_Promise_2200 fail")
                done()
                return
            }
   })

})
