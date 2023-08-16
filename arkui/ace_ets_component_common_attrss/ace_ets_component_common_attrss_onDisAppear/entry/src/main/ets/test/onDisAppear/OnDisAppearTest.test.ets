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
import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium';


export default function onDisAppearTest() {

  let supportView = [
    //'Navigation',
    //'NavRouter',
    //'NavDestination',
    'Navigator'
  ]

  //Custom params.
  let compareTextKey = 'compareTextKey'
  let targetWidth = 60;
  let targetHeight = 60;

  let pageConfig = {
    testName: 'testOnDisAppear',
    pageName: 'OnDisAppearPage',
    pageUrl: 'MainAbility/pages/onDisAppear/OnDisAppearPage',
    targetGroupView: 'targetGroupView',
    compareTextKey: compareTextKey,
    targetWidth: targetWidth,
    targetHeight: targetHeight
  }

  //Test content and expected results
  let testValues = [{
    describe: '',
    setValue: {
      isShow: false
    },
    expectValue: {
      changeDisAppear: 'changeDisAppear'
    }
  }]

  describe('OnDisAppearTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {
      //Set value
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await  Utils.sleep(2000);
      //Get text content,check content is changeDisAppear
      let compareTextObj = Utils.getComponentByKey(data.pageConfig.compareTextKey);
      console.info('compareTextObj.$attrs.content: ' + compareTextObj.$attrs.content);
      expect(compareTextObj.$attrs.content).assertEqual(data.testValue.expectValue.changeDisAppear);
    });
  })
}