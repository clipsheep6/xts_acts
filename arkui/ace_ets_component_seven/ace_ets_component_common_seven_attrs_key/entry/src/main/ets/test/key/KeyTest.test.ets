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
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';

/**
 * Test of common attribute: key
 */
export default function keyTest() {
  //A list of components that support padding attributes is required.
  let supportView = [
    'Button',
  ]

  //Page related configuration, this parameter is required.
  let targetComponentWkeyth = 200;
  let targetComponentHeight = 200;
  let parentWkeyth = 320;
  let parentHeight = 200;
  let gutter = 10;
  let columns = 3;
  let pageConfig = {
    testName: 'testKey',
    pageName: 'KeyPage',
    pageUrl: 'MainAbility/pages/key/KeyPage',
    targetComponentHeight: targetComponentHeight,
    targetComponentWkeyth: targetComponentWkeyth,
    parentHeight: parentHeight,
    parentWkeyth: parentWkeyth,
    referenceComponentKey: 'referenceComponentKey',
    parentComponentKey: 'parentComponentKey',
    gutter: gutter,
    columns: columns
  }

  //The data type to be tested, this parameter is required.
  let testValues = [{
    describe: 'SetKey',
    setValue: {
      key: 'text'
    },
    expectValue: {
      key: 'text'
    }
  }]

  /**
   * Create test suite.
   */
  describe('keyTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      console.info('[' + data.caseTag + ']' + 'key is:' + data.viewObj.$attrs.key);
      expect(data.viewObj.$attrs.key)
        .assertEqual(data.testValue.expectValue.key);
    });
  })
}