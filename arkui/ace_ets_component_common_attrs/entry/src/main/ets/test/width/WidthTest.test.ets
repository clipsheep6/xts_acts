import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'


export default function widthTest() {
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
    'Text',
    'TextArea',
    'TextClock',
    'TextInput',
    'TextPicker',
    'TextTimer',
    'TimePicker',
    'Toggle',
    'Web',
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
  let parentBackGroundColor = Color.Red
  let widthExample = 50
  let BackGroundColor = Color.Orange

  let pageConfig = {
    testName: "WidthTest",
    pageName: "WidthPage",
    pageUrl: "MainAbility/pages/width/WidthPage",
    parentWidth: parentWidth,
    parentHeight: parentHeight,
    parentBackGroundColor: parentBackGroundColor,
    widthExample: widthExample,
    BackGroundColor: BackGroundColor,
    parentComponentKey: "parentComponentKey"
  }

  let testValues = [{
    describe: 'ExceedParent',
    setValue: {
      width: 400
    },
    expectValue: {
      WidthCompare: '400.00vp',
      width: vp2px(400),ExceedParent:true
    }
  }, {
    describe: 'StringPercent',
    setValue: {
      width: '50%'
    },
    expectValue: {
      WidthCompare: '50.00%',
      width: vp2px(parentWidth) * 0.5
    }
  }, {
    describe: 'Resource',
    setValue: {
      width: $r('app.float.200vp')
    },
    expectValue: {
      WidthCompare: '200.00vp',
      width: vp2px(200)
    }
  }, {
    describe: 'StringPx',
    setValue: {
      width: '600px'
    },
    expectValue: {
      WidthCompare: '600.00px',
      width: 600
    }
  }]


  describe('WidthTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      let Rect = Utils.getComponentRect(data.pageConfig.componentKey);
      let rectParent = Utils.getComponentRect(data.pageConfig.parentComponentKey)
      console.info('rectParent.left:' + rectParent.left)
      console.info('rectParent.right:' + rectParent.right)
      console.info('rectParent.top:' + rectParent.top)
      console.info('rectParent.bottom:' + rectParent.bottom)
      if ((rectParent.left < Rect.left || rectParent.right < Rect.right) && data.testValue.describe == 'SetNumber') {
        let strJsonRectWidth = JSON.stringify(Math.abs(Rect.left - Rect.right));
        console.info('[getComponentRect] strJsonRectWidth is: ' + strJsonRectWidth);
        expect(data.viewObj.$attrs.width).assertEqual(data.testValue.expectValue.WidthCompare)
        expect(JSON.parse(strJsonRectWidth)).assertEqual(data.testValue.expectValue.width);
        expect(true).assertEqual(data.testValue.expectValue.ExceedParent);
      }
      let strJsonRectWidth = JSON.stringify(Math.abs(Rect.left - Rect.right));
      console.info('[getComponentRect] strJsonRectWidth is:' + strJsonRectWidth);
      expect(data.viewObj.$attrs.width).assertEqual(data.testValue.expectValue.WidthCompare)
      expect(JSON.parse(strJsonRectWidth)).assertEqual(data.testValue.expectValue.width);

    })
  })
}