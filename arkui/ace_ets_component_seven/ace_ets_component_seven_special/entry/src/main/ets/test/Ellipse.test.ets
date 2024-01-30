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

export default function ellipseJsunit() {
  describe('ellipseJsunit', function () {
    beforeEach(async function (done) {
      console.info("ellipseJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/ellipse',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get ellipse state pages: " + JSON.stringify(pages));
        if (!("ellipse" == pages.name)) {
          console.info("get ellipse state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push ellipse page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push ellipse page error: " + err);
      }
      done();
    })

    /**
     * @tc.number ArkUX_Stage_ellipse_attrs_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_ellipse_attrs_0100', 0, async function (done) {
      console.info('ArkUX_Stage_ellipse_attrs_0100 START');
      let strJson = getInspectorByKey('Ellipsetest');
      console.info('ArkUX_Stage_ellipse_attrs_0100 START  :' + JSON.stringify(strJson));
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_ellipse_attrs_0100 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.height).assertEqual("120.00px");
      console.info('ArkUX_Stage_ellipse_attrs_0100 END ');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_ellipse_attrs_0200
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_ellipse_attrs_0200', 0, async function (done) {
      console.info('ArkUX_Stage_ellipse_attrs_0200 START');
      let strJson = getInspectorByKey('Ellipsetest');
      console.info('ArkUX_Stage_ellipse_attrs_0200 START  :' + JSON.stringify(strJson));
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_ellipse_attrs_0200 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.width).assertEqual("130.00px");
      console.info('ArkUX_Stage_ellipse_attrs_0200 END ');
      done();
    });

  })
}
