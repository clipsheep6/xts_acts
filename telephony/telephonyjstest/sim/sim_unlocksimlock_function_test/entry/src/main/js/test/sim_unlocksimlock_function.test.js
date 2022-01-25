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

describe('SimUnlockSimLockFunctionTest', function () {

  /**
   * Restore lock state when unlock failed with incorrect password
   * @param {string} lockType
   * @param {string} password
   */
  const restoreLockState = async function (lockType, password) {
    try {
      await sim.unlockSimLock(env.DEFAULT_SLOTID, { lockType, password });
    } catch (error) {
      console.debug(`restoreLockState error: ${error.message}`);
    }
  };

  /**
   * Wrapper sim.unlockSimLock async callback interface.
   * @param {string} lockType
   * @param {string} password
   * @returns Promise
   */
  const unlockSimLock = function (lockType, password) {
    return new Promise((resolve, reject) => {
      sim.unlockSimLock(env.DEFAULT_SLOTID, { lockType, password }, async (error, lockResponse) => {
        if (error) {
          reject(error.message);
        }
        resolve(lockResponse);
      });
    });
  };

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0100
   * @tc.name   Test the unlockSimLock interface, enter the correct password to unlock
   *            the network pin lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0100';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0200
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the network pin lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0200';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PN_PIN_LOCK, env.SIM_PN_PIN_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0300
   * @tc.name   Test the unlockSimLock interface, enter the correct password to unlock
   *            the network puk lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0300';
    const lockInfo = { lockType: sim.PN_PUK_LOCK, password: env.SIM_PN_PUK_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0400
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the network puk lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0400', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0400';
    const lockInfo = { lockType: sim.PN_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PN_PUK_LOCK, env.SIM_PN_PUK_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0500
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the subnet PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0500', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0500';
    const lockInfo = { lockType: sim.PU_PIN_LOCK, password: env.SIM_PU_PIN_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0600
   * @tc.name   Test the unlocksimLock interface and enter the wrong password to unlock
   *            the subnet PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0600', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0600';
    const lockInfo = { lockType: sim.PU_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PU_PIN_LOCK, env.SIM_PU_PIN_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0700
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the subnet PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0700', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0700';
    const lockInfo = { lockType: sim.PU_PUK_LOCK, password: env.SIM_PU_PUK_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0800
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the subnet PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0800', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0800';
    const lockInfo = { lockType: sim.PU_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PU_PUK_LOCK, env.SIM_PU_PUK_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_0900
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the service PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_0900', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_0900';
    const lockInfo = { lockType: sim.PP_PIN_LOCK, password: env.SIM_PP_PIN_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1000
   * @tc.name   Test the unlocksimLock interface and enter the wrong password to unlock
   *            the service PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1000', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1000';
    const lockInfo = { lockType: sim.PP_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PP_PIN_LOCK, env.SIM_PP_PIN_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1100
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the PUK lock of the service, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1100';
    const lockInfo = { lockType: sim.PP_PUK_LOCK, password: env.SIM_PP_PUK_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1200
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the PUK lock of the service, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1200';
    const lockInfo = { lockType: sim.PP_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PP_PUK_LOCK, env.SIM_PP_PUK_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1300
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the organization PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1300';
    const lockInfo = { lockType: sim.PC_PIN_LOCK, password: env.SIM_PC_PIN_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1400
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the organization PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1400', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1400';
    const lockInfo = { lockType: sim.PC_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PC_PIN_LOCK, env.SIM_PC_PIN_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1500
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the organization PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1500', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1500';
    const lockInfo = { lockType: sim.PC_PUK_LOCK, password: env.SIM_PC_PUK_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1600
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the organization PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1600', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1600';
    const lockInfo = { lockType: sim.PC_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PC_PUK_LOCK, env.SIM_PC_PUK_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1700
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the SIM PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1700', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1700';
    const lockInfo = { lockType: sim.SIM_PIN_LOCK, password: env.SIM_SIM_PIN_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1800
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the SIM PIN lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1800', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1800';
    const lockInfo = { lockType: sim.SIM_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.SIM_PIN_LOCK, env.SIM_SIM_PIN_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_1900
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the SIM PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_1900', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_1900';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.SIM_SIM_PUK_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2000
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the SIM PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_2000', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2000';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.SIM_PUK_LOCK, env.SIM_SIM_PUK_PASSWORD);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2100
   * @tc.name   Test the unlocksimLock interface and enter the 3-digit abnormal password to unlock
   *            the SIM PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_2100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2100';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD_LEN3 };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.EXCEPTION).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2200
   * @tc.name   Test the unlocksimLock interface and enter the 9-digit abnormal password to unlock
   *            the SIM PUK lock, and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_2200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2200';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD_LEN9 };
    sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo, async (error, lockResponse) => {
      if (error) {
        console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(lockResponse.result === env.LOCK_STATE_CODE.EXCEPTION).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2300
   * @tc.name   Test the unlocksimLock interface to unlock the network pin lock error too many times,
   *            check the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_2300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2300';
    let lockResponse;
    try {
      for (let i = 0; i < env.PIN_LOOP_RUN_TIMES; i++) {
        lockResponse = await unlockSimLock(sim.PN_PIN_LOCK, env.INCORRECT_NET_PASSWORD);
      }
      await restoreLockState(sim.PN_PUK_LOCK, env.SIM_PN_PUK_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    expect(lockResponse.result === env.LOCK_STATE_CODE.EXCEPTION).assertTrue();
    console.log(`${CASE_NAME} test finish.`);
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2400
   * @tc.name   Test the unlocksimLock interface slotId exception into parameter -1, view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_2400', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2400';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    sim.unlockSimLock(env.SLOTID_MINUS1, lockInfo, async (error) => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2500
   * @tc.name   Test the unlocksimLock interface slotId exception into parameter 1, view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_2500', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2500';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    sim.unlockSimLock(env.SLOTID3, lockInfo, async (error) => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Async_2600
   * @tc.name   Test the unlocksimLock interface slotId exception into parameter 2, view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Async_2600', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Async_2600';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    sim.unlockSimLock(env.SLOTID2, lockInfo, async (error) => {
      if (error) {
        console.log(`${CASE_NAME} expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish.`);
        done();
        return;
      }
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0100
   * @tc.name   Test the unlockSimLock interface, enter the correct password to unlock
   *            the network pin lock, and view the returned result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0100';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0200
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the network pin lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0200';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PN_PIN_LOCK, env.SIM_PN_PIN_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0300
   * @tc.name   Test the unlockSimLock interface, enter the correct password to unlock
   *            the network puk lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0300';
    const lockInfo = { lockType: sim.PN_PUK_LOCK, password: env.SIM_PN_PUK_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0400
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the network puk lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0400';
    const lockInfo = { lockType: sim.PN_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PN_PUK_LOCK, env.SIM_PN_PUK_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0500
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the subnet PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0500';
    const lockInfo = { lockType: sim.PU_PIN_LOCK, password: env.SIM_PU_PIN_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0600
   * @tc.name   Test the unlocksimLock interface and enter the wrong password to unlock
   *            the subnet PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0600';
    const lockInfo = { lockType: sim.PU_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PU_PIN_LOCK, env.SIM_PU_PIN_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0700
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the subnet PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0700';
    const lockInfo = { lockType: sim.PU_PUK_LOCK, password: env.SIM_PU_PUK_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0800
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the subnet PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0800';
    const lockInfo = { lockType: sim.PU_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PU_PUK_LOCK, env.SIM_PU_PUK_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_0900
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the service PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_0900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_0900';
    const lockInfo = { lockType: sim.PP_PIN_LOCK, password: env.SIM_PP_PIN_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1000
   * @tc.name   Test the unlocksimLock interface and enter the wrong password to unlock
   *            the service PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1000';
    const lockInfo = { lockType: sim.PP_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PP_PIN_LOCK, env.SIM_PP_PIN_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1100
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the PUK lock of the service, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1100';
    const lockInfo = { lockType: sim.PP_PUK_LOCK, password: env.SIM_PP_PUK_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1200
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the PUK lock of the service, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1200';
    const lockInfo = { lockType: sim.PP_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PP_PUK_LOCK, env.SIM_PP_PUK_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1300
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the organization PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1300';
    const lockInfo = { lockType: sim.PC_PIN_LOCK, password: env.SIM_PC_PIN_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1400
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the organization PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1400';
    const lockInfo = { lockType: sim.PC_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PC_PIN_LOCK, env.SIM_PC_PIN_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1500
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the organization PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1500';
    const lockInfo = { lockType: sim.PC_PUK_LOCK, password: env.SIM_PC_PUK_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1600
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the organization PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1600';
    const lockInfo = { lockType: sim.PC_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.PC_PUK_LOCK, env.SIM_PC_PUK_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1700
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the SIM PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1700';
    const lockInfo = { lockType: sim.SIM_PIN_LOCK, password: env.SIM_SIM_PIN_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1800
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the SIM PIN lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1800';
    const lockInfo = { lockType: sim.SIM_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 2
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.SIM_PIN_LOCK, env.SIM_SIM_PIN_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_1900
   * @tc.name   Test the unlocksimLock interface, enter the correct password to unlock
   *            the SIM PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_1900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_1900';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.SIM_SIM_PUK_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.SUCCESS).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2000
   * @tc.name   Test the unlocksimLock interface, enter the wrong password to unlock
   *            the SIM PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2000';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(
        lockResponse.result === env.LOCK_STATE_CODE.FAILURE
        && lockResponse.remain === 9
      ).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
      await restoreLockState(sim.SIM_PUK_LOCK, env.SIM_SIM_PUK_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2100
   * @tc.name   Test the unlocksimLock interface and enter the 3-digit abnormal password to unlock
   *            the SIM PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2100';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD_LEN3 };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.EXCEPTION).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2200
   * @tc.name   Test the unlocksimLock interface and enter the 9-digit abnormal password to unlock
   *            the SIM PUK lock, and view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2200';
    const lockInfo = { lockType: sim.SIM_PUK_LOCK, password: env.INCORRECT_NET_PASSWORD_LEN9 };
    try {
      const lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      expect(lockResponse.result === env.LOCK_STATE_CODE.EXCEPTION).assertTrue();
      console.log(`${CASE_NAME} test finish.`);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2300
   * @tc.name   Test the unlocksimLock interface to unlock the network pin lock error too many times,
   *            check the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2300';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.INCORRECT_NET_PASSWORD };
    let lockResponse;
    try {
      for (let i = 0; i < env.PIN_LOOP_RUN_TIMES; i++) {
        lockResponse = await sim.unlockSimLock(env.DEFAULT_SLOTID, lockInfo);
      }
      await restoreLockState(sim.PN_PUK_LOCK, env.SIM_PN_PUK_PASSWORD);
    } catch (error) {
      console.log(`${CASE_NAME} unlockSimLock error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }
    expect(lockResponse.result === env.LOCK_STATE_CODE.EXCEPTION).assertTrue();
    console.log(`${CASE_NAME} test finish.`);
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2400
   * @tc.name   Test the unlocksimLock interface slotId exception into parameter -1, view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2400';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    try {
      await sim.unlockSimLock(env.SLOTID_MINUS1, lockInfo);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2500
   * @tc.name   Test the unlocksimLock interface slotId exception into parameter 1, view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2500';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    try {
      await sim.unlockSimLock(env.SLOTID3, lockInfo);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_unlockSimLock_Promise_2600
   * @tc.name   Test the unlocksimLock interface slotId exception into parameter 2, view the return result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_unlockSimLock_Promise_2600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_unlockSimLock_Promise_2600';
    const lockInfo = { lockType: sim.PN_PIN_LOCK, password: env.SIM_PN_PIN_PASSWORD };
    try {
      await sim.unlockSimLock(env.SLOTID2, lockInfo);
      expect().assertFail();
      console.log(`${CASE_NAME} test fail.`);
    } catch (error) {
      console.log(`${CASE_NAME} expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish.`);
    }
    done();
  });
});