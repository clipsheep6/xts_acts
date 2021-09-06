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
import {simSlotId} from '../default/utils/Constant.test.js'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('SimManagerFunction', function () {
   /**
   * @tc.number  Telephony_Sim_getSimSubscriptionInfo_Async_0100
   * @tc.name    Enter normal parameters to test whether the getSimSubscriptionInfo
   *             interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimSubscriptionInfo_Async_0100', 0, async function (done) {
      var dispName = "simDefaultDisplayName"
      var dispNum = "simDefaultDisplayNumber"
      sim.getSimSubscriptionInfo(simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         expect(data.success).assertTrue()
         expect(data.slotIndex == simSlotId.SLOTID_1).assertTrue();
         // Return the default piling data as simDefaultDisplayName.
         expect(data.displayName == dispName).assertTrue();
         // Return the default piling data as simDefaultDisplayNumber.
         expect(data.displayNumber == dispNum).assertTrue();
         console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_getSimSubscriptionInfo_Async_0200
   * @tc.name    Enter exception parameters to test whether the getSimSubscriptionInfo
   *             interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimSubscriptionInfo_Async_0200', 0, async function (done) {
      sim.getSimSubscriptionInfo(simSlotId.SLOTID_4, (err, data) => {
         if (err) {
            // Enter the exception ID to enter err.
            console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0200 finish")
            done()
            return
         }
         expect().assertFail()
         console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0200 fail, data : " + data)
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_getSimSubscriptionInfo_Promise_0100
   * @tc.name    Enter normal parameters to test whether the getSimSubscriptionInfo
   *             interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimSubscriptionInfo_Promise_0100', 0, async function (done) {
      var dispName = "simDefaultDisplayName"
      var dispNum = "simDefaultDisplayNumber"
      try {
         var data = await sim.getSimSubscriptionInfo(simSlotId.SLOTID_1)
         expect(data.success).assertTrue()
         expect(data.slotIndex == simSlotId.SLOTID_1).assertTrue();
         // Return the default piling data as simDefaultDisplayName.
         expect(data.displayName == dispName).assertTrue();
         // Return the default piling data as simDefaultDisplayNumber.
         expect(data.displayNumber == dispNum).assertTrue();
         console.log("Telephony_Sim_getSimSubscriptionInfo_Async_0100 finish")
      } catch (err) {
         console.log("Telephony_Sim_getSimSubscriptionInfo_Promise_0100 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      console.log("Telephony_Sim_getSimSubscriptionInfo_Promise_0100 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_getSimSubscriptionInfo_Promise_0200
   * @tc.name    Enter exception parameters to test whether the getSimSubscriptionInfo
   *             interface function can execute normally.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getSimSubscriptionInfo_Promise_0200', 0, async function (done) {
      try {
         var data = await sim.getSimSubscriptionInfo(simSlotId.SLOTID_4)
      } catch (err) {
         // Enter the exception ID to enter err.
         console.log("Telephony_Sim_getSimSubscriptionInfo_Promise_0200 finish")
         done()
         return
      }
      expect().assertFail()
      console.log("Telephony_Sim_getSimSubscriptionInfo_Promise_0200 fail, data : " + data)
      done()
   })

   /**
   * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0100
   * @tc.name    The test first sets the default card number and then calls
   *             the getDefaultVoiceLotid interface to get the SIM ID.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getDefaultVoiceSlotId_Async_0100', 0, async function (done) {
      var defaultValue = 0
      sim.getDefaultVoiceSlotId((err, result) => {
         if (err) {
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         defaultValue = result
      })
      sim.setDefaultVoiceSlotId(simSlotId.SLOTID_2, (err, value) => {
         if (err) {
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0100 setDefaultVoiceSlotId_err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         if (value) {
            sim.getDefaultVoiceSlotId((err, data) => {
               if (err) {
                  console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0100 fail, err: " + err.message)
                  expect().assertFail()
                  done()
                  return
               }
               expect(data == simSlotId.SLOTID_2).assertTrue()
               sim.setDefaultVoiceSlotId(defaultValue, (err, ret) => {
                  if (err) {
                     console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0100 setDefaultVoiceSlotId_err: "
                        + err.message)
                     expect().assertFail()
                     done()
                     return
                  }
               })
               console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0100 finish")
               done()
               return
            })
         } else {
            expect().assertFail()
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0100:setDefaultVoiceSlotId_fail")
            done()
         }
      })
   })

   /**
   * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0200
   * @tc.name    The test first sets the default card number and then calls
   *             the getDefaultVoiceLotid interface to get the SIM ID.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getDefaultVoiceSlotId_Async_0200', 0, async function (done) {
      var defaultValue = 0
      sim.getDefaultVoiceSlotId((err, result) => {
         if (err) {
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0200 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         defaultValue = result
      })
      sim.setDefaultVoiceSlotId(simSlotId.SLOTID_1, (err, value) => {
         if (err) {
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0200：setDefaultVoiceSlotId_err: "
               + err.message)
            expect().assertFail()
            done()
            return
         }
         if (value) {
            sim.getDefaultVoiceSlotId((err, data) => {
               if (err) {
                  console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0200 fail, err: " + err.message)
                  expect().assertFail()
                  done()
                  return
               }
               expect(data == simSlotId.SLOTID_1).assertTrue()
               sim.setDefaultVoiceSlotId(defaultValue, (err, ret) => {
                  if (err) {
                     console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0200 setDefaultVoiceSlotId_err: " + err.message)
                     expect().assertFail()
                     done()
                     return
                  }
               })
               console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0200 finish")
               done()
               return
            })
         } else {
            expect().assertFail()
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Async_0200:setDefaultVoiceSlotId_fail")
            done()
         }
      })
   })

   /**
   * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Promise_0100
   * @tc.name    The test first sets the default card number and then calls
   *             the getDefaultVoiceLotid interface to get the default SIM ID.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getDefaultVoiceSlotId_Promise_0100', 0, async function (done) {
      var defaultValue = 0
      var result = await sim.getDefaultVoiceSlotId()
      defaultValue = result
      try {
         var value = await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_2)
         if (value) {
            try {
               var data = await sim.getDefaultVoiceSlotId()
               expect(data == simSlotId.SLOTID_2).assertTrue()
            } catch (err) {
               console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0100 fail, err: " + err.message)
               expect().assertFail()
               done()
               return
            }
            await sim.setDefaultVoiceSlotId(defaultValue)
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0100 finish")
            done()
            return
         }
      } catch (err) {
         console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0100:setDefaultVoiceSlotId_err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      expect().assertFail()
      console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0100:setDefaultVoiceSlotId_fail")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Promise_0200
   * @tc.name    The test first sets the default card number and then calls
   *             the getDefaultVoiceLotid interface to get the default SIM ID.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200', 0, async function (done) {
      var defaultValue = 0
      var result = await sim.getDefaultVoiceSlotId()
      defaultValue = result
      try {
         var value = await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_1)
         if (value) {
            try {
               var data = await sim.getDefaultVoiceSlotId()
               expect(data == simSlotId.SLOTID_1).assertTrue()
            } catch (err) {
               console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 fail, err: " + err.message)
               expect().assertFail()
               done()
               return
            }
            await sim.setDefaultVoiceSlotId(defaultValue)
            console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 finish")
            done()
            return
         }
      } catch (err) {
         console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0200:setDefaultVoiceSlotId_err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      expect().assertFail()
      console.log("Telephony_Sim_getDefaultVoiceSlotId_Promise_0200:setDefaultVoiceSlotId_fail")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Async_0100
   * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 2.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setDefaultVoiceSlotId_Async_0100', 0, async function (done) {
      var defaultValue = 0
      sim.getDefaultVoiceSlotId((err, result) => {
         if (err) {
            console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         defaultValue = result
      })
      sim.setDefaultVoiceSlotId(simSlotId.SLOTID_2, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0100 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         expect(data).assertTrue()
         sim.setDefaultVoiceSlotId(defaultValue, (err, ret) => {
            if (err) {
               console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0100 setDefaultVoiceSlotId_err: " + err.message)
               expect().assertFail()
               done()
               return
            }
         })
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0100 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Async_0200
   * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 1.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setDefaultVoiceSlotId_Async_0200', 0, async function (done) {
      var defaultValue = 0
      sim.getDefaultVoiceSlotId((err, result) => {
         if (err) {
            console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0200 getDefaultVoiceSlotId_fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         defaultValue = result
      })
      sim.setDefaultVoiceSlotId(simSlotId.SLOTID_1, (err, data) => {
         if (err) {
            console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0200 fail, err: " + err.message)
            expect().assertFail()
            done()
            return
         }
         expect(data).assertTrue()
         sim.setDefaultVoiceSlotId(defaultValue, (err, ret) => {
            if (err) {
               console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0200 setDefaultVoiceSlotId_err: " + err.message)
               expect().assertFail()
               done()
               return
            }
         })
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0200 finish")
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Async_0300
   * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 4.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setDefaultVoiceSlotId_Async_0300', 0, async function (done) {
      sim.setDefaultVoiceSlotId(simSlotId.SLOTID_4, (err, data) => {
         if (err) {
            //Expect slotid 4 return err here.
            sim.getDefaultVoiceSlotId((err, result) => {
               if (err) {
                  console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0300 getDefaultVoiceSlotId_fail, err: " + err.message)
                  expect().assertFail()
                  done()
                  return
               }
               expect(result != simSlotId.SLOTID_4).assertTrue()
            })
            console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0200 finish")
            done()
            return
         }
         expect().assertFail()
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Async_0200 fail, data : " + data)
         done()
      })
   })

   /**
   * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Promise_0100
   * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 2.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setDefaultVoiceSlotId_Promise_0100', 0, async function (done) {
      var defaultValue = 0
      var result = await sim.getDefaultVoiceSlotId()
      defaultValue = result
      try {
         var data = await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_2)
         expect(data).assertTrue()
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0100 , data : " + data)
      } catch (err) {
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0100 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      await sim.setDefaultVoiceSlotId(defaultValue)
      console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0100 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Promise_0200
   * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 1.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setDefaultVoiceSlotId_Promise_0200', 0, async function (done) {
      var defaultValue = 0
      var result = await sim.getDefaultVoiceSlotId()
      defaultValue = result
      try {
         var data = await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_1)
         expect(data).assertTrue()
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0200 , data : " + data)
      } catch (err) {
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0200 fail, err: " + err.message)
         expect().assertFail()
         done()
         return
      }
      await sim.setDefaultVoiceSlotId(defaultValue)
      console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0200 finish")
      done()
   })

   /**
   * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Promise_0300
   * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 4.
   * @tc.desc    Function test
   */
   it('Telephony_Sim_setDefaultVoiceSlotId_Promise_0300', 0, async function (done) {
      try {
         var data = await sim.setDefaultVoiceSlotId(simSlotId.SLOTID_4)
      } catch (err) {
         //Expect slotid 4 return err here.
         var result = await sim.getDefaultVoiceSlotId()
         expect(result != simSlotId.SLOTID_4).assertTrue()
         console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0300 finish")
         done()
         return
      }
      expect().assertFail()
      console.log("Telephony_Sim_setDefaultVoiceSlotId_Promise_0300 fail, data : " + data)
      done()
   })
})