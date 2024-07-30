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


export default function SliderMinDistance() {
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
  describe('SliderMinDistance', () => {

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info('ButtonLabel after each called');
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0050
     * @tc.name    SliderInteractionMode005
     * @tc.desc    don't set the minResponsiveDistance of slider
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0050', 0, async (done:Function) => {
      await routerPush('SliderMinDistance');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0050 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('Slider50'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left + (rect.right - rect.left)*2 / 5;
      let StartY = rect.top
      let endX = rect.left + (rect.right - rect.left)*3 / 5 ;
      let endY = rect.top
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('text5'));
      let value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0060
     * @tc.name    SliderInteractionMode006
     * @tc.desc    set the minResponsiveDistance of slider to -1
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0060', 0, async (done:Function) => {
      await routerPush('SliderMinDistance');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0060 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('Slider60'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left + (rect.right - rect.left)*2 / 5;
      let StartY = rect.top
      let endX = rect.left + (rect.right - rect.left)*3 / 5 ;
      let endY = rect.top
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('text6'));
      let value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0080
     * @tc.name    SliderInteractionMode008
     * @tc.desc    set the minResponsiveDistance of slider to undefined
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0080', 0, async (done:Function) => {
      await routerPush('SliderMinDistance');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0080 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('Slider80'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left + (rect.right - rect.left)*2 / 5;
      let StartY = rect.top
      let endX = rect.left + (rect.right - rect.left)*3 / 5 ;
      let endY = rect.top
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('text8'));
      let value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0090
     * @tc.name    SliderInteractionMode009
     * @tc.desc    set the minResponsiveDistance of slider to min-max
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0090', 0, async (done:Function) => {
      await routerPush('SliderMinDistance');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0090 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('Slider90'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left + (rect.right - rect.left)*2 / 5;
      let StartY = rect.top
      let endX = rect.left + (rect.right - rect.left)*3 / 5 ;
      let endY = rect.top
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('text9'));
      let value = await text.getText();
      expect(value).assertEqual('60');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0100
     * @tc.name    SliderInteractionMode010
     * @tc.desc    swipe the Slider 20 cm to the border
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0100', 0, async (done:Function) => {
      await routerPush('SliderMinDistance');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0100 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('Slider100'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left + (rect.right-rect.left)*0.9;
      let StartY = rect.top;
      let endX = rect.right+(rect.right-rect.left)*0.1;
      let endY = rect.top;
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('text10'));
      let value = await text.getText();
      expect(value).assertEqual('100');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0110
     * @tc.name    SliderInteractionMode011
     * @tc.desc    swipe the Slider 10 cm to the border
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0110', 0, async (done:Function) => {
      await routerPush('SliderMinDistance');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0110 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('Slider110'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left + (rect.right-rect.left)*0.9;
      let StartY = rect.top
      let endX = rect.right;
      let endY = rect.top
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('text11'));
      let value = await text.getText();
      expect(value).assertEqual('90');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0170
     * @tc.name    SliderInteractionMode017
     * @tc.desc    set the minResponsiveDistance of slider to 100
     * @tc.level   Level 3
     * @tc.type
     * @tc.size
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0170', 0, async (done:Function) => {
      await routerPush('SliderMinDistance');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_SLIDER_SLIDERINTERACTIONMODE_0170 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let slider: Component = await driver.findComponent(ON.id('Slider170'));
      let rect = await slider.getBounds();
      let StartX: number = rect.left ;
      let StartY = rect.top
      let endX = rect.left + (rect.right-rect.left)*0.9;
      let endY = rect.top
      await driver.swipe(StartX, StartY, endX, endY, 600)
      let text: Component = await driver.findComponent(ON.id('text17'));
      let value = await text.getText();
      if(value=='90'){
        await driver.setDisplayRotation(DisplayRotation.ROTATION_180);
      }
      expect(value).assertEqual('0');
      done();
    });

  })
}