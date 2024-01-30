/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import router from '@system.router';
import Utils from './Utils';
import { UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix } from '@ohos.UiTest';
import { MessageManager, Callback } from '../MainAbility/utils/MessageManager';


export default function toggleJsunit() {
  describe('ToggleJsunit', function () {
    beforeEach(async function (done) {
      console.info("Toggle beforeEach start");
      let options = {
        uri: 'MainAbility/pages/toggle',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get Toggle state pages: " + JSON.stringify(pages));
        if (!("toggle" == pages.name)) {
          console.info("get Toggle state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          console.info("push Toggle page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push Toggle page error: " + err);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number ToggleJsunit001
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit001', 0, async function (done) {
      console.info('[ToggleJsunit001] START');
      let strJson = getInspectorByKey('toggleCheckbox');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit001] obj: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.selectedColor).assertEqual('#FF0000FF');
      console.info('[ToggleJsunit001] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit002
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit002', 0, async function (done) {
      console.info('[ToggleJsunit002] START');
      let strJson = getInspectorByKey('toggleCheckbox');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit002] obj: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.switchPointColor).assertEqual('#FF008000');
      console.info('[ToggleJsunit002] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit003
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit003', 0, async function (done) {
      console.info('[ToggleJsunit003] START');
      let strJson = getInspectorByKey('toggleCheckbox');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit003] obj: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.width).assertEqual("300.00px");
      console.info('[ToggleJsunit003] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit004
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit004', 0, async function (done) {
      console.info('[ToggleJsunit004] START');
      let strJson = getInspectorByKey('toggleCheckbox');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit004] obj: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.height).assertEqual("100.00px");
      console.info('[ToggleJsunit004] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit005
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit005', 0, async function (done) {
      console.info('[ToggleJsunit005] START');
      let strJson = getInspectorByKey('toggleTest');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit005] obj: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.size.width).assertEqual('190.00px');
      expect(obj.$attrs.size.height).assertEqual('90.00px');
      console.info('[ToggleJsunit005] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit006
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit006', 0, async function (done) {
      console.info('[ToggleJsunit006] START');
      let strJson = getInspectorByKey('toggleTest');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit006] obj: " + JSON.stringify(obj.$attrs));

      expect(JSON.parse(obj.$attrs.padding).top).assertEqual('20.00px');
      expect(JSON.parse(obj.$attrs.padding).right).assertEqual('30.00px');
      expect(JSON.parse(obj.$attrs.padding).left).assertEqual('40.00px');
      expect(JSON.parse(obj.$attrs.padding).bottom).assertEqual('50.00px');
      console.info('[ToggleJsunit006] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit007
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit007', 0, async function (done) {
      console.info('[ToggleJsunit007] START');
      let strJson = getInspectorByKey('toggleTest');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit007] obj: " + JSON.stringify(obj.$attrs));
      let responseRegion = JSON.parse(obj.$attrs.responseRegion[0]);
      expect(responseRegion.x).assertEqual("40.00vp");
      expect(responseRegion.y).assertEqual("60.00vp");
      expect(responseRegion.width).assertEqual("80.00%");
      expect(responseRegion.height).assertEqual("70.00%");
      console.info('[ToggleJsunit007] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit008
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit008', 0, async function (done) {
      console.info('[ToggleJsunit008] START');
      let strJson = getInspectorByKey('toggleTest1');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit008] obj: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.hoverEffect).assertEqual('HoverEffect.Scale');
      console.info('[ToggleJsunit005] END');
      done();
    });

    /**
     * @tc.number ToggleJsunit009
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ToggleJsunit009', 0, async function (done) {
      console.info('[ToggleJsunit009] START');
      let strJson = getInspectorByKey('toggleTest');
      let obj = JSON.parse(strJson);
      console.info("[ToggleJsunit009] obj: " + JSON.stringify(obj.$attrs));

      expect(obj.$attrs.backgroundColor).assertEqual('#FF342354');
      console.info('[ToggleJsunit009] END');
      done();
    });
    
  })
}