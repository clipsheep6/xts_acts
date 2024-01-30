/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import Utils from '../../MainAbility/common/Utils';

/**
 * Test of common attribute: outline
 */
export default function outlineTest() {
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
    testName: 'testOutline',
    pageName: 'outlinePage',
    pageUrl: 'MainAbility/pages/outline/OutlinePage',
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
    describe: 'SetOutline',
    setValue: {
      outline: ({ width: { top: '2px', right: '10px', bottom: '10px', left: '10px' }, color: Color.Red })
    },
    expectValue: {
      outline: "{\"style\":{\"left\":\"OutlineStyle.SOLID\",\"top\":\"OutlineStyle.SOLID\",\"right\":\"OutlineStyle.SOLID\",\"bottom\":\"OutlineStyle.SOLID\"},\"color\":{\"left\":\"#FFFF0000\",\"right\":\"#FFFF0000\",\"top\":\"#FFFF0000\",\"bottom\":\"#FFFF0000\"},\"width\":{\"left\":\"10.00px\",\"top\":\"2.00px\",\"right\":\"10.00px\",\"bottom\":\"10.00px\"},\"radius\":{\"topLeft\":\"0.00vp\",\"topRight\":\"0.00vp\",\"bottomLeft\":\"0.00vp\",\"bottomRight\":\"0.00vp\"}}"
    }
  }]

  /**
   * Create test suite.
   */
  describe('outlineTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      console.error('[' + data.caseTag + '] outlineTest.');
      console.error('[' + data.caseTag + '] outlineTest. data.testValue.setValue.outline : ' + data.testValue.setValue.outline);
      console.error('[' + data.viewObj.$attrs.outline + '] outlineTest. viewObj.$attrs.outline.');
      console.error('[' + data.testValue.expectValue.outline + '] outlineTest. data.testValue.expectValue.outline.');
      expect(data.viewObj.$attrs.outline).assertEqual(data.testValue.expectValue.outline);

    });
  })
}