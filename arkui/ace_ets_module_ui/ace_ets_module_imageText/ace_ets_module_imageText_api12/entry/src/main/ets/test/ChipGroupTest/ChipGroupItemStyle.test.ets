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


export default function ChipGroupItemStyle() {
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
  describe('ChipGroupItemStyle', () => {
    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("ChipGroupItemStyle after each called");
    });
    beforeAll(async () => {
      await Utils.sleep(1000);
      console.info("ChipGroupItemStyle before all called");
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0900
     * @tc.name    ChipGroup090
     * @tc.desc    set the size of ChipGroup itemStyle to {width:100,height:100}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0900', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0900 START');
      await Utils.sleep(2000);
      let driver = Driver.create();
      await Utils.sleep(2000);
      let button: Component = await driver.findComponent(ON.id('w100_h100'));
      await button.click();
      await Utils.sleep(2000);
      let strJson = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width).assertEqual('100.00vp');
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height).assertEqual('100.00vp');
      // Chip2
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width).assertEqual('100.00vp');
      expect(JSON.parse(strJson).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height).assertEqual('100.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0920
     * @tc.name    ChipGroup092
     * @tc.desc    set the size of ChipGroup itemStyle to {width:'100px',height:100}, {width:100,height:'100px'}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0920', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0920 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button1: Component = await driver.findComponent(ON.id('w100_h100px'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson1 = JSON.stringify(getInspectorTree())
      // Chip1
      let height1 = parseFloat((parseFloat(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height)*1.5).toFixed(1));
      expect(height1).assertEqual(100);
      // Chip2
      let height2 = parseFloat((parseFloat(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height)*1.5).toFixed(1));
      expect(height2).assertEqual(100);
      let button2: Component = await driver.findComponent(ON.id('w100px_h100'));
      await button2.click();
      await Utils.sleep(2000);
      let strJson2 = JSON.stringify(getInspectorTree())
      // Chip1
      let width1 = parseFloat((parseFloat(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width)*1.5).toFixed(1));
      expect(width1).assertEqual(100);
      // Chip2
      let width2 = parseFloat((parseFloat(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width)*1.5).toFixed(1));
      expect(width2).assertEqual(100);
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0930
     * @tc.name    ChipGroup093
     * @tc.desc    set the size of ChipGroup itemStyle to {width:'100vp',height:100}, {width:100,height:'100vp'}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0930', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0930 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button1: Component = await driver.findComponent(ON.id('w100_h100vp'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson1 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height).assertEqual('100.00vp');
      // Chip2
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height).assertEqual('100.00vp');
      let button2: Component = await driver.findComponent(ON.id('w100vp_h100'));
      await button2.click();
      await Utils.sleep(2000);
      let strJson2 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width).assertEqual('100.00vp');
      // Chip2
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width).assertEqual('100.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0940
     * @tc.name    ChipGroup094
     * @tc.desc    set the size of ChipGroup itemStyle to {width:'100fp',height:100}, {width:100,height:'100fp'}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0940', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0940 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button1: Component = await driver.findComponent(ON.id('w100_h100fp'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson1 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height).assertEqual('100.00vp');
      // Chip2
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height).assertEqual('100.00vp');
      let button2: Component = await driver.findComponent(ON.id('w100fp_h100'));
      await button2.click();
      await Utils.sleep(2000);
      let strJson2 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width).assertEqual('100.00vp');
      // Chip2
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width).assertEqual('100.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0950
     * @tc.name    ChipGroup095
     * @tc.desc    set the size of ChipGroup itemStyle to {width:'100lpx',height:100}, {width:100,height:'100lpx'}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0950', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0950 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button1: Component = await driver.findComponent(ON.id('w100_h100lpx'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson1 = JSON.stringify(getInspectorTree())
      // Chip1
      let height1 = parseFloat((parseFloat(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height)*1.5).toFixed(1));
      expect(height1).assertEqual(100);
      // Chip2
      let height2 = parseFloat((parseFloat(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height)*1.5).toFixed(1));
      expect(height2).assertEqual(100);
      let button2: Component = await driver.findComponent(ON.id('w100lpx_h100'));
      await button2.click();
      await Utils.sleep(2000);
      let strJson2 = JSON.stringify(getInspectorTree())
      // Chip1
      let width1 = parseFloat((parseFloat(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width)*1.5).toFixed(1));
      expect(width1).assertEqual(100);
      // Chip2
      let width2 = parseFloat((parseFloat(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width)*1.5).toFixed(1));
      expect(width2).assertEqual(100);
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0980
     * @tc.name    ChipGroup098
     * @tc.desc    set the size of ChipGroup itemStyle to {width:illegal,height:100}, {width:100,height:illegal}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0980', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_0980 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button1: Component = await driver.findComponent(ON.id('h_illegal'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson1 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height).assertEqual('36.00vp');
      // Chip2
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height).assertEqual('36.00vp');
      let button2: Component = await driver.findComponent(ON.id('w_illegal'));
      await button2.click();
      await Utils.sleep(2000);
      let strJson2 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width).assertEqual('82.00vp');
      // Chip2
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width).assertEqual('82.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1030
     * @tc.name    ChipGroup103
     * @tc.desc    set the size of ChipGroup itemStyle to {width:undefined,height:100}, {width:100,height:undefined}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1030', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1030 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button1: Component = await driver.findComponent(ON.id('h_undefined'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson1 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height).assertEqual('36.00vp');
      // Chip2
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height).assertEqual('36.00vp');
      let button2: Component = await driver.findComponent(ON.id('w_undefined'));
      await button2.click();
      await Utils.sleep(2000);
      let strJson2 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width).assertEqual('82.00vp');
      // Chip2
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width).assertEqual('82.00vp');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1040
     * @tc.name    ChipGroup104
     * @tc.desc    set the size of ChipGroup itemStyle to {width:null,height:100}, {width:100,height:null}
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1040', 0, async (done:Function) => {
      await routerPush('ChipGroupItemStyle');
      console.info('SUB_ACE_UI_COMPONENT_TEXT_CHIPGROUP_INTERFACE_1040 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button1: Component = await driver.findComponent(ON.id('h_null'));
      await button1.click();
      await Utils.sleep(2000);
      let strJson1 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.height).assertEqual('36.00vp');
      // Chip2
      expect(JSON.parse(strJson1).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.height).assertEqual('36.00vp');
      let button2: Component = await driver.findComponent(ON.id('w_null'));
      await button2.click();
      await Utils.sleep(2000);
      let strJson2 = JSON.stringify(getInspectorTree())
      // Chip1
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$attrs.size.width).assertEqual('82.00vp');
      // Chip2
      expect(JSON.parse(strJson2).$children[0].$children[0].$children[0].$children[0].$children[0].$children[0].$children[1].$attrs.size.width).assertEqual('82.00vp');
      done();
    });
  })
}