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
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

export default function OutlineRadiusTest() {
  //A list of components that support the position attribute, which is required.
  let supportView = [
    'AlphabetIndexer',
  ]

  //Custom params.
  let targetComponentWidth = 200;
  let targetComponentHeight = 200;
  let parentWidth = 320;
  let parentHeight = 200;
  let gutter = 10;
  let columns = 3;
  let pageConfig = {
    testName: 'testOutlineRadius',
    pageName: 'outlineRadiusPage',
    pageUrl: 'MainAbility/pages/outlineRadius/OutlineRadiusPage',
    targetComponentHeight: targetComponentHeight,
    targetComponentWidth: targetComponentWidth,
    parentHeight: parentHeight,
    parentWidth: parentWidth,
    referenceComponentKey: 'referenceComponentKey',
    parentComponentKey: 'parentComponentKey',
    gutter: gutter,
    columns: columns
  }

  let testValues = [{
    describe: 'SetOutlineRadius',
    setValue: {
      outlineRadius: '100px'
    },
    expectValue: {
      outlineRadius: '100.00px'
    }
  }]

  /**
   * Create test suite.
   */
  describe('outlineRadiusTest', () => {
    //Generate test cases (it) through a loop based on the support view * test values.
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //Modify the target component properties.
      console.info('[' + data.caseTag + '] outlineRadiusTest');
      console.info('[' + data.caseTag + '] check outlineRadius.' + ` ${data.testValue.setValue.outlineRadius}`);
      console.info('[' + data.testValue.expectValue.outlineRadius + '] expectValue');
      console.info('[' + data.viewObj.$attrs.outlineRadius + '] viewObj.$attrs.outlineRadius');
      let outlineRadius = data.viewObj.$attrs.outlineRadius;
      expect(outlineRadius.topLeft).assertEqual(data.testValue.expectValue.outlineRadius);
    });
  })
}