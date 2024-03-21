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


export default function NavigationJsunit() {
  describe('NavigationJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("NavigationJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/NavigationPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get NavigationJsunit state pages: " + JSON.stringify(pages));
        if (!("NavigationPage" == pages.name)) {
          console.info("get NavigationJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push NavigationJsunit success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push NavigationJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('NavigationJsunit_0100', 0, async (done: Function) => {
      // Get the information of the Navigation component
      console.info('[NavigationJsunit_0100] START');
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('navigation');

      console.info("[NavigationJsunit_0100] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[NavigationJsunit_0100] titleMode: " + JSON.parse(strJson).$attrs.titleMode);
      console.info("[NavigationJsunit_0100] toolBar: " + JSON.parse(strJson).$attrs.toolBar);
      console.info("[NavigationJsunit_0100] hideToolBar: " + JSON.parse(strJson).$attrs.hideToolBar);
      console.info("[NavigationJsunit_0100] hideTitleBar: " + JSON.parse(strJson).$attrs.hideTitleBar);
      console.info("[NavigationJsunit_0100] hideBackButton: " + JSON.parse(strJson).$attrs.hideBackButton);
      console.info("[NavigationJsunit_0100] navBarWidth: " + JSON.parse(strJson).$attrs.navBarWidth);
      console.info("[NavigationJsunit_0100] navBarPosition: " + JSON.parse(strJson).$attrs.navBarPosition);
      console.info("[NavigationJsunit_0100] mode: " + JSON.parse(strJson).$attrs.mode);
      console.info("[NavigationJsunit_0100] backButtonIcon: " + JSON.parse(strJson).$attrs.backButtonIcon);
      console.info("[NavigationJsunit_0100] hideNavBar: " + JSON.parse(strJson).$attrs.hideNavBar);
      expect(JSON.parse(strJson).$attrs.titleMode).assertEqual('NavigationTitleMode.Free');
      expect(JSON.parse(strJson).$attrs.toolBar).assertEqual('{"items":[]}');
      expect(JSON.parse(strJson).$attrs.hideToolBar).assertEqual(false);
      expect(JSON.parse(strJson).$attrs.hideTitleBar).assertEqual(false);
      expect(JSON.parse(strJson).$attrs.hideBackButton).assertEqual(false);
      expect(JSON.parse(strJson).$attrs.navBarWidth).assertEqual('700.00vp');
      expect(JSON.parse(strJson).$attrs.navBarPosition).assertEqual('NavBarPosition.Start');
      expect(JSON.parse(strJson).$attrs.mode).assertEqual('NavigationMode.SPLIT');
      expect(JSON.parse(strJson).$attrs.backButtonIcon).assertEqual('resources/base/media/icon.png');
      expect(JSON.parse(strJson).$attrs.hideNavBar).assertEqual(false);
      console.info('[NavigationJsunit_0100] END');
      done();
    });

    it('NavigationJsunit_0300', 0, async (done: Function) => {
      // Verify onTitleModeChange event of Navigation component
      console.info('[NavigationJsunit_0300] START');
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('titleModeChange');

      console.info("[NavigationJsunit_0300] content is: " + JSON.parse(strJson).$attrs.content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('TitleModeChange:');
      console.info('[NavigationJsunit_0300] END');
      done();
    });

    it('NavigationJsunit_0400', 0, async (done: Function) => {
      // Verify onNavBarStateChange event of Navigation component
      console.info('[NavigationJsunit_0400] START');
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideNavBar', value: 'true'
      })
      await CommonFunc.sleep(3000);
      let strJson: string = getInspectorByKey('navBarStateChange');

      console.info("[NavigationJsunit_0400] content is: " + JSON.parse(strJson).$attrs.content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('NavBarStateChange:succ');
      console.info('[NavigationJsunit_0400] END');
      done();
    });

    it('NavigationJsunit_0600', 0, async (done: Function) => {
      // Modify atrributes of Navigation component 
      console.info('[NavigationJsunit_0600] START');
      globalThis.value.message.notify({
        name: 'hideToolBar', value: true
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideTitleBar', value: true
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideBackButton', value: true
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'navBarPosition', value: NavBarPosition.End
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'navBarWidth', value: 710
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'backButtonIcon', value: 'resources/base/media/image.png'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideNavBar', value: true
      })
      await CommonFunc.sleep(2000);

      // Get the propoties value of the Navigation component
      let strJson: string = getInspectorByKey('navigation');

      console.info("[NavigationJsunit_0600] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[NavigationJsunit_0600] hideToolBar: " + JSON.parse(strJson).$attrs.hideToolBar);
      console.info("[NavigationJsunit_0600] hideTitleBar: " + JSON.parse(strJson).$attrs.hideTitleBar);
      console.info("[NavigationJsunit_0600] hideBackButton: " + JSON.parse(strJson).$attrs.hideBackButton);
      console.info("[NavigationJsunit_0600] navBarWidth: " + JSON.parse(strJson).$attrs.navBarWidth);
      console.info("[NavigationJsunit_0600] navBarPosition: " + JSON.parse(strJson).$attrs.navBarPosition);
      console.info("[NavigationJsunit_0600] backButtonIcon: " + JSON.parse(strJson).$attrs.backButtonIcon);
      console.info("[NavigationJsunit_0600] hideNavBar: " + JSON.parse(strJson).$attrs.hideNavBar);
      expect(JSON.parse(strJson).$attrs.hideToolBar).assertEqual(true);
      expect(JSON.parse(strJson).$attrs.hideTitleBar).assertEqual(true);
      expect(JSON.parse(strJson).$attrs.hideBackButton).assertEqual(true);
      expect(JSON.parse(strJson).$attrs.navBarWidth).assertEqual('710.00vp');
      expect(JSON.parse(strJson).$attrs.navBarPosition).assertEqual('NavBarPosition.End');
      expect(JSON.parse(strJson).$attrs.backButtonIcon).assertEqual('resources/base/media/image.png');
      expect(JSON.parse(strJson).$attrs.hideNavBar).assertEqual(true);
      console.info('[NavigationJsunit_0600] END');
      done();
    });

    it('NavigationJsunit_0700', 0, async (done: Function) => {
      // Modify the titleMode of Navigation component 
      console.info('[NavigationJsunit_0700] START');
      globalThis.value.message.notify({
        name: 'titleMode', value: NavigationTitleMode.Mini
      })
      await CommonFunc.sleep(2000);
      let strJson: string = getInspectorByKey('navigation');

      console.info("[NavigationJsunit_0700] titleMode is: " + JSON.parse(strJson).$attrs.titleMode);
      expect(JSON.parse(strJson).$attrs.titleMode).assertEqual('NavigationTitleMode.Mini');

      globalThis.value.message.notify({
        name: 'titleMode', value: NavigationTitleMode.Full
      })
      await CommonFunc.sleep(2000);
      let strJson1 = getInspectorByKey('navigation');

      console.info("[NavigationJsunit_0700] titleMode1 is: " + JSON.parse(strJson1).$attrs.titleMode);
      expect(JSON.parse(strJson1).$attrs.titleMode).assertEqual('NavigationTitleMode.Full');
      console.info('[NavigationJsunit_0700] END');
      done();
    });

    it('NavigationJsunit_0800', 0, async (done: Function) => {
      // Modify the mode of Navigation component 
      console.info('[NavigationJsunit_0800] START');
      globalThis.value.message.notify({
        name: 'mode', value: NavigationMode.Auto
      })
      await CommonFunc.sleep(2000);
      let strJson: string = getInspectorByKey('navigation');

      console.info("[NavigationJsunit_0800] mode is: " + JSON.parse(strJson).$attrs.mode);
      //expect(JSON.parse(strJson).$attrs.mode).assertEqual('NavigationMode.Auto');

      globalThis.value.message.notify({
        name: 'mode', value: NavigationMode.Stack
      })
      await CommonFunc.sleep(2000);
      let strJson1 = getInspectorByKey('navigation');

      console.info("[NavigationJsunit_0800] mode1 is: " + JSON.parse(strJson1).$attrs.mode);
      expect(JSON.parse(strJson1).$attrs.mode).assertEqual('NavigationMode.STACK');
      console.info('[NavigationJsunit_0800] END');
      done();
    });

    it('NavigationJsunit_0900', 0, async (done: Function) => {
      // Illegal modification of properties of Navigation component
      console.info('[NavigationJsunit_0900] START');
      globalThis.value.message.notify({
        name: 'titleMode', value: 123
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideToolBar', value: -5
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideTitleBar', value: '#abc'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideBackButton', value: '123'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'navBarWidth', value: '200'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'navBarPosition', value: 123
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'mode', value: 'abc'
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'backButtonIcon', value: 123
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'hideNavBar', value: 0
      })
      await CommonFunc.sleep(2000);

      // Get the propoties value of the Navigation component
      let strJson: string = getInspectorByKey('navigation');

      console.info("[NavigationJsunit_0900] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[NavigationJsunit_0900] titleMode: " + JSON.parse(strJson).$attrs.titleMode);
      console.info("[NavigationJsunit_0900] hideToolBar: " + JSON.parse(strJson).$attrs.hideToolBar);
      console.info("[NavigationJsunit_0900] hideTitleBar: " + JSON.parse(strJson).$attrs.hideTitleBar);
      console.info("[NavigationJsunit_0900] hideBackButton: " + JSON.parse(strJson).$attrs.hideBackButton);
      console.info("[NavigationJsunit_0900] navBarWidth: " + JSON.parse(strJson).$attrs.navBarWidth);
      console.info("[NavigationJsunit_0900] navBarPosition: " + JSON.parse(strJson).$attrs.navBarPosition);
      console.info("[NavigationJsunit_0900] mode: " + JSON.parse(strJson).$attrs.mode);
      console.info("[NavigationJsunit_0900] backButtonIcon: " + JSON.parse(strJson).$attrs.backButtonIcon);
      console.info("[NavigationJsunit_0900] hideNavBar: " + JSON.parse(strJson).$attrs.hideNavBar);
      expect(JSON.parse(strJson).$attrs.titleMode).assertEqual('NavigationTitleMode.Full');
      expect(JSON.parse(strJson).$attrs.hideToolBar).assertEqual(true);
      expect(JSON.parse(strJson).$attrs.hideTitleBar).assertEqual(false);
      expect(JSON.parse(strJson).$attrs.hideBackButton).assertEqual(true);
      expect(JSON.parse(strJson).$attrs.navBarWidth).assertEqual('200.00vp');
      expect(JSON.parse(strJson).$attrs.navBarPosition).assertEqual('NavBarPosition.End');
      expect(JSON.parse(strJson).$attrs.mode).assertEqual('NavigationMode.AUTO');
      expect(JSON.parse(strJson).$attrs.backButtonIcon).assertEqual('');
      expect(JSON.parse(strJson).$attrs.hideNavBar).assertEqual(false);
      console.info('[NavigationJsunit_0900] END');
      done();
    });
  })
}
