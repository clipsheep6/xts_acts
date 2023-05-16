/**
 * Copyright (c) 2023-2030 iSoftStone Information Technology (Group) Co.,Ltd.
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

  let parentBackGroundColor = Color.Yellow
  let pageConfig = {
    testName: 'testPaddingContainer',
    pageName: 'PaddingContainerPage',
    pageUrl: 'MainAbility/pages/padding/PaddingContainerPage',
    parentBackGroundColor: parentBackGroundColor,
    parentComponentKey: 'parentComponentKey'
  }

  let testValues = [
    {
      describe: 'SetPadding',
      setValue: {
        padding: {
          top: 200,
          right: 100,
          bottom: 100,
          left: 100
        }
      },
      expectValue: {
        padding:{'top':'200.00vp', 'right':'100.00vp', 'bottom':'100.00vp', 'left':'100.00vp'},
        top: vp2px(200),
        right: vp2px(100),
        bottom: vp2px(100),
        left: vp2px(100)
      }
    }, {
    describe: 'SetPaddingTop',
    setValue: {
      padding: {
        top: 200
      }
    },
    expectValue: {
      padding: {
        'top': '200.00vp', 'right': '0.00vp', 'bottom': '0.00vp', 'left': '0.00vp'
      },
      top: vp2px(200),
      right: vp2px(0),
      bottom: vp2px(0),
      left: vp2px(0)
    }
  }, {
    describe: 'SetPaddingRight',
    setValue: {
      padding: {
        right: 200
      }
    },
    expectValue: {
      padding: {
        'top': '0.00vp', 'right': '200.00vp', 'bottom': '0.00vp', 'left': '0.00vp'
      },
      top: vp2px(0),
      right: vp2px(200),
      bottom: vp2px(0),
      left: vp2px(0)
    }
  }, {
    describe: 'SetPaddingBottom',
    setValue: {
      padding: {
        bottom: 200
      }
    },
    expectValue: {
      padding: {
        'top': '0.00vp', 'right': '0.00vp', 'bottom': '200.00vp', 'left': '0.00vp'
      },
      top: vp2px(0),
      right: vp2px(0),
      bottom: vp2px(200),
      left: vp2px(0)
    }
  }, {
    describe: "SetPaddingLeft",
    setValue: {
      padding: {
        left: 200
      }
    },
    expectValue: {
      padding: {
        'top': '0.00vp', 'right': '0.00vp', 'bottom': '0.00vp', 'left': '200.00vp'
      },
      top: vp2px(0),
      right: vp2px(0),
      bottom: vp2px(0),
      left: vp2px(200)
    }
  }]

  describe('PaddingContainerTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {

      AttrsManager.change(data.caseTag,{padding: { left: 0, right: 0,top:0,bottom:0 }});
      await Utils.sleep(1000);
      console.info('[' + data.caseTag + '] get referenceComponent rect after padding changed.');
      let referenceRectBefore = Utils.getComponentRect(data.pageConfig.componentKey);
      console.info('referenceRectBefore.left:'+referenceRectBefore.left);
      console.info('referenceRectBefore.right:'+referenceRectBefore.right);
      console.info('referenceRectBefore.top:'+referenceRectBefore.top);
      console.info('referenceRectBefore.bottom:'+referenceRectBefore.bottom);
      let referenceRectBeforeWidth=Math.abs(referenceRectBefore.right-referenceRectBefore.left);
      let referenceRectBeforeHeight=Math.abs(referenceRectBefore.bottom-referenceRectBefore.top);

      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      let referenceRectAfter = Utils.getComponentRect(data.pageConfig.componentKey);
      console.info('referenceRectAfter.left:'+referenceRectAfter.left);
      console.info('referenceRectAfter.right:'+referenceRectAfter.right);
      console.info('referenceRectAfter.top:'+referenceRectAfter.top);
      console.info('referenceRectAfter.bottom:'+referenceRectAfter.bottom);
      let referenceRectAfterWidth=Math.abs(referenceRectAfter.right-referenceRectAfter.left);
      let referenceRectAfterHeight=Math.abs(referenceRectAfter.bottom-referenceRectAfter.top);
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      expect(viewObj.$attrs.padding).assertEqual(JSON.stringify(data.testValue.expectValue.padding));
      console.info('referenceRectAfterWidth:'+referenceRectAfterWidth);
      console.info('referenceRectBeforeWidth:'+referenceRectBeforeWidth);
      console.info('referenceRectAfterHeight:'+referenceRectAfterHeight);
      console.info('referenceRectBeforeHeight:'+referenceRectBeforeHeight);
      expect(referenceRectAfterWidth - referenceRectBeforeWidth)
        .assertEqual(data.testValue.expectValue.left + data.testValue.expectValue.right)
      expect(referenceRectAfterHeight - referenceRectBeforeHeight)
        .assertEqual(data.testValue.expectValue.top + data.testValue.expectValue.bottom)


    })
  })
}