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
import { describe, it, expect, beforeEach, afterEach, Core, beforeAll, afterAll } from 'deccjsunit/index';

describe('SimSendTerminalResponseCmdReliabilityTest', function () {

  let eventSubscriber;
  let commonEventData;
  const STK_CMD = '81030125000202828';
  const GENERAL_RUN_TIMES = 10;

  const sleep = function (s) {
    return new Promise(resolve => {
      setTimeout(resolve, s * 1000);
    });
  };

  beforeAll(function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = env.TIME_OUT * 1000;
  });

  afterAll(function () {
    // set timeout
    const core = Core.getInstance();
    const config = core.getDefaultService('config');
    config.timeout = 5 * 1000;
  });

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
      await sleep(env.WAITING_AFTER_EVENT_ACTION);
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
      await sleep(env.WAITING_AFTER_EVENT_ACTION);
    }
  });

  /**
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Async_0600
   * @tc.name   Test the stability of the SendTerminalResponseCmd(Async) interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Async_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Async_0600';
    const recursive = function (n) {
      if (n === 0) {
        console.log(`${CASE_NAME} test finish`);
        done();
        return;
      }
      console.debug(`${CASE_NAME} run ${GENERAL_RUN_TIMES - n + 1} times`);
      sim.sendTerminalResponseCmd(env.DEFAULT_SLOTID, STK_CMD, async error => {
        if (error) {
          console.log(`${CASE_NAME} sendTerminalResponseCmd error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        await sleep(env.EVENT_RECEIVING_FREQUENCY);
        if (commonEventData) {
          commonEventData = undefined;
          recursive(n - 1);
        } else {
          console.log(`${CASE_NAME} sendTerminalResponseCmd has not common event data`);
          expect().assertFail();
          done();
        }
      });
    };
    recursive(GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Promise_0600
   * @tc.name   Test the stability of the SendTerminalResponseCmd(Promise) interface
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Promise_0600', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Promise_0600';

    for (let index = 0; index < GENERAL_RUN_TIMES; index++) {
      console.debug(`${CASE_NAME} run ${index + 1} times`);
      try {
        await sim.sendTerminalResponseCmd(env.DEFAULT_SLOTID, STK_CMD);
        await sleep(env.EVENT_RECEIVING_FREQUENCY);
        if (!commonEventData) {
          throw new Error('test fail');
        }
        commonEventData = undefined;
      } catch (error) {
        console.log(`${CASE_NAME} sendTerminalResponseCmd has not common event data`);
        expect().assertFail();
        done();
        return;
      }
    }

    done();
  });
});