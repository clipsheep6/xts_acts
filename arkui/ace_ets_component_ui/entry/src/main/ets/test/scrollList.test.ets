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




export default function scrollListJsunit() {
  describe('scrollListJsunit', function () {
    beforeEach(async function (done) {
      console.info("scrollListJsunit beforeEach start");
      let options = {
        uri: "MainAbility/pages/scrollList",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get scrollListJsunit state pages: " + JSON.stringify(pages));
        if (!("scrollList" == pages.name)) {
          console.info("get scrollListJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push scrollListJsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push scrollListJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });


    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0019
    * @tc.name  : scrollListJsunit_0001
    * @tc.desc  : Scroll to -3
    * @tc.level : Level 2
    */

    it('scrollListJsunit_0001', 0, async function (done) {
      console.info('[scrollListJsunit_0001] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scrollList1'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('list');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollListJsunit_0001] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.listDirection).assertEqual('Axis.Vertical');
      // GridScroll
      let strJson2 = getInspectorByKey('scrollListText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scrollListJsunit_0001] END');
      done();
    });

    /* *
     * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0020
     * @tc.name  : scrollListJsunit_0002
     * @tc.desc  : scrollTo 50%
     * @tc.level : Level 2
     */

    it('scrollListJsunit_0002', 0, async function (done) {
      console.info('[scrollListJsunit_0002] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scrollList2'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('list');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollListJsunit_0002] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.listDirection).assertEqual('Axis.Vertical');
      // GridScroll
      let strJson2 = getInspectorByKey('scrollListText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scrollListJsunit_0002] END');
      done();
    });

    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0021
    * @tc.name  : scrollListJsunit_0003
    * @tc.desc  : scrollToIndex 3000
    * @tc.level : Level 2
    */


    it('scrollListJsunit_0003', 0, async function (done) {
      console.info('[scrollListJsunit_0003] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scrollList3'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('list');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollListJsunit_0003] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.listDirection).assertEqual('Axis.Vertical');
      // GridScroll
      let strJson2 = getInspectorByKey('scrollListText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scrollListJsunit_0003] END');
      done();
    });

    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0022
    * @tc.name  : scrollListJsunit_0004
    * @tc.desc  : scrollToIndex undefined
    * @tc.level : Level 2
    */


    it('scrollListJsunit_0004', 0, async function (done) {
      console.info('[scrollListJsunit_0004] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scrollList4'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('list');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollListJsunit_0004] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.listDirection).assertEqual('Axis.Vertical');
      // GridScroll
      let strJson2 = getInspectorByKey('scrollListText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scrollListJsunit_0004] END');
      done();
    });

    /* *
      * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0023
      * @tc.name  : scrollListJsunit_0005
      * @tc.desc  : scrollToIndex null
      * @tc.level : Level 2
      */

    it('scrollListJsunit_0005', 0, async function (done) {
      console.info('[scrollListJsunit_0005] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scrollList5'));
      await btn.click();
      await CommonFunc.sleep(100);


      let strJson1 = getInspectorByKey('list');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollListJsunit_0005] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.listDirection).assertEqual('Axis.Vertical');
      // GridScroll
      let strJson2 = getInspectorByKey('scrollListText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scrollListJsunit_0005] END');
      done();
    });

  })
}

