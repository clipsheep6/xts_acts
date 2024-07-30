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
import { Component, Driver, ON } from '@ohos.UiTest';
import componentUtils from '@ohos.arkui.componentUtils'


export default function rectangleAdvance() {
  async function routerPush(target) {
    let options:router.RouterOptions = {
      url: `MainAbility/pages/RectAngleAdvance/${target}`,
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
  describe('rectangleAdvance', () => {

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("rectangleAdvance after each called");
    });
    beforeAll(async () => {
      await Utils.sleep(1000);
      console.info("rectangleAdvance before all called");
    });

    /**
     * @tc.number    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0010
     * @tc.name      testDRAWAREA001
     * @tc.desc      Verify the AlphabetIndexer component supports the function of getRectangleById
     * @tc.level     Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0010', 0, async (done:Function) => {
      await routerPush('AlphabetIndex10');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0010 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button'));
      console.info('[rect10] begin click');
      await button.click();
      console.info('[rect10] end click');
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":80,"height":80}');
      done();
    });

    /**
     * @tc.number    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0020
     * @tc.name      testDRAWAREA002
     * @tc.desc      Verify the Badge component supports the function of getRectangleById
     * @tc.level     Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0020', 0, async (done:Function) => {
      await routerPush('Badge20');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0020 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":170,"height":120}');
      done();
    });

    /**
     * @tc.number    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0030
     * @tc.name      testDRAWAREA003
     * @tc.desc      Verify the button component supports the function of getRectangleById
     * @tc.level     Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0030', 0, async (done:Function) => {
      await routerPush('Rect3_5');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0030 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button3'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":90,"height":90}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0040
     * @tc.name    testDRAWAREA004
     * @tc.desc    Verify the canvas component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0040', 0, async (done:Function) => {
      await routerPush('Rect3_5');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0040 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button4'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":211,"height":140}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0050
     * @tc.name    testDRAWAREA005
     * @tc.desc    Verify the checkboxGroup component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0050', 0, async (done:Function) => {
      await routerPush('Rect3_5');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0050 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button5'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":90,"height":60}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0060
     * @tc.name    testDRAWAREA006
     * @tc.desc    Verify the checkbox component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0050', 0, async (done:Function) => {
      await routerPush('Rect6_9');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0060 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button6'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":90,"height":60}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0070
     * @tc.name    testDRAWAREA007
     * @tc.desc    Verify the circle component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0070', 0, async (done:Function) => {
      await routerPush('Rect6_9');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0070 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button7'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":310,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0080
     * @tc.name    testDRAWAREA008
     * @tc.desc    Verify the column component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0080', 0, async (done:Function) => {
      await routerPush('Rect6_9');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0080 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button8'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":160,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0090
     * @tc.name    testDRAWAREA009
     * @tc.desc    Verify the counter component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0090', 0, async (done:Function) => {
      await routerPush('Rect6_9');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0090 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button9'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":150,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0110
     * @tc.name    testDRAWAREA011
     * @tc.desc    Verify the DatePicker component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0110', 0, async (done:Function) => {
      await routerPush('Rect11_15');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0110 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button11'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":120,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0120
     * @tc.name    testDRAWAREA012
     * @tc.desc    Verify the Divider component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0120', 0, async (done:Function) => {
      await routerPush('Rect11_15');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0120 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button12'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":130,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0130
     * @tc.name    testDRAWAREA013
     * @tc.desc    Verify the Ellipse component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0130', 0, async (done:Function) => {
      await routerPush('Rect11_15');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0130 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button13'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":230,"height":140}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0140
     * @tc.name    testDRAWAREA014
     * @tc.desc    Verify the FormComponent component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0140', 0, async (done:Function) => {
      await routerPush('Rect11_15');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0140 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button14'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":360,"height":360}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0150
     * @tc.name    testDRAWAREA015
     * @tc.desc    Verify the FormLink component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0150', 0, async (done:Function) => {
      await routerPush('Rect11_15');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0150 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button15'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":200,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0160
     * @tc.name    testDRAWAREA016
     * @tc.desc    Verify the Gauge component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0160', 0, async (done:Function) => {
      await routerPush('Rect16_20');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0160 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button16'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":140,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0170
     * @tc.name    testDRAWAREA017
     * @tc.desc    Verify the GridRow component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0170', 0, async (done:Function) => {
      await routerPush('Rect16_20');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0170 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button17'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":140,"height":140}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0180
     * @tc.name    testDRAWAREA018
     * @tc.desc    Verify the Grid component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0180', 0, async (done:Function) => {
      await routerPush('Rect16_20');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0180 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button18'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":360,"height":240}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0190
     * @tc.name    testDRAWAREA019
     * @tc.desc    Verify the ImageAnimator component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0190', 0, async (done:Function) => {
      await routerPush('Rect16_20');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0190 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button19'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('size:{"width":340,"height":240},localOffset:{"offsetY":100,"offsetX":0}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0200
     * @tc.name    testDRAWAREA020
     * @tc.desc    Verify the ImageSpan component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0200', 0, async (done:Function) => {
      await routerPush('Rect16_20');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0200 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button20'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":100,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0210
     * @tc.name    testDRAWAREA021
     * @tc.desc    Verify the Image component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0210', 0, async (done:Function) => {
      await routerPush('Rect21_24');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0210 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button21'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":90,"height":90}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0220
     * @tc.name    testDRAWAREA022
     * @tc.desc    Verify the Line component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0220', 0, async (done:Function) => {
      await routerPush('Rect21_24');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0220 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button22'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":220,"height":140}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0230
     * @tc.name    testDRAWAREA023
     * @tc.desc    Verify the ListItemGroup component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0230', 0, async (done:Function) => {
      await routerPush('Rect21_24');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0230 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button23'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":160,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0240
     * @tc.name    testDRAWAREA024
     * @tc.desc    Verify the ListItem component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0240', 0, async (done:Function) => {
      await routerPush('Rect21_24');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0240 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button24'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":200,"height":240}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0250
     * @tc.name    testDRAWAREA025
     * @tc.desc    Verify the List component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0250', 0, async (done:Function) => {
      await routerPush('Rect25_28');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0250 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button25'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":200,"height":200}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0260
     * @tc.name    testDRAWAREA026
     * @tc.desc    Verify the MenuItemGroup component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0260', 0, async (done:Function) => {
      await routerPush('Rect25_28');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0260 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button26'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('size:{"width":90,"height":90},localOffset:{"offsetY":94,"offsetX":4}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0270
     * @tc.name    testDRAWAREA027
     * @tc.desc    Verify the MenuItem component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0270', 0, async (done:Function) => {
      await routerPush('Rect25_28');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0270 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button27'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('size:{"width":90,"height":90},localOffset:{"offsetY":4,"offsetX":4}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0280
     * @tc.name    testDRAWAREA028
     * @tc.desc    Verify the Menu component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0280', 0, async (done:Function) => {
      await routerPush('Rect25_28');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0280 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('button28'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"width":100,"height":100}');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0290
     * @tc.name    testDRAWAREA029
     * @tc.desc    Verify the NavDestination component supports the function of getRectangleById
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0290', 0, async (done:Function) => {
      await routerPush('NavDestination290');
      console.info('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0290 start');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let router: Component = await driver.findComponent(ON.id('blueTooth'));
      await router.click();
      await Utils.sleep(3000);
      let button: Component = await driver.findComponent(ON.id('button29'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let size = await text.getText();
      expect(size).assertEqual('{"offsetY":0,"offsetX":0}');
      done();
    });
  })
}