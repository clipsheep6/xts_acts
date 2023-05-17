/*
 * Copyright (c) 2023-2030 iSoftStone Information Technology (Group) Co.,Ltd.
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

export default function marginLengthTest() {
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
    testName: 'testMarginLength',
    pageName: 'MarginPage_Length',
    pageUrl: 'MainAbility/pages/margin/MarginPage_Length',
    targetGroupView: 'targetGroupView',
    parentComponentKey: 'parentComponentKey',
    referenceComponentKey: 'referenceComponentKey',
    childWidth: childWidth,
    childHeight: childHeight,
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: 'SetNumber',
    setValue: {
      margin: 100,
    },
    expectValue: {
      margin: '100.00vp',
      top: vp2px(100),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  }, {
    describe: 'SetStringPx',
    setValue: {
      margin: '200px',
    },
    expectValue: {
      margin: '200.00px',
      top: 200,
      right: 200,
      bottom: 200,
      left: 200
    }
  }, {
    describe: 'SetResource',
    setValue: {
      margin: $r('app.float.100vp'),
    },
    expectValue: {
      margin: '100.00vp',
      top: vp2px(100),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  }]

  describe('MarginLengthTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //组件
      let rect = Utils.getComponentRect(data.pageConfig.componentKey);
      //console.info('[getComponentRect] Json_Rect is: ' + Json_Rect);

      //父组件
      let rectParent = Utils.getComponentRect(data.pageConfig.parentComponentKey)
      //console.info('[getComponentRect] Json_Rec_Parent is: ' + Json_Rec_Parent);
      if (data.pageConfig.componentKey == 'ListItem') {
        let rectReference = Utils.getComponentRect(data.pageConfig.referenceComponentKey)
        let top = rect.top - rectParent.top
        let left = rect.left - rectParent.left
        let right = rectParent.right - rect.right
        let bottom = rectReference.top - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + data.viewObj.$attrs.margin)
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      } else if (data.pageConfig.componentKey == 'TabContent') {
        let referenceRect = Utils.getComponentRect(data.pageConfig.referenceComponentKey);
        let top = rect.top - referenceRect.top
        let left = rect.left - rectParent.left
        let right = rectParent.right - rect.right
        let bottom = rectParent.bottom - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + data.viewObj.$attrs.margin)
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      }  else {
        //组件与父组件距离
        let top = rect.top - rectParent.top
        let left = rect.left - rectParent.left
        let right = rectParent.right - rect.right
        let bottom = rectParent.bottom - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);

        console.info('data.testValues.describe is: ' + data.testValue.describe);
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(left).assertEqual(data.testValue.expectValue.left);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
      }

    });
  })
}