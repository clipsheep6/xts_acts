/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import Utils from '../../MainAbility/common/Utils';

/**
 * Test of common attribute: outlineWidth
 */
export default function outlineWidthTest() {
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
    testName: 'testOutlineWidth',
    pageName: 'outlineWidthPage',
    pageUrl: 'MainAbility/pages/outlineWidth/OutlineWidthPage',
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
    describe: 'SetOutlineWidth',
    setValue: {
      outlineWidth: ({'left':'110.00px','top':'100.00px','right':'100.00px','bottom':'100.00px'}),
    },
    expectValue: {
      outlineWidth: '110.00px',
    }
  }]

  /**
   * Create test suite.
   */
  describe('outlineWidthTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      console.info('[' + data.caseTag + '] outlineWidthTest.');
      console.info('[' + data.caseTag + '] outlineWidthTest. data.testValue.setValue.outlineWidth : ' + data.testValue.setValue.outlineWidth);
      console.info('[' + data.viewObj.$attrs.outlineWidth + '] outlineWidthTest. viewObj.$attrs.outlineWidth.');
      console.info('[' + data.testValue.expectValue.outlineWidth + '] outlineWidthTest. data.testValue.expectValue.outlineWidth.');
      let outlineWidth = data.viewObj.$attrs.outlineWidth;
      expect(outlineWidth.left).assertEqual(data.testValue.expectValue.outlineWidth);
    });
  })
}