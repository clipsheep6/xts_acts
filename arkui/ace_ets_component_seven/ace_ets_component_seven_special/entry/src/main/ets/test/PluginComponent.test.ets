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
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils';
import router from '@system.router';
export default function pluginComponentJsunit() {
  describe('pluginComponentJsunit', function () {
    beforeEach(async function (done) {
      console.info("pluginComponent beforeEach start");
      let options = {
        uri: 'MainAbility/pages/pluginComponent',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get pluginComponent state pages: " + JSON.stringify(pages));
        if (!("pluginComponent" == pages.name)) {
          console.info("get pluginComponent state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push pluginComponent page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push pluginComponent page error: " + err);
      }
      done();
    });

    /**
     * @tc.number ArkUI_Stage_pluginComponent01
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_pluginComponent01', 0, async function (done) {
      console.info('[ArkUI_Stage_pluginComponent01] START');
      let strJson = getInspectorByKey('pluginComponenttest');
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_pluginComponent01] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.height).assertEqual("430.00px");
      console.info('[ArkUI_Stage_pluginComponent01] END');
      done();
    });

    /**
     * @tc.number ArkUI_Stage_pluginComponent01
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_pluginComponent01', 0, async function (done) {
      console.info('[ArkUI_Stage_pluginComponent01] START');
      let strJson = getInspectorByKey('pluginComponenttest');
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_pluginComponent01] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.width).assertEqual("330.00px");
      console.info('[ArkUI_Stage_pluginComponent01] END');
      done();
    });
  })
}
