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

describe('SmsMmsTest', function () {
    const TEST_PHONY_NUMBER = "15895502170"
    const MAX_TEST = 160

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0100
    * @tc.name    Call the interface sendMessage, set the card slot parameter "slotId" to 1,
    *             and send SMS successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0100', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: 'hello',
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0100 fail")
                    done()
                    return
                }
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0100 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0100 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0100 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0200
    * @tc.name    Call the interface sendMessage, set the card slot parameter "slotId" to 0,
    *             SMS failed to send
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0200', 0, async function (done) {
        sms.sendMessage({
            slotId: 0,
            destinationHost: TEST_PHONY_NUMBER,
            content: 'hello',
            sendCallback: (err, value) => {
                if (err) {
                    console.log("err  =  " + err.message)
                    console.log("Telephony_SmsMms_sendMessage_0200 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect().assertFail()
                console.log("Telephony_SmsMms_sendMessage_0200 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0200 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0200 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0300
    * @tc.name    Call interface sendMessage,
    *             set the destinationHost "destinationHost" is not empty,
    *             send SMS successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0300', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: 'helloword',
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0300 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0300 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0300 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0300 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0400
    * @tc.name    Call interface sendMessage, set destinationHost "destinationHost" to empty,
    *             send SMS failed
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0400', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: '',
            content: 'hello',
            sendCallback: (err, value) => {
                if (err) {
                    console.log("err  =  " + err.message)
                    console.log("Telephony_SmsMms_sendMessage_0400 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect().assertFail()
                console.log("Telephony_SmsMms_sendMessage_0400 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0400 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0400 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0500
    * @tc.name    Call interface sendMessage, set the content "content" to empty,
    *             send a message failed
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0500', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: '',
            sendCallback: (err, value) => {
                if (err) {
                    console.log("err  =  " + err.message)
                    console.log("Telephony_SmsMms_sendMessage_0500 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect().assertFail()
                console.log("Telephony_SmsMms_sendMessage_0500 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0500 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0500 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0600
    * @tc.name    Call the interface SendMessage, set the length of "content" to 159 bytes,
    *             and send a short message successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0600', 0, async function (done) {
        const count = MAX_TEST - 1
        let str = ''
        for (let index = 0; index < count; index++) {
            str += 'a'
        }
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: str,
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0600 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0600 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0600 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0600 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0700
    * @tc.name    Call the interface SendMessage, set the length of "content" to 160 bytes,
    *             and send a short message successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0700', 0, async function (done) {
        const count = MAX_TEST
        let str = ''
        for (let index = 0; index < count; index++) {
            str += 'a'
        }
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: str,
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0700 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0700 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0700 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0700 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0800
    * @tc.name    Call the interface SendMessage, set the length of "content" to 161 bytes,
    *             and send a short message successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0800', 0, async function (done) {
        const count = MAX_TEST + 1
        let str = ''
        for (let index = 0; index < count; index++) {
            str += 'a'
        }
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: str,
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0800 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0800 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0800 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0800 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_0900
    * @tc.name    Call the interface SendMessage,
    *             set the content "Content" as the content of Chinese character type,
    *             and send a short message successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_0900', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: '这是测试文本',
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0900 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0900 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_0900 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_0900 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_1000
    * @tc.name    Call the interface sendMessage,
    *             set the content "content" to a single byte character (English alphabet or number) type of content,
    *             send a short message successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_1000', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: 'qwe123',
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1000 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1000 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1000 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1000 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_1100
    * @tc.name    Call the interface sendMessage,
    *             set the content "content" to the content of special character type,
    *             and send the short message successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_1100', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: 'ㄅㄆ$￡á ǎ㊊↑◎┴%@&*^#',
            sendCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1100 fail")
                    done()
                    return
                }
                console.log("sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1100 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1100 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1100 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_1200
    * @tc.name    Call the interface SendMessage.
    *             If the "content" is of data type, set the destinationPort "DestinationPort" as 0x00,
    *             and SMS is sent successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_1200', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: new Array(54, 2, 3, 6, 3, 1, 1),
            destinationPort: 0x00,
            sendCallback: (err, value) => {
                if (err) {
                    console.log("rawdata msg sendCallback err")
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1200 fail")
                    done()
                    return
                }
                console.log("rawdata msg sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1200 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    console.log("deliveryCallback err")
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1200 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1200 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_1300
    * @tc.name    Call the interface SendMessage.
    *             If the "content" is of data type, set the destinationPort "DestinationPort" as 0xffff,
    *             and SMS is sent successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_1300', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: new Array(54, 2, 3, 6, 3, 1, 1),
            destinationPort: 0xffff,
            sendCallback: (err, value) => {
                if (err) {
                    console.log("rawdata msg sendCallback err")
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1300 fail")
                    done()
                    return
                }
                console.log("rawdata msg sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1300 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    console.log("deliveryCallback err")
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1300 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1300 finish")
                done()
            }
        })
    })

    /*
    * @tc.number  Telephony_SmsMms_sendMessage_1400
    * @tc.name    Call the interface SendMessage.
    *             If the "content" is of data type, set the destinationPort "DestinationPort" as 0xffff-1,
    *             and SMS is sent successfully
    * @tc.desc    Function test
    */
    it('Telephony_SmsMms_sendMessage_1400', 0, async function (done) {
        sms.sendMessage({
            slotId: 1,
            destinationHost: TEST_PHONY_NUMBER,
            content: new Array(54, 2, 3, 6, 3, 1, 1),
            destinationPort: 0xffff - 1,
            sendCallback: (err, value) => {
                if (err) {
                    console.log("rawdata msg sendCallback err")
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1400 fail")
                    done()
                    return
                }
                console.log("rawdata msg sendCallback success sendResult = " + value.result)
                expect(value.result == sms.SEND_SMS_SUCCESS).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1400 finish")
            },
            deliveryCallback: (err, value) => {
                if (err) {
                    console.log("deliveryCallback err")
                    expect().assertFail()
                    console.log("Telephony_SmsMms_sendMessage_1400 fail")
                    done()
                    return
                }
                console.log("deliveryCallback success sendResult = " + value.pdu)
                expect(value.pdu.length > 0).assertTrue()
                console.log("Telephony_SmsMms_sendMessage_1400 finish")
                done()
            }
        })
    })
})
