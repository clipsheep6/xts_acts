import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';

export default function marginLengthTest() {
  //let supportView = ["Button","WaterFlow"]
  let childWidth = 100;
  let childHeight = 50;
  let parentWidth = 400;
  let parentHeight = 600;
  let supportView = [
    "AlphabetIndexer",
    "Button",
    "Blank",
    "Checkbox",
    "CheckboxGroup",
    "DataPanel",
    "DatePicker",
    "Divider",
    "Gauge",
    "Image",
    "ImageAnimator",
    "LoadingProgress",
    "Marquee",
    "Navigation",
    "Progress",
    "QRCode",
    "Radio",
    "Rating",
    "RichText",
    "ScrollBar",
    "Search",
    "Select",
    "Slider",
    "Text",
    "TextArea",
    "TextClock",
    "TextInput",
    "TextPicker",
    "TextTimer",
    "TimePicker",
    "Toggle",
    "Web",
    "Circle",
    "Ellipse",
    "Line",
    "Polyline",
    "Polygon",
    "Path",
    "Rect",
    "Shape",
    "Badge",
    "Column",
    "ColumnSplit",
    "Counter",
    "Flex",
    "Grid",
    "List",
    "ListItem",
    // "ListItemGroup",
    "Panel",
    "Refresh",
    "RelativeContainer",
    "Row",
    "RowSplit",
    "Scroll",
    "SideBarContainer",
    "Stack",
    "Swiper",
    "Tabs",
    "TabContent",
    "WaterFlow"
  ]
  // let supportView = ["AlphabetIndexer","Text", "Button", "Blank", "Checkbox", "CheckboxGroup", "DataPanel", "DatePicker", "Divider", "Gauge", "Image", "LoadingProgress", "Marquee", "Navigation", "Progress", "QRCode", "Radio", "Rating", "RichText", "ScrollBar", "Search", "Select", "Slider", "TextArea", "TextClock", "TextInput", "TextPicker", "TextTimer", "TimePicker", "Toggle", "Web", "Circle", "Ellipse", "Line", "Polyline", "Polygon", "Path", "Rect","ImageAnimator","Shape","Badge","Column","ColumnSplit","Counter","Flex","Grid","List","ListItem","ListItemGroup","Panel","Refresh","RelativeContainer","Row","RowSplit","Scroll","SideBarContainer","Stack","Swiper","Tabs","TabContent","WaterFlow"]
  let pageConfig = {
    testName: "MarginLengthTest",
    pageName: "MarginPage_Length",
    pageUrl: "MainAbility/pages/margin/MarginPage_Length",
    targetGroupView: "targetGroupView",
    parentComponentKey: "parentComponentKey",
    childWidth: childWidth,
    childHeight: childHeight,
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: "SetUndefined",
    setValue: {
      margin: undefined,
    },
    expectValue: {
      margin: "0.00px",
      top: 0,
      right: 0,
      bottom: 0,
      left: 0
    }
  }, {
    describe: "SetNumber",
    setValue: {
      margin: 100,
    },
    expectValue: {
      margin: "100.00vp",
      top: vp2px(100),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  }, {
    describe: "SetStringPx",
    setValue: {
      margin: "200px",
    },
    expectValue: {
      margin: "200.00px",
      top: 200,
      right: 200,
      bottom: 200,
      left: 200
    }
  }, {
    describe: "SetResource",
    setValue: {
      margin: $r('app.float.100vp'),
    },
    expectValue: {
      margin: "100.00vp",
      top: vp2px(100),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  }]

  describe("MarginLengthTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //组件
      let Json_Rect = Utils.getComponentRect(data.pageConfig.componentKey);
      //console.info("[getComponentRect] Json_Rect is: " + Json_Rect);

      //父组件
      let Json_Rec_Parent = Utils.getComponentRect(data.pageConfig.parentComponentKey)
      //console.info("[getComponentRect] Json_Rec_Parent is: " + Json_Rec_Parent);
      //组件与父组件距离
      let top = Json_Rect.top - Json_Rec_Parent.top
      let left = Json_Rect.left - Json_Rec_Parent.left
      let right = Json_Rec_Parent.right - Json_Rect.right
      let bottom = Json_Rec_Parent.bottom - Json_Rect.bottom
      console.info("top is: " + top);
      console.info("left is: " + left);
      console.info("right is: " + right);
      console.info("bottom is: " + bottom);
      //断言
      expect(data.viewObj.$attrs.margin).assertEqual(data.testValue.expectValue.margin);

      console.info("data.testValues.describe is: " + data.testValue.describe);
      expect(top).assertEqual(data.testValue.expectValue.top);
      expect(left).assertEqual(data.testValue.expectValue.left);
      expect(right).assertEqual(data.testValue.expectValue.right);
      expect(bottom).assertEqual(data.testValue.expectValue.bottom);
    });
  })
}