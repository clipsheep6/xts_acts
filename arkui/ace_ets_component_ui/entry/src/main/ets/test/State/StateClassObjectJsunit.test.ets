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
import { MessageManager, Callback } from '../../MainAbility/utils/MessageManager';


export default function StateClassObjectJsunit() {
  describe('StateClassObjectJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("StateClassObjectJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/State/StateClassObject',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get StateClassObjectJsunit state pages: " + JSON.stringify(pages));
        if (!("StateClassObject" == pages.name)) {
          console.info("get StateClassObjectJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push StateClassObjectJsunit success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push StateClassObjectJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });
    afterEach(async () => {
      await CommonFunc.sleep(1000);
      router.back({
        url: "MainAbility/pages/index/index"
      });
    });

    it('StateClassObjectJsunit_0100', 0, async (done: Function) => {

      console.info('StateClassObjectJsunit_0100 START');
      let strJson1 = getInspectorByKey('text_Object');

      console.info("[StateClassObjectJsunit_0100] component JSON.parse(strJson1) is: " + JSON.stringify(JSON.parse(strJson1)));
      console.info("[StateClassObjectJsunit_0100] title: " + JSON.stringify(JSON.parse(strJson1).$attrs.content));
      expect(JSON.parse(strJson1).$attrs.content).assertEqual("Hello");

      let strJson2 = getInspectorByKey('text_Class');

      console.info("[StateClassObjectJsunit_0100] component JSON.parse(strJson2) is: " + JSON.stringify(JSON.parse(strJson2)));
      console.info("[StateClassObjectJsunit_0100] title: " + JSON.stringify(JSON.parse(strJson2).$attrs.content));
      expect(JSON.parse(strJson2).$attrs.content).assertEqual("World");

      console.info('[StateClassObjectJsunit_0100] END');
      done();
    });

    it('StateClassObjectJsunit_0200', 0, async (done: Function) => {

      console.info('StateClassObjectJsunit_0200 START');
      let driver = await UiDriver.create()
      let button = await driver.findComponent(BY.key('state_Object1'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson1 = getInspectorByKey('text_Object');

      console.info("[StateClassObjectJsunit_0200] component JSON.parse(strJson1) is: " + JSON.stringify(JSON.parse(strJson1)));
      console.info("[StateClassObjectJsunit_0200] title: " + JSON.stringify(JSON.parse(strJson1).$attrs.content));
      expect(JSON.parse(strJson1).$attrs.content).assertEqual("Hi");

      let strJson2 = getInspectorByKey('text_Class');

      console.info("[StateClassObjectJsunit_0200] component JSON.parse(strJson2) is: " + JSON.stringify(JSON.parse(strJson2)));
      console.info("[StateClassObjectJsunit_0200] title: " + JSON.stringify(JSON.parse(strJson2).$attrs.content));
      expect(JSON.parse(strJson2).$attrs.content).assertEqual("ArkUI");
      console.info('[StateClassObjectJsunit_0200] END');

      done();
    });

    it('StateClassObjectJsunit_0300', 0, async (done: Function) => {

      console.info('StateClassObjectJsunit_0300 START');
      let driver = await UiDriver.create()
      let button = await driver.findComponent(BY.key('state_Object2'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('text_Object');

      console.info("[StateClassObjectJsunit_0300] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[StateClassObjectJsunit_0300] title: " + JSON.stringify(JSON.parse(strJson).$attrs.content));
      expect(JSON.parse(strJson).$attrs.content).assertEqual("Hello ArkUI");
      console.info('[StateClassObjectJsunit_0300] END');
      done();
    });

    it('StateClassObjectJsunit_0400', 0, async (done: Function) => {

      console.info('StateClassObjectJsunit_0400 START');
      let driver = await UiDriver.create()
      let button = await driver.findComponent(BY.key('state_Class'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('text_Class');

      console.info("[StateClassObjectJsunit_0400] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[StateClassObjectJsunit_0400] name: " + JSON.stringify(JSON.parse(strJson).$attrs.content));
      expect(JSON.parse(strJson).$attrs.content).assertEqual("Harmony");
      console.info('[StateClassObjectJsunit_0400] END');
      done();
    });
  })
}

