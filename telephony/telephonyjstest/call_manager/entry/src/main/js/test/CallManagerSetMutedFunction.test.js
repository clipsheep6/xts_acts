/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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

import call from '@ohos.telephony_call';
/**
 * import call from '@ohos.tel_call_manager_inner_api'
 * import call_inner from '@ohos.tel_call_manager_inner_api'
 */
import {describe, afterAll, it, expect} from 'deccjsunit/index';
import {
  TATUS_ACTIVE,
  AUTO_ACCEPT_NUMBER
} from './lib/Const.js';
import {scenceInCalling, hangupCall2} from './lib/ScenceInCalling.js';
import {toString} from './lib//ApiToPromise.js';
describe('CallManagement', function () {

  /**
   * @tc.number  Telephony_CallManager_setMuted_Async_0100
   * @tc.name    Telephony_CallManager_setMuted_Async_0100
   * @tc.desc    Dial a number after the call is accepted,
   *             run function setMute by callback and by arg true,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Async_0100', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Async_0100';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE// state maybe other number,need a state (Will definitely arrive)
      });
      let callId = data.callId;
      call.setMute(true, (error, data) => {
        if (error) {
          console.log(`${caseName} error,case failed,error:${toString(error)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
          return;
        }
        console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
        expect(data === null).assertTrue();
        hangupCall2(caseName, done, callId);
      });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_CallManager_setMuted_Async_0200
   * @tc.name    Telephony_CallManager_setMuted_Async_0200
   * @tc.desc    Dial a number after the call is accepted,
   *             run function setMute by callback and by arg false,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Async_0200', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Async_0200';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE// state maybe other number,need a state (Will definitely arrive)
      });
      let callId = data.callId;
      call.setMute(false, (error, data) => {
        if (error) {
          console.log(`${caseName} error,case failed,error:${toString(error)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
          return;
        }
        console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
        expect(data === null).assertTrue();
        hangupCall2(caseName, done, callId);
      });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_CallManager_setMuted_Async_0300
   * @tc.name    Telephony_CallManager_setMuted_Async_0300
   * @tc.desc    Unwanted state,run function setMute by callback and by arg true,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Async_0300', 0, function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Async_0300';
    // the function setMute is usefull when calling,other scence is unusefull
    call.setMute(true, (error, data) => {
      if (error) {
        console.log(`${caseName}Telephony_CallManager_setMuted_Async_0300 error,case success,error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
        return;
      }
      console.log(`${caseName} success,case failed,data:${toString(data)}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_CallManager_setMuted_Async_0400
   * @tc.name    Telephony_CallManager_setMuted_Async_0400
   * @tc.desc    Unwanted state,run function setMute by callback and by arg false,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Async_0400', 0, function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Async_0400';
    // the function setMute is usefull when calling,other scence is unusefull
    call.setMute(false, (error, data) => {
      if (error) {
        console.log(`${caseName} error,case success,error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
        return;
      }
      console.log(`${caseName} success,case failed,data:${toString(data)}`);
      expect().assertFail();
      done();
    });
  });




  /**
   * @tc.number  Telephony_CallManager_setMuted_Promise_0100
   * @tc.name    Telephony_CallManager_setMuted_Promise_0100
   * @tc.desc    Dial a number after the call is accepted,
   *             run function setMute by promise and by arg true,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Promise_0100', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Promise_0100';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE// state maybe other number,need a state (Will definitely arrive)
      });
      let callId = data.callId;
      call.setMute(true)
        .then(data => {
          console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
          expect(data === null).assertTrue();
          hangupCall2(caseName, done, callId);
        })
        .catch(error => {
          console.log(`${caseName} error,case failed,error:${toString(error)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
        });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_CallManager_setMuted_Promise_0200
   * @tc.name    Telephony_CallManager_setMuted_Promise_0200
   * @tc.desc    Dial a number after the call is accepted,
   *             run function setMute by promise and by arg false,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Promise_0200', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Promise_0200';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE// state maybe other number,need a state (Will definitely arrive)
      });
      let callId = data.callId;
      call.setMute(false)
        .then(data => {
          console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
          expect(data === null).assertTrue();
          hangupCall2(caseName, done, callId);
        })
        .catch(error => {
          console.log(`${caseName} error,case failed,error:${toString(error)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
        });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_CallManager_setMuted_Promise_0300
   * @tc.name    Telephony_CallManager_setMuted_Promise_0300
   * @tc.desc    Unwanted state,run function setMute by promise and by arg true,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Promise_0300', 0, function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Promise_0300';
    // the function setMute is usefull when calling,other scence is unusefull
    call.setMute(true)
      .then(data => {
        console.log(`${caseName} success,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch(error => {
        console.log(`${caseName} error,case success,error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_setMuted_Promise_0400
   * @tc.name    Telephony_CallManager_setMuted_Promise_0400
   * @tc.desc    Unwanted state,run function setMute by promise and by arg false,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setMuted_Promise_0400', 0, function (done) {
    let caseName = 'Telephony_CallManager_setMuted_Promise_0400';
    // the function setMute is usefull when calling,other scence is unusefull
    call.setMute(false)
      .then(data => {
        console.log(`${caseName} success,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch(error => {
        console.log(`${caseName} error,case success,error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  afterAll(function () {
    console.log('all 8 case is over for callmanager CallManagerSetMutedFunction.test');
  });
});
