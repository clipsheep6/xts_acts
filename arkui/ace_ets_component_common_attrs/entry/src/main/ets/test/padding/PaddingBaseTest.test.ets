/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import Utils from '../../MainAbility/common/Utils';
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'


export default function paddingTest() {
  let supportView = ['AlphabetIndexer',
    'Button',
    'BlankRow',
    'BlankColumn',
    'Checkbox',
    'CheckboxGroup',
    'DataPanel',
    'DatePicker',
    'Divider',
    'Gauge',
    'Image',
    'ImageAnimator',
    'LoadingProgress',
    'Marquee',
    'Navigation',
    'Progress',
    'QRCode',
    'Radio',
    'Rating',
    'Search',
    'RichText',
    'Search',
/*    'Select',*/
    'Slider',
    'Text',
    'TextArea',
    'TextClock',
    'TextInput',
    'TextPicker',
    'TextTimer',
    'TimePicker',
    'Toggle',
    'Web',
    'Circle',
    'Ellipse',
    'Polyline',
    'Polygon',
    'Path',
    'Rect',
    'Shape',
    'Line',
  ]

  let parentBackGroundColor = Color.Yellow
  let pageConfig = {
    testName: 'testPaddingBaseTest',
    pageName: 'PaddingBasePage',
    pageUrl: 'MainAbility/pages/padding/PaddingBasePage',
    parentBackGroundColor: parentBackGroundColor,
    parentComponentKey: 'parentComponentKey'
  }

  let testValues = [
    {
      describe: 'SetPadding',
      setValue: {
        padding: {
          top: 200,
          right: 100,
          bottom: 100,
          left: 100
        }
      },
      expectValue: {
        padding: {
          'top': '200.00vp', 'right': '100.00vp', 'bottom': '100.00vp', 'left': '100.00vp'
        }
      }
    }, {
    describe: 'SetPaddingTop',
    setValue: {
      padding: {
        top: 200
      }
    },
    expectValue: {
      padding: {
        'top': '200.00vp', 'right': '0.00vp', 'bottom': '0.00vp', 'left': '0.00vp'
      }
    }
  }, {
    describe: 'SetPaddingRight',
    setValue: {
      padding: {
        right: 200
      }
    },
    expectValue: {
      padding: {
        'top': '0.00vp', 'right': '200.00vp', 'bottom': '0.00vp', 'left': '0.00vp'
      }
    }
  }, {
    describe: 'SetPaddingBottom',
    setValue: {
      padding: {
        bottom: 200
      }
    },
    expectValue: {
      padding: {
        'top': '0.00vp', 'right': '0.00vp', 'bottom': '200.00vp', 'left': '0.00vp'
      }
    }
  }, {
    describe: "SetPaddingLeft",
    setValue: {
      padding: {
        left: 200
      }
    },
    expectValue: {
      padding: {
        'top': '0.00vp', 'right': '0.00vp', 'bottom': '0.00vp', 'left': '200.00vp'
      }
    }
  }]

  describe("PaddingBaseTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      AttrsManager.change(data.caseTag, {
        padding: {
          left: 0, right: 0, top: 0, bottom: 0
        }
      });
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      console.info("viewObj.$attrs" + JSON.stringify(viewObj.$attrs))
      console.info("viewObj.$attrs.padding:" + viewObj.$attrs.padding)
      console.info("JSON.stringify(data.testValue.expectValue.padding):" + JSON.stringify(data.testValue.expectValue.padding))
      if (data.testValue.describe == 'SetPaddingTop') {
        console.info("JSON.parse(viewObj.$attrs.padding).top" + JSON.parse(viewObj.$attrs.padding).top);
        console.info("JSON.parse(JSON.stringify(data.testValue.expectValue.padding.top))" + JSON.parse(JSON.stringify(data.testValue.expectValue.padding.top)));
        console.info("viewObj.$attrs.padding:" + viewObj.$attrs.padding);
        let expectTop = JSON.parse(JSON.stringify(data.testValue.expectValue.padding.top));
        console.info("expectTop:" + expectTop);
        let computeTop = JSON.parse(viewObj.$attrs.padding).top;
        console.info("computeTop:" + computeTop.top);
        expect(computeTop).assertEqual(expectTop);
      } else if (data.testValue.describe == 'SetPaddingRight') {
        let expectRight = JSON.parse(JSON.stringify(data.testValue.expectValue.padding.right));
        console.info("expectRight:" + expectRight);
        let computeRight = JSON.parse(viewObj.$attrs.padding).right;
        console.info("computeRight:" + computeRight);
        expect(computeRight).assertEqual(expectRight);
      } else if (data.testValue.describe == 'SetPaddingBottom') {
        let expectBottom = JSON.parse(JSON.stringify(data.testValue.expectValue.padding.bottom));
        console.info("expectBottom:" + expectBottom);
        let computeBottom = JSON.parse(viewObj.$attrs.padding).bottom;
        console.info("computeBottom:" + computeBottom);
        expect(computeBottom).assertEqual(expectBottom);
      } else if (data.testValue.describe == 'SetPaddingLeft') {
        let expectLeft= JSON.parse(JSON.stringify(data.testValue.expectValue.padding.left));
        console.info("expectLeft:" + expectLeft);
        let computeLeft = JSON.parse(viewObj.$attrs.padding).left;
        console.info("computeLeft:" + computeLeft);
        expect(computeLeft).assertEqual(expectLeft);
      }else if(data.testValue.describe == 'SetPadding'){
        expect(viewObj.$attrs.padding).assertEqual(JSON.stringify(data.testValue.expectValue.padding));
      }
    })
  })
}
