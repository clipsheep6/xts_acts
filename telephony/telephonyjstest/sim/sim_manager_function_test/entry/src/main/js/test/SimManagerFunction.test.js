/*
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
import {simSlotId, cardInfo} from './lib/Const.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('SimManagerFunction', function () {

  var defaultValue = 0;
  beforeAll(async function (done) {
    // Gets the default calling card ID.
    sim.getDefaultVoiceSlotId((err, result) => {
      if (err) {
        console.log(`Telephony_Sim beforeAll:getDefaultVoiceSlotId fail, err : ${err.message}`);
        done();
        return;
      }
      defaultValue = result;
      done();
    })
  })

  function setShowNameWriteToPromise() {
    return new Promise((resolve, reject)=>{
      sim.setShowName(simSlotId.SLOT_ID_0, cardInfo.NEW_CARD_NAME, (err) => {
        if (err) {
          console.log(`Telephony_Sim setShowNameWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(null);
        }
      });
    })
  }

  function setShowNumberWriteToPromise() {
    return new Promise((resolve, reject)=>{
      sim.setShowNumber(simSlotId.SLOT_ID_0, cardInfo.NEW_CARD_NUMBER, (err) => {
        if (err) {
          console.log(`Telephony_Sim setShowNumberWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(null);
        }
      });
    })
  }

  function getSimIccIdWriteToPromise() {
    return new Promise((resolve, reject)=>{
      sim.getSimIccId(simSlotId.SLOT_ID_0, (err, result) => {
        if (err) {
          console.log(`Telephony_Sim getSimIccIdWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(result);
        }
      });
    })
  }

  /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Async_0100
    * @tc.name    Get the return value by calling the GetSimAccountInfo interface SIM ID input parameter 0.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimAccountInfo_Async_0100', 0, async function (done) {
    try {
      await setShowNameWriteToPromise();
      await setShowNumberWriteToPromise();
      var iccIdValue = await getSimIccIdWriteToPromise();
    } catch (err) {
      console.log(`Telephony_Sim_getSimAccountInfo_Async_0100 setOrGet fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.deactivateSim(simSlotId.SLOT_ID_0, (err) => {
      if (err) {
        console.log(`Telephony_Sim_getSimAccountInfo_Async_0100 deactivateSim fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getSimAccountInfo(simSlotId.SLOT_ID_0, (err, info) => {
        if (err) {
          console.log(`Telephony_Sim_getSimAccountInfo_Async_0100 fail ,err : ${err.message}`);
          expect().assertFail();
        }
        expect(info.slotIndex === simSlotId.SLOT_ID_0).assertTrue();
        expect(info.simId === simSlotId.SLOT_ID_0).assertTrue();
        expect(info.isEsim).assertFalse();
        expect(info.isActive).assertFalse();
        expect(info.iccId === iccIdValue).assertTrue();
        expect(info.showName === cardInfo.NEW_CARD_NAME).assertTrue();
        expect(info.showNumber === cardInfo.NEW_CARD_NUMBER).assertTrue();

        sim.activateSim(simSlotId.SLOT_ID_0, (err) => {
          if (err) {
            console.log(`Telephony_Sim_getSimAccountInfo_Async_0100 activateSim fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log('Telephony_Sim_getSimAccountInfo_Async_0100 finish');
          done();
        });
      });
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Async_0200
    * @tc.name    Enter exception parameters to test whether the getSimAccountInfo
    *             interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimAccountInfo_Async_0200', 0, async function (done) {
    sim.getSimAccountInfo(simSlotId.SLOT_ID_4, (err) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log(`Telephony_Sim_getSimAccountInfo_Async_0200, err: ${err.message}`);
        console.log('Telephony_Sim_getSimAccountInfo_Async_0200 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log('Telephony_Sim_getSimAccountInfo_Async_0200 fail');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Promise_0100
    * @tc.name    Enter normal parameters to test whether the getSimAccountInfo
    *             interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimAccountInfo_Promise_0100', 0, async function (done) {
    try {
      await sim.setShowName(simSlotId.SLOT_ID_0, cardInfo.NEW_CARD_NAME);
      await sim.setShowNumber(simSlotId.SLOT_ID_0, cardInfo.NEW_CARD_NUMBER);
      var iccIdValue = await sim.getSimIccId(simSlotId.SLOT_ID_0);
      await sim.deactivateSim(simSlotId.SLOT_ID_0);
    } catch (err) {
      console.log(`Telephony_Sim_getSimAccountInfo_Promise_0100 setOrGet fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      let info = await sim.getSimAccountInfo(simSlotId.SLOT_ID_0);
      expect(info.slotIndex === simSlotId.SLOT_ID_0).assertTrue();
      expect(info.simId === simSlotId.SLOT_ID_0).assertTrue();
      expect(info.isEsim).assertFalse();
      expect(info.isActive).assertFalse();
      expect(info.iccId === iccIdValue).assertTrue();
      expect(info.showName === cardInfo.NEW_CARD_NAME).assertTrue();
      expect(info.showNumber === cardInfo.NEW_CARD_NUMBER).assertTrue();
    } catch (error) {
      console.log(`Telephony_Sim_getSimAccountInfo_Promise_0100 fail, err : ${error.message}`);
      expect().assertFail();
      done();
    }

    try {
      await sim.activateSim(simSlotId.SLOT_ID_0);
      console.log('Telephony_Sim_getSimAccountInfo_Promise_0100 finish');
      done();
    } catch (error) {
      console.log(`Telephony_Sim_getSimAccountInfo_Promise_0100 fail, err : ${error.message}`);
      expect().assertFail();
      done();
    }
  });

  /**
    * @tc.number  Telephony_Sim_getSimAccountInfo_Promise_0200
    * @tc.name    Enter exception parameters to test whether the getSimAccountInfo
    *             interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimAccountInfo_Promise_0200', 0, async function (done) {
    try {
      await sim.getSimAccountInfo(simSlotId.SLOT_ID_4);
    } catch (err) {
      // Enter the exception ID to enter err.
      console.log(`Telephony_Sim_getSimAccountInfo_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getSimAccountInfo_Promise_0200 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log('Telephony_Sim_getSimAccountInfo_Promise_0200 fail');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getDefaultVoiceSlotId_Async_0100
    * @tc.name    The test first sets the default card number and then calls
    *             the getDefaultVoiceLotid interface to get the SIM ID.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getDefaultVoiceSlotId_Async_0100', 0, async function (done) {
    sim.setDefaultVoiceSlotId(simSlotId.SLOT_ID_0, (err) => {
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
        expect(data === simSlotId.SLOT_ID_0).assertTrue();
        // Restore Settings
        sim.setDefaultVoiceSlotId(defaultValue, (err) => {
          if (err) {
            console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0100 setDefaultVoiceSLOT_ID_err: ${
              err.message}`);
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
    sim.setDefaultVoiceSlotId(simSlotId.SLOT_ID_2, (err) => {
      if (err) {
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200：setDefaultVoiceSLOT_ID_err: ${
          err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getDefaultVoiceSlotId((err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200 fail, err: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200, data = ${data}`);
        expect(data === simSlotId.SLOT_ID_2).assertTrue();
        // Restore Settings
        sim.setDefaultVoiceSlotId(defaultValue, (err) => {
          if (err) {
            console.log(`Telephony_Sim_getDefaultVoiceSlotId_Async_0200 setDefaultVoiceSLOT_ID_err: ${
              err.message}`);
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
      await sim.setDefaultVoiceSlotId(simSlotId.SLOT_ID_2);
      try {
        let data = await sim.getDefaultVoiceSlotId();
        expect(data === simSlotId.SLOT_ID_2).assertTrue();
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
      await sim.setDefaultVoiceSlotId(simSlotId.SLOT_ID_0);
      try {
        let data = await sim.getDefaultVoiceSlotId();
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0200, data = ${data}`);
        expect(data === simSlotId.SLOT_ID_0).assertTrue();
        // Restore Settings
        await sim.setDefaultVoiceSlotId(defaultValue);
        console.log('Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 finish');
        done();
      } catch (err) {
        console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0200 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_getDefaultVoiceSlotId_Promise_0200:setDefaultVoiceSLOT_ID_err: ${err.message}`);
      expect().assertFail();
      done();
    }
  });

  /**
    * @tc.number  Telephony_Sim_setDefaultVoiceSlotId_Async_0100
    * @tc.name    Test the setDefaultVoiceLotid interface when the input SIM ID parameter is 4.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_setDefaultVoiceSlotId_Async_0100', 0, async function (done) {
    sim.setDefaultVoiceSlotId(simSlotId.SLOT_ID_4, (err) => {
      if (err) {
        // Expect slotid 4 return err here.
        sim.getDefaultVoiceSlotId((err, result) => {
          if (err) {
            console.log(`Telephony_Sim_setDefaultVoiceSlotId_Async_0100 getDefaultVoiceSLOT_ID_fail, err: ${
              err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(result !== simSlotId.SLOT_ID_4).assertTrue();
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
      await sim.setDefaultVoiceSlotId(simSlotId.SLOT_ID_4);
    } catch (err) {
      // Expect slotid 4 return err here.
      let result = await sim.getDefaultVoiceSlotId();
      expect(result !== simSlotId.SLOT_ID_4).assertTrue();
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