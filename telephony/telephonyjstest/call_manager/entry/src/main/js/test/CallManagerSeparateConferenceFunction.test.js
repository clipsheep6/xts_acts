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
  BOUNDARY_NUMBER_INT,
  TATUS_ACTIVE,
  AUTO_ACCEPT_NUMBER,
  CALL_ID_NOT_EXIST,
} from './lib/Const.js';
import {scenceInCalling, hangupCall2} from './lib/ScenceInCalling.js';
import {toString} from './lib/ApiToPromise.js';
describe('CallManagement', function () {
  /**
   * @tc.number  Telephony_CallManager_separateConference_Async_0100
   * @tc.name    Telephony_CallManager_separateConference_Async_0100
   * @tc.desc    Run separateConference by callback when callId is any number(such as 1234)
   *             that is not exit in calllist,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_separateConference_Async_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_separateConference_Async_0100';
    call.separateConference(CALL_ID_NOT_EXIST, function (error, data) {
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
   * @tc.number  Telephony_CallManager_separateConference_Async_0200
   * @tc.name    Telephony_CallManager_separateConference_Async_0200
   * @tc.desc    Run separateConference by callback when callId is number at boundary ,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_separateConference_Async_0200', 0, function (done) {
    let caseName = 'Telephony_CallManager_separateConference_Async_0200';
    call.separateConference(BOUNDARY_NUMBER_INT, function (error, data) {
      if (error) {
        console.log(`${caseName} error,case success,error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
        return;
      }
      console.log(`${caseName}  success,case error,data:${toString(data)}`);
      expect().assertFail();
      done();
    });
  });

  /**
   * @tc.number  Telephony_CallManager_separateConference_Async_0300
   * @tc.name    Telephony_CallManager_separateConference_Async_0300
   * @tc.desc    Dial a call and get the callId,the function separateConference by callback return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_separateConference_Async_0300', 0, async function (done) {
    let caseName = 'Telephony_CallManager_separateConference_Async_0300';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.separateConference(callId, function (error, data) {
        if (error) {
          console.log(`${caseName} error,case success,error:${toString(error)}`);
          expect(!!error).assertTrue();
          hangupCall2(caseName, done, callId);
          return;
        }
        console.log(`${caseName} success,case failed,data:${toString(data)}`);
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
   * @tc.number  Telephony_CallManager_separateConference_Promise_0100
   * @tc.name    Telephony_CallManager_separateConference_Promise_0100
   * @tc.desc    Run separateConference by promise when callId is any number(such as 1234)
   *             that is not exit in calllist,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_separateConference_Promise_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_separateConference_Promise_0100';
    call.separateConference(CALL_ID_NOT_EXIST)
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
   * @tc.number  Telephony_CallManager_separateConference_Promise_0200
   * @tc.name    Telephony_CallManager_separateConference_Promise_0200
   * @tc.desc    Run separateConference by promise when callId is number at boundary ,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_separateConference_Promise_0200', 0, function (done) {
    let caseName = 'Telephony_CallManager_separateConference_Promise_0200';
    call.separateConference(BOUNDARY_NUMBER_INT)
      .then((data) => {
        console.log(`${caseName} success,case error,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} error,case success,error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_separateConference_Promise_0300
   * @tc.name    Telephony_CallManager_separateConference_Promise_0300
   * @tc.desc    Dial a call and get the callId,the function separateConference by promise return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_separateConference_Promise_0300', 0, async function (done) {
    let caseName = 'Telephony_CallManager_separateConference_Promise_0300';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.separateConference(callId)
        .then(data => {
          console.log(`${caseName} success,case failed,data:${toString(data)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
        })
        .catch(error => {
          console.log(`${caseName} error,case success,error:${toString(error)}`);
          expect(!!error).assertTrue();
          hangupCall2(caseName, done, callId);
        });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });

  afterAll(function () {
    console.log('all 6 case is over for callmanager CallManagerSeparateConferenceFunction');
  });
});
