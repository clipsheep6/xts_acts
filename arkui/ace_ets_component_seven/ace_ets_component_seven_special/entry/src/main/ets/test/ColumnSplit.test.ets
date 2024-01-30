/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'
import router from '@system.router';
import Utils from './Utils';

export default function columnSplitJsunit() {
  describe('columnSplitJsunit', function () {
    beforeEach(async function (done) {
      console.info("columnSplitJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/columnSplit',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get columnSplit state pages: " + JSON.stringify(pages));
        if (!("columnSplit" == pages.name)) {
          console.info("get columnSplit state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push columnSplit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push columnSplit page error: " + err);
      }
      done();
    })

    /**
     * @tc.number ArkUX_Stage_columnSplit_attrs_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_columnSplit_attrs_0100', 0, async function (done) {
      console.info('ArkUX_Stage_columnSplit_attrs_0100 START');
      let strJson = getInspectorByKey('ColumnSplittest');
      console.info('ArkUX_Stage_columnSplit_attrs_0100 START  :' + JSON.stringify(strJson));
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_columnSplit_attrs_0100 component obj is: " + JSON.stringify(obj));
      expect(JSON.parse(obj.$attrs.clip).shape).assertEqual("Circle");
      console.info('ArkUX_Stage_columnSplit_attrs_0100 END ');
      done();
    });
  })
}
