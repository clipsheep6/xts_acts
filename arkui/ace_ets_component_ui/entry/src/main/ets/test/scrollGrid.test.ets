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




export default function scrollGridJsunit() {
  describe('scrollJsunit', function () {
    beforeEach(async function (done) {
      console.info("scrollGridJsunit beforeEach start");
      let options = {
        uri: "MainAbility/pages/scrollGrid",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get scrollGridJsunit state pages: " + JSON.stringify(pages));
        if (!("scroll" == pages.name)) {
          console.info("get scrollGridJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push scrollGridJsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push scrollGridJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });


    it('scrollGridJsunit_00100', 0, async function (done) {
      console.info('[scrollGridJsunit_00100] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('Grid1'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollGridJsunit_00100] obj1 is: " + JSON.stringify(obj1));

      // GridScroll
      let strJson2 = getInspectorByKey('GridText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');

      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      console.info('[scrollGridJsunit_00100] END');
      done();
    });

    it('scrollGridJsunit_00200', 0, async function (done) {
      console.info('[scrollGridJsunit_00200] START');


      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('Grid2'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollGridJsunit_00200] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      // GridScroll
      let strJson2 = getInspectorByKey('GridText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');
      console.info('[scrollGridJsunit_00200] END');
      done();
    });

    it('scrollGridJsunit_00300', 0, async function (done) {
      console.info('[scrollGridJsunit_00300] START');
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('Grid3'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollGridJsunit_00300] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      // GridScroll
      let strJson2 = getInspectorByKey('GridText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');
      console.info('[scrollGridJsunit_00300] END');
      done();
    });

    it('scrollGridJsunit_00400', 0, async function (done) {
      console.info('[scrollGridJsunit_00400] START');
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('Grid4'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollGridJsunit_00400] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      // GridScroll
      let strJson2 = getInspectorByKey('GridText');
      let obj2 = JSON.parse(strJson2);
      // scrollText
      expect(obj2.$attrs.content).assertEqual('0');
      console.info('[scrollGridJsunit_00400] END');
      done();
    });

  })
}
