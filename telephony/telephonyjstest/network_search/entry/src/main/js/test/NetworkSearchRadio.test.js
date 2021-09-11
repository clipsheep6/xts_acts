/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import radio from '@ohos.telephony_radio'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('NetworkSearchTest', function () {
    const SLOT_0 = 0

    async function RecoverRadioState() {
        try {
            await radio.turnOnRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_RecoverRadioState success')
        } catch (err) {
            console.log('Telephony_NetworkSearch_RecoverRadioState fail')
        }
    }

    beforeEach(async function () {
        await RecoverRadioState()
        console.log('Telephony_NetworkSearch_RadioTest init success')
    })

    afterAll(async function () {
        //Initialize radio status after all test cases
        await RecoverRadioState()
        console.log('Telephony_NetworkSearch_RadioTest End!!!')
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOnRadio_Async_0100
    * @tc.name    Radio is off, test The Radio module is turned on and the Radio status is changed to "true"
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_turnOnRadio_Async_0100', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOffRadio(SLOT_0, (err) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOff finish')
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOff fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.turnOnRadio(SLOT_0, (err) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOn finish')
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 turnOn fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.isRadioOn(SLOT_0, (err, data) => {
                if (err) {
                    reject()
                }
                expect(data).assertTrue()
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 finish')
                done()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0100 isOn fail')
            expect().assertFail()
            done()
            return
        })
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOnRadio_Async_0200
    * @tc.name    Radio is on, test The Radio module is turned on and the Radio status is changed to "true"
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_turnOnRadio_Async_0200', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOnRadio(SLOT_0, (err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn1 finish')
                    resolve()
                }
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn1 fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.turnOnRadio(SLOT_0, (err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn2 finish')
                    resolve()
                }
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 turnOn2 fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.isRadioOn(SLOT_0, (err, data) => {
                if (err) {
                    reject()
                }
                expect(data).assertTrue()
                console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 finish')
                done()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOnRadio_Async_0200 isOn fail')
            expect().assertFail()
            done()
            return
        })
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0100
    * @tc.name    Radio is on, test The Radio module is turned off and the Radio status is changed to "false"
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0100', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOnRadio(SLOT_0, (err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOn1 finish')
                    resolve()
                }
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOn fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.turnOffRadio(SLOT_0, (err) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOff finish')
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 turnOff fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.isRadioOn(SLOT_0, (err, data) => {
                if (err) {
                    reject()
                }
                expect(data).assertEqual(false)
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 finish')
                resolve()
                done()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0100 isOn fail')
            expect().assertFail()
            done()
            return
        })
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOffRadio_Async_0200
    * @tc.name    Radio is off, test The Radio module is turned off and the Radio status is changed to "false"
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_turnOffRadio_Async_0200', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOffRadio(SLOT_0, (err) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff1 finish')
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff1 fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.turnOffRadio(SLOT_0, (err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff2 finish')
                    resolve()
                }
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 turnOff2 fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.isRadioOn(SLOT_0, (err, data) => {
                if (err) {
                    reject()
                }
                expect(data).assertEqual(false)
                console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 finish')
                done()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_turnOffRadio_Async_0200 isOn fail')
            expect().assertFail()
            done()
            return
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Async_0100
     * @tc.name    Turn off Radio, input slotId parameter as 1, test isRadioOn() returns "false"
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Async_0100', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOffRadio(SLOT_0, (err) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 turnOff finish')
                resolve()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 turnOff fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.isRadioOn(SLOT_0, (err, resv) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 finish')
                expect(resv).assertEqual(false)
                resolve()
                done()
            })
        }).catch(err => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0100 isOn fail')
            expect().assertFail()
            done()
            return
        })
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Async_0200
     * @tc.name    Turn on Radio, input slotId parameter as 1, test isRadioOn() returns "true"
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Async_0200', 0, async function (done) {
        await new Promise((resolve, reject) => {
            radio.turnOnRadio(SLOT_0, (err) => {
                if (err) {
                    console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 turnOn finish')
                    resolve()
                }
                reject()
            })
        }).catch(() => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 turnOn fail')
            expect().assertFail()
            done()
            return
        })
        await new Promise((resolve, reject) => {
            radio.isRadioOn(SLOT_0, (err, resv) => {
                if (err) {
                    reject()
                }
                console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 finish')
                expect(resv).assertTrue()
                resolve()
                done()
            })
        }).catch(err => {
            console.log('Telephony_NetworkSearch_isRadioOn_Async_0200 isOn fail')
            expect().assertFail()
            done()
            return
        })
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOnRadio_Promise_0100
    * @tc.name    Radio is off, test The Radio module is turned on and the Radio status is changed to "true"
    * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_turnOnRadio_Promise_0100', 0, async function (done) {
        try {
            await radio.turnOffRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOff finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOff fail')
            expect().assertFail()
            done()
            return
        }
        try {
            await radio.turnOnRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOn finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 turnOn fail')
            expect().assertFail()
            done()
            return
        }
        try {
            var data = await radio.isRadioOn(SLOT_0)
            expect(data).assertTrue()
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0100 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOnRadio_Promise_0200
    * @tc.name    Radio is on, test The Radio module is turned on and the Radio status is changed to "true"
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_turnOnRadio_Promise_0200', 0, async function (done) {
        try {
            await radio.turnOnRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 turnOn fail')
            expect().assertFail()
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 turnOn finish')
            done()
        }
        try {
            var data = await radio.isRadioOn(SLOT_0)
            expect(data).assertTrue()
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOnRadio_Promise_0200 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0100
    * @tc.name    Radio is on, test The Radio module is turned off and the Radio status is changed to "false"
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0100', 0, async function (done) {
        try {
            await radio.turnOffRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 turnOff finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 turnOff fail')
            expect().assertFail()
            done()
            return
        }
        try {
            var data = await radio.isRadioOn(SLOT_0)
            expect(data).assertEqual(false)
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0100 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
    * @tc.number  Telephony_NetworkSearch_turnOffRadio_Promise_0200
    * @tc.name    Radio is off, test The Radio module is turned off and the Radio status is changed to "false"
    * @tc.desc    Function test
    */
    it('Telephony_NetworkSearch_turnOffRadio_Promise_0200', 0, async function (done) {
        try {
            await radio.turnOffRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff1 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff1 fail')
            expect().assertFail()
            done()
            return
        }
        try {
            await radio.turnOffRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff2 fail')
            expect().assertFail()
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 turnOff2 finish')
            done()
        }
        try {
            var data = await radio.isRadioOn(SLOT_0)
            expect(data).assertEqual(false)
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_turnOffRadio_Promise_0200 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Promise_0100
     * @tc.name    Turn off Radio, input slotId parameter as 1, test isRadioOn() returns "false"
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Promise_0100', 0, async function (done) {
        try {
            await radio.turnOffRadio(SLOT_0)
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 turnOff finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 turnOff fail')
            expect().assertFail()
            done()
            return
        }
        try {
            var data = await radio.isRadioOn(SLOT_0)
            expect(data).assertEqual(false)
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0100 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })

    /**
     * @tc.number  Telephony_NetworkSearch_isRadioOn_Promise_0200
     * @tc.name    Turn on Radio, input slotId parameter as 1, test isRadioOn() returns "true"
     * @tc.desc    Function test
     */
    it('Telephony_NetworkSearch_isRadioOn_Promise_0200', 0, async function (done) {
        try {
            var data = await radio.isRadioOn(SLOT_0)
            expect(data).assertTrue()
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0200 finish')
        } catch (err) {
            console.log('Telephony_NetworkSearch_isRadioOn_Promise_0200 fail')
            expect().assertFail()
            done()
            return
        }
        done()
    })
})