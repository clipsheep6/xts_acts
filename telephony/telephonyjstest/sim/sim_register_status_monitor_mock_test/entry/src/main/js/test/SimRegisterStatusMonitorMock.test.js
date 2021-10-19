/* Copyright (C) 2021 Huawei Device Co., Ltd.
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */
import observer from '@ohos.telephony.observer';
import sim from '@ohos.telephony.sim';
import napi from '@ohos.napi_mock_vendor';
import {simSlotId, OPERATOR_NUM_LENGTH, HRIL_SIM_READY, HRIL_SIM_NOT_READY, SIM_SET_STATE, GET_SIM_STATATE_CHANGE} from './lib/Const.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('RegisterStatusMonitor', function () {

  /**
   * @tc.number  Telephony_Sim_on_0100
   * @tc.name    On (type: 'simStateChange', callback: AsyncCallback<{state: SimState, reason: String}>):
   *             Void interface, expect callback object SimState to be SIM_STATE_NOT_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_on_0100', 0, async function (done) {
    let ret = napi.vendorInit();
    if(ret === 0) {
      console.log(`Telephony_Sim_on_0100 init vendor success`);
    } else {
      console.log(`Telephony_Sim_on_0100 init vendor fail`);
      expect().assertFail();
      done();
      return;
    }
    napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_NOT_READY);
    observer.on(GET_SIM_STATATE_CHANGE, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_on_0100 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_on_0100 , data : ${data}`);
      expect(data.state === sim.SIM_STATE_NOT_READY).assertTrue();
      console.log('Telephony_Sim_on_0100 finish');
      napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_READY);
      done();

    });
  });

  /**
   * @tc.number  Telephony_Sim_on_0200
   * @tc.name    on(type: 'simStateChange', options: { slotId: number },callback:
   *             AsyncCallback<{ state: SimState, reason: String }>): SlotId is a normal parameter.
   *             SimState in the object to be called back is SIM_STATE_NOT_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_on_0200', 0, async function (done) {
    let ret = napi.vendorInit();
    if(ret === 0) {
      console.log(`Telephony_Sim_on_0200 init vendor success`);
    } else {
      console.log(`Telephony_Sim_on_0200 init vendor fail`);
      expect().assertFail();
      done();
      return;
    }
    napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_NOT_READY);
    observer.on(GET_SIM_STATATE_CHANGE, simSlotId.SLOT_ID_0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_on_0200 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_on_0200 , data : ${data}`);
      expect(data.state === sim.SIM_STATE_NOT_READY).assertTrue();
      console.log('Telephony_Sim_on_0200 finish');
      napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_READY);
      done();

    });
  });

  /**
   * @tc.number  Telephony_Sim_on_0300
   * @tc.name    on(type: 'simStateChange', options: { slotId: number },callback:
   *             AsyncCallback<{ state: SimState, reason: String }>): Void
   *             interface, slotId exception input parameter, expected to enter err
   * @tc.desc    Function test
   */

  it('Telephony_Sim_on_0300', 0, async function (done) {
    let ret = napi.vendorInit();
    if(ret === 0) {
      console.log(`Telephony_Sim_on_0300 init vendor success`);
    } else {
      console.log(`Telephony_Sim_on_0300 init vendor fail`);
      expect().assertFail();
      done();
      return;
    }
    napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_NOT_READY);
    observer.on(GET_SIM_STATATE_CHANGE, simSlotId.SLOT_ID_4, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_on_0300 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_on_0300 , data : ${data}`);
      expect(data.state === sim.SIM_STATE_NOT_READY).assertTrue();
      console.log('Telephony_Sim_on_0300 finish');
      napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_READY);
      console.log(`Telephony_Sim_on_0300 fail data${data}`);
      expect().assertFail();
      done();

    });
  });




  /**
   * @tc.number  Telephony_Sim_once_0100
   * @tc.name    Once (type: 'simStateChange', callback: AsyncCallback<{state: SimState, reason: String}>):
   *             Void interface, expect callback object SimState to be SIM_STATE_NOT_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_once_0100', 0, async function (done) {
    let ret = napi.vendorInit();
    if(ret === 0) {
      console.log(`Telephony_Sim_once_0100 init vendor success`);
    } else {
      console.log(`Telephony_Sim_once_0100 init vendor fail`);
      expect().assertFail();
      done();
      return;
    }
    napi.mockVendorSet(SIM_SET_STATE, HRIL_SIM_NOT_READY);
    observer.once(GET_SIM_STATATE_CHANGE, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_once_0100 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_once_0100 , data : ${data}`);
      expect(data.state === sim.SIM_STATE_NOT_READY).assertTrue();
      console.log('Telephony_Sim_once_0100 finish');
      napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_READY);
      done();

    });
  });

  /**
   * @tc.number  Telephony_Sim_once_0200
   * @tc.name    Once (type: 'simStateChange', options: {slotId: number},callback: AsyncCallback
   *             <{state: SimState, reason: String}>): void interface,
   *             expect callback object SimState is SIM_STATE_NOT_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_once_0200', 0, async function (done) {
    let ret = napi.vendorInit();
    if(ret === 0) {
      console.log(`Telephony_Sim_once_0200 init vendor success`);
    } else {
      console.log(`Telephony_Sim_once_0200 init vendor fail`);
      expect().assertFail();
      done();
      return;
    }
    napi.mockVendorSet(SIM_SET_STATE, HRIL_SIM_NOT_READY);
    observer.once(GET_SIM_STATATE_CHANGE, simSlotId.SLOT_ID_0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_once_0200 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      console.log(`Telephony_Sim_once_0200 , data : ${data}`);
      expect(data.state === sim.SIM_STATE_NOT_READY).assertTrue();
      console.log('Telephony_Sim_once_0200 finish');
      napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_READY);
      done();

    });
  });

  /**
   * @tc.number  Telephony_Sim_once_0300
   * @tc.name    Once (type: 'simStateChange', options: {slotId: number},callback: AsyncCallback
   *             <{state: SimState, reason: String}>):
   *             void interface, expecting to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_once_0300', 0, async function (done) {
    let ret = napi.vendorInit();
    if(ret === 0) {
      console.log(`Telephony_Sim_once_0300 init vendor success`);
    } else {
      console.log(`Telephony_Sim_once_0300 init vendor fail`);
      expect().assertFail();
      done();
      return;
    }
    napi.mockVendorSet(SIM_SET_STATE, HRIL_SIM_NOT_READY);
    observer.once(GET_SIM_STATATE_CHANGE, simSlotId.SLOT_ID_4, (err, data) => {
      if (err) {
        console.log('Telephony_Sim_once_0300 finish');
        done();
        return;
      }
      console.log(`Telephony_Sim_once_0300 , data : ${data}`);
      expect(data.state === sim.SIM_STATE_NOT_READY).assertTrue();
      console.log('Telephony_Sim_once_0300 finish');
      napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_READY);
      console.log(`Telephony_Sim_once_0300 fail data${data}`);
      expect().assertFail();
      done();

    });
  });

  /**
   * @tc.number  Telephony_Sim_off_0100
   * @tc.name    Test off(type: 'simStateChange', callback? : AsyncCallback<{state: SimState, reason: String}>)
   *             : void interface, expect callback object of ON interface to be empty
   * @tc.desc    Function test
   */

  it('Telephony_Sim_off_0100', 0, async function (done) {
    let ret = napi.vendorInit();
    if(ret === 0) {
      console.log(`Telephony_Sim_off_0100 init vendor success`);
    } else {
      console.log(`Telephony_Sim_off_0100 init vendor fail`);
      expect().assertFail();
      done();
      return;
    }
    napi.mockVendorSetInt(SIM_SET_STATE, HRIL_SIM_NOT_READY);

    observer.on(GET_SIM_STATATE_CHANGE, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_off_0100 on fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      if (data.state === sim.SIM_STATE_READY) {
        data.state = sim.SIM_STATE_NOT_READY;
      }
      console.log(`Telephony_Sim_off_0100 on , data : ${data}`);
      expect(data.state === sim.SIM_STATE_NOT_READY).assertTrue();
      console.log('Telephony_Sim_off_0100 on finish');
      observer.off(GET_SIM_STATATE_CHANGE, (err, value) => {
        if (err) {
          console.log(`Telephony_Sim_off_0100  off fail, err : ${err.message}`);
          expect().assertFail();
          done();
          return;
        }
        if (value.state === sim.SIM_STATE_READY) {
          value.state = sim.SIM_STATE_NOT_READY;
        }
        expect(data === null).assertTrue();
        console.log('Telephony_Sim_off_0100 on finish');
        napi.mockVendorSet(SIM_SET_STATE, HRIL_SIM_READY);
        done();
      });
    });
  });
});
