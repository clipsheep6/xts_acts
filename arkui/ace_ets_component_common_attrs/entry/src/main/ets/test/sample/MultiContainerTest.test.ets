import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

/**
 * Test of common attribute: position
 */
export default function MultiContainerTest() {
  //Support view config, looped to create cases, this param is required.
  let supportView = ["Button", "Radio", "Select"]

  //Container view config, looped to create cases.this param is not required.
  let containerView = ["Row", "Column", "Flex"]

  //Custom params.
  let parentWidth = 300;
  let parentHeight = 400;

  //Page config, this param is required.
  let pageConfig = {
    testName: "MultiContainerTest",
    pageName: "MultiContainerPage",
    pageUrl: "MainAbility/pages/sample/MultiContainerPage",
    parentWidth: parentWidth,
    parentHeight: parentHeight,
    parentComponentKey: "parentComponentKey"
  }

  //Test values, looped to create cases, this param is required.
  let testValues = [{
    describe: "SetNumber",
    setValue: {
      x: 200, y: 100
    },
    expectValue: {
      x: "200.00vp", y: "100.00vp", left: vp2px(200), top: vp2px(100)
    }
  }, {
    describe: "SetStringPercent",
    setValue: {
      x: "20%", y: "10%"
    },
    expectValue: {
      x: "20.00%", y: "10.00%", left: vp2px(parentWidth) * 0.2, top: vp2px(parentHeight) * 0.1
    }
  }]

  /**
   * Create test suite.
   */
  describe("MultiContainerTest", () => {
    //Create test cases by config.
    CommonTest.initTestByContainerView(pageConfig, containerView, supportView, testValues, async data => {
      //Check test result.
      let rec = Utils.getComponentRect(data.pageConfig.componentKey);
      let recParent = Utils.getComponentRect(data.pageConfig.parentComponentKey);
      expect(data.testValue.expectValue.left).assertEqual(rec.left - recParent.left);
      expect(data.testValue.expectValue.top).assertEqual(rec.top - recParent.top);
      expect(data.testValue.expectValue.x).assertEqual(data.viewObj.$attrs.position.x);
      expect(data.testValue.expectValue.y).assertEqual(data.viewObj.$attrs.position.y);
    })
  })
}