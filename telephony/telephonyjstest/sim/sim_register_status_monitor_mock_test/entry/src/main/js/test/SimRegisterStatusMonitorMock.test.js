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

import observer from '@ohos.telephony.observer';
import sim from '@ohos.telephony.sim';
import napi from '@ohos.napi_mock_vendor';
import * as env from './lib/Const.js';
import { describe, beforeAll, it, expect } from 'deccjsunit/index';

describe('RegisterStatusMonitor', function () {
  let mockInitSuccess = false;

  const sleep = n => new Promise(resolve => {
    console.debug(`waiting ${n}s`);
    setTimeout(resolve, n * 1000);
  });

  beforeAll(() => {
    const ret = napi.initMockVendor();
    if (ret === 'mockVendor init success') {
      console.debug('init mock vendor success');
      mockInitSuccess = true;
    } else {
      console.debug('init mock vendor fail');
    }
  });

  /**
   * @tc.number  Telephony_Sim_on_0100
   * @tc.name    On (type: 'simStateChange', callback: AsyncCallback<{state: SimState, reason: String}>):
   *             Void interface, expect callback object SimState to be SIM_STATE_NOT_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_on_0100', 0, async function (done) {
    if (!mockInitSuccess) {
      expect().assertFail();
      done();
      return;
    }

    observer.on(env.GET_SIM_STATE_CHANGE, simStateData => {
      console.log(`Telephony_Sim_on_0100, data : ${JSON.stringify(simStateData)}`);
      let notPresentState = simStateData.state === sim.SIM_STATE_NOT_PRESENT;
      if (notPresentState) {
        expect(true).assertTrue();
        console.log('Telephony_Sim_on_0100 finish');
        observer.off(env.GET_SIM_STATE_CHANGE);
        console.log('Telephony_Sim_on_0100 call observer off');
        done();
      } else {
        console.debug('waiting for state is changed.');
      }
    });

    await sleep(1);

    console.debug('mockVendorSet: 20000003, "1"');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_READY); // SIM_STATE_READY

    await sleep(1);

    console.debug('mockVendorSet: 20000003, 0');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_NOT_INSERTED); // SIM_STATE_NOT_PRESENT

    await sleep(1);
  });

  /**
   * @tc.number  Telephony_Sim_on_0200
   * @tc.name    on(type: 'simStateChange', options: { slotId: number },callback:
   *             AsyncCallback<{ state: SimState, reason: String }>): SlotId is a normal parameter.
   *             SimState in the object to be called back is SIM_STATE_NOT_READY
   * @tc.desc    Function test
   */
  it('Telephony_Sim_on_0200', 0, async function (done) {
    if (!mockInitSuccess) {
      expect().assertFail();
      done();
      return;
    }

    observer.on(env.GET_SIM_STATE_CHANGE, { slotId: env.SIM_SLOTID0 }, simStateData => {
      console.log(`Telephony_Sim_on_0200, data : ${JSON.stringify(simStateData)}`);
      let notPresentState = simStateData.state === sim.SIM_STATE_NOT_PRESENT;
      if (notPresentState) {
        expect(true).assertTrue();
        console.log('Telephony_Sim_on_0200 finish');
        observer.off(env.GET_SIM_STATE_CHANGE);
        console.log('Telephony_Sim_on_0200 call observer off');
        done();
      } else {
        console.debug('waiting for state is changed.');
      }
    });

    await sleep(1);

    console.debug('mockVendorSet: 20000003, "1"');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_READY); // SIM_STATE_READY

    await sleep(1);

    console.debug('mockVendorSet: 20000003, 0');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_NOT_INSERTED); // SIM_STATE_NOT_PRESENT

    await sleep(1);
  });

  /**
   * @tc.number  Telephony_Sim_on_0300
   * @tc.name    on(type: 'simStateChange', options: { slotId: number },callback:
   *             AsyncCallback<{ state: SimState, reason: String }>): Void
   *             interface, slotId exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_on_0300', 0, async function (done) {
    if (!mockInitSuccess) {
      expect().assertFail();
      done();
      return;
    }

    let hasMonitor = false;

    observer.on(env.GET_SIM_STATE_CHANGE, { slotId: env.SIM_SLOTID11 }, simStateData => {
      console.log(`Telephony_Sim_on_0300, data : ${JSON.stringify(simStateData)}`);
      hasMonitor = true;
    });

    await sleep(1);

    console.debug('mockVendorSet: 20000003, "1"');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_READY); // SIM_STATE_READY

    await sleep(1);

    console.debug('mockVendorSet: 20000003, 0');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_NOT_INSERTED); // SIM_STATE_NOT_PRESENT

    expect(hasMonitor).assertFalse();
    observer.off(env.GET_SIM_STATE_CHANGE);
    await sleep(1);
    console.log('Telephony_Sim_on_0300 call observer off');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_on_0400
   * @tc.name    on(type: 'simStateChange', options: { slotId: number },callback:
   *             AsyncCallback<{ state: SimState, reason: String }>): Void
   *             interface, slotId exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_on_0400', 0, async function (done) {
    if (!mockInitSuccess) {
      expect().assertFail();
      done();
      return;
    }

    let hasMonitor = false;

    observer.on(env.GET_SIM_STATE_CHANGE, { slotId: env.SIM_SLOTID1 }, simStateData => {
      console.log(`Telephony_Sim_on_0400, data : ${JSON.stringify(simStateData)}`);
      hasMonitor = true;
    });

    await sleep(1);

    console.debug('mockVendorSet: 20000003, "1"');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_READY); // SIM_STATE_READY

    await sleep(1);

    console.debug('mockVendorSet: 20000003, 0');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_NOT_INSERTED); // SIM_STATE_NOT_PRESENT

    expect(hasMonitor).assertFalse();
    observer.off(env.GET_SIM_STATE_CHANGE);
    await sleep(1);
    console.log('Telephony_Sim_on_0400 call observer off');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_on_0500
   * @tc.name    on(type: 'simStateChange', options: { slotId: number },callback:
   *             AsyncCallback<{ state: SimState, reason: String }>): Void
   *             interface, slotId exception input parameter, expected to enter err
   * @tc.desc    Function test
   */
  it('Telephony_Sim_on_0500', 0, async function (done) {
    if (!mockInitSuccess) {
      expect().assertFail();
      done();
      return;
    }

    let hasMonitor = false;

    observer.on(env.GET_SIM_STATE_CHANGE, { slotId: env.SIM_SLOTID2 }, simStateData => {
      console.log(`Telephony_Sim_on_0500, data : ${JSON.stringify(simStateData)}`);
      hasMonitor = true;
    });

    await sleep(1);

    console.debug('mockVendorSet: 20000003, "1"');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_READY); // SIM_STATE_READY

    await sleep(1);

    console.debug('mockVendorSet: 20000003, 0');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_NOT_INSERTED); // SIM_STATE_NOT_PRESENT

    expect(hasMonitor).assertFalse();
    observer.off(env.GET_SIM_STATE_CHANGE);
    await sleep(1);
    console.log('Telephony_Sim_on_0500 call observer off');
    done();
  });

  /**
   * @tc.number  Telephony_Sim_off_0100
   * @tc.name    Test off(type: 'simStateChange', callback? : AsyncCallback<{state: SimState, reason: String}>)
   *             : void interface, expect callback object of ON interface to be empty
   * @tc.desc    Function test
   */

  it('Telephony_Sim_off_0100', 0, async function (done) {
    if (!mockInitSuccess) {
      expect().assertFail();
      done();
      return;
    }

    let offLabel;

    observer.on(env.GET_SIM_STATE_CHANGE, simStateData => {
      console.log(`Telephony_Sim_off_0100 , data : ${JSON.stringify(simStateData)}`);
      offLabel = simStateData.state;
    });

    await sleep(1);

    console.debug('mockVendorSet: 20000003, "1"');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_READY); // SIM_STATE_READY

    await sleep(1);

    expect(offLabel === sim.SIM_STATE_LOADED).assertTrue();

    observer.off(env.GET_SIM_STATE_CHANGE);
    await sleep(1);
    console.log('Telephony_Sim_off_0100 call observer off');

    await sleep(1);

    console.debug('mockVendorSet: 20000003, 0');
    napi.mockVendorSet(env.SIM_SET_STATE, env.HRIL_SIM_NOT_INSERTED); // SIM_STATE_NOT_PRESENT

    await sleep(1);

    expect(offLabel !== sim.SIM_STATE_NOT_PRESENT).assertTrue();
    console.log('Telephony_Sim_off_0100 test finish.');
    done();
  });
});
