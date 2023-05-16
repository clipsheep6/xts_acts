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

import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';

export default function constraintSizeTest() {
  let supportView = [
    'AlphabetIndexer',
    'Button',
    'Blank',
    'Checkbox',
    'CheckboxGroup',
    'DataPanel',
    'DatePicker',
    'Divider',
    'Gauge',
    'Image',
    'ImageAnimator',
    'LoadingProgress',
    'Marquee',
    'Navigation',
    'Progress',
    'QRCode',
    'Radio',
    'Rating',
    'RichText',
    'ScrollBar',
    'Search',
    'Select',
    'Slider',
    'Text',
    'TextArea',
    'TextClock',
    'TextInput',
    'TextPicker',
    'TextTimer',
    'TimePicker',
    'Toggle',
    'Badge',
    'Column',
    'ColumnSplit',
    'Counter',
    'Flex',
    'GridRow',
    'Grid',
    'List',
    'ListItem',
    // 'ListItemGroup',
    'Panel',
    'Refresh',
    'Row',
    'RowSplit',
    'Scroll',
    'SideBarContainer',
    'Stack',
    'Swiper',
    'Tabs',
    'Circle',
    'Ellipse',
    'Polyline',
    'Polygon',
    'Path',
    'Rect',
    'Shape',
    'Line',
    'TabContent',
    'WaterFlow'
  ]
  //Custom params.
  let childWidth = 200;
  let childHeight = 200;

  let pageConfig = {
    testName: 'testConstraintSize',
    pageName: 'ConstraintSizePage',
    pageUrl: 'MainAbility/pages/constraintSize/ConstraintSizePage',
    childHeight: childHeight,
    childWidth: childWidth,
    referenceComponentKey: 'referenceComponentKey'
  }

  let testValues = [{
    describe: 'SetNumber',
    setValue: {
      minWidth: 0,
      maxWidth: 300,
      minHeight: 0,
      maxHeight: 300
    },
    expectValue: {
      constraintSize: {
        'minWidth': '0.00vp', 'minHeight': '0.00vp', 'maxWidth': '300.00vp', 'maxHeight': '300.00vp'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetStringPx',
    setValue: {
      minWidth: '0px',
      maxWidth: '900px',
      minHeight: '0px',
      maxHeight: '900px'
    },
    expectValue: {
      constraintSize: {
        'minWidth': '0.00px', 'minHeight': '0.00px', 'maxWidth': '900.00px', 'maxHeight': '900.00px'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetStringPercent',
    setValue: {
      minWidth: 0,
      maxWidth: '50%',
      minHeight: 0,
      maxHeight: '50%'
    },
    expectValue: {
      constraintSize: {
        'minWidth': '0.00vp', 'minHeight': '0.00vp', 'maxWidth': '50.00%', 'maxHeight': '50.00%'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetResource',
    setValue: {
      minWidth: 0,
      maxWidth: $r('app.float.300vp'),
      minHeight: 0,
      maxHeight: $r('app.float.300vp')
    },
    expectValue: {
      constraintSize: {
        'minWidth': '0.00vp', 'minHeight': '0.00vp', 'maxWidth': '300.00vp', 'maxHeight': '300.00vp'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetMinUnderMaxAndPass200',
    setValue: {
      minWidth: 250,
      maxWidth: 300,
      minHeight: 250,
      maxHeight: 300
    },
    expectValue: {
      constraintSize: {
        'minWidth': '250.00vp', 'minHeight': '250.00vp', 'maxWidth': '300.00vp', 'maxHeight': '300.00vp'
      },
      width: vp2px(300),
      height: vp2px(300)
    }
  }, {
    describe: 'SetMinUnderMaxAndUnder200',
    setValue: {
      minWidth: 100,
      maxWidth: 150,
      minHeight: 100,
      maxHeight: 150
    },
    expectValue: {
      constraintSize: {
        'minWidth': '100.00vp', 'minHeight': '100.00vp', 'maxWidth': '150.00vp', 'maxHeight': '150.00vp'
      },
      width: vp2px(150),
      height: vp2px(150)
    }
  }, {
    describe: 'SetMinPassMaxAndPass200',
    setValue: {
      minWidth: 300,
      maxWidth: 250,
      minHeight: 300,
      maxHeight: 250
    },
    expectValue: {
      constraintSize: {
        'minWidth': '300.00vp', 'minHeight': '300.00vp', 'maxWidth': '250.00vp', 'maxHeight': '250.00vp'
      },
      width: vp2px(300),
      height: vp2px(300)
    }
  }, {
    describe: 'SetMinPassMaxAndUnder200',
    setValue: {
      minWidth: 150,
      maxWidth: 100,
      minHeight: 150,
      maxHeight: 100
    },
    expectValue: {
      constraintSize: {
        'minWidth': '150.00vp', 'minHeight': '150.00vp', 'maxWidth': '100.00vp', 'maxHeight': '100.00vp'
      },
      width: vp2px(150),
      height: vp2px(150)
    }
  }, {
    describe: 'SetMinUnderMaxAndMaxEqual200',
    setValue: {
      minWidth: 100,
      maxWidth: 200,
      minHeight: 100,
      maxHeight: 200
    },
    expectValue: {
      constraintSize: {
        'minWidth': '100.00vp', 'minHeight': '100.00vp', 'maxWidth': '200.00vp', 'maxHeight': '200.00vp'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetMinPassMaxAndMinEqual200',
    setValue: {
      minWidth: 200,
      maxWidth: 100,
      minHeight: 200,
      maxHeight: 100
    },
    expectValue: {
      constraintSize: {
        'minWidth': '200.00vp', 'minHeight': '200.00vp', 'maxWidth': '100.00vp', 'maxHeight': '100.00vp'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetMinUnderMaxAndMinEqual200',
    setValue: {
      minWidth: 200,
      maxWidth: 300,
      minHeight: 200,
      maxHeight: 300
    },
    expectValue: {
      constraintSize: {
        'minWidth': '200.00vp', 'minHeight': '200.00vp', 'maxWidth': '300.00vp', 'maxHeight': '300.00vp'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetMinPassMaxAndMaxEqual200',
    setValue: {
      minWidth: 300,
      maxWidth: 200,
      minHeight: 300,
      maxHeight: 200
    },
    expectValue: {
      constraintSize: {
        'minWidth': '300.00vp', 'minHeight': '300.00vp', 'maxWidth': '200.00vp', 'maxHeight': '200.00vp'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }, {
    describe: 'SetMinEqualMaxAndEqual200',
    setValue: {
      minWidth: 200,
      maxWidth: 200,
      minHeight: 200,
      maxHeight: 200
    },
    expectValue: {
      constraintSize: {
        'minWidth': '200.00vp', 'minHeight': '200.00vp', 'maxWidth': '200.00vp', 'maxHeight': '200.00vp'
      },
      width: vp2px(200),
      height: vp2px(200)
    }
  }]

  describe('ConstraintSizeTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      let rect = Utils.getComponentRect(data.pageConfig.componentKey);
      if (data.pageConfig.componentKey == 'TabContent') {
        let referenceRect = Utils.getComponentRect(data.pageConfig.referenceComponentKey);
        //计算高度
        let height = rect.bottom - referenceRect.top
        //计算宽度
        let width = rect.right - referenceRect.left
        console.info('height is: ' + height);
        console.info('width is: ' + width);
        //断言
        console.info('constraintSize is ：' + data.viewObj.$attrs.constraintSize);
        expect(data.viewObj.$attrs.constraintSize)
          .assertEqual(JSON.stringify(data.testValue.expectValue.constraintSize));
        expect(width).assertEqual(data.testValue.expectValue.width);
        expect(height).assertEqual(data.testValue.expectValue.height);
      } else {
        //计算高度
        let height = rect.bottom - rect.top
        //计算宽度
        let width = rect.right - rect.left
        console.info('getComponentRect is Json_Rect.right ：' + JSON.stringify(rect.right));
        console.info('getComponentRect is Json_Rect.left :' + JSON.stringify(rect.left));
        console.info('getComponentRect is Json_Rect.bottom :' + JSON.stringify(rect.bottom));
        console.info('getComponentRect is Json_Rect.top :' + JSON.stringify(rect.top));
        console.info('getComponentRect is width :' + JSON.stringify(width));
        console.info('getComponentRect is height :' + JSON.stringify(height));
        console.info('constraintSize is ：' + data.viewObj.$attrs.constraintSize);
        //断言
        expect(data.viewObj.$attrs.constraintSize)
          .assertEqual(JSON.stringify(data.testValue.expectValue.constraintSize));
        expect(width).assertEqual(data.testValue.expectValue.width);
        expect(height).assertEqual(data.testValue.expectValue.height);
      }
    });
  })
}