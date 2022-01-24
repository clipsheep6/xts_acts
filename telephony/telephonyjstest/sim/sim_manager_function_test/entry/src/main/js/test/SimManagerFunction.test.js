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
import { describe, beforeAll, it, expect } from 'deccjsunit/index';

describe('SimManagerFunction', function () {

  var defaultValue = 0;
  beforeAll(async function () {
    // Gets the default calling card ID.
    defaultValue = await sim.getDefaultVoiceSlotId();
  });

  /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0100
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the SIM ID.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getDefaultVoiceSlotId_Async_0100', 0, async function (done) {
    sim.setDefaultVoiceSlotId(env.DEFAULT_SLOTID, (err) => {
      if (err) {
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0100 setDefaultVoiceSLOT_ID_err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getDefaultVoiceSlotId((err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0100 fail, err: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0100, data = ${data}`);
        expect(data === env.DEFAULT_SLOTID).assertTrue();
        // Restore Settings
        sim.setDefaultVoiceSlotId(defaultValue, (err) => {
          if (err) {
            console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0100 setDefaultVoiceSLOT_ID_err: ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0100 finish');
          done();
        });
      });
    });
  });

  /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0200
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the SIM ID.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getDefaultVoiceSlotId_Async_0200', 0, async function (done) {
    sim.setDefaultVoiceSlotId(env.SLOTID2, (err) => {
      if (!err) {
        console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200 test fail.');
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200 err: ${err.message}`);
      sim.getDefaultVoiceSlotId((err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200 fail, err: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200, data = ${data}`);
        expect(data !== env.SLOTID2).assertTrue();
        // Restore Settings
        sim.setDefaultVoiceSlotId(defaultValue, (err) => {
          if (err) {
            console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200 setDefaultVoiceSLOT_ID_err: ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log('Telephony_Sim_getDefaultVoiceSlotId_Async_0200 finish');
          done();
        });
      });
    });
  });

  /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Promise_0100
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the default SIM ID.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getDefaultVoiceSlotId_Promise_0100', 0, async function (done) {
    try {
      await sim.setDefaultVoiceSlotId(env.DEFAULT_SLOTID);
      try {
        let data = await sim.getDefaultVoiceSlotId();
        expect(data === env.DEFAULT_SLOTID).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      // Restore Settings
      await sim.setDefaultVoiceSlotId(defaultValue);
      console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0100 finish');
      done();
    } catch (err) {
      console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0100:setDefaultVoiceSLOT_ID_err: ${err.message}`);
      expect().assertFail();
      done();
    }
  });

  /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Promise_0200
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the default SIM ID.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200', 0, async function (done) {
    try {
      await sim.setDefaultVoiceSlotId(env.SLOTID2);
      console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 test fail.');
      expect().assertFail();
      done();
      return;
    } catch (err) {
      console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 expect error: ${err.message}`);
    }
    try {
      let data = await sim.getDefaultVoiceSlotId();
      console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0200, data = ${data}`);
      expect(data !== env.SLOTID2).assertTrue();
      // Restore Settings
      await sim.setDefaultVoiceSlotId(defaultValue);
      console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 finish');
    } catch (err) {
      console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 fail, err: ${err.message}`);
      expect().assertFail();
    }
    done();
  });

  /**
    * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Async_0100
    * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 4.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_setDefaultVoiceSlotId_Async_0100', 0, async function (done) {
    sim.setDefaultVoiceSlotId(env.SLOTID4, (err) => {
      if (err) {
        // Expect slotid 4 return err here.
        sim.getDefaultVoiceSlotId((err, result) => {
          if (err) {
            console.log(
              `Telephony_Sim_setDefaultVoiceSlotId_Async_0100 getDefaultVoiceSLOT_ID_fail, err: ${err.message}`
            );
            expect().assertFail();
            done();
            return;
          }
          expect(result !== env.SLOTID4).assertTrue();
        });
        console.log(`Telephony_Sim_setDefaultVoiceSlotId_Async_0100, err: ${err.message}`);
        console.log('Telephony_Sim_setDefaultVoiceSlotId_Async_0100 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log('Telephony_Sim_setDefaultVoiceSlotId_Async_0100 fail');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Promise_0100
    * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 4.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_setDefaultVoiceSlotId_Promise_0100', 0, async function (done) {
    try {
      await sim.setDefaultVoiceSlotId(env.SLOTID4);
    } catch (err) {
      // Expect slotid 4 return err here.
      let result = await sim.getDefaultVoiceSlotId();
      expect(result !== env.SLOTID4).assertTrue();
      console.log(`Telephony_Sim_setDefaultVoiceSlotId_Promise_0100, err: ${err.message}`);
      console.log('Telephony_Sim_setDefaultVoiceSlotId_Promise_0100 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log('Telephony_Sim_setDefaultVoiceSlotId_Promise_0100 fail');
    done();
  });
});