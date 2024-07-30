/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import router from '@ohos.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import CommonFunc from '../../MainAbility/utils/Common';
import Utils from '../../MainAbility/common/Utils';
import { Component, Driver, ON } from '@ohos.UiTest';


export default function ToggleAttrs() {
  async function routerPush(target) {
    let options:router.RouterOptions = {
      url: `MainAbility/pages/Toggle/${target}`,
    }
    try {
      router.clear();
      let pages = router.getState();
      console.info(`get ${target} state pages:` + JSON.stringify(pages));
      console.info(`get ${target} pages.name:` + JSON.stringify(pages.name));
      if (!(target == pages.name)) {
        let result = router.pushUrl(options);
        console.info(`router options url is ${options.url}`);
        await CommonFunc.sleep(1000);
        console.info(`push ${target} page result:` + JSON.stringify(result));
        let pages = router.getState();
        console.info(`push page name is ${pages.name}`);
        expect(pages.name).assertEqual(target)
      }
    } catch (err) {
      console.error(`push ${target} page error:` + err);
    }
  }
  describe('ToggleAttrs', () => {

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info('ButtonLabel after each called');
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0010
     * @tc.name    ToggleC001
     * @tc.desc    set TOGGLE selectedColor to red
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0010', 0, async (done:Function) => {
      await routerPush('ToggleAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0010 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('redToggle');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FFFF0026');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0030
     * @tc.name    Toggle003
     * @tc.desc   When the state of toggle changed, print log
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0030', 0, async (done:Function) => {
      await routerPush('ToggleAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0030 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let toggle: Component = await driver.findComponent(ON.id('logToggle'));
      await toggle.click();
      let text: Component = await driver.findComponent(ON.id('message'));
      let message= await text.getText();
      expect(message).assertEqual('Toggle changed');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0110
     * @tc.name    Toggle011
     * @tc.desc    width 100vp, height 100vp
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0110', 0, async (done:Function) => {
      await routerPush('ToggleAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0110 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('sizeToggle');
      expect(JSON.parse(strJson).$attrs.size.width).assertEqual('100.00vp');
      expect(JSON.parse(strJson).$attrs.size.height).assertEqual('100.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0120
     * @tc.name    Toggle012
     * @tc.desc    set x of position to 100vp
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0120', 0, async (done:Function) => {
      await routerPush('ToggleAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0120 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('positionToggle');
      expect(JSON.parse(strJson).$attrs.position.x).assertEqual('100.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0130
     * @tc.name    Toggle013
     * @tc.desc    set toggle Focusable
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0130', 0, async (done:Function) => {
      await routerPush('ToggleAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0130 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      await driver.triggerKey(2049);
      let strJson = getInspectorByKey('focusableToggle');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FFFF0000');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0140
     * @tc.name    Toggle014
     * @tc.desc    set enable of toggle to 0
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0140', 0, async (done:Function) => {
      await routerPush('ToggleAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0130 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let toggle: Component = await driver.findComponent(ON.id('enableToggle'));
      await toggle.click();
      await Utils.sleep(4000);
      let strJson = getInspectorByKey('enableToggle');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FF688ADE');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0160
     * @tc.name    Toggle016
     * @tc.desc    set margin of toggle to 100
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0160', 0, async (done:Function) => {
      await routerPush('ToggleAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_TOGGLE_C_0160 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('marginToggle');
      expect(JSON.parse(strJson).$attrs.margin).assertEqual('100.00vp');
      done();
    });
  })
}