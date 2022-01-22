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
import * as CONSTANT from './lib/Const.js';
import { describe, it, expect, Core, beforeAll } from 'deccjsunit/index';

describe('SimAccountInformationManagerFunction', function () {

  // set timeout
  const core = Core.getInstance();
  const config = core.getDefaultService('config');
  config.timeout = 10 * 1000;

  /**
   * @tc.number  Telephony_Sim_getOperatorConfigs_Async_01001
   * @tc.name    The slotId parameter is 0 and the OperatorConfig structure is not expected to be empty
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getOperatorConfigs_Async_01001', 0, async function (done) {
    let containerIsEmpty = 0;
    sim.getOperatorConfigs(CONSTANT.SLOT_ID_0, (err, data) => {
      if (err) {
        console.log(`Telephony_Sim_getOperatorConfigs_Async_01001 fail, err : ${err.message}`);
        expect().assertFail();
        done();
        return;
      }
      expect(Object.keys(data).length !== containerIsEmpty).assertTrue();
      console.log('Telephony_Sim_getOperatorConfigs_Async_01001 finish');
      done();
    });
  });

  /**
   * @tc.number  Telephony_Sim_getOperatorConfigs_Promise_01001
   * @tc.name    The slotId parameter is 0 and the OperatorConfig structure is not expected to be empty
   * @tc.desc    Function test
   */
  it('Telephony_Sim_getOperatorConfigs_Promise_01001', 0, async function (done) {
    try {
      let data = await sim.getOperatorConfigs(CONSTANT.SLOT_ID_0);
      expect(Object.keys(data).length !== 0).assertTrue();
      console.log('Telephony_Sim_getOperatorConfigs_Promise_01001 finish');
      done();
    } catch (err) {
      console.log(`Telephony_Sim_getOperatorConfigs_Promise_01001 fail, err : ${err.message}`);
      expect().assertFail();
      done();
    }
  });
});