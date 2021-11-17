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
import {SIM_SLOT_ID, CARD_NAME, TYPE_AND_INDEX} from './lib/Const.js';
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

  /**
   * @tc.number  Telephony_Sim_getShowName_Promise_0800
   * @tc.name    The getShowName interface is called, the slotId parameter is 4,
   *             and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowName_Promise_0800', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.nameYouXiao);
      try {
        var value = await sim.getShowName(SIM_SLOT_ID.slotId0);
      } catch (err) {
        console.log(`Telephony_Sim_getShowName_Promise_0800 getShowName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(CARD_NAME.nameYouXiao === value).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getShowName_Promise_0800 setShowName fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getShowName_Promise_0800 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowNumber_Async_0700
   * @tc.name    The getShowNumber interface is called, the slotId parameter is 4,
   *             the name parameter is 012345678901234567890123456789qQ@, and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowNumber_Async_0700', 0, async function (done) {
    sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.nameYouXiao, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getShowNumber_Async_0700 setShowNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getShowNumber(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_getShowNumber_Async_0700 getShowNumber fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(value === CARD_NAME.nameYouXiao).assertTrue();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowNumber_Promise_0700
   * @tc.name    The getShowNumber interface is called, the slotId parameter is 4,
   *             and the err is expected
   * @tc.desc    Function test
   */

  it('Telephony_Sim_getShowNumber_Promise_0700', 0, async function (done) {
    try {
      await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.nameYouXiao);
      try {
        var value = await sim.getShowNumber(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_getShowNumber_Promise_0700 getShowNumber, value : ${value}`);
        expect(value === CARD_NAME.nameYouXiao).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getShowNumber_Promise_0700 getShowNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_getShowNumber_Promise_0700 setShowNumber fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getShowNumber_Promise_0700 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_0700
   * @tc.name    Call getSimTelephoneNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Async_0700', 0, async function (done) {
    sim.getSimTelephoneNumber(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_getSimTelephoneNumber_Async_0700 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0700 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_0700
   * @tc.name    Call getSimTelephoneNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Promise_0700', 0, async function (done) {
    try {
      var data = await sim.getSimTelephoneNumber(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log('Telephony_Sim_getSimTelephoneNumber_Promise_0700 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0700, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_0700
   * @tc.name    Call getVoiceMailIdentifier, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Async_0700', 0, async function (done) {
    sim.getVoiceMailIdentifier(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_getVoiceMailIdentifier_Async_0700 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0700 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Promise_0700
   * @tc.name    Call getVoiceMailIdentifier, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */

  it('Telephony_Sim_getVoiceMailIdentifier_Promise_0700', 0, async function (done) {
    try {
      var data = await sim.getVoiceMailIdentifier(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log('Telephony_Sim_getVoiceMailIdentifier_Promise_0700 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0700, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_0700
   * @tc.name    Call getVoiceMailNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getVoiceMailNumber_Async_0700', 0, async function (done) {
    sim.getVoiceMailNumber(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_getVoiceMailNumber_Async_0700 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getVoiceMailNumber_Async_0700 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_0700
   * @tc.name    Call getVoiceMailNumber, slotId parameter 4, and expect to enter ERR
   * @tc.desc    Function test
   */

  it('Telephony_Sim_getVoiceMailNumber_Promise_0700', 0, async function (done) {
    try {
      var data = await sim.getVoiceMailNumber(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log('Telephony_Sim_getVoiceMailNumber_Promise_0700 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getVoiceMailNumber_Promise_0700, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_1100
   * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
   *             interface subId exception input parameter, expected to return []
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_1100', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
      if (error) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_1100 finish');
        expect().assertFail();
      } else if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_1100 finish');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_1100 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  elephony_Sim_queryIccDiallingNumbers_Promise_1100
   * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
   *             Expected return []
   * @tc.desc    Function test
   */
  it('elephony_Sim_queryIccDiallingNumbers_Promise_1100', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
      if (data.length === 0) {
        console.log('elephony_Sim_queryIccDiallingNumbers_Promise_1100 test finish.');
      } else {
        console.log('elephony_Sim_queryIccDiallingNumbers_Promise_1100 test fail.');
        expect().assertFail();
      }
      done();
    }).catch(error => {
      console.log(`elephony_Sim_queryIccDiallingNumbers_Promise_1100 error:${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1400
   * @tc.name    addIccDiallingNumbers (slotId: Number, Type: Number, diallingNumbers:
   *             DiallingNumbersInfo, callback: AsyncCallback< Boolean >):void subId
   *             Expect step 3 to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1400', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1400 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1400 finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1400 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_1400
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 0,
   *              type parameter 3 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1400', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1400 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1400 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1400 test finish.');
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_1200
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1200', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1200 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1200 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1200 first query fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    if (data && data.length !== 0) {
      for (let i = 0;i < data.length;i++) {
        if (data[i].alphaTag === 'test') {
          newRecordNumber = data[i].recordNumber;
          break;
        }
      }
    }

    if (!newRecordNumber) {
      try {
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1200 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1200 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1200 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1200 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1200 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1200 finish.');
      } else {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1200 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1200
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1200', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1200 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1200 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1200 first query fail, error${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    if (data && data.length !== 0) {
      for (let i = 0;i < data.length;i++) {
        if (data[i].alphaTag === 'test') {
          newRecordNumber = data[i].recordNumber;
          break;
        }
      }
    }

    if (!newRecordNumber) {
      try {
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1200 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1200 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1200 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1200 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1200 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1200 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1200 test finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_1600
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type
   *             parameter 0 DiallingNumbersInfo struct input arguments
   *             SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *             number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1600', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
      if (error) {
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1600 test finish.');
        done();
        return;
      }
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1600 test fail.');
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1500
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *            number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1600', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1600 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1600 test finish.');
      done();
    });
  });
});