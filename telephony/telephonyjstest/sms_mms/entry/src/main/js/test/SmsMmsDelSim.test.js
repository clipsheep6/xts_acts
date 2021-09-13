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

describe('SmsMmsDelTest', function () {
    const true_slot_id = 1
    const false_slot_id = 9
    const RECEIVE_SMS_PDU = "240D91689141468496F600001270721142432302B319"
    const INVALID_SMS_VALUES = '00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF'

    var smsIndex = 0;
    beforeAll (async function () {
        //Delete the first 10 SMS messages at each run to ensure the execution of the use case
        let allSmsRecord = await sms.getAllSimMessages(true_slot_id)
        smsIndex = allSmsRecord.letgh
        for(let index = 0; index < smsIndex; ++index) {
            await sms.delSimMessage(true_slot_id,index)
        }
    })

    afterEach (async function () {
        for(let index = 0; index < smsIndex; ++index) {
            await sms.delSimMessage(true_slot_id,index)
        }
    })

   /**
    * @tc.number   Telephony_SmsMms_delSimMessage_Async_0100
    * @tc.name     When SLOTID is the correct value,Deletes a text message from the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_delSimMessage_Async_0100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_delSimMessage_Async_0100 get 1 fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_delSimMessage_Async_0100 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_delSimMessage_Async_0100 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_delSimMessage_Async_0100 addSimMessage finish result : " + addresult)
               sms.delSimMessage(true_slot_id, addIndex, (delerr, delresult) => {
                   if (delerr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_delSimMessage_Async_0100 del fail")
                       done()
                       return
                   }
                   expect(delresult).assertTrue()
                   console.log("Telephony_SmsMms_delSimMessage_Async_0100 delSimMessage finish")
                   sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                       if (geterr) {
                           expect().assertFail()
                           console.log("Telephony_SmsMms_delSimMessage_Async_0100 get 2 fail")
                           done()
                           return
                       }
                       expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                       console.log("Telephony_SmsMms_delSimMessage_Async_0100 getAllSimMessages cur finish")
                       done()
                   })
               })
           })
       })
   })

    /**
    * @tc.number   Telephony_SmsMms_delSimMessage_Async_0200
    * @tc.name     When SLOTID is the wrong value,Deletes a text message from the SIM card fail
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_delSimMessage_Async_0200', 0, async function (done) {
       sms.delSimMessage(false_slot_id, 0, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_delSimMessage_Async_0200 fail")
               done()
               return
           }
           expect(result).assertFalse()
           console.log("Telephony_SmsMms_delSimMessage_Async_0200 delSimMessage finish")
           done()
       })
   })

    /**
    * @tc.number   Telephony_SmsMms_delSimMessage_Async_0300
    * @tc.name     Delete short messages with invalid values,Deletes a text message from the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_delSimMessage_Async_0300', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_delSimMessage_Async_0300 get 1 fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_delSimMessage_Async_0300 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           let errorIndex = addIndex
           sms.delSimMessage(true_slot_id, errorIndex, (delerr, delresult) => {
               if (delerr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_delSimMessage_Async_0300 del fail")
                   done()
                   return
               }
               expect(delresult).assertTrue()
               console.log("Telephony_SmsMms_delSimMessage_Async_0300 delSimMessage finish")
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_delSimMessage_Async_0300 get 2 fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_delSimMessage_Async_0300 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_delSimMessage_Promise_0100
    * @tc.name     When SLOTID is the correct value,Deletes a text message from the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_delSimMessage_Promise_0100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseinit = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseinit
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 get 1 fail")
           done()
           return
       }
       for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
           if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
               addIndex = index
               break;
           }
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 addSimMessage : " + promiseSet)
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 add fail")
           done()
           return
       }
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           expect(promiseGet[addIndex] != INVALID_SMS_VALUES || promiseGet[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 get 2 fail")
           done()
           return
       }
       try {
           let promiseDel = await sms.delSimMessage(true_slot_id,addIndex)
           expect(promiseDel).assertTrue()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 delAllSIMMessages cur finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 del  fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0100 get 3 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_delSimMessage_Promise_0200
    * @tc.name     When SLOTID is the wrong value,Deletes a text message from the SIM card fail
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_delSimMessage_Promise_0200', 0, async function (done) {
       try {
           let promiseDel = await sms.delSimMessage(false_slot_id,0)
           expect(promiseDel).assertFalse()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0200 finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0200 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_delSimMessage_Promise_0300
    * @tc.name     When msgIndex is the index value of invalid SMS messages,Deletes a text message from the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_delSimMessage_Promise_0300', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let addIndex = 0
       try {
           let promiseinit = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseinit
           console.log("Telephony_SmsMms_delSimMessage_Promise_0300 getAllSimMessages before finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0300 get 1 fail")
           done()
           return
       }
       for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
           if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
               addIndex = index
               break;
           }
       }
       let errorIndex = addIndex
       try {
           let promiseDel = await sms.delSimMessage(true_slot_id,errorIndex)
           expect(promiseDel).assertTrue()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0300 delAllSIMMessages cur finish")
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0300 del fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0300 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_delSimMessage_Promise_0300 get 2 fail")
           done()
           return
       }
   })
})
