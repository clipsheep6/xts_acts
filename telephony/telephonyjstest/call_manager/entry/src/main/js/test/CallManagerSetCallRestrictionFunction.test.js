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
  RESTRICTION_TYPE_ALL_INCOMING,
  RESTRICTION_MODE_ACTIVATION,
  RESTRICTION_TYPE_ROAMING_INCOMING,
  RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
  RESTRICTION_TYPE_INTERNATIONAL,
  RESTRICTION_TYPE_ALL_OUTGOING,
  RESTRICTION_MODE_DEACTIVATION,
  DEFAULT_SLOT_ID,
  ERROR_PASSWORD,
  RIGHT_PASSWORD,
} from './lib/Const.js';
import {toString} from './lib//ApiToPromise.js';
describe('CallManagement', function () {

  /**
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0100
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0100
   * @tc.desc    Run function setCallRestriction by callback by arg
   *             slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0100';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0200
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0200
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
   *             mode RESTRICTION_MODE_DEACTIVATIO,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0200', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0200';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0300
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0300
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0001
   *             mode RESTRICTION_MODE_DEACTIVATIO,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0300', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0300';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_INCOMING,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0400
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0400
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0400', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0400';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_OUTGOING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0500
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0500
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0500', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0500';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_OUTGOING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0600
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0600
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0600', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0600';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_OUTGOING,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0700
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0700
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0700', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0700';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0800
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0800
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0800', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0800';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_0900
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_0900
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_0900', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_0900';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_1000
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_1000
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_1000', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_1000';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_1100
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_1100
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_1100', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_1100';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_1200
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_1200
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_1200', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_1200';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_1300
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_1300
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_1300', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_1300';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ROAMING_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_1400
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_1400
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_1400', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_1400';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ROAMING_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_1500
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_1500
   * @tc.desc    Run function setCallRestriction by callback
   *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Async_1500', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_1500';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ROAMING_INCOMING,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Async_1800
   * @tc.name    Telephony_CallManager_setCallRestriction_Async_1800
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId that is at boundary type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  /*
  it('Telephony_CallManager_setCallRestriction_Async_1800', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Async_1800';
    call.setCallRestriction(BOUNDARY_NUMBER_INT, {
      type:RESTRICTION_TYPE_ROAMING_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    }, (error, data) => {
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
 */



  /**
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0100
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0100
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0100', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0100';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0200
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0200
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0000
   *             mode RESTRICTION_MODE_DEACTIVATIO,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0200', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0200';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0300
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0300
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_INCOMING password 0001
   *             mode RESTRICTION_MODE_DEACTIVATIO,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0300', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0300';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_INCOMING,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    })
      .then(data => {
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0400
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0400
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0400', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0400';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_OUTGOING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0500
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0500
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0500', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0500';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_OUTGOING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0600
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0600
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ALL_OUTGOING password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0600', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0600';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ALL_OUTGOING,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
      .then(data => {
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0700
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0700
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0700', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0700';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0800
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0800
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0800', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0800';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_0900
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_0900
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_0900', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_0900';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
      .then(data => {
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1000
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_1000
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_1000', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1000';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1100
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_1100
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_1100', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1100';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1200
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_1200
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_1200', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1200';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_INTERNATIONAL_EXCLUDING_HOME,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
      .then(data => {
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1300
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_1300
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_1300', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1300';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ROAMING_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1400
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_1400
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0000
   *             mode RESTRICTION_MODE_DEACTIVATION,the function return void
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_1400', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1400';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ROAMING_INCOMING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_DEACTIVATION
    })
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
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1500
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_1500
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId 1 type RESTRICTION_TYPE_ROAMING_INCOMING password 0001
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  it('Telephony_CallManager_setCallRestriction_Promise_1500', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1500';
    call.setCallRestriction(DEFAULT_SLOT_ID, {
      type:RESTRICTION_TYPE_ROAMING_INCOMING,
      password:ERROR_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
      .then(data => {
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  });

  /**
   * @tc.number  Telephony_CallManager_setCallRestriction_Promise_1800
   * @tc.name    Telephony_CallManager_setCallRestriction_Promise_1800
   * @tc.desc    Run function setCallRestriction by promise
   *             by arg slotId that is at boundary type RESTRICTION_TYPE_ALL_OUTGOING password 0000
   *             mode RESTRICTION_MODE_ACTIVATION,the function return error
   * @tc.type    Function
   * @tc.level   Level3
   */
  /* it('Telephony_CallManager_setCallRestriction_Promise_1800', 0, function (done) {
    let caseName = 'Telephony_CallManager_setCallRestriction_Promise_1800';
    call.setCallRestriction(BOUNDARY_NUMBER_INT, {
      type:RESTRICTION_TYPE_ALL_OUTGOING,
      password:RIGHT_PASSWORD,
      mode:RESTRICTION_MODE_ACTIVATION
    })
      .then(data => {
        console.log(`${caseName} error,case failed,data:${toString(data)}`);
        expect().assertFail();
        done();
      })
      .catch((error) => {
        console.log(`${caseName} success,case ${error ? 'success' : 'failed'},error:${toString(error)}`);
        expect(!!error).assertTrue();
        done();
      });
  }); */

  afterAll(function () {
    console.log('all 32 case is over for callmanager CallManagerSetCallRestrictionFunction');
  });
});
