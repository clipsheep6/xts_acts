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

describe('SimSetLockStateCallbackFunctionTest', function () {

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

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0100
   * @tc.name   Test the SetLockState async callback interface to open the PIN lock and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0100';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_OFF);
    sim.setLockState(env.SLOTID0, lockInfo, (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_ON).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        await setPinLockState(sim.LOCK_OFF);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0200
   * @tc.name   Test the SetLockState async callback interface to close the PIN lock and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0200';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_ON);
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0300
   * @tc.name   Test the SetLockState async callback interface to repeatedly open the PIN lock
   *            and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0300';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_ON);
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_ON).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        await setPinLockState(sim.LOCK_OFF);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0400
   * @tc.name   Test the SetLockState async callback interface to repeatedly close the PIN lock
   *            and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0400';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    await setPinLockState(sim.LOCK_OFF);
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0500
   * @tc.name   Test SetLockState async callback interface, PIN code input error, turn on PIN lock, check callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_0500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0500';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN };
    sim.setLockState(env.SLOTID0, lockInfo, (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        await restoreLockRemain();
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0600
   * @tc.name   Test SetLockState async callback interface, PIN code input error,
   *            turn off PIN lock, check callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0600';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.INCORRECT_PIN };
    await setPinLockState(sim.LOCK_ON);
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setPinLockState(sim.LOCK_OFF);
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_ON).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        await setPinLockState(sim.LOCK_OFF);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_0700
   * @tc.name   Test the SetLockState interface, enter the parameter if the PIN code is abnormal,
   *            turn on the PIN lock, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_0700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_0700';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN_LEN3 };
    sim.setLockState(env.SLOTID0, lockInfo, (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.PIN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1000
   * @tc.name   The card is in the ready state, test the SetLockState async callback interface
   *            slotId exception into the parameter -1, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1000', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1000';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    sim.setLockState(env.SLOTID_MINUS1, lockInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} setLockState expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1100
   * @tc.name   The card is in the ready state, test the SetLockState async callback interface
   *            slotId exception into the parameter 1, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1100';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    sim.setLockState(env.SLOTID1, lockInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} setLockState expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1200
   * @tc.name   The card is in the ready state, test the SetLockState async callback interface
   *            slotId exception into the parameter 2, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1200';
    const lockInfo = { lockType: sim.PIN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN };
    sim.setLockState(env.SLOTID2, lockInfo, error => {
      if (error) {
        console.log(`${CASE_NAME} setLockState expect error: ${error.message}`);
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1300
   * @tc.name   Test the SetLockState async callback interface to open the FDN lock and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1300';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };
    sim.setLockState(env.SLOTID0, lockInfo, (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.FDN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_ON).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        await setFdnLockState(sim.LOCK_OFF);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1400
   * @tc.name   Test the SetLockState interface to repeatedly close the FDN lock and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1400';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    await setFdnLockState(sim.LOCK_OFF);
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.FDN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1500
   * @tc.name   Test the SetLockState async callback interface to repeatedly open the FDN lock
   *            and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1500', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1500';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.CORRECT_PIN2 };
    await setFdnLockState(sim.LOCK_ON);
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        await setFdnLockState(sim.LOCK_OFF);
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setFdnLockState(sim.LOCK_OFF);
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.FDN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_ON).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        await setFdnLockState(sim.LOCK_OFF);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1600
   * @tc.name   Test the SetLockState async callback interface to close the FDN lock and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1600';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.CORRECT_PIN2 };
    sim.setLockState(env.SLOTID0, lockInfo, (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.SUCCESS) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.FDN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1700
   * @tc.name   Test SetLockState async callback interface, PIN2 code input error,
   *            turn on FDN lock, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1700', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1700';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN2 };
    sim.setLockState(env.SLOTID0, lockInfo, (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.FDN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1800
   * @tc.name   Test SetLockState async callback interface, PIN2 code input error,
   *            turn off FDN lock, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1800', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1800';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_OFF, password: env.INCORRECT_PIN2 };
    await setFdnLockState(sim.LOCK_ON);
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        await setFdnLockState(sim.LOCK_OFF);
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.FAILURE || lockStatusResponse.remain !== 2) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        await setFdnLockState(sim.LOCK_OFF);
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.FDN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_ON).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        await setFdnLockState(sim.LOCK_OFF);
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_SetLockState_Async_1900
   * @tc.name   Test the SetLockState async callback interface, enter the parameter with an abnormal PIN2 code,
   *            turn on the FDN lock, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SetLockState_Async_1900', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SetLockState_Async_1900';
    const lockInfo = { lockType: sim.FDN_LOCK, state: sim.LOCK_ON, password: env.INCORRECT_PIN2_LEN9 };
    sim.setLockState(env.SLOTID0, lockInfo, async (error, lockStatusResponse) => {
      if (error) {
        console.log(`${CASE_NAME} setLockState error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (lockStatusResponse.result !== env.LOCK_RESULT.EXCEPTION) {
        console.log(`${CASE_NAME} setLockState failure, lock status response: ${lockStatusResponse.result}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getLockState(env.SLOTID0, sim.FDN_LOCK, async (error, lockState) => {
        if (error) {
          console.log(`${CASE_NAME} getLockState error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(lockState === sim.LOCK_OFF).assertTrue();
        console.log(`${CASE_NAME} test finish`);
        done();
      });
    });
  });
});