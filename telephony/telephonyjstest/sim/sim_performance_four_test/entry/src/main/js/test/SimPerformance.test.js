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
import {SIM_SLOT_ID, TIMES_VALUE, OTHER_ABNORMAL, CARD_NAME, CARD_NAME_ZERO, OPERATOR_NUM_LENGTH, TYPE_AND_INDEX,
    OTHER_ERRORS, LOCK_SWITCH2} from './lib/Const.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('SimPerformance', function () {
   /**
      * @tc.number  Telephony_Sim_hasSimCard_Promise_0300
      * @tc.name    The test calls the getSimIccId interface, calls the hasSimCard interface iteratively and inputs the
      *             parameter 1,10 times. The total time from the interface call time to the return value is counted.
      *             The total time of the expected result is less than 5000us
      * @tc.desc    Performance test
      */
    it('Telephony_Sim_hasSimCard_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.hasSimCard(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_hasSimCard_Promise_0300 fail err${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_hasSimCard_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_hasSimCard_Promise_0300 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_hasSimCard_Async_0300
        * @tc.name    The test calls the getSimIccId interface, calls the hasSimCard
        *             interface iteratively and inputs the
        *             parameter 1,10 times. The total time from the interface call time to the return value is counted.
        *             The total time of the expected result is less than 5000us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_hasSimCard_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_hasSimCard_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_hasSimCard_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.hasSimCard(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_hasSimCard_Async_0300 fail err${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_isSimActive_Async_0400
        * @tc.name    The test calls the isSimActive interface, calls the isSimActive
        *             interface iteratively and inputs the
        *             parameter 1,10 times. The total time from the interface call time to the return value is counted.
        *             The total time of the expected result is less than 5000us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_isSimActive_Async_0400', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_isSimActive_Async_0400 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_isSimActive_Async_0400 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.isSimActive(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_isSimActive_Async_0400  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_activateSim_Async_0300
        * @tc.name    Test activateSim (slotId: number, callback: AsyncCallback): void interface performance,
        *             expected statistical average latency less than 500us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_activateSim_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_activateSim_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_activateSim_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.activateSim(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_activateSim_Async_0300  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_isSimActive_Promise_0400
        * @tc.name    The test calls the isSimActive interface, calls the isSimActive
        *             interface iteratively and inputs the
        *             parameter 1,10 times. The total time from the interface call
        *             time to the return value is counted.
        *             The total time of the expected result is less than 5000us
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_isSimActive_Promise_0400', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.isSimActive(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_isSimActive_Promise_0400 fail ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_isSimActive_Promise_0400 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_isSimActive_Promise_0400 finish');
      done();
    });
  
    /**
        * @tc.number   Telephony_Sim_delIccDiallingNumbers_Async_0600
        * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number, callback:
        *              AsyncCallback>) Void Interface query
        *              type is fixed dial contact, expect to return structure
        *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
        * @tc.desc     Function test
        */
    it('Telephony_Sim_delIccDiallingNumbers_Async_0600', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      const recursive = async function (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_delIccDiallingNumbers_Async_0600 exec done useTime:${totalTime}`);
          console.log('(ALL)Telephony_Sim_delIccDiallingNumbers_Async_0600 test finish.');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        let time = 10 - n + 1;
        console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 run time: ${time}`);
        let newRecordNumber;
        let recordNumbers = [];
        let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
        let data;
        try {
          data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
          console.log(
            `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 first query result: ${JSON.stringify(data)}`
          );
          recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
          console.log(
            `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 recordNumbers: ${JSON.stringify(recordNumbers)}`
          );
        } catch (error) {
          console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 first
          query fail, error:${error.message}`);
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
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 add`);
          } catch (error) {
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 add fail, error:${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          try {
            const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
            console.log(
              `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 second query result: ${JSON.stringify(_data)}`
            );
            let tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
              .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
            newRecordNumber = tmp[0];
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 recordNumber: ${newRecordNumber}`);
          } catch (error) {
            console.log(
              `(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 second query fail, error:${error.message}`
            );
            expect().assertFail();
            done();
            return;
          }
        }
        startTime = new Date().getTime();
        sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber, function (error) {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (error) {
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Async_0600 delete fail, error:${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      };
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number   Telephony_Sim_delIccDiallingNumbers_Promise_0600
        * @tc.name     queryIccDiallingNumbers (slotId: number, Type: number,
        *              callback: AsyncCallback>) Void Interface query
        *              type is fixed dial contact, expect to return structure
        *              assertion is recordNumber_=1,alphaTag_=test,number_=12345678
        * @tc.desc     Function test
        */
    it('Telephony_Sim_delIccDiallingNumbers_Promise_0600', 0, async function (done) {
      let totalTime = 0;
      for (let i = 0;i < TIMES_VALUE.testRunTime;i++) {
        let time = i + 1;
        let newRecordNumber;
        let recordNumbers = [];
        let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
        let data;
        try {
          data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
          console.log(
            `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 first query result: ${JSON.stringify(data)}`
          );
          recordNumbers = data.map(diallingNumberInfo => diallingNumberInfo.recordNumber);
          console.log(
            `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 recordNumbers: ${JSON.stringify(recordNumbers)}`
          );
        } catch (error) {
          console.log(
            `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 first query fail, error: ${error.message}`
          );
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
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 add`);
          } catch (error) {
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 add fail, error:${error.message}`);
            expect().assertFail();
            done();
            return;
          }
          try {
            const _data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
            console.log(
              `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 second query result: ${JSON.stringify(_data)}`
            );
            const tmp = _data.filter(diallingNumberInfo => recordNumbers.indexOf(diallingNumberInfo.recordNumber) < 0)
              .map(diallingNumberInfo => diallingNumberInfo.recordNumber);
            newRecordNumber = tmp[0];
            console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 recordNumber: ${newRecordNumber}`);
          } catch (error) {
            console.log(
              `(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 second query fail, error:${error.message}`
            );
            expect().assertFail();
            done();
            return;
          }
        }
        try {
          const startTime = new Date().getTime();
          await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, newRecordNumber);
          const endTime = new Date().getTime();
          totalTime += endTime - startTime;
          console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 delete`);
        } catch (error) {
          console.log(`(${time})Telephony_Sim_delIccDiallingNumbers_Promise_0600 delete fail. error: ${error.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_delIccDiallingNumbers_Promise_0600 : useTime : ${totalTime}ms`);
      console.log('Telephony_Sim_delIccDiallingNumbers_Promise_0600 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_activateSim_Promise_0300
        * @tc.name    Test activateSim (slotId: number): Promise Interface performance.
        *             The expected average latency is less than 500us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_activateSim_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.activateSim(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_activateSim_Promise_0300 fail ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_activateSim_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_activateSim_Promise_0300 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_deactivateSim_Async_0300
        * @tc.name    Test deactivateSim (slotId: number, callback: AsyncCallback): void interface performance,
        *             expected statistical average latency less than 500us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_deactivateSim_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_deactivateSim_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_deactivateSim_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          sim.isSimActive(SIM_SLOT_ID.slotId0, (err, data) => {
            if (err) {
              console.log(`Telephony_Sim_deactivateSim_Async_0300 isSimActive fail, err : ${err.message}`);
              expect().assertFail();
              done();
            }
          });
          return;
        }
        startTime = new Date().getTime();
        sim.deactivateSim(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_deactivateSim_Async_0300  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_deactivateSim_Promise_0300
        * @tc.name    Test deactivateSim (slotId: number): Promise interface performance.
        *             The expected average latency is less than 500us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_deactivateSim_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.deactivateSim(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_deactivateSim_Promise_0300 fail ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_deactivateSim_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_deactivateSim_Promise_0300 finish');
      done();
      try {
        var data = await sim.isSimActive(SIM_SLOT_ID.slotId0);
      } catch (err) {
        console.log(`Telephony_Sim_deactivateSim_Promise_0300 isSimActive fail ${err.message}`);
        expect().assertFail();
        done();
  
      }
    });
  
    /**
        * @tc.number  Telephony_Sim_deactivateSim_Async_0400
        * @tc.name    Call deactivateSim, set slotId to 0, loop 10 times, and
        *             expect the average latency to be less than 500us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_deactivateSim_Async_0400', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_deactivateSim_Async_0400 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_deactivateSim_Async_0400 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          sim.isSimActive(SIM_SLOT_ID.slotId0, (err, data) => {
            if (err) {
              console.log(`Telephony_Sim_deactivateSim_Async_0400 isSimActive fail, err : ${err.message}`);
              expect().assertFail();
              done();
            }
          });
          return;
        }
        startTime = new Date().getTime();
        sim.deactivateSim(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_deactivateSim_Async_0400  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_deactivateSim_Promise_0400
        * @tc.name    The test calls the setActiveSim interface, calls the
        *             deactivateSim interface iteratively and inputs the
        *             parameter 1,10 times. The total time from the interface call time to the return value is counted.
        *             The total time of the expected result is less than 5000us
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_deactivateSim_Promise_0400', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.deactivateSim(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_deactivateSim_Promise_0400  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_deactivateSim_Promise_0400 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_deactivateSim_Promise_0400 finish');
      done();
      try {
        var data = await sim.activateSim(SIM_SLOT_ID.slotId0);
      } catch (err) {
        console.log(`Telephony_Sim_deactivateSim_Promise_0400  isSimActive fail, err : ${err.message}`);
        expect().assertFail();
        done();
      }
    });
  
    /**
        * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Async_0300
        * @tc.name    Call getActiveSimAccountInfoList, loop 10 times, and
        *             expect the average latency to be less than 500us
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getActiveSimAccountInfoList_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getActiveSimAccountInfoList_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getActiveSimAccountInfoList((err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_getActiveSimAccountInfoList_Async_0300  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getActiveSimAccountInfoList_Promise_0300
        * @tc.name    Call getActiveSimAccountInfoList interface to get the return value,
        *             10 times expected statistical average delay is less than 500 us
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_getActiveSimAccountInfoList_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.getActiveSimAccountInfoList();
        } catch (err) {
          console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0300  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_getActiveSimAccountInfoList_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_getActiveSimAccountInfoList_Promise_0300 finish');
      done();
    }
    );
  
    /**
        * @tc.number  Telephony_Sim_setShowName_Async_0400
        * @tc.name   When the setShowName interface is called, the slotId input parameter is 0,
        *            the name input parameter is 1234, and the expected statistical
        *             average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_setShowName_Async_0400', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_setShowName_Async_0400 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_setShowName_Async_0400 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_setShowName_Async_0400  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_setShowName_Promise_0400
        * @tc.name    When the setShowName interface is called, the slotId input parameter is 0,
        *             the name input parameter is 1234, and the expected
        *             statistical average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_setShowName_Promise_0400', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME.cardName);
        } catch (err) {
          console.log(`Telephony_Sim_setShowName_Promise_0400  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_setShowName_Promise_0400 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_setShowName_Promise_0400 finish');
      done();
      try {
        await sim.setShowName(SIM_SLOT_ID.slotId0, CARD_NAME_ZERO);
      } catch (err) {
        console.log(`Telephony_Sim_setShowName_Promise_0400 setShowName fail, err : ${
          err.message}`);
        expect().assertFail();
        done();
  
      }
    });
  
    /**
        * @tc.number  Telephony_Sim_getShowName_Async_0400
        * @tc.name    The getShowName interface is called. The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getShowName_Async_0400', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getShowName_Async_0400 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getShowName_Async_0400 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getShowName(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_getShowName_Async_0400  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_setShowNumber_Async_0400
        * @tc.name   When the setShowNumber interface is called, the slotId input parameter is
        *            0, and the number input parameter is 1234 for 10 times.
        *            The expected average statistical delay is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_setShowNumber_Async_0400', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_setShowNumber_Async_0400 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_setShowNumber_Async_0400 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_setShowNumber_Async_0400  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getShowName_Promise_0400
        * @tc.name   The getShowName interface is called. The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_getShowName_Promise_0400', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.getShowName(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_getShowName_Promise_0400  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_getShowName_Promise_0400 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_getShowName_Promise_0400 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_setShowNumber_Promise_0400
        * @tc.name   The setShowNumber interface is called. The slotId input parameter is 0.
        *            Number into the 1234 refs
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_setShowNumber_Promise_0400', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.setShowNumber(SIM_SLOT_ID.slotId0, CARD_NAME.cardNumber);
        } catch (err) {
          console.log(`Telephony_Sim_setShowNumber_Promise_0400  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_setShowNumber_Promise_0400 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_setShowNumber_Promise_0400 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_unlockPin2_Promise_0500
        * @tc.name    The unlockPin2 interface is called.
        *             The pin entry parameter is 123 The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_unlockPin2_Promise_0500', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber);
        } catch (err) {
          console.log(`Telephony_Sim_unlockPin2_Promise_0500  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_unlockPin2_Promise_0500 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_unlockPin2_Promise_0500 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_unlockPuk2_Promise_0500
        * @tc.name    The unlockPin2 interface is called.
        *             The newpin entry parameter is 1234 The puk entry parameter is
        *             123 The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
  
    it('Telephony_Sim_unlockPuk2_Promise_0500', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.puk);
        } catch (err) {
          console.log(`Telephony_Sim_unlockPuk2_Promise_0500  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_unlockPuk2_Promise_0500 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_unlockPuk2_Promise_0500 finish');
      done();
    });
  
    /**
        * @tc.number   Telephony_Sim_addIccDiallingNumbers_Promise_0800
        * @tc.name     1. Call the delIccDiallingNumbers interface with parameters 1 for
        *              slotId, 0 for type, and 1 for index
        *              2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
        *              3. Call the addIccDiallingNumbers interface, slotId parameter 1,
        *              type parameter 0 DiallingNumbersInfo struct input arguments
        *              queryIccDiallingNumbers; slotId = slotId; type = 0; Expected
        *              structure assertions are eFID =0,recordNumber_=1,alphaTag_="",number_="", and emails="".
        * @tc.desc     Function test
        */
    it('Telephony_Sim_addIccDiallingNumbers_Promise_0800', 0, async function (done) {
      let totalTime = 0;
      for (let i = 0;i < TIMES_VALUE.testRunTime;i++) {
        let time = i + 1;
        try {
          const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
          for (let i = 0;i < data.length;i++) {
            if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
              await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
              console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0800 delete ${data[i].recordNumber}`);
            }
          }
        } catch (error) {
          console.log(
            `(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0800 query or delete error: ${error.message}`
          );
        }
  
        let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
  
        try {
          const startTime = new Date().getTime();
          await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
          const endTime = new Date().getTime();
          totalTime += endTime - startTime;
          console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0800 add`);
        } catch (error) {
          console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Promise_0800 add error:${error.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      console.log(`Telephony_Sim_addIccDiallingNumbers_Promise_0800 exec done useTime:${totalTime}`);
      expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
    });
  
    /**
        * @tc.number Telephony_Sim_updateIccDiallingNumbers_Promise_1000
        *            @tc.name 1. Call the delIccDiallingNumbers interface with parameters 1 for slotId, 0 for type,
        *            and 1 for index 2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
        *            3. Call the addIccDiallingNumbers interface, slotId parameter 1, type parameter 0
        *            DiallingNumbersInfo struct input arguments
        *            SlotId =1, type =0, index =1, DiallingNumbersInfo < eFID =0,recordNumber_=1,
        *            alphaTag_=NULL,number_=12345678,emails="">
        *            5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 0
        *            expecting 1. Step 2 Return true
        *            Step 3 Return efid=0,recordNumber_=1, alphaTag_=NULL,number_=12345678, and emails="".
        * @tc.desc   Function test
        */
    it('Telephony_Sim_updateIccDiallingNumbers_Promise_1000', 0, async function (done) {
      let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
      let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};
  
      try {
        const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        for (let i = 0;i < data.length;i++) {
          if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
            await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
            console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1000 delete ${data[i].recordNumber}`);
          }
        }
      } catch (error) {
        console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1000 query or delete error: ${error.message}`);
      }
  
      try {
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
        console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1000 add');
      } catch (error) {
        console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1000 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      let totalTime = 0;
      for (let i = 0;i < TIMES_VALUE.testRunTime;i++) {
        let time = i + 1;
        try {
          const startTime = new Date().getTime();
          await sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfoUpdate,
            TYPE_AND_INDEX.index1);
          const endTime = new Date().getTime();
          totalTime += endTime - startTime;
          console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Promise_1000 update`);
        } catch (error) {
          console.log(
            `(${time})Telephony_Sim_updateIccDiallingNumbers_Promise_1000 update fail, error: ${error.message}`
          );
          expect().assertFail();
          done();
          return;
        }
        try {
          const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
          let isExist = data.some(item => {
            if (item.recordNumber === 1
               && item.alphaTag === diallingNumbersInfoUpdate.alphaTag
               && item.number === diallingNumbersInfoUpdate.number) {
              return true;
            }
          });
  
          if (!isExist) {
            console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Promise_1000 test fail.`);
            expect().assertFail();
            done();
          }
        } catch (error) {
          console.log(
            `(${time})Telephony_Sim_updateIccDiallingNumbers_Promise_1000 second query fail, error: ${error.message}`
          );
          expect().assertFail();
          done();
        }
      }
  
      expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_updateIccDiallingNumbers_Promise_1000 : useTime : ${totalTime}ms`);
      console.log('Telephony_Sim_updateIccDiallingNumbers_Promise_1000 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_updateIccDiallingNumbers_Async_1000
        * @tc.name    1. Call the delIccDiallingNumbers interface with parameters 1 for
        *             slotId, 0 for type, and 1 for index
        *             2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
        *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
        *             type parameter 0, DiallingNumbersInfo
        *             struct input arguments < eFID =1,recordNumber_=1,alphaTag_=test,number_=12345678,emails="">
        *             SlotId =1, type =1, index =1, DiallingNumbersInfo < eFID =1,recordNumber_=1
        *             alphaTag_=tset_Update,number_=12345678_Update,emails="">
        *             5. Call queryIccDiallingNumbers with slotId parameter 1 and type parameter 1
        *             expectation 1. Step 4 Return true
        *             Step 5 Return efid=1,recordNumber_=1, eFID =1,recordNumber_=1,
        *             alphaTag_=tset_Update,number_=null, and emails="".
        * @tc.desc    Function test
        */
    it('Telephony_Sim_updateIccDiallingNumbers_Async_1000', 0, async function (done) {
      let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
      let diallingNumbersInfoUpdate = {recordNumber: 1, alphaTag: 'test_Update', number: '12345678_Update'};
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      try {
        const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
        for (let i = 0;i < data.length;i++) {
          if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
            await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
            console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1000 delete ${data[i].recordNumber}`);
          }
        }
      } catch (error) {
        console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1000 query or delete error: ${error.message}`);
      }
      try {
        await sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo);
        console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1000 add');
      } catch (error) {
        console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1000 add fail, error:${error.message}`);
        expect().assertFail();
        done();
        return;
      }
      const recursive = async function (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_updateIccDiallingNumbers_Async_1000 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_updateIccDiallingNumbers_Async_1000 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        let time = 10 - n + 1;
        console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1000 run time: ${time}`);
        startTime = new Date().getTime();
        sim.updateIccDiallingNumbers(SIM_SLOT_ID.slotId0,
          TYPE_AND_INDEX.type1,
          diallingNumbersInfoUpdate,
          TYPE_AND_INDEX.index1, async function (error) {
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            if (error) {
              console.log(
                `(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1000 update fail, error: ${error.message}`
              );
              expect().assertFail();
              done();
              return;
            }
            try {
              const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
              let isExist = data.some(item => {
                if (item.recordNumber === 1
                   && item.alphaTag === diallingNumbersInfoUpdate.alphaTag
                   && item.number === diallingNumbersInfoUpdate.number) {
                  return true;
                }
              });
              if (isExist) {
                recursive(n - 1);
              } else {
                console.log(`(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1000 test fail.`);
                expect().assertFail();
                done();
              }
            } catch (error) {
              console.log(
                `(${time})Telephony_Sim_updateIccDiallingNumbers_Async_1000 second query fail, error:${error.message}`
              );
              expect().assertFail();
              done();
            }
          });
      };
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_addIccDiallingNumbers_Async_0800
        * @tc.name    1. Call the delIccDiallingNumbers interface with parameters 1 for slotId,
        *             0 for type, and 1 for index
        *             2. Call delIccDiallingNumbers with slotId 1, Type 1, and index 1
        *             3. Call the addIccDiallingNumbers interface, slotId parameter 1,
        *             type parameter 0 DiallingNumbersInfo struct input arguments
        *             4. Repeat Step 1-3 10 times. Expect that the average latency of Step 3 is less than 500 μ s
        * @tc.desc    Function test
        */
    it('Telephony_Sim_addIccDiallingNumbers_Async_0800', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      const recursive = function (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_addIccDiallingNumbers_Async_0800 exec done useTime:${totalTime}`);
          console.log('(ALL)Telephony_Sim_addIccDiallingNumbers_Async_0800 test finish.');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
  
        let time = 10 - n + 1;
        console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0800 run time: ${time}`);
  
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, async (error, data) => {
          if (error) {
            console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0800 first query error: ${error.message}`);
            expect().assertFail();
            done();
            return;
          }
  
          console.log(
            `(${time})Telephony_Sim_addIccDiallingNumbers_Async_0800 first query data: ${JSON.stringify(data)}`
          );
  
          try {
            for (let i = 0;i < data.length;i++) {
              if (data[i].recordNumber === 1 || data[i].alphaTag === 'test' || data[i].alphaTag === '') {
                await sim.delIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, data[i].recordNumber);
                console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0800 delete ${data[i].recordNumber}`);
              }
            }
          } catch (error) {
            console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0800 delete error: ${error.message}`);
          }
  
          let diallingNumbersInfo = {recordNumber: 1, alphaTag: 'test', number: '12345678'};
          startTime = new Date().getTime();
          sim.addIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, diallingNumbersInfo, function (error) {
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            if (error) {
              console.log(`(${time})Telephony_Sim_addIccDiallingNumbers_Async_0800 add error: ${error.message}`);
              expect().assertFail();
              done();
            } else {
              recursive(n - 1);
            }
          });
        });
      };
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Async_0500
        * @tc.name    queryIccDiallingNumbers (slotId: number, Type: number, callback: AsyncCallback>) Void
        *             interface performance. The expected average latency is less than 500us
        * @tc.desc    Function test
        */
    it('Telephony_Sim_queryIccDiallingNumbers_Async_0500', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      const recursive = function (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_queryIccDiallingNumbers_Async_0500 exec done useTime:${totalTime}`);
          console.log('(ALL)Telephony_Sim_queryIccDiallingNumbers_Async_0500 test finish.');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        let time = 10 - n + 1;
        console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0500 run time: ${time}`);
        startTime = new Date().getTime();
        sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1, (error, data) => {
          console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0500 second query`);
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (error) {
            console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Async_0500 test query error:${error.message}`);
            expect().assertFail();
            done();
          } else {
            recursive(n - 1);
          }
        });
      };
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_queryIccDiallingNumbers_Promise_0500
        * @tc.name    queryIccDiallingNumbers (slotId: Number, Type: Number): Promise>
        *             The expected average latency is less than 500 μ s
        * @tc.desc    Function test
        */
    it('Telephony_Sim_queryIccDiallingNumbers_Promise_0500', 0, async function (done) {
      let totalTime = 0;
      for (let i = 0;i < TIMES_VALUE.testRunTime;i++) {
        let time = i + 1;
        try {
          const startTime = new Date().getTime();
          const data = await sim.queryIccDiallingNumbers(SIM_SLOT_ID.slotId0, TYPE_AND_INDEX.type1);
          const endTime = new Date().getTime();
          totalTime += endTime - startTime;
        } catch (error) {
          console.log(`(${time})Telephony_Sim_queryIccDiallingNumbers_Promise_0500 test query error:${error.message}`);
          expect().assertFail();
          done();
        }
      }
      expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_queryIccDiallingNumbers_Promise_0500 : useTime : ${totalTime}ms`);
      console.log('Telephony_Sim_queryIccDiallingNumbers_Promise_0500 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_alterPin2_Promise_0200
        * @tc.name    The alterPin2 interface is called.
        *             The newpin entry parameter is 123 The oldPin entry parameter is 1234
        *             The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_alterPin2_Promise_0200', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.alterPin2(SIM_SLOT_ID.slotId4, CARD_NAME.newPinThree, CARD_NAME.oldPin);
        } catch (err) {
          if (index = TIMES_VALUE.testRunTime - 1) {
            const endTime = new Date().getTime();
            expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
            console.log(`Telephony_Sim_alterPin2_Promise_0200 : useTime : ${endTime - startTime}ms`);
            console.log('Telephony_Sim_alterPin2_Promise_0200 finish');
            done();
          }
        }
      }
    });
  
    /**
        * @tc.number  Telephony_Sim_getSimTelephoneNumber_Promise_0300
        * @tc.name   The getSimTelephoneNumber interface is called. The slotId parameter is 0
        *             for 10 times. The expected average latency is less than 500 seconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getSimTelephoneNumber_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.getSimTelephoneNumber(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0300  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_getSimTelephoneNumber_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_getSimTelephoneNumber_Promise_0300 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Promise_0300
        * @tc.name   The getVoiceMailIdentifier interface is called. The slotId parameter is 0
        *             for 10 times. The expected average latency is less than 500 seconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getVoiceMailIdentifier_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.getVoiceMailIdentifier(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0300  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_getVoiceMailIdentifier_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_getVoiceMailIdentifier_Promise_0300 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_getVoiceMailNumber_Promise_0300
        * @tc.name   The getVoiceMailNumber interface is called. The slotId parameter is 0
        *             for 10 times. The expected average latency is less than 500 seconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getVoiceMailNumber_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.getVoiceMailNumber(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_getVoiceMailNumber_Promise_0300  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_getVoiceMailNumber_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_getVoiceMailNumber_Promise_0300 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_getShowNumber_Async_0300
        * @tc.name   The getShowNumber interface is called. The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getShowNumber_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getShowNumber_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getShowNumber_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getShowNumber(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log('Telephony_Sim_getShowNumber_Async_0300 fail');
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getOperatorConfigs_Async_0300
        * @tc.name   The getOperatorConfig interface is called. The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getOperatorConfigs_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getOperatorConfigs_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getOperatorConfigs_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getOperatorConfigs(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log('Telephony_Sim_getOperatorConfigs_Async_0300 fail');
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_0300
        * @tc.name   The getOperatorConfig interface is called. The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getOperatorConfigs_Promise_0300', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.getOperatorConfigs(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_getOperatorConfigs_Promise_0300  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_getOperatorConfigs_Promise_0300 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_getOperatorConfigs_Promise_0300 finish');
      done();
    });
  
    /**
        * @tc.number  Telephony_Sim_unlockPin2_Async_0500
        * @tc.name    The getOperatorConfig interface is called.
        *             The pin entry parameter is 123
        *             The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_unlockPin2_Async_0500', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_unlockPin2_Async_0500 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_unlockPin2_Async_0500 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.unlockPin2(SIM_SLOT_ID.slotId0, CARD_NAME.pinNumber, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log('Telephony_Sim_unlockPin2_Async_0500 fail');
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_unlockPuk2_Async_0500
        * @tc.name    The unlockPin2 interface is called 10 times.
        *             The newpin entry parameter is 1234
        *             The puk entry parameter is 123
        *             The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_unlockPuk2_Async_0500', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_unlockPuk2_Async_0500 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_unlockPuk2_Async_0500 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.unlockPuk2(SIM_SLOT_ID.slotId0, CARD_NAME.newPin, CARD_NAME.puk, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log('Telephony_Sim_unlockPuk2_Async_0500 fail');
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_alterPin2_Async_0200
        * @tc.name    The alterPin2 interface is called 10 times.
        *             The newpin entry parameter is 123
        *             The oldPin entry parameter is 1234
        *             The slotId input parameter is 0.
        *             The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_alterPin2_Async_0200', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_alterPin2_Async_0200 exec done useTime:${totalTime}`);
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.alterPin2(SIM_SLOT_ID.slotId4, CARD_NAME.newPinThree, CARD_NAME.oldPin, (err, data) => {
          if (err) {
              endTime = new Date().getTime();
              totalTime += endTime - startTime;
              console.log('Telephony_Sim_alterPin2_Async_0200 finish');
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getSimTelephoneNumber_Async_0300
        * @tc.name    The getSimTelephoneNumber interface is called. The slotId parameter is
        *             0 for 10 times. The expected average latency is less than 500 seconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getSimTelephoneNumber_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getSimTelephoneNumber_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getSimTelephoneNumber(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_getSimTelephoneNumber_Async_0300  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getVoiceMailIdentifier_Async_0300
        * @tc.name    The getVoiceMailIdentifier interface is called. The slotId parameter is
        *             0 for 10 times. The expected average latency is less than 500 seconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getVoiceMailIdentifier_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getVoiceMailIdentifier_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getVoiceMailIdentifier(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_getVoiceMailIdentifier_Async_0300  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getVoiceMailNumber_Async_0300
        * @tc.name    The getVoiceMailNumber interface is called. The slotId parameter is
        *             0 for 10 times. The expected average latency is less than 500 seconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getVoiceMailNumber_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getVoiceMailNumber_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getVoiceMailNumber_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getVoiceMailNumber(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_getVoiceMailNumber_Async_0300  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getShowNumber_Async_0300
        * @tc.name    The getShowName interface is called. The slotId input parameter is 0, and the number
        *             input parameter is 1234. The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getShowNumber_Async_0300', 0, async function (done) {
      var totalTime = 0;
      var startTime = 0;
      var endTime = 0;
      function recursive (n) {
        if (n <= 0) {
          console.log(`Telephony_Sim_getShowNumber_Async_0300 exec done useTime:${totalTime}`);
          console.log('Telephony_Sim_getShowNumber_Async_0300 finish');
          expect(totalTime).assertLess(TIMES_VALUE.timeSpan);
          done();
          return;
        }
        startTime = new Date().getTime();
        sim.getShowNumber(SIM_SLOT_ID.slotId0, (err, data) => {
          endTime = new Date().getTime();
          totalTime += endTime - startTime;
          if (err) {
            console.log(`Telephony_Sim_getShowNumber_Async_0300  fail, err : ${err.message}`);
            expect().assertFail();
            done();
            return;
          }
          recursive(n - 1);
        });
      }
      recursive(TIMES_VALUE.testRunTime);
    });
  
    /**
        * @tc.number  Telephony_Sim_getShowNumber_Promise_0400
        * @tc.name   The getShowName interface is called. The slotId input parameter is 0, and
        *            the number input parameter is 1234. The expected average latency is less than 500 milliseconds
        * @tc.desc    Performance test
        */
    it('Telephony_Sim_getShowNumber_Promise_0400', 0, async function (done) {
      const startTime = new Date().getTime();
      for (let index = 0;index < TIMES_VALUE.testRunTime;index++) {
        try {
          var data = await sim.getShowNumber(SIM_SLOT_ID.slotId0);
        } catch (err) {
          console.log(`Telephony_Sim_getShowNumber_Promise_0400  fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
      }
      const endTime = new Date().getTime();
      expect(endTime - startTime).assertLess(TIMES_VALUE.timeSpan);
      console.log(`Telephony_Sim_getShowNumber_Promise_0400 : useTime : ${endTime - startTime}ms`);
      console.log('Telephony_Sim_getShowNumber_Promise_0400 finish');
      done();
    });
});