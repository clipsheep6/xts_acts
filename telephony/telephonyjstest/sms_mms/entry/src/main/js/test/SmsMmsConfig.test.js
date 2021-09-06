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

describe('SmsMmsConfigTest', function () {
    const true_slot_id = 1
    const false_slot_id = 9
    const second_slot_id = 2;
    const IDENTIFIER_MIN = 0
    const IDENTIFIER_MAX = 0xFFFF
    const RANTYPE_GSM = 1
    const RANTYPE_CDMA = 2
    const RANTYPE_ERROR = 3

    var g_dataScAddr = ""
    var g_defaultSmsSlotId = 1
    beforeAll (async function () {
        g_dataScAddr = await sms.getSmscAddr(true_slot_id)
        g_defaultSmsSlotId = await sms.getDefaultSmsSlotId()
    })
    beforeEach(async function () {
        await sms.setSmscAddr(true_slot_id,g_dataScAddr)
        await sms.setDefaultSmsSlotId(g_defaultSmsSlotId)
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0100
     * @tc.name     Set "Identifier" for Cell Broadcast to Minimum (0x0000),Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0100 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_0100 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0200
     * @tc.name     Set "Identifier" for Cell Broadcast to maximum (0xFFFF),
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0200 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_0200 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0300
     * @tc.name     Set cell broadcast identifier above maximum(0xFFFF + 1),Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0300', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MAX + 1,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0300 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Async_0300 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0400
     * @tc.name     Set cell broadcast identifier below minimum (-1),Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0400', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN - 1,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0400 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Async_0400 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0500
     * @tc.name     When "SLOTID" is an error value,Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0500', 0, async function (done) {
        let data = {
            slotId : false_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0500 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Async_0500 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0600
     * @tc.name     Enable flag parameter "enable" to true, then set to true,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0600', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0600 1 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_0600 1 finish")
            sms.setCBConfig(data, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBConfig_Async_0600 2 fail")
                    done()
                    return
                }
                expect(setresult).assertTrue()
                console.log("Telephony_SmsMms_setCBConfig_Async_0600 2 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0700
     * @tc.name     Enable flag parameter "enable" to false, Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0700', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : false,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0700 1 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_0700 1 finish")
            sms.setCBConfig(data, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBConfig_Async_0700 2 fail")
                    done()
                    return
                }
                expect(setresult).assertTrue()
                console.log("Telephony_SmsMms_setCBConfig_Async_0700 2 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0800
     * @tc.name     Enable flag parameter "enable" to true,
     *              then set to false,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0800', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        let secondData = {
            slotId : true_slot_id,
            enable : false,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0800 1 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_0800 1 finish")
            sms.setCBConfig(secondData, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBConfig_Async_0800 2 fail")
                    done()
                    return
                }
                expect(setresult).assertTrue()
                console.log("Telephony_SmsMms_setCBConfig_Async_0800 2 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_0900
     * @tc.name     Enable flag parameter "enable" to false,
     *              then set to true,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_0900', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : false,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        let secondData = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (seterr, setresult) => {
            if (seterr) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_0900 1 fail")
                done()
                return
            }
            expect(setresult).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_0900 1 finish")
            sms.setCBConfig(secondData, (twoerr, tworesult) => {
                if (twoerr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBConfig_Async_0900 2 fail")
                    done()
                    return
                }
                expect(tworesult).assertTrue()
                console.log("Telephony_SmsMms_setCBConfig_Async_0900 2 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_1000
     * @tc.name     Set the network standard parameter "RANTYPE" to 1(Gsm),Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_1000', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_1000 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_1000 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_1100
     * @tc.name     Set the network standard parameter "RANTYPE" to 2(Cdma),Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_1100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_CDMA
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_1100 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Async_1100 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Async_1200
     * @tc.name     Set the network standard parameter "RANTYPE" to an error value,
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Async_1200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_ERROR
        }
        sms.setCBConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBConfig_Async_1200 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Async_1200 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0100
     * @tc.name     Set "Identifier" for Cell Broadcast to Minimum (0x0000),Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0100 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0100 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0200
     * @tc.name     Set "Identifier" for Cell Broadcast to maximum  (0xFFFF),Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0200 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0200 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0300
     * @tc.name     Set cell broadcast identifier above maximum (0xFFFF + 1),Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0300', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MAX + 1,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0300 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0300 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0400
     * @tc.name     Set cell broadcast identifier below minimum (-1),Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0400', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN - 1,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0400 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0400 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0500
     * @tc.name     When "SLOTID" is an error value,Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0500', 0, async function (done) {
        let data = {
            slotId : false_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0500 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0500 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0600
     * @tc.name     Enable flag parameter "enable" to true, then set to true,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0600', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0600 1 finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0600 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0600 2 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0600 2 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0700
     * @tc.name     Enable flag parameter "enable" to false,then set to false,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0700', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : false,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0700 1 finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0700 1 fail")
            done()
            return
        }
        try {
            let promise = await sms.setCBConfig(data)
            expect(promise).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0700 2 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0700 2 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0800
     * @tc.name     Enable flag parameter "enable" to true,
     *              then set to false,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0800', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0800 1 finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0800 1 fail")
            done()
            return
        }
        let secondData = {
            slotId : true_slot_id,
            enable : false,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(secondData)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0800 2 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0800 2 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_0900
     * @tc.name     Enable flag parameter "enable" to false,
     *              then set to true,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0900', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : false,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0900 1 finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0900 1 fail")
            done()
            return
        }
        let secondData = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(secondData)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0900 2 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0900 2 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_1000
     * @tc.name     Set the network standard parameter "RANTYPE" to 1(Gsm),Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_1000', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_1000  finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_1000  fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_1100
     * @tc.name     Set the network standard parameter "RANTYPE" to 2(Cdma),Setup failed
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_1100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_CDMA
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_1100  finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_1100  fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBConfig_Promise_1200
     * @tc.name     Set the network standard parameter "RANTYPE" to an error value,Setup failed
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_1200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            identifier : IDENTIFIER_MIN,
            ranType : RANTYPE_ERROR
        }
        try {
            let promiseSet = await sms.setCBConfig(data)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setCBConfig_Promise_1200  finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_1200  fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0100
     * @tc.name     Set "StartMessageld" to minimum(0x0000) and "EndMessageld" to maxinum(0xFFFF) for cell broadcast,
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0100 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0100 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0200
     * @tc.name     Set "StartMessageld" to minimum(0x0000) and "EndMessageld" to above maximum(0xFFFF + 1) for cell broadcast,
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX + 1,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0200 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0200 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0300
     * @tc.name     Set "StartMessageld" to below minimum(-1) and "EndMessageld" to  maximum(0xFFFF) for cell broadcast,
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0300', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN - 1,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0300 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0300 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0400
     * @tc.name     When "SLOTID" is an error value,Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0400', 0, async function (done) {
        let data = {
            slotId : false_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0400 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0400 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0500
     * @tc.name     Enable flag parameter "enable" to true, then set to true,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0500', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0500 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0500 finish")
        })
        sms.setCBRangeConfig(data ,(err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0500 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0500 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0600
     * @tc.name     Enable flag parameter "enable" to false,
     *              then set to false,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0600', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : false,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (initerr, initresult) => {
            if (initerr) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0600 init fail")
                done()
                return
            }
            expect(initresult).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0600 init finish")
            sms.setCBRangeConfig(data, (err, result) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBRangeConfig_Async_0600 1 fail")
                    done()
                    return
                }
                expect(result).assertTrue()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0600 1 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0700
     * @tc.name     Enable flag parameter "enable" to true,
     *              then set to false,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0700', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        let secondData = {
            slotId : true_slot_id,
            enable : false,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0700 1 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0700 1 finish")
            sms.setCBRangeConfig(secondData, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBRangeConfig_Async_0700 2 fail")
                    done()
                    return
                }
                expect(setresult).assertTrue()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0700 2 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0800
     * @tc.name     Enable flag parameter "enable" to false,
     *              then set to true,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0800', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : false,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        let secondData = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (seterr, setresult) => {
            if (seterr) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0800 1 fail")
                done()
                return
            }
            expect(setresult).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0800 1 finish ")
            sms.setCBRangeConfig(secondData, (twoerr, tworesult) => {
                if (twoerr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setCBRangeConfig_Async_0800 2 fail")
                    done()
                    return
                }
                expect(tworesult).assertTrue()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0800 2 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_0900
     * @tc.name     Set the network standard parameter "RANTYPE" to RANTYPE_GSM(Gsm),
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_0900', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_0900 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_0900 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_1000
     * @tc.name     Set the network standard parameter "RANTYPE" to RANTYPE_CDMA(Cdma),
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_1000', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_CDMA
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_1000 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_1000 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Async_1100
     * @tc.name     Set the network standard parameter "RANTYPE" to an error value,
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Async_1100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_ERROR
        }
        sms.setCBRangeConfig(data, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setCBRangeConfig_Async_1100 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Async_1100 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0100
     * @tc.name     Set "StartMessageld" to 0x0000 and "EndMessageld" to 0xFFFF for cell broadcast,
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBConfig_Promise_0100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0100 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBConfig_Promise_0100 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0200
     * @tc.name     Set "StartMessageld" to 0x0000 and "EndMessageld" to above maximum(0xFFFF + 1) for cell broadcast,Setup failed
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0200', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX + 1,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0200 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0200 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0300
     * @tc.name     Set "StartMessageld" to below minimum (-1) and "EndMessageld" to maximum(0xFFFF) for cell broadcast,Setup failed
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0300', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN - 1,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0300 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0300 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0400
     * @tc.name     When "SLOTID" is an error value,Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0400', 0, async function (done) {
        let data = {
            slotId : false_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0400 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0400 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0500
     * @tc.name     Enable flag parameter "enable" to true,
     *              then set to true,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0500', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0500 1 finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0500 1 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0500 2 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0500 2 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0600
     * @tc.name     Enable flag parameter "enable" to false,
     *              then set to false,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0600', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : false,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0600 1 finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0600 1 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setCBRangeConfig(data)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0600 2 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0600 2 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0700
     * @tc.name     Enable flag parameter "enable" to true,
     *              then set to false,Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0700', 0, async function (done) {
        let dataInit = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(dataInit)
            expect(promiseInit).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0700 init finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0700 init fail")
            done()
            return
        }
        let data = {
            slotId : true_slot_id,
            enable : false,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(data)
            expect(promiseInit).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0700  finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0700  fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0800
     * @tc.name     Enable flag parameter "enable" to false, then set to true,
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0800', 0, async function (done) {
        let dataInit = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(dataInit)
            expect(promiseInit).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0800 dataInit finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0800 dataInit fail")
            done()
            return
        }
        let data = {
            slotId : true_slot_id,
            enable : false,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(data)
            expect(promiseInit).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0800 1 finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0800 1 fail")
            done()
            return
        }
        let secondData = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(secondData)
            expect(promiseInit).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0800 2 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0800 2 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_0900
     * @tc.name     Set the network standard parameter "RANTYPE" to RANTYPE_GSM(Gsm),
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_0900', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_GSM
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(data)
            expect(promiseInit).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0900 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_0900 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_1000
     * @tc.name     Set the network standard parameter "RANTYPE" to RANTYPE_CDMA(Cdma),
     *              Configure a cell broadcast for an identity.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_1000', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_CDMA
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(data)
            expect(promiseInit).assertTrue()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1000 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1000 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setCBRangeConfig_Promise_1100
     * @tc.name     Set the network standard parameter "RANTYPE" to an error value,
     *              Failed to set up cell broadcast
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setCBRangeConfig_Promise_1100', 0, async function (done) {
        let data = {
            slotId : true_slot_id,
            enable : true,
            startMessageId : IDENTIFIER_MIN,
            endMessageId : IDENTIFIER_MAX ,
            ranType : RANTYPE_ERROR
        }
        try {
            let promiseInit = await sms.setCBRangeConfig(data)
            expect(promiseInit).assertFalse()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1100 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setCBRangeConfig_Promise_1100 fail")
            done()
            return
        }
    })
    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Async_0100
     * @tc.name     Set the default card slot ID for sending SMS
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Async_0100', 0, async function (done) {
        sms.getDefaultSmsSlotId((err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0100 fail")
                done()
                return
            }
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0100 get result" + result)
            let slotId = second_slot_id
            if(slotId == result) {
                slotId = true_slot_id
            }
            sms.setDefaultSmsSlotId(slotId, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0100 set fail")
                    done()
                    return
                }
                expect(setresult).assertTrue()
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0100 set finish")
                sms.getDefaultSmsSlotId((geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0100 fail")
                        done()
                        return
                    }
                    expect(getresult == slotId).assertTrue()
                    console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0100 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Async_0200
     * @tc.name     The default card slot ID is set to an error value,Failed to set send SMS card slot ID
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Async_0200', 0, async function (done) {
        let slotId = false_slot_id
        sms.setDefaultSmsSlotId(slotId, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0200 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Async_0200 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100
     * @tc.name     Set the default card slot ID for sending SMS
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100', 0, async function (done) {
        let beforeSlotId = true_slot_id
        try {
            beforeSlotId = await sms.getDefaultSmsSlotId()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100 get finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100 get fail")
            done()
            return
        }
        let slotId = second_slot_id
        if(slotId == beforeSlotId) {
            slotId = true_slot_id
        }
        try {
            let promiseSet = await sms.setDefaultSmsSlotId(slotId)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100 set finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100 set fail")
            done()
            return
        }
        try {
            let promiseGet = await sms.getDefaultSmsSlotId()
            expect(promiseGet == slotId).assertTrue()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100 finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0100  fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setDefaultSmsSlotId_Promise_0200
     * @tc.name     The default card slot ID is set to an error value,Failed to set send SMS card slot ID
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setDefaultSmsSlotId_Promise_0200', 0, async function (done) {
        let slotId = false_slot_id
        try {
            let promiseSet = await sms.setDefaultSmsSlotId(slotId)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0200  finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setDefaultSmsSlotId_Promise_0200  fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Async_0100
     * @tc.name     Set the default card slot ID for sending SMS
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Async_0100', 0, async function (done) {
        let slotId = true_slot_id
        sms.setDefaultSmsSlotId(slotId, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0100 set fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0100 set finish")
            sms.getDefaultSmsSlotId((geterr, getresult) => {
                if (geterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0100 fail")
                    done()
                    return
                }
                expect(getresult == slotId).assertTrue()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0100 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Async_0200
     * @tc.name     The default card slot ID is set to an error value,Failed to set send SMS card slot ID
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Async_0200', 0, async function (done) {
        let slotId = false_slot_id
        let beforSlotId = true_slot_id
        sms.getDefaultSmsSlotId((err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0200 get fail")
                done()
                return
            }
            beforSlotId = result
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0200 get finish")
            sms.setDefaultSmsSlotId(slotId, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0200 set fail")
                    done()
                    return
                }
                expect(setresult).assertFalse()
                console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0200 set finish")
                sms.getDefaultSmsSlotId((geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0200 fail")
                        done()
                        return
                    }
                    expect(getresult == beforSlotId).assertTrue()
                    console.log("Telephony_SmsMms_getDefaultSmsSlotId_Async_0200 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Promise_0100
     * @tc.name     Set the default card slot ID for sending SMS
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Promise_0100', 0, async function (done) {
        let beforeSlotId = true_slot_id
        try {
            let promiseSet = await sms.setDefaultSmsSlotId(beforeSlotId)
            expect(promiseSet).assertTrue()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0100 set finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0100 set fail")
            done()
            return
        }
        try {
            let promise = await sms.getDefaultSmsSlotId()
            expect(promise == beforeSlotId).assertTrue()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0100 finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0100 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200
     * @tc.name     The default card slot ID is set to an error value,Failed to set send SMS card slot ID
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200', 0, async function (done) {
        let beforeSlotId = true_slot_id
        try {
            let promise = await sms.getDefaultSmsSlotId()
            beforeSlotId = promise
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200 finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200 fail")
            done()
            return
        }
        let errorSlotId = false_slot_id
        try {
            let promiseSet = await sms.setDefaultSmsSlotId(errorSlotId)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200 set finish")
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200 set fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.getDefaultSmsSlotId()
            expect(promiseSet == beforeSlotId).assertTrue()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200 finish")
            done()
        } catch(err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getDefaultSmsSlotId_Promise_0200 fail")
            done()
            return
        }
    })

})

