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
 * Test of common attribute: height
 */
export default function backgroundcolorTest() {
  //A list of components that support padding attributes is required.
  let supportView = [
    // // 'AlphabetIndexer',
    'Button',
    // // 'BlankRow',
    // // 'BlankColumn',
    // // 'Checkbox',
    // // 'CheckboxGroup',
    // // 'DataPanel',
    // // 'DatePicker',
    // // 'Divider',
    // // 'Gauge',
    // 'Image',
    // // 'ImageAnimator',
    // 'LoadingProgress',
    // // 'Marquee',
    // // 'Navigation',
    // // 'NavRouter',
    // // 'Progress',
    // // 'QRCode',
    // // 'Radio',
    // // //    'ScrollBar',
    // // 'Rating',
    // // 'Search',
    // // 'RichText',
    // // 'Select',
    // // 'Slider',
    // 'Text',
    // 'TextArea',
    // // 'TextClock',
    // 'TextInput',
    // // 'TextPicker',
    // // 'TextTimer',
    // // 'TimePicker',
    // 'Toggle',
    // // 'Web',
    // // 'Badge',
    // // 'Column',
    // // 'ColumnSplit',
    // // //    'Counter',
    // // 'Flex',
    // // //    'GridRow',
    // // 'Grid',
    // // 'List',
    // // 'ListItem',
    // // //    'Panel',
    // 'Refresh',
    // // 'Row',
    // // 'RowSplit',
    // 'Scroll',
    // // //    'SideBarContainer',
    // 'Stack',
    // // 'Swiper',
    // // //    'Tabs',
    // // 'Circle',
    // // 'Ellipse',
    // // 'Polyline',
    // // 'Polygon',
    // // 'Path',
    // // 'Rect',
    // // 'Shape',
    // // 'Line',
    // // 'WaterFlow',
    // // //    'StepperItem',
    // // 'FlowItem',
    // // //    'GridCol',
    // // 'GridItem',
    // // 'RelativeContainer',
    // // 'Navigator',
    // // 'Stepper',
    // // 'Menu',
    // // 'MenuItem',
    // //    'MenuItemGroup'
  ]

  //Page related configuration, this parameter is required.
  let pageConfig = {
    testName: 'testBackgroudcolor',
    pageName: 'BackgroudcolorPage',
    pageUrl: 'MainAbility/pages/backgroundcolor/BackgroundcolorPage',
  }

  //The data type to be tested, this parameter is required.
  let testValues = [{
    describe: 'SetBackgroudcolor',
    setValue: {
      backgroundcolor: "green"
    },
    expectValue: {
      backgroundcolor: "#FF00FF00"
    }
  }]

  /**
   * Create test suite.
   */

  describe('backgroundcolorTest', () => {
    //Generate test cases (it) through a loop based on the support view * test values.
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {
      //Modify the target component properties.
      console.error('[' + data.caseTag + '] BackgroundcolorTest.');
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      console.error('[' + data.caseTag + '] check backgroundcolor.' + ` ${data.testValue.setValue.backgroundColor}`);
      await Utils.sleep(1000);

      //Confirm that the position attribute value has been set successfully.
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      console.error('[' + data.testValue.expectValue.backgroundcolor + '] expectValue @@@@@@.');
      console.error('[' + viewObj.$attrs.backgroundColor + '] viewObj.$attrs.backgroundColor @@@@@@.');
      expect(viewObj.$attrs.backgroundColor).assertEqual(data.testValue.expectValue.backgroundcolor);
    })
  })
}