/**
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

export default function marginStringTest() {
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
    testName: 'testMarginString',
    pageName: 'MarginPage_String',
    pageUrl: 'MainAbility/pages/margin/MarginPage_String',
    targetGroupView: 'targetGroupView',
    parentComponentKey: 'parentComponentKey',
    referenceComponentKeyTop: 'referenceComponentKeyTop',
    referenceComponentKeyBottom: 'referenceComponentKeyBottom',
    referenceComponentKeyLeft: 'referenceComponentKeyLeft',
    referenceComponentKeyRight: 'referenceComponentKeyRight',
    childWidth: childWidth,
    childHeight: childHeight,
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: 'SetStringPercent',
    setValue: {
      margin: '10%',
    },
    expectValue: {
      margin: '10.00%',
      top: '0.10',
      right: '0.10',
      bottom: '0.10',
      left: '0.10'
    }
  }]

  describe('MarginStringTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //组件
      let rect = Utils.getComponentRect(data.pageConfig.componentKey);
      //父组件
      let rectParent = Utils.getComponentRect(data.pageConfig.parentComponentKey)

      //组件边距
      if((data.pageConfig.componentKey == 'ListItem')||(data.pageConfig.componentKey == 'Blank')){
        //参考组件
        let rectTop = Utils.getComponentRect(data.pageConfig.referenceComponentKeyTop)
        let top = rect.top - rectParent.top
        let left = rect.left - rectParent.left
        let right = rectParent.right - rect.right
        let bottom = rectTop.top - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + data.viewObj.$attrs.margin)
        let width = rectParent.right - rectParent.left
        let topPercent = Number(top / width).toFixed(2)
        let leftPercent = Number(left / width).toFixed(2)
        let rightPercent = Number(right / width).toFixed(2)
        let bottomPercent = Number(bottom / width).toFixed(2)
        console.info('topPercent is: ' + topPercent);
        console.info('leftPercent is: ' + leftPercent);
        console.info('rightPercent is: ' + rightPercent);
        console.info('bottomPercent is: ' + bottomPercent);
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);
        expect(topPercent).assertEqual(data.testValue.expectValue.top);
        expect(rightPercent).assertEqual(data.testValue.expectValue.right);
        expect(bottomPercent).assertEqual(data.testValue.expectValue.bottom);
        expect(leftPercent).assertEqual(data.testValue.expectValue.left);
      }
      else if (data.pageConfig.componentKey == 'TabContent')
      {
        //参考组件
        let rectTop = Utils.getComponentRect(data.pageConfig.referenceComponentKeyTop)
        let top = rect.top - rectTop.top
        let left = rect.left - rectParent.left
        let right = rectParent.right - rect.right
        let bottom = rectParent.bottom - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + data.viewObj.$attrs.margin)
        let width = rectParent.right - rectParent.left
        let topPercent = Number(top / width).toFixed(2)
        let leftPercent = Number(left / width).toFixed(2)
        let rightPercent = Number(right / width).toFixed(2)
        let bottomPercent = Number(bottom / width).toFixed(2)
        console.info('topPercent is: ' + topPercent);
        console.info('leftPercent is: ' + leftPercent);
        console.info('rightPercent is: ' + rightPercent);
        console.info('bottomPercent is: ' + bottomPercent);
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);
        expect(topPercent).assertEqual(data.testValue.expectValue.top);
        expect(rightPercent).assertEqual(data.testValue.expectValue.right);
        expect(bottomPercent).assertEqual(data.testValue.expectValue.bottom);
        expect(leftPercent).assertEqual(data.testValue.expectValue.left);
      } else {
        //参考组件
        let rectTop = Utils.getComponentRect(data.pageConfig.referenceComponentKeyTop)
        let rectBottom = Utils.getComponentRect(data.pageConfig.referenceComponentKeyBottom)
        let rectLeft = Utils.getComponentRect(data.pageConfig.referenceComponentKeyLeft)
        let rectRight = Utils.getComponentRect(data.pageConfig.referenceComponentKeyRight)
        let top = rect.top - rectTop.bottom
        let left = rect.left - rectLeft.right
        let right = rectRight.left - rect.right
        let bottom = rectBottom.top - rect.bottom
        console.info('top is: ' + top);
        console.info('left is: ' + left);
        console.info('right is: ' + right);
        console.info('bottom is: ' + bottom);
        //断言
        console.info('margin is: ' + data.viewObj.$attrs.margin)
        //百分比计算
        let width = rectParent.right - rectParent.left
        let topPercent = Number(top / width).toFixed(2)
        let leftPercent = Number(left / width).toFixed(2)
        let rightPercent = Number(right / width).toFixed(2)
        let bottomPercent = Number(bottom / width).toFixed(2)
        console.info('topPercent is: ' + topPercent);
        console.info('leftPercent is: ' + leftPercent);
        console.info('rightPercent is: ' + rightPercent);
        console.info('bottomPercent is: ' + bottomPercent);
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);
        expect(topPercent).assertEqual(data.testValue.expectValue.top);
        expect(rightPercent).assertEqual(data.testValue.expectValue.right);
        expect(bottomPercent).assertEqual(data.testValue.expectValue.bottom);
        expect(leftPercent).assertEqual(data.testValue.expectValue.left);
      }

    });
  })
}