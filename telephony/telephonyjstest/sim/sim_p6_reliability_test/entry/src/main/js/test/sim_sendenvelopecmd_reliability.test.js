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
import commonEvent from '@ohos.commonEvent';
import * as env from './lib/Const.js';
import { describe, it, expect, beforeEach, afterEach, Core } from 'deccjsunit/index';

describe('SimSendEnvelopeCmdReliabilityTest', function () {

  let eventSubscriber;
  let commonEventData;
  const STK_CMD = 'D30781020181900101';

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = env.TIME_OUT * 1000 * 60;

  const sleep = function (s) {
    return new Promise(resolve => {
      setTimeout(resolve, s * 1000);
    });
  };

  beforeEach(async function () {
    try {
      eventSubscriber = await commonEvent.createSubscriber({ events: [env.STK_SESSION_END] });
      console.info('createSubscriber success');
      commonEvent.subscribe(eventSubscriber, (error, eventData) => {
        if (error?.code !== 0) {
          console.error(`subscribe failed because: ${JSON.stringify(error)}`);
        } else {
          console.info(`subscribe callback: ${JSON.stringify(eventData)}`);
          commonEventData = eventData;
        }
      });
      await sleep(0.5);
    } catch (error) {
      console.error(`createSubscriber failed because: ${JSON.stringify(error)}`);
    }
  });

  afterEach(async function () {
    if (commonEventData) {
      console.log('set commonEventData to undefined');
      commonEventData = undefined;
    }
    if (eventSubscriber) {
      console.log('unsubscribe event');
      commonEvent.unsubscribe(eventSubscriber, error => {
        if (error?.code !== 0) {
          console.error(`unsubscribe failed because: ${JSON.stringify(error)}`);
        } else {
          console.info('unsubscribe success');
        }
      });
      await sleep(0.5);
    }
  });

  /**
   * @tc.number Telephony_Sim_SendEnvelopeCmd_Async_0600
   * @tc.name   Test the stability of the SendEnvelopeCmd(Async) interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_SendEnvelopeCmd_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendEnvelopeCmd_Async_0600';
    const recursive = async function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.debug(`${CASE_NAME} run ${env.GENERAL_RUN_TIMES / 10 - n + 1} times`);
      sim.sendEnvelopeCmd(env.SLOTID0, STK_CMD, async error => {
        if (error) {
          console.log(`${CASE_NAME} SendEnvelopeCmd error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        await sleep(12);
        if (commonEventData) {
          commonEventData = undefined;
          recursive(n - 1);
        } else {
          console.log(`${CASE_NAME} SendEnvelopeCmd has not common event data`);
          expect().assertFail();
          done();
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES / 10);
  });

  /**
   * @tc.number Telephony_Sim_SendEnvelopeCmd_Promise_0600
   * @tc.name   Test the stability of the SendEnvelopeCmd(Promise) interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_SendEnvelopeCmd_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendEnvelopeCmd_Promise_0600';

    for (let index = 0; index < env.GENERAL_RUN_TIMES / 10; index++) {
      console.debug(`${CASE_NAME} run ${index + 1} times`);
      try {
        await sim.sendEnvelopeCmd(env.SLOTID0, STK_CMD);
        await sleep(12);
        if (!commonEventData) {
          throw new Error('test fail');
        }
        commonEventData = undefined;
      } catch (error) {
        console.log(`${CASE_NAME} SendEnvelopeCmd has not common event data`);
        expect().assertFail();
        done();
        return;
      }
    }

    done();
  });
});