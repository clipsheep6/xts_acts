/**
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
import * as env from './lib/Const';
import { describe, it, expect } from 'deccjsunit/index';

describe('SimFileManagerFunction', function () {

  /**
    * @tc.number  Telephony_Sim_getIMSI_Async_0100
    * @tc.name    Test getIMSI interface, input parameter 0, get return; value is not null.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getIMSI_Async_0100', 0, async function (done) {
    sim.getIMSI(env.DEFAULT_SLOTID, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getIMSI_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getIMSI_Async_0100 data = ${data}`);
      expect(data !== '' || data !== undefined).assertTrue();
      expect(data.length === env.IMSI_LENGTH).assertTrue();
      console.log('Telephony_Sim_getIMSI_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getIMSI_Async_0200
    * @tc.name    To test the getIMSI interface, enter slotid as 4 and expect the result to enter err.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getIMSI_Async_0200', 0, async function (done) {
    sim.getIMSI(env.SLOTID4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log(`Telephony_Sim_getIMSI_Async_0200, err: ${err.message}`);
        console.log('Telephony_Sim_getIMSI_Async_0200 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log('Telephony_Sim_getIMSI_Async_0200 fail');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getIMSI_Promise_0100
    * @tc.name    Test getIMSI interface, input parameter 0, get return; value is not null.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getIMSI_Promise_0100', 0, async function (done) {
    try {
      let data = await sim.getIMSI(env.DEFAULT_SLOTID);
      console.log(`Telephony_Sim_getIMSI_Promise_0100 data = ${data}`);
      expect(data !== '' || data !== undefined).assertTrue();
      expect(data.length === env.IMSI_LENGTH).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getIMSI_Promise_0100 fail, err : ${err.message}`);
      done();
      return;
    }
    console.log('Telephony_Sim_getIMSI_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getIMSI_Promise_0200
    * @tc.name    To test the getIMSI interface, enter slotid as 4 and expect the result to enter err.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getIMSI_Promise_0200', 0, async function (done) {
    try {
      let data = await sim.getIMSI(env.SLOTID4);
    } catch (err) {
      // Enter the exception ID to enter err.
      console.log(`Telephony_Sim_getIMSI_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getIMSI_Promise_0200 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log('Telephony_Sim_getIMSI_Promise_0200 fail');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimIccId_Async_0100
    * @tc.name    Test getSimIccId interface, input parameter 0, get return; value is not null.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimIccId_Async_0100', 0, async function (done) {
    sim.getSimIccId(env.DEFAULT_SLOTID, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getSimIccId_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimIccId_Async_0100, data = ${data}`);
      expect(data !== '' || data !== undefined).assertTrue();
      expect(data.length === env.ICC_LENGTH).assertTrue();
      console.log('Telephony_Sim_getSimIccId_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimIccId_Async_0200
    * @tc.name    To test the getSimIccId interface, enter slotid as 4 and expect the result to enter err.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimIccId_Async_0200', 0, async function (done) {
    sim.getSimIccId(env.SLOTID4, (err, data) => {
      if (err) {
        // Enter the exception ID to enter err.
        console.log(`Telephony_Sim_getSimIccId_Async_0200, err: ${err.message}`);
        console.log('Telephony_Sim_getSimIccId_Async_0200 finish');
        done();
        return;
      }
      console.log('Telephony_Sim_getSimIccId_Async_0200 fail');
      expect().assertFail();
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimIccId_Promise_0100
    * @tc.name    Test getSimIccId interface, input parameter 0, get return; value is not null.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimIccId_Promise_0100', 0, async function (done) {
    try {
      let data = await sim.getSimIccId(env.DEFAULT_SLOTID);
      console.log(`Telephony_Sim_getSimIccId_Promise_0100 data${data}`);
      expect(data !== '' || data !== undefined).assertTrue();
      expect(data.length === env.ICC_LENGTH).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getSimIccId_Promise_0100 fail err${err.message}`);
      done();
      return;
    }
    console.log('Telephony_Sim_getSimIccId_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimIccId_Promise_0200
    * @tc.name    To test the getSimIccId interface, enter slotid as 4 and expect the result to enter err.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimIccId_Promise_0200', 0, async function (done) {
    try {
      let data = await sim.getSimIccId(env.SLOTID4);
    } catch (err) {
      console.log(`Telephony_Sim_getSimIccId_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getSimIccId_Promise_0200 finish');
      done();
      return;
    }
    console.log('Telephony_Sim_getSimIccId_Promise_0200 fail');
    expect().assertFail();
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getISOCountryCodeForSim_Async_0100
    * @tc.name    Enter normal parameters to test whether the getISOCountryCodeForSim interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getISOCountryCodeForSim_Async_0100', 0, async function (done) {
    let countryCode = 'cn';
    sim.getISOCountryCodeForSim(env.DEFAULT_SLOTID, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getISOCountryCodeForSim_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getISOCountryCodeForSim_Async_0100, data = ${data}`);
      // The country code for mainland China is cn.
      expect(data === countryCode).assertTrue();
      console.log('Telephony_Sim_getISOCountryCodeForSim_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getISOCountryCodeForSim_Async_0200
    * @tc.name    Enter exception parameters to test whether the getISOCountryCodeForSim interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getISOCountryCodeForSim_Async_0200', 0, async function (done) {
    sim.getISOCountryCodeForSim(env.SLOTID4, (err, data) => {
      if (err) {
        // Expect slot id 4 return err here.
        console.log(`Telephony_Sim_getISOCountryCodeForSim_Async_0200, err: ${err.message}`);
        console.log('Telephony_Sim_getISOCountryCodeForSim_Async_0200 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log(`Telephony_Sim_getISOCountryCodeForSim_Async_0200 fail, data = ${data}`);
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getISOCountryCodeForSim_Promise_0100
    * @tc.name    Enter normal parameters to test whether the getISOCountryCodeForSim interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getISOCountryCodeForSim_Promise_0100', 0, async function (done) {
    let countryCode = 'cn';
    try {
      let data = await sim.getISOCountryCodeForSim(env.DEFAULT_SLOTID);
      console.log(`Telephony_Sim_getISOCountryCodeForSim_Promise_0100, data = ${data}`);
      // The country code for mainland China is cn.
      expect(data === countryCode).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getISOCountryCodeForSim_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getISOCountryCodeForSim_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getISOCountryCodeForSim_Promise_0200
    * @tc.name    Enter exception parameters to test whether the getISOCountryCodeForSim interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getISOCountryCodeForSim_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getISOCountryCodeForSim(env.SLOTID4);
    } catch (err) {
      // Expect slotid 4 return err here.
      console.log(`Telephony_Sim_getISOCountryCodeForSim_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getISOCountryCodeForSim_Promise_0200 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log(`Telephony_Sim_getISOCountryCodeForSim_Promise_0200 fail, data = ${data}`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimOperatorNumeric_Async_0100
    * @tc.name    Enter normal parameters to test whether the getSimOperatorNumeric interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimOperatorNumeric_Async_0100', 0, async function (done) {
    let operatorNumTopThree = '460';
    sim.getSimOperatorNumeric(env.DEFAULT_SLOTID, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getSimOperatorNumeric_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimOperatorNumeric_Async_0100 , data = ${data}`);
      expect(data !== '' && data !== undefined).assertTrue();
      // The length of operator numeric in mainland China is 5.
      expect(data.length === env.OPERATOR_NUM_LENGTH).assertTrue();
      // The first three operator numeric in mainland China is '460'.
      expect(data.substring(0, 3) === operatorNumTopThree).assertTrue();
      console.log('Telephony_Sim_getSimOperatorNumeric_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimOperatorNumeric_Async_0200
    * @tc.name    Enter exception parameters to test whether the getSimOperatorNumeric interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimOperatorNumeric_Async_0200', 0, async function (done) {
    sim.getSimOperatorNumeric(env.SLOTID4, (err, data) => {
      if (err) {
        // Expect slotid 4 return err here.
        console.log(`Telephony_Sim_getSimOperatorNumeric_Async_0200, err: ${err.message}`);
        console.log('Telephony_Sim_getSimOperatorNumeric_Async_0200 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log(`Telephony_Sim_getSimOperatorNumeric_Async_0200 fail, data = ${data}`);
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimOperatorNumeric_Promise_0100
    * @tc.name    Enter normal parameters to test whether the getSimOperatorNumeric interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimOperatorNumeric_Promise_0100', 0, async function (done) {
    let operatorNumTopThree = '460';
    try {
      let data = await sim.getSimOperatorNumeric(env.DEFAULT_SLOTID);
      console.log(`Telephony_Sim_getSimOperatorNumeric_Promise_0100, data = ${data}`);
      expect(data !== '' && data !== undefined).assertTrue();
      // The length of operator numeric in mainland China is 5.
      expect(data.length === env.OPERATOR_NUM_LENGTH).assertTrue();
      // The first three operator numeric in mainland China is '460'.
      expect(data.substring(0, 3) === operatorNumTopThree).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getSimOperatorNumeric_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getSimOperatorNumeric_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimOperatorNumeric_Promise_0200
    * @tc.name    Enter exception parameters to test whether the getSimOperatorNumeric interface function
    *             can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimOperatorNumeric_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getSimOperatorNumeric(env.SLOTID4);
    } catch (err) {
      // Expect slotid 4 return err here.
      console.log(`Telephony_Sim_getSimOperatorNumeric_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getSimOperatorNumeric_Promise_0200 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log(`Telephony_Sim_getSimOperatorNumeric_Promise_0200 fail, data = ${data}`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimSpn_Async_0100
    * @tc.name    Enter normal parameters to test whether the getSimSpn interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimSpn_Async_0100', 0, async function (done) {
    sim.getSimSpn(env.DEFAULT_SLOTID, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getSimSpn_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimSpn_Async_0100 , data = ${data}`);
      sim.getSimOperatorNumeric(env.DEFAULT_SLOTID, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_getSimSpn_Async_0100 getSimOperatorNumeric fail, err: ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        console.log(`Telephony_Sim_getSimSpn_Async_0100 getSimOperatorNumeric , value : ${value}`);
        if ((value === env.OPERATOR.CMCC_CODE_1) || (value === env.OPERATOR.CMCC_CODE_2) ||
          (value === env.OPERATOR.CMCC_CODE_3) || (value === env.OPERATOR.CMCC_CODE_4)) {
          expect(data === env.SPN.CMCC).assertTrue();
        } else if ((value === env.OPERATOR.CU_CODE_1) || (value === env.OPERATOR.CU_CODE_2) ||
          (value === env.OPERATOR.CU_CODE_3)) {
          expect(data === env.SPN.CU).assertTrue();
        } else if ((value === env.OPERATOR.CT_CODE_1) || (value === env.OPERATOR.CT_CODE_2) ||
          (value === env.OPERATOR.CT_CODE_3)) {
          expect(data === env.SPN.CT).assertTrue();
        }
        console.log('Telephony_Sim_getSimSpn_Async_0100 finish');
        done();
      });
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimSpn_Async_0200
    * @tc.name    Enter exception parameters to test whether the getSimSpn interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimSpn_Async_0200', 0, async function (done) {
    sim.getSimSpn(env.SLOTID4, (err, data) => {
      if (err) {
        // Expect slotid 4 return err here.
        console.log(`Telephony_Sim_getSimSpn_Async_0200 fail: ${err.message}`);
        console.log('Telephony_Sim_getSimSpn_Async_0200 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log(`Telephony_Sim_getSimSpn_Async_0200 fail, data = ${data}`);
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimSpn_Promise_0100
    * @tc.name    Enter normal parameters to test whether the getSimSpn interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimSpn_Promise_0100', 0, async function (done) {
    try {
      let data = await sim.getSimSpn(env.DEFAULT_SLOTID);
      console.log(`Telephony_Sim_getSimSpn_Promise_0100, data = ${data}`);
      try {
        let value = await sim.getSimOperatorNumeric(env.DEFAULT_SLOTID);
        console.log(`Telephony_Sim_getSimSpn_Promise_0100, value : ${value}`);
        if ((value === env.OPERATOR.CMCC_CODE_1) || (value === env.OPERATOR.CMCC_CODE_2) ||
          (value === env.OPERATOR.CMCC_CODE_3) || (value === env.OPERATOR.CMCC_CODE_4)) {
          expect(data === env.SPN.CMCC).assertTrue();
        } else if ((value === env.OPERATOR.CU_CODE_1) || (value === env.OPERATOR.CU_CODE_2) ||
          (value === env.OPERATOR.CU_CODE_3)) {
          expect(data === env.SPN.CU).assertTrue();
        } else if ((value === env.OPERATOR.CT_CODE_1) || (value === env.OPERATOR.CT_CODE_2) ||
          (value === env.OPERATOR.CT_CODE_3)) {
          expect(data === env.SPN.CT).assertTrue();
        }
      } catch (err) {
        console.log(`Telephony_Sim_getSimSpn_Promise_0100 getSimOperatorNumeric fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
    } catch (err) {
      console.log(`Telephony_Sim_getSimSpn_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getSimSpn_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimSpn_Promise_0200
    * @tc.name    Enter exception parameters to test whether the getSimSpn interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimSpn_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getSimSpn(env.SLOTID4);
    } catch (err) {
      // Expect slotid 4 return err here.
      console.log(`Telephony_Sim_getSimSpn_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getSimSpn_Promise_0200 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log(`Telephony_Sim_getSimSpn_Promise_0200 fail, data = ${data}`);
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimGid1_Async_0100
    * @tc.name    Enter normal parameters to test whether the getSimGid1 interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimGid1_Async_0100', 0, async function (done) {
    let minLength = 1;
    sim.getSimGid1(env.DEFAULT_SLOTID, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getSimGid1_Async_0100 fail, err: ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_getSimGid1_Async_0100, data = ${data}`);
      expect(data !== '' && data !== undefined).assertTrue();
      expect((data.length >= minLength)).assertTrue();
      console.log('Telephony_Sim_getSimGid1_Async_0100 finish');
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimGid1_Async_0200
    * @tc.name    Enter exception parameters to test whether the getSimGid1 interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimGid1_Async_0200', 0, async function (done) {
    sim.getSimGid1(env.SLOTID4, (err, data) => {
      if (err) {
        // Expect slotid 4 return err here.
        console.log(`Telephony_Sim_getSimGid1_Async_0200, err: ${err.message}`);
        console.log('Telephony_Sim_getSimGid1_Async_0200 finish');
        done();
        return;
      }
      expect().assertFail();
      console.log(`Telephony_Sim_getSimGid1_Async_0200 fail, data = ${data}`);
      done();
    });
  });

  /**
    * @tc.number  Telephony_Sim_getSimGid1_Promise_0100
    * @tc.name    Enter normal parameters to test whether the getSimGid1 interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimGid1_Promise_0100', 0, async function (done) {
    let minLength = 1;
    try {
      let data = await sim.getSimGid1(env.DEFAULT_SLOTID);
      console.log(`Telephony_Sim_getSimGid1_Promise_0100, data = ${data}`);
      expect(data !== '' && data !== undefined).assertTrue();
      expect((data.length >= minLength)).assertTrue();
    } catch (err) {
      console.log(`Telephony_Sim_getSimGid1_Promise_0100 fail, err: ${err.message}`);
      expect().assertFail();
      done();
      return;
    }
    console.log('Telephony_Sim_getSimGid1_Promise_0100 finish');
    done();
  });

  /**
    * @tc.number  Telephony_Sim_getSimGid1_Promise_0200
    * @tc.name    Enter exception parameters to test whether the getSimGid1 interface function can execute normally.
    * @tc.desc    Function test
    */
  it('Telephony_Sim_getSimGid1_Promise_0200', 0, async function (done) {
    try {
      var data = await sim.getSimGid1(env.SLOTID4);
    } catch (err) {
      // Expect slotid 4 return err here.
      console.log(`Telephony_Sim_getSimGid1_Promise_0200, err: ${err.message}`);
      console.log('Telephony_Sim_getSimGid1_Promise_0200 finish');
      done();
      return;
    }
    expect().assertFail();
    console.log(`Telephony_Sim_getSimGid1_Promise_0200 fail, data = ${data}`);
    done();
  });
});