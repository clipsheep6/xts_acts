/**
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import router from '@system.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import Utils from './Utils.ets'

export default function radioGroupJsunit() {
  describe('radioGroupTest', function () {
    beforeEach(async function (done) {
      console.info("flex beforeEach start");
      let options = {
        uri: 'MainAbility/pages/radio',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get radio state success " + JSON.stringify(pages));
        if (!("radio" == pages.name)) {
          console.info("get radio state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push radio page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push radio page error: " + err);
      }
      done();
    });

    /**
     * @tc.number testRadioGroup001
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup001', 0, async function (done) {
      console.info("[testRadioGroup001] START");
      let strJson = getInspectorByKey('RadioOne');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup001] obj  is: " + JSON.stringify(obj.$attrs));

      expect(JSON.parse(obj.$attrs.radioStyle).checkedBackgroundColor).assertEqual('#FF147258');
      expect(JSON.parse(obj.$attrs.radioStyle).indicatorColor).assertEqual('#FF123456');
      expect(JSON.parse(obj.$attrs.radioStyle).uncheckedBorderColor).assertEqual('#FF963852');

      console.info("[testRadioGroup001] END");
      done();
    });

    /**
     * @tc.number testRadioGroup002
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup002', 0, async function (done) {
      console.info("[testRadioGroup002] START");
      let strJson = getInspectorByKey('RadioOne');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup002] obj  is: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.checked).assertEqual('true');
      console.info("[testRadioGroup002] END");
      done();
    });

    /**
     * @tc.number testRadioGroup003
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup003', 0, async function (done) {
      console.info("[testRadioGroup003] START");
      let strJson = getInspectorByKey('RadioOne');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup003] obj  is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.width).assertEqual("300.00px");
      console.info("[testRadioGroup003] END");
      done();
    });

    /**
     * @tc.number testRadioGroup004
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup004', 0, async function (done) {
      console.info("[testRadioGroup004] START");
      let strJson = getInspectorByKey('RadioOne');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup004] obj  is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.height).assertEqual("100.00px");
      console.info("[testRadioGroup004] END");
      done();
    });

    /**
     * @tc.number testRadioGroup005
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup005', 0, async function (done) {
      console.info("[testRadioGroup005] START");
      let strJson = getInspectorByKey('Radio2');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup005] obj  is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.size.width).assertEqual('190.00px');
      expect(obj.$attrs.size.height).assertEqual('90.00px');
      console.info("[testRadioGroup005] END");
      done();
    });

    /**
     * @tc.number testRadioGroup006
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup006', 0, async function (done) {
      console.info("[testRadioGroup006] START");
      let strJson = getInspectorByKey('Radio2');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup006] obj  is: " + JSON.stringify(obj.$attrs));

      expect(JSON.parse(obj.$attrs.padding).top).assertEqual('20.00px');
      expect(JSON.parse(obj.$attrs.padding).right).assertEqual('30.00px');
      expect(JSON.parse(obj.$attrs.padding).left).assertEqual('40.00px');
      expect(JSON.parse(obj.$attrs.padding).bottom).assertEqual('50.00px');
      console.info("[testRadioGroup006] END");
      done();
    });

    /**
     * @tc.number testRadioGroup007
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup007', 0, async function (done) {
      console.info("[testRadioGroup007] START");
      let strJson = getInspectorByKey('Radio2');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup007] obj  is: " + JSON.stringify(obj.$attrs));

      let responseRegion = JSON.parse(obj.$attrs.responseRegion[0]);
      expect(responseRegion.x).assertEqual("40.00vp");
      expect(responseRegion.y).assertEqual("60.00vp");
      expect(responseRegion.width).assertEqual("80.00%");
      expect(responseRegion.height).assertEqual("70.00%");
      console.info("[testRadioGroup007] END");
      done();
    });

    /**
     * @tc.number testRadioGroup008
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testRadioGroup008', 0, async function (done) {
      console.info("[testRadioGroup008] START");
      let strJson = getInspectorByKey('Radio2');
      let obj = JSON.parse(strJson);
      console.info("[testRadioGroup008] obj  is: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.hoverEffect).assertEqual('HoverEffect.Highlight');
      console.info("[testRadioGroup008] END");
      done();
    });

  })
}
