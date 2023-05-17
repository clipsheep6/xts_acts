/*
 * Copyright (c) 2023-2030 iSoftStone Information Technology (Group) Co.,Ltd.
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

export default function DefaultWebTest() {
  let supportView = ['Web']

  //Custom params.
  let parentWidth = 300;
  let parentHeight = 600;

  let pageConfig = {
    testName: 'testWebDefault',
    pageName: 'DefaultWebPage',
    pageUrl: 'MainAbility/pages/default/DefaultWebPage',
    targetGroupView: 'targetGroupView',
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: 'PaddingDefaultTest',
    expectValue: {
      padding: '0.00vp'
    }
  }, {
    describe: 'MarginDefaultTest',
    expectValue: {
      margin: '0.00vp'
    }
  }]

  describe('DefaultWebTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      if (data.testValue.describe == 'PaddingDefaultTest') {
        console.info('data.viewObj.$attrs.padding:' + data.viewObj.$attrs.padding)
        expect(data.viewObj.$attrs.padding).assertEqual(data.testValue.expectValue.padding);
      }
      if (data.testValue.describe == 'MarginDefaultTest') {
        console.info('data.viewObj.$attrs.margin:' + data.viewObj.$attrs.margin)
        expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);
      }
    });
  })
}