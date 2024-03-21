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

const waitUiReadyMs = 1000;

export default function datelPanelJsunit() {
  describe('datelPanelJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("datelPanelJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/DatelPanel',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get datelPanelJsunit state pages:" + JSON.stringify(pages));
        if (!("DatelPanel" == pages.name)) {
          console.info("get datelPanelJsunit state pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push datelPanelJsunit success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push datelPanelJsunit page error:" + err);
        expect().assertFail();
      }
      done();
    });

    it('datelPanelJsunit_0100', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0100 START');
      await CommonFunc.sleep(1000);
      // get the datelPanel component and test attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("datelPanelJsunit_0100'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .values));
      let valus = JSON.parse(strJson).$attrs.values;
      let expectV: string = [25, 1].toString();
      expect(valus == expectV).assertTrue();
      expect(JSON.parse(strJson).$attrs.max).assertEqual('26.000000');
      expect(JSON.parse(strJson).$attrs.type).assertEqual('DataPanelType.Line');
      done();
    });

    it('datelPanelJsunit_0200', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0200 START');
      await CommonFunc.sleep(1000);
      // modify the type attribute normal value of DataPanel dynamically
      globalThis.value.message.notify({
        name: 'dataPanelType', value: DataPanelType.Line
      })
      await CommonFunc.sleep(2000);
      // check the value of changed attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("[datelPanelJsunit_0200'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.type).assertEqual('DataPanelType.Line');
      done();
    });

    it('datelPanelJsunit_0300', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0300 START');
      await CommonFunc.sleep(1000);
      // modify the attribute illegal value of DataPanel dynamically
      globalThis.value.message.notify({
        name: 'dataPanelType', value: 3
      })
      await CommonFunc.sleep(2000);
      // check the value of changed attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("[datelPanelJsunit_0300'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // check the default value
      expect(JSON.parse(strJson).$attrs.type).assertEqual('DataPanelType.Circle');
      done();
    });

    it('datelPanelJsunit_0400', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0400 START');
      await CommonFunc.sleep(1000);
      // modify the values attribute normal value of DataPanel dynamically
      globalThis.value.message.notify({
        name: 'values', value: [10, 10, 10, 10, 10, 10, 10, 10, 10]
      })
      await CommonFunc.sleep(200);
      // check the value of changed attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("[datelPanelJsunit_0400'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .values));
      let expectV: string = [10, 10, 10, 10, 10, 10, 10, 10, 10].toString();
      expect(JSON.parse(strJson).$attrs.values == expectV).assertTrue();
      done();
    });

    it('datelPanelJsunit_0500', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0500 START');
      await CommonFunc.sleep(1000);
      // modify the values ten attribute value of DataPanel dynamically
      globalThis.value.message.notify({
        name: 'values', value: [-50, 33, 1, 22, 33, 33, 333, 21, 31, 10]
      })
      await CommonFunc.sleep(2000);
      // check the value of changed attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("[datelPanelJsunit_0500'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .values));
      let expectV: string = [0, 33, 1, 22, 33, 33, 333, 21, 31].toString();
      expect(JSON.parse(strJson).$attrs.values == expectV).assertTrue();
      expect(JSON.parse(strJson).$attrs.max).assertEqual('507.000000');
      done();
    });

    it('datelPanelJsunit_0600', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0600 START');
      await CommonFunc.sleep(1000);
      // modify the max attribute value of DataPanel dynamically
      globalThis.value.message.notify({
        name: 'maxValue', value: 27
      })
      await CommonFunc.sleep(2000);
      // check the max value of changed attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("[datelPanelJsunit_0600'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.max).assertEqual('27.000000');
      done();
    });

    it('datelPanelJsunit_0700', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0700 START');
      await CommonFunc.sleep(1000);
      // fix value num
      globalThis.value.message.notify({
        name: 'values', value: [-3, 10, 10, 10, 10, 10, 10, 10, 10, 90]
      })
      await CommonFunc.sleep(2000);
      // modify the max attribute value of DataPanel dynamically
      globalThis.value.message.notify({
        name: 'maxValue', value: -30
      })
      await CommonFunc.sleep(2000);
      // check the max value of changed attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("[datelPanelJsunit_0700'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .options));
      expect(JSON.parse(strJson).$attrs.max).assertEqual('80.000000');
      done();
    });

    it('datelPanelJsunit_0800', 0, async (done: Function) => {
      console.info('datelPanelJsunit_0800 START');
      await CommonFunc.sleep(1000);
      // fix value num
      globalThis.value.message.notify({
        name: 'values', value: [10, 10, 10, 10, 10, 10, 10, 10, 10]
      })
      await CommonFunc.sleep(2000);
      // modify the max attribute value of DataPanel dynamically
      globalThis.value.message.notify({
        name: 'maxValue', value: 0
      })
      await CommonFunc.sleep(2000);
      // check the max value of changed attribute
      let strJson: string = getInspectorByKey('dp1');

      console.info("[datelPanelJsunit_0800'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .max));
      expect(JSON.parse(strJson).$attrs.max).assertEqual('90.000000');
      done();
    });
  })
}