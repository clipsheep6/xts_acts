/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file expect in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import call from '@ohos.telephony_call'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
describe('CallManagerOnDial', function () {
    const TEST_PHONY_NUMBER = '10086'
    var callId = 0
    var callState = 0
    var timeout = 0
    var endTime = 0
    var ontime = 25000
    const CALL_STATUS_DISCONNECTED = 6
    const CALL_STATUS_DIALING = 2
    const CALL_STATE_OFFHOOK = 2
    const GETMAIN_CALLID_FAIL = -1

    beforeAll(async function () {
        call.on('callDetailsChange', (err, callStateInfo) => {
            if (err) {
                console.log('Telephony_CallManager_on_Async fail err = ' + err)
                return
            }
            console.log('Telephony_CallManager_callDetailsChange: ' + JSON.stringify(callStateInfo))
            callId = callStateInfo.callId
            callState = callStateInfo.callState
        })
    })

    afterAll(async function () {
        call.off('callDetailsChange',(err) => {
            if (err) {
                console.log('Telephony_CallManager_off_Async fail err = ' + err)
                return
            }
        })
    })

    afterEach(async function () {
        call.hangup(callId, (err) => {
            console.log('Telephony_CallManager_hangup_Async callId = ' + callId)
            if (err) {
                console.log('Telephony_CallManager_hangup_Async fail err  = ' + err)
                return
            }
            console.log('Telephony_CallManager_hangup_Async finish')
            const startTime = (new Date).getTime()
            while (true) {
                if (callState == CALL_STATUS_DISCONNECTED) {
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    break
                }
            }
        })
    })

    /*
     * @tc.number  Telephony_CallManager_dial_Async_0100
     * @tc.name    Set the mandatory phone number to a normal number (10086) and call dial() as a callback,
     * returning :true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_dial_Async_0100', 0, async function (done) {
        call.dial(TEST_PHONY_NUMBER, (err, data) => {
            if (err) {
                console.log('Telephony_CallManager_dial_Async_0100 fail' + err)
                expect().assertFail()
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Async_0100 dial finish data = ' + data)
        })
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })


    /*
     * @tc.number  Telephony_CallManager_dial_Async_0400
     * @tc.name    Set the mandatory phone number to a phone number with a "," callback that calls dial(),
     * returning :true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_dial_Async_0400', 0, async function (done) {
        call.dial('10086,1234567890123456789123', {accountId:1}, (err, data) => {
            if (err) {
                console.log('Telephony_CallManager_dial_Async_0400 fail err = ' + err)
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Async_0400 finish data = ' + data)
            done()
        })
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

    /*
     * @tc.number  Telephony_CallManager_dial_Async_0500
     * @tc.name    Set the mandatory phone number to an invalid number (abcDE123456),
     * call dial() in callback mode, and return :true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_dial_Async_0500', 0, async function (done) {
        call.dial('abcde123456', (err, data) => {
            if (err) {
                console.log('Telephony_CallManager_dial_Async_0500 fail err = ' + err)
                expect().assertFail()
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Async_0500 finish data = ' + data)
        })
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

     /*
      * @tc.number  Telephony_CallManager_dial_Async_0800
      * @tc.name    Set the mandatory phone number to a normal number (10086) and the optional parameters options
      * to {accountId: 1, videoState: 0, dialScene: 0, dialType: 0}. Dial () in callback mode and return :true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_dial_Async_0800', 0, async function (done) {
         let obj = { accountId: 1, videoState: 0, dialScene: 0, dialType:0 }
         call.dial('abcedf123456', obj, (err, data) => {
            if (err) {
                 expect().assertFail()
                 console.log('Telephony_CallManager_dial_Async_0800 fail err = ' + err)
                 done()
                 return
            }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_dial_Async_0800 finish data = ' + data)
            })
            const startTime = (new Date).getTime()
            while (true) {
                if (callState == CALL_STATUS_DIALING) {
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
     })

     /*
      * @tc.number  Telephony_CallManager_dial_Async_1200
      * @tc.name    Call dial() by way of callback, phoneNumber is a normal number, options is ''
      * @tc.desc    Function test
      */
    it('Telephony_CallManager_dial_Async_1200', 0, async function (done) {
         call.dial('16987458758', (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_dial_Async_1200 fail err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_dial_Async_1200 dial finish data = ' + data)
            })
            const startTime = (new Date).getTime()
             while (true) {
                if (callState == CALL_STATUS_DIALING) {
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
    })

     /*
      * @tc.number  Telephony_CallManager_dial_Async_1300
      * @tc.name    Set the mandatory phone number to a normal number (112) and the optional parameters options to
      * {accountId: 1, videoState: 0, dialScene: 0, dialType: 0}. Dial () in callback mode and return :true
      * @tc.desc    Function test
      */
    it('Telephony_CallManager_dial_Async_1300', 0, async function (done) {
        let obj = { accountId: 1, videoState: 0, dialScene: 0, dialType:0 }
        call.dial('112', obj, (err, data) => {
            if (err) {
                console.log('Telephony_CallManager_dial_Async_1300 fail err = ' + err)
                expect().assertFail()
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Async_1300 dial finish data = ' + data)
        })
            const startTime = (new Date).getTime()
            while (true) {
                if (callState == CALL_STATUS_DIALING) {
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
    })

     /*
      * @tc.number  Telephony_CallManager_dial_Promise_0100
      * @tc.name    Set the mandatory phone number to a normal number (10086) and the optional parameters options to
      * {accountId: 1, videoState: 0, dialScene: 0, dialType: 0}. Call dial() and return :true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_dial_Promise_0100', 0, async function (done) {
         try {
             var data = await call.dial('123456789123456789', {accountId:1})
             expect(data).assertTrue()
             console.log('Telephony_CallManager_dial_Promise_0100 finish data = ' + data)
             const startTime = (new Date).getTime()
             while (true) {
                if (callState == CALL_STATUS_DIALING) {
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                     done()
                     break
                }
            }
        } catch (err) {
            expect().assertFail()
            console.log('Telephony_CallManager_dial_Promise_0100 fail err = ' + err)
            done()
            return
        }
    })

     /*
      * @tc.number  Telephony_CallManager_dial_Promise_0300
      * @tc.name    Set the mandatory phone number to abcDE123456 and optional parameters options to
      * {accountId: 1, videoState: 0, dialScene: 0, dialType:  0}, options is {extras:false}, call dial() to dial, return :true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_dial_Promise_0300', 0, async function (done) {
         try {
             var data = await call.dial('abcde123456', {accountId:1})
             expect(data).assertTrue()
             console.log('Telephony_CallManager_dial_Promise_0300 finish data = ' + data)
         } catch (err) {
             console.log('Telephony_CallManager_dial_Promise_0300 fail err = ' + err)
             expect().assertFail()
             done()
             return
         }
         const startTime = (new Date).getTime()
         while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
     })

   /*
    * @tc.number  Telephony_CallManager_dial_Promise_0600
    * @tc.name    Set the required phone number to a normal number (10086) with no optional arguments and call dial() to dial, returning :true
    * @tc.desc    Function test
    */
    it('Telephony_CallManager_dial_Promise_0600', 0, async function (done) {
        try {
            var data = await call.dial(TEST_PHONY_NUMBER, {accountId:1})
            console.log('Telephony_CallManager_dial_Promise_0600 finish data = ' + data)
            expect(data).assertTrue()
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_0600 fail err = ' + err)
            expect().assertFail()
            done()
            return
        }
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

   /*
    * @tc.number  Telephony_CallManager_dial_Promise_0700
    * @tc.name    Example Set the required phone number to a normal number 16987458758. Options are
    * {accountId: 1, videoState: 0, dialScene: 0, dialType:  0}, call dial() to dial, returning :true.
    * @tc.desc    Function test
    */
    it('Telephony_CallManager_dial_Promise_0700', 0, async function (done) {
        try {
            var data = await call.dial('16987458758', {accountId:1})
            console.log('Telephony_CallManager_dial_Promise_0700 finish data = ' + data)
            expect(data).assertTrue()
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_0700 fail err = ' + err)
            expect().assertFail()
            done()
            return
        }
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

    /*
    * @tc.number  Telephony_CallManager_dial_Promise_0800
    * @tc.name    Set the required phone number to a normal number (112) without the optional parameters,
    * and call dial() to dial, returning :true
    * @tc.desc    Function test
    */
    it('Telephony_CallManager_dial_Promise_0800', 0, async function (done) {
         try {
             var data = await call.dial('112')
             expect(data).assertTrue()
             console.log('Telephony_CallManager_dial_Promise_0800 finish data = ' + data)
         } catch (err) {
             console.log('Telephony_CallManager_dial_Promise_0800 fail err = ' + err)
             expect().assertFail()
             done()
             return
         }
         const startTime = (new Date).getTime()
         while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

    /*
     * @tc.number  Telephony_CallManager_dial_Promise_1000
     * @tc.name    Will choose parameter number add ', '(10086123567901345789 123), with no optional parameters,
     * call dial () to dial, return: true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_dial_Promise_1000', 0, async function (done) {
        try {
            var data = await call.dial('10086,1234567890123456789123')
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Promise_1000 finish data = ' + data)
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_1000 fail err = ' + err)
            expect().assertFail()
            done()
            return
        }
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

    /*
     * @tc.number  Telephony_CallManager_dial_Promise_1100
     * @tc.name    This parameter is mandatory. The phone number is 9985 585.
     * Dial () with no optional parameters returns true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_dial_Promise_1100', 0, async function (done) {
        try {
            var data = await call.dial('86459751')
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Promise_1100 finish data = ' + data)
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_1100 fail err = ' + err)
            expect().assertFail()
            done()
            return
        }
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

    /*
     * @tc.number  Telephony_CallManager_dial_Promise_1200
     * @tc.name    The phone number is 12593 + 00852 + 92685094. Dial () without any optional parameters.
     * True is returned
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_dial_Promise_1200', 0, async function (done) {
        try {
            var data = await call.dial('125930085292685094')
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Promise_1200 finish data = ' + data)
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_1200 fail err = ' + err)
            expect().assertFail()
            done()
            return
        }
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

    /*
     * @tc.number  Telephony_CallManager_dial_Promise_1300
     * @tc.name    The phone number is the area code (0898) and the number is 9985 5857. Dial () without optional
     * parameters returns true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_dial_Promise_1300', 0, async function (done) {
        try {
            var data = await call.dial('0898 9985 5857')
            expect(data).assertTrue()
            console.log('Telephony_CallManager_dial_Promise_1300 finish data = ' + data)
        } catch (err) {
            console.log('Telephony_CallManager_dial_Promise_1300 fail err = ' + err)
            expect().assertFail()
            done()
            return
        }
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

    /*
      * @tc.number  Telephony_CallManager_hasCall_Async_0500
      * @tc.name    Call 10086, hasCall() to confirm that there is a call, returns true
      * @tc.desc    Function test
      */
    it('Telephony_CallManager_hasCall_Async_0500', 0, async function (done) {
        call.dial(TEST_PHONY_NUMBER, (err, data) => {
            if (err) {
                expect().assertFail()
                console.log('Telephony_CallManager_hasCall_Async_0500 dial fail err = ' + err)
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_hasCall_Async_0500  dial finish data = ' + data)
            const startTime = (new Date).getTime()
            while (true) {
                if (callState == CALL_STATUS_DIALING) {
                    call.hasCall((err, data) => {
                        if (err) {
                            expect().assertFail()
                            console.log('Telephony_CallManager_hasCall_Async_0500 fail err = ' + err)
                            done()
                            return
                        }
                        expect(data).assertTrue()
                        console.log('Telephony_CallManager_hasCall_Async_0500 finish data = ' + data)
                    })
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        })
    })

    /*
     * @tc.number  Telephony_CallManager_hasCall_Promise_0500
     * @tc.name    Call 10086, hasCall() to confirm that there is a call, returns true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_hasCall_Promise_0500', 0, async function (done) {
        try {
            var data = await call.dial(TEST_PHONY_NUMBER)
            expect(data).assertTrue()
            console.log('Telephony_CallManager_hasCall_Promise_0500 dial finish data = ' + data)
        } catch (err) {
            console.log('Telephony_CallManager_hasCall_Promise_0500 dial fail err = ' + err)
            expect().assertFail()
            done()
            return
        }
        const startTime = (new Date).getTime()
        while (true) {
            if (callState == CALL_STATUS_DIALING) {
                try {
                    data = await call.hasCall()
                    expect(data).assertTrue()
                    console.log('Telephony_CallManager_hasCall_Promise_0500 getCallState finish data = ' + data)
                } catch (err) {
                    console.log('Telephony_CallManager_hasCall_Promise_0500 getCallState fail err = ' + err)
                    expect().assertFail()
                    done()
                    return
                }
                done()
                break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
        }
    })

     /*
      * @tc.number  Telephony_CallManager_getCallState_Async_0200
      * @tc.name    GetCallState () is used as a callback to get the current call status. CALL_STATE_OFFHOOK is returned
      * @tc.desc    Function test
      */
    it('Telephony_CallManager_getCallState_Async_0200', 0, async function (done) {
        call.dial(TEST_PHONY_NUMBER, (err, data) => {
            if (err) {
                expect().assertFail()
                console.log('Telephony_CallManager_getCallState_Async_0200 dial fail err = ' + err)
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_getCallState_Async_0200  dial finish data = ' + data)
            const startTime = (new Date).getTime()
            while (true) {
                if (callState == CALL_STATUS_DIALING) {
                    call.getCallState((err, data) => {
                        if (err) {
                            expect().assertFail()
                            console.log('Telephony_CallManager_getCallState_Async_0200 fail err = ' + err)
                            done()
                            return
                        }
                        expect(data == CALL_STATE_OFFHOOK).assertTrue()
                        console.log('Telephony_CallManager_getCallState_Async_0200 finish data = ' + data)
                    })
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        })
    })

     /*
      * @tc.number  Telephony_CallManager_getCallState_Promise_0200
      * @tc.name    To get the call status during dialing, call getCallState() to get the current call status.
      * CALL_STATE_OFFHOOK is returned
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_getCallState_Promise_0200', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_getCallState_Promise_0200 dial finish data = ' + data)
         } catch (err) {
             console.log('Telephony_CallManager_getCallState_Promise_0200 dial fail err = ' + err)
             expect().assertFail()
             done()
             return
         }
         const startTime = (new Date).getTime()
         while (true) {
             if (callState == CALL_STATUS_DIALING) {
                 try {
                     data = await call.getCallState()
                     expect(data == CALL_STATE_OFFHOOK).assertTrue()
                     console.log('Telephony_CallManager_getCallState_Promise_0200 getCallState finish data = ' + data)
                 } catch (err) {
                     console.log('Telephony_CallManager_getCallState_Promise_0200 getCallState fail err = ' + err)
                     expect().assertFail()
                     done()
                     return
                 }
                 done()
                 break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
         }
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Async_0100
      * @tc.name    CallId is the current callId, character is 0, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Async_0100', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0100 dial fail err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0100 dial finish data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
                 if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, '0', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0100 startDtmf fail err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0100 startDtmf finish data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0100 stopDtmf fail err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0100 stopDtmf finish data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         })
     })

     /*
     * @tc.number  Telephony_CallManager_startDtmf_Async_0200
     * @tc.name    CallId is the current callId, character is 5, call startDtmf() to startDtmf, true
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_startDtmf_Async_0200', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0200 dial fail err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0200 dial finish data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
                 if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, '5', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0200 startDtmf fail err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0200 startDtmf finish data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0200 stopDtmf fail err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0200 stopDtmf finish data = ' + data)
                     })
                     done()
                     break
                 }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                 done()
                 break
                }
             }
         })
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Async_0300
      * @tc.name    CallId is the current callId, character is 9, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Async_0300', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0300 dial fail err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0300 dial finish data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
             if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, '9', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0300 startDtmf fail err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0300 startDtmf finish data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0300 stopDtmf fail err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0300 stopDtmf finish data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                  done()
                  break
                 }
             }
         })
     })


     /*
     * @tc.number  Telephony_CallManager_startDtmf_Async_0400
     * @tc.name    CallId is the current callId, character is A, call startDtmf() to startDtmf, true
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_startDtmf_Async_0400', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0400 dial fail err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0400 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
             if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, 'A', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0400 startDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0400 startDtmf finish : data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0400 stopDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0400 stopDtmf finish : data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         })
     })

     /*
     * @tc.number  Telephony_CallManager_startDtmf_Async_0500
     * @tc.name    CallId is the current callId, character is C, call startDtmf() to startDtmf, true
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_startDtmf_Async_0500', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0500 dial fail : err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0500 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
             if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, 'C', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0500 startDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0500 startDtmf finish : data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0500 stopDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0500 stopDtmf finish : data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         })
     })

     /*
     * @tc.number  Telephony_CallManager_startDtmf_Async_0600
     * @tc.name    CallId is the current callId, character is D, call startDtmf() to startDtmf, true
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_startDtmf_Async_0600', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0600 dial fail : err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0600 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
             if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, 'D', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0600 startDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0600 startDtmf finish : data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0600 stopDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0600 stopDtmf finish : data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         })
     })

     /*
     * @tc.number  Telephony_CallManager_startDtmf_Async_0700
     * @tc.name    CallId is the current callId, character is d, call startDtmf() to startDtmf, false
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_startDtmf_Async_0700', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0700 dial fail : err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0700 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
             if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, 'd', (err) => {
                         if (err) {
                             console.log('Telephony_CallManager_startDtmf_Async_0700 startDtmf finish : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0700 startDtmf fail')
                         expect().assertFail()
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         })
     })

     /*
     * @tc.number  Telephony_CallManager_startDtmf_Async_0800
     * @tc.name    CallId is the current callId, character is *, call startDtmf() to startDtmf, true
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_startDtmf_Async_0800', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0800 dial fail : err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0800 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
             if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, '*', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0800 startDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0800 startDtmf finish : data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0800 stopDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0800 stopDtmf finish : data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
        })
     })

     /*
     * @tc.number  Telephony_CallManager_startDtmf_A  sync_0900
     * @tc.name    CallId is the current callId, character is #, call startDtmf() to startDtmf, true
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_startDtmf_Async_0900', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 console.log('Telephony_CallManager_startDtmf_Async_0900 dial fail : err = ' + err)
                 expect().assertFail()
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Async_0900 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
             if (callState == CALL_STATUS_DIALING) {
                     call.startDtmf(callId, '#', (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0900 startDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0900 startDtmf finish : data = ' + data)
                     })
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_startDtmf_Async_0900 stopDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_startDtmf_Async_0900 stopDtmf finish : data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         })
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0100
      * @tc.name    CallId is the current callId, character is 1, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0100', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0100 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                 try {
                     await call.startDtmf(callId, '1')
                     console.log('Telephony_CallManager_startDtmf_Promise_0100 startDtmf finish : data = ' + data)
                 } catch (err) {
                     expect().assertFail()
                     console.log('Telephony_CallManager_startDtmf_Promise_0100 startDtmf fail : err = ' + err)
                     return
                 }
                 try {
                     await call.stopDtmf(callId)
                     console.log('Telephony_CallManager_startDtmf_Promise_0100 stopDtmf finish : data = ' + data)
                 } catch (err) {
                     expect().assertFail()
                     console.log('Telephony_CallManager_startDtmf_Promise_0100 stopDtmf fail : err = ' + err)
                     return
                 }
                 done()
                 break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0100 dial fail : err = ' + err)
             done()
             return
         }
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0200
      * @tc.name    CallId is the current callId, character is 4, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0200', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0200 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                 try {
                     await call.startDtmf(callId, '4')
                     console.log('Telephony_CallManager_startDtmf_Promise_0200 startDtmf finish : data = ' + data)
                 } catch (err) {
                     expect().assertFail()
                     console.log('Telephony_CallManager_startDtmf_Promise_0200 startDtmf fail : err = ' + err)
                     return
                 }
                 try {
                     await call.stopDtmf(callId)
                     console.log('Telephony_CallManager_startDtmf_Promise_0200 stopDtmf finish : data = ' + data)
                 } catch (err) {
                     expect().assertFail()
                     console.log('Telephony_CallManager_startDtmf_Promise_0200 stopDtmf fail : err = ' + err)
                     return
                 }
                 done()
                 break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0100 dial fail : err = ' + err)
             done()
             return
         }
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0300
      * @tc.name    CallId is the current callId, character is 8, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0300', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0300 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                     try {
                         await call.startDtmf(callId, '8')
                         console.log('Telephony_CallManager_startDtmf_Promise_0300 startDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0300 startDtmf fail : err = ' + err)
                         return
                     }
                     try {
                         await call.stopDtmf(callId)
                         console.log('Telephony_CallManager_startDtmf_Promise_0300 stopDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0300 stopDtmf fail : err = ' + err)
                         return
                     }
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
            }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0300 dial fail : err = ' + err)
             done()
             return
         }
     })


     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0400
      * @tc.name    CallId is the current callId, character is B, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0400', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0400 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                     try {
                         await call.startDtmf(callId, 'B')
                         console.log('Telephony_CallManager_startDtmf_Promise_0400 startDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0400 startDtmf fail : err = ' + err)
                         return
                     }
                     try {
                         await call.stopDtmf(callId)
                         console.log('Telephony_CallManager_startDtmf_Promise_0400 stopDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0400 stopDtmf fail : err = ' + err)
                         return
                     }
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0100 dial fail : err = ' + err)
             done()
             return
         }
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0500
      * @tc.name    CallId is the current callId, character is 7, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0500', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0500 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                     try {
                         await call.startDtmf(callId, '7')
                         console.log('Telephony_CallManager_startDtmf_Promise_0500 startDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0500 startDtmf fail : err = ' + err)
                         return
                     }
                     try {
                         await call.stopDtmf(callId)
                         console.log('Telephony_CallManager_startDtmf_Promise_0500 stopDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0500 stopDtmf fail : err = ' + err)
                         return
                     }
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0500 dial fail : err = ' + err)
             done()
             return
         }
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0600
      * @tc.name    CallId is the current callId, character is Z, call startDtmf() to startDtmf, false
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0600', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0600 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
                if (callState == CALL_STATUS_DIALING) {
                    try {
                        await call.startDtmf(callId, 'Z')
                        console.log('Telephony_CallManager_startDtmf_Promise_0600 startDtmf fail')
                    } catch (err) {
                             console.log('Telephony_CallManager_startDtmf_Promise_0600 startDtmf finish : err = ' + err)
                    }
                    try {
                         await call.stopDtmf(callId)
                         console.log('Telephony_CallManager_startDtmf_Promise_0600 stopDtmf finish : data = ' + data)
                    } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0600 stopDtmf fail : err = ' + err)
                    }
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0600 dial fail : err = ' + err)
             done()
             return
         }
     })

      /*
       * @tc.number  Telephony_CallManager_startDtmf_Promise_0700
       * @tc.name    CallId is the current callId, character is a, call startDtmf() to startDtmf, false
       * @tc.desc    Function test
       */
      it('Telephony_CallManager_startDtmf_Promise_0700', 0, async function (done) {
          try {
                var data = await call.dial(TEST_PHONY_NUMBER)
                expect(data).assertTrue()
                console.log('Telephony_CallManager_startDtmf_Promise_0700 dial finish : data = ' + data)
                const startTime = (new Date).getTime()
                while (true) {
                    if (callState == CALL_STATUS_DIALING) {
                        try {
                            await call.startDtmf(callId, 'a')
                            expect().assertFail()
                            console.log('Telephony_CallManager_startDtmf_Promise_0700 startDtmf fail')
                        } catch (err) {
                          console.log('Telephony_CallManager_startDtmf_Promise_0700 startDtmf finish : err = ' + err)
                        }
                        try {
                            await call.stopDtmf(callId)
                            console.log('Telephony_CallManager_startDtmf_Promise_0700 stopDtmf finish : data = ' + data)
                        } catch (err) {
                            expect().assertFail()
                            console.log('Telephony_CallManager_startDtmf_Promise_0700 stopDtmf fail : err = ' + err)
                            return
                        }
                        done()
                        break
                    }
                    endTime = (new Date).getTime()
                    timeout = endTime - startTime
                    if(timeout > ontime || timeout == ontime)
                    {
                        done()
                        break
                    }
                }
          } catch (err) {
              expect().assertFail()
              console.log('Telephony_CallManager_startDtmf_Promise_0700 dial fail : err = ' + err)
              done()
              return
          }
      })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0800
      * @tc.name    CallId is the current callId, character is *, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0800', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0800 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                     try {
                         await call.startDtmf(callId, '*')
                         console.log('Telephony_CallManager_startDtmf_Promise_0800 startDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0800 startDtmf fail : err = ' + err)
                         return
                     }
                     try {
                         await call.stopDtmf(callId)
                         console.log('Telephony_CallManager_startDtmf_Promise_0800 stopDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0800 stopDtmf fail : err = ' + err)
                     }
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0800 dial fail : err = ' + err)
             done()
             return
         }
     })

     /*
      * @tc.number  Telephony_CallManager_startDtmf_Promise_0900
      * @tc.name    CallId is the current callId, character is #, call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_startDtmf_Promise_0900', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_startDtmf_Promise_0900 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                     try {
                         await call.startDtmf(callId, '#')
                         console.log('Telephony_CallManager_startDtmf_Promise_0900 startDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0900 startDtmf fail : err = ' + err)
                         return
                     }
                     try {
                         await call.stopDtmf(callId)
                         console.log('Telephony_CallManager_startDtmf_Promise_0900 stopDtmf finish : data = ' + data)
                     } catch (err) {
                         expect().assertFail()
                         console.log('Telephony_CallManager_startDtmf_Promise_0900 stopDtmf fail : err = ' + err)
                         return
                     }
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_startDtmf_Promise_0900 dial fail : err = ' + err)
             done()
             return
         }
     })

     /*
      * @tc.number  Telephony_CallManager_stopDtmf_Async_0200
      * @tc.name    CallId is the current callId, character is , call startDtmf() to startDtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_stopDtmf_Async_0200', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 expect().assertFail()
                 console.log('Telephony_CallManager_stopDtmf_Async_0200 dial fail : err = ' + err)
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_stopDtmf_Async_0200  dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true){
            if (callState == CALL_STATUS_DIALING) {
                     call.stopDtmf(callId, (err) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_stopDtmf_Async_0200 stopDtmf fail : err = ' + err)
                             return
                         }
                         console.log('Telephony_CallManager_stopDtmf_Async_0200 stopDtmf finish : data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         })
     })

     /*
      * @tc.number  Telephony_CallManager_stopDtmf_Promise_0200
      * @tc.name    CallId is the current callId, call stopDtmf() to start Dtmf, true
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_stopDtmf_Promise_0200', 0, async function (done) {
         try {
             var data = await call.dial(TEST_PHONY_NUMBER)
             expect(data).assertTrue()
             console.log('Telephony_CallManager_stopDtmf_Promise_0200 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true)
             {
            if (callState == CALL_STATUS_DIALING) {
                     try {
                         await call.stopDtmf(callId)
                         console.log('Telephony_CallManager_stopDtmf_Promise_0200 stopDtmf finish : data = ' + data)
                     } catch (err) {
                         console.log('Telephony_CallManager_stopDtmf_Promise_0200 stopDtmf fail : err = ' + err)
                         expect().assertFail()
                         return
                     }
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
             }
         } catch (err) {
             expect().assertFail()
             console.log('Telephony_CallManager_stopDtmf_Promise_0200 dial fail : err = ' + err)
             done()
             return
         }
     })

     /*
      * @tc.number  Telephony_CallManager_combineConference_Async_0200
      * @tc.name   After making a call, call combineConference() to merge the conference call and capture err
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_combineConference_Async_0200', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 expect().assertFail()
                 console.log('Telephony_CallManager_combineConference_Async_0200 dial fail : err = ' + err)
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_combineConference_Async_0200  dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true){
            if (callState == CALL_STATUS_DIALING) {
                     call.combineConference(callId, (err) => {
                         if (err) {
                             console.log('Telephony_CallManager_combineConference_Async_0200 finish : err = ' + err)
                             done()
                             return
                         }
                         console.log('Telephony_CallManager_combineConference_Async_0200 fail' )
                         expect().assertFail()
                         console.log('Telephony_CallManager_combineConference_Async_0200 finish : err = ' + err)
                     })
                     done()
                     break
            }
            endTime = (new Date).getTime()
            timeout = endTime - startTime
            if(timeout > ontime || timeout == ontime)
            {
                done()
                break
            }
             }
         })
     })

     /*
      * @tc.number  Telephony_CallManager_combineConference_Promise_0200
      * @tc.name    Make a call, current callId, call combineConference() to merge the conference call, and capture err
      * @tc.desc    Function test
      */
      it('Telephony_CallManager_combineConference_Promise_0200', 0, async function (done) {
          try {
              var data = await call.dial(TEST_PHONY_NUMBER)
              expect(data).assertTrue()
              console.log('Telephony_CallManager_combineConference_Promise_0200 dial finish : data = ' + data)
              const startTime = (new Date).getTime()
              while (true)
              {
             if (callState == CALL_STATUS_DIALING) {
                      try {
                          await call.combineConference(callId)
                          expect().assertFail()
                          console.log('Telephony_CallManager_combineConference_Promise_0200 fail')
                      } catch (err) {
                          console.log('Telephony_CallManager_combineConference_Promise_0200 finish : err = ' + err)
                          done()
                      }
                      done()
                      break
                  }
                  endTime = (new Date).getTime()
                  timeout = endTime - startTime
                  if(timeout > ontime || timeout == ontime)
                  {
                      done()
                      break
                  }
              }
          } catch (err) {
              expect().assertFail()
              console.log('Telephony_CallManager_combineConference_Promise_0200 dial fail : err = ' + err)
              done()
              return
          }
      })

     /*
      * @tc.number  Telephony_CallManager_getMainCallId_Async_0200
      * @tc.name    Call getMainCallId() to get the call of the main call, and return -1
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_getMainCallId_Async_0200', 0, async function (done) {
         call.dial(TEST_PHONY_NUMBER, (err, data) => {
             if (err) {
                 expect().assertFail()
                 console.log('Telephony_CallManager_getMainCallId_Async_0200 dial fail : err = ' + err)
                 done()
                 return
             }
             expect(data).assertTrue()
             console.log('Telephony_CallManager_getMainCallId_Async_0200 dial finish : data = ' + data)
             const startTime = (new Date).getTime()
             while (true){
            if (callState == CALL_STATUS_DIALING) {
                     call.getMainCallId(callId, (err, data) => {
                         if (err) {
                             expect().assertFail()
                             console.log('Telephony_CallManager_getMainCallId_Async_0200 fail : err = ' + err)
                         }
                         expect(data == GETMAIN_CALLID_FAIL).assertTrue()
                         console.log('Telephony_CallManager_getMainCallId_Async_0200 finish : data = ' + data)
                     })
                     done()
                     break
                 }
                 endTime = (new Date).getTime()
                 timeout = endTime - startTime
                 if(timeout > ontime || timeout == ontime)
                 {
                     done()
                     break
                 }
            }
         })
     })

     /*
      * @tc.number  Telephony_CallManager_getMainCallId_Promise_0200
      * @tc.name    Call getMainCallId() to get the call of the main call, and return -1
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_getMainCallId_Promise_0200', 0, async function (done) {
        try {
            var data = await call.dial(TEST_PHONY_NUMBER)
            expect(data).assertTrue()
            console.log('Telephony_CallManager_getMainCallId_Promise_0200 dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true)
            {
            if (callState == CALL_STATUS_DIALING) {
                    try {
                        var data = await call.getMainCallId(callId)
                        expect(data == GETMAIN_CALLID_FAIL).assertTrue()
                        console.log('Telephony_CallManager_getMainCallId_Promise_0200 finish : data = ' + data)
                    } catch (err) {
                        expect().assertFail()
                        console.log('Telephony_CallManager_getMainCallId_Promise_0200 fail : err = ' + err)
                        return
                    }
                    done()
                    break
            }
           endTime = (new Date).getTime()
           timeout = endTime - startTime
           if(timeout > ontime || timeout == ontime)
           {
               done()
               break
           }
           }
        } catch (err) {
            expect().assertFail()
            console.log('Telephony_CallManager_getMainCallId_Promise_0200 dial fail : err = ' + err)
            done()
            return
        }
    })

     /*
      * @tc.number  Telephony_CallManager_getSubCallIdList_Async_0200
      * @tc.name    If callId is 999, call getSubCallIdList() to get the call list of subcalls and return the empty list
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_getSubCallIdList_Async_0200', 0, async function (done) {
        call.dial(TEST_PHONY_NUMBER, (err, data) => {
            if (err) {
                expect().assertFail()
                console.log('Telephony_CallManager_getSubCallIdList_Async_0200 dial fail : err = ' + err)
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_getSubCallIdList_Async_0200  dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true){
           if (callState == CALL_STATUS_DIALING) {
                    call.getSubCallIdList(callId, (err, data) => {
                        if (err) {
                            expect().assertFail()
                            console.log('Telephony_CallManager_getSubCallIdList_Async_0200 fail : err = ' + err)
                            return
                        }
                        expect(data == "").assertTrue()
                        console.log('Telephony_CallManager_getSubCallIdList_Async_0200 finish : data = ' + data)
                    })
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
           }
        })
    })

     /*
      * @tc.number  Telephony_CallManager_getSubCallIdList_Promise_0200
      * @tc.name    Call getSubCallIdList() to get the call list of child calls. The empty list is returned
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_getSubCallIdList_Promise_0200', 0, async function (done) {
        try {
            var data = await call.dial(TEST_PHONY_NUMBER)
            expect(data).assertTrue()
            console.log('Telephony_CallManager_getSubCallIdList_Promise_0200 dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true)
            {
           if (callState == CALL_STATUS_DIALING) {
                    try {
                        var data = await call.getSubCallIdList(callId)
                        expect(data == "").assertTrue()
                        console.log('Telephony_CallManager_getSubCallIdList_Promise_0200 finish : data = ' + data)
                    } catch (err) {
                        console.log('Telephony_CallManager_getSubCallIdList_Promise_0200 fail : err = ' + err)
                        expect().assertFail()
                        return
                    }
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        } catch (err) {
            expect().assertFail()
            console.log('Telephony_CallManager_getSubCallIdList_Promise_0200 dial fail : err = ' + err)
            done()
            return
        }
    })

     /*
      * @tc.number  Telephony_CallManager_getCallIdListForConference_Async_0200
      * @tc.name    Make a phone call, the current callId, calls the callback way getCallIdListForConference () to
      * obtain a list all the phone call in the conference call, returns an empty list
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_getCallIdListForConference_Async_0200', 0, async function (done) {
        call.dial(TEST_PHONY_NUMBER, (err, data) => {
            if (err) {
                expect().assertFail()
                console.log('Telephony_CallManager_getCallIdListForConference_Async_0200 dial fail : err = ' + err)
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_getCallIdListForConference_Async_0200  dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true){
           if (callState == CALL_STATUS_DIALING) {
                    call.getCallIdListForConference(callId, (err, data) => {
                        if (err) {
                            expect().assertFail()
                            console.log('Telephony_CallManager_getCallIdListForConference_Async_0200 fail : err = ' + err)
                            return
                        }
                        expect(data == "").assertTrue()
                        console.log('Telephony_CallManager_getCallIdListForConference_Async_0200 finish : data = ' + data)
                    })
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        })
    })

     /*
      * @tc.number  Telephony_CallManager_getCallIdListForConference_Promise_0200
      * @tc.name    Make a phone call, the current callId, call getCallIdListForConference () to obtain a list all
      * the phone call in the conference call, returns an empty list
      * @tc.desc    Function test
      */
     it('Telephony_CallManager_getCallIdListForConference_Promise_0200', 0, async function (done) {
        try {
            var data = await call.dial(TEST_PHONY_NUMBER)
            expect(data).assertTrue()
            console.log('Telephony_CallManager_getCallIdListForConference_Promise_0200 dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true)
            {
           if (callState == CALL_STATUS_DIALING) {
                    try {
                        var data = await call.getCallIdListForConference(callId)
                        expect(data == "").assertTrue()
                        console.log('Telephony_CallManager_getCallIdListForConference_Promise_0200 finish : data = ' + data)
                    } catch (err) {
                        expect().assertFail()
                        console.log('Telephony_CallManager_getCallIdListForConference_Promise_0200 fail : err = ' + err)
                        return
                    }
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        } catch (err) {
            expect().assertFail()
            console.log('Telephony_CallManager_getCallIdListForConference_Promise_0200 dial fail : err = ' + err)
            done()
            return
        }
    })

    /*
     * @tc.number  Telephony_CallManager_isInEmergencyCall_Async_0100
     * @tc.name    Make a call to a normal number (10086) and call isInEmergencyCall() to
     * verify an emergency call, returning false
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isInEmergencyCall_Async_0100', 0, async function (done) {
        call.dial(TEST_PHONY_NUMBER, (err, data) => {
            if (err) {
                expect().assertFail()
                console.log('Telephony_CallManager_isInEmergencyCall_Async_0100 dial fail : err = ' + err)
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_isInEmergencyCall_Async_0100  dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true){
                if (callState == CALL_STATUS_DIALING) {
                    call.isInEmergencyCall((err, data) => {
                        if (err) {
                            console.log('Telephony_CallManager_isInEmergencyCall_Async_0100 isInEmrgencyCall fail : err = ' + err)
                            expect().assertFail()
                        }
                        expect(data == false).assertTrue()
                        console.log('Telephony_CallManager_isInEmergencyCall_Async_0100 isInEmrgencyCall finish : data = ' + data)
                    })
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        })
    })

     /*
     * @tc.number  Telephony_CallManager_isInEmergencyCall_Async_0200
     * @tc.name    Dial an emergency number (112) and call isInEmergencyCall() to determine whether an emergency
     * call is made, returning true
     * @tc.desc    Function test
     */
     it('Telephony_CallManager_isInEmergencyCall_Async_0200', 0, async function (done) {
        call.dial('112', (err, data) => {
            if (err) {
                expect().assertFail()
                console.log('Telephony_CallManager_isInEmergencyCall_Async_0200 dial fail : err = ' + err)
                done()
                return
            }
            expect(data).assertTrue()
            console.log('Telephony_CallManager_isInEmergencyCall_Async_0200  dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true){
           if (callState == CALL_STATUS_DIALING) {
                    call.isInEmergencyCall((err, data) => {
                        if (err) {
                            console.log('Telephony_CallManager_isInEmergencyCall_Async_0200 isInEmrgencyCall fail : err = ' + err)
                            expect().assertFail()
                            return
                        }
                        expect(data).assertTrue()
                        console.log('Telephony_CallManager_isInEmergencyCall_Async_0200 isInEmrgencyCall finish : data = ' + data)
                    })
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        })
    })

    /*
     * @tc.number  Telephony_CallManager_isInEmergencyCall_Promise_0100
     * @tc.name    False is returned when an emergency call is made to a common number '16987458758'(emergencyCall ())
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isInEmergencyCall_Promise_0100', 0, async function (done) {
        try {
            var data = await call.dial('16987458758')
            expect(data).assertTrue()
            console.log('Telephony_CallManager_isInEmergencyCall_Promise_0100 dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true)
            {
                if (callState == CALL_STATUS_DIALING) {
                    try {
                        var data = await call.isInEmergencyCall()
                        expect(data == false).assertTrue()
                        console.log('Telephony_CallManager_isInEmergencyCall_Promise_0100 finish : data = ' + data)
                    } catch (err) {
                        expect().assertFail()
                        console.log('Telephony_CallManager_isInEmergencyCall_Promise_0100 fail : err = ' + err)
                    }
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        } catch (err) {
            expect().assertFail()
            console.log('Telephony_CallManager_isInEmergencyCall_Promise_0100 dial fail : err = ' + err)
            done()
            return
        }
    })

    /*
     * @tc.number  Telephony_CallManager_isInEmergencyCall_Promise_0200
     * @tc.name    Dial an emergency number (112) and call isInEmergencyCall() to determine whether
     * an emergency call is made. The return value is true
     * @tc.desc    Function test
     */
    it('Telephony_CallManager_isInEmergencyCall_Promise_0200', 0, async function (done) {
        try {
            var data = await call.dial('112')
            expect(data).assertTrue()
            console.log('Telephony_CallManager_isInEmergencyCall_Promise_0200 dial finish : data = ' + data)
            const startTime = (new Date).getTime()
            while (true)
            {
                if (callState == CALL_STATUS_DIALING) {
                    try {
                        var data = await call.isInEmergencyCall()
                        expect(data).assertTrue()
                        console.log('Telephony_CallManager_isInEmergencyCall_Promise_0200 finish : data = ' + data)
                    } catch (err) {
                        expect().assertFail()
                        console.log('Telephony_CallManager_isInEmergencyCall_Promise_0200 fail : err = ' + err)
                    }
                    done()
                    break
                }
                endTime = (new Date).getTime()
                timeout = endTime - startTime
                if(timeout > ontime || timeout == ontime)
                {
                    done()
                    break
                }
            }
        } catch (err) {
            expect().assertFail()
            console.log('Telephony_CallManager_isInEmergencyCall_Promise_0200 dial fail : err = ' + err)
            done()
            return
        }
    })
})