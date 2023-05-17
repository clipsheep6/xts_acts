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
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

export default function paddingTest() {
  let supportView = [
    'Badge',
   'Column',
   'Counter',
   'GridRow',
   'Grid',
   'List',
   'ListItem',
   'Panel',
   'Refresh',
   'Row',
   'Scroll',
   'SideBarContainer',
   'Stack',
   'Swiper',
   'Tabs',
   'TabContent',
   'WaterFlow'
  ]
  let parentWidth = 300;
  let parentHeight = 300;
  let parentBackGroundColor = Color.Yellow

  let pageConfig = {
    testName: "testPaddingContainerLength",
    pageName: "PaddingContainerPageLength",
    pageUrl: "MainAbility/pages/padding/PaddingContainerPageLength",
    parentBackGroundColor: parentBackGroundColor,
    parentComponentKey: "parentComponentKey",
    parentHeight: parentHeight,
    parentWidth: parentWidth,
  }

  let testValues = [{
    describe: 'SetNumber',
    setValue: {
      padding: 100
    },
    expectValue: {
      padding: '100.00vp',
      top: vp2px(100),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  }, {
    describe: 'SetStringPx',
    setValue: {
      padding: '200px'
    },
    expectValue: {
      padding: '200.00px',
      top: 200,
      right: 200,
      bottom: 200,
      left: 200
    }
  }, {
    describe: 'SetResource',
    setValue: {
      padding: $r('app.float.100vp'),
    },
    expectValue: {
      padding: '100.00vp',
      top: vp2px(100),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  }, {
    describe: 'SetStringPercent',
    setValue: {
      padding: '50%',
    },
    expectValue: {
      padding: '50.00%'
    }
  }]
  let paddingLength = {
    padding: 0
  }
  describe('PaddingContainerLengthTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {
      AttrsManager.change(data.caseTag, paddingLength);
      await Utils.sleep(1000);
      console.info('[' + data.caseTag + '] get referenceComponent rect after padding changed.');
      let viewObjs = Utils.getComponentByKey(data.pageConfig.componentKey);
      console.info("viewObjs.$attrs.padding" + viewObjs.$attrs.padding)
      let referenceRectBefore = Utils.getComponentRect(data.pageConfig.componentKey);
      console.info('referenceRectBefore.left:' + referenceRectBefore.left);
      console.info('referenceRectBefore.right:' + referenceRectBefore.right);
      console.info('referenceRectBefore.top:' + referenceRectBefore.top);
      console.info('referenceRectBefore.bottom:' + referenceRectBefore.bottom);
      let referenceRectBeforeWidth = Math.abs(referenceRectBefore.right - referenceRectBefore.left);
      let referenceRectBeforeHeight = Math.abs(referenceRectBefore.bottom - referenceRectBefore.top);
      console.info("data.testValue.setValue.padding:" + data.testValue.setValue.padding)
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      let referenceRectAfter = Utils.getComponentRect(data.pageConfig.componentKey);
      console.info('referenceRectAfter.left:' + referenceRectAfter.left);
      console.info('referenceRectAfter.right:' + referenceRectAfter.right);
      console.info('referenceRectAfter.top:' + referenceRectAfter.top);
      console.info('referenceRectAfter.bottom:' + referenceRectAfter.bottom);
      let referenceRectAfterWidth = Math.abs(referenceRectAfter.right - referenceRectAfter.left);
      let referenceRectAfterHeight = Math.abs(referenceRectAfter.bottom - referenceRectAfter.top);

      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      expect(viewObj.$attrs.padding).assertEqual(JSON.parse(JSON.stringify(data.testValue.expectValue.padding)));
      console.info('referenceRectAfterWidth:' + referenceRectAfterWidth);
      console.info('referenceRectBeforeWidth:' + referenceRectBeforeWidth);
      console.info('referenceRectAfterHeight:' + referenceRectAfterHeight);
      console.info('referenceRectBeforeHeight:' + referenceRectBeforeHeight);
      if (data.testValue.describe == 'SetStringPercent') {
        let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
        expect(viewObj.$attrs.padding).assertEqual(JSON.parse(JSON.stringify(data.testValue.expectValue.padding)));
        expect(referenceRectAfterWidth - referenceRectBeforeWidth)
          .assertEqual(vp2px(parentWidth)-referenceRectBeforeWidth)
        expect(referenceRectAfterHeight - referenceRectBeforeHeight)
          .assertEqual(vp2px(parentWidth)-referenceRectBeforeHeight)
      }else {
        expect(referenceRectAfterWidth - referenceRectBeforeWidth)
          .assertEqual(data.testValue.expectValue.left + data.testValue.expectValue.right)
        expect(referenceRectAfterHeight - referenceRectBeforeHeight)
          .assertEqual(data.testValue.expectValue.top + data.testValue.expectValue.bottom)
      }
    })
  })
}