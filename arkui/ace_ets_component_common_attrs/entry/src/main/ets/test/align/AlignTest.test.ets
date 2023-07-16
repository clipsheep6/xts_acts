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
 * Test of common attribute: align
 */
export default function alignTest() {
  //A list of components that support the align attribute, which is required.
  let supportView = [
    'Stack',
    'Button',
    'Marquee',
    'StepperItem',
    'Text',
    'TextArea',
    'TextInput'
  ]

  //Page related configuration, this parameter is required.
  let pageConfig = {
    testName: 'testAlign',
    pageName: 'AlignPage',
    pageUrl: 'MainAbility/pages/align/AlignPage'
  }

  //The data type to be tested, this parameter is required.
  let testValues = [{
    describe: 'SetTopStart',
    setValue: Alignment.TopStart,
    expectValue: {
      align: 'Alignment.TopStart'
    }
  }, {
    describe: 'SetTop',
    setValue: Alignment.Top,
    expectValue: {
      align: 'Alignment.Top'
    }
  }, {
    describe: 'SetTopEnd',
    setValue: Alignment.TopEnd,
    expectValue: {
      align: 'Alignment.TopEnd'
    }
  }, {
    describe: 'SetStart',
    setValue: Alignment.Start,
    expectValue: {
      align: 'Alignment.Start'
    }
  }, {
    describe: 'SetCenter',
    setValue: Alignment.Center,
    expectValue: {
      align: 'Alignment.Center'
    }
  }, {
    describe: 'SetEnd',
    setValue: Alignment.End,
    expectValue: {
      align: 'Alignment.End'
    }
  }, {
    describe: 'SetBottomStart',
    setValue: Alignment.BottomStart,
    expectValue: {
      align: 'Alignment.BottomStart'
    }
  }, {
    describe: 'SetBottom',
    setValue: Alignment.Bottom,
    expectValue: {
      align: 'Alignment.Bottom'
    }
  }, {
    describe: 'SetBottomEnd',
    setValue: Alignment.BottomEnd,
    expectValue: {
      align: 'Alignment.BottomEnd'
    }
  }]

  /**
   * Create test suite.
   */
  describe('AlignTest', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //Check test result.
      console.info('[' + data.caseTag + '] check align attr value.');
      expect(Utils.getComponentByKey(data.pageConfig.componentKey).$attrs.align)
        .assertEqual(data.testValue.expectValue.align);
    });
  })
}