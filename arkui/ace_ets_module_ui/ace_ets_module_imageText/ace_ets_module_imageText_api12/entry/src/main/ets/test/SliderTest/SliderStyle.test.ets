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
import RectValue from '../../MainAbility/common/Rect';


export default function SliderStyle() {
  async function routerPush(target) {
    let options:router.RouterOptions = {
      url: `MainAbility/pages/Slider/${target}`,
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
  describe('SliderStyle', () => {

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("ButtonLabel after each called");
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0010
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0010
     * @tc.desc    set the style of slider to undefined
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0010', 0, async (done:Function) => {
      await routerPush('SliderStyle');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0010 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('undefined'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left ;
      let StartY = rect.top
      let endX = rect.left +(rect.right-rect.left)*2/5+7;
      let endY = rect.top
      // slider
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('undefinedText'));
      let value = await text.getText();
      expect(value).assertEqual('40');
      // click
      await driver.click(rect.left+(rect.right-rect.left)*3/5-7,rect.top+(rect.bottom-rect.top)/2);
      value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0020
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0020
     * @tc.desc    set the style of slider to null
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0020', 0, async (done:Function) => {
      await routerPush('SliderStyle');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0020 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('null'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left ;
      let StartY = rect.top
      let endX = rect.left + (rect.right-rect.left)*2/5+7;
      let endY = rect.top
      // slider
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('nullText'));
      let value = await text.getText();
      expect(value).assertEqual('40');
      //click
      await driver.click(rect.left+(rect.right-rect.left)*3/5-7,rect.top+(rect.bottom-rect.top)/2);
      value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0030
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0030
     * @tc.desc    don't set the style of Slider
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0030', 0, async (done:Function) => {
      await routerPush('SliderStyle');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0030 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('empty'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left ;
      let StartY = rect.top
      let endX = rect.left + (rect.right-rect.left)*2/5+7;
      let endY = rect.top
      // slider
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('emptyText'));
      let value = await text.getText();
      expect(value).assertEqual('40');
      //click
      await driver.click(rect.left+(rect.right-rect.left)*3/5-7,rect.top+(rect.bottom-rect.top)/2);
      value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0040
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0040
     * @tc.desc    Dynamic switch the style of Slider
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0040', 0, async (done:Function) => {
      await routerPush('SliderStyle');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0040 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('dynamic'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left ;
      let StartY = rect.top
      let endX = rect.left + (rect.right-rect.left)*2/5+7;
      let endY = rect.top
      // slider
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('dynamicText'));
      let value = await text.getText();
      expect(value).assertEqual('40');
      let button: Component = await driver.findComponent(ON.id('changeStyle'));
      await button.click();
      //click
      await driver.click(rect.left+(rect.right-rect.left)*3/5-7,rect.top+(rect.bottom-rect.top)/2);
      value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });
  })
}