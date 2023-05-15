import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';

export default function layoutWeightFlexTest() {
  let supportView = [
    "AlphabetIndexer",
    "Button",
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
    "Badge",
    "Column",
    "ColumnSplit",
    "Counter",
    "Flex",
    "GridRow",
    "Grid",
    "List",
//    "ListItem",
    //"ListItemGroup",
    "Panel",
    "Refresh",
    "Row",
    "RowSplit",
    "Scroll",
    "SideBarContainer",
    "Stack",
    "Swiper",
    "Tabs",
    "Circle",
    "Ellipse",
    "Polyline",
    "Polygon",
    "Path",
    "Rect",
    "Shape",
    "Line",
//    "TabContent",
    "WaterFlow"
  ]
  let childWidth = 100;
  let childHeight = 100;
  let parentWidth = 400;
  let parentHeight = 600;
  let pageConfig = {
    testName: "LayoutWeightFlexTest",
    pageName: "LayoutWeightPage_Flex",
    pageUrl: "MainAbility/pages/layoutWeight/LayoutWeightPage_Flex",
    targetGroupView: "targetGroupView",
    childWidth: childWidth,
    childHeight: childHeight,
    parentWidth: parentWidth,
    parentHeight: parentHeight
  }

  let testValues = [{
    describe: "Flex",
    setValue: {
      layoutWeight: 1
    },
    expectValue: {
      layoutWeight: 1,
      width: vp2px(200)
    }
  }]

  describe("LayoutWeightFlexTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      let Json_Rect = Utils.getComponentRect(data.pageConfig.componentKey);
      let Height = Json_Rect.bottom - Json_Rect.top
      let width = Json_Rect.right - Json_Rect.left
      console.info('getComponentRect is Json_Rect.right :' + JSON.stringify(Json_Rect.right));
      console.info('getComponentRect is Json_Rect.left :' + JSON.stringify(Json_Rect.left));
      console.info('getComponentRect is Json_Rect.bottom :' + JSON.stringify(Json_Rect.bottom));
      console.info('getComponentRect is Json_Rect.top :' + JSON.stringify(Json_Rect.top));
      console.info('getComponentRect is width :' + JSON.stringify(width));
      console.info('getComponentRect is Height:' + JSON.stringify(Height));
      expect(data.viewObj.$attrs.layoutWeight).assertEqual(data.testValue.expectValue.layoutWeight);
      expect(width).assertEqual(data.testValue.expectValue.width);
      //expect(data.testValue.expectValue.Height).assertEqual(JSON.stringify(Height));
    });
  })
}