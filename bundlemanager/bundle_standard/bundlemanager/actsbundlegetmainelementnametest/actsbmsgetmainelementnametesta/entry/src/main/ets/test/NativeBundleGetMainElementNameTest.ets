/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import bundlendk from 'libbundlendka.so';

const BUNDLE_NAME = 'com.example.bundlenativegetmainelementnametest';
const MODULE_NAME = 'entry_test';
const ABILITY_NAME = 'TestAbility';

export default function bundlenativegetmainelementnameTest() {
  describe('bundlenativegetmainelementnameTest', function () {
    /**
     * @tc.number: SUB_BMS_OH_NativeBundle_GetMainElementName_0100
     * @tc.name: SUB_BMS_OH_NativeBundle_GetMainElementName_0100
     * @tc.desc: Configure the mainElement in module.json within the project,
     *           which includes entryModule and EntryAbility scene call interfaces
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('SUB_BMS_OH_NativeBundle_GetMainElementName_0100', 0, async function (done) {
      let data = bundlendk.getMainElementName();
      expect(data.bundleName).assertEqual(BUNDLE_NAME);
      expect(data.moduleName).assertEqual(MODULE_NAME);
      expect(data.abilityName).assertEqual(ABILITY_NAME);
      done();
    });
  })
}
