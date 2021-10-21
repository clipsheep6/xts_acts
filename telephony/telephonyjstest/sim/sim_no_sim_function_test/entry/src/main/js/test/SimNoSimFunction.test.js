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
import {SIM_SLOT_ID, CARD_NAME} from './lib/Const.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('SimNoSimFunction', function () {

  /**
   * @tc.number  Telephony_Sim_getSimState_Async_0500
   * @tc.name    Test if there is no SIM card in the case of normal finish-parameter call interface getSimState.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimState_Async_0500', 0, async function (done) {
    sim.getSimState(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getSimState_Async_0500 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimState_Async_0500, data : ${data}`);
      // If there is no SIM card, the return value is SIM_STATE_NOT_PRESENT.
      expect(data === sim.SIM_STATE_NOT_PRESENT).assertTrue();
      console.log('Telephony_Sim_getSimState_Async_0500 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getSimState_Promise_0500
   * @tc.name    Test if there is no SIM card in the case of normal finish-parameter call interface getSimState.
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimState_Promise_0500', 0, async function (done) {
    try {
      let data = await sim.getSimState(SIM_SLOT_ID.slotId0);
      console.log(`Telephony_Sim_getSimState_Promise_0500, data : ${data}`);
      // If there is no SIM card, the return value is SIM_STATE_NOT_PRESENT.
      expect(data === sim.SIM_STATE_NOT_PRESENT).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getSimState_Promise_0500 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getSimState_Promise_0500 finish');
    done();
  });
   /**
   *
   * @tc.number  Telephony_Sim_getOperatorConfigs_Async_0100
   * @tc.name    The slotId parameter is 0 and the OperatorConfig structure is not expected to be empty
   * @tc.desc    Function test
   */
    it('Telephony_Sim_getOperatorConfigs_Async_0500', 0, async function (done) {
      sim.getOperatorConfigs(SIM_SLOT_ID.slotId0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getOperatorConfigs_Async_0500 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(Object.keys(data).length !== 0).assertTrue();
        console.log('Telephony_Sim_getOperatorConfigs_Async_0500 finish');
        done();
      });
    });
  
    /**
     *
     * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_0500
     * @tc.name    The slotId parameter is 0 and the OperatorConfig structure is not expected to be empty
     * @tc.desc    Function test
     */
    it('Telephony_Sim_getOperatorConfigs_Promise_0500', 0, async function (done) {
      try{
        var data = await sim.getOperatorConfigs(SIM_SLOT_ID.slotId0);
      }
      catch (err) {
        console.log(`Telephony_Sim_getOperatorConfigs_Promise_0500 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(Object.keys(data).length !== 0).assertTrue();
      console.log('Telephony_Sim_getOperatorConfigs_Promise_0500 finish');
      done();
    });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Async_0700
   * @tc.name    HasSimCard (slotId:number, callback: AsyncCallback< Boolean >):void interface exception
   *             input parameter return value, expected result flase
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Async_0700', 0, async function (done) {
    sim.hasSimCard(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_hasSimCard_Async_0700 fail data${data}`);
        console.log('Telephony_Sim_hasSimCard_Async_0700 fail, err : ' + err.message)
        expect().assertFail();
        done();
        return;
      }
      expect(data).assertFalse();
      console.log('Telephony_Sim_hasSimCard_Async_0700 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Promise_0700
   * @tc.name    Test hasSimCard (slotId:number): Promise< Boolean > Return value of
   *             the interface exception input parameter. Expect to return false
   * @tc.desc    Function test
   */
  it('Telephony_Sim_hasSimCard_Promise_0700', 0, async function (done) {
    try {
      var data = await sim.hasSimCard(SIM_SLOT_ID.slotId0);
      expect(data).assertFalse();
    } catch (err) {
      console.log(`Telephony_Sim_hasSimCard_Promise_0700 data${data}`);
      console.log(`Telephony_Sim_hasSimCard_Promise_0700 err${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_hasSimCard_Promise_0700 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Async_0800
   * @tc.name    Test isSimActive (slotId: number, callback: AsyncCallback< Boolean >): void Abnormal input parameter
   *             during interface card activation, expectation 1. Enter false.
   *             2. Call the getSimState interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Async_0800', 0, async function (done) {
    sim.isSimActive(SIM_SLOT_ID.slotId11, (err, data) => {
      if (err) {
        expect(data).assertFalse();
        console.log('Telephony_Sim_isSimActive_Async_0800 finish');
        done();
        return;
      }
      sim.getSimState(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_isSimActive_Async_0800 getSimState fail, err : ${err.message}`);
          done();
          return;
        }
        console.log(`Telephony_Sim_isSimActive_Async_0800 getSimState, value : ${value}`);
        expect(value === sim.SIM_STATE_READY).assertTrue();
        console.log('Telephony_Sim_isSimActive_Async_0800 finish');
        done();

      });
      console.log(`Telephony_Sim_isSimActive_Async_0800 isSimActive fail, err : ${err.message}`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Promise_0800
   * @tc.name    Test isSimActive (slotId: number): Promise< Boolean > Abnormal entry parameter during
   *             interface card activation, expectation 1. Enter the false 2. Call the getSimState
   *             interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Promise_0800', 0, async function (done) {
    try {
      var data = await sim.isSimActive(SIM_SLOT_ID.slotId0);
      expect(data).assertFalse();
      try {
        var value = await sim.getSimState(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_isSimActive_Promise_0800 getSimState , value : ${value}`);
        expect(value === sim.SIM_STATE_READY).assertTrue();
      }
      catch (err) {
        console.log(`Telephony_Sim_isSimActive_Promise_0800 getSimState fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_isSimActive_Promise_0800 isSimActive fail, err : ${err.message}`);
    }
    console.log('Telephony_Sim_isSimActive_Promise_0800 isSimActive finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Async_0700
   * @tc.name    Test activateSim (slotId: number, callback: AsyncCallback): Void interface slotId
   *             exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Async_0700', 0, async function (done) {
    sim.activateSim(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_activateSim_Async_0700 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_activateSim_Async_0700  fail, data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Promise_0700
   * @tc.name    Test activateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Promise_0700', 0, async function (done) {
    try {
      var data = await sim.activateSim(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log('Telephony_Sim_activateSim_Promise_0700 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_activateSim_Promise_0700  fail, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Async_0700
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId
   *             exception entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Async_0700', 0, async function (done) {
    sim.deactivateSim(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_deactivateSim_Async_0700 deactivateSim finish ');
        done();
        return;
      }
      console.log(`Telephony_Sim_deactivateSim_Async_0700 data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Promise_0700
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Promise_0700', 0, async function (done) {
    try {
      await sim.deactivateSim(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log('Telephony_Sim_deactivateSim_Promise_0700 finish');
      done();
      return;
    }
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Async_0800
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Async_0800', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameYouXiao, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_setShowName_Async_0800 getShowName, data : ${data}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getShowName(SIM_SLOT_ID.slotId0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_setShowName_Async_0800 getShowName, data : ${data}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data === CARD_NAME.cardNameYouXiao).assertTrue();
        console.log('Telephony_Sim_setShowName_Async_0800 getShowName finish');
        done();
      });
      console.log('Telephony_Sim_setShowName_Async_0800 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Promise_0800
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name
   *             as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter
   *             0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Promise_0800', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameYouXiao);
      try {
        var data =  await sim.getShowName(SIM_SLOT_ID.slotId0);
      } catch (err) {
        console.log(`Telephony_Sim_setShowName_Promise_0800 getShowName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_setShowName_Promise_0800 fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    expect(data === CARD_NAME.cardNameYouXiao).assertTrue();
    console.log('Telephony_Sim_setShowName_Promise_0800 finish ');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Async_0800
   * @tc.name   The getShowName interface is called, the slotId parameter is 4,
   *            and the err is expected
   * @tc.desc   Function test
   */
  it('Telephony_Sim_getShowName_Async_0800', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.nameYouXiao, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_setShowName_Async_0800 , err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getShowName(SIM_SLOT_ID.slotId0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getShowName_Async_0800 , err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getShowName_Async_0800 , data : ${data}`);
        expect(data === CARD_NAME.nameYouXiao).assertTrue();
      });
      console.log('Telephony_Sim_getShowName_Async_0800 finish');
      done();
    });
  });
});