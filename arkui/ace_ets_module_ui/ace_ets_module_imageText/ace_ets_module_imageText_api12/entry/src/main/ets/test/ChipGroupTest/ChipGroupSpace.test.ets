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
import Utils from '../../MainAbility/common/Utils'
import { Component, Driver, UiWindow, ON, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';


export default function ChipGroupSpace() {
  async function routerPush(target) {
    let options:router.RouterOptions = {
      url: `MainAbility/pages/ChipGroup/${target}`,
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
  describe('ChipGroupSpace', () => {
    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("ChipGroupItemStyle after each called");
    });
    beforeAll(async () => {
      await Utils.sleep(1000);
      console.info("ChipGroupItemStyle before all called");
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1270
     * @tc.name    ChipGroup127
     * @tc.desc    set the itemSpace of ChipGroup to -5, 0, 10
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1270', 0, async (done:Function) => {
      await routerPush('ChipGroupItemSpaceSize');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1270 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('-5'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.stringify(getInspectorTree())
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.space).assertEqual('8.00vp');
      let button2: Component = await driver.findComponent(ON.id('0'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.stringify(getInspectorTree())
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.space).assertEqual('0.00vp');
      let button3: Component = await driver.findComponent(ON.id('10'));
      await button3.click();
      await Utils.sleep(2000);
      strJson = JSON.stringify(getInspectorTree())
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.space).assertEqual('10.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1290
     * @tc.name    ChipGroup129
     * @tc.desc    set the itemSpace of ChipGroup to Outliers, null, empty, undefined
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1280', 0, async (done:Function) => {
      await routerPush('ChipGroupItemSpaceSize');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1280 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('Outliers'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.stringify(getInspectorTree())
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.space).assertEqual('8.00vp');
      let button2: Component = await driver.findComponent(ON.id('empty'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.stringify(getInspectorTree())
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.space).assertEqual('8.00vp');
      let button3: Component = await driver.findComponent(ON.id('undefined'));
      await button3.click();
      await Utils.sleep(2000);
      strJson = JSON.stringify(getInspectorTree())
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.space).assertEqual('8.00vp');
      let button4: Component = await driver.findComponent(ON.id('null'));
      await button4.click();
      await Utils.sleep(2000);
      strJson = JSON.stringify(getInspectorTree())
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.space).assertEqual('8.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1300
     * @tc.name    ChipGroup130
     * @tc.desc    set the startSpace of ChipGroup to -5, 0, 10
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1300', 0, async (done:Function) => {
      await routerPush('ChipGroupStartSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1300 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('-5'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('16.00vp');
      let button2: Component = await driver.findComponent(ON.id('0'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('0.00vp');
      let button3: Component = await driver.findComponent(ON.id('10'));
      await button3.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('10.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1320
     * @tc.name    ChipGroup132
     * @tc.desc    set the startSpace of ChipGroup to Outliers, null, empty, undefined
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1320', 0, async (done:Function) => {
      await routerPush('ChipGroupStartSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1320 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('Outliers'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('16.00vp');
      let button2: Component = await driver.findComponent(ON.id('empty'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('16.00vp');
      let button3: Component = await driver.findComponent(ON.id('undefined'));
      await button3.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('16.00vp');
      let button4: Component = await driver.findComponent(ON.id('null'));
      await button4.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('16.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1330
     * @tc.name    ChipGroup133
     * @tc.desc    set the startSpace of ChipGroup to system resource
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1330', 0, async (done:Function) => {
      await routerPush('ChipGroupStartSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1330 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('sys_legit'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('8.00vp');
      let button2: Component = await driver.findComponent(ON.id('sys_illegal'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('16.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1340
     * @tc.name    ChipGroup134
     * @tc.desc    set the startSpace of ChipGroup to app resource
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1340', 0, async (done:Function) => {
      await routerPush('ChipGroupStartSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1340 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('app_legit'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('20.00vp');
      let button2: Component = await driver.findComponent(ON.id('app_illegal'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).left).assertEqual('16.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1370
     * @tc.name    ChipGroup137
     * @tc.desc    set the endSpace of ChipGroup to -5, 0, 10
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1370', 0, async (done:Function) => {
      await routerPush('ChipGroupEndSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1370 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('-5'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('16.00vp');
      let button2: Component = await driver.findComponent(ON.id('0'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('0.00vp');
      let button3: Component = await driver.findComponent(ON.id('10'));
      await button3.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('10.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1390
     * @tc.name    ChipGroup139
     * @tc.desc    set the endSpace of ChipGroup to Outliers, null, empty, undefined
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1390', 0, async (done:Function) => {
      await routerPush('ChipGroupEndSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1390 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('Outliers'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('16.00vp');
      let button2: Component = await driver.findComponent(ON.id('empty'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('16.00vp');
      let button3: Component = await driver.findComponent(ON.id('undefined'));
      await button3.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('16.00vp');
      let button4: Component = await driver.findComponent(ON.id('null'));
      await button4.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('16.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1400
     * @tc.name    ChipGroup140
     * @tc.desc    set the endSpace of ChipGroup to system resource
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1400', 0, async (done:Function) => {
      await routerPush('ChipGroupEndSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1400 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('sys_legit'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('8.00vp');
      let button2: Component = await driver.findComponent(ON.id('sys_illegal'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('16.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1410
     * @tc.name    ChipGroup141
     * @tc.desc    set the endSpace of ChipGroup to app resource
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1410', 0, async (done:Function) => {
      await routerPush('ChipGroupEndSpace');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1410 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button1: Component = await driver.findComponent(ON.id('app_legit'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('20.00vp');
      let button2: Component = await driver.findComponent(ON.id('app_illegal'));
      await button2.click();
      await Utils.sleep(2000);
      strJson = JSON.parse(JSON.stringify(getInspectorTree())).$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.padding
      expect(JSON.parse(strJson).right).assertEqual('16.00vp');
      done();
    });
  })
}