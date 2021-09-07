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

describe('SmsMmsSmscTest', function () {
    const true_slot_id = 1
    const false_slot_id = 9
    const MAX_ADDR = 20

    const OTHER_SMSC_NUMBER = "+8613800755500"
    const USABLE_SMSC_NUMBER = "+8613800512500"

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
    * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0100
    * @tc.name     When SLOTID is the correct value,Set up the SMS service address.
    * @tc.desc     Function test
    */
    it('Telephony_SmsMms_setSmscAddr_Async_0100', 0, async function (done) {
        let beforeAddr = ""
        let curAddr = USABLE_SMSC_NUMBER
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Async_0100 get 1 fail")
                done()
                return
            }
            beforeAddr = result
            if(beforeAddr == curAddr) {
                curAddr = OTHER_SMSC_NUMBER
            }
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0100 set fail")
                    done()
                    return
                }
                expect(setresult).assertTrue()
                console.log("setSmscAddr beforeAddr = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_setSmscAddr_Async_0100 get 2 fail")
                        done()
                        return
                    }
                    expect(getresult == curAddr).assertTrue()
                    console.log("getSmscAddr result = " + getresult)
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0100 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0200
     * @tc.name     When "SLOTID" is an error value,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0200', 0, async function (done) {
        sms.setSmscAddr(false_slot_id, "", (err, result) => {
            if (err) {
                console.log("err  =  " + err.message)
                console.log("Telephony_SmsMms_setSmscAddr_Async_0200 fail")
                done()
                return
            }
            expect(result).assertFalse()
            console.log("setSmscAddr result = " + result)
            console.log("Telephony_SmsMms_setSmscAddr_Async_0200 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0300
     * @tc.name     Set the value of “scAddr” to correct value ,Set up the SMS service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0300', 0, async function (done) {
        let beforeAddr = ""
        let curAddr = USABLE_SMSC_NUMBER
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                console.log("Telephony_SmsMms_setSmscAddr_Async_0300 get 1 fail")
                expect().assertFail()
                done()
                return
            }
            beforeAddr = result
            if(beforeAddr == curAddr) {
                curAddr = OTHER_SMSC_NUMBER
            }
            console.log("getSmscAddr beforeAddr = " + beforeAddr)
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0300 set fail")
                    done()
                    return
                }
                expect(setresult).assertTrue()
                console.log("setSmscAddr beforeAddr = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_setSmscAddr_Async_0300 get 2 fail")
                        done()
                        return
                    }
                    expect(getresult == curAddr).assertTrue()
                    console.log("getSmscAddr result = " + getresult)
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0300 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0400
     * @tc.name     Set the value of “scAddr” to null,Description Failed to set the SMS service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0400', 0, async function (done) {
        let curAddr = ""
        let beforeAddr = ""
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Async_0400 get 1 fail")
                done()
                return
            }
            beforeAddr = result
            console.log("getSmscAddr beforeAddr = " + beforeAddr)
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0400 set fail")
                    done()
                    return
                }
                expect(setresult).assertFalse()
                console.log("setSmscAddr beforeAddr = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        console.log("Telephony_SmsMms_setSmscAddr_Async_0400 get 2 fail")
                        done()
                        return
                    }
                    expect(getresult == beforeAddr).assertTrue()
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0400 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0500
     * @tc.name     Sets the “scAddr” length to exceed the maximum（20）,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0500', 0, async function (done) {
        var beforeAddr = ""
        const count = MAX_ADDR + 1
        let curAddr = ''
        for (let index = 0; index < count; index++) {
            curAddr += 'a'
        }
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Async_0500 fail")
                done()
                return
            }
            beforeAddr = result
            if(beforeAddr == curAddr) {
                curAddr += 'a'
            }
            console.log("getSmscAddr beforeAddr = " + beforeAddr)
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    done()
                    return
                }
                expect(setresult).assertFalse()
                console.log("setSmscAddr result = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        done()
                        return
                    }
                    expect(getresult == beforeAddr).assertTrue()
                    console.log("setSmscAddr result = " + getresult)
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0500 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0600
     * @tc.name     Set “scAddr” to Chinese ,Set up the SMS service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0600', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = '中文文本'
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Async_0600 fail")
                done()
                return
            }
            beforeAddr = result
            if(beforeAddr == curAddr) {
                curAddr += '中'
            }
            console.log("Telephony_SmsMms_setSmscAddr_Async_0600 getSmscAddr beforeAddr = " + beforeAddr)
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    done()
                    return
                }
                expect(setresult).assertFalse()
                console.log("setSmscAddr result = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        done()
                        return
                    }
                    expect(getresult == beforeAddr).assertTrue()
                    console.log("setSmscAddr result = " + getresult)
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0600 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0700
     * @tc.name     Set “scAddr” to English ,Set up the SMS service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0700', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = 'English'
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Async_0700 fail")
                done()
                return
            }
            beforeAddr = result
            if(beforeAddr == curAddr) {
                curAddr += 'text'
            }
            console.log("Telephony_SmsMms_setSmscAddr_Async_0700 getSmscAddr beforeAddr = " + beforeAddr)
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    done()
                    return
                }
                expect(setresult).assertFalse()
                console.log("setSmscAddr result = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        done()
                        return
                    }
                    expect(getresult == beforeAddr).assertTrue()
                    console.log("setSmscAddr result = " + getresult)
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0700 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0800
     * @tc.name     Set “scAddr” to  special character ,Set up the SMS service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0800', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = '<>?^&*$'
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Async_0800 fail")
                done()
                return
            }
            beforeAddr = result
            if(beforeAddr == curAddr) {
                curAddr += '??'
            }
            console.log("Telephony_SmsMms_setSmscAddr_Async_0800 getSmscAddr beforeAddr = " + beforeAddr)
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    done()
                    return
                }
                expect(setresult).assertFalse()
                console.log("setSmscAddr result = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        done()
                        return
                    }
                    expect(getresult == beforeAddr).assertTrue()
                    console.log("setSmscAddr result = " + getresult)
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0800 finish")
                    done()
                })
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Async_0900
     * @tc.name     Set “scAddr” to  special Mixed character ,Set up the SMS service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Async_0900', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = 'Eng中文*^*(12?'
        sms.getSmscAddr(true_slot_id, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_setSmscAddr_Async_0900 fail")
                done()
                return
            }
            beforeAddr = result
            if(beforeAddr == curAddr) {
                curAddr += 'q1中&'
            }
            console.log("Telephony_SmsMms_setSmscAddr_Async_0900 getSmscAddr beforeAddr = " + beforeAddr)
            sms.setSmscAddr(true_slot_id, curAddr, (seterr, setresult) => {
                if (seterr) {
                    expect().assertFail()
                    done()
                    return
                }
                expect(setresult).assertFalse()
                console.log("setSmscAddr result = " + setresult)
                sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                    if (geterr) {
                        expect().assertFail()
                        done()
                        return
                    }
                    expect(getresult == beforeAddr).assertTrue()
                    console.log("setSmscAddr result = " + getresult)
                    console.log("Telephony_SmsMms_setSmscAddr_Async_0900 finish")
                    done()
                })
            })
        })
    })

    /**
    * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0100
    * @tc.name     When SLOTID is the correct value,Set up the SMS service address.
    * @tc.desc     Function test
    */
    it('Telephony_SmsMms_setSmscAddr_Promise_0100', 0, async function (done) {
        let beforeAddr = ""
        let curAddr = USABLE_SMSC_NUMBER
        try {
            let promiseGet = await sms.getSmscAddr(true_slot_id)
            beforeAddr = promiseGet
            if(beforeAddr == curAddr) {
                curAddr = OTHER_SMSC_NUMBER
            }
            console.log("getSmscAddr beforeAddr = " + beforeAddr)
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_createMessage_Promise_0100 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertTrue()
            console.log("setSmscAddr beforeAddr = " + promiseSet)
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_createMessage_Promise_0100 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == curAddr).assertTrue()
            console.log("getSmscAddr result = " + promise)
            console.log("Telephony_SmsMms_createMessage_Promise_0100 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_createMessage_Promise_0100 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0200
     * @tc.name     When "SLOTID" is an error value,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0200', 0, async function (done) {
        let curAddr = ""
        try {
            let promiseSet = await sms.setSmscAddr(false_slot_id, curAddr)
            expect(promiseSet).assertFalse()
            console.log("setSmscAddr beforeAddr = " + promiseSet)
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_createMessage_Promise_0200 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0300
     * @tc.name     Set the value of “scAddr” to correct value ,Set up the SMS service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0300', 0, async function (done) {
        let beforeAddr = ""
        let curAddr = USABLE_SMSC_NUMBER
        try {
            beforeAddr = await sms.getSmscAddr(true_slot_id)
            if(beforeAddr == curAddr) {
                curAddr = OTHER_SMSC_NUMBER
            }
            console.log("getSmscAddr beforeAddr = " + beforeAddr)
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0300 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertTrue()
            console.log("setSmscAddr beforeAddr = " + promiseSet)
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0300 fail")
            done()
            return
        }
        try {
            let promiseGet = await sms.getSmscAddr(true_slot_id)
            expect(promiseGet == curAddr).assertTrue()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0300 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0300 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0400
     * @tc.name     Set the value of “scAddr” to null,Set up the SMS service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0400', 0, async function (done) {
        let beforeAddr = ""
        let curAddr = ""
        try {
            beforeAddr = await sms.getSmscAddr(true_slot_id)
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0400 get finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0400 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0400 set finish")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0400 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == beforeAddr).assertTrue()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0400 get finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0400 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0500
     * @tc.name     Sets the “scAddr” length to exceed the maximum（20）,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0500', 0, async function (done) {
        let beforeAddr = ""
        const count = MAX_ADDR + 1
        let curAddr = ''
        for (let index = 0; index < count; index++) {
            curAddr += 'a'
        }
        try {
            let promiseGet = await sms.getSmscAddr(true_slot_id)
            beforeAddr = promiseGet
            if(beforeAddr == curAddr) {
                curAddr += 'a'
            }
            console.log("getSmscAddr beforeAddr = " + beforeAddr)
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0500 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertFalse()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0500 set")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0500 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == beforeAddr).assertTrue()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0500 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0500 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0600
     * @tc.name     Set “scAddr” to Chinese ,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0600', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = '中文文本'
        try {
            let promiseGet = await sms.getSmscAddr(true_slot_id)
            beforeAddr = promiseGet
            if(beforeAddr == curAddr) {
                curAddr += '中'
            }
            console.log("getSmscAddr beforeAddr  ")
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0600 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertFalse()
            console.log("setSmscAddr beforeAddr  " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0600 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == beforeAddr).assertTrue()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0600 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0600 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0700
     * @tc.name     Set “scAddr” to English ,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0700', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = 'English'
        try {
            let promiseGet = await sms.getSmscAddr(true_slot_id)
            beforeAddr = promiseGet
            if(beforeAddr == curAddr) {
                curAddr += 'text'
            }
            console.log("getSmscAddr beforeAddr " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0700 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertFalse()
            console.log("setSmscAddr beforeAddr " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0700 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == beforeAddr).assertTrue()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0700 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0700 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0800
     * @tc.name     Set “scAddr” to  special character ,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0800', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = '<>?^&*$'
        try {
            let promiseGet = await sms.getSmscAddr(true_slot_id)
            beforeAddr = promiseGet
            if(beforeAddr == curAddr) {
                curAddr += '??'
            }
            console.log("getSmscAddr beforeAddr  " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0800 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertFalse()
            console.log("setSmscAddr beforeAddr  " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0800 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == beforeAddr).assertTrue()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0800 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0800 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_setSmscAddr_Promise_0900
     * @tc.name     Set “scAddr” to  special Mixed character ,Failed to set short message service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_setSmscAddr_Promise_0900', 0, async function (done) {
        var beforeAddr = ""
        let curAddr = 'Eng中文**(12?'
        try {
            let promiseGet = await sms.getSmscAddr(true_slot_id)
            beforeAddr = promiseGet
            if(beforeAddr == curAddr) {
                curAddr += 'E中?1'
            }
            console.log("getSmscAddr beforeAddr " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0900 fail")
            done()
            return
        }
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertFalse()
            console.log("setSmscAddr beforeAddr " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0900 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == beforeAddr).assertTrue()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0900 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_setSmscAddr_Promise_0900 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Async_0100
     * @tc.name     When SLOTID is the correct value,Get the SMS center service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getSmscAddr_Async_0100', 0, async function (done) {
        let curAddr = USABLE_SMSC_NUMBER
        sms.setSmscAddr(true_slot_id, curAddr, (err, result) => {
            if (err) {
                expect().assertFail()
                console.log("Telephony_SmsMms_getSmscAddr_Async_0100 fail")
                done()
                return
            }
            expect(result).assertTrue()
            console.log("setSmscAddr beforeAddr = " + result)
            sms.getSmscAddr(true_slot_id, (geterr, getresult) => {
                if (geterr) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_getSmscAddr_Async_0100 fail")
                    done()
                    return
                }
                expect(getresult == curAddr).assertTrue()
                console.log("getSmscAddr result = " + getresult)
                console.log("Telephony_SmsMms_getSmscAddr_Async_0100 finish")
                done()
            })
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Async_0200
     * @tc.name     When "SLOTID" is an error value,Failed to get SMS service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getSmscAddr_Async_0200', 0, async function (done) {
        sms.getSmscAddr(false_slot_id, (err, result) => {
            if (err) {
                console.log("Telephony_SmsMms_getSmscAddr_Async_0200 finish")
                done()
                return
            }
            expect(result == undefined || result == null)
            console.log("Telephony_SmsMms_getSmscAddr_Async_0200 finish")
            done()
        })
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Promise_0100
     * @tc.name     When SLOTID is the correct value,Get the SMS center service address.
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getSmscAddr_Promise_0100', 0, async function (done) {
        let curAddr = USABLE_SMSC_NUMBER
        try {
            let promiseSet = await sms.setSmscAddr(true_slot_id, curAddr)
            expect(promiseSet).assertTrue()
            console.log("setSmscAddr beforeAddr " )
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getSmscAddr_Promise_0100 fail")
            done()
            return
        }
        try {
            let promise = await sms.getSmscAddr(true_slot_id)
            expect(promise == curAddr).assertTrue()
            console.log("Telephony_SmsMms_getSmscAddr_Promise_0100 finish")
            done()
        } catch (err) {
            expect().assertFail()
            console.log("Telephony_SmsMms_getSmscAddr_Promise_0100 fail")
            done()
            return
        }
    })

    /**
     * @tc.number   Telephony_SmsMms_getSmscAddr_Promise_0200
     * @tc.name     When "SLOTID" is an error value,Failed to get SMS service address
     * @tc.desc     Function test
     */
    it('Telephony_SmsMms_getSmscAddr_Promise_0200', 0, async function (done) {
        try {
            let promise = await sms.getSmscAddr(false_slot_id)
            expect(promise == ""  || promise == undefined)
            console.log("Telephony_SmsMms_getSmscAddr_Promise_0200 finish")
            done()
        } catch (err) {
            console.log("Telephony_SmsMms_getSmscAddr_Promise_0200 fail")
            expect().assertFail()
            done()
            return
        }
    })
})
