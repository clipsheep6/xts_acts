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

const waitUiReadyMs = 1000;

export default function sliderJsunit() {
  describe('sliderJsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("sliderJsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/slider',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get sliderJsunit state pages:" + JSON.stringify(pages));
        if (!("slider" == pages.name)) {
          console.info("get sliderJsunit state pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          console.info("push sliderJsunit success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push sliderJsunit page error:" + err);
        expect().assertFail();
      }
      done();
    });

    it('sliderJsunit_0100', 0, async (done: Function) => {
      console.info('sliderJsunit_0100 START');
      await CommonFunc.sleep(1000);
      // get the slider component with no parameter and test attribute
      let strJson: string = getInspectorByKey('sliderConstructor2');

      console.info('sliderJsunit_0100 component JSON.parse(strJson) is: ' + JSON.parse(strJson).$attrs.style);
      expect(JSON.parse(strJson).$attrs.style).assertEqual('SliderStyle.OutSet');
      done();
    });

    it('sliderJsunit_0200', 0, async (done: Function) => {
      console.info('sliderJsunit_0200 START');
      // get the slider component with parameter and test attribute
      let strJson: string = getInspectorByKey('sliderConstructor');

      console.info('sliderJsunit_0200 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .style + "---" + JSON.parse(strJson).$attrs.constructor.direction + "--" + JSON.parse(strJson)
        .$attrs
        .constructor
        .value
        + "---" + JSON.parse(strJson).$attrs.constructor.reverse + "----" + JSON.parse(strJson)
        .$attrs
        .constructor
        .min + "----" + JSON.parse(strJson).$attrs.constructor.max + "---" + JSON.parse(strJson)
        .$attrs
        .constructor
        .step + "---" + JSON.stringify(JSON.parse(strJson).$attrs.constructor));
      expect(JSON.parse(strJson).$attrs.style).assertEqual('SliderStyle.InSet');
      expect(JSON.parse(strJson).$attrs.constructor.direction).assertEqual('Axis.Vertical');
      expect(JSON.parse(strJson).$attrs.constructor.value).assertEqual('40.000000');
      expect(JSON.parse(strJson).$attrs.constructor.reverse).assertEqual('true');
      expect(JSON.parse(strJson).$attrs.constructor.min).assertEqual('2.000000');
      expect(JSON.parse(strJson).$attrs.constructor.max).assertEqual('1000.000000');
      expect(JSON.parse(strJson).$attrs.constructor.step).assertEqual('0.700000');
      done();
    });

    it('sliderJsunit_0300', 0, async (done: Function) => {
      console.info('sliderJsunit_0300 START');
      await CommonFunc.sleep(1000);
      // get the slider component attribute
      let strJson: string = getInspectorByKey('sliderA');

      console.info('sliderJsunit_0300 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .blockColor + "---" + JSON.parse(strJson).$attrs.trackColor + "--" + JSON.parse(strJson).$attrs.selectedColor
        + "---" + JSON.parse(strJson).$attrs.showSteps + "----" + JSON.parse(strJson)
        .$attrs
        .showTips + "----" + JSON.parse(strJson).$attrs.trackThickness + "--" + JSON.parse(strJson)
        .$attrs
        .selectedColor);
      expect(JSON.parse(strJson).$attrs.blockColor).assertEqual('#FF191970');
      expect(JSON.parse(strJson).$attrs.trackColor).assertEqual('#FFADD8E6');
      expect(JSON.parse(strJson).$attrs.showSteps).assertEqual('true');
      expect(JSON.parse(strJson).$attrs.showTips).assertEqual('true');
      expect(JSON.parse(strJson).$attrs.trackThickness).assertEqual('10.00px');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FF191970');
      done();
    });

    it('sliderJsunit_0400', 0, async (done: Function) => {
      console.info('sliderJsunit_0400 START');
      // modify the Color attribute normal value of slider dynamically
      globalThis.value.message.notify({
        name: 'blockColor', value: '#FFFFFF'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'trackColor', value: '#EEFFFF'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'selectedColor', value: '#AEFFFF'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'trackThickness', value: '12.00px'
      })
      await CommonFunc.sleep(200);
      // get the slider component attribute
      let strJson: string = getInspectorByKey('sliderA');

      console.info('sliderJsunit_0400 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .blockColor + "---" + JSON.parse(strJson).$attrs.trackColor + "--" + JSON.parse(strJson).$attrs.selectedColor
        + "---" + JSON.parse(strJson).$attrs.trackThickness);
      expect(JSON.parse(strJson).$attrs.blockColor).assertEqual('#FFFFFFFF');
      expect(JSON.parse(strJson).$attrs.trackColor).assertEqual('#FFEEFFFF');
      expect(JSON.parse(strJson).$attrs.trackThickness).assertEqual('12.00px');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FFAEFFFF');
      done();
    });

    it('sliderJsunit_0500', 0, async (done: Function) => {
      console.info('sliderJsunit_0500 START');
      // modify the Color attribute normal value of slider dynamically
      globalThis.value.message.notify({
        name: 'blockColor', value: 'rgb(238, 130, 238)'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'trackColor', value: 'rgb(238, 130, 238)'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'selectedColor', value: 'rgb(238, 130, 238)'
      })
      await CommonFunc.sleep(200);
      // get the slider component attribute
      let strJson: string = getInspectorByKey('sliderA');

      console.info('sliderJsunit_0500 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .blockColor + "---" + JSON.parse(strJson).$attrs.trackColor + "--" + JSON.parse(strJson)
        .$attrs
        .selectedColor + "--");
      expect(JSON.parse(strJson).$attrs.blockColor).assertEqual('#FFEE82EE');
      expect(JSON.parse(strJson).$attrs.trackColor).assertEqual('#FFEE82EE');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FFEE82EE');
      done();
    });

    it('sliderJsunit_0600', 0, async (done: Function) => {
      console.info('sliderJsunit_0600 START');
      // modify the Color attribute illegal value of slider dynamically
      globalThis.value.message.notify({
        name: 'blockColor', value: '#ACE'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'trackColor', value: '#ACE'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'selectedColor', value: '#ACE'
      })
      await CommonFunc.sleep(200);
      globalThis.value.message.notify({
        name: 'trackThickness', value: '-px'
      })
      await CommonFunc.sleep(200);
      // get the slider component attribute
      let strJson: string = getInspectorByKey('sliderA');

      console.info('sliderJsunit_0600 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .blockColor + "---" + JSON.parse(strJson).$attrs.trackColor + "--" + JSON.parse(strJson)
        .$attrs
        .selectedColor + "---" + JSON.parse(strJson).$attrs.trackThickness);
      expect(JSON.parse(strJson).$attrs.blockColor).assertEqual('#FFAACCEE');
      expect(JSON.parse(strJson).$attrs.trackColor).assertEqual('#FFAACCEE');
      expect(JSON.parse(strJson).$attrs.trackThickness).assertEqual('4.00vp');
      expect(JSON.parse(strJson).$attrs.selectedColor).assertEqual('#FFAACCEE');
      done();
    });

    it('sliderJsunit_0700', 0, async (done: Function) => {
      console.info('sliderJsunit_0700 START');
      // modify the constructor attribute of slider dynamically
      globalThis.value.message.notify({
        name: 'vInSetValueOne', value: 30
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'style', value: SliderStyle.OutSet
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'directionT', value: Axis.Horizontal
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'reverse', value: false
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'min', value: 20
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'max', value: 80
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'step', value: 0.9
      })
      await CommonFunc.sleep(2000);
      // check the value of changed parameter
      let strJson: string = getInspectorByKey('sliderConstructor');

      console.info('sliderJsunit_0700 component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .style + "---" + JSON.parse(strJson).$attrs.constructor.direction + "--" + JSON.parse(strJson)
        .$attrs
        .constructor
        .value
        + "---" + JSON.parse(strJson).$attrs.constructor.reverse + "----" + JSON.parse(strJson)
        .$attrs
        .constructor
        .min + "----" + JSON.parse(strJson).$attrs.constructor.max + "---" + JSON.parse(strJson)
        .$attrs
        .constructor
        .step);
      expect(JSON.parse(strJson).$attrs.style).assertEqual('SliderStyle.OutSet');
      expect(JSON.parse(strJson).$attrs.constructor.direction).assertEqual('Axis.Horizontal');
      expect(JSON.parse(strJson).$attrs.constructor.reverse).assertEqual('false');
      expect(JSON.parse(strJson).$attrs.constructor.min).assertEqual('20.000000');
      expect(JSON.parse(strJson).$attrs.constructor.max).assertEqual('80.000000');
      expect(JSON.parse(strJson).$attrs.constructor.step).assertEqual('0.900000');
      expect(JSON.parse(strJson).$attrs.constructor.value).assertEqual('30.000000');
      done();
    });

    it('sliderJsunit_0800', 0, async (done: Function) => {
      // Verify the swipe function of slider component
      console.info('sliderJsunit_0800 START');
      await CommonFunc.sleep(1000);
      let sliderT = CommonFunc.getComponentRectOnScreen('sliderConstructor');
      let top = sliderT.top
      let bottom = sliderT.bottom
      let left = sliderT.left
      let right = sliderT.right
      let x = Math.round(left + (right - left) / 2)
      let driver = await Driver.create();
      await driver.delayMs(waitUiReadyMs);
      await driver.swipe(x, Math.round(bottom - 20), x, Math.round(top + 50));
      await driver.delayMs(waitUiReadyMs);
      let strJson: string = getInspectorByKey('tex');

      console.info("[sliderJsunit_0800] JSON.parse(strJson): " + JSON.stringify(JSON.parse(strJson)));
      expect(Math.round(JSON.parse(strJson).$attrs.content)).assertEqual(50);
      let strJson1 = getInspectorByKey('modeT');

      console.info("[sliderJsunit_0800] JSON.parse(strJson1): " + JSON.stringify(JSON.parse(strJson1)));
      expect(JSON.parse(strJson1).$attrs.content).assertEqual('2');
      done();
    });

    it('sliderJsunit_0900', 0, async (done: Function) => {
      console.info('[sliderJsunit_0800] START');
      // modify the constructor attribute of slider dynamically
      globalThis.value.message.notify({
        name: 'vInSetValueOne', value: -30
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'reverse', value: 1
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'style', value: 4
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'directionT', value: 6
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'min', value: -20
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'max', value: 1000
      })
      await CommonFunc.sleep(1000);
      globalThis.value.message.notify({
        name: 'step', value: 10007
      })
      await CommonFunc.sleep(2000);
      // check the value of changed parameter
      let strJson: string = getInspectorByKey('sliderConstructor');

      console.info('[sliderJsunit_0900] component JSON.parse(strJson) is: ' + JSON.parse(strJson)
        .$attrs
        .style + "---" + JSON.parse(strJson).$attrs.constructor.direction + "--" + JSON.parse(strJson)
        .$attrs
        .constructor
        .value
        + "---" + JSON.parse(strJson).$attrs.constructor.reverse + "----" + JSON.parse(strJson)
        .$attrs
        .constructor
        .min + "----" + JSON.parse(strJson).$attrs.constructor.max + "---" + JSON.parse(strJson)
        .$attrs
        .constructor
        .step);
      expect(JSON.parse(strJson).$attrs.style).assertEqual('SliderStyle.OutSet');
      expect(JSON.parse(strJson).$attrs.constructor.direction).assertEqual('Axis.Horizontal');
      expect(JSON.parse(strJson).$attrs.constructor.value).assertEqual('20.000000');
      expect(JSON.parse(strJson).$attrs.constructor.reverse).assertEqual('false');
      expect(JSON.parse(strJson).$attrs.constructor.min).assertEqual('-20.000000');
      expect(JSON.parse(strJson).$attrs.constructor.max).assertEqual('1000.000000');
      expect(JSON.parse(strJson).$attrs.constructor.step).assertEqual('1.000000');
      console.info('[sliderJsunit_0900] END');
      done();
    });
  })
}
