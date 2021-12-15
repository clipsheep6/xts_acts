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
import { describe, it, expect, Core } from 'deccjsunit/index';

describe('SimGetSimAccountInfoReliabilityTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 300 * 1000;

  const setShowNameWriteToPromise = function () {
    return new Promise((resolve, reject) => {
      sim.setShowName(env.SLOTID0, env.SIM_SLOT_NAME, (err) => {
        if (err) {
          console.log(`Telephony_Sim setShowNameWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(null);
        }
      });
    });
  };

  const setShowNumberWriteToPromise = function () {
    return new Promise((resolve, reject) => {
      sim.setShowNumber(env.SLOTID0, env.SIM_SLOT_NUMBER, (err) => {
        if (err) {
          console.log(`Telephony_Sim setShowNumberWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(null);
        }
      });
    });
  };

  const getSimIccIdWriteToPromise = function () {
    return new Promise((resolve, reject) => {
      sim.getSimIccId(env.SLOTID0, (err, result) => {
        if (err) {
          console.log(`Telephony_Sim getSimIccIdWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(result);
        }
      });
    });
  };

  /**
   * @tc.number  Telephony_Sim_getSimAccountInfo_Async_0400
   * @tc.name    The test executed the getSimAccountInfo interface query function ten times,
   *             expecting to execute successfully each time.
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getSimAccountInfo_Async_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getSimAccountInfo_Async_0400';
    let iccIdValue;
    try {
      await sim.deactivateSim(env.SLOTID0);
      await setShowNameWriteToPromise();
      await setShowNumberWriteToPromise();
      iccIdValue = await getSimIccIdWriteToPromise();
    } catch (err) {
      console.log(`${CASE_NAME} setOrGet fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }

    const recursive = async function (n) {
      if (n <= 0) {
        try {
          await sim.activateSim(env.SLOTID0);
        } catch (error) {
          console.log(`${CASE_NAME} active sim error: ${error.message}`);
        }
        console.log(`${CASE_NAME} finish`);
        done();
        return;
      }
      console.log(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.getSimAccountInfo(env.SLOTID0, (err, info) => {
        if (err) {
          console.log(`${CASE_NAME} fail ,err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (info.slotIndex === env.SLOTID0
          && info.simId === env.SLOTID0
          && info.isEsim === false
          && info.isActive === false
          && info.iccId === iccIdValue
          && info.showName === env.SIM_SLOT_NAME
          && info.showNumber === env.SIM_SLOT_NUMBER
        ) {
          recursive(n - 1);
        } else {
          expect().assertFail();
          done;
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
     * @tc.number  Telephony_Sim_getSimAccountInfo_Promise_0400
     * @tc.name    The test executed the getSimAccountInfo interface query function ten times,
     *             expecting to execute successfully each time.
     * @tc.desc    Reliability test
     */
  it('Telephony_Sim_getSimAccountInfo_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_getSimAccountInfo_Promise_0400';
    try {
      await sim.setShowName(env.SLOTID0, env.SIM_SLOT_NAME);
      await sim.setShowNumber(env.SLOTID0, env.SIM_SLOT_NUMBER);
      var iccIdValue = await sim.getSimIccId(env.SLOTID0);
      await sim.deactivateSim(env.SLOTID0);
    } catch (err) {
      console.log(`${CASE_NAME} setOrGet fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }

    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.log(`${CASE_NAME} run ${index + 1} times`);
      try {
        let info = await sim.getSimAccountInfo(env.SLOTID0);
        expect(info.slotIndex === env.SLOTID0
          && info.simId === env.SLOTID0
          && info.isEsim === false
          && info.isActive === false
          && info.iccId === iccIdValue
          && info.showName === env.SIM_SLOT_NAME
          && info.showNumber === env.SIM_SLOT_NUMBER
        ).assertTrue();
      } catch (error) {
        console.log(`${CASE_NAME} fail, err : ${error.message}`);
        expect().assertFail();
        break;
      }
    }

    try {
      await sim.activateSim(env.SLOTID0);
      console.log(`${CASE_NAME} finish`);
      done();
    } catch (error) {
      console.log(`${CASE_NAME} fail, err : ${error.message}`);
      expect().assertFail();
      done();
    }
  });
});