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

import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'
import router from '@system.router';
import Utils from './Utils';

export default function checkboxJsunit() {
  describe('checkboxJsunit', function () {
    beforeEach(async function (done) {
      console.info("checkboxJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/checkbox',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get checkBox state pages: " + JSON.stringify(pages));
        if (!("checkbox" == pages.name)) {
          console.info("get checkBox state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push checkBox page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push checkBox page error: " + err);
      }
      done();
    })

    /**
     * @tc.number ArkUX_Stage_Checkbox_0100
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_0100', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_0100 START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('Checkbox_0100');
          console.info("ArkUX_Stage_Checkbox_0100 component strJson is: " + strJson);
          let obj = JSON.parse(strJson);
          console.info("ArkUX_Stage_Checkbox_0100 component obj is: " + JSON.stringify(obj));
          expect(JSON.parse(obj.$attrs.mark).size).assertEqual('50.00vp');
          console.info('ArkUX_Stage_Checkbox_0100 END ');
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Checkbox_0100 ERR  ' + JSON.stringify(err));
        }
        done();
      }, 500)
    });

    /**
     * @tc.number ArkUX_Stage_Checkbox_0400
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_0400', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_0400 START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('Checkbox_0100');
          let obj = JSON.parse(strJson);
          console.info("ArkUX_Stage_Checkbox_0400 component obj is: " + JSON.stringify(obj));
          expect(obj.$attrs.unselectedColor).assertEqual("#FF00FF00");
          console.info('ArkUX_Stage_Checkbox_0400 END ');
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Checkbox_0400 ERR  ' + JSON.stringify(err));
        }
        done();
      }, 500)
    });


    /**
     * @tc.number ArkUX_Stage_Checkbox_0300
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_0300', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_0300 START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('Checkbox_0100');
          let obj = JSON.parse(strJson);
          console.info("ArkUX_Stage_Checkbox_0300 component obj is: " + JSON.stringify(obj));

          expect(obj.$attrs.select).assertEqual("false");

          console.info('ArkUX_Stage_Checkbox_0300 END ');
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Checkbox_0300 ERR  ' + JSON.stringify(err));
        }
        done();
      }, 500)
    });

    /**
     * @tc.number ArkUX_Stage_Checkbox_attrs_0200
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_attrs_0200', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_attrs_0200 START');
      setTimeout(() => {
        try {
          let strJson = getInspectorByKey('Checkbox_0100');
          let obj = JSON.parse(strJson);
          console.info("ArkUX_Stage_Checkbox_attrs_0200 component obj is: " + JSON.stringify(obj));
          expect(obj.$attrs.selectedColor).assertEqual("#FFED6F21");
          console.info('ArkUX_Stage_Checkbox_attrs_0200 END ');
        } catch (err) {
          expect().assertFail();
          console.info('ArkUX_Stage_Checkbox_attrs_0200 ERR  ' + JSON.stringify(err));
        }
        done();
      }, 500)
    });

    /**
     * @tc.number ArkUX_Stage_Checkbox_attrs_0300
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_attrs_0300', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_attrs_0300 START');
      let strJson = getInspectorByKey('Checkbox2');
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_Checkbox_attrs_0300 component obj is: " + JSON.stringify(obj));
      let responseRegion = JSON.parse(obj.$attrs.responseRegion[0]);
      expect(responseRegion.x).assertEqual("40.00vp");
      expect(responseRegion.y).assertEqual("60.00vp");
      expect(responseRegion.width).assertEqual("80.00%");
      expect(responseRegion.height).assertEqual("70.00%");
      console.info('ArkUX_Stage_Checkbox_attrs_0300 END ');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Checkbox_attrs_0400
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_attrs_0400', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_attrs_0400 START');
      let strJson = getInspectorByKey('Checkbox_0100');
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_Checkbox_attrs_0400 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.width).assertEqual("300.00px");
      console.info('ArkUX_Stage_Checkbox_attrs_0400 END ');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Checkbox_attrs_0500
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_attrs_0500', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_attrs_0500 START');
      let strJson = getInspectorByKey('Checkbox_0100');
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_Checkbox_attrs_0500 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.height).assertEqual("100.00px");
      console.info('ArkUX_Stage_Checkbox_attrs_0500 END ');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Checkbox_attrs_0600
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_attrs_0600', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_attrs_0200 START');
      let strJson = getInspectorByKey('Checkbox2');
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_Checkbox_attrs_0600 component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.size.width).assertEqual('190.00px');
      expect(obj.$attrs.size.height).assertEqual('90.00px');
      console.info('ArkUX_Stage_Checkbox_attrs_0600 END ');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_Checkbox_attrs_0700
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_Checkbox_attrs_0700', 0, async function (done) {
      console.info('ArkUX_Stage_Checkbox_attrs_0700 START');
      let strJson = getInspectorByKey('Checkbox2');
      let obj = JSON.parse(strJson);
      console.info("ArkUX_Stage_Checkbox_attrs_0700 component obj is: " + JSON.stringify(obj));
      expect(JSON.parse(obj.$attrs.padding).top).assertEqual('20.00px');
      expect(JSON.parse(obj.$attrs.padding).right).assertEqual('30.00px');
      expect(JSON.parse(obj.$attrs.padding).left).assertEqual('40.00px');
      expect(JSON.parse(obj.$attrs.padding).bottom).assertEqual('50.00px');
      console.info('ArkUX_Stage_Checkbox_attrs_0700 END ');
      done();
    });

  })
}
