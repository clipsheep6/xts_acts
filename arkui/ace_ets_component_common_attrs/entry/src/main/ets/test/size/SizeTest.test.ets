import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'


export default function sizeTest() {
  let supportView = ['AlphabetIndexer',
    'Button',
    'BlankRow',
    'BlankColumn',
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
    'ScrollBar',
    'Rating',
    'Search',
    'RichText',
    'Select',
    'Slider',
    "Text",
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
    'ListItemGroup',
    'Panel',
    'Refresh',
    'Row',
    'RowSplit',
    'Scroll',
    'SideBarContainer',
    'Stack',
    'Swiper',
    'Tabs',
    'TabContent',
    'Circle',
    'Ellipse',
    'Polyline',
    'Polygon',
    'Path',
    'Rect',
    'Shape',
    'Line',
    'WaterFlow']
  let parentWidth = 300;
  let parentHeight = 300;
  let parentBackGroundColor = Color.Red;
  let widthExample = 50;
  let BackGroundColor = Color.Orange;

  let pageConfig = {
    testName: "SizeTest",
    pageName: "SizePage",
    pageUrl: "MainAbility/pages/size/SizePage",
    parentWidth: parentWidth,
    parentHeight: parentHeight,
    parentBackGroundColor: parentBackGroundColor,
    widthExample: widthExample,
    BackGroundColor: BackGroundColor,
    parentComponentKey: "parentComponentKey"
  }

  let testValues = [{
    describe: 'StringNumber',
    setValue: {
      width: 400, height: 100
    },
    expectValue: {
      WidthCompare: '400.00vp',HeightCompare: '100.00vp',
      width: vp2px(400), height: vp2px(100)
    }
  }, {
    describe: 'StringPercent',
    setValue: {
      width: '50%', height: '50%'
    },
    expectValue: {
      WidthCompare: '50.00%',HeightCompare: '50.00%',
      width: vp2px(parentHeight) * 0.5, height: vp2px(parentHeight) * 0.5
    }
  }, {
    describe: 'Resource',
    setValue: {
      width: $r('app.float.200vp'),
      height: $r('app.float.100vp')
    },
    expectValue: {
      WidthCompare: '200.00vp',HeightCompare: '100.00vp',
      width: vp2px(200),
      height: vp2px(100)
    }
  }, {
    describe: 'StringPx',
    setValue: {
      width: '600px',
      height: '600px'
    },
    expectValue: {
      WidthCompare: '600.00px',HeightCompare: '600.00px',
      width: 600, height: 600
    }
  }, {
    describe: 'SetStringWidth',
    setValue: {
      width: '600px'
    },
    expectValue: {
      WidthCompare: '600.00px',
      width: 600
    }
  },
    {
      describe: 'SetStringHeight',
      setValue: {
        height: '600px'
      },
      expectValue: {
        HeightCompare: '600.00px',
        height: 600
      }
    }]

  describe('SizeTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      let rect = Utils.getComponentRect(data.pageConfig.componentKey);
      let strJsonRectWidth = JSON.stringify(Math.abs(rect.left - rect.right));
      let strJsonRectHeight = JSON.stringify(Math.abs(rect.bottom - rect.top));
      console.info('[getComponentRect] strJsonRectWidth is: ' + strJsonRectWidth);
      console.info('[getComponentRect] strJsonRectHeight is: ' + strJsonRectHeight);
      if (data.testValue.describe == 'SetStringWidth') {
        expect(data.viewObj.$attrs.width).assertEqual(data.testValue.expectValue.WidthCompare)
        expect(JSON.parse(strJsonRectWidth)).assertEqual(data.testValue.expectValue.width);
      } else if (data.testValue.describe == 'SetStringHeight') {
        expect(data.viewObj.$attrs.height).assertEqual(data.testValue.expectValue.HeightCompare)
        expect(JSON.parse(strJsonRectHeight)).assertEqual(data.testValue.expectValue.height);
      } else {
        console.info('data.viewObj.$attrs.size.width:'+data.viewObj.$attrs.size)
        console.info('data.viewObj.$attrs.size.height:'+data.viewObj.$attrs.size)
        expect(data.viewObj.$attrs.width).assertEqual(data.testValue.expectValue.WidthCompare)
        expect(data.viewObj.$attrs.height).assertEqual(data.testValue.expectValue.HeightCompare)
        expect(JSON.parse(strJsonRectWidth)).assertEqual(data.testValue.expectValue.width);
        expect(JSON.parse(strJsonRectHeight)).assertEqual(data.testValue.expectValue.height);
      }
    })
  })
}