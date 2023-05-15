import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';

export default function marginStringTest() {
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

  let pageConfig = {
    testName: "MarginStringTest",
    pageName: "MarginPage_String",
    pageUrl: "MainAbility/pages/margin/MarginPage_String",
    targetGroupView: "targetGroupView",
    parentComponentKey: "parentComponentKey",
    ReferenceComponentKey1: "ReferenceComponentKey1",
    ReferenceComponentKey2: "ReferenceComponentKey2",
    ReferenceComponentKey3: "ReferenceComponentKey3",
    ReferenceComponentKey4: "ReferenceComponentKey4",
    childWidth: childWidth,
    childHeight: childHeight,
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: "SetStringPercent",
    setValue: {
      margin: "10%",
    },
    expectValue: {
      margin: "10.00%",
      top: "0.10",
      right: "0.10",
      bottom: "0.10",
      left: "0.10"
    }
  }]

  describe("MarginStringTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //组件
      let Json_Rect = Utils.getComponentRect(data.pageConfig.componentKey);
      //父组件
      let Json_Rec_Parent = Utils.getComponentRect(data.pageConfig.parentComponentKey)
      //参考组件
      let Json_Rec_TOP = Utils.getComponentRect(data.pageConfig.ReferenceComponentKey1)
      //组件边距
      let Json_Rec_BOTTOM = Utils.getComponentRect(data.pageConfig.ReferenceComponentKey2)
      let Json_Rec_LEFT = Utils.getComponentRect(data.pageConfig.ReferenceComponentKey3)
      let Json_Rec_RIGHT = Utils.getComponentRect(data.pageConfig.ReferenceComponentKey4)
      if((data.pageConfig.componentKey == 'ListItem')||(data.pageConfig.componentKey == 'Blank')){
        let top = Json_Rect.top - Json_Rec_Parent.top
        let left = Json_Rect.left - Json_Rec_Parent.left
        let right = Json_Rec_Parent.right - Json_Rect.right
        let bottom = Json_Rec_TOP.top - Json_Rect.bottom
        console.info("top is: " + top);
        console.info("left is: " + left);
        console.info("right is: " + right);
        console.info("bottom is: " + bottom);
        //断言
        console.info("margin is: " + data.viewObj.$attrs.margin)
        let width = Json_Rec_Parent.right - Json_Rec_Parent.left
        let topPercent = Number(top / width).toFixed(2)
        let leftPercent = Number(left / width).toFixed(2)
        let rightPercent = Number(right / width).toFixed(2)
        let bottomPercent = Number(bottom / width).toFixed(2)
        console.info("topPercent is: " + topPercent);
        console.info("leftPercent is: " + leftPercent);
        console.info("rightPercent is: " + rightPercent);
        console.info("bottomPercent is: " + bottomPercent);
        expect(topPercent).assertEqual(data.testValue.expectValue.top);
        expect(rightPercent).assertEqual(data.testValue.expectValue.right);
        expect(bottomPercent).assertEqual(data.testValue.expectValue.bottom);
        expect(leftPercent).assertEqual(data.testValue.expectValue.left);
      }
      else if (data.pageConfig.componentKey == 'TabContent')
      {
        let top = Json_Rect.top - Json_Rec_TOP.top
        let left = Json_Rect.left - Json_Rec_Parent.left
        let right = Json_Rec_Parent.right - Json_Rect.right
        let bottom = Json_Rec_Parent.bottom - Json_Rect.bottom
        console.info("top is: " + top);
        console.info("left is: " + left);
        console.info("right is: " + right);
        console.info("bottom is: " + bottom);
        //断言
        console.info("margin is: " + data.viewObj.$attrs.margin)
        let width = Json_Rec_Parent.right - Json_Rec_Parent.left
        let topPercent = Number(top / width).toFixed(2)
        let leftPercent = Number(left / width).toFixed(2)
        let rightPercent = Number(right / width).toFixed(2)
        let bottomPercent = Number(bottom / width).toFixed(2)
        console.info("topPercent is: " + topPercent);
        console.info("leftPercent is: " + leftPercent);
        console.info("rightPercent is: " + rightPercent);
        console.info("bottomPercent is: " + bottomPercent);
        expect(topPercent).assertEqual(data.testValue.expectValue.top);
        expect(rightPercent).assertEqual(data.testValue.expectValue.right);
        expect(bottomPercent).assertEqual(data.testValue.expectValue.bottom);
        expect(leftPercent).assertEqual(data.testValue.expectValue.left);
      } else {
        let top = Json_Rect.top - Json_Rec_TOP.bottom
        let left = Json_Rect.left - Json_Rec_LEFT.right
        let right = Json_Rec_RIGHT.left - Json_Rect.right
        let bottom = Json_Rec_BOTTOM.top - Json_Rect.bottom
        console.info("top is: " + top);
        console.info("left is: " + left);
        console.info("right is: " + right);
        console.info("bottom is: " + bottom);
        //断言
        console.info("margin is: " + data.viewObj.$attrs.margin)
        //百分比计算
        let width = Json_Rec_Parent.right - Json_Rec_Parent.left
        let topPercent = Number(top / width).toFixed(2)
        let leftPercent = Number(left / width).toFixed(2)
        let rightPercent = Number(right / width).toFixed(2)
        let bottomPercent = Number(bottom / width).toFixed(2)
        console.info("topPercent is: " + topPercent);
        console.info("leftPercent is: " + leftPercent);
        console.info("rightPercent is: " + rightPercent);
        console.info("bottomPercent is: " + bottomPercent);
        expect(topPercent).assertEqual(data.testValue.expectValue.top);
        expect(rightPercent).assertEqual(data.testValue.expectValue.right);
        expect(bottomPercent).assertEqual(data.testValue.expectValue.bottom);
        expect(leftPercent).assertEqual(data.testValue.expectValue.left);
      }

    });
  })
}