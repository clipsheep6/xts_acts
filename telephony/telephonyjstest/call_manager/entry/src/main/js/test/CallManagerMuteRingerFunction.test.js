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
  AUTO_ACCEPT_NUMBER,
  CALL_STATUS_DIALING
} from './lib/Const.js';
import {scenceInCalling, hangupCall2} from './lib/ScenceInCalling.js';
import {toString} from './lib//ApiToPromise.js';
describe('CallManagement', function () {

  /**
   * @tc.number  Telephony_CallManager_muteRinger_Async_0100
   * @tc.name    Telephony_CallManager_muteRinger_Async_0100
   * @tc.desc    Unwanted state,run function muteRinger by callback,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_muteRinger_Async_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_muteRinger_Async_0100';
    call.muteRinger((error, data) => {
      if (error) {
        console.log(`${caseName} error,case failed,error:${toString(error)}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
      expect(data === null).assertTrue();
      done();
    });
  });

  /**
   * @tc.number  Telephony_CallManager_muteRinger_Async_0200
   * @tc.name    Telephony_CallManager_muteRinger_Async_0200
   * @tc.desc    Calling to 10086,run function muteRinger by callback,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_muteRinger_Async_0200', 0, async function (done) {
    let caseName = 'Telephony_CallManager_muteRinger_Async_0200';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.muteRinger((error, data) => {
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
   * @tc.number  Telephony_CallManager_muteRinger_Async_0500
   * @tc.name    Telephony_CallManager_muteRinger_Async_0500
   * @tc.desc    Calling to 10086, when CALL_STATUS_DIALING ,run function muteRinger by callback,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_muteRinger_Async_0500', 0, async function (done) {
    let caseName = 'Telephony_CallManager_muteRinger_Async_0500';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:CALL_STATUS_DIALING
      });
      let callId = data.callId;
      call.muteRinger((error, data) => {
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
   * @tc.number  Telephony_CallManager_muteRinger_Promise_0100
   * @tc.name    Telephony_CallManager_muteRinger_Promise_0100
   * @tc.desc    Unwanted state,run function muteRinger by promise,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_muteRinger_Promise_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_muteRinger_Promise_0100';
    call.muteRinger()
      .then(data => {
        console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
        expect(data === null).assertTrue();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} error,case failed,error:${toString(error)}`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_muteRinger_Promise_0200
   * @tc.name    Telephony_CallManager_muteRinger_Promise_0200
   * @tc.desc    Calling to 10086,run function muteRinger by promise,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_muteRinger_Promise_0200', 0, async function (done) {
    let caseName = 'Telephony_CallManager_muteRinger_Promise_0200';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.muteRinger()
        .then(data => {
          console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
          expect(data === null).assertTrue();
          hangupCall2(caseName, done, callId);
        })
        .catch((error) => {
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
   * @tc.number  Telephony_CallManager_muteRinger_Promise_0500
   * @tc.name    Telephony_CallManager_muteRinger_Promise_0500
   * @tc.desc    Calling to 10086, when CALL_STATUS_DIALING ,run function muteRinger by promise,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_muteRinger_Promise_0500', 0, async function (done) {
    let caseName = 'Telephony_CallManager_muteRinger_Promise_0500';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:CALL_STATUS_DIALING
      });
      let callId = data.callId;
      call.muteRinger()
        .then(data => {
          console.log(`${caseName} success,case ${data === null ? 'success' : 'failed'},data:${toString(data)}`);
          expect(data === null).assertTrue();
          hangupCall2(caseName, done, callId);
        })
        .catch((error) => {
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

  afterAll(function () {
    console.log('all 6 case is over for callmanager CallManagerMuteRingerFunction');
  });
});
