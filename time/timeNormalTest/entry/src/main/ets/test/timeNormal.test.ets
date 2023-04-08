// @ts-nocheck
/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import systemTime from "@ohos.systemTime";

export default function systemTimeNormalJsunit() {
  describe('systemTimeNormalTest', function () {
    console.info('====>---------------systemTimeNormalTest start-----------------------');

    /**
     * @tc.number    SUB_normalSystemTime_getCurrentTime_JS_API_0010
     * @tc.name      Test systemTime.getCurrentTime
     * @tc.desc      Obtains the number of milliseconds that have elapsed since the Unix epoch.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it("SUB_normalSystemTime_getCurrentTime_JS_API_0010", 0, async function (done) {
      console.info("====>----------SUB_normalSystemTime_getCurrentTime_JS_API_0010 start----------------");
      systemTime.getCurrentTime(true, (error, data) => {
        try {
          if (error) {
            console.error('====>SUB_normalSystemTime_getCurrentTime_JS_API_0010 fail: ' + JSON.stringify(error));
            expect().assertFail();
            done();
          };
          console.info('====>SUB_normalSystemTime_getCurrentTime_JS_API_0010 getCurrentTime success data : ' + JSON.stringify(data));
          expect(data != null).assertEqual(true);
          done();
        } catch (error) {
          console.error('====>SUB_normalSystemTime_getCurrentTime_JS_API_0010 catch error: ' + JSON.stringify(error));
          done();
        }
        console.info("====>----------SUB_normalSystemTime_getCurrentTime_JS_API_0010 end-----------------");
      });
    });

    /**
     * @tc.number    SUB_normalSystemTime_getCurrentTime_JS_API_0020
     * @tc.name      Test systemTime.getCurrentTime
     * @tc.desc      Obtains the number of milliseconds that have elapsed since the Unix epoch.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it("SUB_normalSystemTime_getCurrentTime_JS_API_0020", 0, async function (done) {
      console.info("====>-----SUB_normalSystemTime_getCurrentTime_JS_API_0020 start----------------");
      await systemTime.getCurrentTime(false).then((data) => {
        console.info('====>SUB_normalSystemTime_getCurrentTime_JS_API_0020 success data : ' + JSON.stringify(data));
        expect(data != null).assertEqual(true);
        done();
      }).catch(err => {
        console.error('====>SUB_normalSystemTime_getCurrentTime_JS_API_0020 fail: ' + JSON.stringify(err));
        expect().assertFail()
        done();
      });
      console.info("====>-----SUB_normalSystemTime_getCurrentTime_JS_API_0020 end------------");
    });

    /**
     * @tc.number    SUB_normalSystemTime_getRealActiveTime_JS_API_0010
     * @tc.name      Test systemTime.getCurrentTime
     * @tc.desc      Obtains the number of milliseconds elapsed since the system was booted, not including deep sleep time.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it("SUB_normalSystemTime_getRealActiveTime_JS_API_0010", 0, async function (done) {
      console.info("====>----------SUB_normalSystemTime_getRealActiveTime_JS_API_0010 start----------------");
      systemTime.getRealActiveTime(true, (error, data) => {
        try {
          if (error) {
            console.error('====>SUB_normalSystemTime_getRealActiveTime_JS_API_0010 fail: ' + JSON.stringify(error));
            expect().assertFail()
            done();
          };
          console.info('====>SUB_normalSystemTime_getRealActiveTime_JS_API_0010 success data : ' + JSON.stringify(data));
          expect(data != null).assertEqual(true);
          done();
        } catch (error) {
          console.error('====>SUB_normalSystemTime_getRealActiveTime_JS_API_0010 catch err: ' + JSON.stringify(error));
          done();
        }
        console.info("====>----------SUB_normalSystemTime_getRealActiveTime_JS_API_0010 end-----------------");
      });
    });

    /**
     * @tc.number    SUB_normalSystemTime_getRealActiveTime_JS_API_0020
     * @tc.name      Test systemTime.getCurrentTime
     * @tc.desc      Obtains the number of milliseconds elapsed since the system was booted, not including deep sleep time.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it("SUB_normalSystemTime_getRealActiveTime_JS_API_0020", 0, async function (done) {
      console.info("====>-----SUB_normalSystemTime_getRealActiveTime_JS_API_0020 start----------------");
      await systemTime.getRealActiveTime(false).then((data) => {
        console.log('SUB_normalSystemTime_getRealActiveTime_JS_API_0020 success data : ' + JSON.stringify(data));
        expect(data != null).assertEqual(true);
        done();
      }).catch(err => {
        console.error('====>SUB_normalSystemTime_getRealActiveTime_JS_API_0020 err: ' + JSON.stringify(err));
        expect().assertFail()
        done();
      });
      console.info("====>-----SUB_normalSystemTime_getRealActiveTime_JS_API_0020 end------------");
    });

    /**
     * @tc.number    SUB_normalSystemTime_getRealTime_JS_API_0010
     * @tc.name      Test systemTime.getCurrentTime
     * @tc.desc      Obtains the number of milliseconds elapsed since the system was booted, including deep sleep time.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it("SUB_normalSystemTime_getRealTime_JS_API_0010", 0, async function (done) {
      console.info("====>----------SUB_normalSystemTime_getRealTime_JS_API_0010 start----------------");
      systemTime.getRealTime(true, (error, data) => {
        try {
          if (error) {
            console.error('SUB_normalSystemTime_getRealTime_JS_API_0010 fail: ' + JSON.stringify(error));
            expect().assertFail();
            done();
          };
          console.info('====>SUB_normalSystemTime_getRealTime_JS_API_0010 success data : ' + JSON.stringify(data));
          expect(data != null).assertEqual(true);
          done();
        } catch (error) {
          console.error('====>SUB_normalSystemTime_getRealTime_JS_API_0010 catch err: ' + JSON.stringify(error));
          done();
        }
        console.info("====>----------SUB_normalSystemTime_getRealTime_JS_API_0010 end-----------------");
      });
    });

    /**
     * @tc.number    SUB_normalSystemTime_getRealTime_JS_API_0020
     * @tc.name      Test systemTime.getCurrentTime
     * @tc.desc      Obtains the number of milliseconds elapsed since the system was booted, not including deep sleep time.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it("SUB_normalSystemTime_getRealTime_JS_API_0020", 0, async function (done) {
      console.info("====>-----SUB_normalSystemTime_getRealTime_JS_API_0020 start----------------");
      await systemTime.getRealTime(false).then((data) => {
        console.info('====>SUB_normalSystemTime_getRealTime_JS_API_0020 success data : ' + JSON.stringify(data));
        expect(data != null).assertEqual(true);
        done();
      }).catch(error => {
        console.error('====>SUB_normalSystemTime_getRealTime_JS_API_0020 err: ' + JSON.stringify(error));
        expect().assertFail();
        done();
      });
      console.info("====>-----SUB_normalSystemTime_getRealTime_JS_API_0020 end------------");
    });

    /**
     * @tc.number    SUB_normalSystemTime_setTime_JS_API_0010
     * @tc.name      Test systemTime.setTime
     * @tc.desc      Test systemTime_setTime API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_normalSystemTime_setTime_JS_API_0010', 0, async function (done) {
      console.info("====>SUB_normalSystemTime_setTime_JS_API_0010 start");
      let currentTime = new Date().getTime() + 2000
      systemTime.setTime(currentTime, (err, data) => {
        try{
          if(err){
            console.info("====>SUB_normalSystemTime_setTime_JS_API_0010 setTime permission fail: " + JSON.stringify(err));
            expect(err.code).assertEqual(-1);
            done();
          }else{
            console.info('====>SUB_normalSystemTime_setTime_JS_API_0010 success: ' + data);
            expect().assertFail();
            done();
          }
        }catch(err){
          console.error("====>SUB_normalSystemTime_setTime_JS_API_0010 catch err: " + JSON.stringify(err));
          done();
          console.info("====>SUB_normalSystemTime_setTime_JS_API_0010 end");
        }
      });
    });

    /**
     * @tc.number    SUB_normalSystemTime_setTime_JS_API_0020
     * @tc.name      Test systemTime.setTime Invalid value
     * @tc.desc      Test systemTime_setTime API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_normalSystemTime_setTime_JS_API_0020', 0, async function (done) {
      console.info("====>SUB_normalSystemTime_setTime_JS_API_0020 start");
      try{
        console.info('====>SUB_normalSystemTime_setTime_JS_API_0020 setTime permission fail')
        let currentTime = new Date().getTime() + 2000
        await systemTime.setTime(currentTime);
        expect().assertFail();
        done();
      }catch(err){
        console.error('====>SUB_normalSystemTime_setTime_JS_API_0020 setTime catch err' + JSON.stringify(err))
        expect(err.code).assertEqual(-1);
        expect(err.message).assertContain("permission denied");
        done();
        console.info("====>SUB_normalSystemTime_setTime_JS_API_0020 end");
      }
    });

    /**
     * @tc.number    SUB_normalSystemTime_setDate_JS_API_0010
     * @tc.name      Test systemTime.setDate Invalid value
     * @tc.desc      Test systemTime_setDate API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_normalSystemTime_setDate_JS_API_0010', 0, async function (done) {
      console.info("====>SUB_normalSystemTime_setDate_JS_API_0010 start");
      let date = new Date("Tue Oct 13 2020 11:13:00 GMT+0800");
      systemTime.setDate(date, (err, data) => {
        try{
          if(err){
            console.info("====>SUB_normalSystemTime_setDate_JS_API_0010 setTime permission fail: " + JSON.stringify(err));
            expect(err.code).assertEqual(-1);
            done();
          }else{
            console.info('====>SUB_normalSystemTime_setDate_JS_API_0010 success: ' + data);
            expect().assertFail();
            done();
          }
        }catch(err){
          console.error("====>SUB_normalSystemTime_setDate_JS_API_0010 catch err: " + JSON.stringify(err));
          done();
          console.info("====>SUB_normalSystemTime_setDate_JS_API_0010 end");
        }
      });
    });

    /**
     * @tc.number    SUB_normalSystemTime_setDate_JS_API_0020
     * @tc.name      Test systemTime.setDate true value
     * @tc.desc      Test systemTime_setDate API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_normalSystemTime_setDate_JS_API_0020', 0, async function (done) {
      console.info("====>SUB_normalSystemTime_setDate_JS_API_0020 start");
      try{
        console.debug('====>SUB_normalSystemTime_setDate_JS_API_0020 setTime permission fail')
        let date = new Date("Tue Oct 13 2020 11:13:00 GMT+0800");
        await systemTime.setDate(date)
        expect().assertFail();
        done();
      }catch(err){
        console.error('====>SUB_normalSystemTime_setDate_JS_API_0020 setTime catch err: ' + JSON.stringify(err))
        expect(err.code).assertEqual(-1);
        expect(err.message).assertContain("permission denied");
        done();
        console.info("====>SUB_normalSystemTime_setDate_JS_API_0020 end");
      }
    });

    /**
     * @tc.number    SUB_normalSystemTime_setTimezone_JS_API_0010
     * @tc.name      Test systemTime.setTimezone true value
     * @tc.desc      Test systemTime_setTimezone API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_normalSystemTime_setTimezone_JS_API_0010', 0, function (done) {
      console.info("====>SUB_normalSystemTime_setTimezone_JS_API_0010 start");
      systemTime.setTimezone('Asia/Jakarta', (err, data) => {
        try{
          if(err){
            console.info("====>SUB_normalSystemTime_setTimezone_JS_API_0010 setTime permission fail: " + JSON.stringify(err));
            expect(err.code).assertEqual(-1);
            done();
          }else{
            console.info('====>SUB_normalSystemTime_setTimezone_JS_API_0010 success: ' + data);
            expect().assertFail();
            done();
          }
        }catch(err){
          console.error("====>SUB_normalSystemTime_setTimezone_JS_API_0010 catch error: " + JSON.stringify(err));
          done();
          console.info("====>SUB_normalSystemTime_setTimezone_JS_API_0010 end");
        }
      });
    });

    /**
     * @tc.number    SUB_normalSystemTime_setTimezone_JS_API_0020
     * @tc.name      Test systemTime.setTimezone true value
     * @tc.desc      Test systemTime_setTimezone API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_normalSystemTime_setTimezone_JS_API_0020', 0, async function (done) {
      console.info("====>SUB_normalSystemTime_setTimezone_JS_API_0020 start");
      try{
        console.debug('====>SUB_normalSystemTime_setTimezone_JS_API_0020 setTime permission fail')
        await systemTime.setTimezone('Europe/Moscow')
        expect().assertFail();
        done();
      }catch(err){
        console.error('====>SUB_normalSystemTime_setTimezone_JS_API_0020 setTime catch err: ' + JSON.stringify(err))
        expect(err.code).assertEqual(-1);
        expect(err.message).assertContain("permission denied");
        done();
        console.info("====>SUB_normalSystemTime_setTimezone_JS_API_0020 end");
      }
    });

  });
};