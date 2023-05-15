import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

/**
 * Test of common attribute: position
 */
export default function positionTest() {
  //Support view config, looped to create cases, this param is required.
  //  let supportView = ['RemoteWindow']
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
    'MenuItem',
    'MenuItemGroup',
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
    'ListItem',
    'Panel',
    'Refresh',
    'Scroll',
    'SideBarContainer',
    'Stack',
    'Swiper',
    'Tabs',
    'TabContent',
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

  //Custom params.
  let parentWidth = 300;
  let parentHeight = 400;

  //Page config, this param is required.
  let pageConfig = {
    testName: 'PositionTest',
    pageName: 'PositionPage',
    pageUrl: 'MainAbility/pages/position/PositionPage',
    parentWidth: parentWidth,
    parentHeight: parentHeight,
    parentComponentKey: 'parentComponentKey',
    referenceComponentKey: 'referenceComponentKey'
  }

  //Test values, looped to create cases, this param is required.
  let testValues = [{
    describe: 'SetNumber',
    setValue: {
      x: 200, y: 100
    },
    expectValue: {
      x: '200.00vp', y: '100.00vp', left: vp2px(200), top: vp2px(100)
    }
  }, {
    describe: 'SetStringPx',
    setValue: {
      x: '200px', y: '100px'
    },
    expectValue: {
      x: '200.00px', y: '100.00px', left: 200, top: 100
    }
  }, {
    describe: 'SetStringPercent',
    setValue: {
      x: '20%', y: '10%'
    },
    expectValue: {
      x: '20.00%', y: '10.00%', left: vp2px(parentWidth) * 0.2, top: vp2px(parentHeight) * 0.1
    }
  }, {
    describe: 'SetResource',
    setValue: {
      x: $r('app.float.200vp'), y: $r('app.float.100vp')
    },
    expectValue: {
      x: '200.00vp', y: '100.00vp', left: vp2px(200), top: vp2px(100)
    }
  }]

  /**
   * Create test suite.
   */
  describe('PositionTest', () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues, null, async data => {
      console.info('[' + data.caseTag + '] get referenceComponent rect before position changed.');
      let referenceRectBefore = Utils.getComponentRect(data.pageConfig.referenceComponentKey);

      console.info('[' + data.caseTag + '] setValue : ' + JSON.stringify(data.testValue.setValue));
      AttrsManager.change(data.caseTag, data.testValue.setValue);
      await Utils.sleep(1000);

      console.info('[' + data.caseTag + '] get referenceComponent rect after position changed.');
      let referenceRectAfter = Utils.getComponentRect(data.pageConfig.referenceComponentKey);

      console.info('[' + data.caseTag + '] check actual position.');
      let rect = Utils.getComponentRect(data.pageConfig.componentKey);
      let rectParent = Utils.getComponentRect(data.pageConfig.parentComponentKey);
      expect(Number(rect.left - rectParent.left).toFixed(2))
        .assertEqual(Number(data.testValue.expectValue.left).toFixed(2));
      expect(Number(rect.top - rectParent.top).toFixed(2))
        .assertEqual(Number(data.testValue.expectValue.top).toFixed(2));

      console.info('[' + data.caseTag + '] check position attr value.');
      let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
      expect(viewObj.$attrs.position.x).assertEqual(data.testValue.expectValue.x);
      expect(viewObj.$attrs.position.y).assertEqual(data.testValue.expectValue.y);

      console.info('[' + data.caseTag + '] check referenceComponent layout not changed.');
      expect(referenceRectBefore.left).assertEqual(referenceRectAfter.left);
      expect(referenceRectBefore.right).assertEqual(referenceRectAfter.right);
      expect(referenceRectBefore.top).assertEqual(referenceRectAfter.top);
      expect(referenceRectBefore.bottom).assertEqual(referenceRectAfter.bottom);
    })
  })
}