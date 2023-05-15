import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

/**
 * Test of common attribute: direction
 */
export default function directionTest() {
  //Support view config, looped to create cases, this param is required.
  let supportView = [
    'AlphabetIndexer',
    'Blank',
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
    testName: 'DirectionTest',
    pageName: 'DirectionPage',
    pageUrl: 'MainAbility/pages/direction/DirectionPage',
    parentComponentKey: 'parentComponentKey',
    referenceComponentKey: 'referenceComponentKey'
  }

  //Test values, looped to create cases, this param is required.
  let testValues = [{
    describe: 'CheckDefaultValue',
    expectValue: {
      direction: 'Direction.Auto'
    }
  }, {
    describe: 'SetLtr',
    setValue: Direction.Ltr,
    expectValue: {
      direction: 'Direction.Ltr'
    }
  }, {
    describe: 'SetRtl',
    setValue: Direction.Rtl,
    expectValue: {
      direction: 'Direction.Rtl'
    }
  }]

  /**
   * Create test suite.
   */
  describe('DirectionTest', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //Check test result.
      let rec = Utils.getComponentRect(data.pageConfig.componentKey);
      let recParent = Utils.getComponentRect(data.pageConfig.parentComponentKey);
      let referenceRect = Utils.getComponentRect(data.pageConfig.referenceComponentKey);

      console.info('[' + data.caseTag + '] check direction attr value.');
      expect(data.testValue.expectValue.direction)
        .assertEqual(Utils.getComponentByKey(data.pageConfig.parentComponentKey).$attrs.direction);

      console.info('[' + data.caseTag + '] check actual direction.');
      if (data.describe == 'SetLtr') {
        expect(recParent.left).assertEqual(rec.left)
        expect(referenceRect.left).assertEqual(rec.right)
      } else if (data.describe == 'SetRtl') {
        expect(recParent.right).assertEqual(rec.right)
        expect(referenceRect.right).assertEqual(rec.left)
      }
    });
  })
}