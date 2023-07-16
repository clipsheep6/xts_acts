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

/**
 * Test of common attribute: direction
 */
export default function directionTest() {
  //Support view config, looped to create cases, this param is required.
  let supportView = [
    'Badge',
    'Column',
    'ColumnSplit',
    'Counter',
    'Flex',
    'FlowItem',
    'GridCol',
    'GridRow',
    'Grid',
    'GridItem',
    'List',
    'ListItem',
    'ListItemGroup',
    'Navigator',
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

  //Page config, this param is required.
  let pageConfig = {
    testName: 'testDirection',
    pageName: 'DirectionPage',
    pageUrl: 'MainAbility/pages/direction/DirectionPage',
  }

  //Test values, looped to create cases, this param is required.
  let testValues = [{
    describe: 'SetAuto',
    setValue: Direction.Auto,
    expectValue: {
      direction: 'Direction.Auto'
    }
  }, {
    describe: 'SetLtr',
    setValue: Direction.Ltr,
    expectValue: {
      direction: 'Direction.Ltr'
    }
  }, {
    describe: 'SetRtl',
    setValue: Direction.Rtl,
    expectValue: {
      direction: 'Direction.Rtl'
    }
  }]

  /**
   * Create test suite.
   */
  describe('DirectionTest', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //Check test result.
      console.info('[' + data.caseTag + '] check direction attr value.');
      expect(Utils.getComponentByKey(data.pageConfig.componentKey).$attrs.direction)
        .assertEqual(data.testValue.expectValue.direction);
    });
  })
}