/* Copyright (C) 2021 Huawei Device Co., Ltd.
   Licensed under the Apache License, Version 2.0 (the "License")
   you may not  use this file except in compliance with the License.
   You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

import sim from '@ohos.telephony.sim';
import {simSlotId} from './lib/Const.js';
import {describe, it, expect,} from 'deccjsunit/index';

describe('SimFileInformationFunction', function () {

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_0100
   * @tc.name    The getSimTelephoneNumber interface is called with slotId input parameter 0. The expected return value is not null
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Async_0100', 0, async function (done) {
    sim.getSimTelephoneNumber(simSlotId.SLOT_ID_0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0100 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0100 data${data}`);
      expect(data.length !== 0).assertTrue();
      expect(data.length >= 11).assertTrue();
      console.log('Telephony_Sim_getSimTelephoneNumber_Async_0100 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_0200
   * @tc.name    Call getSimTelephoneNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Async_0200', 0, async function (done) {
    sim.getSimTelephoneNumber(simSlotId.SLOT_ID_4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_getSimTelephoneNumber_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0200 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_0100
   * @tc.name    The getSimTelephoneNumber interface is called with slotId input parameter 0. The expected return value is not null
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.getSimTelephoneNumber(simSlotId.SLOT_ID_0);
    } catch (err) {
      console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0100 fail err${err.message}`);
      done();
      return;
    }
    console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0100 data${data}`);
    expect(data.length !== 0).assertTrue();
    expect(data.length >= 11).assertTrue();
    console.log('Telephony_Sim_getSimTelephoneNumber_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_0200
   * @tc.name    Call getSimTelephoneNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getSimTelephoneNumber(simSlotId.SLOT_ID_4);
    } catch (err) {
      console.log('Telephony_Sim_getSimTelephoneNumber_Promise_0200 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0200, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
     * 
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_0100
   * @tc.name   Call the getVoiceMailIdentifier interface with slotId input parameter 0,
   * expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   * the return value is 12599 Otherwise, the return value is not null
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Async_0100', 0, async function (done) {
    sim.getVoiceMailIdentifier(simSlotId.SLOT_ID_0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0100 fail, data : ${data}`);
        console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0100 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length !== 0).assertTrue();
      console.log('Telephony_Sim_getVoiceMailIdentifier_Async_0100 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_0200
   * @tc.name    Call getVoiceMailIdentifier, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Async_0200', 0, async function (done) {
    sim.getVoiceMailIdentifier(simSlotId.SLOT_ID_4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_getVoiceMailIdentifier_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0200 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Promise_0100
   * @tc.name   Call the getVoiceMailIdentifier interface with slotId input parameter 0,
   * expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   * the return value is 12599 Otherwise, the return value is not null
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Promise_0100', 0, async function (done) {
    try {
     
      var data = await sim.getVoiceMailIdentifier(simSlotId.SLOT_ID_0);
      expect(data.length !== 0).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0100 fail, data : ${data}`);
      console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0100 fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getVoiceMailIdentifier_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Promise_0200
   * @tc.name    Call getVoiceMailIdentifier, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */

  it('Telephony_Sim_getVoiceMailIdentifier_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getVoiceMailIdentifier(simSlotId.SLOT_ID_4);
    } catch (err) {
      console.log('Telephony_Sim_getVoiceMailIdentifier_Promise_0200 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0200, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_0100
   * @tc.name    Call the getVoiceMailNumber interface with slotId input parameter 0,
   *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   *             the return value is 12599 Otherwise, the return value is not null
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailNumber_Async_0100', 0, async function (done) {
    sim.getVoiceMailNumber(simSlotId.SLOT_ID_0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getVoiceMailNumber_Async_0100 getVoiceMailNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(data.length !== 0).assertTrue();
      console.log('Telephony_Sim_getVoiceMailNumber_Async_0100 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_0200
   * @tc.name    Call getVoiceMailNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailNumber_Async_0200', 0, async function (done) {
    sim.getVoiceMailNumber(simSlotId.SLOT_ID_4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_getVoiceMailNumber_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getVoiceMailNumber_Async_0200 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_0100
   * @tc.name   Call the getVoiceMailNumber interface with slotId input parameter 0,
   * expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   * the return value is 12599 Otherwise, the return value is not null
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailNumber_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.getVoiceMailNumber(simSlotId.SLOT_ID_0);
      expect(data.length !== 0).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getVoiceMailNumber_Promise_0100 getVoiceMailNumber, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getVoiceMailNumber_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_0200
   * @tc.name    Call getVoiceMailNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */

  it('Telephony_Sim_getVoiceMailNumber_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getVoiceMailNumber(simSlotId.SLOT_ID_4);
    } catch (err) {
      console.log('Telephony_Sim_getVoiceMailNumber_Promise_0200 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getVoiceMailNumber_Promise_0200, data : ${data}`);
    expect().assertFail();
    done();
  });
});