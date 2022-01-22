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
import { SIM_MIN_COUNT } from './lib/Const.js';
import { describe, it, expect } from 'deccjsunit/index';

describe('SimGetMaxSimCountFunctionTest', function () {

  /**
   * @tc.number Telephony_Sim_getMaxSimCount_0100
   * @tc.name   Test the getMaxSimCount interface and view the callback result
   * @tc.desc   Function test
   */
  it('Telephony_Sim_getMaxSimCount_0100', 0, function (done) {
    const CASE_NAME = 'Telephony_Sim_getMaxSimCount_0100';
    let simCount = sim.getMaxSimCount();
    expect(simCount > SIM_MIN_COUNT).assertTrue();
    console.log(`${CASE_NAME} test finish.`);
    done();
  });
});