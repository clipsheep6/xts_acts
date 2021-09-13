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

describe('SmsMmsAddTest', function () {

    const true_slot_id = 1
    const false_slot_id = 9
    const MAX_ADDR = 20
    const USABLE_SMSC = "0891683108502105F0";
    const CORRECT_SMS_PDU = "01000D91683106019196F4000800"
    const OTHER_SMS_PDU = "01000D91683108705505F0000800"
    const RECEIVE_SMS_PDU = "240D91689141468496F600001270721142432302B319"
    //The PDU corresponding to the length is  CORRECT_SMS_PDU,OTHER_SMS_PDU,RECEIVE_SMS_PDU,BEYOND_MAX_PDU
    var pduLength = new Array(28,28,44,176)
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

    //Gets the PDU that is stored
    function  InterceptionPdu(parameter, pduLength){
        let ends = 20 + pduLength
        return parameter.substring(20,ends)
    }

    /**
     * @tc.number   Telephony_SmsMms_addSimMessage_Async_0100
     * @tc.name     When SLOTID is the correct value,Save a text message to the SIM card
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_addSimMessage_Async_0100', 0, async function (done) {
        let beforeSmsRecord = new Array()
        let data = {
            slotId : true_slot_id,
            smsc : "",
            pdu : CORRECT_SMS_PDU,
            status : sms.MESSAGE_HAS_BEEN_SENT
        }
        let addIndex = 0
        sms.getAllSimMessages(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_addSimMessage_Async_0100 fail")
                done()
                return
            }
            beforeSmsRecord = result
            console.log("Telephony_SmsMms_addSimMessage_Async_0100 getAllSimMessages before finish")
            for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
                if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                    addIndex = index
                    break
                }
            }
            sms.addSimMessage(data, (adderr, addresult) => {
                if (adderr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_addSimMessage_Async_0100 add fail")
                    done()
                    return
                }
                expect(addresult).assertTrue()
                console.log("Telephony_SmsMms_addSimMessage_Async_0100 finish result : " + addresult)
                sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_addSimMessage_Async_0100 get fail")
                        done()
                        return
                    }
                    let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[0])
                    expect(addOfPdu == CORRECT_SMS_PDU).assertTrue()
                    console.log("Telephony_SmsMms_addSimMessage_Async_0100 getAllSimMessages cur finish")
                    done()
                })
            })
        })
    })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0200
    * @tc.name     When SLOTID is the wrong value,Failed to save SMS to SIM
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0200', 0, async function (done) {
       let data = {
           slotId : false_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       sms.addSimMessage(data, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_0200 fail")
               done()
               return
           }
           expect(result).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Async_0200 finish")
           done()
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0300
    * @tc.name     Set the SMS center service address "smsc" to the correct value,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0300', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : USABLE_SMSC,
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_0300 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_0300 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0300 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_0300 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_0300 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[2])
                   expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0300 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0400
    * @tc.name     Set the SMS center service address "SMSC" to empty,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0400', 0, async function (done) {
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
               console.log("Telephony_SmsMms_addSimMessage_Async_0400 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_0400 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0400 get add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_0400 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_0400 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[2])
                   expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0400 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0500
    * @tc.name     Set the length of SMS service address "SMSC" exceeding the limit,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0500', 0, async function (done) {
       let beforeSmsRecord = new Array()
       const count = MAX_ADDR + 1
       let curAddr = ''
       for (let index = 0; index < count; index++) {
           curAddr += 'a'
       }
       let data = {
           slotId : true_slot_id,
           smsc : curAddr,
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_0500 get beforfail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_0500 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0500 add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_0500 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_0500 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0500 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0600
    * @tc.name     Set the SMS center service address "SMSC" to Chinese,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0600', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "短信中心服务地址",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_0600 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_0600 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0600 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_0600 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_0600 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[2])
                   expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0600 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0700
    * @tc.name     Set the SMS center service address "SMSC" to English,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0700', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "English",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_0700 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_0700 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0700 add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_0700 finish result ： " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_0700 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0700 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0800
    * @tc.name     Set the SMS center service address "SMSC" to Special characters,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0800', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "$%&**^?",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_0800 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_0800 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0800 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_0800 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_0800 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[2])
                    expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0800 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_0900
    * @tc.name     Set the SMS center service address "SMSC" to Mixed character,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_0900', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "12？￥#Qs地址",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_0900 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_0900 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0900 add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_0900 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_0900 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_0900 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1000
    * @tc.name     Set the normal PDU,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1000', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1000 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1000 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1000 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_1000 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1000 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[0])
                    expect(addOfPdu == CORRECT_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1000 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1100
    * @tc.name     Set the length of PDU to exceed the upper limit(176),Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let newPdu = BEYOND_MAX_PDU
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : newPdu,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1100 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1100 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1100 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_1100 finish result ：" + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1100 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[3])
                    expect(addOfPdu == BEYOND_MAX_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1100 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1200
    * @tc.name     Set the PDU to empty,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1200', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1200 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1200 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1200 add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_1200 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1200 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1200 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1300
    * @tc.name     Set PDU to Chinese,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1300', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "中文文本",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1300 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1300 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1300 get add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_1300 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1300 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1300 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1400
    * @tc.name     Set PDU to English,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1400', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "English",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1400 get befir fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1400 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1400 add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_1400 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1400 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1400 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1500
    * @tc.name     Set PDU to figure,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1500', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "123456789",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1500 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1500 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1500 add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_1500 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1500 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1500 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1600
    * @tc.name     Set PDU to Special characters,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1600', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "……%#￥？》",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1600 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1600 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1600 add  fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_1600 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1600 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1600 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1700
    * @tc.name     Set PDU to Mixed character,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1700', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "12中文English<>?$",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1700 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1700 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1700 add fail")
                   done()
                   return
               }
               expect(addresult).assertFalse()
               console.log("Telephony_SmsMms_addSimMessage_Async_1700 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1700 get cur fail")
                       done()
                       return
                   }
                   expect(getresult[addIndex] == INVALID_SMS_VALUES || getresult[addIndex].length == 0).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1700 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1800
    * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_READ,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1800', 0, async function (done) {
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
               console.log("Telephony_SmsMms_addSimMessage_Async_1800 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1800 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1800 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_1800 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1800 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[2])
                    expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1800 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_1900
    * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_UNREAD,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_1900', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_UNREAD
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_1900 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_1900 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1900 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_1900 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_1900 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[2])
                    expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_1900 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_2000
    * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_SENT,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_2000', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : OTHER_SMS_PDU,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_2000 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_2000 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_2000 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_2000 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_2000 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[1])
                    expect(addOfPdu == OTHER_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_2000 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Async_2100
    * @tc.name     When status is equal to the correct value of SIM_MESSAGE_STATUS_UNSENT,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Async_2100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_NOT_SENT
       }
       let addIndex = 0
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_addSimMessage_Async_2100 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_addSimMessage_Async_2100 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_addSimMessage_Async_2100 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_addSimMessage_Async_2100 finish result : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_addSimMessage_Async_2100 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength[0])
                    expect(addOfPdu == CORRECT_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_addSimMessage_Async_2100 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0100
    * @tc.name     When SLOTID is the correct value,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_0100 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   console.log("Telephony_SmsMms_addSimMessage_Promise_0100 getAllSimMessages before for addIndex : " + addIndex)
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0100 get 1 fail")
           done()
           return
       }
       try {
           console.log("Telephony_SmsMms_addSimMessage_Promise_0100 addSimMessage addIndex : " + addIndex)
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0100 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0100 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0100 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0100 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0200
    * @tc.name     When SLOTID is the wrong value,Failed to save SMS to SIM
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0200', 0, async function (done) {
       let data = {
           slotId : false_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0200 finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0200 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0300
    * @tc.name     Set the SMS center service address "smsc" to the correct value,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0300', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : USABLE_SMSC,
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_0300 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0300 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0300 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0300 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0300 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0300 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0400
    * @tc.name     Set the SMS center service address "SMSC" to empty,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0400', 0, async function (done) {
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
           console.log("Telephony_SmsMms_addSimMessage_Promise_0400 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0400 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0400 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0400 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0400 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0400 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0500
    * @tc.name     Set the length of SMS service address "SMSC" exceeding the limit,
    *              Failed to save the SMS message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0500', 0, async function (done) {
       let beforeSmsRecord = new Array()
       const count = MAX_ADDR + 1
       let curAddr = ''
       for (let index = 0; index < count; index++) {
           curAddr += 'a'
       }
       let data = {
           slotId : true_slot_id,
           smsc : curAddr,
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_0500 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0500 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0500 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0500 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0500 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0500 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0600
    * @tc.name     Set the SMS center service address "SMSC" to Chinese,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0600', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "短信中心服务地址",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_0600 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0600 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0600 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0600 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0600 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0600 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0700
    * @tc.name     Set the SMS center service address "SMSC" to English,Failed to save the SMS message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0700', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "English",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_0700 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0700 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0700 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0700 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0700 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0700 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0800
    * @tc.name     Set the SMS center service address "SMSC" to Special characters,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0800', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "$%&**^?",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_0800 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0800 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0800 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0800 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0800 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0800 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_0900
    * @tc.name     Set the SMS center service address "SMSC" to Mixed character,Failed to save the SMS message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_0900', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "12？￥#Qs地址",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_0900 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0900 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0900 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0900 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0900 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_0900 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1000
    * @tc.name     Set the normal PDU,Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1000', 0, async function (done) {
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
           console.log("Telephony_SmsMms_addSimMessage_Promise_1000 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1000 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1000 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1000 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1000 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1000 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1100
    * @tc.name     Set the length of PDU to exceed the upper limit(176),Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let newPdu = BEYOND_MAX_PDU
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : newPdu,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1100 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1100 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1100 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1100 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1100 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1100 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1200
    * @tc.name     Set the PDU to empty,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1200', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1200 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1200 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1200 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1200 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1200 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1200 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1300
    * @tc.name     Set PDU to Chinese,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1300', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "中文文本",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1300 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1300 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1300 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1300 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1300 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1300 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1400
    * @tc.name     Set PDU to English,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1400', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "English",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1400 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1400 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1400 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1400 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1400 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1400 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1500
    * @tc.name     Set PDU to figure,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1500', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "123456789",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1500 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1500 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1500 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1500 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1500 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1500 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1600
    * @tc.name     Set PDU to Special characters,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1600', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "……%#￥？》",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1600 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1600 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1600 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1600 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1600 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1600 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1700
    * @tc.name     Set PDU to Mixed character,Failed to save SMS to SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1700', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : "12中文English<>?$",
           status : sms.MESSAGE_HAVE_READ
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1700 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1700 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertFalse()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1700 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1700 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1700 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1700 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1800
    * @tc.name     When status is equal to the correct value of MESSAGE_HAVE_READ,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1800', 0, async function (done) {
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
           console.log("Telephony_SmsMms_addSimMessage_Promise_1800 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1800 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1800 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1800 add  fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1800 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1800 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_1900
    * @tc.name     When status is equal to the correct value of MESSAGE_UNREAD,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_1900', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : RECEIVE_SMS_PDU,
           status : sms.MESSAGE_UNREAD
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_1900 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1900 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1900 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1900 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1900 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_1900 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_2000
    * @tc.name     When status is equal to the correct value of MESSAGE_HAS_BEEN_SENT,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_2000', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_2000 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2000 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2000 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2000 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2000 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2000 get 2 fail")
           done()
           return
       }
   })

   /**
    * @tc.number   Telephony_SmsMms_addSimMessage_Promise_2100
    * @tc.name     When status is equal to the correct value of MESSAGE_NOT_SENT,
    *              Save a text message to the SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_addSimMessage_Promise_2100', 0, async function (done) {
       let beforeSmsRecord = new Array()
       let data = {
           slotId : true_slot_id,
           smsc : "",
           pdu : CORRECT_SMS_PDU,
           status : sms.MESSAGE_HAS_BEEN_SENT
       }
       let addIndex = 0
       try {
           let promiseGet = await sms.getAllSimMessages(true_slot_id)
           beforeSmsRecord = promiseGet
           console.log("Telephony_SmsMms_addSimMessage_Promise_2100 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0 ) {
                   addIndex = index
                   break
               }
           }
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2100 get 1 fail")
           done()
           return
       }
       try {
           let promiseSet = await sms.addSimMessage(data)
           expect(promiseSet).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2100 addSimMessage ： " + promiseSet )
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2100 add fail")
           done()
           return
       }
       try {
           let promise = await sms.getAllSimMessages(true_slot_id)
           expect(promise[addIndex] != INVALID_SMS_VALUES || promise[addIndex].length != 0).assertTrue()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2100 getAllSimMessages cur finish")
           done()
       } catch(err) {
           expect().assertFail()
           console.log("Telephony_SmsMms_addSimMessage_Promise_2100 get 2 fail")
           done()
           return
       }
   })
})
