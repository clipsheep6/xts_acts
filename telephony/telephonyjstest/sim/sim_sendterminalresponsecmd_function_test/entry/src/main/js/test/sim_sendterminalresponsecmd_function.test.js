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
import { describe, it, expect, beforeEach, afterEach } from 'deccjsunit/index';

describe('SimSendTerminalResponseCmdFunctionTest', function () {

  let eventSubscriber;
  let commonEventData;

  const sleep = function (s) {
    return new Promise(resolve => {
      console.log(`waiting ${s} seconds`);
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
      await sleep(env.WAITING_AFTER_SEND_CMD);
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
      await sleep(env.WAITING_AFTER_SEND_CMD);
    }
  });

  /**
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Async_0100
   * @tc.name   Test SendTerminalResponseCmd async callback interface, enter parameter -1
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Async_0100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Async_0100';
    sim.sendTerminalResponseCmd(env.SLOTID_MINUS1, env.STK_CMD, (error) => {
      if (error) {
        console.log(`${CASE_NAME} SendTerminalResponseCmd expect error: ${error.message}`);
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
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Async_0200
   * @tc.name   Test SendTerminalResponseCmd async callback interface, enter parameter 3
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Async_0200', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Async_0200';
    sim.sendTerminalResponseCmd(env.SLOTID3, env.STK_CMD, (error) => {
      if (error) {
        console.log(`${CASE_NAME} SendTerminalResponseCmd expect error: ${error.message}`);
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
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Async_0300
   * @tc.name   Test SendTerminalResponseCmd async callback interface, enter parameter 2
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Async_0300', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Async_0300';
    sim.sendTerminalResponseCmd(env.SLOTID2, env.STK_CMD, (error) => {
      if (error) {
        console.log(`${CASE_NAME} SendTerminalResponseCmd expect error: ${error.message}`);
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
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Async_0400
   * @tc.name   Test the SendTerminalResponseCmd async callback interface, slotId is normally
   *            entered, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Async_0400', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Async_0400';
    sim.sendTerminalResponseCmd(env.DEFAULT_SLOTID, env.STK_CMD, async error => {
      if (error) {
        console.log(`${CASE_NAME} SendTerminalResponseCmd error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      await sleep(env.WAITING_AFTER_SEND_CMD);
      expect(!!commonEventData).assertTrue();
      console.log(`${CASE_NAME} test finish`);
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Promise_0100
   * @tc.name   Test SendTerminalResponseCmd promise interface, enter parameter -1
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Promise_0100', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Promise_0100';
    try {
      await sim.sendTerminalResponseCmd(env.SLOTID_MINUS1, env.STK_CMD);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} SendTerminalResponseCmd expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Promise_0200
   * @tc.name   Test SendTerminalResponseCmd promise interface, enter parameter 3
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Promise_0200', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Promise_0200';
    try {
      await sim.sendTerminalResponseCmd(env.SLOTID3, env.STK_CMD);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} SendTerminalResponseCmd expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Promise_0300
   * @tc.name   Test SendTerminalResponseCmd promise interface, enter parameter 2
   *            for slotId exception, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Promise_0300', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Promise_0300';
    try {
      await sim.sendTerminalResponseCmd(env.SLOTID2, env.STK_CMD);
      console.log(`${CASE_NAME} test fail`);
      expect().assertFail();
    } catch (error) {
      console.log(`${CASE_NAME} SendTerminalResponseCmd expect error: ${error.message}`);
      console.log(`${CASE_NAME} test finish`);
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_SendTerminalResponseCmd_Promise_0400
   * @tc.name   Test the SendTerminalResponseCmd promise interface, slotId is normally
   *            entered, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_SendTerminalResponseCmd_Promise_0400', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_SendTerminalResponseCmd_Promise_0400';
    try {
      await sim.sendTerminalResponseCmd(env.DEFAULT_SLOTID, env.STK_CMD);
      await sleep(env.WAITING_AFTER_SEND_CMD);
      expect(!!commonEventData).assertTrue();
      console.log(`${CASE_NAME} test finish`);
    } catch (error) {
      console.log(`${CASE_NAME} SendTerminalResponseCmd error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});