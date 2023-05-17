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

import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';
import { AttrsManager } from '../../MainAbility/common/AttrsManager';

export default function marginTest() {
  let setInit = {top: 0, right: 0, bottom: 0, left: 0}
  let getInit = '0.00vp';
  let childWidth = 100;
  let childHeight = 50;
  let parentWidth = 400;
  let parentHeight = 600;
  let supportView = [
      'AlphabetIndexer',
      'Button',
      'Blank',
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
      'RichText',
      'ScrollBar',
      'Search',
      'Select',
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
      'Line',
      'Polyline',
      'Polygon',
      'Path',
      'Rect',
      'Shape',
      'Badge',
      'Column',
      'ColumnSplit',
      'Counter',
      'Flex',
      'Grid',
      'List',
      'ListItem',
     // 'ListItemGroup',
      'Panel',
      'Refresh',
      'RelativeContainer',
      'Row',
      'RowSplit',
      'Scroll',
      'SideBarContainer',
      'Stack',
      'Swiper',
      'Tabs',
      'TabContent',
      'WaterFlow'
  ]

  let pageConfig = {
    testName: 'testMargin',
    pageName: 'MarginPage',
    pageUrl: 'MainAbility/pages/margin/MarginPage',
    targetGroupView: 'targetGroupView',
    parentComponentKey: 'parentComponentKey',
    buttonComponentKey: 'buttonComponentKey',
    childWidth: childWidth,
    childHeight: childHeight,
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: 'SetMargin',
    setValue: {
      margin:{
        top: 200,
        right: 100,
        bottom: 100,
        left: 100
      }
    },
    expectValue: {
      margin:{'top':'200.00vp', 'right':'100.00vp', 'bottom':'100.00vp', 'left':'100.00vp'},
      top: vp2px(200),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  },{
    describe: 'SetMarginTop',
    setValue: {
      margin:{
        top: 200
      }
    },
    expectValue: {
      margin:{'top':'200.00vp','right':'0.00vp','bottom':'0.00vp','left':'0.00vp'},
      top: vp2px(200),
      right: vp2px(0),
      bottom: vp2px(0),
      left: vp2px(0)
    }
  },{
    describe: 'SetMarginRight',
    setValue: {
      margin:{
        right: 200
      }
    },
    expectValue: {
      margin:{'top':'0.00vp','right':'200.00vp','bottom':'0.00vp','left':'0.00vp'},
      top: vp2px(0),
      right: vp2px(200),
      bottom: vp2px(0),
      left: vp2px(0)
    }
  },{
    describe: 'SetMarginBottom',
    setValue: {
      margin:{
        bottom: 200
      }
    },
    expectValue: {
      margin:{'top':'0.00vp','right':'0.00vp','bottom':'200.00vp','left':'0.00vp'},
      top: vp2px(0),
      right: vp2px(0),
      bottom: vp2px(200),
      left: vp2px(0)
    }
  },{
    describe: 'SetMarginLeft',
    setValue: {
      margin:{
        left: 200
      }
    },
    expectValue: {
      margin:{'top':'0.00vp','right':'0.00vp','bottom':'0.00vp','left':'200.00vp'},
      top: vp2px(0),
      right: vp2px(0),
      bottom: vp2px(0),
      left: vp2px(200)
    }
  }]

  describe('MarginTest', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {

      console.info('[' + data.caseTag + '] setValue : ' + setInit);
      AttrsManager.change(data.caseTag, setInit);
      await Utils.sleep(1000);

      let referenceRectBefore = Utils.getComponentByKey(data.pageConfig.componentKey);
      expect(referenceRectBefore.$attrs.margin).assertEqual(getInit);

      console.info('[' + data.caseTag + '] setValue : ' + JSON.stringify(data.testValue.setValue));
      AttrsManager.change(data.caseTag, data.testValue.setValue.margin);
      await Utils.sleep(1000);
      let referenceRectAfter = Utils.getComponentByKey(data.pageConfig.componentKey);
      //组件
      let rect = Utils.getComponentRect(data.pageConfig.componentKey);
      //父组件
      let rectParent = Utils.getComponentRect(data.pageConfig.parentComponentKey);
      //组件边距
      if(data.pageConfig.componentKey == 'ListItem'){
        let referenceRect = Utils.getComponentRect(data.pageConfig.buttonComponentKey);
        let top = rect.top - rectParent.top
        let left = rect.left - rectParent.left
        let right = rectParent.right - rect.right
        let bottom = referenceRect.top - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + referenceRectAfter.$attrs.margin)
        expect(referenceRectAfter.$attrs.margin).assertEqual(JSON.stringify(data.testValue.expectValue.margin));
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      }
      else if (data.pageConfig.componentKey == 'TabContent')
      {
        let referenceRect = Utils.getComponentRect(data.pageConfig.buttonComponentKey);
        let top = rect.top - referenceRect.top
        let left = rect.left - rectParent.left
        let right = rectParent.right - rect.right
        let bottom = rectParent.bottom - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + referenceRectAfter.$attrs.margin)
        expect(referenceRectAfter.$attrs.margin).assertEqual(JSON.stringify(data.testValue.expectValue.margin));
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      } else {
        //参考组件
        data['viewObj'] = Utils.getComponentByKey(pageConfig['componentKey']);
        let referenceRect = Utils.getComponentRect(data.pageConfig.buttonComponentKey)
        let top = rect.top - rectParent.top
        let left = rect.left - rectParent.left
        let right = referenceRect.left - rect.right
        let bottom = rectParent.bottom - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + referenceRectAfter.$attrs.margin)
        expect(referenceRectAfter.$attrs.margin).assertEqual(JSON.stringify(data.testValue.expectValue.margin));
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      }

    });
  })
}