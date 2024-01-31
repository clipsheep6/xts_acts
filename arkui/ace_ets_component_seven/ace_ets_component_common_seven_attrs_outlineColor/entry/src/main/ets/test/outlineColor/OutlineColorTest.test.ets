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
 * Test of common attribute: outlineColor
 */
export default function outlineColorTest() {
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
    testName: 'testOutlineColor',
    pageName: 'outlineColorPage',
    pageUrl: 'MainAbility/pages/outlineColor/OutlineColorPage',
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
    describe: 'SetOutlineColor',
    setValue: {
      outlineColor: '#FF0000FF'
    },
    expectValue: {
      outlineColor: '#FF0000FF'
    }
  }]

  /**
   * Create test suite.
   */
  describe('outlineColorTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      console.error('[' + data.caseTag + '] outlineColorTest.');
      console.error('[' + data.caseTag + '] outlineColorTest. data.testValue.setValue.outlineColor : ' + data.testValue.setValue.outlineColor);
      console.error('[' + data.viewObj.$attrs.outlineColor + '] outlineColorTest. viewObj.$attrs.outlineColor.');
      console.error('[' + data.testValue.expectValue.outlineColor + '] outlineColorTest. data.testValue.expectValue.outlineColor.');
      let outlineColor = data.viewObj.$attrs.outlineColor;
      expect(outlineColor.left).assertEqual(data.testValue.expectValue.outlineColor);
    });
  })
}