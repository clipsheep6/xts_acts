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
import { describe, it, expect, Core } from 'deccjsunit/index';

describe('SimReliabilityTest', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 30 * 1000;

  /**
   *
   * @tc.number  Telephony_Sim_getOperatorConfigs_Async_04001
   * @tc.name    Call getOperatorConfigs, slotId is 0,10 times, and OperatorConfig is not expected to be empty
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getOperatorConfigs_Async_04001', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getOperatorConfigs_Async_04001 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getOperatorConfigs_Async_04001 run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.getOperatorConfigs(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getOperatorConfigs_Async_04001 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (data.length === 0) {
          expect(data.length !== 0).assertTrue();
          done();
        } else {
          recursive(n - 1);
        }
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_04001
   * @tc.name    Call getOperatorConfigs, slotId is 0,10 times, and OperatorConfig is not expected to be empty
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getOperatorConfigs_Promise_04001', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.log(`Telephony_Sim_getOperatorConfigs_Promise_04001 run ${index + 1} times`);
      try {
        let data = await sim.getOperatorConfigs(env.SLOTID0);
        expect(data.length !== 0).assertTrue();
      } catch (err) {
        console.log('Telephony_Sim_getOperatorConfigs_Promise_04001 fail');
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getOperatorConfigs_Promise_04001 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_04001
   * @tc.name    The getSimTelephoneNumber interface is called with the slotId parameter 0 and 10 times.
   *             The expected return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Async_04001', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getSimTelephoneNumber_Async_04001 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimTelephoneNumber_Async_04001 run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.getSimTelephoneNumber(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getSimTelephoneNumber_Async_04001 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data.length !== 0).assertTrue();
        expect(data.length >= 11).assertTrue();
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_04001
   * @tc.name   The getSimTelephoneNumber interface is called with the slotId
   *            parameter 0 and 10 times. The expected return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Promise_04001', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_04001 run ${index + 1} times`);
      try {
        let data = await sim.getSimTelephoneNumber(env.SLOTID0);
        expect(data.length !== 0).assertTrue();
        expect(data.length >= 11).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_04001 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getSimTelephoneNumber_Promise_04001 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_04001
   * @tc.name    Test the stability of the getVoiceMailIdentifier (AsyncCallback) interface
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Async_04001', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getVoiceMailIdentifier_Async_04001 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_04001 run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20, err => {
        if (err) {
          console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_04001 setVoiceMailInfo err: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailIdentifier(env.SLOTID0, (err, data) => {
          if (err || data !== env.MAIL_NAME_LEN12) {
            console.log(
              `Telephony_Sim_getVoiceMailIdentifier_Async_04001 test err : ${err && err.message}, identifier: ${data}`
            );
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_getVoiceMailIdentifier_Promise_04001
   * @tc.name   Call the getVoiceMailIdentifier interface with slotId input parameter 0, 10 times
   *            expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   *            the return value is 12599 Otherwise, the return value is not null
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Promise_04001', 0, async function (done) {
    try {
      for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
        console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_04001 run ${i + 1} times`);
        await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20);
        const indentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
        if (indentifier !== env.MAIL_NAME_LEN12) {
          console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_04001 test fail, indentifier: ${indentifier}`);
          expect(indentifier === env.MAIL_NAME_LEN12).assertTrue();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_getVoiceMailIdentifier_Promise_04001 finish');
    } catch (error) {
      console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_04001 error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_04001
   * @tc.name    The getVoiceMailNumber interface is called with the slotId input parameter 0, 10 times,
   *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or
   *             46004 or 46007, the return value is 12599
   *             Otherwise, the return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getVoiceMailNumber_Async_04001', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getVoiceMailNumber_Async_04001 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getVoiceMailNumber_Async_04001 run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20, err => {
        if (err) {
          console.log(`Telephony_Sim_getVoiceMailNumber_Async_04001 setVoiceMailInfo err: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailNumber(env.SLOTID0, (err, data) => {
          if (err || data !== env.MAIL_NUMBER_LEN20) {
            console.log(
              `Telephony_Sim_getVoiceMailNumber_Async_04001 test err : ${err && err.message}, identifier: ${data}`
            );
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_04001
   * @tc.name    Call the getVoiceMailNumber interface with slotId input parameter 0, 10 times
   *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   *             the return value is 12599 Otherwise, the return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getVoiceMailNumber_Promise_04001', 0, async function (done) {
    try {
      for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
        console.log(`Telephony_Sim_getVoiceMailNumber_Promise_04001 run ${i + 1} times`);
        await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20);
        const number = await sim.getVoiceMailNumber(env.SLOTID0);
        if (number !== env.MAIL_NUMBER_LEN20) {
          console.log(`Telephony_Sim_getVoiceMailNumber_Promise_04001 test fail, number: ${number}`);
          expect(number === env.MAIL_NUMBER_LEN20).assertTrue();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_getVoiceMailNumber_Promise_04001 finish');
    } catch (error) {
      console.log(`Telephony_Sim_getVoiceMailNumber_Promise_04001 error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_setVoiceMailInfo_Async_09001
   * @tc.name     Test the reliability of the setVoiceMailInfo async callback interface
   * @tc.desc     Reliability test
   */
  it('Telephony_Sim_setVoiceMailInfo_Async_09001', 0, function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_setVoiceMailInfo_Async_09001 test finish.');
        done();
        return;
      }
      console.log(`Telephony_Sim_setVoiceMailInfo_Async_09001 run ${env.GENERAL_RUN_TIMES - n + 1} times`);
      sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20, error => {
        if (error) {
          console.log(`Telephony_Sim_setVoiceMailInfo_Async_09001 setVoiceMailInfo error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailNumber(env.SLOTID0, (error, value) => {
          if (error) {
            console.log(`Telephony_Sim_setVoiceMailInfo_Async_09001 getVoiceMailNumber error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          if (value !== env.MAIL_NUMBER_LEN20) {
            console.log(`Telephony_Sim_setVoiceMailInfo_Async_09001 getVoiceMailNumber value: ${value}`);
            expect().assertFail();
            done();
            return;
          }
          sim.getVoiceMailIdentifier(env.SLOTID0, (error, value) => {
            if (error || value !== env.MAIL_NAME_LEN12) {
              console.log(`Telephony_Sim_setVoiceMailInfo_Async_09001 error: ${error.message}, identifier: ${value}`);
              expect().assertFail();
              done();
              return;
            }
            recursive(n - 1);
          });
        });
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number   Telephony_Sim_setVoiceMailInfo_Promise_09001
   * @tc.name     Test the reliability of the setVoiceMailInfo promise interface
   * @tc.desc     Reliability test
   */
  it('Telephony_Sim_setVoiceMailInfo_Promise_09001', 0, async function (done) {
    try {
      for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
        console.log(`Telephony_Sim_setVoiceMailInfo_Promise_09001 run ${i + 1} times`);
        await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20);
        const mailNumber = await sim.getVoiceMailNumber(env.SLOTID0);
        if (mailNumber !== env.MAIL_NUMBER_LEN20) {
          console.log(`Telephony_Sim_setVoiceMailInfo_Promise_09001 getVoiceMailNumber value: ${mailNumber}`);
          expect().assertFail();
          done();
          return;
        }
        const mailIdentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
        if (mailIdentifier !== env.MAIL_NAME_LEN12) {
          console.log(`Telephony_Sim_setVoiceMailInfo_Promise_09001 getVoiceMailIdentifier value: ${mailIdentifier}`);
          expect(mailIdentifier === env.MAIL_NAME_LEN12).assertTrue();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_setVoiceMailInfo_Promise_09001 test finish');
    } catch (error) {
      console.log(`Telephony_Sim_setVoiceMailInfo_Promise_09001 error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});