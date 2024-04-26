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


export default function TextPickerJsunit() {
  describe('TextPickerJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("TextPicker beforeEach start");
      let options = {
        uri: 'MainAbility/pages/TextPickerPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get TextPicker state pages: " + JSON.stringify(pages));
        if (!("TextPickerPage" == pages.name)) {
          console.info("get TextPicker state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          console.info("push TextPicker page result: " + JSON.stringify(result));
          await CommonFunc.sleep(2000);
        }
      } catch (err) {
        console.error("push TextPicker page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('TextPickerJsunit_0100', 0, async (done: Function) => {
      // Get the information of TextPicker component
      console.info('[TextPickerJsunit_0100] START');
      let strJson = getInspectorByKey('textPicker');
      console.info("[TextPickerJsunit_0100] component obj is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[TextPickerJsunit_0100] range: " + JSON.stringify(JSON.parse(strJson).$attrs.range));
      console.info("[TextPickerJsunit_0100] selected: " + JSON.stringify(JSON.parse(strJson).$attrs.selected));
      console.info("[TextPickerJsunit_0100] value: " + JSON.stringify(JSON.parse(strJson).$attrs.value));
      console.info("[TextPickerJsunit_0100] defaultPickerItemHeight: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .defaultPickerItemHeight));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.range)
        .assertEqual('["icon:,text:apple1","icon:,text:orange2","icon:,text:peach3","icon:,text:grape4"]');
      expect(JSON.parse(strJson).$attrs.selected).assertEqual('0');
      //expect(obj.$attrs.value).assertEqual('orange2');
      expect(JSON.parse(strJson).$attrs.defaultPickerItemHeight).assertEqual('20.00fp');

      // Get the content of Initial value
      let driver = await UiDriver.create()
      let strJson1 = getInspectorByKey('textContent1');
      console.info("[TextPickerJsunit_0100] obj1: " + JSON.stringify(JSON.parse(strJson1)));
      expect(JSON.parse(strJson1).$attrs.content).assertEqual('value: 0');
      console.info('[TextPickerJsunit_0100] END');
      done();
    });

    it('TextPickerJsunit_0200', 0, async (done: Function) => {
      // Modify the attribute of TextPicker component
      console.info('[TextPickerJsunit_0200] START');
      globalThis.value.message.notify({
        name: 'fruits', value: ['banana1', 'orange2', 'peach3', 'grape4']
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'select', value: 1
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'parameterValue', value: 'peach3'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'defaultPickerItemHeight', value: 25
      })
      await CommonFunc.sleep(2000);

      // Get the attribute of TextPicker component
      let strJson = getInspectorByKey('textPicker');
      console.info("[TextPickerJsunit_0200] component obj is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[TextPickerJsunit_0200] range: " + JSON.stringify(JSON.parse(strJson).$attrs.range));
      console.info("[TextPickerJsunit_0200] selected: " + JSON.stringify(JSON.parse(strJson).$attrs.selected));
      console.info("[TextPickerJsunit_0200] value: " + JSON.stringify(JSON.parse(strJson).$attrs.value));
      console.info("[TextPickerJsunit_0200] defaultPickerItemHeight: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .defaultPickerItemHeight));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.range)
        .assertEqual('["icon:,text:banana1","icon:,text:orange2","icon:,text:peach3","icon:,text:grape4"]');
      expect(JSON.parse(strJson).$attrs.selected).assertEqual('1');
      //expect(obj.$attrs.value).assertEqual('peach3');
      expect(JSON.parse(strJson).$attrs.defaultPickerItemHeight).assertEqual('25.00fp');
      console.info('[TextPickerJsunit_0200] END');
      done();
    });

    it('TextPickerJsunit_0300', 0, async (done: Function) => {
      // Verify the functions of TextPicker component
      await CommonFunc.sleep(500);
      console.info('[TextPickerJsunit_0300] START');
      let component = CommonFunc.getComponentRectOnScreen('textPicker');
      let bottom = component.bottom
      let right = component.right
      let top = component.top
      let middle = (top + bottom) / 2
      console.info("[TextPickerJsunit_0300] bottom: " + JSON.stringify(bottom));
      console.info("[TextPickerJsunit_0300] right: " + JSON.stringify(right));
      let driver = await UiDriver.create()
      await CommonFunc.sleep(1000);
      await driver.swipe(Math.round(right / 2), Math.round(middle + 50), Math.round(right / 2), Math.round(middle - 50));
      await CommonFunc.sleep(6000);
      let strJson = getInspectorByKey('textContent1');
      console.info("[TextPickerJsunit_0300] obj: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.content == 'value: 0').assertFalse();
      done();
    });

    it('TextPickerJsunit_0400', 0, async (done: Function) => {
      // Illegal modification of properties of TextPicker component
      console.info('[TextPickerJsunit_0400] START');
      globalThis.value.message.notify({
        name: 'fruits', value: 'abc'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'select', value: 'test'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'parameterValue', value: 123
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'defaultPickerItemHeight', value: 'abc'
      })
      await CommonFunc.sleep(1000);

      // Get the attribute of TextPicker component
      let strJson = getInspectorByKey('textPicker');
      console.info("[TextPickerJsunit_0400] component obj is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[TextPickerJsunit_0400] range: " + JSON.stringify(JSON.parse(strJson).$attrs.range));
      console.info("[TextPickerJsunit_0400] selected: " + JSON.stringify(JSON.parse(strJson).$attrs.selected));
      console.info("[TextPickerJsunit_0400] value: " + JSON.stringify(JSON.parse(strJson).$attrs.value));
      console.info("[TextPickerJsunit_0400] defaultPickerItemHeight: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .defaultPickerItemHeight));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.range)
        .assertEqual('["icon:,text:banana1","icon:,text:orange2","icon:,text:peach3","icon:,text:grape4"]');
      expect(JSON.parse(strJson).$attrs.selected).assertEqual('1');
      //expect(obj.$attrs.value).assertEqual('');
      expect(JSON.parse(strJson).$attrs.defaultPickerItemHeight).assertEqual('0.00fp');
      console.info('[TextPickerJsunit_0400] END');
      done();
    });
  })
}