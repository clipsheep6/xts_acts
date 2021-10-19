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
import {simSlotId, cardName, OTHER_ERRORS} from './lib/Const.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect,} from 'deccjsunit/index';
describe('SimFixedDialManagerFunction', function () {

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Async_0100
   * @tc.name    HasSimCard (slotId:number, callback: AsyncCallback< Boolean >):void The return value
   *             of the normal input parameter. The expected result is true
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Async_0100', 0, async function (done) {
    sim.hasSimCard(simSlotId.SLOT_ID_0, (err, data) => {
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
    sim.hasSimCard(simSlotId.SLOT_ID_4, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_hasSimCard_Async_0200 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_hasSimCard_Async_0200 data${data}`);
      expect(data).assertFalse();
      console.log('Telephony_Sim_hasSimCard_Async_0200 finish');
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
      var data = await sim.hasSimCard(simSlotId.SLOT_ID_0);
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
      var data = await sim.hasSimCard(simSlotId.SLOT_ID_4);
      console.log(`Telephony_Sim_hasSimCard_Promise_0200 data${data}`);
      expect(data).assertFalse();
    } catch (err) {
      console.log(`Telephony_Sim_hasSimCard_Promise_0200 fail err${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_hasSimCard_Promise_0200 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_unlockPin2_Async_0100
   * @tc.name    UnlockPin2 (pin2: string, slotId: number, callback: AsyncCallback):void
   *             Interface PIN is a string of length 3, expected result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Async_0100', 0, async function (done) {
    sim.unlockPin2(simSlotId.SLOT_ID_0, cardName.pinNUMBER, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_unlockPin2_Async_0100 fail');
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
    sim.unlockPin2(simSlotId.SLOT_ID_0, cardName.pinNUMBERNINE, (err, data) => {
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
    sim.unlockPin2(simSlotId.SLOT_ID_4, cardName.pinNUMBERFOUR, (err, data) => {
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
   * @tc.number  Telephony_Sim_unlockPin2_Promise_0100
   * @tc.name    UnlockPin2 (pin2: string, slotId: number): Promise The interface pin is a
   *             string of length 3. Expect result =-2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPin2_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.unlockPin2(simSlotId.SLOT_ID_0, cardName.pinNUMBER);
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
      var data = await sim.unlockPin2(simSlotId.SLOT_ID_0, cardName.pinNUMBERNINE);
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
      var data = await sim.unlockPin2(simSlotId.SLOT_ID_4, cardName.pinNUMBERFOUR);
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
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0100
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void Puk is a
   *             string of length 3 and is expected to return LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0100', 0, async function (done) {
    sim.unlockPuk2(simSlotId.SLOT_ID_0, cardName.NEWPIN, cardName.PUK, (err, data) => {
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
  });

  /**
   * @tc.number  Telephony_Sim_unlockPuk2_Async_0200
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number, callback: AsyncCallback):void Puk
   *             is a string of length 9 and is expected to return LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Async_0200', 0, async function (done) {
    sim.unlockPuk2(simSlotId.SLOT_ID_0, cardName.NEWPIN, cardName.PUKNINE, (err, data) => {
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
    sim.unlockPuk2(simSlotId.SLOT_ID_4, cardName.NEWPIN, cardName.PUKERR, (err, data) => {
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
    sim.unlockPuk2(simSlotId.SLOT_ID_0, cardName.NEWPINNINE, cardName.PUKRESERVE, (err, data) => {
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
   * @tc.number  Telephony_Sim_unlockPuk2_Promise_0100
   * @tc.name    unlockPuk2 (newPin2: string, puk2: string, slotId: number): Promise PuK is a string of length 3 that
   *             is expected to return the struct LockStatusResponse Result = -2
   * @tc.desc    Function test
   */
  it('Telephony_Sim_unlockPuk2_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.unlockPuk2(simSlotId.SLOT_ID_0, cardName.NEWPIN, cardName.PUK);
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
      var data = await sim.unlockPuk2(simSlotId.SLOT_ID_0, cardName.NEWPIN, cardName.PUKNINE);
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
      var data = await sim.unlockPuk2(simSlotId.SLOT_ID_4, cardName.NEWPIN, cardName.PUKERR);
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
      var data = await sim.unlockPuk2(simSlotId.SLOT_ID_0, cardName.NEWPINNINE, cardName.PUKRESERVE);
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
});