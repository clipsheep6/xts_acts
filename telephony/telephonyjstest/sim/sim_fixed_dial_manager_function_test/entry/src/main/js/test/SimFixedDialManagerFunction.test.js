/* Copyright (C) 2021 Huawei Device Co., Ltd.
   Licensed under the Apache License, Version 2.0 (the "License")
   you may not  use this file except in compliance with the License.
   You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

import sim from '@ohos.telephony.sim';
import {SIM_SLOT_ID,  CARD_NAME,  OTHER_ERRORS, PIN2, NOT_PIN2, PUK2, NOT_PUK2, ERR_PIN2} from './lib/Const.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect,} from 'deccjsunit/index';
describe('SimFixedDialManagerFunction', function () {

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Async_0100
   * @tc.name    HasSimCard (slotId:number, callback: AsyncCallback< Boolean >):void The return value
   *             of the normal input parameter. The expected result is true
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Async_0100', 0, async function (done) {
    sim.hasSimCard(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_hasSimCard_Async_0100 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_hasSimCard_Async_0100  data${data}`);
      expect(data).assertTrue();
      console.log('Telephony_Sim_hasSimCard_Async_0100 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Async_0200
   * @tc.name    HasSimCard (slotId:number, callback: AsyncCallback< Boolean >):void interface exception
   *             input parameter return value, expected result flase
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Async_0200', 0, async function (done) {
    sim.hasSimCard(SIM_SLOT_ID.slotId11, (err, data) => {
      if (err) {
        expect(data).assertFalse();
        console.log('Telephony_Sim_hasSimCard_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_hasSimCard_Async_0200 fail data${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Async_0500
   * @tc.name    Test the slotId exception input parameter 1 of the hasSimCard interface,
   *             check the callback value, and expect the callback result flase
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Async_0500', 0, async function (done) {
    sim.hasSimCard(SIM_SLOT_ID.slotId1, (err, data) => {
      if (err) {
        expect(data).assertFalse();
        console.log('Telephony_Sim_hasSimCard_Async_0500 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_hasSimCard_Async_0500 fail data${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Async_0600
   * @tc.name    Test the slotId exception input parameter 2 of the hasSimCard interface,
   *             check the callback value, and expect the callback result flase
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Async_0600', 0, async function (done) {
    sim.hasSimCard(SIM_SLOT_ID.slotId2, (err, data) => {
      if (err) {
        expect(data).assertFalse();
        console.log('Telephony_Sim_hasSimCard_Async_0600 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_hasSimCard_Async_0600 fail data${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Promise_0100
   * @tc.name    Test hasSimCard (slotId:number): Promise< Boolean > Return value of
   *             the normal input parameter of the interface. Expect the result to be true
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.hasSimCard(SIM_SLOT_ID.slotId0);
      console.log(`Telephony_Sim_hasSimCard_Promise_0100 data${data}`);
      expect(data).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_hasSimCard_Promise_0100 fail err${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_hasSimCard_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Promise_0200
   * @tc.name    Test hasSimCard (slotId:number): Promise< Boolean > Return value of
   *             the interface exception input parameter. Expect to return false
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.hasSimCard(SIM_SLOT_ID.slotId11);
      expect(data).assertFalse();
    } catch (err) {
      console.log('Telephony_Sim_hasSimCard_Promise_0200 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_hasSimCard_Promise_0200 data${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Promise_0500
   * @tc.name    Test the slotId exception input parameter 1 of the hasSimCard interface,
   *             check the callback value, and expect the callback result flase
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Promise_0500', 0, async function (done) {
    try {
      var data = await sim.hasSimCard(SIM_SLOT_ID.slotId1);
      expect(data).assertFalse();
    } catch (err) {
      console.log('Telephony_Sim_hasSimCard_Promise_0500 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_hasSimCard_Promise_0500 data${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Promise_0600
   * @tc.name    Test the slotId exception input parameter 2 of the hasSimCard interface,
   *             check the callback value, and expect the callback result flase
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Promise_0600', 0, async function (done) {
    try {
      var data = await sim.hasSimCard(SIM_SLOT_ID.slotId2);
      expect(data).assertFalse();
    } catch (err) {
      console.log('Telephony_Sim_hasSimCard_Promise_0600 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_hasSimCard_Promise_0600 data${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0100
   * @tc.name    UnlockPin2 (pin2: string, slotId: number, callback: AsyncCallback):void
   *             Interface PIN is a string of length 3, expected result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0100', 0, async function (done) {
    sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_unlockPin2_Async_0100 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_unlockPin2_Async_0100 data${data}`);
      expect(data.result === OTHER_ERRORS).assertTrue();
      console.log('Telephony_Sim_unlockPin2_Async_0100 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0200
   * @tc.name    UnlockPin2 (pin2: string, slotId: number, callback: AsyncCallback):void
   *             Interface PIN is a string of length 9, expected result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0200', 0, async function (done) {
    sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumberNine, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_unlockPin2_Async_0200 fail');
        console.log(`Telephony_Sim_unlockPin2_Async_0200 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_unlockPin2_Async_0200 data${data}`);
      expect(data.result === OTHER_ERRORS).assertTrue();
      console.log('Telephony_Sim_unlockPin2_Async_0200 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0300
   * @tc.name    UnlockPin2 (pin2: string, slotId: number, callback: AsyncCallback):
   *             void slotId exception input parameter, expected to enter err
   *             and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0300', 0, async function (done) {
    sim.unlockPin2(SIM_SLOT_ID.slotId11, CARD_NAME.pinNumberFour, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_unlockPin2_Async_0300 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_unlockPin2_Async_0300 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0600
   * @tc.name    UnlockPin2 slotId is unlocked properly. Check the callback value. Expect result =0
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0600', 0, async function (done) {
      sim.unlockPin2(SIM_SLOT_ID.slotId0, PIN2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPin2_Async_0600 fail err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPin2_Async_0600 data${data}`);
          console.log(`Telephony_Sim_unlockPin2_Async_0600 PIN2${PIN2}`);
          expect(data.result === 0).assertTrue();
          console.log('Telephony_Sim_unlockPin2_Async_0600 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0700
   * @tc.name    Test unlockPin2 interface error pin2 code entry parameter, check callback
   *             value, expect callback result = -1, Remain =2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0700', 0, async function (done) {
      sim.unlockPin2(SIM_SLOT_ID.slotId0, NOT_PIN2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPin2_Async_0700 fail err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPin2_Async_0700 data${data}`);
          expect(data.result === -1).assertTrue();
          expect(data.remain === 2).assertTrue();
          console.log('Telephony_Sim_unlockPin2_Async_0700 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0800
   * @tc.name    Test unlockPin2 interface input error pin2 too many codes trigger PUK2 lock, check the callback
   *             value, expect 1. First callback result=-1, Remain = 2.
   *             2. Second callback result=-1, Remain = 1, 3. The third callback result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0800', 0, async function (done) {
      sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPin2_Async_0800 fail err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPin2_Async_0800 data${data}`);
          expect(data.result === -1).assertTrue();
          expect(data.remain === 2).assertTrue();
          console.log('Telephony_Sim_unlockPin2_Async_0800 finish');
          done();
      });
      sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber, (err, res) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPin2_Async_0800 fail err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPin2_Async_0800 res${res}`);
          expect(res.result === -1).assertTrue();
          expect(res.remain === 1).assertTrue();
          console.log('Telephony_Sim_unlockPin2_Async_0800 finish');
          done();
      });
      sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber, (err, reu) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPin2_Async_0800 fail err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPin2_Async_0800 reu${reu}`);
          expect(reu.result === -2).assertTrue();
          console.log('Telephony_Sim_unlockPin2_Async_0800 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0900
   * @tc.name    Test slotid exception input parameter 1 of unlockPin2 and check the callback
   *             value, expecting to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0900', 0, async function (done) {
      sim.unlockPin2(SIM_SLOT_ID.slotId1, CARD_NAME.pinNumberFour, (err, data) => {
          if (err) {
              console.log('Telephony_Sim_unlockPin2_Async_0900 finish');
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPin2_Async_0900 , data : ${data}`);
          expect().assertFail();
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_1000
   * @tc.name    Test slotid exception input parameter 2 of unlockPin2 and check the callback
   *             value, expecting to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_1000', 0, async function (done) {
      sim.unlockPin2(SIM_SLOT_ID.slotId2, CARD_NAME.pinNumberFour, (err, data) => {
          if (err) {
              // Enter the exception ID to enter err.
              console.log('Telephony_Sim_unlockPin2_Async_1000 finish');
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPin2_Async_1000 , data : ${data}`);
          expect().assertFail();
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0100
   * @tc.name    UnlockPin2 (pin2: string, slotId: number): Promise The interface pin is a
   *             string of length 3. Expect result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber);
    } catch (err) {
      console.log('Telephony_Sim_unlockPin2_Promise_0100 fail');
      console.log(`Telephony_Sim_unlockPin2_Promise_0100 fail err${err.message}`);
      done();
      return;
    }
    console.log(`Telephony_Sim_unlockPin2_Promise_0100 data${data}`);
    expect(data.result === OTHER_ERRORS).assertTrue();
    console.log('Telephony_Sim_unlockPin2_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0200
   * @tc.name    UnlockPin2 (pin2: string, slotId: number): Promise The interface
   *             pin is a string of length 9. Expect result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumberNine);
    } catch (err) {
      console.log('Telephony_Sim_unlockPin2_Promise_0200 fail');
      console.log(`Telephony_Sim_unlockPin2_Promise_0200 fail err${err.message}`);
      done();
      return;
    }
    console.log(`Telephony_Sim_unlockPin2_Promise_0200 data${data}`);
    expect(data.result === OTHER_ERRORS).assertTrue();
    console.log('Telephony_Sim_unlockPin2_Promise_0200 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0300
   * @tc.name    UnlockPin2 (pin2: string, slotId: number): Promise Interface
   *             slotId exception entry parameter, expect to enter err
   * @tc.desc    Function test
  */
  it('Telephony_Sim_unlockPin2_Promise_0300', 0, async function (done) {
    try {
      var data = await sim.unlockPin2(SIM_SLOT_ID.slotId11, CARD_NAME.pinNumberFour);
    } catch (err) {
      console.log('Telephony_Sim_unlockPin2_Promise_0300 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_unlockPin2_Promise_0300, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0600
   * @tc.name    UnlockPin2 slotId is unlocked properly. Check the callback value. Expect result =0
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Promise_0600', 0, async function (done) {
      try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, PIN2);
      } catch (err) {
          console.log('Telephony_Sim_unlockPin2_Promise_0600 fail');
          console.log(`Telephony_Sim_unlockPin2_Promise_0600 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPin2_Promise_0600 data${data}`);
      expect(data.result === 0).assertTrue();
      console.log('Telephony_Sim_unlockPin2_Promise_0600 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0700
   * @tc.name    Test unlockPin2 interface error pin2 code entry parameter, check callback
   *             value, expect callback result = -1, Remain =2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Promise_0700', 0, async function (done) {
      try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, NOT_PIN2);
      } catch (err) {
          console.log('Telephony_Sim_unlockPin2_Promise_0700 fail');
          console.log(`Telephony_Sim_unlockPin2_Promise_0700 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPin2_Promise_0700 data${data}`);
      expect(data.result === -1).assertTrue();
      expect(data.remain === 2).assertTrue();
      console.log('Telephony_Sim_unlockPin2_Promise_0700 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0800
   * @tc.name    Test unlockPin2 interface input error pin2 too many codes trigger PUK2 lock, check the callback
   *             value, expect 1. First callback result=-1, Remain = 2.
   *             2. Second callback result=-1, Remain = 1, 3. The third callback result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Promise_0800', 0, async function (done) {
      try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, NOT_PIN2);
      } catch (err) {
          console.log('Telephony_Sim_unlockPin2_Promise_0800 fail');
          console.log(`Telephony_Sim_unlockPin2_Promise_0800 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPin2_Promise_0800 data${data}`);
      expect(data.result === -1).assertTrue();
      expect(data.remain === 2).assertTrue();
      console.log('Telephony_Sim_unlockPin2_Promise_0800 finish');
      done();
      try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, NOT_PIN2);
      } catch (err) {
          console.log('Telephony_Sim_unlockPin2_Promise_0800 fail');
          console.log(`Telephony_Sim_unlockPin2_Promise_0800 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPin2_Promise_0800 data${data}`);
      expect(data.result === -1).assertTrue();
      expect(data.remain === 1).assertTrue();
      console.log('Telephony_Sim_unlockPin2_Promise_0800 finish');
      done();
      try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, NOT_PIN2);
      } catch (err) {
          console.log('Telephony_Sim_unlockPin2_Promise_0800 fail');
          console.log(`Telephony_Sim_unlockPin2_Promise_0800 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPin2_Promise_0800 data${data}`);
      expect(data.result === -2).assertTrue();
      console.log('Telephony_Sim_unlockPin2_Promise_0800 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0900
   * @tc.name    Test slotid exception input parameter 1 of unlockPin2 and check the callback
   *             value, expecting to enter ERR
   * @tc.desc    Function test
  */
  it('Telephony_Sim_unlockPin2_Promise_0900', 0, async function (done) {
      try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId1, CARD_NAME.pinNumberFour);
      } catch (err) {
          console.log('Telephony_Sim_unlockPin2_Promise_0900 finish');
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPin2_Promise_0900, data : ${data}`);
      expect().assertFail();
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Promise_1000
   * @tc.name    Test slotid exception input parameter 2 of unlockPin2 and check the callback
   *             value, expecting to enter ERR
   * @tc.desc    Function test
  */
  it('Telephony_Sim_unlockPin2_Promise_1000', 0, async function (done) {
      try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId2, CARD_NAME.pinNumberFour);
      } catch (err) {
          console.log('Telephony_Sim_unlockPin2_Promise_1000 finish');
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPin2_Promise_1000, data : ${data}`);
      expect().assertFail();
      done();
  });

  function setUnlockPin2WriteToPromise() {
      return new Promise((resolve, reject)=>{
          sim.unlockPin2(SIM_SLOT_ID.slotId0, ERR_PIN2, (err, data) => {
              if (err) {
                  console.log(`Telephony_Sim setShowNameWriteToPromise fail, err : ${err.message}`);
                  reject(err);
              } else {
                  resolve(null);
              }
          });
      })
  }

  function setUnlockPuk2WriteToPromise() {
      return new Promise((resolve, reject)=>{
          sim.unlockPuk2(SIM_SLOT_ID.slotId0, PIN2, (err, data) => {
              if (err) {
                  console.log(`Telephony_Sim setShowNameWriteToPromise fail, err : ${err.message}`);
                  reject(err);
              } else {
                  resolve(null);
              }
          });
      })
  }

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0100
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void Puk is a
   *             string of length 3 and is expected to return LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0100', 0, async function (done) {
      for(let i = 0; i<3; i++){
          try {
              await setUnlockPin2WriteToPromise();
          }
          catch (err) {
              console.log(`Telephony_Sim_unlockPuk2_Async_0100  fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
          }
      }
    sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.PUK, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_unlockPuk2_Async_0100 fail, err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Async_0100 data${data}`);
      expect(data.result === OTHER_ERRORS).assertTrue();
      console.log('Telephony_Sim_unlockPuk2_Async_0100 finish');
      done();
    });
      try {
          await setUnlockPuk2WriteToPromise();
      }
      catch (err) {
          console.log(`Telephony_Sim_unlockPuk2_Async_0100  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
      }
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0200
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void Puk
   *             is a string of length 9 and is expected to return LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0200', 0, async function (done) {
    sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.pukNine, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_unlockPuk2_Async_0200 fail');
        console.log(`Telephony_Sim_unlockPuk2_Async_0200 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Async_0200 data${data}`);
      expect(data.result === OTHER_ERRORS).assertTrue();
      console.log('Telephony_Sim_unlockPuk2_Async_0200 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0300
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void
   *             Interface slotId exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0300', 0, async function (done) {
    sim.unlockPuk2(SIM_SLOT_ID.slotId11, CARD_NAME.newPin, CARD_NAME.pukErr, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_unlockPuk2_Async_0300 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Async_0300 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0400
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void interface
   *             exception newPin entry parameter, expected to return structure LockStatusResponse result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0400', 0, async function (done) {
    sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameYouXiao, PUK2, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_unlockPuk2_Async_0400 fail');
        console.log(`Telephony_Sim_unlockPuk2_Async_0400 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Async_0400 data${data.result}`);
      expect(data.result === OTHER_ERRORS).assertTrue();
      console.log('Telephony_Sim_unlockPuk2_Async_0400 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0700
   * @tc.name    UnlockPuk2 interface slotId normal input parameter unlock, check the callback value,
   *             expected callback result =0
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0700', 0, async function (done) {
      sim.unlockPuk2(SIM_SLOT_ID.slotId0, PIN2, PUK2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPuk2_Async_0700 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPuk2_Async_0700 data${data}`);
          expect(data.result === 0).assertTrue();
          console.log('Telephony_Sim_unlockPuk2_Async_0700 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0800
   * @tc.name    Test unlockPuk2 interface error puk2 code entry parameter, check the callback
   *             value, expect callback result = -1 remain = 9
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0800', 0, async function (done) {
      sim.unlockPuk2(SIM_SLOT_ID.slotId0, PIN2, NOT_PUK2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPuk2_Async_0800 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPuk2_Async_0800 data${data}`);
          expect(data.result === -1).assertTrue();
          expect(data.remain === 9).assertTrue();
          console.log('Telephony_Sim_unlockPuk2_Async_0800 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0900
   * @tc.name    The test calls the UnlockPuk2 interface when no puK2 lock is triggered and checks the
   *             return value, expecting a callback result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0900', 0, async function (done) {
      sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.pukErr, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_unlockPuk2_Async_0900 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPuk2_Async_0900 data${data}`);
          expect(data.result === -2).assertTrue();
          console.log('Telephony_Sim_unlockPuk2_Async_0900 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_1000
   * @tc.name    Test the slotId exception input parameter 1 of the unlockPuk2 interface and check
   *             the callback value, expecting to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_1000', 0, async function (done) {
      sim.unlockPuk2(SIM_SLOT_ID.slotId1, CARD_NAME.newPin, CARD_NAME.pukErr, (err, data) => {
          if (err) {
              // Enter the exception ID to enter err.
              console.log('Telephony_Sim_unlockPuk2_Async_1000 finish');
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPuk2_Async_1000 , data : ${data}`);
          expect().assertFail();
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_1100
   * @tc.name    Test the slotId exception input parameter 2 of the unlockPuk2
   *             interface and check the callback value, expecting to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_1100', 0, async function (done) {
      sim.unlockPuk2(SIM_SLOT_ID.slotId2, CARD_NAME.newPin, CARD_NAME.pukErr, (err, data) => {
          if (err) {
              // Enter the exception ID to enter err.
              console.log('Telephony_Sim_unlockPuk2_Async_1100 finish');
              done();
              return;
          }
          console.log(`Telephony_Sim_unlockPuk2_Async_1100 , data : ${data}`);
          expect().assertFail();
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0100
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number): Promise PuK is a string of length 3 that
   *             is expected to return the struct LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.PUK);
    } catch (err) {
      console.log(`Telephony_Sim_unlockPuk2_Promise_0100 fail err${err.message}`);
      done();
      return;
    }
    console.log(`Telephony_Sim_unlockPuk2_Promise_0100 data${data}`);
    expect(data.result === OTHER_ERRORS).assertTrue();
    console.log('Telephony_Sim_unlockPuk2_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0200
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number): Promise PuK is a
   *             string of length 9 that is expected to return the struct LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.pukNine);
    } catch (err) {
      console.log(`Telephony_Sim_unlockPuk2_Promise_0200 fail err${err.message}`);
      done();
      return;
    }
    console.log(`Telephony_Sim_unlockPuk2_Promise_0200 data${data}`);
    expect(data.result === OTHER_ERRORS).assertTrue();
    console.log('Telephony_Sim_unlockPuk2_Promise_0200 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0300
   * @tc.name    unlockPuk2 (newPin2: string, puK2: string, slotId: number): Promise
   *             Interface slotId exception entry parameter, expecting to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0300', 0, async function (done) {
    try {
      var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId11, CARD_NAME.newPin, CARD_NAME.pukErr);
    } catch (err) {
      console.log('Telephony_Sim_unlockPuk2_Promise_0300 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_unlockPuk2_Promise_0300, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0400
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number): Promise Interface exception newPin
   *             entry parameter, expected to return structure LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0400', 0, async function (done) {
    try {
      var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameYouXiao, PUK2);
    } catch (err) {
      console.log(`Telephony_Sim_unlockPuk2_Promise_0400 fail err${err.message}`);
      done();
      return;
    }
    console.log(`Telephony_Sim_unlockPuk2_Promise_0400 data ${data.result}`);
    expect(data.result === OTHER_ERRORS).assertTrue();
    console.log('Telephony_Sim_unlockPuk2_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0700
   * @tc.name    UnlockPuk2 interface slotId normal input parameter unlock, check the callback value, expected callback
                 result =0
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0700', 0, async function (done) {
      try {
          var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, PIN2, PUK2);
      } catch (err) {
          console.log(`Telephony_Sim_unlockPuk2_Promise_0700 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Promise_0700 data${data}`);
      expect(data.result === 0).assertTrue();
      console.log('Telephony_Sim_unlockPuk2_Promise_0700 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0800
   * @tc.name    Test unlockPuk2 interface error puk2 code entry parameter, check the callback value,
   *             expect callback result = -1 remain = 9
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0800', 0, async function (done) {
      try {
          var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, PIN2, NOT_PUK2);
      } catch (err) {
          console.log(`Telephony_Sim_unlockPuk2_Promise_0800 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Promise_0800 data${data}`);
      expect(data.result === -1).assertTrue();
      expect(data.remain === 9).assertTrue();
      console.log('Telephony_Sim_unlockPuk2_Promise_0800 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0900
   * @tc.name    The test calls the UnlockPuk2 interface when no puK2 lock is triggered and checks
   *             the return value, expecting a callback result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0900', 0, async function (done) {
      try {
          var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.pukErr);
      } catch (err) {
          console.log(`Telephony_Sim_unlockPuk2_Promise_0900 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Promise_0900 data${data}`);
      expect(data.result === -2).assertTrue();
      console.log('Telephony_Sim_unlockPuk2_Promise_0900 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_1000
   * @tc.name    Test the slotId exception input parameter 1 of the unlockPuk2 interface and check
   *             the callback value, expecting to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_1000', 0, async function (done) {
      try {
          var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId1, CARD_NAME.newPin, CARD_NAME.pukErr);
      } catch (err) {
          console.log('Telephony_Sim_unlockPuk2_Promise_1000 finish');
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Promise_1000, data : ${data}`);
      expect().assertFail();
      done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_1100
   * @tc.name    Test the slotId exception input parameter 2 of the unlockPuk2 interface
   *             and check the callback value, expecting to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_1100', 0, async function (done) {
      try {
          var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId2, CARD_NAME.newPin, CARD_NAME.pukErr);
      } catch (err) {
          console.log('Telephony_Sim_unlockPuk2_Promise_1100 finish');
          done();
          return;
      }
      console.log(`Telephony_Sim_unlockPuk2_Promise_1100, data : ${data}`);
      expect().assertFail();
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0100
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void
   *             Interface slotId exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_0100', 0, async function (done) {
    sim.alterPin2(SIM_SLOT_ID.slotId11, CARD_NAME.newPin, CARD_NAME.oldPin, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_alterPin2_Async_0100 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_alterPin2_Async_0100 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0400
   * @tc.name    Test the alterPin2 interface. Check the callback value. Expect the callback result =0
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_0400', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId0, PIN2, PIN2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0400 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0400 data${data}`);
          expect(data.result === 0).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0400 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0500
   * @tc.name    Test alterPin2 interface newpin parameter of length 3, check
   *             the callback value, expect callback result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_0500', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId0, CARD_NAME.newPinThree, PIN2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0500 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0500 data${data}`);
          expect(data.result === -2).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0500 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0600
   * @tc.name    Test alterPin2 interface newpin with length 9 exception value, check
   *             callback value, expect callback result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_0600', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameYouXiao, PIN2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0600 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0600 data${data}`);
          expect(data.result === -2).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0600 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0700
   * @tc.name    Test alterPin2 interface exception oldPin input parameter, check callback value,
   *             expect callback result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_0700', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId0, PIN2, CARD_NAME.cardNameYouXiao, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0700 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0700 data${data}`);
          expect(data.result === -2).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0700 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0800
   * @tc.name    AlterPin2 interface error oldPin input parameter, check callback value,
   *             expect callback result = -1 remain = 2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_0800', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId0, NOT_PIN2, NOT_PUK2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0800 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0800 data${data}`);
          expect(data.result === -1).assertTrue();
          expect(data.remain === 2).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0800 finish');
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_0900
   * @tc.name    Test alterPin2 interface input error oldPin too much trigger PUK2 lock,
   *             check the callback value, expect the first callback result = -1, Remain = 2.
   *             2. Second callback Result = -1 Remain = 1 3 The third callback result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_0900', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId0, NOT_PIN2, NOT_PUK2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0900 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0900 data${data}`);
          expect(data.result === -1).assertTrue();
          expect(data.remain === 2).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0900 finish');
          done();
      });
      sim.alterPin2(SIM_SLOT_ID.slotId0, NOT_PIN2, NOT_PUK2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0900 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0900 data${data}`);
          expect(data.result === -1).assertTrue();
          expect(data.remain === 1).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0900 finish');
          done();
      });
      sim.alterPin2(SIM_SLOT_ID.slotId0, NOT_PIN2, NOT_PUK2, (err, data) => {
          if (err) {
              console.log(`Telephony_Sim_alterPin2_Async_0900 fail, err${err.message}`);
              expect().assertFail();
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_0900 data${data}`);
          expect(data.result === -2).assertTrue();
          console.log('Telephony_Sim_alterPin2_Async_0900 finish');

          done();

      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_1000
   * @tc.name    Test alterPin2 interface exception slotId input parameter 1, check the callback value,
   *             expecting to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_1000', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId1, CARD_NAME.newPin, CARD_NAME.oldPin, (err, data) => {
          if (err) {
              console.log('Telephony_Sim_alterPin2_Async_1000 finish');
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_1000 , data : ${data}`);
          expect().assertFail();
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Async_1100
   * @tc.name    Test alterPin2 interface exception slotId input parameter 2, check the callback
   *             value, expecting to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Async_1100', 0, async function (done) {
      sim.alterPin2(SIM_SLOT_ID.slotId2, CARD_NAME.newPin, CARD_NAME.oldPin, (err, data) => {
          if (err) {
              console.log('Telephony_Sim_alterPin2_Async_1100 finish');
              done();
              return;
          }
          console.log(`Telephony_Sim_alterPin2_Async_1100 , data : ${data}`);
          expect().assertFail();
          done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_0100
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void
   *             Interface slotId exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.alterPin2(SIM_SLOT_ID.slotId11, CARD_NAME.newPin, CARD_NAME.oldPin)
    }
    catch (err) {
      console.log('Telephony_Sim_alterPin2_Promise_0100 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_alterPin2_Promise_0100 , data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_0400
   * @tc.name    Test the alterPin2 interface. Check the callback value. Expect the callback result =0
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_0400', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, PIN2, PIN2);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0400 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0400 data${data}`);
      expect(data.result === 0).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0400 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_0500
   * @tc.name    Test alterPin2 interface newpin parameter of length 3, check the callback
   *             value, expect callback result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_0500', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber, PIN2);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0500 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0500 data${data}`);
      expect(data.result === -2).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0500 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_0600
   * @tc.name    Test alterPin2 interface newpin with length 9 exception value, check callback
   *             value, expect callback result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_0600', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameYouXiao, PIN2);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0600 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0600 data${data}`);
      expect(data.result === -2).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0600 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_0700
   * @tc.name    Test alterPin2 interface exception oldPin input parameter, check callback
   *             value, expect callback result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_0700', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, PIN2, CARD_NAME.cardNameYouXiao);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0700 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0700 data${data}`);
      expect(data.result === -2).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0700 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_0800
   * @tc.name    AlterPin2 interface error oldPin input parameter, check callback value,
   *             expect callback result = -1 remain = 2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_0800', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, PIN2, PIN2);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0800 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0800 data${data}`);
      expect(data.result === -1).assertTrue();
      expect(data.remain === 2).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0800 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_0900
   * @tc.name    Test alterPin2 interface input error oldPin too much trigger PUK2 lock, check the callback value,
   *             expect the first callback result = -1, Remain = 2.2. Second callback
   *             Result = -1 Remain = 1 3 The third callback result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_0900', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, NOT_PIN2, NOT_PIN2);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0900 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0900 data${data}`);
      expect(data.result === -1).assertTrue();
      expect(data.remain === 2).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0900 finish');
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, PIN2, PIN2);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0900 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0900 data${data}`);
      expect(data.result === -1).assertTrue();
      expect(data.remain === 1).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0900 finish');
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId0, PIN2, PIN2);
      } catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_0900 fail err${err.message}`);
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_0900 data${data}`);
      expect(data.result === -2).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_0900 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_1000
   * @tc.name    Test alterPin2 interface exception slotId input parameter 1, check the callback
   *             value, expecting to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_1000', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId1, CARD_NAME.newPin, CARD_NAME.oldPin)
      }
      catch (err) {
          console.log('Telephony_Sim_alterPin2_Promise_1000 finish');
          done();
          return;
      }
      console.log(`Telephony_Sim_alterPin2_Promise_1000 , data : ${data}`);
      expect().assertFail();
      done();
  });

  /**
   * @tc.number  Telephony_Sim_alterPin2_Promise_1100
   * @tc.name    Test alterPin2 interface exception slotId input parameter 2, check the callback
   *             value, expecting to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_alterPin2_Promise_1100', 0, async function (done) {
      try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId2, CARD_NAME.newPin, CARD_NAME.oldPin)
      }
      catch (err) {
          console.log(`Telephony_Sim_alterPin2_Promise_1100 , data : ${data}`);
          expect().assertFail();
          done();
          return;
      }
      expect(data.result === -2).assertTrue();
      console.log('Telephony_Sim_alterPin2_Promise_1100 finish');
      done();
  });
});