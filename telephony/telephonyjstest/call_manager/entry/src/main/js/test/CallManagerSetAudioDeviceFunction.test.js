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
  DEVICE_SPEAKER,
  DEVICE_WIRED_HEADSET,
  AUTO_ACCEPT_NUMBER,
  DEVICE_BLUETOOTH_SCO,
  DEVICE_MIC,
} from './lib/Const.js';
import {scenceInCalling, hangupCall2} from './lib/ScenceInCalling.js';
import {toString} from './lib//ApiToPromise.js';
describe('CallManagement', function () {

  /**
   * @tc.number  Telephony_CallManager_setAudioDevice_Async_0100
   * @tc.name    Telephony_CallManager_setAudioDevice_Async_0100
   * @tc.desc    Calling to 10086,run function setAudioDevice by callback and by arg DEVICE_MIC,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Async_0100', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Async_0100';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_MIC, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setAudioDevice_Async_0200
   * @tc.name    Telephony_CallManager_setAudioDevice_Async_0200
   * @tc.desc    Calling to 10086,run function setAudioDevice by callback and by arg DEVICE_SPEAKER,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Async_0200', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Async_0200';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_SPEAKER, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setAudioDevice_Async_0300
   * @tc.name    Telephony_CallManager_setAudioDevice_Async_0300
   * @tc.desc    Calling to 10086,run function setAudioDevice
   *             by callback and by arg DEVICE_WIRED_HEADSET,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Async_0300', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Async_0300';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_WIRED_HEADSET, (error, data) => {
        if (error) {
          console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
          expect(!!error).assertTrue();
          hangupCall2(caseName, done, callId);
          return;
        }
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
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
   * @tc.number  Telephony_CallManager_setAudioDevice_Async_0400
   * @tc.name    Telephony_CallManager_setAudioDevice_Async_0400
   * @tc.desc    Calling to 10086,run function setAudioDevice
   *             by callback and by arg DEVICE_BLUETOOTH_SCO,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Async_0400', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Async_0400';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_BLUETOOTH_SCO, (error, data) => {
        if (error) {
          console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
          expect(!!error).assertTrue();
          hangupCall2(caseName, done, callId);
          return;
        }
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
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
   * @tc.number  Telephony_CallManager_setAudioDevice_Async_0500
   * @tc.name    Telephony_CallManager_setAudioDevice_Async_0500
   * @tc.desc    Unwanted state,run function setAudioDevice by callback and by arg DEVICE_MIC,
   *             the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Async_0500', 0, function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Async_0500';
    call.setAudioDevice(DEVICE_MIC, (error, data) => {
      if (error) {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
        return;
      }
      console.log(`${caseName} error,case failed,data:${toString(data)}`);
      expect().assertFail();
      done();
    });
  });




  /**
   * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0100
   * @tc.name    Telephony_CallManager_setAudioDevice_Promise_0100
   * @tc.desc    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_MIC,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Promise_0100', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0100';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_MIC)
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
   * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0200
   * @tc.name    Telephony_CallManager_setAudioDevice_Promise_0200
   * @tc.desc    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_SPEAKER,
   *             the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Promise_0200', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0200';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_SPEAKER)
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
   * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0300
   * @tc.name    Telephony_CallManager_setAudioDevice_Promise_0300
   * @tc.desc    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_BLUETOOTH_SCO,
   *             the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Promise_0300', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0300';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_BLUETOOTH_SCO)
        .then(data => {
          console.log(`${caseName} error,case failed,data:${toString(data)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
        })
        .catch(error => {
          console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
          expect(!!error).assertTrue();
          hangupCall2(caseName, done, callId);
        });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0400
   * @tc.name    Telephony_CallManager_setAudioDevice_Promise_0400
   * @tc.desc    Calling to 10086,run function setAudioDevice by promise and by arg DEVICE_BLUETOOTH_SCO,
   *             the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Promise_0400', 0, async function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0400';
    try {
      let data = await scenceInCalling({
        caseName:caseName,
        phoneNumber:AUTO_ACCEPT_NUMBER,
        checkState:TATUS_ACTIVE
      });
      let callId = data.callId;
      call.setAudioDevice(DEVICE_BLUETOOTH_SCO)
        .then(data => {
          console.log(`${caseName} error,case failed,data:${toString(data)}`);
          expect().assertFail();
          hangupCall2(caseName, done, callId);
        })
        .catch(error => {
          console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
          expect(!!error).assertTrue();
          hangupCall2(caseName, done, callId);
        });
    } catch (error) {
      console.log(`${caseName} scenceInCalling error,case failed,error:${toString(error)}`);
      expect().assertFail();
      done();
    }
  });

  /**
   * @tc.number  Telephony_CallManager_setAudioDevice_Promise_0500
   * @tc.name    Telephony_CallManager_setAudioDevice_Promise_0500
   * @tc.desc    Unwanted state,run function setAudioDevice by promise and by arg DEVICE_MIC,
   *             the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setAudioDevice_Promise_0500', 0, function (done) {
    let caseName = 'Telephony_CallManager_setAudioDevice_Promise_0500';
    call.setAudioDevice(DEVICE_MIC)
      .then(data => {
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch(error => {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  afterAll(function () {
    console.log('all 10 case is over for callmanager CallManagerSetAudioDeviceFunction');
  });
});
