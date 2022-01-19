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
import * as env from './lib/Const.js';
import { describe, it, expect } from 'deccjsunit/index';

describe('SimSetLockStatePromiseFunctionTest', function () {

  let pinIsError = true;
  let fdnLockUnavailable = true;

  const setPinLockState = async function (state) {
    let lockInfo = { lockType: sim.PIN_LOCK, state, password: env.CORRECT_PIN };
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      if (lockState !== state) {
        await sim.setLockState(env.SLOTID0, lockInfo);
      }
    } catch (error) {
      console.log(`setPinLockState ${state ? 'ON' : 'OFF'} error: ${error.message}`);
    }
  };

  const setFdnLockState = async function (state) {
    let lockInfo = { lockType: sim.FDN_LOCK, state, password: env.CORRECT_PIN2 };
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      if (lockState !== state) {
        await sim.setLockState(env.SLOTID0, lockInfo);
      }
    } catch (error) {
      console.log(`setFdnLockState ${state ? 'ON' : 'OFF'} error: ${error.message}`);
    }
  };

  const restoreLockRemain = async function (lockType) {
    try {
      if (lockType === sim.FDN_LOCK) {
        await sim.unlockPin2(env.SLOTID0, env.CORRECT_PIN2);
      } else {
        await sim.unlockPin(env.SLOTID0, env.CORRECT_PIN);
      }
    } catch (error) {
      console.log(`restoreLockRemain error: ${error.message}`);
    }
  };

  beforeAll(async function () {
    try {
      const pinLockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN };
      const pinUnlockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
      const pin2LockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };
      const pin2UnlockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };

      const pinLock = await sim.setLockState(env.SLOTID0, pinLockInfo);
      console.debug(`pinLock result: ${JSON.stringify(pinLock)}`);
      pinIsError = pinLock.result !== env.LOCK_RESULT.SUCCESS;
      await sim.setLockState(env.SLOTID0, pinUnlockInfo);

      const checkFdn = await sim.setLockState(env.SLOTID0, pin2LockInfo);
      console.debug(`checkFdn result: ${JSON.stringify(checkFdn)}`);
      fdnLockUnavailable = checkFdn.result !== env.LOCK_RESULT.SUCCESS;
      await sim.setLockState(env.SLOTID0, pin2UnlockInfo);

      console.debug(`pinIsError: ${pinIsError}, fdnLockUnavailable: ${fdnLockUnavailable}`);
    } catch (error) {
      console.log(`check password has a error: ${error.message}`);
    }
  });

  afterAll(function () {
    console.log('afterAll');
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0100
   * @tc.name   Test the SetLockState async callback interface to open the PIN lock and check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0100';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_OFF);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      expect(lockState === sim.LOCK_ON).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    await setPinLockState(sim.LOCK_OFF);
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0200
   * @tc.name   Test the SetLockState async callback interface to close the PIN lock and check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0200';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_ON);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      await setPinLockState(sim.LOCK_OFF);
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
      await setPinLockState(sim.LOCK_OFF);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0300
   * @tc.name   Test the SetLockState promise interface to repeatedly open the PIN lock
   *            and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0300';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_ON);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      await setPinLockState(sim.LOCK_OFF);
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      expect(lockState === sim.LOCK_ON).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    await setPinLockState(sim.LOCK_OFF);
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0400
   * @tc.name   Test the SetLockState promise interface to repeatedly close the PIN lock
   *            and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0400';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_OFF);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0500
   * @tc.name   Test SetLockState promise interface, PIN code input error, turn on PIN lock, check callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0500';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN };
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    await restoreLockRemain();
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0600
   * @tc.name   Test SetLockState promise interface, PIN code input error,
   *            turn off PIN lock, check callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0600';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.INCORRECT_PIN };
    await setPinLockState(sim.LOCK_ON);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      await setPinLockState(sim.LOCK_OFF);
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      expect(lockState === sim.LOCK_ON).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    await setPinLockState(sim.LOCK_OFF);
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_0700
   * @tc.name   Test the SetLockState interface, enter the parameter if the PIN code is abnormal,
   *            turn on the PIN lock, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_0700';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN_LEN3 };
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.PIN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1000
   * @tc.name   The card is in the ready state, test the SetLockState promise interface
   *            slotId exception into the parameter -1, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1000';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    try {
      await sim.setLockState(env.SLOTID_MINUS1, lockInfo);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} setLockState expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1100
   * @tc.name   The card is in the ready state, test the SetLockState promise interface
   *            slotId exception into the parameter 1, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1100';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    try {
      await sim.setLockState(env.SLOTID1, lockInfo);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} setLockState expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1200
   * @tc.name   The card is in the ready state, test the SetLockState promise interface
   *            slotId exception into the parameter 2, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1200';
    if (pinIsError) {
      console.error(`${CASE_NAME} pin password is incorrect`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    try {
      await sim.setLockState(env.SLOTID2, lockInfo);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} setLockState expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1300
   * @tc.name   Test the SetLockState promise interface to open the FDN lock and check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1300';
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} pin2 password or fdn function is unreachable`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };

    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      expect(lockState === sim.LOCK_ON).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    await setFdnLockState(sim.LOCK_OFF);
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1400
   * @tc.name   Test the SetLockState promise interface to repeatedly close the FDN lock and check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1400';
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} pin2 password or fdn function is unreachable`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    await setFdnLockState(sim.LOCK_OFF);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setFdnLockState(sim.LOCK_OFF);
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      await setFdnLockState(sim.LOCK_OFF);
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1500
   * @tc.name   Test the SetLockState promise interface to repeatedly open the FDN lock and check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1500';
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} pin2 password or fdn function is unreachable`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };
    await setFdnLockState(sim.LOCK_ON);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setFdnLockState(sim.LOCK_OFF);
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      await setFdnLockState(sim.LOCK_OFF);
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      expect(lockState === sim.LOCK_ON).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    await setFdnLockState(sim.LOCK_OFF);
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1600
   * @tc.name   Test the SetLockState promise interface to close the FDN lock and check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1600';
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} pin2 password or fdn function is unreachable`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1700
   * @tc.name   Test SetLockState promise interface, PIN2 code input error,
   *            turn on FDN lock, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1700';
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} pin2 password or fdn function is unreachable`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN2 };
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1800
   * @tc.name   Test SetLockState promise interface, PIN2 code input error,
   *            turn off FDN lock, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1800';
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} pin2 password or fdn function is unreachable`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.INCORRECT_PIN2 };
    await setFdnLockState(sim.LOCK_ON);
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setFdnLockState(sim.LOCK_OFF);
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      await setFdnLockState(sim.LOCK_OFF);
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      expect(lockState === sim.LOCK_ON).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    await setFdnLockState(sim.LOCK_OFF);
    done();
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Promise_1900
   * @tc.name   Test the SetLockState promise interface, enter the parameter with an abnormal PIN2 code,
   *            turn on the FDN lock, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Promise_1900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Promise_1900';
    if (fdnLockUnavailable) {
      console.error(`${CASE_NAME} pin2 password or fdn function is unreachable`);
      done();
      return;
    }
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN2_LEN9 };
    try {
      const lockStatusResponse = await sim.setLockState(env.SLOTID0, lockInfo);
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (error) {
      console.log(`${CASE_NAME} setLockState error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      const lockState = await sim.getLockState(env.SLOTID0, sim.FDN_LOCK);
      expect(lockState === sim.LOCK_OFF).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} getLockState error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});