/**
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import {
  UiComponent,
  UiDriver,
  Component,
  Driver,
  UiWindow,
  ON,
  BY,
  MatchPattern,
  DisplayRotation,
  ResizeDirection,
  WindowMode,
  PointerMatrix
} from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/utils/Common';


export default function StorageLinkJsunit1() {
  describe('StorageLinkJsunit1', () => {
    beforeEach(async (done: Function) => {
      console.info("StorageLinkJsunit1 beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/State/StorageLink1',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get StorageLinkJsunit1 state pages: " + JSON.stringify(pages));
        if (!("StorageLink1" == pages.name)) {
          console.info("get StorageLinkJsunit1 state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push StorageLinkJsunit1 page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push StorageLinkJsunit1 page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('StorageLinkJsunit1_0100', 0, async (done: Function) => {
      // Get the init value of button_son1
      console.info('[StorageLinkJsunit1_0100] START');
      let driver = await UiDriver.create()
      let button_son1 = await driver.findComponent(BY.key('button_son1'));
      await button_son1.click();
      await CommonFunc.sleep(2000);

      let strJson1 = getInspectorByKey('button_son1');

      console.info("[StorageLinkJsunit1_0100] son1 JSON.parse(strJson1) is: " + JSON.stringify(JSON.parse(strJson1)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson1).$attrs.label).assertEqual('num: 11111');
      console.info('[StorageLinkJsunit1_0100] END');
      done();
    });

    it('StorageLinkJsunit1_0200', 0, async (done: Function) => {
      // Get the init value of button_son2
      console.info('[StorageLinkJsunit1_0200] START');
      let driver = await UiDriver.create()
      let button_son2 = await driver.findComponent(BY.key('button_son2'));
      await button_son2.click();
      await CommonFunc.sleep(2000);

      let strJson2 = getInspectorByKey('button_son2');

      console.info("[StorageLinkJsunit1_0200] son2 JSON.parse(strJson2) is: " + JSON.stringify(JSON.parse(strJson2)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson2).$attrs.label).assertEqual('string: sss');
      console.info('[StorageLinkJsunit1_0200] END');
      done();
    });

    it('StorageLinkJsunit1_0300', 0, async (done: Function) => {
      // Get the init value of button_son3
      console.info('[StorageLinkJsunit1_0300] START');
      let driver = await UiDriver.create()
      let button_son3 = await driver.findComponent(BY.key('button_son3'));
      await button_son3.click();
      await CommonFunc.sleep(2000);

      let strJson3 = getInspectorByKey('button_son3');

      console.info("[StorageLinkJsunit1_0300] son3 JSON.parse(strJson3) is: " + JSON.stringify(JSON.parse(strJson3)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson3).$attrs.label).assertEqual('boolean: true');
      console.info('[StorageLinkJsunit1_0300] END');
      done();
    });

    it('StorageLinkJsunit1_0400', 0, async (done: Function) => {
      // Get the init value of button_son4
      console.info('[StorageLinkJsunit1_0400] START');
      let driver = await UiDriver.create()
      let button_son4 = await driver.findComponent(BY.key('button_son4'));
      await button_son4.click();
      await CommonFunc.sleep(2000);

      let strJson4 = getInspectorByKey('button_son4');

      console.info("[StorageLinkJsunit1_0400] son4 JSON.parse(strJson4) is: " + JSON.stringify(JSON.parse(strJson4)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson4).$attrs.label).assertEqual('enu: 3');
      console.info('[StorageLinkJsunit1_0400] END');
      done();
    });

    it('StorageLinkJsunit1_0500', 0, async (done: Function) => {
      // Get the init value of button_son5
      console.info('[StorageLinkJsunit1_0500] START');
      let driver = await UiDriver.create()
      let button_son5 = await driver.findComponent(BY.key('button_son5'));
      await button_son5.click();
      await CommonFunc.sleep(2000);

      let strJson5 = getInspectorByKey('button_son5');
      console.info("[StorageLinkJsunit1_0500] son5 JSON.parse(strJson)5 is: " + JSON.stringify(JSON.parse(strJson5)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson5).$attrs.label).assertEqual('class: Title:Hello C');
      console.info('[StorageLinkJsunit1_0500] END');
      done();
    });

    it('StorageLinkJsunit1_0600', 0, async (done: Function) => {
      // Get the init value of button_son6
      console.info('[StorageLinkJsunit1_0600] START');
      let driver = await UiDriver.create()
      let button_son6 = await driver.findComponent(BY.key('button_son6'));
      await button_son6.click();
      await CommonFunc.sleep(2000);

      let strJson6 = getInspectorByKey('button_son6');
      console.info("[StorageLinkJsunit1_0600] son6 JSON.parse(strJson)6 is: " + JSON.stringify(JSON.parse(strJson6)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson6).$attrs.label).assertEqual('JSON.parse(strJson): {"name":"ls","age":13}');
      console.info('[StorageLinkJsunit1_0600] END');
      done();
    });

    it('StorageLinkJsunit1_0700', 0, async (done: Function) => {
      // Get the init value of button_son7
      console.info('[StorageLinkJsunit1_0700] START');
      let driver = await UiDriver.create()
      let button_son7 = await driver.findComponent(BY.key('button_son7'));
      await button_son7.click();
      await CommonFunc.sleep(2000);

      let strJson7 = getInspectorByKey('button_son7');
      console.info("[StorageLinkJsunit1_0700] son7 JSON.parse(strJson)7 is: " + JSON.stringify(JSON.parse(strJson7)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson7).$attrs.label).assertEqual('strArray: ls,zs');
      console.info('[StorageLinkJsunit1_0700] END');
      done();
    });

    it('StorageLinkJsunit1_0800', 0, async (done: Function) => {
      // Get the init value of button_son8
      console.info('[StorageLinkJsunit1_0800] START');
      let driver = await UiDriver.create()
      let button_son8 = await driver.findComponent(BY.key('button_son8'));
      await button_son8.click();
      await CommonFunc.sleep(2000);

      let strJson8 = getInspectorByKey('button_son8');
      console.info("[StorageLinkJsunit1_0800] son8 JSON.parse(strJson)8 is: " + JSON.stringify(JSON.parse(strJson8)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson8).$attrs.label).assertEqual('numArray: 2,3');
      console.info('[StorageLinkJsunit1_0800] END');
      done();
    });

    it('StorageLinkJsunit1_0900', 0, async (done: Function) => {
      // Get the init value of button_son9
      console.info('[StorageLinkJsunit1_0900] START');
      let driver = await UiDriver.create()
      let button_son9 = await driver.findComponent(BY.key('button_son9'));
      await button_son9.click();
      await CommonFunc.sleep(2000);

      let strJson9 = getInspectorByKey('button_son9');
      console.info("[StorageLinkJsunit1_0900] son9 JSON.parse(strJson)9 is: " + JSON.stringify(JSON.parse(strJson9)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson9).$attrs.label).assertEqual('boolArray: false,true');
      console.info('[StorageLinkJsunit1_0900] END');
      done();
    });

    it('StorageLinkJsunit1_1000', 0, async (done: Function) => {
      // Get the init value of button_son9
      console.info('[StorageLinkJsunit1_1000] START');
      let driver = await UiDriver.create()
      let button_son10 = await driver.findComponent(BY.key('button_son10'));
      await button_son10.click();
      await CommonFunc.sleep(2000);

      let strJson10 = getInspectorByKey('button_son10');
      console.info("[StorageLinkJsunit1_1000] son10 JSON.parse(strJson1)0 is: " + JSON.stringify(JSON.parse(strJson10)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson10).$attrs.label)
        .assertEqual('classArray: [{"value":"hello world"},{"value":"hello C"}]');
      console.info('[StorageLinkJsunit1_1000] END');
      done();
    });

    it('StorageLinkJsunit1_1100', 0, async (done: Function) => {
      // Get the init value of button_son11
      console.info('[StorageLinkJsunit1_1100] START');
      let driver = await UiDriver.create()
      let button_son11 = await driver.findComponent(BY.key('button_son11'));
      await button_son11.click();
      await CommonFunc.sleep(2000);

      let strJson11 = getInspectorByKey('button_son11');
      console.info("[StorageLinkJsunit1_1100] son11 JSON.parse(strJson1)1 is: " + JSON.stringify(JSON.parse(strJson11)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson11).$attrs.label).assertEqual('JSON.parse(strJson)Array: [{"name":"ls"},{"name":"zs"}]');
      console.info('[StorageLinkJsunit1_1100] END');
      done();
    });

    it('StorageLinkJsunit1_1200', 0, async (done: Function) => {
      // Get the init value of button_son11
      console.info('[StorageLinkJsunit1_1200] START');
      let driver = await UiDriver.create()
      let button_son12 = await driver.findComponent(BY.key('button_son12'));
      await button_son12.click();
      await CommonFunc.sleep(2000);

      let strJson12 = getInspectorByKey('button_son12');
      console.info("[StorageLinkJsunit1_1200] son12 JSON.parse(strJson1)2 is: " + JSON.stringify(JSON.parse(strJson12)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson12).$attrs.label).assertEqual('menuArray: 2,3');
      console.info('[StorageLinkJsunit1_1200] END');
      done();
    });
  })
}
