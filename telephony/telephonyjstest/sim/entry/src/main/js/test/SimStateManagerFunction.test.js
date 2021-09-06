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
import {simSlotId, lockSwitch, OTHER_ABNORMAL, remainValue} from '../default/utils/Constant.test.js'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

describe('SimStateManagerFunction', function () {
   /**
   * @tc.number  Telephony_Sim_getSimState_Async_0100
   * @tc.name    Enter normal parameters to test whether the getSimState interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimState_Async_0100', 0, async function (done) {
      sim.getSimState(simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_getSimState_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         console.log("Telephony_Sim_getSimState_Async_0100, data : " + data)
         expect(data == sim.SIM_STATE_READY).assertTrue()
         console.log("Telephony_Sim_getSimState_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_getSimState_Async_0200
   * @tc.name    Enter exception parameters to test whether the getSimState interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimState_Async_0200', 0, async function (done) {
      sim.getSimState(simSlotId.SLOTID_0, (err, data) => {
         if (err) {
            // Enter the exception ID to enter error.
            console.log("Telephony_Sim_getSimState_Async_0200 finish")
            done()
            return
         }
         expect().assertFail()
         console.log("Telephony_Sim_getSimState_Async_0200 fail, data : " + data)
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_getSimState_Promise_0100
   * @tc.name    Enter normal parameters to test whether the getSimState interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimState_Promise_0100', 0, async function (done) {
      try {
         var data = await sim.getSimState(simSlotId.SLOTID_1)
         console.log("Telephony_Sim_getSimState_Promise_0100, data : " + data)
         expect(data == sim.SIM_STATE_READY).assertTrue()
      } catch (err) {
         console.log("Telephony_Sim_getSimState_Promise_0100 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      console.log("Telephony_Sim_getSimState_Promise_0100 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_getSimState_Promise_0200
   * @tc.name    Enter exception parameters to test whether the getSimState interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimState_Promise_0200', 0, async function (done) {
      try {
         var data = await sim.getSimState(simSlotId.SLOTID_0)
      } catch (err) {
         // Enter the exception ID to enter error.
         console.log("Telephony_Sim_getSimState_Promise_0200 finish")
         done()
         return
      }
      expect().assertFail()
      console.log("Telephony_Sim_getSimState_Promise_0200 fail, data : " + data)
      done()
   })

   /**
   * @tc.number  Telephony_Sim_setLockState_Async_0100
   * @tc.name    Tests whether an abnormal PIN code entered when calling the setLockState interface
   *             lockSwitch.OPENs the PIN lock.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setLockState_Async_0100', 0, async function (done) {
      var PIN = "0123456789"
      sim.setLockState(PIN, lockSwitch.OPEN, simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_setLockState_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         console.log("Telephony_Sim_setLockState_Async_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_setLockState_Async_0100, result : " + data.result)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         console.log("Telephony_Sim_setLockState_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_setLockState_Async_0200
   * @tc.name    Tests whether an abnormal PIN code entered when the setLockState interface
   *             is called close the PIN lock.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setLockState_Async_0200', 0, async function (done) {
      var PIN = "0123456789"
      sim.setLockState(PIN, lockSwitch.CLOSE, simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_setLockState_Async_0200 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         console.log("Telephony_Sim_setLockState_Async_0200, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_setLockState_Async_0200, result : " + data.result)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         console.log("Telephony_Sim_setLockState_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_setLockState_Promise_0100
   * @tc.name    Tests whether an abnormal PIN code entered when calling the setLockState interface
   *             lockSwitch.OPENs the PIN lock.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setLockState_Promise_0100', 0, async function (done) {
      var PIN = "0123456789"
      try {
         var data = await sim.setLockState(PIN, lockSwitch.OPEN, simSlotId.SLOTID_1);
         console.log("Telephony_Sim_setLockState_Promise_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_setLockState_Promise_0100, result : " + data.result)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
      } catch (err) {
         console.log("Telephony_Sim_setLockState_Promise_0100 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      console.log("Telephony_Sim_setLockState_Promise_0100 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_setLockState_Promise_0200
   * @tc.name    Tests whether an abnormal PIN code entered when the setLockState interface
   *             is called close the PIN lock.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setLockState_Promise_0200', 0, async function (done) {
      var PIN = "0123456789"
      try {
         var data =  await sim.setLockState(PIN, lockSwitch.CLOSE, simSlotId.SLOTID_1);
         console.log("Telephony_Sim_setLockState_Promise_0200, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_setLockState_Promise_0200, result : " + data.result)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
      } catch (err) {
         console.log("Telephony_Sim_setLockState_Promise_0200 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      console.log("Telephony_Sim_setLockState_Promise_0200 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_unlockPin_Async_0100
   * @tc.name    Test the unlockPin interface when the card status is EX_READYD.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_unlockPin_Async_0100', 0, async function (done) {
      var PIN = "1234"
      sim.unlockPin(PIN, simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_unlockPin_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         console.log("Telephony_Sim_unlockPin_Async_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_unlockPin_Async_0100, result : " + data.result)
         console.log("Telephony_Sim_unlockPin_Async_0100, remain : " + data.remain)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         expect(data.remain == remainValue.REMAIN_0).assertTrue()
         console.log("Telephony_Sim_unlockPin_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_unlockPin_Promise_0100
   * @tc.name    Test the unlockPin interface when the card status is EX_READYD.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_unlockPin_Promise_0100', 0, async function (done) {
      var PIN = "1234"
      try {
         var data = await sim.unlockPin(PIN, simSlotId.SLOTID_1)
         console.log("Telephony_Sim_unlockPin_Promise_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_unlockPin_Promise_0100, result : " + data.result)
         console.log("Telephony_Sim_unlockPin_Promise_0100, remain : " + data.remain)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         expect(data.remain == remainValue.REMAIN_0).assertTrue()
      } catch (err) {
         console.log("Telephony_Sim_unlockPin_Promise_0100 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      console.log("Telephony_Sim_unlockPin_Promise_0100 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_unlockPuk_Async_0100
   * @tc.name    Test the unlockPuk interface when the card status is EX_READYD.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_unlockPuk_Async_0100', 0, async function (done) {
      var newPin = "1234"
      var PUK = "12345678"
      sim.unlockPuk(newPin, PUK, simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_unlockPuk_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         console.log("Telephony_Sim_unlockPuk_Async_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_unlockPuk_Async_0100, result : " + data.result)
         console.log("Telephony_Sim_unlockPuk_Async_0100, remain : " + data.remain)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         expect(data.remain == remainValue.REMAIN_0).assertTrue()
         console.log("Telephony_Sim_unlockPuk_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_unlockPuk_Promise_0100
   * @tc.name    Test the unlockPuk interface when the card status is EX_READYD.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_unlockPuk_Promise_0100', 0, async function (done) {
      var newPin = "1234"
      var PUK = "12345678"
      try {
         var data = await sim.unlockPuk(newPin, PUK, simSlotId.SLOTID_1)
         console.log("Telephony_Sim_unlockPuk_Promise_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_unlockPuk_Promise_0100, result : " + data.result)
         console.log("Telephony_Sim_unlockPuk_Promise_0100, remain : " + data.remain)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         expect(data.remain == remainValue.REMAIN_0).assertTrue()
      } catch (err) {
         console.log("Telephony_Sim_unlockPuk_Promise_0100 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      console.log("Telephony_Sim_unlockPuk_Promise_0100 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_alterPin_Async_0100
   * @tc.name    Test the alterPin interface when the card status is EX_READYD.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_alterPin_Async_0100', 0, async function (done) {
      var oldPin = "9999"
      var newPin = "1234"
      sim.alterPin(oldPin, newPin, simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_alterPin_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         console.log("Telephony_Sim_alterPin_Async_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_alterPin_Async_0100, result : " + data.result)
         console.log("Telephony_Sim_alterPin_Async_0100, remain : " + data.remain)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         expect(data.remain == remainValue.REMAIN_0).assertTrue()
         console.log("Telephony_Sim_alterPin_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_alterPin_Promise_0100
   * @tc.name    Test the alterPin interface when the card status is EX_READYD.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_alterPin_Promise_0100', 0, async function (done) {
      var oldPin = "9999"
      var newPin = "1234"
      try {
         var data = await sim.alterPin(oldPin, newPin, simSlotId.SLOTID_1)
         console.log("Telephony_Sim_alterPin_Promise_0100, isNoraml : " + data.isNoraml)
         console.log("Telephony_Sim_alterPin_Promise_0100, result : " + data.result)
         console.log("Telephony_Sim_alterPin_Promise_0100, remain : " + data.remain)
         expect(data.isNoraml).assertTrue()
         expect(data.result == OTHER_ABNORMAL).assertTrue()
         expect(data.remain == remainValue.REMAIN_0).assertTrue()
      } catch (err) {
         console.log("Telephony_Sim_alterPin_Promise_0100 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      console.log("Telephony_Sim_alterPin_Promise_0100 finish")
      done()
   })
})