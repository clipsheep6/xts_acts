import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'


export default function heightTest() {
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
  let parentBackGroundColor=Color.Red
  let heightExample = 50
  let BackGroundColor = Color.Orange

  let pageConfig = {
    testName: 'HeightTest',
    pageName: 'HeightPage',
    pageUrl: 'MainAbility/pages/height/HeightPage',
    parentHeight:parentHeight,
    parentWidth:parentWidth,
    parentBackGroundColor:parentBackGroundColor,
    parentComponentKey: 'parentComponentKey',
    heightExample: heightExample,
    BackGroundColor: BackGroundColor
  }

  let testValues = [{
    describe: 'ExceedParent',
    setValue: {
      height: 550
    },
    expectValue: {
      HeightCompare: '550.00vp',
      height: vp2px(550),ExceedParent:true
    }
  },
    {
      describe: 'StringPercent',
      setValue: {
        height: "50%"
      },
      expectValue: {
        HeightCompare: '50.00%',
        height: vp2px(parentHeight) * 0.5
      }
    }, {
      describe: 'Resource',
      setValue: {
        height: $r('app.float.200vp')
      },
      expectValue: {
        HeightCompare: '200.00vp',
        height: vp2px(200)
      }
    }, {
      describe: 'StringPx',
      setValue: {
        height: '600px'
      },
      expectValue: {
        HeightCompare: '600.00px',
        height: 600
      }
    }]

  describe('HeightTest', () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      let rect = Utils.getComponentRect(data.pageConfig.componentKey);
      let rectParent = Utils.getComponentRect(data.pageConfig.parentComponentKey)
      console.info('rectParent.left:' + rectParent.left)
      console.info('rectParent.right:' + rectParent.right)
      console.info('rectParent.top:' + rectParent.top)
      console.info('rectParent.bottom:' + rectParent.bottom)
      if ((rectParent.top < rect.top || rectParent.bottom < rect.bottom) && data.testValue.describe == 'SetNumber') {
        let strJsonRectWidth = JSON.stringify(Math.abs(rect.left - rect.right));
        let strJsonRectHeight = JSON.stringify(Math.abs(rect.bottom - rect.top));
        console.info('[getComponentRect] strJsonRectWidth is: ' + strJsonRectWidth);
        console.info('[getComponentRect] strJsonRectHeight is: ' + strJsonRectHeight);
        expect(data.viewObj.$attrs.height).assertEqual(data.testValue.expectValue.HeightCompare)
        expect(JSON.parse(strJsonRectHeight)).assertEqual(data.testValue.expectValue.height);
        expect(true).assertEqual(data.testValue.expectValue.ExceedParent);
      }
      let strJsonRectHeight = JSON.stringify(Math.abs(rect.bottom - rect.top));
      console.info('[getComponentRect] strJsonRectHeight is: ' + strJsonRectHeight);
      expect(data.viewObj.$attrs.height).assertEqual(data.testValue.expectValue.HeightCompare)
      expect(JSON.parse(strJsonRectHeight)).assertEqual(data.testValue.expectValue.height);
    })
  })
}