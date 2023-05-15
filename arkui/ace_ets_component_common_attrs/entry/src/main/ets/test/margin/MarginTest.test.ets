import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';

export default function marginTest() {
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
    testName: "MarginTest",
    pageName: "MarginPage",
    pageUrl: "MainAbility/pages/margin/MarginPage",
    targetGroupView: "targetGroupView",
    parentComponentKey: "parentComponentKey",
    buttonComponentKey: "buttonComponentKey",
    childWidth: childWidth,
    childHeight: childHeight,
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: "SetMargin",
    setValue: {
      margin:{
        top: 200,
        right: 100,
        bottom: 100,
        left: 100
      }
    },
    expectValue: {
      margin:{"top":"200.00vp", "right":"100.00vp", "bottom":"100.00vp", "left":"100.00vp"},
      top: vp2px(200),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  },{
    describe: "SetMarginTop",
    setValue: {
      margin:{
        top: 200
      }
  },
  expectValue: {
      margin:{"top":"200.00vp","right":"100.00vp","bottom":"100.00vp","left":"100.00vp"},
      top: vp2px(200),
      right: vp2px(100),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  },{
    describe: "SetMarginRight",
    setValue: {
      margin:{
        right: 200
      }
    },
    expectValue: {
      margin:{"top":"200.00vp","right":"200.00vp","bottom":"100.00vp","left":"100.00vp"},
      top: vp2px(200),
      right: vp2px(200),
      bottom: vp2px(100),
      left: vp2px(100)
    }
  },{
    describe: "SetMarginBottom",
    setValue: {
      margin:{
        bottom: 200
      }
    },
    expectValue: {
      margin:{"top":"200.00vp","right":"200.00vp","bottom":"200.00vp","left":"100.00vp"},
      top: vp2px(200),
      right: vp2px(200),
      bottom: vp2px(200),
      left: vp2px(100)
    }
  },{
    describe: "SetMarginLeft",
    setValue: {
      margin:{
        left: 200
      }
    },
    expectValue: {
      margin:{"top":"200.00vp","right":"200.00vp","bottom":"200.00vp","left":"200.00vp"},
      top: vp2px(200),
      right: vp2px(200),
      bottom: vp2px(200),
      left: vp2px(200)
    }
  }]

  describe("MarginTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      //组件
      let Json_Rect = Utils.getComponentRect(data.pageConfig.componentKey);
      //父组件
      let Json_Rec_Parent = Utils.getComponentRect(data.pageConfig.parentComponentKey)
      //参考组件
      let Json_Rec_Button = Utils.getComponentRect(data.pageConfig.buttonComponentKey)
      //组件边距
      if(data.pageConfig.componentKey == 'ListItem'){
        let top = Json_Rect.top - Json_Rec_Parent.top
        let left = Json_Rect.left - Json_Rec_Parent.left
        let right = Json_Rec_Parent.right - Json_Rect.right
        let bottom = Json_Rec_Button.top - Json_Rect.bottom
        console.info("top is: " + top);
        console.info("left is: " + left);
        console.info("right is: " + right);
        console.info("bottom is: " + bottom);
        //断言
        console.info("margin is: " + data.viewObj.$attrs.margin)
        expect(data.viewObj.$attrs.margin).assertEqual(JSON.stringify(data.testValue.expectValue.margin));
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      }
      else if (data.pageConfig.componentKey == 'TabContent')
      {
        let top = Json_Rect.top - Json_Rec_Button.top
        let left = Json_Rect.left - Json_Rec_Parent.left
        let right = Json_Rec_Parent.right - Json_Rect.right
        let bottom = Json_Rec_Parent.bottom - Json_Rect.bottom
        console.info("top is: " + top);
        console.info("left is: " + left);
        console.info("right is: " + right);
        console.info("bottom is: " + bottom);
        //断言
        console.info("margin is: " + data.viewObj.$attrs.margin)
        expect(data.viewObj.$attrs.margin).assertEqual(JSON.stringify(data.testValue.expectValue.margin));
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      } else {
        let top = Json_Rect.top - Json_Rec_Parent.top
        let left = Json_Rect.left - Json_Rec_Parent.left
        let right = Json_Rec_Button.left - Json_Rect.right
        let bottom = Json_Rec_Parent.bottom - Json_Rect.bottom
        console.info("top is: " + top);
        console.info("left is: " + left);
        console.info("right is: " + right);
        console.info("bottom is: " + bottom);
        //断言
        console.info("margin is: " + data.viewObj.$attrs.margin)
        expect(data.viewObj.$attrs.margin).assertEqual(JSON.stringify(data.testValue.expectValue.margin));
        expect(top).assertEqual(data.testValue.expectValue.top);
        expect(right).assertEqual(data.testValue.expectValue.right);
        expect(bottom).assertEqual(data.testValue.expectValue.bottom);
        expect(left).assertEqual(data.testValue.expectValue.left);
      }

    });
  })
}