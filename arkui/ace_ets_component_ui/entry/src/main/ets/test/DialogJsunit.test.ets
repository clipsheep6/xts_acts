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
import CommonFunc from '../MainAbility/utils/Common';
import { MessageManager, Callback } from '../MainAbility/utils/MessageManager';

export default function DialogJsunit() {
  describe('DialogJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("DialogJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/DialogPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get DialogJsunit state pages: " + JSON.stringify(pages));
        if (!("DialogPage" == pages.name)) {
          console.info("get DialogJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push DialogJsunit success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push DialogJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });
    it('DialogJsunit_0100', 0, async (done: Function) => {

      console.info('[DialogJsunit_0100] START');
      await CommonFunc.sleep(1000);

      let driver = await UiDriver.create()
      let button = await driver.findComponent(BY.key('button'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('button');

      console.info('[DialogJsunit_0100] button component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.label);
      expect(JSON.parse(strJson).$attrs.label).assertEqual('threeButtonHor:succ');
      await driver.pressBack();
      await CommonFunc.sleep(500);

      let button1 = await driver.findComponent(BY.key('button1'));
      await button1.click();
      await CommonFunc.sleep(1000);
      let strJson1 = getInspectorByKey('button1');

      console.info('[DialogJsunit_0100] button1 component JSON.parse(strJson) is: ' + JSON.parse(strJson1)
        .$attrs
        .label);
      expect(JSON.parse(strJson1).$attrs.label).assertEqual('threeButtonVer:succ');
      await driver.pressBack();
      await CommonFunc.sleep(500);

      let button2 = await driver.findComponent(BY.key('button2'));
      await button2.click();
      await CommonFunc.sleep(1000);
      let strJson2 = getInspectorByKey('button2');

      console.info('[DialogJsunit_0100] button2 component JSON.parse(strJson) is: ' + JSON.parse(strJson2)
        .$attrs
        .label);
      expect(JSON.parse(strJson2).$attrs.label).assertEqual('threeButtonAuto:succ');
      await driver.pressBack();
      await CommonFunc.sleep(500);
      console.info('[DialogJsunit_0100] END');
      done();
    });
  })
}