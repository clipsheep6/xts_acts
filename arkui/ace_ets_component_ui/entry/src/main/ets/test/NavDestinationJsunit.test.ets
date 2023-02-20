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


export default function NavDestinationJsunit() {
  describe('navDestinationJsunit', function () {
    beforeEach(async function (done) {
      console.info("NavDestination beforeEach start");
      let options = {
        uri: 'MainAbility/pages/NavDestinationPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get NavDestination state pages: " + JSON.stringify(pages));
        if (!("NavDestinationPage" == pages.name)) {
          console.info("get NavDestination state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          console.info("push NavDestination page result: " + JSON.stringify(result));
          await CommonFunc.sleep(2000);
        }
      } catch (err) {
        console.error("push NavDestination page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('NavDestination_0100', 0, async function (done) {
      // Modify the name of the main title
      console.info('[NavDestination_0100] START');
      globalThis.value.message.notify({name:'mainTitleName',value:'title1'})
      await CommonFunc.sleep(2000);
      // Get the name of the main title
      let driver = await UiDriver.create()
      let textComponent = await driver.findComponent(BY.key('title'));
      let text = await textComponent.getText();
      expect(text == 'title1').assertTrue();
      console.info('[NavDestination_0100] END');
      done();
    });

    it('NavDestination_0200', 0, async function (done) {
      // Modify the name of the sub title
      console.info('NavDestination_0200 START');
      globalThis.value.message.notify({name:'subTitleName',value:'title2'})
      await CommonFunc.sleep(2000);
      // Get the name of the sub title
      let driver = await UiDriver.create()
      let textComponent = await driver.findComponent(BY.key('subTitle'));
      let text = await textComponent.getText();
      expect(text == 'title2').assertTrue();
      console.info('NavDestination_0200 END');
      done();
    });

    it('NavDestination_0300', 0, async function (done) {
      // Modify the value of the hideTitleBar
      console.info('[NavDestination_0300] START');
      globalThis.value.message.notify({name:'hideTitleBar',value:true})
      await CommonFunc.sleep(1000);
      // Get the value of the hideTitleBar
      let strJson = getInspectorByKey('n1');
      let obj = JSON.parse(strJson);
      console.info("[NavDestination_0300] component obj is: " + JSON.stringify(obj));
      expect(obj.$attrs.hideTitleBar).assertTrue();
      console.info('[NavDestination_0300] END');
      done();
    });

  })
}
