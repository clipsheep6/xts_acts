import { AttrsManager } from '../../MainAbility/common/AttrsManager';
import Utils from '../../MainAbility/common/Utils';
import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'

export default function markAnchorTest() {
  let supportView =
    ["Text","Button", "Radio", "Select","Blank","Checkbox","CheckboxGroup","DataPanel",
    "DatePicker", "Divider", "Gauge","LoadingProgress","Marquee","Navigation","Image","ImageAnimator",
    "AlphabetIndexer","NavRouter", "Progress","QRCode","Rating","Search","Slider","TextArea","TextClock",
    "TextInput","TextPicker", "TimePicker","Toggle","Badge","Column","Counter","Flex","Grid","GridRow",
    "List","Row","Scroll","SideBarContainer","Stack","Tabs","WaterFlow",
    "Circle","Ellipse","Line", "Polyline","Polygon","Path","Rect","Shape","Panel","Refresh","TabContent"]

  //Custom params.
  let parentWidth = 300;
  let parentHeight = 400;
  let subassemblyWidth = 100;
  let subassemblyHeight = 100;

  let pageConfig = {
    testName: "MarkAnchorTest",
    pageName: "MarkAnchorPage",
    pageUrl: "MainAbility/pages/markAnchor/MarkAnchorPage",
    parentWidth: parentWidth,
    parentHeight :parentHeight,
    subassemblyWidth:subassemblyWidth,
    subassemblyHeight:subassemblyHeight,
  }

  let testValues = [
    {
      describe: "DefaultValue",
      expectValue: {
        x: "0.00vp", y: "0.00vp", left: vp2px(0) , top: vp2px(0)
      }
    },{
    describe: "Number",
    setValue: {
      x: 50, y: 50
    },
    expectValue: {
      x: "50.00vp", y: "50.00vp", left: vp2px(50) , top: vp2px(50)
    }
  }, {
    describe: "StringPx",
    setValue: {
      x: "150px", y: "150px"
    },
    expectValue: {
      x: "150.00px", y: "150.00px", left: 150 , top: 150
    }
  }, {
    describe: "StringPercent",
    setValue: {
      x: "50%", y: "50%"
    },
    expectValue: {
      x: "50.00%", y: "50.00%" ,left: vp2px(subassemblyWidth*0.5) , top: vp2px(subassemblyHeight*0.5)
    }
  }, {
    describe: "Resource",
    setValue: {
      x: $r('app.float.50vp'), y: $r('app.float.50vp')
    },
    expectValue: {
      x: "50.00vp", y: "50.00vp",left: vp2px(50) , top: vp2px(50)
    }
  }]

  describe("MarkAnchorTest", () => {
    //Create test cases by config.
    CommonTest.initTest(pageConfig, supportView, testValues,null, async data => {
      //Check test result.
      if (data.describe == "DefaultValue") {
        AttrsManager.change(data.caseTag, data.testValue.setValue);
        let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);
        console.info("[" + data.caseTag + "] check actual position.");
        expect(viewObj.$attrs.markAnchor.x).assertEqual(data.testValue.expectValue.x);
        expect(viewObj.$attrs.markAnchor.y).assertEqual(data.testValue.expectValue.y);
      } else {
        //Restore the target component to its original position
        console.info("[" + data.caseTag + "] Restore the target component to its original position" + "setValue : {x: 0, y: 0}");
        AttrsManager.change(data.caseTag, {
          x: 0, y: 0
        });
        await Utils.sleep(1000);

        console.info("[" + data.caseTag + "] get Target Component rect before position changed.");
        let initialPosition = Utils.getComponentRect(data.pageConfig.componentKey);

        console.info("[" + data.caseTag + "] setValue : " + JSON.stringify(data.testValue.setValue));
        AttrsManager.change(data.caseTag, data.testValue.setValue);
        await Utils.sleep(1000);

        console.info("[" + data.caseTag + "] get referenceComponent rect after position changed.");
        let targetRectAfter = Utils.getComponentRect(data.pageConfig.componentKey);
        let viewObj = Utils.getComponentByKey(data.pageConfig.componentKey);

        console.info("[" + data.caseTag + "] check actual position.");
        expect(viewObj.$attrs.markAnchor.x).assertEqual(data.testValue.expectValue.x);
        expect(viewObj.$attrs.markAnchor.y).assertEqual(data.testValue.expectValue.y);
        expect(Number(initialPosition.left - targetRectAfter.left).toFixed(2))
          .assertEqual(Number(data.testValue.expectValue.left).toFixed(2));
        expect(Number(initialPosition.top - targetRectAfter.top).toFixed(2))
          .assertEqual(Number(data.testValue.expectValue.top).toFixed(2));
      }
    })
  })
}