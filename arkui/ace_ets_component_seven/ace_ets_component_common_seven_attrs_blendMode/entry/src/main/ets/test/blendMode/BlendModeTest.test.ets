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
 * Test of common attribute: blendMode
 */
export default function blendModeTest() {
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
    testName: 'testBlendMode',
    pageName: 'blendModePage',
    pageUrl: 'MainAbility/pages/blendMode/BlendModePage',
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
    describe: 'SetBlendMode',
    setValue: {
      blendMode: BlendMode.COLOR_DODGE
    },
    expectValue: {
      blendMode: BlendMode.COLOR_DODGE
    }
  }]

  /**
   * Create test suite.
   */
  describe('blendModeTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      console.info('[' + data.caseTag + '] blendModeTest.');
      console.info('[' + data.caseTag + '] blendModeTest. data.testValue.setValue.blendMode : ' + data.testValue.setValue.blendMode);
      console.info('[' + data.viewObj.$attrs.blendMode + '] blendModeTest. viewObj.$attrs.blendMode.');
      console.info('[' + data.testValue.expectValue.blendMode + '] blendModeTest. data.testValue.expectValue.blendMode.');
      expect(data.viewObj.$attrs.blendMode).assertEqual(data.testValue.expectValue.blendMode);

    });
  })
}