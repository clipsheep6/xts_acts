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
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.uitest';
import CommonFunc from '../MainAbility/utils/Common';
import {MessageManager,Callback} from '../MainAbility/utils/MessageManager';


export default function SearchJsunit() {
  describe('SearchJsunit', function () {
    beforeEach(async function (done) {
      console.info("SearchJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/SearchPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get SearchJsunit state pages: " + JSON.stringify(pages));
        if (!("SearchPage" == pages.name)) {
          console.info("get SearchJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push SearchJsunit success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push SearchJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('SearchJsunit_0100', 0, async function (done) {
      // Get the information of the Search component
      console.info('[SearchJsunit_0100] START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('search');
      let obj = JSON.parse(strJson);
      console.info("[SearchJsunit_0100] component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.icon).assertEqual('resource:///ohos_search.svg');
      expect(obj.$attrs.searchButton).assertEqual('SEARCH');
      expect(obj.$attrs.placeholderColor).assertEqual('#FF808080');
      await CommonFunc.sleep(1000);
      let driver = await UiDriver.create()
      let textComponent1 = await driver.findComponent(BY.key('submit'));
      let text1 = await textComponent1.getText();
      expect(text1).assertEqual('onSubmit:');

      let textComponent2 = await driver.findComponent(BY.key('change'));
      let text2 = await textComponent2.getText();
      expect(text2).assertEqual('onChange:');

      let textComponent3 = await driver.findComponent(BY.key('copy'));
      let text3 = await textComponent3.getText();
      expect(text3).assertEqual('onCopy:');

      let textComponent4 = await driver.findComponent(BY.key('cut'));
      let text4 = await textComponent4.getText();
      expect(text4).assertEqual('onCut:');

      let textComponent5 = await driver.findComponent(BY.key('paste'));
      let text5 = await textComponent5.getText();
      expect(text5).assertEqual('onPaste:');

      let textComponent6 = await driver.findComponent(BY.key('button'));
      let text6 = await textComponent6.getText();
      expect(text6).assertEqual('Set caretPosition 1');
      console.info('[SearchJsunit_0100] END');
      done();
    });

    it('SearchJsunit_0200', 0, async function (done) {
      // Modify the properties of component Search
      console.info('[SearchJsunit_0200] START');
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'icon',value:'./resources/base/media/star_3.png'})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'positionValue',value:2})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'searchButton',value:'CLICK_SEARCH'})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'placeholderColor',value:'Color.Green'})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'submitValue',value:'submit'})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'copyValue',value:'copy'})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'cutValue',value:'cut'})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'pasteValue',value:'paste'})
      await CommonFunc.sleep(2000);

      // Get the properties of the Search component
      let strJson = getInspectorByKey('search');
      let obj = JSON.parse(strJson);
      console.info("[SearchJsunit_0200] component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.icon).assertEqual('./resources/base/media/star_3.png');
      expect(obj.$attrs.searchButton).assertEqual('CLICK_SEARCH');
      expect(obj.$attrs.placeholderColor).assertEqual('#FF808080');
      let driver = await UiDriver.create()
      let textComponent = await driver.findComponent(BY.key('search'));
      await textComponent.inputText("hello")
      await CommonFunc.sleep(2000);
      let textComponent1 = await driver.findComponent(BY.key('submit'));
      let text1 = await textComponent1.getText();
      expect(text1).assertEqual('onSubmit:submit');

      let textComponent2 = await driver.findComponent(BY.key('change'));
      let text2 = await textComponent2.getText();
      expect(text2).assertEqual('onChange:hello');

      let textComponent3 = await driver.findComponent(BY.key('copy'));
      let text3 = await textComponent3.getText();
      expect(text3).assertEqual('onCopy:copy');

      let textComponent4 = await driver.findComponent(BY.key('cut'));
      let text4 = await textComponent4.getText();
      expect(text4).assertEqual('onCut:cut');

      let textComponent5 = await driver.findComponent(BY.key('paste'));
      let text5 = await textComponent5.getText();
      expect(text5).assertEqual('onPaste:paste');

      let textComponent6 = await driver.findComponent(BY.key('button'));
      let text6 = await textComponent6.getText();
      expect(text6).assertEqual('Set caretPosition 2');
      console.info('[SearchJsunit_0200] END');
      done();
    });

    it('SearchJsunit_0300', 0, async function (done) {
      // Verify the functions of the Search component
      console.info('[SearchJsunit_0300] START');
      await CommonFunc.sleep(1000);
      // Verify the onChange function of the Search component
      let driver = await UiDriver.create()
      let textComponent1 = await driver.findComponent(BY.key('search'));
      await textComponent1.inputText(" world")
      await CommonFunc.sleep(1000);
      let change = await driver.findComponent(BY.key('change'));
      let text1 = await change.getText();
      expect(text1).assertEqual('onChange:hello');
      await CommonFunc.sleep(1000);

      // Verify the onSubmit function of the Search component
      let textComponent2 = await driver.findComponent(BY.text('CLICK_SEARCH'));
      await textComponent2.click()
      await CommonFunc.sleep(1000);
      let submit = await driver.findComponent(BY.key('submit'));
      let text2 = await submit.getText();
      expect(text2).assertEqual('onSubmit:hello');

      // Verify the onCopy function of the Search component
      await textComponent2.longClick()
      await CommonFunc.sleep(1000);
      let textComponent3 = await driver.findComponent(BY.text('全选'));
      //await textComponent3.click()
      let textComponent4 = await driver.findComponent(BY.text('复制'));
      //await textComponent4.click()
      let copy = await driver.findComponent(BY.key('copy'));
      let text3 = await copy.getText();
      expect(text3).assertEqual('onCopy:copy');

      // Verify the onCut function of the Search component
      await textComponent2.longClick()
      await CommonFunc.sleep(1000);
      let textComponent5 = await driver.findComponent(BY.text('剪切'));
      //await textComponent5.click()
      let cut = await driver.findComponent(BY.key('cut'));
      let text4 = await cut.getText();
      expect(text4).assertEqual('onCut:cut');

      // Verify the onPaste function of the Search component
      await textComponent2.longClick()
      await CommonFunc.sleep(1000);
      let textComponent6 = await driver.findComponent(BY.text('粘贴'));
      //await textComponent6.click()
      let paste = await driver.findComponent(BY.key('paste'));
      let text5 = await paste.getText();
      expect(text5).assertEqual('onPaste:paste');

      // Verify the caretPosition function of the Search component
      let textComponent7 = await driver.findComponent(BY.key('button'));
      await textComponent7.click();
      await CommonFunc.sleep(1000);
      let text6 = await textComponent7.getText();
      expect(text6).assertEqual('Set caretPosition 2');
      console.info('[SearchJsunit_0300] END');
      done();
    });

    it('SearchJsunit_0400', 0, async function (done) {
      // Illegal modification of properties of component Search
      console.info('[SearchJsunit_0400] START');
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'icon',value:10})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'searchButton',value:10})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'placeholderColor',value:10})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'submitValue',value:10})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'copyValue',value:10})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'cutValue',value:10})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'pasteValue',value:10})
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({name:'positionValue',value:'abc'})
      await CommonFunc.sleep(2000);

      // Get the properties of the Search component
      let strJson = getInspectorByKey('search');
      let obj = JSON.parse(strJson);
      console.info("[SearchJsunit_0400] component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.icon).assertEqual('resource:///ohos_search.svg');
      expect(obj.$attrs.searchButton).assertEqual('10');
      expect(obj.$attrs.placeholderColor).assertEqual('#FF00000A');
      await CommonFunc.sleep(1000);
      let driver = await UiDriver.create()
      let textComponent1 = await driver.findComponent(BY.key('submit'));
      let text1 = await textComponent1.getText();
      expect(text1).assertEqual('onSubmit:10');

      let textComponent2 = await driver.findComponent(BY.key('change'));
      let text2 = await textComponent2.getText();
      expect(text2).assertEqual('onChange:hello');

      let textComponent3 = await driver.findComponent(BY.key('copy'));
      let text3 = await textComponent3.getText();
      expect(text3).assertEqual('onCopy:10');

      let textComponent4 = await driver.findComponent(BY.key('cut'));
      let text4 = await textComponent4.getText();
      expect(text4).assertEqual('onCut:10');

      let textComponent5 = await driver.findComponent(BY.key('paste'));
      let text5 = await textComponent5.getText();
      expect(text5).assertEqual('onPaste:10');

      let textComponent6 = await driver.findComponent(BY.key('button'));
      let text6 = await textComponent6.getText();
      expect(text6).assertEqual('Set caretPosition abc');
      console.info('[SearchJsunit_0400] END');
      done();
    });
  })
}
