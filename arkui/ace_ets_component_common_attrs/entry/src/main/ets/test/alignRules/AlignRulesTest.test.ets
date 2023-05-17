/*
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
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

export default function testAlignRules() {
  let supportView = ['Text','Button', 'Radio', 'Select','Checkbox','CheckboxGroup','DataPanel','DatePicker', 'Divider',
    'Gauge','LoadingProgress','Marquee','Navigation','Image','ImageAnimator','AlphabetIndexer', 'Progress','QRCode',
    'Rating','Search','Slider','TextArea','TextClock','TextInput','TextPicker', 'TimePicker','Toggle','Badge','Column',
    'Counter','Flex','Grid','GridRow','List','Row','Scroll','SideBarContainer','Stack', 'Tabs','WaterFlow','Circle',
    'Ellipse','Line', 'Polyline','Polygon','Path','Rect','Shape','Panel','Refresh']

  //Custom params.
  let parentWidth = 300;
  let parentHeight = 300;
  let subassemblyWidth = 100;
  let subassemblyHeight = 100;
  let subassemblyCenter = {center: {anchor: '__container__', align: VerticalAlign.Center},
    middle: {anchor: '__container__', align: HorizontalAlign.Center}}

  let pageConfig = {
    testName: 'testAlignRules',
    pageName: 'AlignRulesPage',
    pageUrl: 'MainAbility/pages/alignRules/AlignRulesPage',
    parentWidth: parentWidth,
    parentHeight :parentHeight,
    subassemblyWidth:subassemblyWidth,
    subassemblyHeight:subassemblyHeight,
    subassemblyCenter:subassemblyCenter,
    parentComponentKey: 'parentComponentKey',
    referenceComponentKey:'referenceComponentKey'
  }

  let testValues = [{
    describe: 'ParentAlignTopLeftJustifying',
    setValue: {
      left: {anchor: '__container__', align: HorizontalAlign.Start},
      top: {anchor: '__container__', align: VerticalAlign.Top}
    },
    expectValue: {
        left: {anchor: '__container__', align: HorizontalAlign.Start},
        top: {anchor: '__container__', align: VerticalAlign.Top}
    }
  },{
    describe: 'ParentAlignTopHorizontalCenter',
    setValue: {
      middle: {anchor: '__container__', align: HorizontalAlign.Center},
      top: {anchor: '__container__', align: VerticalAlign.Top}
    },
    expectValue: {
        middle: {anchor: '__container__', align: HorizontalAlign.Center},
        top: {anchor: '__container__', align: VerticalAlign.Top}
    }
  },{
    describe: 'ParentAlignTopRightAlignment',
    setValue: {
      right: {anchor: '__container__', align: HorizontalAlign.End},
      top: {anchor: '__container__', align: VerticalAlign.Top}
    },
    expectValue: {
        right: {anchor: '__container__', align: HorizontalAlign.End},
        top: {anchor: '__container__', align: VerticalAlign.Top}
    }
  },{
    describe: 'ParentVerticalCenterLeftJustifying',
    setValue: {
      left: {anchor: '__container__', align: HorizontalAlign.Start},
      center:{anchor: '__container__', align: VerticalAlign.Center}
    },
    expectValue: {
        left: {anchor: '__container__', align: HorizontalAlign.Start},
        center:{anchor: '__container__', align: VerticalAlign.Center}
    }
  },{
    describe: 'ParentVerticalCenterHorizontally',
    setValue: {
      middle: {anchor: '__container__', align: HorizontalAlign.Center},
      center:{anchor: '__container__', align: VerticalAlign.Center}
    },
    expectValue: {
        middle: {anchor: '__container__', align: HorizontalAlign.Center},
        center:{anchor: '__container__', align: VerticalAlign.Center}
    }
  },{
    describe: 'ParentVerticalCenterRightAlignment',
    setValue: {
      right: {anchor: '__container__', align: HorizontalAlign.End},
      center:{anchor: '__container__', align: VerticalAlign.Center}
    },
    expectValue: {
        right: {anchor: '__container__', align: HorizontalAlign.End},
        center:{anchor: '__container__', align: VerticalAlign.Center}
    }
  },{
    describe: 'ParentAlignmentLeftJustifying',
    setValue: {
      left: {anchor: '__container__', align: HorizontalAlign.Start},
      bottom:{anchor: '__container__', align: VerticalAlign.Bottom}
    },
    expectValue: {
        left: {anchor: '__container__', align: HorizontalAlign.Start},
        bottom:{anchor: '__container__', align: VerticalAlign.Bottom}
    }
  },{
    describe: 'ParentAlignmentLeftJustifyingHorizontally',
    setValue: {
      middle: {anchor: '__container__', align: HorizontalAlign.Center},
      bottom:{anchor: '__container__', align: VerticalAlign.Bottom}
    },
    expectValue: {
        middle: {anchor: '__container__', align: HorizontalAlign.Center},
        bottom:{anchor: '__container__', align: VerticalAlign.Bottom}
    }
  },{
    describe: 'ParentAlignmentLeftJustifyingRightAlignment',
    setValue: {
      right: {anchor: '__container__', align: HorizontalAlign.End},
      bottom:{anchor: '__container__', align: VerticalAlign.Bottom}
    },
    expectValue: {
        right: {anchor: '__container__', align: HorizontalAlign.End},
        bottom:{anchor: '__container__', align: VerticalAlign.Bottom}
    }
  },{
    describe: 'SubassemblyAlignTopLeftJustifying',
    setValue: {
      right: {anchor: 'button', align: HorizontalAlign.Start},
      bottom:{anchor: 'button', align: VerticalAlign.Top}
    },
    expectValue: {
        right: {anchor: 'button', align: HorizontalAlign.Start},
        bottom:{anchor: 'button', align: VerticalAlign.Top}
    }
  },{
    describe: 'SubassemblyAlignTopHorizontalCenter',
    setValue: {
      right: {anchor: 'button', align: HorizontalAlign.End},
      bottom:{anchor: 'button', align: VerticalAlign.Top}
    },
    expectValue: {
        right: {anchor: 'button', align: HorizontalAlign.End},
        bottom:{anchor: 'button', align: VerticalAlign.Top}
    }
  },{
    describe: 'SubassemblyAlignTopRightAlignment',
    setValue: {
      left: {anchor: 'button', align: HorizontalAlign.End},
      bottom:{anchor: 'button', align: VerticalAlign.Top}
    },
    expectValue: {
        left: {anchor: 'button', align: HorizontalAlign.End},
        bottom:{anchor: 'button', align: VerticalAlign.Top}
    }
  },{
    describe: 'SubassemblyVerticalCenterLeftJustifying',
    setValue: {
      right: {anchor: 'button', align: HorizontalAlign.Start},
      top:{anchor: 'button', align: VerticalAlign.Top}
    },
    expectValue: {
        right: {anchor: 'button', align: HorizontalAlign.Start},
        top:{anchor: 'button', align: VerticalAlign.Top}
    }
  },{
    describe: 'SubassemblyVerticalCenterHorizontally',
    setValue: {
      right: {anchor: 'button', align: HorizontalAlign.End},
      top:{anchor: 'button', align: VerticalAlign.Top}
    },
    expectValue: {
        right: {anchor: 'button', align: HorizontalAlign.End},
        top:{anchor: 'button', align: VerticalAlign.Top}
    }
  },{
    describe: 'SubassemblyVerticalCenterRightAlignment',
    setValue: {
      left: {anchor: 'button', align: HorizontalAlign.End},
      top:{anchor: 'button', align: VerticalAlign.Top}
    },
    expectValue: {
        left: {anchor: 'button', align: HorizontalAlign.End},
        top:{anchor: 'button', align: VerticalAlign.Top}
    }
  },{
    describe: 'SubassemblyAlignmentLeftJustifying',
    setValue: {
      right: {anchor: 'button', align: HorizontalAlign.Start},
      top:{anchor: 'button', align: VerticalAlign.Bottom}
    },
    expectValue: {
        right: {anchor: 'button', align: HorizontalAlign.Start},
        top:{anchor: 'button', align: VerticalAlign.Bottom}
    }
  },{
    describe: 'SubassemblyAlignmentLeftJustifyingHorizontally',
    setValue: {
      right: {anchor: 'button', align: HorizontalAlign.End},
      top:{anchor: 'button', align: VerticalAlign.Bottom}
    },
    expectValue: {
        right: {anchor: 'button', align: HorizontalAlign.End},
        top:{anchor: 'button', align: VerticalAlign.Bottom}
    }
  },{
    describe: 'SubassemblyAlignmentLeftJustifyingRightAlignment',
    setValue: {
      left: {anchor: 'button', align: HorizontalAlign.End},
      top:{anchor: 'button', align: VerticalAlign.Bottom}
    },
    expectValue: {
        left: {anchor: 'button', align: HorizontalAlign.End},
        top:{anchor: 'button', align: VerticalAlign.Bottom}
    }
  }]

  describe('testAlignRules', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //Check test result.
      console.info('[' + data.caseTag + '] get TargetComponent rect after position changed.');
      let rec = Utils.getComponentRect(data.pageConfig.componentKey);
      console.info('[' + data.caseTag + '] get parentComponent rect after position changed.');
      let recParent = Utils.getComponentRect(data.pageConfig.parentComponentKey);
      console.info('[' + data.caseTag + '] get referenceComponent rect after position changed.');
      let recReference = Utils.getComponentRect(data.pageConfig.referenceComponentKey);
      console.info('[' + data.caseTag + '] check alignRules value.');
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      if (data.describe == 'ParentAlignTopLeftJustifying') {
        expect(rec.left).assertEqual(recParent.left)
        expect(rec.top).assertEqual(recParent.top)
        expect(viewObj.$attrs.alignRules.left).assertEqual(data.testValue.expectValue.left);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'ParentAlignTopHorizontalCenter') {
        expect(rec.left).assertEqual(recReference.left)
        expect(rec.top).assertEqual(recParent.top)
        expect(viewObj.$attrs.alignRules.middle).assertEqual(data.testValue.expectValue.middle);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'ParentAlignTopRightAlignment') {
        expect(rec.left).assertEqual(recReference.right)
        expect(rec.top).assertEqual(recParent.top)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'ParentVerticalCenterLeftJustifying') {
        expect(rec.left).assertEqual(recParent.left)
        expect(rec.top).assertEqual(recReference.top)
        expect(viewObj.$attrs.alignRules.left).assertEqual(data.testValue.expectValue.left);
        expect(viewObj.$attrs.alignRules.center).assertEqual(data.testValue.expectValue.center);
      } else if (data.describe == 'ParentVerticalCenterHorizontally') {
        expect(rec.left).assertEqual(recReference.left)
        expect(rec.top).assertEqual(recReference.top)
        expect(viewObj.$attrs.alignRules.middle).assertEqual(data.testValue.expectValue.middle);
        expect(viewObj.$attrs.alignRules.center).assertEqual(data.testValue.expectValue.center);
      } else if (data.describe == 'ParentVerticalCenterRightAlignment') {
        expect(rec.left).assertEqual(recReference.right)
        expect(rec.top).assertEqual(recReference.top)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.center).assertEqual(data.testValue.expectValue.center);
      } else if (data.describe == 'ParentAlignmentLeftJustifying') {
        expect(rec.left).assertEqual(recParent.left)
        expect(rec.top).assertEqual(recReference.bottom)
        expect(viewObj.$attrs.alignRules.left).assertEqual(data.testValue.expectValue.left);
        expect(viewObj.$attrs.alignRules.bottom).assertEqual(data.testValue.expectValue.bottom);
      } else if (data.describe == 'ParentAlignmentLeftJustifyingHorizontally') {
        expect(rec.left).assertEqual(recReference.left)
        expect(rec.top).assertEqual(recReference.bottom)
        expect(viewObj.$attrs.alignRules.middle).assertEqual(data.testValue.expectValue.middle);
        expect(viewObj.$attrs.alignRules.bottom).assertEqual(data.testValue.expectValue.bottom);
      } else if (data.describe == 'ParentAlignmentLeftJustifyingRightAlignment') {
        expect(rec.left).assertEqual(recReference.right)
        expect(rec.top).assertEqual(recReference.bottom)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.bottom).assertEqual(data.testValue.expectValue.bottom);
      } else if (data.describe == 'SubassemblyAlignTopLeftJustifying') {
        expect(rec.left).assertEqual(recParent.left)
        expect(rec.top).assertEqual(recParent.top)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.bottom).assertEqual(data.testValue.expectValue.bottom);
      } else if (data.describe == 'SubassemblyAlignTopHorizontalCenter') {
        expect(rec.left).assertEqual(recReference.left)
        expect(rec.top).assertEqual(recParent.top)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.bottom).assertEqual(data.testValue.expectValue.bottom);
      } else if (data.describe == 'SubassemblyAlignTopRightAlignment') {
        expect(rec.left).assertEqual(recReference.right)
        expect(rec.top).assertEqual(recParent.top)
        expect(viewObj.$attrs.alignRules.left).assertEqual(data.testValue.expectValue.left);
        expect(viewObj.$attrs.alignRules.bottom).assertEqual(data.testValue.expectValue.bottom);
      } else if (data.describe == 'SubassemblyVerticalCenterLeftJustifying') {
        expect(rec.left).assertEqual(recParent.left)
        expect(rec.top).assertEqual(recReference.top)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'SubassemblyVerticalCenterHorizontally') {
        expect(rec.left).assertEqual(recReference.left)
        expect(rec.top).assertEqual(recReference.top)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'SubassemblyVerticalCenterRightAlignment') {
        expect(rec.left).assertEqual(recReference.right)
        expect(rec.top).assertEqual(recReference.top)
        expect(viewObj.$attrs.alignRules.left).assertEqual(data.testValue.expectValue.left);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'SubassemblyAlignmentLeftJustifying') {
        expect(rec.left).assertEqual(recParent.left)
        expect(rec.top).assertEqual(recReference.bottom)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'SubassemblyAlignmentLeftJustifyingHorizontally') {
        expect(rec.left).assertEqual(recReference.left)
        expect(rec.top).assertEqual(recReference.bottom)
        expect(viewObj.$attrs.alignRules.right).assertEqual(data.testValue.expectValue.right);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      } else if (data.describe == 'SubassemblyAlignmentLeftJustifyingRightAlignment') {
        expect(rec.left).assertEqual(recReference.right)
        expect(rec.top).assertEqual(recReference.bottom)
        expect(viewObj.$attrs.alignRules.left).assertEqual(data.testValue.expectValue.left);
        expect(viewObj.$attrs.alignRules.top).assertEqual(data.testValue.expectValue.top);
      }
    })
  })
}