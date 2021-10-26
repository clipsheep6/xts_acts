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
import radio from '@ohos.telephony.radio';
import {SIM_SLOT_ID, CARD_NAME, CARD_NAME_ZERO} from './lib/Const.js';
import {describe,  it, expect} from 'deccjsunit/index';
describe('SimAccountInformationManagerFunction', function () {
  /**
   * @tc.number  Telephony_Sim_isSimActive_Async_0100
   * @tc.name    Test isSimActive (slotId: number, callback: AsyncCallback< Boolean >): void The interface card is
   *             normally entered when it is activated. The expectation is 1. 2. Call the getSimState
   *             interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Async_0100', 0, async function (done) {
    sim.activateSim(SIM_SLOT_ID.slotId0, (err) => {
      if (err) {
        console.log(`Telephony_Sim_isSimActive_Async_0100 activateSim fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.isSimActive(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_isSimActive_Async_0100 isSimActive fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_isSimActive_Async_0100 isSimActive, value : ${value}`);
        expect(value).assertTrue();
        setTimeout(function () {
          sim.getSimState(SIM_SLOT_ID.slotId0, (err, res) => {
            if (err) {
              console.log(`Telephony_Sim_isSimActive_Async_0100 getSimState fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            console.log(`Telephony_Sim_isSimActive_Async_0100 getSimState, res : ${res}`);
            expect(res === sim.SIM_STATE_READY).assertTrue();
            console.log('Telephony_Sim_isSimActive_Async_0100 finish');
            done();
          });
        }, 1000);
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Async_0200
   * @tc.name    Test isSimActive (slotId: number, callback: AsyncCallback< Boolean >): void Abnormal input parameter
   *             during interface card activation, expectation 1. Enter false.
   *             2. Call the getSimState interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Async_0200', 0, async function (done) {
    sim.isSimActive(SIM_SLOT_ID.slotId11, (err, data) => {
      if (err) {
        expect(data).assertFalse();
        console.log('Telephony_Sim_isSimActive_Async_0200 finish');
        done();
        return;
      }
      sim.getSimState(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_isSimActive_Async_0200 getSimState fail, err : ${err.message}`);
          done();
          return;
        }
        console.log(`Telephony_Sim_isSimActive_Async_0200 getSimState, value : ${value}`);
        expect(value === sim.SIM_STATE_READY).assertTrue();
        console.log('Telephony_Sim_isSimActive_Async_0200 finish');
        done();

      });
      console.log(`Telephony_Sim_isSimActive_Async_0200 isSimActive fail, err : ${err.message}`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Async_0600
   * @tc.name    Test isSimActive (slotId: number, callback: AsyncCallback< Boolean >): void Abnormal input parameter
   *             during interface card activation, expectation 1. Enter false.
   *             2. Call the getSimState interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Async_0600', 0, async function (done) {
    sim.isSimActive(SIM_SLOT_ID.slotId1, (err, data) => {
      if (err) {
        expect(data).assertFalse();
        console.log('Telephony_Sim_isSimActive_Async_0600 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_isSimActive_Async_0600 isSimActive fail, err : ${err.message}`);
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Async_0700
   * @tc.name    Test isSimActive (slotId: number, callback: AsyncCallback< Boolean >): void Abnormal input parameter
   *             during interface card activation, expectation 1. Enter false.
   *             2. Call the getSimState interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Async_0700', 0, async function (done) {
    sim.isSimActive(SIM_SLOT_ID.slotId2, (err, data) => {
      if (err) {
        expect(data).assertFalse();
        console.log('Telephony_Sim_isSimActive_Async_0700 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_isSimActive_Async_0700 isSimActive fail, err : ${err.message}`);
      done();
    });
  });
  function setDeactivateSimWriteToPromise() {
    return new Promise((resolve, reject)=>{
      sim.deactivateSim(SIM_SLOT_ID.slotId0,(err) => {
        if (err) {
          console.log(`Telephony_Sim setShowNameWriteToPromise fail, err : ${err.message}`);
          reject(err);
        } else {
          resolve(null);
        }
      });
    })
  }
  /**
   * @tc.number  Telephony_Sim_isSimActive_Async_0300
   * @tc.name    Test isSimActive (slotId: number, callback: AsyncCallback< Boolean >): void This parameter is normally
   *             entered when the interface card is not activated. The expectation is 1. Step 2 Return: false
   *             2. Call the getSimState interface input parameter 0 and return the result SIM_STATE_NOT_PRESENT
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Async_0300', 0, async function (done) {
    try {
      await setDeactivateSimWriteToPromise();
    }
    catch (err) {
      console.log(`Telephony_Sim_isSimActive_Async_0300  fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
      sim.isSimActive(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_isSimActive_Async_0300 isSimActive fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_isSimActive_Async_0300 isSimActive, value : ${value}`);
        expect(value).assertFalse();
        setTimeout(function () {
          sim.getSimState(SIM_SLOT_ID.slotId0, (err, result) => {
            if (err) {
              console.log(`Telephony_Sim_isSimActive_Async_0300 getSimState fail, err : ${err.message}`);
              expect().assertFail();
              done();
              return;
            }
            console.log(`Telephony_Sim_isSimActive_Async_0300 getSimState , result : ${result}`);
            expect(result === sim.SIM_STATE_NOT_PRESENT).assertTrue();
            console.log('Telephony_Sim_isSimActive_Async_0300 finish');
            done();
            sim.activateSim(SIM_SLOT_ID.slotId0, (err, data) => {
              if (err) {
                console.log(`Telephony_Sim_isSimActive_Async_0300 activateSim fail, err : ${err.message}`);
                expect().assertFail();
                done();
              }
            });
          });
        }, 1000);
      });

  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Promise_0100
   * @tc.name    Test isSimActive (slotId: number): Promise< Boolean > When the interface card is activated,
   *             the value is expected to be 1. Returns: true,2. Call the getSimState
   *             interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Promise_0100', 0, async function (done) {
    try {
      await sim.activateSim(SIM_SLOT_ID.slotId0);
      try {
        var res = await sim.isSimActive(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_isSimActive_Promise_0100 isSimActive , res : ${res}`);
        expect(res).assertTrue();
        try {
          var value = await sim.getSimState(SIM_SLOT_ID.slotId0);
          console.log(`Telephony_Sim_isSimActive_Promise_0100 getSimState , value : ${value}`);
          expect(value === sim.SIM_STATE_READY).assertTrue();
          console.log(`Telephony_Sim_isSimActive_Promise_0100 getSimState ,
          sim.SIM_STATE_READY : ${sim.SIM_STATE_READY}`);
        } catch (err) {
          console.log(`Telephony_Sim_isSimActive_Promise_0100 getSimState fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (err) {
        console.log(`Telephony_Sim_isSimActive_Promise_0100 isSimActive fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_isSimActive_Promise_0100 activateSim fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_isSimActive_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Promise_0200
   * @tc.name    Test isSimActive (slotId: number): Promise< Boolean > Abnormal entry parameter during
   *             interface card activation, expectation 1. Enter the false 2. Call the getSimState
   *             interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.isSimActive(SIM_SLOT_ID.slotId11);
      expect(data).assertFalse();
    } catch (err) {
      console.log(`Telephony_Sim_isSimActive_Promise_0200 isSimActive fail, err : ${err.message}`);
      try {
        var value = await sim.getSimState(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_isSimActive_Promise_0200 getSimState , value : ${value}`);
        expect(value === sim.SIM_STATE_READY).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_isSimActive_Promise_0200 getSimState fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    }
    console.log('Telephony_Sim_isSimActive_Promise_0200 isSimActive finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Promise_0600
   * @tc.name    Test isSimActive (slotId: number): Promise< Boolean > Abnormal entry parameter during
   *             interface card activation, expectation 1. Enter the false 2. Call the getSimState
   *             interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Promise_0600', 0, async function (done) {
    try {
      var data = await sim.isSimActive(SIM_SLOT_ID.slotId1);
      expect(data).assertFalse();
    } catch (err) {
      console.log(`Telephony_Sim_isSimActive_Promise_0600 isSimActive fail, err : ${err.message}`);
    }
    console.log('Telephony_Sim_isSimActive_Promise_0600 isSimActive finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Promise_0700
   * @tc.name    Test isSimActive (slotId: number): Promise< Boolean > Abnormal entry parameter during
   *             interface card activation, expectation 1. Enter the false 2. Call the getSimState
   *             interface input parameter 0 and return the result SIM_STATE_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Promise_0700', 0, async function (done) {
    try {
      var data = await sim.isSimActive(SIM_SLOT_ID.slotId2);
      expect(data).assertFalse();
    } catch (err) {
      console.log(`Telephony_Sim_isSimActive_Promise_0700 isSimActive fail, err : ${err.message}`);
    }
    console.log('Telephony_Sim_isSimActive_Promise_0700 isSimActive finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_isSimActive_Promise_0300
   * @tc.name    Test isSimActive (slotId: number): Promise< Boolean > If the interface card is not activated,
   *             the entry parameter is normal. Expect 1. Returns: false 2. Call the
   *             getSimState interface input parameter 0 and return the result SIM_STATE_NOT_PRESENT
   * @tc.desc    Function test
   */
  it('Telephony_Sim_isSimActive_Promise_0300', 0, async function (done) {
    try {
      await sim.deactivateSim(SIM_SLOT_ID.slotId0);
      try {
        var ret = await sim.isSimActive(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_isSimActive_Promise_0300 , ret : ${ret}`);
        expect(ret).assertFalse();
        setTimeout(async function () {
          try {
            var value = await sim.getSimState(SIM_SLOT_ID.slotId0);
            console.log(`Telephony_Sim_isSimActive_Promise_0300 , getSimState value : ${value}`);
            expect(value === sim.SIM_STATE_NOT_PRESENT).assertTrue();

          } catch (err) {
            console.log(`Telephony_Sim_isSimActive_Promise_0300 getSimState fail, err : ${err.message}`);
            expect().assertFail();
            done();
          }
        }, 1000);
      } catch (err) {
        console.log(`Telephony_Sim_isSimActive_Promise_0300 isSimActive fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_isSimActive_Promise_0300 deactivateSim fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_isSimActive_Promise_0300 getSimState finish');
    done();
    try {
      await sim.activateSim(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log(`Telephony_Sim_isSimActive_Promise_0300 activateSim fail, err : ${err.message}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Async_0100
   * @tc.name    Test activateSim (slotId: number, callback: AsyncCallback): Void interface slotId
   *             exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Async_0100', 0, async function (done) {
    sim.activateSim(SIM_SLOT_ID.slotId11, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_activateSim_Async_0100 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_activateSim_Async_0100  fail, data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Async_0200
   * @tc.name    When the card is active, test activateSim (slotId: number, callback: AsyncCallback):
   *             void interface is set to active and expects to return true
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Async_0200', 0, async function (done) {
    sim.activateSim(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_activateSim_Async_0200 activateSim1 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.activateSim(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_activateSim_Async_0200 activateSim2 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.isSimActive(SIM_SLOT_ID.slotId0, (err, result) => {
          if (err) {
            console.log(`Telephony_Sim_activateSim_Async_0200 isSimActive fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log(`Telephony_Sim_activateSim_Async_0200 isSimActive , result : ${result}`);
          expect(result).assertTrue();
          console.log('Telephony_Sim_activateSim_Async_0200 isSimActive finish');
          done();
        });
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Async_0500
   * @tc.name    Test activateSim (slotId: number, callback: AsyncCallback): Void interface slotId
   *             exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Async_0500', 0, async function (done) {
    sim.activateSim(SIM_SLOT_ID.slotId1, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_activateSim_Async_0500 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_activateSim_Async_0500  fail, data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Async_0600
   * @tc.name    Test activateSim (slotId: number, callback: AsyncCallback): Void interface slotId
   *             exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Async_0600', 0, async function (done) {
    sim.activateSim(SIM_SLOT_ID.slotId2, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_activateSim_Async_0600 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_activateSim_Async_0600  fail, data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Promise_0100
   * @tc.name    Test activateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.activateSim(SIM_SLOT_ID.slotId11);
    } catch (err) {
      console.log('Telephony_Sim_activateSim_Promise_0100 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_activateSim_Promise_0100  fail, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Promise_0200
   * @tc.name    When the card is active, test activateSim (slotId: number, callback: Promise):
   *             void interface is set to active and expects to return true
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Promise_0200', 0, async function (done) {
    try {
      await sim.activateSim(SIM_SLOT_ID.slotId0);
      try {
        await sim.activateSim(SIM_SLOT_ID.slotId0);
        try {
          var ret = await sim.isSimActive(SIM_SLOT_ID.slotId0);
          console.log(`Telephony_Sim_activateSim_Promise_0200 isSimActive , ret : ${ret}`);
          expect(ret).assertTrue();
        } catch (err) {
          console.log(`Telephony_Sim_activateSim_Promise_0200 isSimActive fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (err) {
        console.log(`Telephony_Sim_activateSim_Promise_0200 activateSim fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_activateSim_Promise_0200 activateSim fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_activateSim_Promise_0200 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Promise_0500
   * @tc.name    Test activateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Promise_0500', 0, async function (done) {
    try {
      var data = await sim.activateSim(SIM_SLOT_ID.slotId1);
    } catch (err) {
      console.log('Telephony_Sim_activateSim_Promise_0500 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_activateSim_Promise_0500  fail, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_activateSim_Promise_0600
   * @tc.name    Test activateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_activateSim_Promise_0600', 0, async function (done) {
    try {
      var data = await sim.activateSim(SIM_SLOT_ID.slotId2);
    } catch (err) {
      console.log('Telephony_Sim_activateSim_Promise_0600 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_activateSim_Promise_0600  fail, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Async_0100
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId
   *             exception entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Async_0100', 0, async function (done) {
    sim.deactivateSim(SIM_SLOT_ID.slotId11, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_deactivateSim_Async_0100 deactivateSim finish ');
        done();
        return;
      }
      console.log(`Telephony_Sim_deactivateSim_Async_0100 data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Async_0200
   * @tc.name    When the card is active, test deactivateSim  (slotId: number, callback: AsyncCallback):
   *             void interface is set to active and expects to return true
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Async_0200', 0, async function (done) {
    try {
      await setDeactivateSimWriteToPromise();
    }
    catch (err) {
      console.log(`Telephony_Sim_isSimActive_Async_0300  fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
      sim.deactivateSim(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_deactivateSim_Async_0200 activateSim2 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.isSimActive(SIM_SLOT_ID.slotId0, (err, result) => {
          if (err) {
            console.log(`Telephony_Sim_deactivateSim_Async_0200 getSimState fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log(`Telephony_Sim_deactivateSim_Async_0200 isSimActive , result : ${result}`);
          expect(result).assertFalse();
          console.log('Telephony_Sim_deactivateSim_Async_0200 finish');
          done();
          sim.activateSim(SIM_SLOT_ID.slotId0, (err, data) => {
            if (err) {
              console.log(`Telephony_Sim_deactivateSim_Async_0200 activateSim1 fail, err : ${err.message}`);
              expect().assertFail();
              done();

            }
          });
        });
      });
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Async_0500
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId
   *             exception entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Async_0500', 0, async function (done) {
    sim.deactivateSim(SIM_SLOT_ID.slotId1, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_deactivateSim_Async_0500 deactivateSim finish ');
        done();
        return;
      }
      console.log(`Telephony_Sim_deactivateSim_Async_0500 data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Async_0600
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId
   *             exception entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Async_0600', 0, async function (done) {
    sim.deactivateSim(SIM_SLOT_ID.slotId2, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_deactivateSim_Async_0600 deactivateSim finish ');
        done();
        return;
      }
      console.log(`Telephony_Sim_deactivateSim_Async_0600 data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Promise_0100
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Promise_0100', 0, async function (done) {
    try {
      await sim.deactivateSim(SIM_SLOT_ID.slotId11);
    } catch (err) {
      console.log('Telephony_Sim_deactivateSim_Promise_0100 finish');
      done();
      return;
    }
    expect().assertFail();
    done();
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Promise_0200
   *             Telephony_Sim_deactiveSim_Promise_0200
   * @tc.name    When the card is active, test deactivateSim (slotId: number, callback: Promise):
   *             void interface is set to active and expects to return false
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Promise_0200', 0, async function (done) {
    try {
      await sim.deactivateSim(SIM_SLOT_ID.slotId0);
      try {
        await sim.deactivateSim(SIM_SLOT_ID.slotId0);
        try {

          var ret = await sim.isSimActive(SIM_SLOT_ID.slotId0);
          expect(ret).assertFalse();
          console.log(`Telephony_Sim_deactivateSim_Promise_0200 isSimActive , ret : ${ret}`);
        } catch (err) {
          console.log(`Telephony_Sim_deactivateSim_Promise_0200 getSimState fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      } catch (err) {
        console.log(`Telephony_Sim_deactivateSim_Promise_0200 getSimState fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_deactivateSim_Promise_0200 getSimState fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_deactivateSim_Promise_0200 finish');
    done();
    try {
      await sim.activateSim(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log(`Telephony_Sim_deactivateSim_Promise_0200 activateSim fail, err : ${err.message}`);
      expect().assertFail();
      done();

    }
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Promise_0500
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Promise_0500', 0, async function (done) {
    try {
      await sim.deactivateSim(SIM_SLOT_ID.slotId1);
    } catch (err) {
      console.log('Telephony_Sim_deactivateSim_Promise_0500 finish');
      done();
      return;
    }
    expect().assertFail();
    done();
  });

  /**
   *
   * @tc.number  Telephony_Sim_deactivateSim_Promise_0600
   * @tc.name    Test deactivateSim (slotId: number): Promise Interface slotId exception
   *             entry parameter, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_deactivateSim_Promise_0600', 0, async function (done) {
    try {
      await sim.deactivateSim(SIM_SLOT_ID.slotId2);
    } catch (err) {
      console.log('Telephony_Sim_deactivateSim_Promise_0600 finish');
      done();
      return;
    }
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Async_0100
   * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
   *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
   *             interface with slotId input 0. Number in 1234, called
   *             getActiveSimAccountInfoList interface to get the return value, expected
   *             return IccAccountInfo structure, uint32_t slotIndex is zero,
   *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getActiveSimAccountInfoList_Async_0100', 0, async function (done) {
    try {
      await setShowNameWriteToPromise();
      await setShowNumberWriteToPromise();
      var result = await getSimIccIdWriteToPromise();
    }
    catch (err) {
      console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0100  fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
      sim.getActiveSimAccountInfoList((err, info) => {
        if (err) {
          console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0100 error cause:${err.message}`);
        }
        for (let i = 0;i < info.length; i++) {
          if (info[i].slotIndex === SIM_SLOT_ID.slotId0) {
            expect(info[i].simId === SIM_SLOT_ID.slotId0).assertTrue();
            expect(info[i].isEsim).assertFalse();
            expect(info[i].isActive).assertTrue();
            expect(info[i].iccId === result).assertTrue();
            expect(info[i].showName === CARD_NAME.cardName).assertTrue();
            expect(info[i].showNumber === CARD_NAME.cardNumber).assertTrue();
            done();
            return;
          }
        }
        sim.activateSim(SIM_SLOT_ID.slotId0, (err, res) => {
          if (err) {
            console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0100 error cause:${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          console.log('Telephony_Sim_getActiveSimAccountInfoList_Async_0100 finish');
          done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Promise_0100
   * @tc.name    Call the setActiveSim interface with slotId input 0 and expect to return true and return 1234.
   *             Call the setShowName interface with slotId input 0 and name input 1234. Call the getShowNumber
   *             interface with slotId input 0. Number in 1234, called
   *             getActiveSimAccountInfoList interface to get the return value, expected
   *             return IccAccountInfo structure, uint32_t slotIndex is zero,
   *             U16string showName=getShowName(0), u16String showNumber=getShowNumber(0)
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getActiveSimAccountInfoList_Promise_0100', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
      await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber);
      var result = await sim.getSimIccId(SIM_SLOT_ID.slotId0);
      await sim.activateSim(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0100  fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    try {
      var info = sim.getActiveSimAccountInfoList();
      console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0100 finish');
      done();
      for (let i = 0;i < info.length; i++) {
        if (info[i].slotIndex === SIM_SLOT_ID.slotId0) {
          expect(info[i].simId === SIM_SLOT_ID.slotId0).assertTrue();
          expect(info[i].isEsim).assertFalse();
          expect(info[i].isActive).assertTrue();
          expect(info[i].iccId === result).assertTrue();
          expect(info[i].showName === CARD_NAME.cardName).assertTrue();
          expect(info[i].showNumber === CARD_NAME.cardNumber).assertTrue();
        }
      }
    } catch (err) {
      console.log(`getActiveSimAccountInfoList getActiveSimAccountInfoList error :${err.message}`);
      expect().assertFail();
      done();
      return;
    }
  });

  function setShowNameWriteToPromise() {
    return new Promise((resolve, reject)=>{
      sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName, (err) => {
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
      sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber, (err) => {
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
      sim.getSimIccId(SIM_SLOT_ID.slotId0, (err, result) => {
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
   * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Async_0200
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getActiveSimAccountInfoList_Async_0200', 0, async function (done) {
    try {
      await setShowNameWriteToPromise();
      await setShowNumberWriteToPromise();
    } catch (err) {
      console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0200  fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
        sim.deactivateSim(SIM_SLOT_ID.slotId0, (err, ret) => {
          if (err) {
            console.log('Telephony_Sim_getActiveSimAccountInfoList_Async_0200 deactivateSim  : ');
            expect().assertFail();
            done();
            return;
          }
          sim.getActiveSimAccountInfoList((err, res) => {
            if (err) {
              console.log('Telephony_Sim_getActiveSimAccountInfoList_Async_0200 getActiveSimAccountInfoList fail ');
              expect().assertFail();
              done();
              return;
            }
            console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0200 getActiveSimAccountInfoList  res : ${res}`);
            expect(res.length === 0).assertTrue();
            done();
          });
        });
    sim.activateSim(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0200 activateSim1 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0100 finish');
      done();
    });
  });

  /**
   *
   * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Promise_0200
   * @tc.name    1. Call setShowName with slotId input parameter 0 and name input parameter 1234
   *             2. Call the getShowNumber interface. SlotId input parameter 0 and number input parameter 1234
   *             3. Invoke the deactivateSim interface. The slotId input parameter is 0.
   *             4. Call getActiveSimAccountInfoList interface to get the return value, expect to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getActiveSimAccountInfoList_Promise_0200', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
      await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber);
      await sim.deactivateSim(SIM_SLOT_ID.slotId0);
    } catch (err) {
      console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0200  fail');
      expect().assertFail();
      done();
      return;
    }
    try {
      var res = await sim.getActiveSimAccountInfoList();
      console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0200 getActiveSimAccountInfoList , res : ${res}`);
      expect(res.length === 0).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0200 getActiveSimAccountInfoList fail, res : ${res}`);
      expect().assertFail();
      done();
    }
    try {
      await sim.activateSim(SIM_SLOT_ID.slotId0);
      console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0200 getActiveSimAccountInfoList finish ');
      done();
    } catch (err) {
      console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0200 activateSim fail, err : ${err.message}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Async_0100
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Async_0100', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId11, CARD_NAME.cardName, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_setShowName_Async_0100 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowName_Async_0100 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Async_0200
   * @tc.name   The setShowName interface is called, the slotId parameter is 4,
   *            the name parameter is 1234, and the err is expected
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setShowName_Async_0200', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.inputName, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_setShowName_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowName_Async_0200 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Async_0300
   * @tc.name    The setShowName interface is called, the slotId parameter is 4,
   *             the name parameter is 012345678901234567890123456789qQ@, and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Async_0300', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameNULL, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_setShowName_Async_0300 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowName_Async_0300 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Async_0600
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Async_0600', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId1, CARD_NAME.cardName, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_setShowName_Async_0600 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowName_Async_0600 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Async_0700
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Async_0700', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId2, CARD_NAME.cardName, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_setShowName_Async_0700 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowName_Async_0700 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Promise_0100
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name
   *             as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter
   *             0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Promise_0100', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId11, CARD_NAME.cardName);
    } catch (err) {
      console.log('Telephony_Sim_setShowName_Promise_0100 finish ');
      done();
      return;
    }
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Promise_0200
   * @tc.name    The setShowName interface is called, the slotId parameter is 4,
   *             the name parameter is 1234, and the err is expected
   * @tc.desc    Function test
   */

  it('Telephony_Sim_setShowName_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.inputName);
    } catch (err) {
      console.log('Telephony_Sim_setShowName_Promise_0200 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_setShowName_Promise_0200, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Promise_0300
   * @tc.name    The setShowName interface is called, the slotId parameter is 0,
   *             the name parameter is 012345678901234567890123456789qQ@, and the err is expected
   * @tc.desc    Function test
   */

  it('Telephony_Sim_setShowName_Promise_0300', 0, async function (done) {
    try {
      var data = await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameNULL);
    } catch (err) {
      console.log('Telephony_Sim_setShowName_Promise_0300 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_setShowName_Promise_0300, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Promise_0600
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name
   *             as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter
   *             0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Promise_0600', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId1, CARD_NAME.cardName);
    } catch (err) {
      console.log('Telephony_Sim_setShowName_Promise_0600 finish ');
      done();
      return;
    }
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowName_Promise_0700
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name
   *             as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter
   *             0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowName_Promise_0700', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId2, CARD_NAME.cardName);
    } catch (err) {
      console.log('Telephony_Sim_setShowName_Promise_0700 finish ');
      done();
      return;
    }
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Async_0100
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowName_Async_0100', 0, async function (done) {
    sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getShowName_Async_0100 setShowName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.getShowName(SIM_SLOT_ID.slotId0, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_getShowName_Async_0100 fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getShowName_Async_0100 , value : ${value}`);
        expect(value === CARD_NAME.cardName).assertTrue();
        console.log('Telephony_Sim_getShowName_Async_0100 finish');
        done();
        sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME_ZERO, (err, value) => {
          if (err) {
            console.log(`Telephony_Sim_getShowName_Async_0100 fail, err : ${err.message}`);
            expect().assertFail();
            done();
          }
        });
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Async_0200
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowName_Async_0200', 0, async function (done) {
    sim.getShowName(SIM_SLOT_ID.slotId0, (err, value) => {
      if (err) {
        console.log(`Telephony_Sim_getShowName_Async_0200 getShowName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getShowName_Async_0200 getShowName value : ${value}`);
      radio.getOperatorName(SIM_SLOT_ID.slotId0, (err, data) => {
        if (err) {
          console.log(`Telephony_Sim_getShowName_Async_0200 getOperatorName fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getShowName_Async_0200 getOperatorName , data : ${data}`);
        expect(value === 'Card0' || data === value).assertTrue();
        console.log('Telephony_Sim_getShowName_Async_0200 finish');
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Async_0300
   * @tc.name   The getShowName interface is called, the slotId parameter is 4,
   *            and the err is expected
   * @tc.desc   Function test
   */
  it('Telephony_Sim_getShowName_Async_0300', 0, async function (done) {
    sim.getShowName(SIM_SLOT_ID.slotId11, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_getShowName_Async_0300 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getShowName_Async_0300 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Async_0600
   * @tc.name   The getShowName interface is called, the slotId parameter is 4,
   *            and the err is expected
   * @tc.desc   Function test
   */
  it('Telephony_Sim_getShowName_Async_0600', 0, async function (done) {
    sim.getShowName(SIM_SLOT_ID.slotId1, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_getShowName_Async_0600 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getShowName_Async_0600 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Async_0700
   * @tc.name   The getShowName interface is called, the slotId parameter is 4,
   *            and the err is expected
   * @tc.desc   Function test
   */
  it('Telephony_Sim_getShowName_Async_0700', 0, async function (done) {
    sim.getShowName(SIM_SLOT_ID.slotId2, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_getShowName_Async_0700 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getShowName_Async_0700 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Promise_0100
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowName_Promise_0100', 0, async function (done) {
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
      try {
        var value = await sim.getShowName(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_getShowName_Promise_0100 getShowName , value : ${value}`);
        expect(value === CARD_NAME.cardName).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getShowName_Promise_0100 getShowName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_getShowName_Promise_0100 setShowName fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getShowName_Promise_0100 finish');
    done();
    try {
      await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME_ZERO);
    } catch (err) {
      console.log(`Telephony_Sim_getShowName_Promise_0100 setShowName fail, err : ${
        err.message}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Promise_0200
   * @tc.name    Call setShowName with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowName_Promise_0200', 0, async function (done) {
    try {
      var value = await sim.getShowName(SIM_SLOT_ID.slotId0);
      console.log(`Telephony_Sim_getShowName_Promise_0200 getShowName value : ${value}`);
      try {
        var data = await radio.getOperatorName(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_getShowName_Promise_0200 getOperatorName , data : ${data}`);
        expect((value === data) || (value === 'Card0')).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getShowName_Promise_0200 getOperatorName fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_getShowName_Promise_0200 getShowName fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getShowName_Promise_0200 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowName_Promise_0300
   * @tc.name    The getShowName interface is called, the slotId parameter is 4,
   *             and the err is expected
   * @tc.desc    Function test
   */

  it('Telephony_Sim_getShowName_Promise_0300', 0, async function (done) {
    try {
      var data = await sim.getShowName(SIM_SLOT_ID.slotId4);
    } catch (err) {
      console.log('Telephony_Sim_getShowName_Promise_0300 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getShowName_Promise_0300, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Async_0100
   * @tc.name    Call setShowNumber with slotId as the input parameter 0 and name as the input parameter 1234. Call
   *             getShowName with slotId as the input parameter 0 and expect to return true with 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowNumber_Async_0100', 0, async function (done) {
    sim.setShowNumber(SIM_SLOT_ID.slotId4, CARD_NAME.cardNumber, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_setShowNumber_Async_0100  finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowNumber_Async_0100  data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Async_0200
   * @tc.name   The setShowNumber interface is called. The slotId input parameter is 4
   *            and the number input parameter is 1234, expecting to enter err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_setShowNumber_Async_0200', 0, async function (done) {
    sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.inputName, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_setShowNumber_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowNumber_Async_0200 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Async_0300
   * @tc.name    The setShowNumber interface is called, the slotId parameter is 0,
   *            the name parameter is 012345678901234567890123456789qQ@, and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowNumber_Async_0300', 0, async function (done) {
    sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameNULL, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_setShowNumber_Async_0300 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_setShowNumber_Async_0300 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Promise_0100
   * @tc.name    Call setShowNumber, slotId is 0, number is 1234,
   *             getShowNumber is 0, slotId is 0, expect true, return 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_setShowNumber_Promise_0100', 0, async function (done) {
    try {
      var data = await sim.setShowNumber(SIM_SLOT_ID.slotId4, CARD_NAME.cardNumber);
    } catch (err) {
      console.log('Telephony_Sim_setShowNumber_Promise_0100 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_setShowNumber_Promise_0100 setShowNumber , data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Promise_0200
   * @tc.name    The getShowName interface is called, the slotId parameter is 4,
   *             Number into the 1234 refs
   *             and the err is expected
   * @tc.desc    Function test
   */

  it('Telephony_Sim_setShowNumber_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getShowName(SIM_SLOT_ID.slotId0, CARD_NAME.inputName);
    } catch (err) {
      console.log('Telephony_Sim_setShowNumber_Promise_0200 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_setShowNumber_Promise_0200, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number  Telephony_Sim_setShowNumber_Promise_0300
   * @tc.name    The setShowNumber interface is called, the slotId parameter is 0,
   *             the name parameter is 012345678901234567890123456789qQ@, and the err is expected
   * @tc.desc    Function test
   */

  it('Telephony_Sim_setShowNumber_Promise_0300', 0, async function (done) {
    try {
      var data = await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNameNULL);
    } catch (err) {
      console.log('Telephony_Sim_setShowNumber_Promise_0300 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_setShowNumber_Promise_0300, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   * @tc.number   Telephony_Sim_getShowNumber_Async_0100
   * @tc.         nameCall getShowNumber, slotId is 0, number is 1234,
   *              getShowNumber is 0, slotId is 0, expect true, return 1234
   * @tc.desc     Function test
   */
  it('Telephony_Sim_getShowNumber_Async_0100', 0, async function (done) {
    try {
      await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
      try {
        var value = await sim.getShowNumber(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_getShowNumber_Async_0100 getShowNumber, value : ${value}`);
        expect(value === CARD_NAME.cardNumber).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getShowNumber_Async_0100  getShowNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_getShowNumber_Async_0100 setShowNumber fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getShowNumber_Async_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowNumber_Async_0200
   * @tc.name    The getShowNumber interface is called, the slotId parameter is 4,
   *             the name parameter is 012345678901234567890123456789qQ@, and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowNumber_Async_0200', 0, async function (done) {
    sim.getShowNumber(SIM_SLOT_ID.slotId4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_getShowNumber_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getShowNumber_Async_0200 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getShowNumber_Promise_0100
   * @tc.name    Call getShowNumber, slotId is 0, number is 1234,
   *             getShowNumber is 0, slotId is 0, expect true, return 1234
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getShowNumber_Promise_0100', 0, async function (done) {
    try {
      await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber);
      try {
        var value = await sim.getShowNumber(SIM_SLOT_ID.slotId0);
        console.log(`Telephony_Sim_getShowNumber_Promise_0100 getShowNumber, value : ${value}`);
        expect(value === CARD_NAME.cardNumber).assertTrue();
      } catch (err) {
        console.log(`Telephony_Sim_getShowNumber_Promise_0100 getShowNumber fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_getShowNumber_Promise_0100 setShowNumber fail, err : ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getShowNumber_Promise_0100 finish');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_getShowNumber_Promise_0300
   * @tc.name    The getShowNumber interface is called, the slotId parameter is 4,
   *             and the err is expected
   * @tc.desc    Function test
   */

  it('Telephony_Sim_getShowNumber_Promise_0300', 0, async function (done) {
    try {
      var data = await sim.getShowNumber(SIM_SLOT_ID.slotId4);
    } catch (err) {
      console.log('Telephony_Sim_getShowNumber_Promise_0300 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getShowNumber_Promise_0300, data : ${data}`);
    expect().assertFail();
    done();
  });

  /**
   *
   * @tc.number  Telephony_Sim_getOperatorConfigs_Async_0100
   * @tc.name    The slotId parameter is 0 and the OperatorConfig structure is not expected to be empty
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getOperatorConfigs_Async_0100', 0, async function (done) {
    sim.getOperatorConfigs(SIM_SLOT_ID.slotId0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getOperatorConfigs_Async_0100 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(Object.keys(data).length !== 0).assertTrue();
      console.log('Telephony_Sim_getOperatorConfigs_Async_0100 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getOperatorConfigs_Async_0200
   * @tc.name    The getOperatorConfig interface is called, the slotId parameter is 4,
   *             and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getOperatorConfigs_Async_0200', 0, async function (done) {
    sim.getOperatorConfigs(SIM_SLOT_ID.slotId4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log('Telephony_Sim_getOperatorConfigs_Async_0200 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_getOperatorConfigs_Async_0200 , data : ${data}`);
      expect().assertFail();
      done();
    });
  });

  /**
   *
   * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_0100
   * @tc.name    The slotId parameter is 0 and the OperatorConfig structure is not expected to be empty
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getOperatorConfigs_Promise_0100', 0, async function (done) {
    try{
      var data = await sim.getOperatorConfigs(SIM_SLOT_ID.slotId0);
      expect(Object.keys(data).length !== 0).assertTrue();
    }
      catch (err) {
        console.log(`Telephony_Sim_getOperatorConfigs_Promise_0100 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log('Telephony_Sim_getOperatorConfigs_Promise_0100 finish');
      done();
  });

  /**
   * @tc.number  Telephony_Sim_getOperatorConfig_Promise_0200
   * @tc.name    The getOperatorConfig interface is called, the slotId parameter is 4,
   *             and the err is expected
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getOperatorConfig_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getOperatorConfigs(SIM_SLOT_ID.slotId4);
    } catch (err) {
      console.log('Telephony_Sim_getOperatorConfig_Promise_0200 finish');
      done();
      return;
    }
    console.log(`Telephony_Sim_getOperatorConfig_Promise_0200, data : ${data}`);
    expect().assertFail();
    done();
  });
});