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
export default function scroll1Jsunit() {
  describe('scroll1Jsunit', function () {
    beforeEach(async function (done) {
      console.info("scroll1Jsunit beforeEach start");
      let options = {
        uri: "MainAbility/pages/scroll1",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get scroll1Jsunit state pages: " + JSON.stringify(pages));
        if (!("scroll1" == pages.name)) {
          console.info("get scroll1Jsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push scroll1Jsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push scroll1Jsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0001
    * @tc.name  : scroll1Jsunit_0001
    * @tc.desc  : Set the scroll direction to portrait
    * @tc.level : Level 2
    */


    it('scroll1Jsunit_0001', 0, async function (done) {
      console.info('[scroll1Jsunit_0010] START');
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_1'));
      await btn.click();
      await CommonFunc.sleep(100);


      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0010] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');
      console.info('[scroll1Jsunit_0010] END');
      done();
    });

    /* *
      * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0002
      * @tc.name  : scroll1Jsunit_0002
      * @tc.desc  : Set the scroll bar without the animation parameter
      * @tc.level : Level 2
      */


    it('scroll1Jsunit_0002', 0, async function (done) {
      console.info('[scroll1Jsunit_0002] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_2'));
      await btn.click();
      await CommonFunc.sleep(100);


      globalThis.value.message.notify({name:'arrayIndex',value: 3 })

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0002] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');

      console.info('[scroll1Jsunit_0002] END');
      done();
    });


    /* *
     * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0003
     * @tc.name  : scroll1Jsunit_0003
     * @tc.desc  : Set the scroll bar to have the parameter animation
     * @tc.level : Level 2
     */
    it('scroll1Jsunit_0003', 0, async function (done) {
      console.info('[scroll1Jsunit_0003] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_3'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0003] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');


      console.info('[scroll1Jsunit_0003] END');
      done();
    });

    /* *
      * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0004
      * @tc.name  : scroll1Jsunit_0004
      * @tc.desc  : Set scroll to vertical '10aa'
      * @tc.level : Level 2
      */

    it('scroll1Jsunit_0004', 0, async function (done) {
      console.info('[scroll1Jsunit_0004] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_4'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0004] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');
      console.info('[scroll1Jsunit_0004] END');
      done();
    });


    /* *
   * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0005
   * @tc.name  : scroll1Jsunit_0005
   * @tc.desc  : scrollEdge sets Edge.Top
   * @tc.level : Level 2
   */
    it('scroll1Jsunit_0005', 0, async function (done) {
      console.info('[scroll1Jsunit_0005] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_5'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0005] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scroll1Jsunit_0005] END');
      done();
    });
    /* *
      * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0006
      * @tc.name  : scroll1Jsunit_0006
      * @tc.desc  : scrollEdge sets Edge.Top
      * @tc.level : Level 2
      */
    it('scroll1Jsunit_0006', 0, async function (done) {
      console.info('[scroll1Jsunit_0006] START');
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_6'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0006] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText12');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('12');

      console.info('[scroll1Jsunit_0006] END');
      done();
    });

    /* *
   * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0007
   * @tc.name  : scroll1Jsunit_0007
   * @tc.desc  : scrollEdge sets Edge.Start
   * @tc.level : Level 2
   */

    it('scroll1Jsunit_0007', 0, async function (done) {
      console.info('[scroll1Jsunit_0007] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_7'));
      await btn.click();
      await CommonFunc.sleep(100);


      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0007] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scroll1Jsunit_0007] END');
      done();
    });

    /* *
      * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0008
      * @tc.name  : scroll1Jsunit_0008
      * @tc.desc  : scrollEdge sets Edge.End
      * @tc.level : Level 2
      */

    it('scroll1Jsunit_0008', 0, async function (done) {
      console.info('[scroll1Jsunit_0008] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_8'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0008] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText12');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('12');


      console.info('[scroll1Jsunit_0008] END');
      done();
    });

      /* *
       * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0009
       * @tc.name  : scroll1Jsunit_0009
       * @tc.desc  : scrollBarColor sets the exception value to undefined
       * @tc.level : Level 2
       */

    it('scroll1Jsunit_0009', 0, async function (done) {
      console.info('[scroll1Jsunit_0009] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_9'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_0009] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('ScrollBar');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.scrollBarColor).assertEqual('#66182431');
      console.log(obj2.$attrs.scrollBarColor);
      console.info('[scroll1Jsunit_0009] END');
      done();
    });
  })
}
