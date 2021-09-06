/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
 * you may not  use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import sim from '@ohos.telephony_sim'
import {simSlotId, timesValue, lockSwitch} from '../default/utils/Constant.test.js'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('SimTest', function () {
    /**
     * @tc.number  Telephony_Sim_getISOCountryCodeForSim_Async_0300
     * @tc.name    Test the getISOCountryCodeForSim interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getISOCountryCodeForSim_Async_0300", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getISOCountryCodeForSim_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_getISOCountryCodeForSim_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.getISOCountryCodeForSim(simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_getISOCountryCodeForSim_Async_0300 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_getISOCountryCodeForSim_Promise_0300
     * @tc.name    Test the getISOCountryCodeForSim interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getISOCountryCodeForSim_Promise_0300", 0, async function (done) {
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getISOCountryCodeForSim(simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_getISOCountryCodeForSim_Promise_0300 fail, err : " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_getISOCountryCodeForSim_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_getISOCountryCodeForSim_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_getSimOperatorNumeric_Async_0300
     * @tc.name    Test the getSimOperatorNumeric interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimOperatorNumeric_Async_0300", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getSimOperatorNumeric_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_getSimOperatorNumeric_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.getSimOperatorNumeric(simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_getSimOperatorNumeric_Async_0300 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_getSimOperatorNumeric_Promise_0300
     * @tc.name    Test the getSimOperatorNumeric interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimOperatorNumeric_Promise_0300", 0, async function (done) {
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getSimOperatorNumeric(simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_getSimOperatorNumeric_Promise_0300 fail, err : " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_getSimOperatorNumeric_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_getSimOperatorNumeric_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_getSimSpn_Async_0300
     * @tc.name    Test the getSimSpn interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimSpn_Async_0300", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getSimSpn_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_getSimSpn_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.getSimSpn(simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_getSimSpn_Async_0300 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_getSimSpn_Promise_0300
     * @tc.name    Test the getSimSpn interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimSpn_Promise_0300", 0, async function (done) {
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getSimSpn(simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_getSimSpn_Promise_0300 fail, err : " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_getSimSpn_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_getSimSpn_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_getSimState_Async_0300
     * @tc.name    Test the getSimState interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimState_Async_0300", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getSimState_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_getSimState_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.getSimState(simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_getSimState_Async_0300 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_getSimState_Promise_0300
     * @tc.name    Test the getSimState interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimState_Promise_0300", 0, async function (done) {
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getSimState(simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_getSimState_Promise_0300 fail, data = " + data)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_getSimState_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_getSimState_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_getSimGid1_Async_0300
     * @tc.name    Test the getSimGid1 interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimGid1_Async_0300", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getSimGid1_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_getSimGid1_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.getSimGid1(simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_getSimGid1_Async_0300 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_getSimGid1_Promise_0300
     * @tc.name    Test the getSimGid1 interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimGid1_Promise_0300", 0, async function (done) {
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getSimGid1(simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_getSimGid1_Promise_0300 fail, err : " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_getSimGid1_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_getSimGid1_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_getSimSubscriptionInfo_Async_0300
     * @tc.name    Test the getSimSubscriptionInfo interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimSubscriptionInfo_Async_0300", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.getSimSubscriptionInfo(simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0300 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_getSimSubscriptionInfo_Promise_0300
     * @tc.name    Test the getSimSubscriptionInfo interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getSimSubscriptionInfo_Promise_0300", 0, async function (done) {
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getSimSubscriptionInfo(simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_getSimSubscriptionInfo_Promise_0300 fail, err : " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_getSimSubscriptionInfo_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_getSimSubscriptionInfo_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0300
     * @tc.name    Test the getDefaultVoiceSlotId interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getDefaultVoiceSlotId_Async_0300", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.getDefaultVoiceSlotId((err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0300 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Promise_0300
     * @tc.name    Test the getDefaultVoiceSlotId interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_getDefaultVoiceSlotId_Promise_0300", 0, async function (done) {
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getDefaultVoiceSlotId()
            } catch (err) {
                console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0300 fail, err : " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0300 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Async_0400
     * @tc.name    Test the setDefaultVoiceSlotId interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_setDefaultVoiceSlotId_Async_0400", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        var defaultValue = 0
        sim.getDefaultVoiceSlotId((err, result) => {
            if (err) {
                console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0400 getDefaultVoiceSlotId_fail, err: " + err.message)
                expect().assertFail()
                done()
                return
            }
            defaultValue = result
        })
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0400 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0400 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                sim.setDefaultVoiceSlotId(defaultValue, (err, ret) => {
                    if (err) {
                        console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0400 setDefaultVoiceSlotId_err: " + err.message)
                        expect().assertFail()
                        done()
                        return
                    }
                })
                done()
                return
            }
            startTime = new Date().getTime()
            sim.setDefaultVoiceSlotId(simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0400 fail, err : " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Promise_0400
     * @tc.name    Test the setDefaultVoiceSlotId interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_setDefaultVoiceSlotId_Promise_0400", 0, async function (done) {
        var defaultValue = 0
        var result = await sim.getDefaultVoiceSlotId()
        defaultValue = result
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0400 fail, err : " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0400 : useTime : " + (endTime - startTime) + "ms")
        await sim.setDefaultVoiceSlotId(defaultValue)
        console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0400 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_unlockPin_Async_0200
     * @tc.name    Test the unlockPin interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_unlockPin_Async_0200", 0, async function (done) {
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        var PIN = "1234"
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_unlockPin_Async_0200 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_unlockPin_Async_0200 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.unlockPin(PIN, simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_unlockPin_Async_0200 fail, err: " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_unlockPin_Promise_0200
     * @tc.name    Test the unlockPin interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_unlockPin_Promise_0200", 0, async function (done) {
        var PIN = "1234"
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.unlockPin(PIN, simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_unlockPin_Promise_0200")
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_unlockPin_Promise_0200 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_unlockPin_Promise_0200 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_unlockPuk_Async_0200
     * @tc.name    Test the unlockPuk interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_unlockPuk_Async_0200", 0, async function (done) {
        var newPin = "1234"
        var PUK = "12345678"
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_unlockPuk_Async_0200 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_unlockPuk_Async_0200 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.unlockPuk(newPin, PUK, simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_unlockPuk_Async_0200 fail, err: " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_unlockPuk_Promise_0200
     * @tc.name    Test the unlockPuk interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_unlockPuk_Promise_0200", 0, async function (done) {
        var newPin = "1234"
        var PUK = "4321"
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.unlockPuk(newPin, PUK, simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_unlockPuk_Promise_0200 fail, err: " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_unlockPuk_Promise_0200 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_unlockPuk_Promise_0200 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_alterPin_Async_0200
     * @tc.name    Test the alterPin interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_alterPin_Async_0200", 0, async function (done) {
        var oldPin = "1234"
        var newPin = "4321"
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_alterPin_Async_0200 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_alterPin_Async_0200 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.alterPin(oldPin, newPin, simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_alterPin_Async_0200 fail, err: " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_alterPin_Promise_0200
     * @tc.name    Test the alterPin interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_alterPin_Promise_0200", 0, async function (done) {
        var oldPin = "1234"
        var newPin = "4321"
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.alterPin(oldPin, newPin, simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_alterPin_Promise_0300 fail, err: " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_alterPin_Promise_0200 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_alterPin_Promise_0200 finish")
        done()
    })

    /**
     * @tc.number  Telephony_Sim_setLockState_Async_0300
     * @tc.name    Test the setLockState interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_setLockState_Async_0300", 0, async function (done) {
        var PIN = "0123456789"
        var totalTime = 0
        var startTime = 0
        var endTime = 0
        function Recursive(n) {
            if (n <= 0) {
                console.log("Telephony_Sim_setLockState_Async_0300 exec done useTime:" + totalTime)
                console.log("Telephony_Sim_setLockState_Async_0300 finish")
                expect(totalTime).assertLess(timesValue.TIME_SPAN)
                done()
                return
            }
            startTime = new Date().getTime()
            sim.setLockState(PIN, lockSwitch.OPEN, simSlotId.SLOTID_1, (err, data) => {
                endTime = new Date().getTime()
                totalTime += endTime - startTime
                if (err) {
                    console.log("Telephony_Sim_setLockState_Async_0300 fail, err: " + err.message)
                    expect().assertFail()
                    done()
                    return
                }
                Recursive(n - 1)
            })
        }
        Recursive(timesValue.TEST_RUN_TIME)
    })

    /**
     * @tc.number  Telephony_Sim_setLockState_Promise_0300
     * @tc.name    Test the setLockState interface query function ten times
     *             and expect a delay of less than timesValue.TIME_SPAN millisecond.
     * @tc.desc    Performance test
     */
    it("Telephony_Sim_setLockState_Promise_0300", 0, async function (done) {
        var PIN = "0123456789"
        const startTime = new Date().getTime()
        for (let index = 0; index < timesValue.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.setLockState(PIN, lockSwitch.OPEN, simSlotId.SLOTID_1)
            } catch (err) {
                console.log("Telephony_Sim_setLockState_Promise_0300 fail, err: " + err.message)
                expect().assertFail()
                done()
                return
            }
        }
        const endTime = new Date().getTime()
        expect(endTime - startTime).assertLess(timesValue.TIME_SPAN)
        console.log("Telephony_Sim_setLockState_Promise_0300 : useTime : " + (endTime - startTime) + "ms")
        console.log("Telephony_Sim_setLockState_Promise_0300 finish")
        done()
    })
})