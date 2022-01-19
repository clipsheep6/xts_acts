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

describe('SimGetCardTypeReliabilityTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = env.TIME_OUT * 1000;

  /**
   * @tc.number Telephony_Sim_GetCardType_Async_0600
   * @tc.name   Test GetCardType (Async) interface reliability
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_GetCardType_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Async_0600';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.debug(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.getCardType(env.SLOTID0, (error, cardType) => {
        if (error) {
          console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (cardType !== sim.SINGLE_MODE_USIM_CARD) {
          console.log(`${CASE_NAME} GetCardType lock state incorrect: ${cardType}`);
          expect().assertFail();
          done();
        } else {
          recursive(n - 1);
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_GetCardType_Promise_0600
   * @tc.name   Test GetCardType (Promise) interface reliability
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_GetCardType_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_GetCardType_Promise_0600';

    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.debug(`${CASE_NAME} run ${index + 1} times`);
      try {
        const cardType = await sim.getCardType(env.SLOTID0);
        if (cardType !== sim.SINGLE_MODE_USIM_CARD) {
          console.log(`${CASE_NAME} GetCardType lock state incorrect: ${cardType}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (error) {
        console.log(`${CASE_NAME} GetCardType error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    done();
  });
});