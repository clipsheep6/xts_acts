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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@system.router';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';




export default function scroll2Jsunit() {
  describe('scroll2Jsunit', function () {
    beforeEach(async function (done) {
      console.info("scroll2Jsunit beforeEach start");
      let options = {
        uri: "MainAbility/pages/scroll2",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get scroll2Jsunit state pages: " + JSON.stringify(pages));
        if (!("scroll" == pages.name)) {
          console.info("get scroll2Jsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push scroll2Jsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push scroll2Jsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    /* *
     * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0010
     * @tc.name  : scroll2Jsunit_0001
     * @tc.desc  : Set to scroll to Edge.Bottom
     * @tc.level : Level 2
     */

    it('scroll2Jsunit_0001', 0, async function (done) {
      console.info('[scroll2Jsunit_0001] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll2_1'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll2_ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll2Jsunit_0001] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Horizontal');

      let strJson2 = getInspectorByKey('scroll1_scrollText12');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('12');

      console.info('[scroll2Jsunit_0001] END');
      done();
    });

    /* *
   * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0011
   * @tc.name  : scroll2Jsunit_0002
   * @tc.desc  : Set to scroll to Edge.End
   * @tc.level : Level 2
   */

    it('scroll2Jsunit_0002', 0, async function (done) {
      console.info('[scroll2Jsunit_0002] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll2_2'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll2_ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll2Jsunit_0002] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Horizontal');

      let strJson2 = getInspectorByKey('scroll1_scrollText12');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('12');

      console.info('[scroll2Jsunit_0002] END');
      done();
    });

    /* *
   * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0012
   * @tc.name  : scroll2Jsunit_0003
   * @tc.desc  : Set scrollbar to horizontal "10aa"
   * @tc.level : Level 2
   */

    it('scroll2Jsunit_0003', 0, async function (done) {
      console.info('[scroll2Jsunit_0003] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll2_3'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll2_ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll2Jsunit_0003] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Horizontal');


      let strJson2 = getInspectorByKey('scroll1_scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scroll2Jsunit_0003] END');
      done();
    });

    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0013
    * @tc.name  : scroll2Jsunit_0004
    * @tc.desc  : Set to scroll to Edge.Top
    * @tc.level : Level 2
    */

    it('scroll2Jsunit_0004', 0, async function (done) {
      console.info('[scroll2Jsunit_0004] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll2_4'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll2_ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll2Jsunit_0004] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Horizontal');


      let strJson2 = getInspectorByKey('scroll1_scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scroll2Jsunit_0004] END');
      done();
    });

    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0014
    * @tc.name  : scroll2Jsunit_0005
    * @tc.desc  : Set to scroll to Edge.Start
    * @tc.level : Level 2
    */

    it('scroll2Jsunit_0005', 0, async function (done) {
      console.info('[scroll2Jsunit_0005] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll2_5'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll2_ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll2Jsunit_0005] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Horizontal');

      let strJson2 = getInspectorByKey('scroll1_scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');
      console.info('[scroll2Jsunit_0005] END');
      done();
    });

  })
}
