import Utils from '../../MainAbility/common/Utils';
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'


export default function paddingTest() {
  let supportView = [ 'AlphabetIndexer',
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
    'Search',
    /*'Select',*/
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
    'TabContent',
    'Circle',
    'Ellipse',
    'Polyline',
    'Polygon',
    'Path',
    'Rect',
    'Shape',
    'Line',
    'WaterFlow'
  ]

  let parentBackGroundColor = Color.Yellow
  let pageConfig = {
    testName: 'PaddingTest',
    pageName: 'PaddingPage',
    pageUrl: 'MainAbility/pages/padding/PaddingPage',
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

  describe("PaddingTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {

      AttrsManager.change(data.caseTag, {
        padding: {
          left: 0, right: 0, top: 0, bottom: 0
        }
      });
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      console.info("viewObj.$attrs" + JSON.stringify(viewObj.$attrs))
      console.info("viewObj.$attrs.padding:" + viewObj.$attrs.padding)
      console.info("JSON.stringify(data.testValue.expectValue.padding):" + JSON.stringify(data.testValue.expectValue.padding))
      expect(viewObj.$attrs.padding).assertEqual(JSON.stringify(data.testValue.expectValue.padding));
    })
  })
}