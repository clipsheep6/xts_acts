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


    it('scroll1Jsunit_00100', 0, async function (done) {
      console.info('[scroll1Jsunit_00100] START');
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_1'));
      await btn.click();
      await CommonFunc.sleep(100);


      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00100] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');
      console.info('[scroll1Jsunit_00100] END');
      done();
    });


    it('scroll1Jsunit_00200', 0, async function (done) {
      console.info('[scroll1Jsunit_00200] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_2'));
      await btn.click();
      await CommonFunc.sleep(100);


      globalThis.value.message.notify({name:'arrayIndex',value: 3 })

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00200] obj1 is: " + JSON.stringify(obj1));

      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');

      console.info('[scroll1Jsunit_00200] END');
      done();
    });



    it('scroll1Jsunit_00300', 0, async function (done) {
      console.info('[scroll1Jsunit_00300] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_3'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00300] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');


      console.info('[scroll1Jsunit_00300] END');
      done();
    });

    it('scroll1Jsunit_00400', 0, async function (done) {
      console.info('[scroll1Jsunit_00400] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_4'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00400] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
      expect(obj1.$attrs.scrollBar).assertEqual('BarState.Auto');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');
      console.info('[scroll1Jsunit_00400] END');
      done();
    });

    it('scroll1Jsunit_00500', 0, async function (done) {
      console.info('[scroll1Jsunit_00500] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_5'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00500] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scroll1Jsunit_00500] END');
      done();
    });

    it('scroll1Jsunit_00600', 0, async function (done) {
      console.info('[scroll1Jsunit_00600] START');
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_6'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00600] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText12');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('12');

      console.info('[scroll1Jsunit_00600] END');
      done();
    });

    it('scroll1Jsunit_00700', 0, async function (done) {
      console.info('[scroll1Jsunit_00700] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_7'));
      await btn.click();
      await CommonFunc.sleep(100);


      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00700] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText0');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scroll1Jsunit_00700] END');
      done();
    });

    it('scroll1Jsunit_00800', 0, async function (done) {
      console.info('[scroll1Jsunit_00800] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_8'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00800] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('scrollText12');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('12');


      console.info('[scroll1Jsunit_00800] END');
      done();
    });

    it('scroll1Jsunit_00900', 0, async function (done) {
      console.info('[scroll1Jsunit_00900] START');

      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('scroll1_9'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('ScrollBar');
      let obj1 = JSON.parse(strJson1);
      console.info("[scroll1Jsunit_00900] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');

      let strJson2 = getInspectorByKey('ScrollBar');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.scrollBarColor).assertEqual('#66182431');
      console.log(obj2.$attrs.scrollBarColor);
      console.info('[scroll1Jsunit_00900] END');
      done();
    });
  })
}
