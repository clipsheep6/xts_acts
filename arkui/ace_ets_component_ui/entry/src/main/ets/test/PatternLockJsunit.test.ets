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


export default function PatternLockJsunit() {
  describe('PatternLockJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("PatternLockPage beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/PatternLockPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get PatternLockPage state pages: " + JSON.stringify(pages));
        if (!("PatternLockPage" == pages.name)) {
          console.info("get PatternLockPage state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push PatternLock page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push PatternLock page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('PatternLockJsunit_0100', 0, async (done: Function) => {
      // Get the information of the PatternLock component
      console.info('[PatternLockJsunit_0100] START');
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_0100'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.sideLength).assertEqual('200.00vp');
      expect(JSON.parse(strJson).$attrs.circleRadius).assertEqual('9.00vp');
      expect(JSON.parse(strJson).$attrs.regularColor).assertEqual('#FF000000');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FF228B22');
      expect(JSON.parse(strJson).$attrs.activeColor).assertEqual('#FFB0C4DE');
      expect(JSON.parse(strJson).$attrs.pathColor).assertEqual('#FF90EE90');
      expect(JSON.parse(strJson).$attrs.pathStrokeWidth).assertEqual('18.00vp');
      expect(JSON.parse(strJson).$attrs.autoReset).assertEqual('true');
      await CommonFunc.sleep(1000);
      console.info('[PatternLockJsunit_0100] END');
      done();
    });

    it('PatternLockJsunit_0200', 0, async (done: Function) => {
      // Verify the content of the message
      let driver1 = await UiDriver.create()
      let textComponent1 = await driver1.findComponent(BY.key('text'));
      let text1 = await textComponent1.getText();
      expect(text1).assertEqual('please input password!');
      console.info('[PatternLockJsunit_0200] END');
      done();
    });

    it('PatternLockJsunit_0300', 0, async (done: Function) => {
      // Verify that clicking the 'Reset PatternLock' button resets
      console.info('[PatternLockJsunit_0300] START');
      // Get the component of the 'Reset PatternLock' button
      let driver = await UiDriver.create()
      let reSet = await driver.findComponent(BY.key('reSet'));
      await reSet.click();
      await CommonFunc.sleep(2000);
      // Verify the content of the message
      let driver1 = await UiDriver.create()
      let curtextrentBp = await driver1.findComponent(BY.key('text'));
      let text = await curtextrentBp.getText();
      expect(text).assertEqual('Please input password');
      console.info('[PatternLockJsunit_0300] END');
      done();
    });

    it('PatternLockJsunit_0400', 0, async (done: Function) => {
      // Modify the content of the message
      console.info('[PatternLockJsunit_0400] START');
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'message', value: 'hello world'
      })
      await CommonFunc.sleep(1000);
      // Verify the content of the message
      let driver = await UiDriver.create()
      let textComponent = await driver.findComponent(BY.key('text'));
      let text = await textComponent.getText();
      expect(text).assertEqual('hello world');
      console.info('[PatternLockJsunit_0400] END');
      done();
    });

    it('PatternLockJsunit_0500', 0, async (done: Function) => {
      // Modify the sideLength value of the PatternLock component
      console.info('[PatternLockJsunit_0500] START');
      globalThis.value.message.notify({
        name: 'sideLength', value: '400'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_0500'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // Verify the sideLength value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.sideLength).assertEqual('400.00vp');
      console.info('[PatternLockJsunit_0500] END');
      done();
    });

    it('PatternLockJsunit_0600', 0, async (done: Function) => {
      // Modify the circleRadius value of the PatternLock component
      console.info('[PatternLockJsunit_0600] START');
      globalThis.value.message.notify({
        name: 'circleRadius', value: '18'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_0600'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // Verify the circleRadius value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.circleRadius).assertEqual('18.00vp');
      console.info('[PatternLockJsunit_0600] END');
      done();
    });

    it('PatternLockJsunit_0700', 0, async (done: Function) => {
      // Modify the regularColor value of the PatternLock component
      console.info('[PatternLockJsunit_0700] START');
      globalThis.value.message.notify({
        name: 'regularColor', value: '#FF0000FF'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_0700'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // Verify the regularColor value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.regularColor).assertEqual('#FF0000FF');
      console.info('[PatternLockJsunit_0700] END');
      done();
    });

    it('PatternLockJsunit_0800', 0, async (done: Function) => {
      // Modify the selectedColor value of the PatternLock component
      console.info('[PatternLockJsunit_0800] START');
      globalThis.value.message.notify({
        name: 'selectedColor', value: '#FFFF0000'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_0800'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // Verify the selectedColor value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FFFF0000');
      console.info('[PatternLockJsunit_0800] END');
      done();
    });

    it('PatternLockJsunit_0900', 0, async (done: Function) => {
      // Modify the activeColor value of the PatternLock component
      console.info('[PatternLockJsunit_0500] START');
      globalThis.value.message.notify({
        name: 'activeColor', value: '#FFFF0000'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_0500'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // Verify the activeColor value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.activeColor).assertEqual('#FFFF0000');
      console.info('[PatternLockJsunit_0500] END');
      done();
    });

    it('PatternLockJsunit_1000', 0, async (done: Function) => {
      // Modify the pathColor value of the PatternLock component
      console.info('[PatternLockJsunit_1000] START');
      globalThis.value.message.notify({
        name: 'pathColor', value: '#FF0000FF'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_1000'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // Verify the pathColor value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.pathColor).assertEqual('#FF0000FF');
      console.info('[PatternLockJsunit_1000] END');
      done();
    });

    it('PatternLockJsunit_1100', 0, async (done: Function) => {
      // Modify the pathStrokeWidth value of the PatternLock component
      console.info('[PatternLockJsunit_1100] START');
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'pathStrokeWidth', value: '20'
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_1100'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      // Verify the pathStrokeWidth value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.pathStrokeWidth).assertEqual('20.00vp');
      console.info('[PatternLockJsunit_1100] END');
      done();
    });

    it('PatternLockJsunit_1200', 0, async (done: Function) => {
      // Modify the autoReset value of the PatternLock component
      console.info('[PatternLockJsunit_1200] START');
      globalThis.value.message.notify({
        name: 'autoReset', value: false
      })
      await CommonFunc.sleep(2000);
      let strJson: string = getInspectorByKey('lock');

      console.info("[PatternLockJsunit_1200'] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      await CommonFunc.sleep(1000);
      // Verify the autoReset value of the PatternLock component
      expect(JSON.parse(strJson).$attrs.autoReset).assertEqual('false');
      console.info('[PatternLockJsunit_1200] END');
      done();
    });

    it('PatternLockJsunit_1300', 0, async (done: Function) => {
      console.info('[PatternLockJsunit_1300] START');
      let strJson = getInspectorByKey('default');
      let newStrJson = getInspectorByKey('PatternLock');
      expect(JSON.parse(strJson).$attrs.sideLength).assertEqual(JSON.parse(newStrJson).$attrs.sideLength);
      expect(JSON.parse(strJson).$attrs.circleRadius).assertEqual(JSON.parse(newStrJson).$attrs.circleRadius);
      expect(JSON.parse(strJson).$attrs.regularColor).assertEqual(JSON.parse(newStrJson).$attrs.regularColor);
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual(JSON.parse(newStrJson).$attrs.selectedColor);
      expect(JSON.parse(strJson).$attrs.activeColor).assertEqual(JSON.parse(newStrJson).$attrs.activeColor);
      expect(JSON.parse(strJson).$attrs.pathColor).assertEqual(JSON.parse(newStrJson).$attrs.pathColor);
      expect(JSON.parse(strJson).$attrs.pathStrokeWidth).assertEqual(JSON.parse(newStrJson).$attrs.pathStrokeWidth);
      expect(JSON.parse(strJson).$attrs.autoReset).assertEqual(JSON.parse(newStrJson).$attrs.autoReset);
      console.info('[PatternLockJsunit_1300] END');
      done();
    });
  })
}

