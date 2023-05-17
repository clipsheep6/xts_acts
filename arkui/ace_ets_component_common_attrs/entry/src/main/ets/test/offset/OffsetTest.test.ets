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
import { describe, expect } from '@ohos/hypium'

export default function testOffset() {
  let supportView = ['Text','Button','Radio','Select','Blank','Checkbox','CheckboxGroup','DataPanel',
    'DatePicker','Divider','Gauge','LoadingProgress','Marquee','Navigation','Image','ImageAnimator',
    'AlphabetIndexer','NavRouter','Progress','QRCode','Rating','Search','Slider','TextArea','TextClock',
    'TextInput','TextPicker','TimePicker','Toggle','Badge','Column','Counter','Flex','Grid','GridRow',
    'List','Row','Scroll','SideBarContainer','Stack','Tabs','WaterFlow', 'Circle','Ellipse','Line',
    'Polyline','Polygon','Path','Rect','Shape','Panel','Refresh','TabContent','ListItem']

  //Custom params.
  let parentWidth = 300;
  let parentHeight = 400;
  let subassemblyWidth = 100;
  let subassemblyHeight = 100;
  let subassemblyCenter = {center: {anchor: '__container__', align: VerticalAlign.Center},
    middle: {anchor: '__container__', align: HorizontalAlign.Center}}

  let pageConfig = {
    testName: 'testOffset',
    pageName: 'OffsetPage',
    pageUrl: 'MainAbility/pages/offset/OffsetPage',
    parentWidth: parentWidth,
    parentHeight :parentHeight,
    subassemblyWidth:subassemblyWidth,
    subassemblyHeight:subassemblyHeight,
    subassemblyCenter:subassemblyCenter,
    parentComponentKey: 'parentComponentKey',
    ReferenceComponentKey: 'ReferenceComponentKey'
  }

  let testValues = [{
    describe: 'Number',
    setValue: {
      x: 50, y: 50
    },
    expectValue: {
      x: '50.00vp', y: '50.00vp', left: vp2px(50) , top: vp2px(50),
    }
  }, {
    describe: 'StringPx',
    setValue: {
      x: '150px', y: '150px'
    },
    expectValue: {
      x: '150.00px', y: '150.00px', left: 150 , top: 150,
    }
  }, {
    describe: 'StringPercent',
    setValue: {
      x: '50.00%', y: '50.00%'
    },
    expectValue: {
      x: '50.00%', y: '50.00%' ,left: vp2px(parentWidth*0.5) , top: vp2px(parentHeight*0.5),
    }
  }, {
    describe: 'Resource',
    setValue: {
      x: $r('app.float.50vp'), y: $r('app.float.50vp')
    },
    expectValue: {
      x: '50.00vp', y: '50.00vp',left: vp2px(50) , top: vp2px(50),
    }
  }]

  describe('testOffset', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {
      //Check test result.
      console.info('[' + data.caseTag + '] Restore the target component to its original position' + 'setValue : {x: 0, y: 0}');
      AttrsManager.change(data.caseTag, {
        x: 0, y: 0
      });
      await Utils.sleep(1000);

      console.info('[' + data.caseTag + '] get Target Component rect before position changed.');
      let initialPosition = Utils.getComponentRect(data.pageConfig.componentKey);
      console.info('[' + data.caseTag + '] get Reference Component rect before position changed.');
      let ReferenceRectAfter = Utils.getComponentRect(data.pageConfig.ReferenceComponentKey);
      console.info('[' + data.caseTag + '] get Parent Component rect before position changed.');
      let parentRectAfter = Utils.getComponentRect(data.pageConfig.parentComponentKey);

      console.info('[' + data.caseTag + '] setValue : ' + JSON.stringify(data.testValue.setValue));
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await Utils.sleep(1000);

      console.info('[' + data.caseTag + '] get TargetComponent rect after position changed.');
      let targetRectAfter = Utils.getComponentRect(data.pageConfig.componentKey);
      console.info('[' + data.caseTag + '] get referenceComponent rect after position changed.');
      let ReferenceRectBefore = Utils.getComponentRect(data.pageConfig.ReferenceComponentKey);
      console.info('[' + data.caseTag + '] get parentComponent rect after position changed.');
      let parentRectBefore = Utils.getComponentRect(data.pageConfig.parentComponentKey);

      console.info('[' + data.caseTag + '] check offset value.');
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      expect(viewObj.$attrs.offset.x).assertEqual(data.testValue.expectValue.x);
      expect(viewObj.$attrs.offset.y).assertEqual(data.testValue.expectValue.y);

      console.info('[' + data.caseTag + '] check actual position.');
      if (data.describe == 'StringPercent') {
        expect(Number(targetRectAfter.left - initialPosition.left).toFixed(2))
          .assertEqual(Number((parentRectBefore.right - parentRectBefore.left) * data.testValue.setValue.x).toFixed(2));
        expect(Number(targetRectAfter.top - initialPosition.top).toFixed(2))
          .assertEqual(Number((parentRectBefore.bottom - parentRectBefore.top) * data.testValue.setValue.y).toFixed(2));
      } else {
        expect(Number(targetRectAfter.left - initialPosition.left).toFixed(2))
          .assertEqual(Number(data.testValue.expectValue.left).toFixed(2));
        expect(Number(targetRectAfter.top - initialPosition.top).toFixed(2))
          .assertEqual(Number(data.testValue.expectValue.top).toFixed(2));
      }
      console.info('[' + data.caseTag + '] check parentComponent layout not changed.');
      expect(parentRectBefore.left).assertEqual(parentRectAfter.left);
      expect(parentRectBefore.top).assertEqual(parentRectAfter.top);
      expect(parentRectBefore.right).assertEqual(parentRectAfter.right);
      expect(parentRectBefore.bottom).assertEqual(parentRectAfter.bottom);
      console.info('[' + data.caseTag + '] check referenceComponent layout not changed.');
      expect(ReferenceRectAfter.left).assertEqual(ReferenceRectBefore.left);
      expect(ReferenceRectAfter.top).assertEqual(ReferenceRectBefore.top);
      expect(ReferenceRectAfter.right).assertEqual(ReferenceRectBefore.right);
      expect(ReferenceRectAfter.bottom).assertEqual(ReferenceRectBefore.bottom);

    })
  })
}