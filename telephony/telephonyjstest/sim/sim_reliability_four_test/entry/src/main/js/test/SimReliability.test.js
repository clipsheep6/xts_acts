/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
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

import sim from '@ohos.telephony.sim';
import {SIM_SLOT_ID, TIMES_VALUE, OTHER_ABNORMAL, CARD_NAME, CARD_NAME_ZERO, OPERATOR_NUM_LENGTH, TYPE_AND_INDEX,
    OTHER_ERRORS, CARD_INFO, LOCK_SWITCH2, OPERATOR_CODE, ICC_LENGTH, IMSI_LENGTH} from './lib/Const.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('SimReliability', function () {
   /**
   * @tc.number  Telephony_Sim_activateSim_Async_0400
   * @tc.name    Test activateSim interface stability, expect to return: true for 10 times
   * @tc.desc    Function test
   */
    it('Telephony_Sim_activateSim_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_activateSim_Async_0400 finish');
          done();
          return;
        }
        sim.activateSim(SIM_SLOT_ID.slotId0, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_activateSim_Async_0400 activateSim fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.isSimActive(SIM_SLOT_ID.slotId0, (err, value) => {
            if (err) {
              console.log(`Telephony_Sim_activateSim_Async_0400 isSimActive fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(value).assertTrue();
            recursive(n - 1);
          });
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_hasSimCard_Async_0400
     * @tc.name    The loop gets the return value of card 1 through the hasSimCard input
     *             parameter 0 10 times, expecting the result to be true
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_hasSimCard_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_hasSimCard_Async_0400 finish');
          done();
          return;
        }
        sim.hasSimCard(SIM_SLOT_ID.slotId0, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_hasSimCard_Async_0400 fail err${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(data).assertTrue();
          recursive(n - 1);
        });
      }
  
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_hasSimCard_Promise_0400
     * @tc.name    The loop gets the return value of card 1 through the hasSimCard input
     *             parameter 0 10 times, expecting the result to be true
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_hasSimCard_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.hasSimCard(SIM_SLOT_ID.slotId0);
          expect(data).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_hasSimCard_Promise_0400 fail err${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_hasSimCard_Promise_0400 finish');
      done();
    });
  
  
      /**
     * @tc.number  Telephony_Sim_isSimActive_Async_0500
     * @tc.name    Call the isSimActive interface with slotId set to 0,
     *             loop 10 times, and expect the result to return true all 10 times
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_isSimActive_Async_0500', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_isSimActive_Async_0500 finish');
          done();
          return;
        }
        sim.isSimActive(SIM_SLOT_ID.slotId0, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_isSimActive_Async_0500  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(data).assertTrue();
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_isSimActive_Promise_0500
     * @tc.name    The loop gets the return value of card 1 through the isSimActive input
     *             parameter 0 10 times, expecting the result to be true
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_isSimActive_Promise_0500', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.isSimActive(SIM_SLOT_ID.slotId0);
          expect(data).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_isSimActive_Promise_0500  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_isSimActive_Promise_0500 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_isSimActive_Promise_0500
     * @tc.name    The loop gets the return value of card 1 through the isSimActive input
     *             parameter 0 10 times, expecting the result to be true
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_isSimActive_Promise_0500', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.isSimActive(SIM_SLOT_ID.slotId0);
          expect(data).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_isSimActive_Promise_0500  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_isSimActive_Promise_0500 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_activateSim_Promise_0400
     * @tc.name    Test activateSim (slotId: number): Promise Interface stability, expect to return true
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_activateSim_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var res = await sim.activateSim(SIM_SLOT_ID.slotId0);
          try {
            var ret = await sim.isSimActive(SIM_SLOT_ID.slotId0);
            expect(ret).assertTrue();
          } catch (err) {
            console.log(`Telephony_Sim_activateSim_Promise_0400 isSimActive fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
        } catch (err) {
          console.log(`Telephony_Sim_activateSim_Promise_0400 activateSim fail, res : ${res}`);
          expect().assertFail();
          done();
          return;
        }
  
      }
      console.log('Telephony_Sim_activateSim_Promise_0400 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_deactivateSim_Promise_0400
     * @tc.name    Test activateSim (slotId: number): Promise Interface stability, expect to return true
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_deactivateSim_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          await sim.deactivateSim(SIM_SLOT_ID.slotId0);
          try {
            var ret = await sim.isSimActive(SIM_SLOT_ID.slotId0);
            expect(ret).assertFalse();
          } catch (err) {
            console.log(`Telephony_Sim_deactivateSim_Promise_0400 isSimActive fail, err : ${err.message}`);
            expect().assertFail();
          }
        } catch (err) {
          console.log(`Telephony_Sim_deactivateSim_Promise_0400 activateSim fail, err : ${err.message}`);
          expect().assertFail();
        }
      }
      console.log('Telephony_Sim_deactivateSim_Promise_0400 finish');
      done();
      try {
        await sim.activateSim(SIM_SLOT_ID.slotId0);
      } catch (err) {
        console.log(`Telephony_Sim_deactivateSim_Promise_0200 activateSim fail, err : ${err.message}`);
        expect().assertFail();
        done();
      }
    });
  function setShowNameWriteToPromise() {
      return new Promise((resolve, reject)=>{
          sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName, (err) => {
              if (err) {
                  console.log(`Telephony_Sim setShowNameWriteToPromise fail, err : ${err.message}`);
                  reject(err);
              } else {
                  resolve(null);
              }
          });
      })
  }

  function setShowNumberWriteToPromise() {
      return new Promise((resolve, reject)=>{
          sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber, (err) => {
              if (err) {
                  console.log(`Telephony_Sim setShowNumberWriteToPromise fail, err : ${err.message}`);
                  reject(err);
              } else {
                  resolve(null);
              }
          });
      })
  }

  function getSimIccIdWriteToPromise() {
      return new Promise((resolve, reject)=>{
          sim.getSimIccId(SIM_SLOT_ID.slotId0, (err, result) => {
              if (err) {
                  console.log(`Telephony_Sim getSimIccIdWriteToPromise fail, err : ${err.message}`);
                  reject(err);
              } else {
                  resolve(result);
              }
          });
      })
  }

    /**
     * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Async_0400
     * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
     *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
     *             interface with slotId input 0. Number in 1234, called
     *             getActiveSimAccountInfoList interface to get the return value, expected
     *             return IccAccountInfo structure, uint32_t slotIndex is zero,
     *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
     * @tc.desc    Function test
     */
    it('Telephony_Sim_getActiveSimAccountInfoList_Async_0400', 0, async function (done) {
      async function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getActiveSimAccountInfoList_Async_0400 finish');
          done();
          return;
        }
        try {
            await setShowNameWriteToPromise();
            await setShowNumberWriteToPromise();
            var result = await getSimIccIdWriteToPromise();
        } catch (err) {
            console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
        }
        sim.activateSim(SIM_SLOT_ID.slotId0, (err) => {
          if (err) {
            console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400 fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
              sim.getActiveSimAccountInfoList((error, info) => {
                if (error) {
                  console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400 error cause:${error.message}`);
                }
                for (let i = 0;i < info.length;i++) {
                  if (info[i].slotIndex === SIM_SLOT_ID.slotId0) {
                    expect(info[i].simId === SIM_SLOT_ID.slotId0).assertTrue();
                    expect(info[i].isEsim).assertFalse();
                    expect(info[i].isActive).assertTrue();
                    expect(info[i].iccId === result).assertTrue();
                    expect(info[i].showName === CARD_NAME.cardName).assertTrue();
                    expect(info[i].showNumber === CARD_NAME.cardNumber).assertTrue();
                  }
                }
              });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Promise_0400
     * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
     *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
     *             interface with slotId input 0. Number in 1234, called
     *             getActiveSimAccountInfoList interface to get the return value, expected
     *             return IccAccountInfo structure, uint32_t slotIndex is zero,
     *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
     * @tc.desc    Function test
     */
  it('Telephony_Sim_getActiveSimAccountInfoList_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME; index++) {
          try {
              var data = await sim.activateSim(SIM_SLOT_ID.slotId0);
              var res = await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
              var ret = await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber);
          } catch (err) {
              console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          try {
              var result = await sim.getSimIccId(SIM_SLOT_ID.slotId0);
              try {
                  var info = sim.getActiveSimAccountInfoList();
                  for (let i = 0;i < info.length; i++) {
                      if (info[i].slotIndex === SIM_SLOT_ID.slotId0) {
                          expect(info[i].simId === SIM_SLOT_ID.slotId0).assertTrue();
                          expect(info[i].isEsim).assertFalse();
                          expect(info[i].isActive).assertTrue();
                          expect(info[i].iccId === result).assertTrue();
                          expect(info[i].showName === CARD_NAME.cardName).assertTrue();
                          expect(info[i].showNumber === CARD_NAME.cardNumber).assertTrue();
                      }
                  }
              } catch (err) {
                  console.log(`getActiveSimAccountInfoList error cause:${err.message}`);
                  expect().assertFail();
                  done();
                  return;
              }
          } catch (err) {
              console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 getShowNumber fail, err : ${
              err.message}`);
              expect().assertFail();
              done();
              return;
          }
      }
      console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 finish');
      done();
  });
  
    /**
     * @tc.number  Telephony_Sim_activateSim_Async_0400
     * @tc.name    Test activateSim (slotId: number, callback: AsyncCallback): void interface
     *             stability, expected to return true
     * @tc.desc    Function test
     */
    it('Telephony_Sim_activateSim_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_activateSim_Async_0400 finish');
          done();
          return;
        }
        sim.activateSim(SIM_SLOT_ID.slotId0, (err, value) => {
          if (err) {
            console.log(`Telephony_Sim_activateSim_Async_0400 activateSim fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.isSimActive(SIM_SLOT_ID.slotId0, (err, result) => {
            if (err) {
              console.log(`Telephony_Sim_activateSim_Async_0400 isSimActive fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(result).assertTrue();
          });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_activateSim_Async_0400
     * @tc.name    Test deactivateSim (slotId: number, callback: AsyncCallback): void interface
     *             stability, expected to return false
     * @tc.desc    Function test
     */
    it('Telephony_Sim_deactivateSim_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_deactivateSim_Async_0400 finish');
          done();
          return;
        }
        sim.deactivateSim(SIM_SLOT_ID.slotId0, (err) => {
          if (err) {
            console.log(`Telephony_Sim_deactivateSim_Async_0400 activateSim fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.isSimActive(SIM_SLOT_ID.slotId0, (err, result) => {
            if (err) {
              console.log(`Telephony_Sim_deactivateSim_Async_0400 isSimActive fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(result).assertFalse();
          });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
      /**
     * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Async_0400
     * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
     *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
     *             interface with slotId input 0. Number in 1234, called
     *             getActiveSimAccountInfoList interface to get the return value 10 times, expected
     *             return IccAccountInfo structure, uint32_t slotIndex is zero,
     *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
     * @tc.desc    Reliability test
     */
  it('Telephony_Sim_getActiveSimAccountInfoList_Async_0400', 0, async function (done) {
      async function recursive(n) {
          if (n <= 0) {
              console.log('Telephony_Sim_getActiveSimAccountInfoList_Async_0400 finish');
              done();
              return;
          }
          try {
              await setShowNameWriteToPromise();
              await setShowNumberWriteToPromise();
              var result = await getSimIccIdWriteToPromise();
          }
          catch (err) {
              console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400  fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          sim.activateSim(SIM_SLOT_ID.slotId0, (err) => {
              if (err) {
                  console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400 fail, err : ${err.message}`);
                  expect().assertFail();
                  done();
                  return;
              }
              sim.getActiveSimAccountInfoList((err, info) => {
                  if (err) {
                      console.log(`getActiveSimAccountInfoList error cause:${err.message}`);
                  }
                  for (let i = 0;i < info.length; i++) {
                      if (info[i].slotIndex === SIM_SLOT_ID.slotId0) {
                          expect(info[i].simId === SIM_SLOT_ID.slotId0).assertTrue();
                          expect(info[i].isEsim).assertFalse();
                          expect(info[i].isActive).assertTrue();
                          expect(info[i].iccId === result).assertTrue();
                          expect(info[i].showName === CARD_NAME.cardName).assertTrue();
                          expect(info[i].showNumber === CARD_NAME.cardNumber).assertTrue();

                      }
                  }
                  recursive(n - 1);
              });
          });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
  });
  
    /**
     * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Promise_0400
     * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
     *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
     *             interface with slotId input 0. Number in 1234, called
     *             getActiveSimAccountInfoList interface to get the return value 10 times, expected
     *             return IccAccountInfo structure, uint32_t slotIndex is zero,
     *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getActiveSimAccountInfoList_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          await sim.activateSim(SIM_SLOT_ID.slotId0);
          await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
          await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber);
        } catch (err) {
            console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 activateSim fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
        }
              try {
                var result = await sim.getSimIccId(SIM_SLOT_ID.slotId0);
                try {
                  var info = sim.getActiveSimAccountInfoList();
                  for (let i = 0;i < info.length;i++) {
                    if (info[i].slotIndex === SIM_SLOT_ID.slotId0) {
                      expect(info[i].simId === SIM_SLOT_ID.slotId0).assertTrue();
                      expect(info[i].isEsim).assertFalse();
                      expect(info[i].isActive).assertTrue();
                      expect(info[i].iccId === result).assertTrue();
                      expect(info[i].showName === CARD_NAME.cardName).assertTrue();
                      expect(info[i].showNumber === CARD_NAME.cardNumber).assertTrue();
                    }
                  }
                } catch (err) {
                  console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0400
                  getActiveSimAccountInfoList error :${err.message}`);
                  expect().assertFail();
                  done();
                  return;
                }
              } catch (err) {
                console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 getSimIccId fail, err : ${
                  err.message}`);
                expect().assertFail();
                done();
                return;
              }

      }
      console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_setShowName_Async_0500
     * @tc.name    Call setShowName with slotId as the input parameter 0 and name as
     *             the input parameter 1234. Call getShowName with slotId as the
     *             input parameter 0 10 times, expecting true and returning 1234
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_setShowName_Async_0500', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_setShowName_Async_0500 finish');
          done();
          return;
        }
        sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName, (err) => {
          if (err) {
            console.log(`Telephony_Sim_setShowName_Async_0500 setShowName fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.getShowName(SIM_SLOT_ID.slotId0, (err, value) => {
            if (err) {
              console.log(`Telephony_Sim_setShowName_Async_0500 getShowName , err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(value === CARD_NAME.cardName).assertTrue();
  
          });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_setShowName_Promise_0500
     * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
     *             the input parameter 1234. Call getShowName with slotId as the
     *             input parameter 0 10 times, expecting true and returning 1234
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_setShowName_Promise_0500', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
          try {
            var value = await sim.getShowName(SIM_SLOT_ID.slotId0);
            expect(CARD_NAME.cardName === value).assertTrue();
          } catch (err) {
            console.log(`Telephony_Sim_setShowName_Promise_0500 getShowName fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
        } catch (err) {
          console.log(`Telephony_Sim_setShowName_Promise_0500 setShowName fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_setShowName_Promise_0500 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_getShowName_Async_0500
     * @tc.name    The setShowName interface is called with slotId input parameter 0 and name input parameter
     *             1234. The getShowName interface is called with slotId input
     *             parameter 0 for 10 times and 1234 is expected to be returned
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getShowName_Async_0500', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getShowName_Async_0500 finish');
          done();
          return;
        }
        sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_getShowName_Async_0500 setShowName fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.getShowName(SIM_SLOT_ID.slotId0, (err, value) => {
            if (err) {
              console.log(`Telephony_Sim_getShowName_Async_0500 getShowName fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(value === CARD_NAME.cardName).assertTrue();
          });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_setShowNumber_Async_0500
     * @tc.name    The setShowNumber interface is called with slotId input parameter 0 and name input parameter
     *             1234. The getShowNumber interface is called with slotId input
     *             parameter 0 for 10 times and 1234 is expected to be returned
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_setShowNumber_Async_0500', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_setShowNumber_Async_0500 finish');
          done();
          return;
        }
        sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_setShowNumber_Async_0500 setShowNumber fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.getShowNumber(SIM_SLOT_ID.slotId0, (err, value) => {
            if (err) {
              console.log(`Telephony_Sim_setShowNumber_Async_0500  getShowNumber fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(value === CARD_NAME.cardNumber).assertTrue();
          });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_getShowNumber_Async_0400
     * @tc.name    The setShowNumber interface is called with slotId input parameter 0 and name input parameter
     *             1234. The getShowNumber interface is called with slotId input
     *             parameter 0 for 10 times and 1234 is expected to be returned
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getShowNumber_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getShowNumber_Async_0400 finish');
          done();
          return;
        }
        sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardName, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_getShowNumber_Async_0400 setShowNumber fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.getShowNumber(SIM_SLOT_ID.slotId0, (err, value) => {
            if (err) {
              console.log(`Telephony_Sim_getShowNumber_Async_0400 getShowNumber fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(value === CARD_NAME.cardName).assertTrue();
          });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_unlockPin2_Async_0400
     * @tc.name    Call the unlockPin2 interface, pin is 123, slotId is 0,
     *             and result =-2 is expected for 10 times
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_unlockPin2_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_unlockPin2_Async_0400 finish');
          done();
          return;
        }
        sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_unlockPin2_Async_0400 fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(data.result === OTHER_ERRORS).assertTrue();
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
  
    /**
     * @tc.number  Telephony_Sim_unlockPuk2_Async0600
     * @tc.name    Call the unlockPin2 interface, newpin is 123, puk is 123,slotId is 0,
     *             and result =-2 is expected for 10 times
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_unlockPuk2_Async0600', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_unlockPuk2_Async0600 finish');
          done();
          return;
        }
        sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.puk, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_unlockPuk2_Async0600 fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(data.result === OTHER_ERRORS).assertTrue();
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     *
     * @tc.number  Telephony_Sim_getOperatorConfigs_Async_0400
     * @tc.name    Call getOperatorConfigs, slotId is 0,10 times, and OperatorConfig is not expected to be empty
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getOperatorConfigs_Async_0400', 0, async function (done) {
        function recursive (n) {
            if (n <= 0) {
                console.log('Telephony_Sim_getOperatorConfigs_Async_0400 finish');
                done();
                return;
            }
            sim.getOperatorConfigs(SIM_SLOT_ID.slotId0, (err, data) => {
                if (err) {
                    console.log(`Telephony_Sim_getOperatorConfigs_Async_0400 fail, err : ${err.message}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.length !== 0).assertTrue();
                recursive(n - 1);
            });
        }
        recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     *
     * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_0400
     * @tc.name    Call getOperatorConfigs, slotId is 0,10 times, and OperatorConfig is not expected to be empty
     * @tc.desc    Reliability test
     */
    it("Telephony_Sim_getOperatorConfigs_Promise_0400", 0, async function (done) {
        for (let index = 0; index < TIMES_VALUE.TEST_RUN_TIME; index++) {
            try {
                var data = await  sim.getOperatorConfigs(SIM_SLOT_ID.slotId0);
                expect(data.length !== 0).assertTrue();
            } catch (err) {
                console.log("Telephony_Sim_getOperatorConfigs_Promise_0400 fail");
                expect().assertFail();
                done();
                return;
            }
        }
        console.log("Telephony_Sim_getOperatorConfigs_Promise_0400 finish");
        done();
    })
  
    /**
     * @tc.number  Telephony_Sim_alterPin2_Async_0300
     * @tc.name    Call the alterPin2 interface, newpin is 123456789, oldPin is 1234,slotId is 0,
     *             and result =-2 is expected for 10 times
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_alterPin2_Async_0300', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_alterPin2_Async_0300 finish');
          done();
          return;
        }
        sim.alterPin2(SIM_SLOT_ID.slotId4, CARD_NAME.newPinNine, CARD_NAME.oldPin, (err) => {
          if (err) {
            console.log('Telephony_Sim_addIccDiallingNumbers_Async_0600_2 finish');
            done();
            return;
          }
          console.log('Telephony_Sim_alterPin2_Async_0300  fail,  ');
          expect().assertFail();
          done();
  
        });
        recursive(n - 1);
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_0400
     * @tc.name    The getSimTelephoneNumber interface is called with the slotId parameter 0 and 10 times.
     *             The expected return value is not null
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getSimTelephoneNumber_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getSimTelephoneNumber_Async_0400 finish');
          done();
          return;
        }
        sim.getSimTelephoneNumber(SIM_SLOT_ID.slotId0, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0400 fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(data.length !== 0).assertTrue();
          expect(data.length >= 11).assertTrue();
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_alterPin2_Promise_0300
     * @tc.name    Call the alterPin2 interface, newpin is 123456789, oldPin is 1234,slotId is 0,
     *             and result =-2 is expected for 10 times
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_alterPin2_Promise_0300', 0, async function (done) {
        for (let index = 0; index < TIMES_VALUE.TEST_RUN_TIME; index++) {
            try {
                await sim.alterPin2(SIM_SLOT_ID.slotId4, CARD_NAME.newPinNine, CARD_NAME.oldPin);
            } catch (err) {
                console.log('Telephony_Sim_alterPin2_Promise_0300 finish');
                done();
                return;
            }
        }
        console.log('Telephony_Sim_alterPin2_Promise_0300 finish');
        done();
    });
  
    /**
     * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_0400
     * @tc.name   The getSimTelephoneNumber interface is called with the slotId
     *            parameter 0 and 10 times. The expected return value is not null
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getSimTelephoneNumber_Promise_0400', 0, async function (done) {
        for (let index = 0; index < TIMES_VALUE.TEST_RUN_TIME; index++) {
            try {
                var data = await sim.getSimTelephoneNumber(SIM_SLOT_ID.slotId0);
                expect(data.length !== 0).assertTrue();
                expect(data.length >= 11).assertTrue();
            }
            catch (err) {
            console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0400 fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
      }
        console.log('Telephony_Sim_getSimTelephoneNumber_Promise_0400 finish');
        done();
    });
  
    /**
     * @tc.number  Telephony_Sim_getShowNumber_Async_0600
     * @tc.name    The setShowName interface is called with slotId input parameter 0 and name input parameter 1234.
     *             The getShowName interface is called with slotId input
     *             parameter 0 for 10 times. 1234 is expected and true is returned
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getShowNumber_Async_0600', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getShowNumber_Async_0600 finish');
          done();
          return;
        }
        sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_getShowNumber_Async_0600 fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          sim.getShowName(SIM_SLOT_ID.slotId0, (err, value) => {
            if (err) {
              console.log(`Telephony_Sim_getShowNumber_Async_0600 getShowName fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            expect(value === CARD_NAME.cardName).assertTrue();
          });
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_getShowName_Promise_0500
     * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
     *             the input parameter 1234. Call getShowName with slotId as the
     *             input parameter 0 10 times, expecting  returning 1234
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getShowName_Promise_0500', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
          try {
            var value = await sim.getShowName(SIM_SLOT_ID.slotId0);
          } catch (err) {
            console.log(`Telephony_Sim_getShowName_Promise_0500 getShowName fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(CARD_NAME.cardName === value).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_getShowName_Promise_0500 setShowName fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
  
      }
      console.log('Telephony_Sim_getShowName_Promise_0500 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_setShowNumber_Promise_0500
     * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
     *             the input parameter 1234. Call getShowName with slotId as the
     *             input parameter 0 10 times, expecting  returning 1234
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_setShowNumber_Promise_0500', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber);
          try {
              var value = await sim.getShowNumber(SIM_SLOT_ID.slotId0);
              expect(CARD_NAME.cardNumber === value).assertTrue();
          } catch (err) {
              console.log(`Telephony_Sim_setShowNumber_Promise_0500 getShowNumber fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
          }
        } catch (err) {
          console.log(`Telephony_Sim_setShowNumber_Promise_0500 setShowNumber fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_setShowNumber_Promise_0500 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_getShowNumber_Promise_0500
     * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
     *             the input parameter 1234. Call getShowName with slotId as the
     *             input parameter 0 10 times, expecting  returning 1234
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getShowNumber_Promise_0500', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
          try {
              var value = await sim.getShowNumber(SIM_SLOT_ID.slotId0);
              expect(CARD_NAME.cardName === value).assertTrue();
          } catch (err) {
              console.log(`Telephony_Sim_getShowNumber_Promise_0500 getShowNumber fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
          }
        } catch (err) {
          console.log(`Telephony_Sim_getShowNumber_Promise_0500 setShowNumber fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_getShowNumber_Promise_0500 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_unlockPin2_Promise_0400
     * @tc.name    Call the unlockPin2 interface, pin is 123, slotId is 0,
     *             and result =-2 is expected for 10 times
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_unlockPin2_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber);
        } catch (err) {
          console.log(`Telephony_Sim_unlockPin2_Promise_0400 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data.result === OTHER_ERRORS).assertTrue();
      }
      console.log('Telephony_Sim_unlockPin2_Promise_0400 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_unlockPuk2_Promise_0600
     * @tc.name    Call the unlockPin2 interface, newpin is 1234, puk is 123,slotId is 0,
     *             and result =-2 is expected for 10 times
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_unlockPuk2_Promise_0600', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.puk);
        } catch (err) {
          console.log(`Telephony_Sim_unlockPuk2_Promise_0600 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data.result === OTHER_ERRORS).assertTrue();
      }
      console.log('Telephony_Sim_unlockPuk2_Promise_0600 finish');
      done();
    });
  
    /**
     * @tc.number   Telephony_Sim_getShowNumber_Promise_0600
     * @tc.name     Call getShowName with slotId as input parameter 0 and name as input parameter 1234.
     *              Call getShowName with slotId as input parameter 0 for 10 times.
     *              Expect to return 1234 and return true
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getShowNumber_Promise_0600', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
          try {
            var value = await sim.getShowNumber(SIM_SLOT_ID.slotId0);
            expect(CARD_NAME.cardNumber === value).assertTrue();
          } catch (err) {
            console.log(`Telephony_Sim_getShowNumber_Promise_0600 getShowName fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
        } catch (err) {
          console.log(`Telephony_Sim_getShowNumber_Promise_0600 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_getShowNumber_Promise_0600 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_0400
     * @tc.name    The getVoiceMailIdentifier interface is called with the slotId input parameter 0, 10 times,
     *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004
     *             or 46007, the return value is 12599
     *             Otherwise, the return value is not null
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getVoiceMailIdentifier_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getVoiceMailIdentifier_Async_0400 finish');
          done();
          return;
        }
        sim.getVoiceMailIdentifier(SIM_SLOT_ID.slotId0, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0400 getVoiceMailIdentifier
             fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0400 getVoiceMailIdentifier , data : ${data}`);
          expect(data !== '').assertTrue();
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_0400
     * @tc.name    The getVoiceMailNumber interface is called with the slotId input parameter 0, 10 times,
     *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or
     *             46004 or 46007, the return value is 12599
     *             Otherwise, the return value is not null
     * @tc.desc    Reliability test
     */
    it('Telephony_Sim_getVoiceMailNumber_Async_0400', 0, async function (done) {
      function recursive (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getVoiceMailNumber_Async_0400 finish');
          done();
          return;
        }
        sim.getVoiceMailNumber(SIM_SLOT_ID.slotId0, (err, data) => {
          if (err) {
            console.log(`Telephony_Sim_getVoiceMailNumber_Async_0400 getVoiceMailNumber fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(data !== '').assertTrue();
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Promise_0400
     * @tc.name   Call the getVoiceMailIdentifier interface with slotId input parameter 0, 10 times
     * expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
     * the return value is 12599 Otherwise, the return value is not null
     * @tc.desc    Function test
     */
    it('Telephony_Sim_getVoiceMailIdentifier_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
          try {
              var data = await sim.getVoiceMailIdentifier(SIM_SLOT_ID.slotId0);
              expect(data !== '').assertTrue();
          } catch (err) {
              console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0400 getVoiceMailIdentifier
              fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
          }
      }
      console.log('Telephony_Sim_getVoiceMailIdentifier_Promise_0400 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_0400
     * @tc.name   Call the getVoiceMailNumber interface with slotId input parameter 0, 10 times
     * expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
     * the return value is 12599 Otherwise, the return value is not null
     * @tc.desc    Function test
     */
    it('Telephony_Sim_getVoiceMailNumber_Promise_0400', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
        try {
          var data = await sim.getVoiceMailNumber(SIM_SLOT_ID.slotId0);
          expect(data.length !== 0).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_getVoiceMailNumber_Promise_0400 getVoiceMailNumber, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_getVoiceMailNumber_Promise_0400 finish');
      done();
    });
  
    /**
     * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0600
     * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
     *             Interface stability. Expected structure assertions are
     *             recordNumber_=1,alphaTag_=test,number_=12345678
     * @tc.desc    Function test
     */
    it('Telephony_Sim_queryIccDiallingNumbers_Async_0600', 0, async function (done) {
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, async function (error, data) {
            if (error) {
                console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0600 first query error: ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            console.log(
                `Telephony_Sim_queryIccDiallingNumbers_Async_0600 first query data: ${JSON.stringify(data)}`
            );
            for (let i = 0;i < data.length;i++) {
                if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                    try {
                        await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0,
                            TYPE_AND_INDEX.type1, data[i].recordNumber);
                        console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0600 delete ${data[i].recordNumber}`);
                    } catch (error) {
                        console.log(
                            `Telephony_Sim_queryIccDiallingNumbers_Async_0600 delete fail, error: ${error.message}`
                        );
                    }
                }
            }
            const diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
            try {
                await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
                console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0600 add');
            } catch (error) {
                console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0600 add error: ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
  
            const recursive = function (n) {
                if (n <= 0) {
                    console.log('(ALL)Telephony_Sim_queryIccDiallingNumbers_Async_0600 test finish.');
                    done();
                    return;
                }
                let time = 10 - n + 1;
                console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0600 run time: ${time}`);
                sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
                    console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0600 second query`);
                    if (error) {
                        console.log(
                            `(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0600 second
                            query error: ${error.message}`
                        );
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(
                        `(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0600 second
                        query data: ${JSON.stringify(data)}`
                    );
  
                    let isExist = data.some(item => {
                        if (item.recordNumber === 1) {
                            return true;
                        }
                    });
  
                    if (isExist) {
                        recursive(n - 1);
                    } else {
                        console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0600 test fail.`);
                        expect().assertFail();
                        done();
                    }
                });
            };
            recursive(TIMES_VALUE.TEST_RUN_TIME);
        });
    });
  
    /**
     * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0600
     * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
     *             Interface stability. Expected structure assertions are
     *             recordNumber_=1,alphaTag_=test,number_=12345678
     * @tc.desc    Function test
     */
    it('Telephony_Sim_queryIccDiallingNumbers_Promise_0600', 0, async function (done) {
        try {
            const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
            for (let i = 0;i < data.length;i++) {
                if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                    await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
                    console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0600 delete ${data[i].recordNumber}`);
                }
            }
        } catch (error) {
            console.log(
                `Telephony_Sim_queryIccDiallingNumbers_Promise_0600 query or delete error: ${JSON.stringify(error)}`
            );
        }
        let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
  
        try {
            await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
            console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0600 add.');
        } catch (error) {
            console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0600 add fail, error: ${error.message}`);
            expect().assertFail();
            done();
            return;
        }
        for (let i = 0;i < TIMES_VALUE.TEST_RUN_TIME;i++) {
            let time = i + 1;
            try {
                const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                console.log(`
            (${time})Telephony_Sim_queryIccDiallingNumbers_Promise_0600 test query result: ${JSON.stringify(data)}`
                );
                let isExist = data.some(item => {
                    if (item.recordNumber === 1) {
                        return true;
                    }
                });
                if (!isExist) {
                    console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Promise_0600 test fail.`);
                    expect().assertFail();
                    done();
                }
            } catch (error) {
                console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Promise_0600 test query
                error:${error.message}`);
                expect().assertFail();
                done();
            }
        }
        done();
    });
  
    /**
     * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0900
     * @tc.name     1. Call the delIccDiallingNumbers interface with parameters 1 for
     *              slotId, 0 for type, and 1 for index
     *              2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
     *              3. Call the addIccDiallingNumbers interface, slotId parameter 1,
     *              type parameter 1 DiallingNumbersInfo struct input arguments
     *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
     *              structure assertions are eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
     * @tc.desc     Function test
  */
    it('Telephony_Sim_addIccDiallingNumbers_Promise_0900', 0, async function (done) {
        for (let i = 0;i < TIMES_VALUE.TEST_RUN_TIME;i++) {
            let time = i + 1;
            try {
                const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                for (let i = 0;i < data.length;i++) {
                    if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                        await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0,
                            TYPE_AND_INDEX.type1, data[i].recordNumber);
                        console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0900
                        delete ${data[i].recordNumber}`);
                    }
                }
            } catch (error) {
                console.log(
                    `(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0900 query or delete error: ${error.message}`
                );
            }
            let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
            try {
                await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
                console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0900 add`);
            } catch (error) {
                console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0900 add error:${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            try {
                const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                let isExist = data.some(item => {
                    if (item.recordNumber === 1) {
                        return true;
                    }
                });
                if (!isExist) {
                    console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0900 test fail.`);
                    expect().assertFail();
                    done();
                }
            } catch (error) {
                console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0900 second
                query error: ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
        }
    });
  
    /**
     * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0900
     * @tc.name    1. Call the delIccDiallingNumbers interface with parameters 1 for
     *             slotId, 0 for type, and 1 for index
     *             2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
     *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
     *             type parameter 0 DiallingNumbersInfo struct input arguments
     *             4.Call queryIccDiallingNumbers; slotId = slotId; type = 0; 10 times  Expected
     *             structure assertions are eFID =0,recordNumber_=1,aalphaTag_=test,number_=12345678, and emails="".
     * @tc.desc    Function test
     */
    it('Telephony_Sim_addIccDiallingNumbers_Async_0900', 0, async function (done) {
        const recursive = function (n) {
            if (n <= 0) {
                console.log('(ALL)Telephony_Sim_addIccDiallingNumbers_Async_0900 test finish.');
                done();
                return;
            }
            let time = 10 - n + 1;
            console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900 run time: ${time}`);
  
            sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, async (error, data) => {
                if (error) {
                    console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900 first
                     query error: ${error.message}`);
                    expect().assertFail();
                    done();
                    return;
                }
  
                console.log(
                    `(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900 first query data: ${JSON.stringify(data)}`
                );
  
                try {
                    for (let i = 0;i < data.length;i++) {
                        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                            await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1,
                                data[i].recordNumber);
                            console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900
                            delete ${data[i].recordNumber}`);
                        }
                    }
                } catch (error) {
                    console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900 delete
                     error: ${error.message}`);
                }
  
                let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
  
                sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo,
                    function (error) {
                    if (error) {
                        console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900 add
                         error: ${error.message}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
                        if (error) {
                            console.log(
                                `(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900 second
                                query error: ${error.message}`
                            );
                            expect().assertFail();
                            done();
                            return;
                        }
                        let isExist = data.some(item => {
                            if (item.recordNumber === 1) {
                                return true;
                            }
                        });
  
                        if (isExist) {
                            recursive(n - 1);
                        } else {
                            console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0900 test fail.`);
                            expect().assertFail();
                            done();
                        }
                    });
                });
            });
        };
        recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number Telephony_Sim_updateIccDiallingNumbers_Async_1100
     * @tc.name   1. Call the delIccDiallingNumbers interface with parameters 1 for slotId,
     *            0 for type, and 1 for index
     *            2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
     *            3. Call the addIccDiallingNumbers interface, slotId parameter 1,
     *            type parameter 0, DiallingNumbersInfo
     *            struct input arguments < eFID =1,recordNumber_=1,aalphaTag_=test,number_=12345678,emails="">
     *            SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1
     *            aalphaTag_=tset_Update,number_=12345678_Update,emails="">
     *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1 ,
     *            step4 and step5 10 times, expectation 1. Step 4 Return true
     *            Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1,
     *            aalphaTag_=tset_Update,number_=null, and emails="".
     * @tc.desc   Function test
     */
    it('Telephony_Sim_updateIccDiallingNumbers_Async_1100', 0, async function (done) {
        let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
        let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};
  
        try {
            const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
            for (let i = 0;i < data.length;i++) {
                if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                    await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
                    console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1100 delete ${data[i].recordNumber}`);
                }
            }
        } catch (error) {
            console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1100 query or delete error: ${error.message}`);
        }
  
        try {
            await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
            console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1100 add');
        } catch (error) {
            console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1100 add fail, error:${error.message}`);
            expect().assertFail();
            done();
            return;
        }
        const recursive = async function (n) {
            if (n <= 0) {
                console.log('(ALL)Telephony_Sim_updateIccDiallingNumbers_Async_1100 test finish.');
                done();
                return;
            }
            let time = 10 - n + 1;
            console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1100 run time: ${time}`);
            sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0,
                TYPE_AND_INDEX.type1,
                diallingNumbersInfoUpdate,
                TYPE_AND_INDEX.index1, async function (error) {
                    if (error) {
                        console.log(
                            `(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1100 update
                            fail, error: ${error.message}`
                        );
                        expect().assertFail();
                        done();
                        return;
                    }
                    try {
                        const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                        let isExist = data.some(item => {
                            if (item.recordNumber === 1
                            && item.alphaTag === diallingNumbersInfoUpdate.alphaTag
                            && item.number === diallingNumbersInfoUpdate.number) {
                                return true;
                            }
                        });
                        if (isExist) {
                            recursive(n - 1);
                        } else {
                            console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1100 test fail.`);
                            expect().assertFail();
                            done();
                        }
                    } catch (error) {
                        console.log(
                            `(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1100 second query
                            fail, error:${error.message}`
                        );
                        expect().assertFail();
                        done();
                    }
                });
        };
        recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1100
     * @tc.name   1. Call the delIccDiallingNumbers interface with parameters 1 for
     *            slotId, 0 for type, and 1 for index
     *            2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
     *            3. Call the addIccDiallingNumbers interface, slotId parameter 1,
     *            type parameter 0, DiallingNumbersInfo
     *            struct input arguments < eFID =1,recordNumber_=1,aalphaTag_=test,number_=12345678,emails="">
     *            SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1
     *            aalphaTag_=tset_Update,number_=12345678_Update,emails="">
     *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1 ,step4 and
     *            step5 10 times, expectation 1. Step 4 Return true
     *            Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1, aalphaTag_=tset_Update
     *            ,number_=null, and emails="".
     * @tc.desc   Function test
     */
    it('Telephony_Sim_updateIccDiallingNumbers_Promise_1100', 0, async function (done) {
        let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
        let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};
  
        try {
            const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
            for (let i = 0;i < data.length;i++) {
                if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                    await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
                    console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1100 delete ${data[i].recordNumber}`);
                }
            }
        } catch (error) {
            console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1100 query or delete error: ${error.message}`);
        }
  
        try {
            await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
            console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1100 add');
        } catch (error) {
            console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1100 add fail, error:${error.message}`);
            expect().assertFail();
            done();
            return;
        }
  
        for (let i = 0;i < TIMES_VALUE.TEST_RUN_TIME;i++) {
            let time = i + 1;
  
            try {
                await sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfoUpdate,
                    TYPE_AND_INDEX.index1);
                console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Promise_1100 update`);
            } catch (error) {
                console.log(
                    `(${time})Telephony_Sim_updateIccDiallingNumbers_Promise_1100 update fail, error: ${error.message}`
                );
                expect().assertFail();
                done();
                return;
            }
            try {
                const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                let isExist = data.some(item => {
                    if (item.recordNumber === 1
                    && item.alphaTag === diallingNumbersInfoUpdate.alphaTag
                    && item.number === diallingNumbersInfoUpdate.number) {
                        return true;
                    }
                });
  
                if (!isExist) {
                    console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1100 test fail.`);
                    expect().assertFail();
                    done();
                }
            } catch (error) {
                console.log(
                    `(${time})Telephony_Sim_updateIccDiallingNumbers_Promise_1100 second query fail,
                    error: ${error.message}`
                );
                expect().assertFail();
                done();
            }
        }
    });
  
    /**
     * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0700
     * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback:
     *              AsyncCallback>) Void Interface query
     *              type is fixed dial contact, expect to return structure
     *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
     * @tc.desc     Function test
     */
    it('Telephony_Sim_delIccDiallingNumbers_Async_0700', 0, async function (done) {
        const recursive = async function (n) {
            if (n <= 0) {
                console.log('(ALL)Telephony_Sim_delIccDiallingNumbers_Async_0700 test finish.');
                done();
                return;
            }
            let time = 10 - n + 1;
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 run time: ${time}`);
            let newRecordNumber;
            let recordNumbers = [];
            let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
            let data;
            try {
                data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                console.log(
                    `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0100 first query result:
                      ${JSON.stringify(data)}`
                );
                recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
                console.log(
                    `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0100 recordNumbers:
                      ${JSON.stringify(recordNumbers)}`
                );
            } catch (error) {
                console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0100 first query
                fail, error:${error.message}`);
                expect().assertFail();
                done();
                return;
            }
            if (data && data.length !== 0) {
                for (let i = 0;i < data.length;i++) {
                    if (data[i].alphaTag === 'test') {
                        newRecordNumber = data[i].recordNumber;
                        break;
                    }
                }
            }
            if (!newRecordNumber) {
                try {
                    await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
                    console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 add`);
                } catch (error) {
                    console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 add fail,
                     error:${error.message}`);
                    expect().assertFail();
                    done();
                    return;
                }
                try {
                    const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                    console.log(
                        `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 second query
                         result: ${JSON.stringify(_data)}`
                    );
                    let tmp = _data.filter(diallingNumberInfo =>
                    recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
                        .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
                    newRecordNumber = tmp[0];
                    console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700
                     recordNumber: ${newRecordNumber}`);
                } catch (error) {
                    console.log(
                        `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 second query
                        fail, error:${error.message}`
                    );
                    expect().assertFail();
                    done();
                    return;
                }
            }
  
            sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber, function (error) {
                if (error) {
                    console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 delete
                    fail, error:${error.message}`);
                    expect().assertFail();
                    done();
                    return;
                }
                sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, function (error, data) {
                    if (error) {
                        console.log(
                            `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 third query
                             fail, error${error.message}`
                        );
                        expect().assertFail();
                        done();
                        return;
                    }
                    let recordNumbers2 = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
                    if (recordNumbers2.indexOf(newRecordNumber) > 0) {
                        console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0700 delete
                        fail, number still exist.`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    recursive(n - 1);
                });
            });
        };
        recursive(TIMES_VALUE.TEST_RUN_TIME);
    });
  
    /**
     * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0700
     * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback:
     *              AsyncCallback>) Void Interface query
     *              type is fixed dial contact, expect to return structure
     *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
     * @tc.desc     Function test
     */
    it('Telephony_Sim_delIccDiallingNumbers_Promise_0700', 0, async function (done) {
        for (let i = 0;i < TIMES_VALUE.TEST_RUN_TIME;i++) {
            let time = i + 1;
  
            let newRecordNumber;
            let recordNumbers = [];
            let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
            let data;
  
            try {
                data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                console.log(
                    `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 first query
                     result: ${JSON.stringify(data)}`
                );
                recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
                console.log(
                    `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 recordNumbers:
                     ${JSON.stringify(recordNumbers)}`
                );
            } catch (error) {
                console.log(
                    `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 first query
                    fail, error: ${error.message}`
                );
                expect().assertFail();
                done();
                return;
            }
  
            if (data && data.length !== 0) {
                for (let i = 0;i < data.length;i++) {
                    if (data[i].alphaTag === 'test') {
                        newRecordNumber = data[i].recordNumber;
                        break;
                    }
                }
            }
  
            if (!newRecordNumber) {
                try {
                    await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
                    console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 add`);
                } catch (error) {
                    console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 add
                     fail, error:${error.message}`);
                    expect().assertFail();
                    done();
                    return;
                }
  
                try {
                    const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                    console.log(
                        `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 second query
                         result: ${JSON.stringify(_data)}`
                    );
                    const tmp = _data.filter(diallingNumberInfo =>
                    recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
                        .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
                    newRecordNumber = tmp[0];
                    console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700
                    recordNumber: ${newRecordNumber}`);
                } catch (error) {
                    console.log(
                        `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 second query
                         fail, error:${error.message}`
                    );
                    expect().assertFail();
                    done();
                    return;
                }
            }
  
            try {
                await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber);
                console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 delete`);
            } catch (error) {
                console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 delete fail.
                 error: ${error.message}`);
                expect().assertFail();
                done();
                return;
            }
  
            try {
                const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
                for (let i = 0;i < data.length;i++) {
                    if (data[i].recordNumber === newRecordNumber) {
                        console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 delete fail,
                         number still exist.`);
                        expect().assertFail();
                        done();
                        return;
                    }
                }
                console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 test finish.`);
            } catch (error) {
                console.log(
                    `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0700 third query fail,
                     error: ${error.message}`
                );
                expect().assertFail();
                done();
            }
        }
        done();
    });
  
    /**
     * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0900
     * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
     *             Expected structure assertions are recordNumber_=1,alphaTag_=test,number_=12345678
     * @tc.desc    Function test
     */
    it('Telephony_Sim_addIccDiallingNumbers_Async_0900', 0, async function (done) {
      for (let index = 0;index < TIMES_VALUE.TEST_RUN_TIME;index++) {
          try {
              const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
              for (let i = 0;i < data.length;i++) {
                  if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                      await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
                      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0900 delete ${data[i].recordNumber}`);
                  }
              }
          } catch (error) {
              console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0900 query or delete
              error: ${JSON.stringify(error)}`);
          }
  
          let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
  
          try {
              await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
              console.log('Telephony_Sim_addIccDiallingNumbers_Async_0900 add.');
          } catch (error) {
              console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0900 add fail, error: ${error.message}`);
              expect().assertFail();
              done();
              return;
          }
  
          sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
              console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0900 seconed query
              result: ${JSON.stringify(data)}`);
              for (let i = 0;i < data.length;i++) {
                  if (data[i].recordNumber === TYPE_AND_INDEX.index1) {
                      expect(data[i].recordNumber === diallingNumbersInfo.recordNumber).assertTrue();
                      expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
                      expect(data[i].number === diallingNumbersInfo.number).assertTrue();
                      console.log('Telephony_Sim_addIccDiallingNumbers_Async_0900 test finish.');
                      done();
                      return;
                  }
              }
              console.log('Telephony_Sim_addIccDiallingNumbers_Async_0900 test fail.');
              expect().assertFail();
              done();
          }).catch(error => {
              console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0900 second query error:${error.message}`);
              expect().assertFail();
              done();
          });
  
      }
    });
});