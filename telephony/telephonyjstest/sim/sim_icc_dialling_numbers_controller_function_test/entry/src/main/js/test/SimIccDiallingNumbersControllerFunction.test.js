// Copyright (C) 2021 Huawei Device Co., Ltd.
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not  use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

import sim from '@ohos.telephony.sim';
import {SIM_SLOT_ID, TYPE_AND_INDEX} from './lib/Const.js';
import {describe, it, expect} from 'deccjsunit/index';

describe('SimIccDiallingNumbersControllerFunction', function () {
  /**
   * @tc.number Telephony_Sim_queryIccDiallingNumbers_Async_0100
   * @tc.name   Step:
   *            1. Call the delIccDiallingNumbers(slotId: 0, type: 1, index: 1).
   *            2. Call the delIccDiallingNumbers(slotId: 0, type: 2, index: 1).
   *            3. Call the AddIccDiallingNumbers(slotId: 0, type: 1, DiallingNumbersInfo: {recordNumber: 1,
   *               alphaTag: 'test',number: '12345678'}).
   *            4. Call the queryIccDiallingNumbers(slotId: 0, type: 1, callback)
   *            Validate:
   *            4. callback function return obejct {recordNumber: 1, alphaTag: 'test',number: '12345678'}
   * @tc.desc   Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0100', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, async function (error, data) {
      if (error) {
        console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 first query error: ${error.message}`);
        done();
        return;
      }

      console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 first query data: ${JSON.stringify(data)}`);

      if (data.length !== 0) {
        for (let i = 0;i < data.length;i++) {
          if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
            try {
              console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 delete ${data[i].recordNumber}`);
              await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
            } catch (error) {
              console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 delete fail, error: ${error.message}`);
            }
          }
        }
      }

      const diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

      try {
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0100 add');
      } catch (error) {
        console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 add fail, error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0100 second query start');
        if (error) {
          console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 second query error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 second query result: ${JSON.stringify(data)}`);
        for (let i = 0;i < data.length;i++) {
          console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0100 for loop data: ${JSON.stringify(data[i])}`);
          if (data[i].recordNumber === TYPE_AND_INDEX.index1) {
            console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0100 finish');
            expect(data[i].recordNumber === diallingNumbersInfo.recordNumber).assertTrue();
            expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
            expect(data[i].number === diallingNumbersInfo.number).assertTrue();
            done();
            return;
          }
        }
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0100 test fail.');
        expect().assertFail();
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0200
   * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
   *             interface subId exception input parameter, expected to return []
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0200', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId11, TYPE_AND_INDEX.type1, (error, data) => {
      if (error) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0200 finish');
        expect().assertFail();
      } else if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0200 finish');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0200 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_queryIccDiallingNumbers_Async_0300
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0300', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, async function (error, data) {
      if (error) {
        console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0300 first query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0300 first query data: ${JSON.stringify(data)}`);

      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          try {
            await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
            console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0300 delete ${data[i].recordNumber}`);
          } catch (error) {
            console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0300 delete fail, error: ${error.message}`);
          }
        }
      }

      const diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

      try {
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0300 add');
      } catch (error) {
        console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0300 add error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, (error, data) => {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0300 second query');
        if (error) {
          console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0300 second query error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        for (let i = 0;i < data.length;i++) {
          if (data[i].recordNumber === TYPE_AND_INDEX.index1) {
            expect(data[i].recordNumber === diallingNumbersInfo.recordNumber).assertTrue();
            expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
            expect(data[i].number === diallingNumbersInfo.number).assertTrue();
            console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0300 finish');
            done();
            return;
          }
        }
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0300 test fail.');
        expect().assertFail();
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0400
   * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>)
   *             Void The interface type parameter is an exception parameter and is expected to return ''
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0400', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_MINUS_ONE, (error, data) => {
      if (error) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0400 error.');
        expect().assertFail();
      } else if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0400 finish.');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0400 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0700
   * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
   *             interface subId exception input parameter, expected to return []
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0700', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId1, TYPE_AND_INDEX.type1, (error, data) => {
      if (error) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0700 finish');
        expect().assertFail();
      } else if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0700 finish');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0700 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0800
   * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
   *             interface subId exception input parameter, expected to return []
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0800', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId2, TYPE_AND_INDEX.type1, (error, data) => {
      if (error) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0800 finish');
        expect().assertFail();
      } else if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0800 finish');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0800 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0900
   * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
   *             interface subId exception input parameter, expected to return []
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_0900', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_0, (error, data) => {
      if (error) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0900 finish');
        expect().assertFail();
      } else if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0900 finish');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_0900 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_1000
   * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
   *             interface subId exception input parameter, expected to return []
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Async_1000', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_3, (error, data) => {
      if (error) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_1000 finish');
        expect().assertFail();
      } else if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_1000 finish');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Async_1000 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_queryIccDiallingNumbers_Promise_0100
   * @tc.name     queryIccDiallingNumbers (slotId: Number, type: number) Promise> Interface subId is a normal
   *              input parameter and expects to return structure assertions
   *              like recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0100', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0100 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0100 query or delete error: ${JSON.stringify(error)}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0100 add.');
    } catch (error) {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0100 add fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0100 seconed query result: ${JSON.stringify(data)}`);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === TYPE_AND_INDEX.index1) {
          expect(data[i].recordNumber === diallingNumbersInfo.recordNumber).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfo.number).assertTrue();
          console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0100 test finish.');
          done();
          return;
        }
      }
      // test fail.
      console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0100 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0100 second query error:${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0200
   * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
   *             Expected return ''
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0200', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId11, TYPE_AND_INDEX.type1).then(data => {
      if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0200 test finish.');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0200 test fail.');
        expect().assertFail();
      }
      done();
    }).catch(error => {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0200 error:${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0300
   * @tc.name    queryIccDiallingNumbers (slotId: Number, Type: Number): Promise>
   *             Expected structure assertions are recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0300', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
          console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0300 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
      console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0300 add.');
    } catch (error) {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0300 add fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2).then(data => {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0300 second query result: ${JSON.stringify(data)}`);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === TYPE_AND_INDEX.index1) {
          expect(data[i].recordNumber === diallingNumbersInfo.recordNumber).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfo.number).assertTrue();
          console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0300 test finish.');
          done();
          return;
        }
      }
      // test fail.
      console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0300 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0300 second query error: ${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0400
   * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
   *             Expected return returns null
   * @tc.desc    Function test
   */
  it('Telephony_Sim_queryIccDiallingNumbers_Promise_0400', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_MINUS_ONE).then(function (data) {
      if (data.length === 0) {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0400 test finish.');
      } else {
        console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0400 test fail.');
        expect().assertFail();
      }
      done();
    }).catch(error => {
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0400 query error: ${error.message}`);
      expect().assertFail();
      done();
    });

  });

  /**
   * @tc.number  elephony_Sim_queryIccDiallingNumbers_Promise_0700
   * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
   *             Expected return []
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_0700', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId1, TYPE_AND_INDEX.type1).then(data => {
      if (data.length === 0) {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_0700 test finish.');
      } else {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_0700 test fail.');
        expect().assertFail();
      }
      done();
    }).catch(error => {
      console.log(`telephony_Sim_queryIccDiallingNumbers_Promise_0700 error:${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  elephony_Sim_queryIccDiallingNumbers_Promise_0800
   * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
   *             Expected return []
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_0800', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId2, TYPE_AND_INDEX.type1).then(data => {
      if (data.length === 0) {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_0800 test finish.');
      } else {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_0800 test fail.');
        expect().assertFail();
      }
      done();
    }).catch(error => {
      console.log(`telephony_Sim_queryIccDiallingNumbers_Promise_0800 error:${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  telephony_Sim_queryIccDiallingNumbers_Promise_0900
   * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
   *             Expected return []
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_0900', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_0).then(data => {
      if (data.length === 0) {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_0900 test finish.');
      } else {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_0900 test fail.');
        expect().assertFail();
      }
      done();
    }).catch(error => {
      console.log(`telephony_Sim_queryIccDiallingNumbers_Promise_0900 error:${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  telephony_Sim_queryIccDiallingNumbers_Promise_1000
   * @tc.name    queryIccDiallingNumbers (slotId: Number, type: Number): Promise>
   *             Expected return []
   * @tc.desc    Function test
   */
  it('telephony_Sim_queryIccDiallingNumbers_Promise_1000', 0, async function (done) {
    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_3).then(data => {
      if (data.length === 0) {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_1000 test finish.');
      } else {
        console.log('telephony_Sim_queryIccDiallingNumbers_Promise_1000 test fail.');
        expect().assertFail();
      }
      done();
    }).catch(error => {
      console.log(`telephony_Sim_queryIccDiallingNumbers_Promise_1000 error:${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0100
   * @tc.name    addIccDiallingNumbers (slotId: Number, Type: Number, diallingNumbers: DiallingNumbersInfo,
   *             callback:   AsyncCallback< Boolean >):void subId Expect the last
   *             array structure returned in Step 4 to be recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0100', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0100 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0100 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, function (error) {
      if (error) {
        console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0100 add error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
        if (error) {
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0100 second query error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        for (let i = 0;i < data.length;i++) {
          if (data[i].recordNumber === 1) {
            expect(data[i].recordNumber === 1).assertTrue();
            expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
            expect(data[i].number === diallingNumbersInfo.number).assertTrue();
            console.log('Telephony_Sim_addIccDiallingNumbers_Async_0100 finish');
            done();
            return;
          }
        }
        // test fail
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0100 test fail.');
        expect().assertFail();
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0200
   * @tc.name    addIccDiallingNumbers (slotId: Number, Type: Number, diallingNumbers:
   *             DiallingNumbersInfo, callback: AsyncCallback< Boolean >):void subId
   *             Expect step 3 to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0200', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0200 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId11, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0200 finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0200 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0300
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *             type parameter 0 DiallingNumbersInfo struct input arguments
   *             queryIccDiallingNumbers; slotId = slotId; type = 0; Expected Step 3 Return true,Step 4
   *             structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0300', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0300 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo, function (error) {
      if (error) {
        console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0300 add error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, (error, data) => {
        if (error) {
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0300 query error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        for (let i = 0;i < data.length;i++) {
          if (data[i].recordNumber === 1) {
            expect(data[i].recordNumber === 1).assertTrue();
            expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
            expect(data[i].number === diallingNumbersInfo.number).assertTrue();
            console.log('Telephony_Sim_addIccDiallingNumbers_Async_0300 finish');
            done();
            return;
          }
        }
        // test fail
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0300 test fail.');
        expect().assertFail();
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0400
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *             type parameter 4 DiallingNumbersInfo struct input arguments
   *             queryIccDiallingNumbers; slotId = slotId; type = 0; Expected Step 3 Go to err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0400', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0400 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_MINUS_ONE, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0400 finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0400 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0500
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *             type parameter 0 DiallingNumbersInfo struct input arguments
   *             queryIccDiallingNumbers; slotId = slotId; type = 0; Expected Step 3 Return true,Step 4
   *             structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0500', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0500 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0500 query or delete error: ${error.message}`);
    }

    const diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: ''};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
      if (error) {
        console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0500 first add error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
        if (error) {
          console.log('Telephony_Sim_addIccDiallingNumbers_Async_0500 test finish.');
        } else {
          console.log('Telephony_Sim_addIccDiallingNumbers_Async_0500 test fail.');
          expect().assertFail();
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0600
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *             type parameter 0 DiallingNumbersInfo struct input arguments
   *             queryIccDiallingNumbers; slotId = slotId; type = 0; Expected Step 3 Return true,Step 4
   *             structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0600', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0600 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0600 query or delete error: ${error.message}`);
    }

    const diallingNumbersInfo = {recordNumber: 1, alphaTag: '', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
      if (error) {
        console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0600 first query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
        if (error) {
          console.log('Telephony_Sim_addIccDiallingNumbers_Async_0600 test finish.');
        } else {
          console.log('Telephony_Sim_addIccDiallingNumbers_Async_0600 test fail.');
          expect().assertFail();
        }
        done();
      });
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0700
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *             type parameter 0 DiallingNumbersInfo struct input arguments
   *             queryIccDiallingNumbers; slotId = slotId; type = 0; Expected Step 3 Return true,Step 4
   *             structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_0700', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0700 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0700 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: '', number: ''};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0700 test finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_0700 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1000
   * @tc.name    addIccDiallingNumbers (slotId: Number, Type: Number, diallingNumbers:
   *             DiallingNumbersInfo, callback: AsyncCallback< Boolean >):void subId
   *             Expect step 3 to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1000', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1000 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1000 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId1, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1000 finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1000 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1100
   * @tc.name    addIccDiallingNumbers (slotId: Number, Type: Number, diallingNumbers:
   *             DiallingNumbersInfo, callback: AsyncCallback< Boolean >):void subId
   *             Expect step 3 to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1100', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1100 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1100 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId2, TYPE_AND_INDEX.type1, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1100 finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1100 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1200
   * @tc.name    addIccDiallingNumbers (slotId: Number, Type: Number, diallingNumbers:
   *             DiallingNumbersInfo, callback: AsyncCallback< Boolean >):void subId
   *             Expect step 3 to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1200', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1200 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_0, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1200 finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1200 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_1300
   * @tc.name    addIccDiallingNumbers (slotId: Number, Type: Number, diallingNumbers:
   *             DiallingNumbersInfo, callback: AsyncCallback< Boolean >):void subId
   *             Expect step 3 to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Async_1300', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Async_1300 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_3, diallingNumbersInfo, error => {
      if (error) {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1300 finish.');
      } else {
        console.log('Telephony_Sim_addIccDiallingNumbers_Async_1300 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  // @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0100
  // @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
  //              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
  //              3. Call the addIccDiallingNumbers interface, slotId parameter 1,
  //              type parameter 0 DiallingNumbersInfo struct input arguments
  //              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
  //              structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
  // @tc.desc     Function test
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0100', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0100 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0100 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0100 add');
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0100 add error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
      if (error) {
        console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0100 second query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1) {
          expect(data[i].recordNumber === 1).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfo.number).assertTrue();
          console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0100 finish');
          done();
          return;
        }
      }
      // test fail
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0100 test fail.');
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0200
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 4,
   *              type parameter 0 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0200', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0200 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId11, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0200 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0200 test finish.');
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0300
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *              type parameter 1 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
*/
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0300', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0300 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0300 add');
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0300 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, (error, data) => {
      if (error) {
        console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0300 second query error: ${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1) {
          expect(data[i].recordNumber === 1).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfo.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfo.number).assertTrue();
          console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0300 finish');
          done();
          return;
        }
      }
      // test fail
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0300 test fail.');
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0400
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *              type parameter 4 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =4,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0400', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0400 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_MINUS_ONE, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0400 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0400 test finish.');
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0500
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *                 DiallingNumbersInfo struct input arguments < eFID =0,recordNumber_=1,alphaTag_=test,
   *                 number_=" ",emails="">
   *              4. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *                 DiallingNumbersInfo structure input parameters < eFID =0,recordNumber_=1,
   *                 alphaTag_=test,number_=" ",emails="">, expect Step 3 to return true
   *              Step 4 Go to err
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0500', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0500 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0500 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: ''};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0500 add');
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0500 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0500 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0500 test finish.');
    }

    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0600
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *              DiallingNumbersInfo struct input arguments < eFID =0,recordNumber_=1,alphaTag_=test,
   *              number_=" ",emails="">
   *              4. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *              DiallingNumbersInfo structure input parameters < eFID =0,recordNumber_=1,alphaTag_=" ",
   *              number_=" ",emails="">, expect Step 3 to return true
   *              Step 4 Go to err
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0600', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0600 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0600 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: '', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0600 add');
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0600 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0600 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0600 test finish');
    }

    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0700
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *              type parameter 0 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =0,recordNumber_=1,alphaTag_="",number_="", and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_0700', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0700 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0700 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: '', number: ''};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0700 test fail');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_0700 test finish.');
    }

    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_1000
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 1,
   *              type parameter 1 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1000', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1000 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1000 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId1, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1000 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1000 test finish.');
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_1100
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 2,
   *              type parameter 1 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1100', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1100 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1100 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId2, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1100 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1100 test finish.');
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_1200
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 0,
   *              type parameter 0 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1200', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1200 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_0, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1200 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1200 test finish.');
    }
    done();
  });

  /**
   * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_1300
   * @tc.name     1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *              2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *              3. Call the addIccDiallingNumbers interface, slotId parameter 0,
   *              type parameter 3 DiallingNumbersInfo struct input arguments
   *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
   *              structure assertions are eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678, and emails="".
   * @tc.desc     Function test
   */
  it('Telephony_Sim_addIccDiallingNumbers_Promise_1300', 0, async function (done) {
    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_1300 query or delete error: ${error.message}`);
    }

    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_3, diallingNumbersInfo);
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1300 test fail.');
      expect().assertFail();
    } catch (error) {
      console.log('Telephony_Sim_addIccDiallingNumbers_Promise_1300 test finish.');
    }
    done();
  });

  /**
     *
   * @tc.number   Telephony_Sim_delIccDiallingNumbers _Async_0100
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0100', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;
    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 first query fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    // find recordNumber which alphaTag is 'test'
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0100 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 second query result: ${JSON.stringify(_data)}`);
        let tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber, function (error) {
      if (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 delete fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, function (error, data) {
        if (error) {
          console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0100 third query fail, error${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        let recordNumbers2 = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        if (recordNumbers2.indexOf(newRecordNumber) > 0) {
          console.log('Telephony_Sim_delIccDiallingNumbers_Async_0100 delete fail, number still exist.');
          expect().assertFail();
          done();
          return;
        }
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0100 finish.');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers _Async_0200
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0200', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0200 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0200 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0200 first query fail, error:${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0200 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0200 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0200 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0200 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0200 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId11, TYPE_AND_INDEX.type1, newRecordNumber, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0200 finish.');
      } else {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0200 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0300
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0300', 0, async function (done) {
    let recordNumbers = [];

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0300 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0300 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0300 first query error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    let noExistIndex = Math.max.apply(recordNumbers) + 1;

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, noExistIndex, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0300 test finish.');
      } else {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0300 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0400
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0400', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 first query error: ${error.message}`);
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
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0400 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 second query error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, newRecordNumber, function (error) {
      if (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 delete fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, function (error, data) {
        if (error) {
          console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0400 third query error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        const recordNumbers2 = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        if (recordNumbers2.indexOf(newRecordNumber) > 0) {
          console.log('Telephony_Sim_delIccDiallingNumbers_Async_0400 delete fail, number still exist.');
          expect().assertFail();
          done();
          return;
        }
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0400 finish.');
        done();
      });
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0500
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0500', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: ''};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0500 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0500 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0500 first query error: ${error.message}`);
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
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0500 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0500 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0500 second query result: ${JSON.stringify(_data)}`);
        let tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0500 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0500 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_MINUS_ONE, newRecordNumber, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0500 test finish.');
        done();
        return;
      }
      console.log('Telephony_Sim_delIccDiallingNumbers_Async_0500 test fail.');
      expect().assertFail();
      done();
      return;
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0800
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0800', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0800 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0800 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0800 first query fail, error:${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0800 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0800 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0800 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0800 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0800 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId1, TYPE_AND_INDEX.type1, newRecordNumber, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0800 finish.');
      } else {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0800 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0900
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_0900', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0900 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0900 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0900 first query fail, error:${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0900 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0900 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0900 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0900 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0900 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId2, TYPE_AND_INDEX.type1, newRecordNumber, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0900 finish.');
      } else {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_0900 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_1000
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1000', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1000 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1000 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1000 first query fail, error:${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1000 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1000 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1000 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1000 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1000 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_0, newRecordNumber, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1000 finish.');
      } else {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1000 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_1100
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Async_1100', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1100 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1100 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1100 first query fail, error:${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1100 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1100 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1100 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1100 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Async_1100 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_3, newRecordNumber, error => {
      if (error) {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1100 finish.');
      } else {
        console.log('Telephony_Sim_delIccDiallingNumbers_Async_1100 test fail.');
        expect().assertFail();
      }
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0100
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0100', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 first query fail, error: ${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0100 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    try {
      await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber);
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0100 delete');
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 delete fail. error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === newRecordNumber) {
          console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0100 delete fail, number still exist.');
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0100 test finish.');
      done();
    }).catch(error => {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0100 third query fail, error: ${error.message}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0200
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0200', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0200 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0200 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0200 first query fail, error${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0200 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0200 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0200 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0200 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0200 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId11, TYPE_AND_INDEX.type1, newRecordNumber).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0200 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0200 test finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0300
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0300', 0, async function (done) {
    let recordNumbers = [];

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0300 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0300 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0300 query fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    let noExistIndex = Math.max.apply(recordNumbers) + 1;

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, noExistIndex).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0300 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0300 test finish.');
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0400
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0400', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 first query fail, error${error.message}`);
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
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0400 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 add fail, error${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 first query result: ${JSON.stringify(data)}`);
        const tmp = data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    try {
      await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, newRecordNumber);
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0400 delete');
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0400 delete fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2).then(data => {
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === newRecordNumber) {
          console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0400 delete fail, number still exist.');
          expect().assertFail();
          done();
          return;
        }
      }
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0400 test finish.');
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0400 test fail.');
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0500
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0500', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: ''};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0500 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0500 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0500 first query fail, error:${error.message}`);
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
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0500 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0500 add fail, error${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0500 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0500 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0500 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_MINUS_ONE, newRecordNumber).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0500 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0500 test finish.');
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0800
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0800', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0800 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0800 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0800 first query fail, error${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0800 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0800 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0800 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0800 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0800 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId1, TYPE_AND_INDEX.type1, newRecordNumber).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0800 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0800 test finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0900
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_0900', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0900 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0900 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0900 first query fail, error${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0900 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0900 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0900 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0900 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0900 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId2, TYPE_AND_INDEX.type1, newRecordNumber).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0900 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0900 test finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1000
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1000', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1000 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1000 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1000 first query fail, error${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1000 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1000 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1000 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1000 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1000 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_0, newRecordNumber).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1000 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1000 test finish');
      done();
    });
  });

  /**
   * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_1100
   * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void Interface query
   *              type is fixed dial contact, expect to return structure
   *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
   * @tc.desc     Function test
   */
  it('Telephony_Sim_delIccDiallingNumbers_Promise_1100', 0, async function (done) {
    let newRecordNumber;
    let recordNumbers = [];
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let data;

    try {
      data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1100 first query result: ${JSON.stringify(data)}`);
      recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1100 recordNumbers: ${JSON.stringify(recordNumbers)}`);
    } catch (error) {
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1100 first query fail, error${error.message}`);
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
        console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1100 add');
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1100 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }

      try {
        const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1100 second query result: ${JSON.stringify(_data)}`);
        const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
          .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
        newRecordNumber = tmp[0];
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1100 recordNumber: ${newRecordNumber}`);
      } catch (error) {
        console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_1100 second query fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
    }

    sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.TYPE_3, newRecordNumber).then(() => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1100 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_1100 test finish');
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Async_0100
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments SlotId =1, type =0, index =1, DiallingNumbersInfo < eFID =0,
   *            recordNumber_=1, alphaTag_=tset_Update,number_=12345678_Update,emails="">
   *            5. Call queryIccDiallingNumbers with slotId parameter 1, type parameter 0, and expectation
   *            1.Step 4 Return true
   *            2. Step 5 Return efid=0,recordNumber_=1, alphaTag_=tset_Update,number_=12345678_Update, and emails="".
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0100', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0100 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0100 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0100 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0100 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, function (error) {
        if (error) {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0100 update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
          for (let i = 0;i < data.length;i++) {
            if (data[i].recordNumber === 1) {
              expect(data[i].recordNumber === 1).assertTrue();
              expect(data[i].alphaTag === diallingNumbersInfoUpdate.alphaTag).assertTrue();
              expect(data[i].number === diallingNumbersInfoUpdate.number).assertTrue();
              console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0100 test finish.');
              done();
              return;
            }
          }
          expect().assertFail();
          done();
        }).catch(error => {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0100 second query fail, error:${error.message}`);
          expect().assertFail();
          done();
        });
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_0200
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type
   *             parameter 0 DiallingNumbersInfo struct input arguments
   *             SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *             number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0200', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0200 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0200 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0200 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId11,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0200 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0200 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Async_0300
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call updateIccDiallingNumbers (slotId 1, type 0, index 1) DiallingNumbersInfo
   *            structure input parameters
   *            < eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678,emails=""> Expected Step 3 Enter err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0300', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0300 query or delete error: ${error.message}`);
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0300 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0300 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Async_0400
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 1, DiallingNumbersInfo
   *            struct input arguments < eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678,emails="">
   *            SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1 alphaTag_=tset_Update,
   *            number_=12345678_Update,emails="">
   *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1 expectation1.
   *            Step 4 Return true
   *            Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1, alphaTag_=tset_Update,
   *            number_=12345678_Update, and emails="".
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0400', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0400 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0400 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0400 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type2,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, function (error) {
        if (error) {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0400 update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2).then(data => {
          for (let i = 0;i < data.length;i++) {
            if (data[i].recordNumber === 1) {
              expect(data[i].recordNumber === 1).assertTrue();
              expect(data[i].alphaTag === diallingNumbersInfoUpdate.alphaTag).assertTrue();
              expect(data[i].number === diallingNumbersInfoUpdate.number).assertTrue();
              console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0400 test finish.');
              done();
              return;
            }
          }
          expect().assertFail();
          done();
        }).catch(error => {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0400 second query fail, error:${error.message}`);
          expect().assertFail();
          done();
        });
      });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Async_0500
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 1, DiallingNumbersInfo
   *            struct input arguments < eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678,emails="">
   *            SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1 alphaTag_=tset_Update,
   *            number_=12345678_Update,emails="">
   *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1 expectation 1.
   *            Step 4 Return true
   *            Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1, alphaTag_=tset_Update,
   *            number_=12345678_Update, and emails="".
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0500', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0500 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0500 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0500 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0500 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.TYPE_MINUS_ONE,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0500 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0500 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_0600
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0, DiallingNumbersInfo
   *             struct input arguments < eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678,emails="">
   *             SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1
   *             alphaTag_=tset_Update,number_=12345678_Update,emails="">
   *             5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1 expectation 1.
   *             Step 4 Return true
   *             Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1, alphaTag_=tset_Update,
   *             number_=null, and emails="".
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0600', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: ''};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0600 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0600 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0600 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0600 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, function (error) {
        if (error) {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0600 update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
          for (let i = 0;i < data.length;i++) {
            if (data[i].recordNumber === 1) {
              expect(data[i].recordNumber === 1).assertTrue();
              expect(data[i].alphaTag === 'test_Update').assertTrue();
              expect(data[i].number === '').assertTrue();
              console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0600 test finish.');
              done();
              return;
            }
          }
          expect().assertFail();
          done();
        }).catch(error => {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0600 second query fail, error:${error.message}`);
          expect().assertFail();
          done();
        });
      });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Async_0700
   *            @tc.name 1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId,
   *            0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =1, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_=NULL,
   *            number_=12345678,emails="">
   *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 0 expecting 1.
   *            Step 2 Return true
   *            Step 3 Return efid=0,recordNumber_=1, alphaTag_=NULL,number_=12345678, and emails="".
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0700', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: '', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0700 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0700 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0700 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0700 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, function (error) {
        if (error) {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0700 update fail, error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
          for (let i = 0;i < data.length;i++) {
            if (data[i].recordNumber === 1) {
              expect(data[i].recordNumber === 1).assertTrue();
              expect(data[i].alphaTag === diallingNumbersInfoUpdate.alphaTag).assertTrue();
              expect(data[i].number === diallingNumbersInfoUpdate.number).assertTrue();
              console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0700 test finish.');
              done();
              return;
            }
          }
          expect().assertFail();
          done();
        }).catch(error => {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0700 second query fail, error:${error.message}`);
          expect().assertFail();
          done();
        });
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_0800
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call updateIccDiallingNumbers (slotId 1, type 0, index 1) DiallingNumbersInfo
   *             structure input parameters
   *             < eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678,emails=""> Expected Step 3 Enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0800', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0800 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0800 query or delete error: ${error.message}`);
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0800 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0800 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_0900
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call updateIccDiallingNumbers (slotId 1, type 0, index 1) DiallingNumbersInfo
   *             structure input parameters
   *             < eFID =0,recordNumber_=1,alphaTag_=null,number_=null,emails=""> Expected Step 3 Enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_0900', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: '', number: ''};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0900 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_0900 query or delete error: ${error.message}`);
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0900 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0900 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_1200
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type
   *             parameter 0 DiallingNumbersInfo struct input arguments
   *             SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *             number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1200', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1200 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1200 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1200 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId1,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1200 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1200 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_1300
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type
   *             parameter 0 DiallingNumbersInfo struct input arguments
   *             SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *             number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1300', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1300 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1300 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1300 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId2,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1300 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1300 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_1400
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type
   *             parameter 0 DiallingNumbersInfo struct input arguments
   *             SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *             number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1400', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1400 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1400 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1400 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.TYPE_0,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1400 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1400 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_1500
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type
   *             parameter 0 DiallingNumbersInfo struct input arguments
   *             SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *             number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1500', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1500 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1500 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1500 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1500 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.TYPE_3,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1500 test finish.');
          done();
          return;
        }
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1500 test fail.');
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_1700
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type
   *             parameter 0 DiallingNumbersInfo struct input arguments
   *             SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *             number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Async_1700', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 2, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1700 delete ${data[i].recordNumber}`);
        }
      }
      const data2 = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data2.length;i++) {
        if (data2[i].recordNumber === 1 || data2[i].alphaTag === 'test' || data2[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data2[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1700 delete ${data2[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1700 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1700 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1700 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1, error => {
        if (error) {
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1700 test fail.');
          expect().assertFail();
          done();
        }
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
          if (data.length === 0) {
            console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1700 queryIccDiallingNumbers test fail.');
            expect().assertFail();
            done();
          }
          let isExist = data.some(item => {
            return item.recordNumber === 1 && item.alphaTa === 'test_Update' && item.number === '12345678_Update';
          });
          expect(isExist).assertTrue();
          done();
        });
      });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0100
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =1, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1,
   *            alphaTag_=tset_Update,number_=12345678_Update,emails="">
   *            5. Call queryIccDiallingNumbers with slotId parameter 1, type parameter 0, and expectation 1.
   *            Step 4 Return true
   *            2. Step 5 Return efid=0,recordNumber_=1, alphaTag_=tset_Update,number_=12345678_Update, and emails="".
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0100', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0100 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0100 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0100 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0100 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfoUpdate,
        TYPE_AND_INDEX.index1);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0100 update');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0100 update fail, error: ${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1) {
          expect(data[i].recordNumber === 1).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfoUpdate.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfoUpdate.number).assertTrue();
          console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0100 test finish.');
          done();
          return;
        }
      }
      expect().assertFail();
      done();
    }).catch(error => {
      console.log(
        `Telephony_Sim_updateIccDiallingNumbers_Promise_0100 second query fail, error: ${error.message}`
      );
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0200
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *            number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0200', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0200 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0200 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0100 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId11,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0200 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0200 test finish.');
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0300
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call updateIccDiallingNumbers (slotId 1, type 0, index 1) DiallingNumbersInfo
   *            structure input parameters
   *            < eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678,emails=""> Expected Step 3 Enter err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0300', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0300 query or delete error: ${error.message}`);
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0300 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0300 test finish.');
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0400
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 1, DiallingNumbersInfo
   *            struct input arguments < eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678,emails="">
   *            SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1 alphaTag_=tset_Update,
   *            number_=12345678_Update,emails="">
   *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1 expectation 1.
   *            Step 4 Return true
   *            Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1, alphaTag_=tset_Update,
   *            number_=12345678_Update, and emails="".
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0400', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0400 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0400 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0400 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfoUpdate,
        TYPE_AND_INDEX.index1);
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0400 update fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2).then(data => {
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1) {
          expect(data[i].recordNumber === 1).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfoUpdate.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfoUpdate.number).assertTrue();
          console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0400 test finish.');
          done();
          return;
        }
      }
      expect().assertFail();
      done();
    }).catch(error => {
      console.log(
        `Telephony_Sim_updateIccDiallingNumbers_Promise_0400 second query fail, error: ${error.message}`
      );
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0500
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *            number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0500', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0500 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0500 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0500 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0100 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.TYPE_MINUS_ONE,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0500 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log(
        'Telephony_Sim_updateIccDiallingNumbers_Promise_0500 test finish.'
      );
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Promise_0600
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0, DiallingNumbersInfo
   *             struct input arguments < eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678,emails="">
   *             SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1
   *             alphaTag_=tset_Update,number_=12345678_Update,emails="">
   *             5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1
   *             expectation 1. Step 4 Return true
   *             Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1, alphaTag_=tset_Update,
   *             number_=null, and emails="".
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0600', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: ''};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0600 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0600 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0600 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0600 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfoUpdate,
        TYPE_AND_INDEX.index1);
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0600 update fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1) {
          expect(data[i].recordNumber === 1).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfoUpdate.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfoUpdate.number).assertTrue();
          console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0600 test finish.');
          done();
          return;
        }
      }
      expect().assertFail();
      done();
    }).catch(error => {
      console.log(
        `Telephony_Sim_updateIccDiallingNumbers_Promise_0600 second query fail, error: ${error.message}`
      );
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_0700
   *            @tc.name 1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId,
   *            0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *             DiallingNumbersInfo struct input arguments
   *            SlotId =1, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1,
   *            alphaTag_=NULL,number_=12345678,emails="">
   *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 0 expecting 1.
   *            Step 2 Return true
   *            Step 3 Return efid=0,recordNumber_=1, alphaTag_=NULL,number_=12345678, and emails="".
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0700', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: '', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0700 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0700 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0700 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0700 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfoUpdate,
        TYPE_AND_INDEX.index1);
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0700 update fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1).then(data => {
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1) {
          expect(data[i].recordNumber === 1).assertTrue();
          expect(data[i].alphaTag === diallingNumbersInfoUpdate.alphaTag).assertTrue();
          expect(data[i].number === diallingNumbersInfoUpdate.number).assertTrue();
          console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0700 test finish.');
          done();
          return;
        }
      }
      expect().assertFail();
      done();
    }).catch(error => {
      console.log(
        `Telephony_Sim_updateIccDiallingNumbers_Promise_0700 second query fail, error: ${error.message}`
      );
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Promise_0800
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call updateIccDiallingNumbers (slotId 1, type 0, index 1) DiallingNumbersInfo
   *                structure input parameters
   *             < eFID =0,recordNumber_=1,alphaTag_=test,number_=12345678,emails=""> Expected Step 3 Enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0800', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0800 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0800 query or delete error: ${error.message}`);
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0800 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_0800 test finish.');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Promise_0900
   * @tc.name    1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *             2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *             3. Call updateIccDiallingNumbers (slotId 1, type 0, index 1) DiallingNumbersInfo
   *              structure input parameters
   *             < eFID =0,recordNumber_=1,alphaTag_=null,number_=null,emails=""> Expected Step 3 Enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_0900', 0, async function (done) {
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: '', number: ''};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0900 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_0900 query or delete error: ${error.message}`);
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0900 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Async_0900 test finish.');
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1200
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *            number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1200', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1200 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1200 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1200 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1200 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId1,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1200 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1200 test finish.');
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1300
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *            number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1300', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1300 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1300 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1300 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1300 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId2,
      TYPE_AND_INDEX.type1,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1300 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1300 test finish.');
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1400
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *            number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1400', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1400 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1400 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1400 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1400 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.TYPE_0,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1400 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1400 test finish.');
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
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1500', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1500 delete ${data[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1500 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1500 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1500 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    sim.updateIccDiallingNumbers(
      SIM_SLOT_ID.slotId0,
      TYPE_AND_INDEX.TYPE_3,
      diallingNumbersInfoUpdate,
      TYPE_AND_INDEX.index1
    ).then(() => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1500 test fail.');
      expect().assertFail();
      done();
    }).catch(error => {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1500 test finish.');
      done();
    });
  });

  /**
   * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1700
   * @tc.name   1. Call the delIccDiallingNumbers  interface with parameters 1 for slotId, 0 for type, and 1 for index
   *            2. Call delIccDiallingNumbers  with slotId 1, Type 1, and index 1
   *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
   *            DiallingNumbersInfo struct input arguments
   *            SlotId =0, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1, alphaTag_ =tset_Update,
   *            number_=12345678_Update,emails=""> Expected Step 4 Access err
   * @tc.desc   Function test
   */
  it('Telephony_Sim_updateIccDiallingNumbers_Promise_1700', 0, async function (done) {
    let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
    let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      for (let i = 0;i < data.length;i++) {
        if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1700 delete ${data[i].recordNumber}`);
        }
      }
      const data2 = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2);
      for (let i = 0;i < data2.length;i++) {
        if (data2[i].recordNumber === 1 || data2[i].alphaTag === 'test' || data2[i].alphaTag === '') {
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type2, data2[i].recordNumber);
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1700 delete ${data2[i].recordNumber}`);
        }
      }
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1700 query or delete error: ${error.message}`);
    }

    try {
      await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1700 add');
    } catch (error) {
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1700 add fail, error:${error.message}`);
      expect().assertFail();
      done();
      return;
    }

    try {
      await sim.updateIccDiallingNumbers(
        SIM_SLOT_ID.slotId0,
        TYPE_AND_INDEX.type1,
        diallingNumbersInfoUpdate,
        TYPE_AND_INDEX.index1
      );
    } catch (error) {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1700 test fail.');
      expect().assertFail();
      done();
    }

    try {
      const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
      if (data.length === 0) {
        console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1700 test fail.');
        expect().assertFail();
      }
      let isExist = data.some(item => {
        return item.recordNumber === 1 && item.alphaTa === 'test_Update' && item.number === '12345678_Update';
      });
      expect(isExist).assertTrue();
      done();
    } catch (error) {
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1700 test fail.');
      expect().assertFail();
      done();
    }
  });
});