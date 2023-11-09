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
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
/**
 * Test of common attribute: width
 */
export default function widthTest() {
  //A list of components that support width attributes is required.
  let supportView = [
    // 'AlphabetIndexer',
    'Button',
    // 'BlankRow',
    // 'BlankColumn',
    // 'Checkbox',
    // 'CheckboxGroup',
    // 'DataPanel',
    // 'DatePicker',
    // 'Divider',
    // 'Gauge',
    // 'Image',
    // 'ImageAnimator',
    // 'LoadingProgress',
    // 'Marquee',
    // 'Navigation',
    // 'NavRouter',
    // 'Progress',
    // 'QRCode',
    // 'Radio',
    // //    'ScrollBar',
    // 'Rating',
    // //    'Search',
    // 'RichText',
    // 'Select',
    // 'Slider',
    // 'Text',
    // //    'TextArea',
    // 'TextClock',
    // //    'TextInput',
    // 'TextPicker',
    // 'TextTimer',
    // 'TimePicker',
    // 'Toggle',
    // 'Web',
    // 'Badge',
    // 'Column',
    // 'ColumnSplit',
    // //    'Counter',
    // 'Flex',
    // 'GridRow',
    // 'Grid',
    // 'List',
    // 'ListItem',
    // //    'Panel',
    // 'Refresh',
    // 'Row',
    // 'RowSplit',
    // //    'Scroll',
    // //    'SideBarContainer',
    // 'Stack',
    // 'Swiper',
    // //    'Tabs',
    // 'Circle',
    // 'Ellipse',
    // 'Polyline',
    // 'Polygon',
    // 'Path',
    // 'Rect',
    // 'Shape',
    // 'Line',
    // 'WaterFlow',
    // 'Stepper',
    // //    'StepperItem',
    // 'FlowItem',
    // //    'GridCol',
    // 'GridItem',
    // 'RelativeContainer',
    // 'Navigator',
  ]

  //Page related configuration, this parameter is required.
  let pageConfig = {
    testName: 'testWidth',
    pageName: 'WidthPage',
    pageUrl: 'MainAbility/pages/width/WidthPage',
  }

  //The data type to be tested, this parameter is required.
  let testValues = [{
    describe: 'SetWidth',
    setValue: {
      width: "100"
    },
    expectValue: {
      width: "100.00vp"
    }
  }]

  /**
   * Create test suite.
   */
  describe('WidthTest', () => {
    //Generate test cases (it) through a loop based on the support view * test values.
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {
      //Modify the target component properties.
      console.error('[' + data.caseTag + '] WidthTest @@@@@@.');
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      console.error('[' + data.caseTag + '] check width.' + ` ${data.testValue.setValue.width} ${data.testValue.setValue.width}`);
      await Utils.sleep(1000);

      //Confirm that the position attribute value has been set successfully.
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      console.error('[' + data.testValue.expectValue.width + '] expectValue @@@@@@.');
      console.error('[' + viewObj.$attrs.width + '] viewObj.$attrs.width @@@@@@.');
      expect(viewObj.$attrs.width).assertEqual(data.testValue.expectValue.width);

      // console.info('[' + data.caseTag + '] check position y.');
      // expect(viewObj.$attrs.position.y).assertEqual(data.testValue.expectValue.y);
    })
  })
}