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

describe('SmsMmsGetAllTest', function () {
    const true_slot_id = 1
    const false_slot_id = 9
    const RECEIVE_SMS_PDU = "240D91689141468496F600001270721142432302B319"
    //The PDU corresponding to the length is  CORRECT_SMS_PDU,OTHER_SMS_PDU,RECEIVE_SMS_PDU,BEYOND_MAX_PDU
    var pduLength = 44

    const INVALID_SMS_VALUES = '00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF' +
    'FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF'


    beforeAll (async function () {
        let allSmsRecord = await sms.getAllSimMessages(true_slot_id)
        //Delete the first 10 SMS messages at each run to ensure the execution of the use case
        for(let index = 0; index < 10; ++index) {
            if(allSmsRecord[index].length != 0) {
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
    * @tc.number   Telephony_SmsMms_getAllSIMMessages_Async_0100
    * @tc.name     When SLOTID is the correct value,Query all SMS records of the SIM card.
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_getAllSIMMessages_Async_0100', 0, async function (done) {
       sms.getAllSimMessages(true_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_getAllSIMMessages_Async_0100 fail")
               done()
               return
           }
           expect(result != null || result != undefined).assertTrue()
           console.log("Telephony_SmsMms_getAllSIMMessages_Async_0100 finish")
           done()
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_getAllSIMMessages_Async_0200
    * @tc.name     When "SLOTID" is an error value,Failed to query all SMS records for SIM card
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_getAllSIMMessages_Async_0200', 0, async function (done) {
       sms.getAllSimMessages(false_slot_id, (err, result) => {
           if (err) {
               expect().assertFail()
               console.log("Telephony_SmsMms_getAllSIMMessages_Async_0200 fail")
               done()
               return
           }
           let isNull = false
           if (result.length == 0 || result == undefined) {
               isNull = true
           }
           expect(isNull).assertTrue()
           console.log("Telephony_SmsMms_getAllSIMMessages_Async_0200  result length = " + result.length)
           console.log("Telephony_SmsMms_getAllSIMMessages_Async_0200 finish")
           done()
       })
   })

   /**
    * @tc.number   Telephony_SmsMms_getAllSIMMessages_Async_0300
    * @tc.name     Add SMS, get all SMS and include new SMS
    * @tc.desc     Function test
    */
   it('Telephony_SmsMms_getAllSIMMessages_Async_0300', 0, async function (done) {
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
               console.log("Telephony_SmsMms_getAllSIMMessages_Async_0300 get befor fail")
               done()
               return
           }
           beforeSmsRecord = result
           console.log("Telephony_SmsMms_getAllSIMMessages_Async_0300 getAllSimMessages before finish")
           for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
               if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0) {
                   addIndex = index
                   break
               }
           }
           sms.addSimMessage(data, (adderr, addresult) => {
               if (adderr) {
                   expect().assertFail()
                   console.log("Telephony_SmsMms_getAllSIMMessages_Async_0300 add fail")
                   done()
                   return
               }
               expect(addresult).assertTrue()
               console.log("Telephony_SmsMms_getAllSIMMessages_Async_0300 finish addresult : " + addresult)
               sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                   if (geterr) {
                       expect().assertFail()
                       console.log("Telephony_SmsMms_getAllSIMMessages_Async_0300 get cur fail")
                       done()
                       return
                   }
                   let addOfPdu = InterceptionPdu(getresult[addIndex], pduLength)
                   expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
                   console.log("Telephony_SmsMms_getAllSIMMessages_Async_0300 getAllSimMessages cur finish")
                   done()
               })
           })
       })
   })

    /**
     * @tc.number   Telephony_SmsMms_getAllSIMMessages_Async_0400
     * @tc.name     Delete the SMS, then get all the SMS
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getAllSIMMessages_Async_0400', 0, async function (done) {
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
                console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 get 1 fail")
                done()
                return
            }
            beforeSmsRecord = result
            console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 getAllSimMessages before finish")
            for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
                if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0) {
                    addIndex = index
                    break
                }
            }
            sms.addSimMessage(data, (adderr, addresult) => {
                if (adderr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 add fail")
                    done()
                    return
                }
                expect(addresult).assertTrue()
                console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 addSimMessage finish result : " + addresult)
                sms.getAllSimMessages(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 get 2 fail")
                        done()
                        return
                    }
                    expect(getresult[addIndex] != INVALID_SMS_VALUES || getresult[addIndex].length != 0).assertTrue()
                    sms.delSimMessage(true_slot_id, addIndex, (delerr, delresult) => {
                        if (delerr) {
                            expect().assertFail()
                            console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 del fail")
                            done()
                            return
                        }
                        expect(delresult).assertTrue()
                        console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 delSimMessage finish : " + delresult)
                        sms.getAllSimMessages(true_slot_id, (geterrO, getresultO) => {
                            if (geterrO) {
                                expect().assertFail()
                                console.log("Telephony_SmsMms_getAllSIMMessages_Async_0400 get 3 fail")
                                done()
                                return
                            }
                            expect(getresultO[addIndex] == INVALID_SMS_VALUES || getresultO[addIndex].length == 0).assertTrue()
                            done()
                        })
                    })
                })
            })
        })
    })


    /**
    * @tc.number   Telephony_SmsMms_getAllSIMMessages_Promise_0100
    * @tc.name     When SLOTID is the correct value,Query all SMS records of the SIM card.
    * @tc.desc     Function test
    */
    it('Telephony_SmsMms_getAllSIMMessages_Promise_0100', 0, async function (done) {
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            expect(promise != null || promise != undefined).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0100 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0100 fail")
            done()
            return
        }
    })

    /**
    * @tc.number   Telephony_SmsMms_getAllSIMMessages_Promise_0200
    * @tc.name     When "SLOTID" is an error value,Failed to query all SMS records for SIM card
    * @tc.desc     Function test
    */
    it('Telephony_SmsMms_getAllSIMMessages_Promise_0200', 0, async function (done) {
        try {
            let promise = await sms.getAllSimMessages(false_slot_id)
            expect( promise.length == 0 || promise == null || promise == undefined).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0200 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0200 fail")
            done()
            return
        }
    })

    /**
    * @tc.number   Telephony_SmsMms_getAllSIMMessages_Promise_0300
    * @tc.name     Add SMS, get all SMS and include new SMS
    * @tc.desc     Function test
    */
    it('Telephony_SmsMms_getAllSIMMessages_Promise_0300', 0, async function (done) {
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
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0300 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0300 get befor fail")
            done()
            return
        }
        for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
            if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0) {
                addIndex = index
                console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0300 addIndex = " + addIndex)
                break
            }
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0300 addSimMessage finish : " + promiseSet )
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0300 add fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            let addOfPdu = InterceptionPdu(promise[addIndex], pduLength)
            expect(addOfPdu == RECEIVE_SMS_PDU).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0300 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0300 get cur fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getAllSIMMessages_Promise_0400
     * @tc.name     Delete the SMS, then get all the SMS
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getAllSIMMessages_Promise_0400', 0, async function (done) {
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
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 getAllSimMessages init finish")
            for (let index = 0,len=beforeSmsRecord.length; index < len; index++) {
                if (beforeSmsRecord[index] == INVALID_SMS_VALUES || beforeSmsRecord[index].length == 0) {
                    addIndex = index
                    console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 00 addIndex :  " + addIndex)
                    break;
                }
            }
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 get init fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.addSimMessage(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 addSimMessage promiseSet :  " + promiseSet)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 get add fail")
            done()
            return
        }
        try {
            let promiseGet = await sms.getAllSimMessages(true_slot_id)
            expect(promiseGet[addIndex] != INVALID_SMS_VALUES || promiseGet[addIndex].length != 0).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 getAllSimMessages before finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 get befor fail")
            done()
            return
        }
        try {
            let promiseDel = await sms.delSimMessage(true_slot_id,addIndex)
            expect(promiseDel).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 delAllSIMMessages cur finish promiseDel :" + promiseDel)
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 get del fail")
            done()
            return
        }
        try {
            let promise = await sms.getAllSimMessages(true_slot_id)
            expect(promise[addIndex] == INVALID_SMS_VALUES || promise[addIndex].length == 0).assertTrue()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 getAllSimMessages cur finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getAllSIMMessages_Promise_0400 get cur fail")
            done()
            return
        }
    })
})
