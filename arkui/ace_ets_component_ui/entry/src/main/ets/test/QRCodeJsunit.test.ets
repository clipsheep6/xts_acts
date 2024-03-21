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
import CommonFunc from '../MainAbility/utils/Common';
import { MessageManager, Callback } from '../MainAbility/utils/MessageManager';
import bundle from '@ohos.bundle.bundleManager';

export default function QRCodeJsunit() {
  describe('QRCodeJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("QRCodeJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/QRCodePage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get QRCodeJsunit state pages: " + JSON.stringify(pages));
        if (!("QRCodePage" == pages.name)) {
          console.info("get QRCodeJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push QRCodeJsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push QRCodeJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('QRCodeJsunit_0100', 0, async (done: Function) => {
      // Get the information of the QRCode component
      console.info('[QRCodeJsunit_0100] START');
      let strJson: string = getInspectorByKey('qr');
      let strJsonDefault = getInspectorByKey('qrDefault');
      console.info("[QRCodeJsunit_0100] component obj is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[QRCodeJsunit_0100] component objDefault is: " + JSON.stringify(JSON.parse(strJsonDefault)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.value).assertEqual('normal');
      let targetVersion = bundle.getBundleInfoForSelfSync(bundle.BundleFlag.GET_BUNDLE_INFO_DEFAULT).targetVersion;
      if (targetVersion < 11) {
        expect(JSON.parse(strJson).$attrs.color).assertEqual('#FF000000');
        expect(JSON.parse(strJson).$attrs.backgroundColor).assertEqual('#FFFFFFFF');
      } else {
        expect(JSON.parse(strJson).$attrs.color).assertEqual(JSON.parse(strJsonDefault).$attrs.color);
        expect(JSON.parse(strJson).$attrs.backgroundColor)
          .assertEqual(JSON.parse(strJsonDefault).$attrs.backgroundColor);
      }
      console.info('[QRCodeJsunit_0100] END');
      done();
    });

    it('QRCodeJsunit_0200', 0, async (done: Function) => {
      // Modify the color of the QRCode component
      console.info('[QRCodeJsunit_0200] START');
      globalThis.value.message.notify({
        name: 'QRCodeColor', value: Color.Yellow
      })
      await CommonFunc.sleep(2000);
      // Get the color of the QRCode component
      let strJson: string = getInspectorByKey('qr1');

      console.info("[QRCodeJsunit_0200] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.color).assertEqual('#FFFFFF00');
      console.info('[QRCodeJsunit_0200] END');
      done();
    });

    it('QRCodeJsunit_0300', 0, async (done: Function) => {
      // Modify the backgroundColor of the QRCode component
      console.info('[QRCodeJsunit_0300] START');
      globalThis.value.message.notify({
        name: 'backgroundColor', value: Color.Green
      })
      await CommonFunc.sleep(1000);
      // Get the backgroundColor of the QRCode component
      let strJson: string = getInspectorByKey('qr2');

      console.info("[QRCodeJsunit_0300] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.backgroundColor).assertEqual('#FF008000');
      console.info('[QRCodeJsunit_0300] END');
      done();
    });

    it('QRCodeJsunit_0400', 0, async (done: Function) => {
      // Modify the value of the QRCode component
      console.info('[QRCodeJsunit_0400] START');
      globalThis.value.message.notify({
        name: 'QRCodeValue', value: 'myTest'
      })
      await CommonFunc.sleep(2000);
      // Get the value of the QRCode component
      let strJson: string = getInspectorByKey('qr1');

      console.info("[QRCodeJsunit_0400] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.value).assertEqual('myTest');
      console.info('[QRCodeJsunit_0400] END');
      done();
    });

    it('QRCodeJsunit_0500', 0, async (done: Function) => {
      // Illegal modification of the QRCode component value
      console.info('[QRCodeJsunit_0500] START');
      globalThis.value.message.notify({
        name: 'QRCodeColor', value: 1
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'QRCodeValue', value: -10
      })
      await CommonFunc.sleep(1000);
      // Get the color and value of the QRCode component
      let strJson = getInspectorByKey('qr1');
      console.info("[QRCodeJsunit_0500] component obj is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.color).assertEqual('#FF000001');
      expect(JSON.parse(strJson).$attrs.value).assertEqual('-10');

      // Get the backgroundColor of the QRCode component
      globalThis.value.message.notify({
        name: 'backgroundColor', value: 'test'
      })
      await CommonFunc.sleep(2000);
      let strJson1 = getInspectorByKey('qr2');
      let strJsonDefault = getInspectorByKey('qrDefault');
      console.info("[QRCodeJsunit_0500] component obj1 is: " + JSON.stringify(JSON.parse(strJson1)));
      console.info("[QRCodeJsunit_0500] component objDefault is: " + JSON.stringify(JSON.parse(strJsonDefault)));
      let targetVersion = bundle.getBundleInfoForSelfSync(bundle.BundleFlag.GET_BUNDLE_INFO_DEFAULT).targetVersion;
      if (targetVersion < 11) {
        expect(JSON.parse(strJson1).$attrs.backgroundColor).assertEqual('#FFFFFFFF');
      } else {
        expect(JSON.parse(strJson1).$attrs.backgroundColor)
          .assertEqual(JSON.parse(strJsonDefault).$attrs.backgroundColor);
      }
      console.info('[QRCodeJsunit_0500] END');
      done();
    });

    it('QRCodeJsunit_0600', 0, async (done: Function) => {
      // Verify that component QRCode only supports click events
      console.info('[QRCodeJsunit_0600] START');
      let driver = await UiDriver.create()
      let qrComponent = await driver.findComponent(BY.key('qr'));
      await qrComponent.click();
      await CommonFunc.sleep(1000);
      let textComponent = await driver.findComponent(BY.key('text'));
      let text = await textComponent.getText();
      expect(text).assertEqual('click succ');
      console.info('[QRCodeJsunit_0600] END');
      done();
    });
  }
  )
}
