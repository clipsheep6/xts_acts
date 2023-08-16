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

import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

export default function gridSpanTest() {
  let supportView = [
    'Navigation',
    'NavRouter',
    'Navigator'
  ]

  //Custom params.
  let parentWidth = 320;
  let parentHeight = 200;
  let gutter = 10;
  let columns = 3;
  let pageConfig = {
    testName: 'testGridSpan',
    pageName: 'GridSpanPage',
    pageUrl: 'MainAbility/pages/gridSpan/GridSpanPage',
    parentHeight: parentHeight,
    parentWidth: parentWidth,
    gutter: gutter,
    columns: columns
  }

  let testValues = [{
    describe: 'SetNumber',
    setValue: 2,
    expectValue: {
      gridSpan: 2
    }
  }]

  describe('GridSpanTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      console.info('[' + data.caseTag + ']' + 'gridSpan is:' + data.viewObj.$attrs.gridSpan);
      expect(data.viewObj.$attrs.gridSpan)
        .assertEqual(data.testValue.expectValue.gridSpan);
    });
  })
}