/**
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
import * as env from './lib/Const';
import { describe, it, expect } from 'deccjsunit/index';

describe('SimStateManagerFunction', function () {

  /**
    * @tc.number  Telephony_Sim_getSimState_Async_0100
    * @tc.name    Enter normal parameters to test whether the getSimState interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimState_Async_0100', 0, async function (done) {
    sim.getSimState(env.DEFAULT_SLOTID, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getSimState_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimState_Async_0100, data = ${data}`);
      expect(data === sim.SIM_STATE_READY).assertTrue();
      console.log('Telephony_Sim_getSimState_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimState_Async_0200
    * @tc.name    Enter exception parameters to test whether the getSimState interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimState_Async_0200', 0, async function (done) {
    sim.getSimState(env.SLOTID4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter error.
        console.log(`Telephony_Sim_getSimState_Async_0200, err: ${err.message}`);
        console.log('Telephony_Sim_getSimState_Async_0200 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log(`Telephony_Sim_getSimState_Async_0200 fail, data = ${data}`);
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimState_Promise_0100
    * @tc.name    Enter normal parameters to test whether the getSimState interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimState_Promise_0100', 0, async function (done) {
    try {
      let data = await sim.getSimState(env.DEFAULT_SLOTID);
      console.log(`Telephony_Sim_getSimState_Promise_0100, data = ${data}`);
      expect(data === sim.SIM_STATE_READY).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getSimState_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getSimState_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimState_Promise_0200
    * @tc.name    Enter exception parameters to test whether the getSimState interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimState_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getSimState(env.SLOTID4);
    } catch (err) {
      // Enter the exception ID to enter error.
      console.log(`Telephony_Sim_getSimState_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getSimState_Promise_0200 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log(`Telephony_Sim_getSimState_Promise_0200 fail, data = ${data}`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_unlockPin_Async_0100
    * @tc.name    Test the unlockPin interface when the card status is ready state.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPin_Async_0100', 0, async function (done) {
    let PIN = '1234';
    sim.unlockPin(env.DEFAULT_SLOTID, PIN, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_unlockPin_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.result === env.OTHER_ABNORMAL).assertTrue();
      console.log('Telephony_Sim_unlockPin_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_unlockPin_Promise_0100
    * @tc.name    Test the unlockPin interface when the card status is ready state.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPin_Promise_0100', 0, async function (done) {
    let PIN = '1234';
    try {
      let data = await sim.unlockPin(env.DEFAULT_SLOTID, PIN);
      expect(data.result === env.OTHER_ABNORMAL).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_unlockPin_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_unlockPin_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_unlockPin_Async_0400
    * @tc.name    The status of the card is ready state, the unlockPin interface is tested, and slotId is abnormal.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPin_Async_0400', 0, async function (done) {
    let PIN = '1234';
    sim.unlockPin(env.SLOTID4, PIN, (err, data) => {
      if (err) {
        // Enter the exception ID to enter error.
        console.log(`Telephony_Sim_unlockPin_Async_0400, err: ${err.message}`);
        console.log('Telephony_Sim_unlockPin_Async_0400 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log('Telephony_Sim_unlockPin_Async_0400 fail');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_unlockPin_Promise_0400
    * @tc.name    The status of the card is ready state, the unlockPin interface is tested, and slotId is abnormal.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPin_Promise_0400', 0, async function (done) {
    let PIN = '1234';
    try {
      await sim.unlockPin(env.SLOTID4, PIN);
    } catch (err) {
      // Enter the exception ID to enter error.
      console.log(`Telephony_Sim_unlockPin_Promise_0400, err: ${err.message}`);
      console.log('Telephony_Sim_unlockPin_Promise_0400 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log('Telephony_Sim_unlockPin_Promise_0400 fail');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_unlockPuk_Async_0100
    * @tc.name    Test the unlockPuk interface when the card status is ready state.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPuk_Async_0100', 0, async function (done) {
    let newPin = '1234';
    let PUK = '12345678';
    sim.unlockPuk(env.DEFAULT_SLOTID, newPin, PUK, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_unlockPuk_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.result === env.OTHER_ABNORMAL).assertTrue();
      console.log('Telephony_Sim_unlockPuk_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_unlockPuk_Async_0400
    * @tc.name    The card status is ready state, and the unlockPuk interface is tested.
    * The slotId parameter is abnormal.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPuk_Async_0400', 0, async function (done) {
    let newPin = '1234';
    let PUK = '12345678';
    sim.unlockPuk(env.SLOTID4, newPin, PUK, (err, data) => {
      if (err) {
        // Enter the exception ID to enter error.
        console.log(`Telephony_Sim_unlockPuk_Async_0400, err: ${err.message}`);
        console.log('Telephony_Sim_unlockPuk_Async_0400 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log('Telephony_Sim_unlockPuk_Async_0400 fail');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_unlockPuk_Promise_0100
    * @tc.name    Test the unlockPuk interface when the card status is ready state.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPuk_Promise_0100', 0, async function (done) {
    let newPin = '1234';
    let PUK = '12345678';
    try {
      let data = await sim.unlockPuk(env.DEFAULT_SLOTID, newPin, PUK);
      expect(data.result === env.OTHER_ABNORMAL).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_unlockPuk_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_unlockPuk_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_unlockPuk_Promise_0400
    * @tc.name    The card status is ready state, and the unlockPuk interface is tested.
    * The slotId parameter is abnormal.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_unlockPuk_Promise_0400', 0, async function (done) {
    let newPin = '1234';
    let PUK = '12345678';
    try {
      await sim.unlockPuk(env.SLOTID4, newPin, PUK);
    } catch (err) {
      // Enter the exception ID to enter error.
      console.log(`Telephony_Sim_unlockPuk_Promise_0400, err: ${err.message}`);
      console.log('Telephony_Sim_unlockPuk_Promise_0400 finish');
      done();
      return;
    }
    console.log('Telephony_Sim_unlockPuk_Promise_0400 fail');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_alterPin_Async_0100
    * @tc.name    Test the alterPin interface when the card status is ready state.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_alterPin_Async_0100', 0, async function (done) {
    let oldPin = '9999';
    let newPin = '1234';
    sim.alterPin(env.DEFAULT_SLOTID, oldPin, newPin, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_alterPin_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.result === env.OTHER_ABNORMAL).assertTrue();
      console.log('Telephony_Sim_alterPin_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_alterPin_Async_0400
    * @tc.name    The status of the card is ready state, and the alterPin interface is tested. SlotId is abnormal.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_alterPin_Async_0400', 0, async function (done) {
    let oldPin = '9999';
    let newPin = '1234';
    sim.alterPin(env.SLOTID4, oldPin, newPin, (err, data) => {
      if (err) {
        // Enter the exception ID to enter error.
        console.log(`Telephony_Sim_alterPin_Async_0400, err: ${err.message}`);
        console.log('Telephony_Sim_alterPin_Async_0400 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log('Telephony_Sim_alterPin_Async_0400 fail');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_alterPin_Promise_0100
    * @tc.name    Test the alterPin interface when the card status is ready state.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_alterPin_Promise_0100', 0, async function (done) {
    let oldPin = '9999';
    let newPin = '1234';
    try {
      let data = await sim.alterPin(env.DEFAULT_SLOTID, oldPin, newPin);
      expect(data.result === env.OTHER_ABNORMAL).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_alterPin_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_alterPin_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_alterPin_Promise_0400
    * @tc.name    The status of the card is ready state, and the alterPin interface is tested. SlotId is abnormal.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_alterPin_Promise_0400', 0, async function (done) {
    let oldPin = '9999';
    let newPin = '1234';
    try {
      let data = await sim.alterPin(env.SLOTID4, oldPin, newPin);
      expect(data.result === env.OTHER_ABNORMAL).assertTrue();
    } catch (err) {
      // Enter the exception ID to enter error.
      console.log(`Telephony_Sim_alterPin_Promise_0400, err: ${err.message}`);
      console.log('Telephony_Sim_alterPin_Promise_0400 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log('Telephony_Sim_alterPin_Promise_0400 fail');
    done();
  });
});