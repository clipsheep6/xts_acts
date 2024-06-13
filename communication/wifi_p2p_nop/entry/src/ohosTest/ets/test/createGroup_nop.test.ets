/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog';
import wifiManager from '@ohos.wifiManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

// no permission.
const NOT_PERMISSION = 201;
// time out
const INTERVAL_TIME = 2500;

export default  function createGroup() {
  describe('createGroup', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /*
     * @tc.number:SUB_Communication_WiFi_XTS_P2P_CreateGroup_Nop
     * @tc.name: P2P_CreateGroup_Nop
     * @tc.desc:Using the on method without permission
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('SUB_Communication_WiFi_XTS_P2P_CreateGroup_Nop', 0, async (done: Function) => {
      hilog.info(0x0000, 'p2pTag', '%{public}s', 'SUB_Communication_WiFi_XTS_P2P_CreateGroup_Nop begin');

      try {
        let config: wifiManager.WifiP2PConfig = {
          deviceAddress: "00:00:00:00:00:00",
          netId: -1,
          passphrase: "12345678",
          groupName: "123456",
          goBand: 0
        }
        wifiManager.createGroup(config);
      } catch (error) {
        hilog.error(0x0000, 'p2pTag', '%{public}s', 'SUB_Communication_WiFi_XTS_P2P_CreateGroup_Nop failed ' + JSON.stringify(error));
        expect(Number(error.code)).assertEqual(NOT_PERMISSION);
        done();
      }
    });
  });
}