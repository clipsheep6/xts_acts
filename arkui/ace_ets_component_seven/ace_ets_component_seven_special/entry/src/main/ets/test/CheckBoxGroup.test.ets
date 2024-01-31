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

export default function checkBoxGroupTest() {
  describe('ActsCheckBoxGroupTest', function () {

    beforeEach(async function (done) {
      let options = {
        uri: "MainAbility/pages/checkBoxGroup",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get CheckBoxGroup state success " + JSON.stringify(pages));
        if (!("checkBoxGroup" == pages.name)) {
          console.info("get CheckBoxGroup state success " + JSON.stringify(pages.name));
          let result = await router.push(options)
          await Utils.sleep(2000);
          console.info("push CheckBoxGroup page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push CheckBoxGroup page error " + JSON.stringify(err));
      }
      done();
    });

    /**
     * @tc.number ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1000
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_CheckboxGroup_1000', 0, async function (done) {
      try {
        console.info('ArkUX_Stage_CheckboxGroup_1000 START');
        let strJson = getInspectorByKey('checkboxNO');
        console.info('ArkUX_Stage_CheckboxGroup_1000 START  :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        let markObj = JSON.parse(obj.$attrs.mark);
        expect(markObj.strokeWidth).assertEqual("15.00vp");
        expect(markObj.size).assertEqual("10.00vp");
        expect(markObj.strokeColor).assertEqual('#FFFF00FF');
        console.info('ArkUX_Stage_CheckboxGroup_1000 END ');
      } catch (err) {
        expect().assertFail();
        console.info('ArkUX_Stage_CheckboxGroup_1000 ERR  ' + JSON.stringify(err));
      }
      done();
    });

    /**
     * @tc.number ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1001
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1001', 0, async function (done) {
      try {
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1001 START');
        let strJson = getInspectorByKey('checkboxNO');
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1001 START  :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        let markObj = JSON.parse(obj.$attrs.mark);
        expect(obj.$attrs.unselectedColor).assertEqual('#FF123456');
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1001 END ');
      } catch (err) {
        expect().assertFail();
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1001 ERR  ' + JSON.stringify(err));
      }
      done();
    });

    /**
     * @tc.number ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1002
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1002', 0, async function (done) {
      try {
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1002 START');
        let strJson = getInspectorByKey('checkboxNO');
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1002 START  :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        let markObj = JSON.parse(obj.$attrs.mark);
        expect(obj.$attrs.selectAll).assertEqual('true');
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1002 END ');
      } catch (err) {
        expect().assertFail();
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1002 ERR  ' + JSON.stringify(err));
      }
      done();
    });

    /**
     * @tc.number ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1003
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1003', 0, async function (done) {
      try {
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1003 START');
        let strJson = getInspectorByKey('checkboxNO');
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1003 START  :' + JSON.stringify(strJson));
        let obj = JSON.parse(strJson);
        let markObj = JSON.parse(obj.$attrs.mark);
        expect(obj.$attrs.selectedColor).assertEqual('#FF321456');
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1003 END ');
      } catch (err) {
        expect().assertFail();
        console.info('ArkUX_Stage_CheckboxGroup_CheckMarkWidth_1003 ERR  ' + JSON.stringify(err));
      }
      done();
    });

    /**
     * @tc.number ArkUX_Stage_CheckboxGroup_1004
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_CheckboxGroup_1004', 0, async function (done) {

      console.info('ArkUX_Stage_CheckboxGroup_1004 START');
      let strJson = getInspectorByKey('checkboxNO');
      console.info('ArkUX_Stage_CheckboxGroup_1004 START  :' + JSON.stringify(strJson));
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.width).assertEqual("300.00px");
      console.info('ArkUX_Stage_CheckboxGroup_1004 END ');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_CheckboxGroup_1005
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_CheckboxGroup_1005', 0, async function (done) {

      console.info('ArkUX_Stage_CheckboxGroup_1005 START');
      let strJson = getInspectorByKey('checkboxNO');
      console.info('ArkUX_Stage_CheckboxGroup_1005 START  :' + JSON.stringify(strJson));
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.height).assertEqual("100.00px");
      console.info('ArkUX_Stage_CheckboxGroup_1005 END ');
      done();
    });

    /**
     * @tc.number ArkUX_Stage_CheckboxGroup_1006
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUX_Stage_CheckboxGroup_1006', 0, async function (done) {

      console.info('ArkUX_Stage_CheckboxGroup_1006 START');
      let strJson = getInspectorByKey('checkboxGroup1');
      console.info('ArkUX_Stage_CheckboxGroup_1006 START  :' + JSON.stringify(strJson));
      let obj = JSON.parse(strJson);
      expect(obj.$attrs.size.width).assertEqual('190.00px');
      expect(obj.$attrs.size.height).assertEqual('90.00px');
      console.info('ArkUX_Stage_CheckboxGroup_1006 END ');
      done();
    });
  })
}
