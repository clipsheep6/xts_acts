import Utils from '../../MainAbility/common/Utils';
import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

export default function paddingTest() {
  let supportView = [
    'AlphabetIndexer',
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
    testName: "PaddingLengthTest",
    pageName: "PaddingPage_Length",
    pageUrl: "MainAbility/pages/padding/PaddingPage_Length",
    parentBackGroundColor: parentBackGroundColor,
    parentComponentKey: "parentComponentKey"
  }

  let testValues = [{
    describe: 'SetUndefined',
    setValue: {
      padding: undefined,
    },
    expectValue: {
      padding: '0.00px',
      top: 0,
      right: 0,
      bottom: 0,
      left: 0
    }
  }, {
    describe: 'SetNumber',
    setValue: {
      padding: 100,
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
      padding: '200px',
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
      padding: '20%',
    },
    expectValue: {
      padding: '20.00%',
      top: '0.20',
      right: '0.20',
      bottom: '0.20',
      left: '0.20'
    }
  }]
  let paddingLength = {
    padding: 0
  }
  describe("PaddingLengthTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      AttrsManager.change(data.caseTag,{padding:0});
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await Utils.sleep(1000);
      console.info("[" + data.caseTag + "] get referenceComponent rect after padding changed.");
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      console.info("viewObj.$attrs" + JSON.stringify(viewObj.$attrs))
      console.info("viewObj.$attrs.padding:" + viewObj.$attrs.padding)
      console.info("JSON.stringify(data.testValue.expectValue.padding):" + JSON.stringify(data.testValue.expectValue.padding))
      expect(viewObj.$attrs.padding).assertEqual(JSON.parse(JSON.stringify(data.testValue.expectValue.padding)));
    })
  })
}