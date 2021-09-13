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
  NOT_ACCEPT_NUMBER,
  CALL_STATUS_ALERTING,
  CALL_STATUS_DIALING
} from './lib/Const.js';
import {scenceInCalling, hangupCall2} from './lib/ScenceInCalling.js';
import {toString} from './lib//ApiToPromise.js';
describe('CallManagement', function () {

  /**
   * @tc.number  Telephony_CallManager_isRinging_Async_0100
   * @tc.name    Telephony_CallManager_isRinging_Async_0100
   * @tc.desc    Unwanted state ,run the function isRinging by callback ,the function return false
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_isRinging_Async_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_isRinging_Async_0100';
    call.isRinging(function (error, data) {
      if (error) {
        console.log(`${caseName} error,case failed,error:${toString(error)}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
      expect(data === false).assertTrue();
      done();
    });
  });

  /**
   * @tc.number  Telephony_CallManager_isRinging_Async_0200
   * @tc.name    Telephony_CallManager_isRinging_Async_0200
   * @tc.desc    Unwanted state ,Dial a call with number null and after finished the call,
   *             run the function isRinging by callback,the function return false
   * @tc.type    Function
   * @tc.level   Level3
   */
  /* it('Telephony_CallManager_isRinging_Async_0200', 0,async function (done) {
         let caseName = 'Telephony_CallManager_isRinging_Async_0200'
         try{
             await scenceInCallingNull({
                 caseName:caseName
             })
             call.isRinging((error,data)=>{
                 if(error){
                     console.log(`${caseName} error,case failed,error:${toString(error)}`)
                     expect().assertFail()
                     done()
                     return
                 }
                 console.log(`${caseName} success,case ${data===false?'success':'failed'},data:${toString(data)}`)
                 expect(data===false).assertTrue()
                 done()
             })
         }catch(error){
             console.log(`${caseName} scenceInCallingNull error,case failed,error:${toString(error)}`)
             expect().assertFail()
             done()
         }
     }) */

  /**
   * @tc.number  Telephony_CallManager_isRinging_Async_0300
   * @tc.name    Telephony_CallManager_isRinging_Async_0300
   * @tc.desc    Unwanted state ,Dial a call with number before acceptting ,
   *             run the function isRinging by callback,the function return false
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_isRinging_Async_0300', 0, async function (done) {
    let caseName = 'Telephony_CallManager_isRinging_Async_0300';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:NOT_ACCEPT_NUMBER,
        checkState:CALL_STATUS_ALERTING// state maybe other number,need a state (Will definitely arrive)
      });
      let callId = data.callId;
      call.isRinging((error, data) => {
        if (error) {
          console.log(`${caseName} error,case failed,error:${toString(error)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
          return;
        }
        console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
        expect(data === false).assertTrue();
        hangupCall2(caseName, done, callId);
      });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });




  /**
   * @tc.number  Telephony_CallManager_isRinging_Promise_0100
   * @tc.name    Telephony_CallManager_isRinging_Promise_0100
   * @tc.desc    Unwanted state ,run the function isRinging by promise ,the function return false
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_isRinging_Promise_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_isRinging_Promise_0100';
    call.isRinging()
      .then(data => {
        console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
        expect(data === false).assertTrue();
        done();
      })
      .catch(error => {
        console.log(`${caseName} error,case failed,error:${toString(error)}`);
        expect().assertFail();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_isRinging_Promise_0200
   * @tc.name    Telephony_CallManager_isRinging_Promise_0200
   * @tc.desc    Unwanted state ,Dial a call with number null and after finished the call,
   *             run the function isRinging by promise,the function return false
   * @tc.type    Function
   * @tc.level   Level3
   */
  /* it('Telephony_CallManager_isRinging_Promise_0200', 0,async function (done) {
         let caseName = 'Telephony_CallManager_isRinging_Promise_0200'
         try{
             await scenceInCallingNull({
                 caseName:caseName
             })
             call.isRinging()
             .then(data=>{
                 console.log(`${caseName} success,case ${data===false?'success':'failed'},data:${toString(data)}`)
                 expect(data===false).assertTrue()
                 done()
             })
             .catch(error=>{
                 console.log(`${caseName} error,case failed,error:${toString(error)}`)
                 expect().assertFail()
                 done()
             })
         }catch(error){
             console.log(`${caseName} scenceInCallingNull error,case failed,error:${toString(error)}`)
             expect().assertFail()
             done()
         }
     }) */

  /**
   * @tc.number  Telephony_CallManager_isRinging_Promise_0300
   * @tc.name    Telephony_CallManager_isRinging_Promise_0300
   * @tc.desc    Unwanted state ,Dial a call with number before acceptting ,
   *             run the function isRinging by promise,the function return false
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_isRinging_Promise_0300', 0, async function (done) {
    let caseName = 'Telephony_CallManager_isRinging_Promise_0300';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:NOT_ACCEPT_NUMBER,
        checkState:CALL_STATUS_DIALING// state maybe other number,need a state (Will definitely arrive)
      });
      let callId = data.callId;
      call.isRinging()
        .then(data => {
          console.log(`${caseName} success,case ${data === false ? 'success' : 'failed'},data:${toString(data)}`);
          expect(data === false).assertTrue();
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

  afterAll(function () {
    console.log('all 6 case is over for callmanager CallManagerIsRingingFunction');
  });
});
