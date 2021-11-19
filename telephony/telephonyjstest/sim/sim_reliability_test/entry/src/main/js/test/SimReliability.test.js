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
  config.timeout = 60 * 1000;

  const setShowNameWriteToPromise = function () {
    return new Promise((resolve, reject) => {
      sim.setShowName(env.SLOTID0, env.CARD_NAME, (err) => {
        if (err) {
          console.log(`Telephony_Sim setShowNameWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(null);
        }
      });
    });
  };

  const setShowNumberWriteToPromise = function () {
    return new Promise((resolve, reject) => {
      sim.setShowNumber(env.SLOTID0, env.CARD_NUMBER, (err) => {
        if (err) {
          console.log(`Telephony_Sim setShowNumberWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(null);
        }
      });
    });
  };

  const getSimIccIdWriteToPromise = function () {
    return new Promise((resolve, reject) => {
      sim.getSimIccId(env.SLOTID0, (err, result) => {
        if (err) {
          console.log(`Telephony_Sim getSimIccIdWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(result);
        }
      });
    });
  };

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Async_0400
   * @tc.name    The loop gets the return value of card 1 through the hasSimCard input
   *             parameter 0 10 times, expecting the result to be true
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_hasSimCard_Async_0400', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_hasSimCard_Async_0400 finish');
        done();
        return;
      }
      sim.hasSimCard(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_hasSimCard_Async_0400 fail err${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data).assertTrue();
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_hasSimCard_Promise_0400
   * @tc.name    The loop gets the return value of card 1 through the hasSimCard input
   *             parameter 0 10 times, expecting the result to be true
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_hasSimCard_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        let data = await sim.hasSimCard(env.SLOTID0);
        expect(data).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_hasSimCard_Promise_0400 fail err${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_hasSimCard_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Async_0500
   * @tc.name    Call the isSimActive interface with slotId set to 0,
   *             loop 10 times, and expect the result to return true all 10 times
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_isSimActive_Async_0500', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_isSimActive_Async_0500 finish');
        done();
        return;
      }
      sim.isSimActive(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_isSimActive_Async_0500  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data).assertTrue();
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Promise_0500
   * @tc.name    The loop gets the return value of card 1 through the isSimActive input
   *             parameter 0 10 times, expecting the result to be true
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_isSimActive_Promise_0500', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        let data = await sim.isSimActive(env.SLOTID0);
        expect(data).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_isSimActive_Promise_0500  fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_isSimActive_Promise_0500 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Async_0400
   * @tc.name    Test activateSim (slotId: number, callback: AsyncCallback): void interface
   *             stability, expected to return true
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_activateSim_Async_0400', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_activateSim_Async_0400 finish');
        done();
        return;
      }
      sim.activateSim(env.SLOTID0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_activateSim_Async_0400 activateSim fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.isSimActive(env.SLOTID0, (err, result) => {
          if (err) {
            console.log(`Telephony_Sim_activateSim_Async_0400 isSimActive fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(result).assertTrue();
        });
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Promise_0400
   * @tc.name    Test activateSim (slotId: number): Promise Interface stability, expect to return true
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_activateSim_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        await sim.activateSim(env.SLOTID0);
        try {
          let ret = await sim.isSimActive(env.SLOTID0);
          expect(ret).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_activateSim_Promise_0400 isSimActive fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (err) {
        console.log(`Telephony_Sim_activateSim_Promise_0400 activateSim fail, res : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_activateSim_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Async_0400
   * @tc.name    Test deactivateSim (slotId: number, callback: AsyncCallback): void interface
   *             stability, expected to return false
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_deactivateSim_Async_0400', 0, async function (done) {
    const recursive = async function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_deactivateSim_Async_0400 finish');
        await sim.activateSim(env.SLOTID0);
        done();
        return;
      }
      sim.deactivateSim(env.SLOTID0, (err) => {
        if (err) {
          console.log(`Telephony_Sim_deactivateSim_Async_0400 activateSim fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.isSimActive(env.SLOTID0, (err, result) => {
          if (err) {
            console.log(`Telephony_Sim_deactivateSim_Async_0400 isSimActive fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(result).assertFalse();
        });
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_deactivateSim_Promise_0400
   * @tc.name    Test activateSim (slotId: number): Promise Interface stability, expect to return true
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_deactivateSim_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        await sim.deactivateSim(env.SLOTID0);
        let ret = await sim.isSimActive(env.SLOTID0);
        expect(ret).assertFalse();
      } catch (err) {
        console.log(`Telephony_Sim_deactivateSim_Promise_0400 test fail, err : ${err.message}`);
        expect().assertFail();
      }
    }
    console.log('Telephony_Sim_deactivateSim_Promise_0400 finish');
    try {
      await sim.activateSim(env.SLOTID0);
    } catch (err) {
      console.log(`Telephony_Sim_deactivateSim_Promise_0200 activateSim fail, err : ${err.message}`);
      expect().assertFail();
      done();
    }
    done();

  });

  /**
   * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Async_0400
   * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
   *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
   *             interface with slotId input 0. Number in 1234, called
   *             getActiveSimAccountInfoList interface to get the return value, expected
   *             return IccAccountInfo structure, uint32_t slotIndex is zero,
   *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getActiveSimAccountInfoList_Async_0400', 0, async function (done) {
    const recursive = async function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getActiveSimAccountInfoList_Async_0400 finish');
        done();
        return;
      }
      let result;
      try {
        await setShowNameWriteToPromise();
        await setShowNumberWriteToPromise();
        result = await getSimIccIdWriteToPromise();
      } catch (err) {
        console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400  fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.activateSim(env.SLOTID0, (err) => {
        if (err) {
          console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getActiveSimAccountInfoList((error, info) => {
          if (error) {
            console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0400 error cause:${error.message}`);
          }
          expect(info.some(item => item.slotIndex === env.SLOTID0
            && item.simId === env.SLOTID0
            && item.isEsim === false
            && item.isActive === true
            && item.iccId === result
            && item.showName === env.CARD_NAME
            && item.showNumber === env.CARD_NUMBER)).assertTrue();
        });
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Promise_0400
   * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
   *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
   *             interface with slotId input 0. Number in 1234, called
   *             getActiveSimAccountInfoList interface to get the return value, expected
   *             return IccAccountInfo structure, uint32_t slotIndex is zero,
   *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getActiveSimAccountInfoList_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        await sim.activateSim(env.SLOTID0);
        await sim.setShowName(env.SLOTID0, env.CARD_NAME);
        await sim.setShowNumber(env.SLOTID0, env.CARD_NUMBER);
      } catch (err) {
        console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      try {
        let result = await sim.getSimIccId(env.SLOTID0);
        let info = sim.getActiveSimAccountInfoList();
        expect(info.some(item => item.slotIndex === env.SLOTID0
          && item.simId === env.SLOTID0
          && item.isEsim === false
          && item.isActive === true
          && item.iccId === result
          && item.showName === env.CARD_NAME
          && item.showNumber === env.CARD_NUMBER)).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 test fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Async_0500
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as
   *             the input parameter 1234. Call getShowName with slotId as the
   *             input parameter 0 10 times, expecting true and returning 1234
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_setShowName_Async_0500', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_setShowName_Async_0500 finish');
        done();
        return;
      }
      sim.setShowName(env.SLOTID0, env.CARD_NAME, (err) => {
        if (err) {
          console.log(`Telephony_Sim_setShowName_Async_0500 setShowName fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getShowName(env.SLOTID0, (err, value) => {
          if (err) {
            console.log(`Telephony_Sim_setShowName_Async_0500 getShowName , err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(value === env.CARD_NAME).assertTrue();

        });
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Promise_0500
   * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
   *             the input parameter 1234. Call getShowName with slotId as the
   *             input parameter 0 10 times, expecting true and returning 1234
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_setShowName_Promise_0500', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        await sim.setShowName(env.SLOTID0, env.CARD_NAME);
        try {
          let value = await sim.getShowName(env.SLOTID0);
          expect(env.CARD_NAME === value).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_setShowName_Promise_0500 getShowName fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (err) {
        console.log(`Telephony_Sim_setShowName_Promise_0500 setShowName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_setShowName_Promise_0500 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Async_0500
   * @tc.name    The setShowName interface is called with slotId input parameter 0 and name input parameter
   *             1234. The getShowName interface is called with slotId input
   *             parameter 0 for 10 times and 1234 is expected to be returned
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getShowName_Async_0500', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getShowName_Async_0500 finish');
        done();
        return;
      }
      sim.setShowName(env.SLOTID0, env.CARD_NAME, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getShowName_Async_0500 setShowName fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getShowName(env.SLOTID0, (err, value) => {
          if (err) {
            console.log(`Telephony_Sim_getShowName_Async_0500 getShowName fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(value === env.CARD_NAME).assertTrue();
        });
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Promise_0500
   * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
   *             the input parameter 1234. Call getShowName with slotId as the
   *             input parameter 0 10 times, expecting  returning 1234
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getShowName_Promise_0500', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        await sim.setShowName(env.SLOTID0, env.CARD_NAME);
        let value;
        try {
          value = await sim.getShowName(env.SLOTID0);
        } catch (err) {
          console.log(`Telephony_Sim_getShowName_Promise_0500 getShowName fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(env.CARD_NAME === value).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getShowName_Promise_0500 setShowName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }

    }
    console.log('Telephony_Sim_getShowName_Promise_0500 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Async_0500
   * @tc.name    The setShowNumber interface is called with slotId input parameter 0 and name input parameter
   *             1234. The getShowNumber interface is called with slotId input
   *             parameter 0 for 10 times and 1234 is expected to be returned
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_setShowNumber_Async_0500', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_setShowNumber_Async_0500 finish');
        done();
        return;
      }
      sim.setShowNumber(env.SLOTID0, env.CARD_NUMBER, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_setShowNumber_Async_0500 setShowNumber fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getShowNumber(env.SLOTID0, (err, value) => {
          if (err) {
            console.log(`Telephony_Sim_setShowNumber_Async_0500  getShowNumber fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          expect(value === env.CARD_NUMBER).assertTrue();
        });
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Promise_0500
   * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
   *             the input parameter 1234. Call getShowName with slotId as the
   *             input parameter 0 10 times, expecting  returning 1234
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_setShowNumber_Promise_0500', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        await sim.setShowNumber(env.SLOTID0, env.CARD_NUMBER);
        try {
          let value = await sim.getShowNumber(env.SLOTID0);
          expect(env.CARD_NUMBER === value).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_setShowNumber_Promise_0500 getShowNumber fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (err) {
        console.log(`Telephony_Sim_setShowNumber_Promise_0500 setShowNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_setShowNumber_Promise_0500 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowNumber_Async_0400
   * @tc.name    The setShowNumber interface is called with slotId input parameter 0 and name input parameter
   *             1234. The getShowNumber interface is called with slotId input
   *             parameter 0 for 10 times and 1234 is expected to be returned
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getShowNumber_Async_0400', 0, async function (done) {
    sim.setShowNumber(env.SLOTID0, env.CARD_NAME, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getShowNumber_Async_0400 setShowNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      const recursive = function (n) {
        if (n <= 0) {
          console.log('Telephony_Sim_getShowNumber_Async_0400 finish');
          done();
          return;
        }
        sim.getShowNumber(env.SLOTID0, (err, value) => {
          if (err) {
            console.log(`Telephony_Sim_getShowNumber_Async_0400 getShowNumber fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          if (value === env.CARD_NAME) {
            recursive(n - 1);
          } else {
            expect().assertFail();
            done();
            return;
          }
        });
      };
      recursive(env.GENERAL_RUN_TIMES);
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowNumber_Promise_0400
   * @tc.name     Call setShowName with slotId as the input parameter 0 and name as
   *             the input parameter 1234. Call getShowName with slotId as the
   *             input parameter 0 10 times, expecting  returning 1234
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getShowNumber_Promise_0400', 0, async function (done) {
    try {
      await sim.setShowNumber(env.SLOTID0, env.CARD_NAME);
    } catch (err) {
      console.log(`Telephony_Sim_getShowNumber_Promise_0400 setShowNumber fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        let value = await sim.getShowNumber(env.SLOTID0);
        expect(env.CARD_NAME === value).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getShowNumber_Promise_0400 getShowNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getShowNumber_Promise_0400 finish');
    done();
  });

  /**
   *
   * @tc.number  Telephony_Sim_getOperatorConfigs_Async_0400
   * @tc.name    Call getOperatorConfigs, slotId is 0,10 times, and OperatorConfig is not expected to be empty
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getOperatorConfigs_Async_0400', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getOperatorConfigs_Async_0400 finish');
        done();
        return;
      }
      sim.getOperatorConfigs(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getOperatorConfigs_Async_0400 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data.length !== 0).assertTrue();
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_0400
   * @tc.name    Call getOperatorConfigs, slotId is 0,10 times, and OperatorConfig is not expected to be empty
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getOperatorConfigs_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        let data = await sim.getOperatorConfigs(env.SLOTID0);
        expect(data.length !== 0).assertTrue();
      } catch (err) {
        console.log('Telephony_Sim_getOperatorConfigs_Promise_0400 fail');
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getOperatorConfigs_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_0400
   * @tc.name    The getSimTelephoneNumber interface is called with the slotId parameter 0 and 10 times.
   *             The expected return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Async_0400', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getSimTelephoneNumber_Async_0400 finish');
        done();
        return;
      }
      sim.getSimTelephoneNumber(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0400 fail, err : ${err.message}`);
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
   * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_0400
   * @tc.name   The getSimTelephoneNumber interface is called with the slotId
   *            parameter 0 and 10 times. The expected return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getSimTelephoneNumber_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        let data = await sim.getSimTelephoneNumber(env.SLOTID0);
        expect(data.length !== 0).assertTrue();
        expect(data.length >= 11).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0400 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getSimTelephoneNumber_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_0400
   * @tc.name    The getVoiceMailIdentifier interface is called with the slotId input parameter 0, 10 times,
   *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004
   *             or 46007, the return value is 12599
   *             Otherwise, the return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Async_0400', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getVoiceMailIdentifier_Async_0400 finish');
        done();
        return;
      }
      sim.getVoiceMailIdentifier(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0400 getVoiceMailIdentifier
            fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0400 getVoiceMailIdentifier , data : ${data}`);
        expect(data !== '').assertTrue();
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number Telephony_Sim_getVoiceMailIdentifier_Promise_0400
   * @tc.name   Call the getVoiceMailIdentifier interface with slotId input parameter 0, 10 times
   *            expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   *            the return value is 12599 Otherwise, the return value is not null
   * @tc.desc   Reliability test
   */
  it('Telephony_Sim_getVoiceMailIdentifier_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        let data = await sim.getVoiceMailIdentifier(env.SLOTID0);
        expect(data !== '').assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0400 getVoiceMailIdentifier
            fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getVoiceMailIdentifier_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_0400
   * @tc.name    The getVoiceMailNumber interface is called with the slotId input parameter 0, 10 times,
   *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or
   *             46004 or 46007, the return value is 12599
   *             Otherwise, the return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getVoiceMailNumber_Async_0400', 0, async function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_getVoiceMailNumber_Async_0400 finish');
        done();
        return;
      }
      sim.getVoiceMailNumber(env.SLOTID0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getVoiceMailNumber_Async_0400 getVoiceMailNumber fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        expect(data !== '').assertTrue();
        recursive(n - 1);
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_0400
   * @tc.name    Call the getVoiceMailNumber interface with slotId input parameter 0, 10 times
   *             expecting that if getSimOperatorNumeric (0) is equal to 46000 or 46002 or 46004 or 46007,
   *             the return value is 12599 Otherwise, the return value is not null
   * @tc.desc    Reliability test
   */
  it('Telephony_Sim_getVoiceMailNumber_Promise_0400', 0, async function (done) {
    for (let index = 0; index < env.GENERAL_RUN_TIMES; index++) {
      try {
        let data = await sim.getVoiceMailNumber(env.SLOTID0);
        expect(data.length !== 0).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getVoiceMailNumber_Promise_0400 getVoiceMailNumber, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_getVoiceMailNumber_Promise_0400 finish');
    done();
  });

  /**
   * @tc.number   Telephony_Sim_setVoiceMailInfo_Async_0900
   * @tc.name     Test the reliability of the setVoiceMailInfo async callback interface
   * @tc.desc     Reliability test
   */
  it('Telephony_Sim_setVoiceMailInfo_Async_0900', 0, function (done) {
    const recursive = function (n) {
      if (n <= 0) {
        console.log('Telephony_Sim_setVoiceMailInfo_Async_0900 test finish.');
        done();
        return;
      }
      sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20, error => {
        if (error) {
          console.log(`Telephony_Sim_setVoiceMailInfo_Async_0900 setVoiceMailInfo error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.getVoiceMailNumber(env.SLOTID0, (error, value) => {
          if (error) {
            console.log(`Telephony_Sim_setVoiceMailInfo_Async_0900 getVoiceMailNumber error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log(`Telephony_Sim_setVoiceMailInfo_Async_0900 getVoiceMailNumber value: ${value}`);
          if (value !== env.MAIL_NUMBER_LEN20) {
            expect().assertFail();
            done();
            return;
          }
          sim.getVoiceMailIdentifier(env.SLOTID0, (error, value) => {
            if (error) {
              console.log(`Telephony_Sim_setVoiceMailInfo_Async_0900 getVoiceMailIdentifier error: ${error.message}`);
              expect().assertFail();
            } else {
              console.log(`Telephony_Sim_setVoiceMailInfo_Async_0900 getVoiceMailIdentifier value: ${value}`);
              console.log(`Telephony_Sim_setVoiceMailInfo_Async_0900 test ${n} time finish`);
              expect(value === env.MAIL_NAME_LEN12).assertTrue();
            }
            recursive(n - 1);
          });
        });
      });
    };
    recursive(env.GENERAL_RUN_TIMES);
  });

  /**
   * @tc.number   Telephony_Sim_setVoiceMailInfo_Promise_0900
   * @tc.name     Test the reliability of the setVoiceMailInfo promise interface
   * @tc.desc     Reliability test
   */
  it('Telephony_Sim_setVoiceMailInfo_Promise_0900', 0, async function (done) {
    try {
      for (let i = 0; i < env.GENERAL_RUN_TIMES; i++) {
        console.log(`Telephony_Sim_setVoiceMailInfo_Promise_0900 ${i + 1} loop test`);
        await sim.setVoiceMailInfo(env.SLOTID0, env.MAIL_NAME_LEN12, env.MAIL_NUMBER_LEN20);
        const mailNumber = await sim.getVoiceMailNumber(env.SLOTID0);
        console.log(`Telephony_Sim_setVoiceMailInfo_Promise_0900 getVoiceMailNumber value: ${mailNumber}`);
        if (mailNumber !== env.MAIL_NUMBER_LEN20) {
          expect().assertFail();
          done();
          return;
        }
        const mailIdentifier = await sim.getVoiceMailIdentifier(env.SLOTID0);
        console.log(`Telephony_Sim_setVoiceMailInfo_Promise_0900 getVoiceMailIdentifier value: ${mailIdentifier}`);
        expect(mailIdentifier === env.MAIL_NAME_LEN12).assertTrue();
      }
      console.log('Telephony_Sim_setVoiceMailInfo_Promise_0900 test finish');
    } catch (error) {
      console.log(`Telephony_Sim_setVoiceMailInfo_Promise_0900 error: ${error.message}`);
      expect().assertFail();
    }
    done();
  });
});