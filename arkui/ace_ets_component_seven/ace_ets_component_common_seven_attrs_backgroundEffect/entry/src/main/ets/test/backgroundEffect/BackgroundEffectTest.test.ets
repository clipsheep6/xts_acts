/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import Utils from '../../MainAbility/common/Utils';

/**
 * Test of common attribute: backgroundEffect
 */
export default function backgroundEffectTest() {
  let supportView = [
    'Button',
  ]

  //Page related configuration, this parameter is required.
  let targetComponentWidth = 200;
  let targetComponentHeight = 200;
  let parentWidth = 320;
  let parentHeight = 200;
  let gutter = 10;
  let columns = 3;
  let pageConfig = {
    testName: 'testBackgroundEffect',
    pageName: 'backgroundEffectPage',
    pageUrl: 'MainAbility/pages/backgroundEffect/BackgroundEffectPage',
    targetComponentHeight: targetComponentHeight,
    targetComponentWidth: targetComponentWidth,
    parentHeight: parentHeight,
    parentWidth: parentWidth,
    referenceComponentKey: 'referenceComponentKey',
    parentComponentKey: 'parentComponentKey',
    gutter: gutter,
    columns: columns
  }


  //The data type to be tested, this parameter is required.
  let testValues = [{
    describe: 'SetBackgroundEffect',
    setValue: {
      backgroundEffect: ({
        radius: 150,
        saturation: 40,
        brightness: 200,
        color: "#ffcd27ef",
        adaptiveColor: AdaptiveColor.AVERAGE,
        blurOptions: { grayscale: [1, 1] }
      })
    },
    expectValue: {
      backgroundEffect: {"options":{"radius":150,"saturation":40,"brightness":200,"color":"#FFCD27EF","adaptiveColor":"AdaptiveColor.Average","blurOption":"[1.000000,1.000000]"}}
    }
  }]

  /**
   * Create test suite.
   */
  describe('backgroundEffectTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      console.info('[' + data.caseTag + '] backgroundEffectTest.');
      console.info('[' + data.caseTag + '] backgroundEffectTest. data.testValue.setValue.backgroundEffect : ' + data.testValue.setValue.backgroundEffect);
      console.info('[' + data.viewObj.$attrs.backgroundEffect + '] backgroundEffectTest. viewObj.$attrs.backgroundEffect.');
      console.info('[' + data.testValue.expectValue.backgroundEffect + '] backgroundEffectTest. data.testValue.expectValue.backgroundEffect.');
      let viewObj = data.viewObj.$attrs.backgroundEffect;      
      let expectObj = data.testValue.expectValue.backgroundEffect;

      expect(viewObj.radius).assertEqual(expectObj.radius);
      expect(viewObj.saturation).assertEqual(expectObj.saturation);
      expect(viewObj.brightness).assertEqual(expectObj.brightness);
      expect(viewObj.color).assertEqual(expectObj.color);
      expect(viewObj.adaptiveColor).assertEqual(expectObj.adaptiveColor);
      expect(JSON.stringify(viewObj.blurOptions)).assertEqual(JSON.stringify(expectObj.blurOptions));
    });
  })
}