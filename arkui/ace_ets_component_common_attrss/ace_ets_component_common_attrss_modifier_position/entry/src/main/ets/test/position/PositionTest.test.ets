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

import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

/**
 * Test of common attribute: position
 */
export default function positionTest() {
  //A list of components that support the position attribute, which is required.
  let supportView = [
    // 'AlphabetIndexer',
    // //    'Blank',
    'Button',
    // 'Checkbox',
    // 'CheckboxGroup',
    // 'DataPanel',
    // 'DatePicker',
    // 'Divider',
    // 'Gauge',
    'Image',
    // 'ImageAnimator',
    'LoadingProgress',
    // 'Marquee',
    // 'Menu',
    // 'MenuItem',
    // 'MenuItemGroup',
    // 'Navigation',
    // 'NavRouter',
    // 'ScrollBar',
    // 'RowSplit',
    // 'Row',
    // 'RelativeContainer',
    // 'Navigator',
    // 'ListItemGroup',
    // 'GridItem',
    // 'GridCol',
    // 'ColumnSplit',
    // 'TextTimer',
    // 'Stepper',
    // 'StepperItem',
    // 'Flex',
    // 'FlowItem',
    // 'Progress',
    // 'QRCode',
    // 'Radio',
    // 'Rating',
    // 'Search',
    // 'Select',
    // 'Slider',
    'Text',
    'TextArea',
    // //    'TextClock',
    'TextInput',
    // 'TextPicker',
    // 'TimePicker',
    'Toggle',
    // //    'Badge',
    // 'Column',
    // 'Counter',
    // 'GridRow',
    // 'Grid',
    // 'List',
    // 'ListItem',
    // 'Panel',
    'Refresh',
    'Scroll',
    // 'SideBarContainer',
    'Stack'
    // 'Swiper',
    // 'Tabs',
    // 'TabContent',
    // 'WaterFlow',
    // 'Circle',
    // 'Ellipse',
    // 'Line',
    // 'Polyline',
    // 'Polygon',
    // 'Path',
    // 'Rect',
    // 'Shape'
  ]


  //Page related configuration, this parameter is required.
  let pageConfig = {
    testName: 'testPosition',
    pageName: 'PositionPage',
    pageUrl: 'MainAbility/pages/position/PositionPage',
  }

  //The data type to be tested, this parameter is required.
  let testValues = [{
    describe: 'SetPosition',
    setValue: {
      x: 200, y: 100
    },
    expectValue: {
      x: '200.00vp', y: '100.00vp'
    }
  }
  ]

  /**
   * Create test suite.
   */
  describe('PositionTest', () => {
    //Generate test cases (it) through a loop based on the support view * test values.
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {
      //Modify the target component properties.
      console.error('[' + data.caseTag + '] PositionTest @@@@@@.');
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      console.error('[' + data.caseTag + '] check position.' + ` ${data.testValue.setValue.x} ${data.testValue.setValue.y}`);
      await Utils.sleep(1000);

      //Confirm that the position attribute value has been set successfully.
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      expect(viewObj.$attrs.position.x).assertEqual(data.testValue.expectValue.x);
      // console.info('[' + data.caseTag + '] check position y.');
      expect(viewObj.$attrs.position.y).assertEqual(data.testValue.expectValue.y);
    })
  })
}