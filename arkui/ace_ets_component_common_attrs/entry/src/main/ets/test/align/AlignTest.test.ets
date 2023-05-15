import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

/**
 * Test of common attribute: align
 */
export default function alignTest() {
  //Support view config, looped to create cases, this param is required.
  let supportView = [
    'AlphabetIndexer',
    'Button',
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
    'Menu',
    'Navigation',
    'Progress',
    'QRCode',
    'Radio',
    'Rating',
    'RemoteWindow',
    'Search',
    'Select',
    'Slider',
    'Text',
    'TextArea',
    'TextClock',
    'TextInput',
    'TextPicker',
    'TimePicker',
    'Toggle',
    'Badge',
    'Column',
    'Counter',
    'GridRow',
    'Grid',
    'List',
    'Panel',
    'Refresh',
    'Scroll',
    'SideBarContainer',
    'Stack',
    'Swiper',
    'Tabs',
    'WaterFlow',
    'Circle',
    'Ellipse',
    'Line',
    'Polyline',
    'Polygon',
    'Path',
    'Rect',
    'Shape'
  ]

  //Page config, this param is required.
  let pageConfig = {
    testName: 'AlignTest',
    pageName: 'AlignPage',
    pageUrl: 'MainAbility/pages/align/AlignPage',
    parentComponentKey: 'parentComponentKey'
  }

  //Test values, looped to create cases, this param is required.
  let testValues = [{
    describe: 'CheckDefaultValue',
    expectValue: {
      align: 'Alignment.Center'
    }
  }, {
    describe: 'SetTopStart',
    setValue: Alignment.TopStart,
    expectValue: {
      align: 'Alignment.TopStart'
    }
  }, {
    describe: 'SetTop',
    setValue: Alignment.Top,
    expectValue: {
      align: 'Alignment.Top'
    }
  }, {
    describe: 'SetTopEnd',
    setValue: Alignment.TopEnd,
    expectValue: {
      align: 'Alignment.TopEnd'
    }
  }, {
    describe: 'SetStart',
    setValue: Alignment.Start,
    expectValue: {
      align: 'Alignment.Start'
    }
  }, {
    describe: 'SetCenter',
    setValue: Alignment.Center,
    expectValue: {
      align: 'Alignment.Center'
    }
  }, {
    describe: 'SetEnd',
    setValue: Alignment.End,
    expectValue: {
      align: 'Alignment.End'
    }
  }, {
    describe: 'SetBottomStart',
    setValue: Alignment.BottomStart,
    expectValue: {
      align: 'Alignment.BottomStart'
    }
  }, {
    describe: 'SetBottom',
    setValue: Alignment.Bottom,
    expectValue: {
      align: 'Alignment.Bottom'
    }
  }, {
    describe: 'SetBottomEnd',
    setValue: Alignment.BottomEnd,
    expectValue: {
      align: 'Alignment.BottomEnd'
    }
  }]

  /**
   * Create test suite.
   */
  describe('AlignTest', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //Check test result.
      let rec = Utils.getComponentRect(data.pageConfig.componentKey);
      let recParent = Utils.getComponentRect(data.pageConfig.parentComponentKey);

      console.info('[' + data.caseTag + '] check align attr value.');
      expect(Utils.getComponentByKey(data.pageConfig.parentComponentKey).$attrs.align)
        .assertEqual(data.testValue.expectValue.align);

      console.info('[' + data.caseTag + '] check actual align.');
      if (data.describe == 'SetTopStart') {
        expect(recParent.left).assertEqual(rec.left)
        expect(recParent.top).assertEqual(rec.top)
      } else if (data.describe == 'SetTop') {
        expect(Utils.getRectHorizontalCenterX(recParent)).assertEqual(Utils.getRectHorizontalCenterX(rec))
        expect(recParent.top).assertEqual(rec.top)
      } else if (data.describe == 'SetTopEnd') {
        expect(recParent.right).assertEqual(rec.right)
        expect(recParent.top).assertEqual(rec.top)
      } else if (data.describe == 'SetStart') {
        expect(recParent.left).assertEqual(rec.left)
        expect(Utils.getRectVerticalCenterY(recParent)).assertEqual(Utils.getRectVerticalCenterY(rec))
        expect(recParent.top).assertEqual(rec.top)
      } else if (data.describe == 'SetCenter') {
        expect(Utils.getRectHorizontalCenterX(recParent)).assertEqual(Utils.getRectHorizontalCenterX(rec))
        expect(Utils.getRectVerticalCenterY(recParent)).assertEqual(Utils.getRectVerticalCenterY(rec))
        expect(recParent.top).assertEqual(rec.top)
      } else if (data.describe == 'SetEnd') {
        expect(Utils.getRectVerticalCenterY(recParent)).assertEqual(Utils.getRectVerticalCenterY(rec))
        expect(recParent.right).assertEqual(rec.right)
      } else if (data.describe == 'SetBottomStart') {
        expect(recParent.left).assertEqual(rec.left)
        expect(recParent.bottom).assertEqual(rec.bottom)
      } else if (data.describe == 'SetBottom') {
        expect(Utils.getRectHorizontalCenterX(recParent)).assertEqual(Utils.getRectHorizontalCenterX(rec))
        expect(recParent.bottom).assertEqual(rec.bottom)
      } else if (data.describe == 'SetBottomEnd') {
        expect(recParent.right).assertEqual(rec.right)
        expect(recParent.bottom).assertEqual(rec.bottom)
      }
    });
  })
}