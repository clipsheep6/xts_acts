/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

export default function DefaultTest() {
  let supportView = [
    'AlphabetIndexer',
    'Blank',
    'Button',
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
    'NavRouter',
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
    'Badge',
    'Column',
    'ColumnSplit',
    'Counter',
    'Flex',
    'GridRow',
    'Grid',
    'List',
    'ListItem',
    'ListItemGroup',
    'Panel',
    'Refresh',
    'Row',
    'Scroll',
    'SideBarContainer',
    'Stack',
    'Swiper',
    'Tabs',
    'TabContent',
    'WaterFlow',
    'Circle',
    'Ellipse',
    'Line',
    'Polyline',
    'Polygon',
    'Path',
    'Rect',
    'Shape',
  ]

  //Custom params.
  let parentWidth = 300;
  let parentHeight = 600;

  let pageConfig = {
    testName: 'testDefault',
    pageName: 'DefaultPage',
    pageUrl: 'MainAbility/pages/default/DefaultPage',
    targetGroupView: 'targetGroupView',
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: 'PaddingDefaultTest',
    expectValue: {
      padding: '0.00vp'
    }
  }, {
    describe: 'MarginDefaultTest',
    expectValue: {
      margin: '0.00vp'
    }
  }, {
    describe: 'ConstraintSizeDefaultTest',
    expectValue: {
      constraintSize: {
        'minWidth': '0.00vp', 'minHeight': '0.00vp', 'maxWidth': 'Infinityvp', 'maxHeight': 'Infinityvp'
      }
    }
  }, {
    describe: 'LayoutWeightDefaultTest',
    expectValue: {
      layoutWeight: 0
    }
  }, {
    describe: 'MarkAnchorDefaultTest',
    expectValue: {
      markAnchor: {
        x: '0.0px', y: '0.0px'
      }
    }
  }, {
    describe: 'OffsetDefaultTest',
    expectValue: {
      offset: {
        x: '0.0px', y: '0.0px'
      }
    }
  }]

  describe('DefaultTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      if (data.testValue.describe == 'PaddingDefaultTest') {
        console.info('data.viewObj.$attrs.padding:' + data.viewObj.$attrs.padding)
        expect(data.viewObj.$attrs.padding).assertEqual(data.testValue.expectValue.padding);
      }
      if (data.testValue.describe == 'MarginDefaultTest') {
        console.info('data.viewObj.$attrs.margin:' + data.viewObj.$attrs.margin)
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);
      }
      if (data.testValue.describe == 'ConstraintSizeDefaultTest') {
        console.info('data.viewObj.$attrs.constraintSize:' + data.viewObj.$attrs.constraintSize)
        expect(data.viewObj.$attrs.constraintSize)
          .assertEqual(JSON.stringify(data.testValue.expectValue.constraintSize));
      }
      if (data.testValue.describe == 'LayoutWeightDefaultTest') {
        console.info('data.viewObj.$attrs.layoutWeight:' + data.viewObj.$attrs.layoutWeight)
        expect(data.viewObj.$attrs.layoutWeight).assertEqual(data.testValue.expectValue.layoutWeight);
      }
      if (data.testValue.describe == 'MarkAnchorDefaultTest') {
        console.info('data.viewObj.$attrs.markAnchor.x:' + data.viewObj.$attrs.markAnchor.x)
        console.info('data.viewObj.$attrs.markAnchor.y:' + data.viewObj.$attrs.markAnchor.y)
        expect(data.viewObj.$attrs.markAnchor.x).assertEqual(data.testValue.expectValue.markAnchor.x);
        expect(data.viewObj.$attrs.markAnchor.y).assertEqual(data.testValue.expectValue.markAnchor.y);
      }
      if (data.testValue.describe == 'OffsetDefaultTest') {
        console.info('data.viewObj.$attrs.offset.x:' + data.viewObj.$attrs.offset.x)
        console.info('data.viewObj.$attrs.offset.y:' + data.viewObj.$attrs.offset.y)
        expect(data.viewObj.$attrs.offset.x).assertEqual(data.testValue.expectValue.offset.x);
        expect(data.viewObj.$attrs.offset.y).assertEqual(data.testValue.expectValue.offset.y);
      }
    });
  })
}