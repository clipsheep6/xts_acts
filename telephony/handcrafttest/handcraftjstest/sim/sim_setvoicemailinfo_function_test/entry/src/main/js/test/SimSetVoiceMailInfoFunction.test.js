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

describe('SimsetVoiceMailInfoFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Async_01001
   * @tc.name   Test the setVoiceMailInfo async callback interface, slotId is 0, and check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Async_01001', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Async_01001';
    sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20, error => {
      if (error) {
        console.log(`${CASE_NAME} setVoiceMailInfo expect error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getVoiceMailNumber(env.SLOTID0, (error, value) => {
        if (error) {
          console.log(`${CASE_NAME} getVoiceMailNumber error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} getVoiceMailNumber value: ${value}`);
        if (value !== env.MAIL_NUMBER_LEN20) {
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailIdentifier(env.SLOTID0, (error, value) => {
          if (error) {
            console.log(`${CASE_NAME} getVoiceMailIdentifier error: ${error.message}`);
            expect().assertFail();
          } else {
            console.log(`${CASE_NAME} test finish`);
            expect(value === env.MAIL_NAME_LEN12).assertTrue();
          }
          done();
        });
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Async_05001
   * @tc.name   Test the setVoiceMailInfo async callback interface, and the mailName exceeds 12 non-Chinese
   *            characters abnormally into the parameters, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Async_05001', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Async_05001';
    sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN13, env.MAIL_NUMBER_LEN20, error => {
      if (error) {
        console.log(`${CASE_NAME} setVoiceMailInfo expect error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getVoiceMailNumber(env.SLOTID0, (error, value) => {
        if (error) {
          console.log(`${CASE_NAME} getVoiceMailNumber error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} getVoiceMailNumber value: ${value}`);
        if (value !== env.MAIL_NUMBER_LEN20) {
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailIdentifier(env.SLOTID0, (error, value) => {
          if (error) {
            console.log(`${CASE_NAME} getVoiceMailIdentifier error: ${error.message}`);
            expect().assertFail();
          } else {
            console.log(`${CASE_NAME} test finish`);
            expect(value === env.MAIL_NAME_LEN12).assertTrue();
          }
          done();
        });
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Async_06001
   * @tc.name   Test the setVoiceMailInfo async callback interface. If the mailNumber exceeds 20 digits,
   *            enter the parameter abnormally. Check the callback value.
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Async_06001', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Async_06001';
    sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN21, error => {
      if (error) {
        console.log(`${CASE_NAME} setVoiceMailInfo expect error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getVoiceMailNumber(env.SLOTID0, (error, value) => {
        if (error) {
          console.log(`${CASE_NAME} getVoiceMailNumber error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} getVoiceMailNumber value: ${value}`);
        if (value !== env.MAIL_NUMBER_LEN20) {
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailIdentifier(env.SLOTID0, (error, value) => {
          if (error) {
            console.log(`${CASE_NAME} getVoiceMailIdentifier error: ${error.message}`);
            expect().assertFail();
          } else {
            console.log(`${CASE_NAME} test finish`);
            expect(value === env.MAIL_NAME_LEN12).assertTrue();
          }
          done();
        });
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Async_12001
   * @tc.name   Test the setVoiceMailInfo async callback interface, the mailName is normally entered
   *            as 6 Chinese characters, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Async_12001', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Async_12001';
    sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_CHS_LEN6, env.MAIL_NUMBER_LEN20, error => {
      if (error) {
        console.log(`${CASE_NAME} setVoiceMailInfo expect error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getVoiceMailNumber(env.SLOTID0, (error, value) => {
        if (error) {
          console.log(`${CASE_NAME} getVoiceMailNumber error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`${CASE_NAME} getVoiceMailNumber value: ${value}`);
        if (value !== env.MAIL_NUMBER_LEN20) {
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailIdentifier(env.SLOTID0, (error, value) => {
          if (error) {
            console.log(`${CASE_NAME} getVoiceMailIdentifier error: ${error.message}`);
            expect().assertFail();
          } else {
            console.log(`${CASE_NAME} test finish`);
            expect(value === env.MAIL_NAME_CHS_LEN6).assertTrue();
          }
          done();
        });
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Async_13001
   * @tc.name   Test the setVoiceMailInfo async callback interface, if the mailName is abnormal,
   *            the input parameter is more than 6 Chinese characters, check the callback value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Async_13001', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Async_13001';
    sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_CHS_LEN7, env.MAIL_NUMBER_LEN20, error => {
      if (error) {
        console.log(`${CASE_NAME} setVoiceMailInfo error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getVoiceMailIdentifier(env.SLOTID0, (error, value) => {
        if (error) {
          console.log(`${CASE_NAME} getVoiceMailIdentifier error: ${error.message}`);
          expect().assertFail();
        } else {
          console.log(`${CASE_NAME} test finish`);
          expect(value === env.MAIL_NAME_CHS_LEN6).assertTrue();
        }
        done();
      });
    });
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Promise_01001
   * @tc.name   Test the setVoiceMailInfo promise interface, slotId = 0, and check the callback value.
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Promise_01001', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Promise_01001';
    try {
      await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20);
      const mailNumber = await sim.getVoiceMailNumber(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailNumber value: ${mailNumber}`);
      if (mailNumber !== env.MAIL_NUMBER_LEN20) {
        expect().assertFail();
        done();
        return;
      }
      const mailIdentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailIdentifier value: ${mailIdentifier}`);
      expect(mailIdentifier === env.MAIL_NAME_LEN12).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Promise_05001
   * @tc.name   Test the setVoiceMailInfo promise interface. If the mailName exceeds 12 non-Chinese characters,
   *            enter the parameter abnormally, check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Promise_05001', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Promise_05001';
    try {
      await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN13, env.MAIL_NUMBER_LEN20);
      const mailNumber = await sim.getVoiceMailNumber(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailNumber value: ${mailNumber}`);
      if (mailNumber !== env.MAIL_NUMBER_LEN20) {
        expect().assertFail();
        done();
        return;
      }
      const mailIdentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailIdentifier value: ${mailIdentifier}`);
      expect(mailIdentifier === env.MAIL_NAME_LEN12).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Promise_06001
   * @tc.name   Test the setVoiceMailInfo promise interface, if mailNumber exceeds 20 digits,
   *            enter the parameter abnormally, check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Promise_06001', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Promise_06001';
    try {
      await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN21);
      const mailNumber = await sim.getVoiceMailNumber(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailNumber value: ${mailNumber}`);
      if (mailNumber !== env.MAIL_NUMBER_LEN20) {
        expect().assertFail();
        done();
        return;
      }
      const mailIdentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailIdentifier value: ${mailIdentifier}`);
      expect(mailIdentifier === env.MAIL_NAME_LEN12).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Promise_12001
   * @tc.name   Test the setVoiceMailInfo promise interface, the mailName is normally entered as 6 Chinese characters,
   *            check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Promise_12001', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Promise_12001';
    try {
      await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_CHS_LEN6, env.MAIL_NUMBER_LEN20);
      const mailNumber = await sim.getVoiceMailNumber(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailNumber value: ${mailNumber}`);
      if (mailNumber !== env.MAIL_NUMBER_LEN20) {
        expect().assertFail();
        done();
        return;
      }
      const mailIdentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailIdentifier value: ${mailIdentifier}`);
      expect(mailIdentifier === env.MAIL_NAME_CHS_LEN6).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
   * @tc.number Telephony_Sim_setVoiceMailInfo_Promise_13001
   * @tc.name   Test the setVoiceMailInfo promise interface, if the mailName is abnormal,
   *            the input parameter is more than 6 Chinese characters, check the return value
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setVoiceMailInfo_Promise_13001', 0, async function (done) {
    const CASE_NAME = 'Telephony_Sim_setVoiceMailInfo_Promise_13001';
    try {
      await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_CHS_LEN7, env.MAIL_NUMBER_LEN20);
      const mailIdentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
      console.log(`${CASE_NAME} getVoiceMailIdentifier value: ${mailIdentifier}`);
      expect(mailIdentifier === env.MAIL_NAME_CHS_LEN6).assertTrue();
    } catch (error) {
      console.log(`${CASE_NAME} error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});