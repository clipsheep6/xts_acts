import CommonTest from '../common/CommonTest';
import { describe, expect } from '@ohos/hypium'
import Utils from '../../MainAbility/common/Utils';

export default function constraintSizeTest() {
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
    "Badge",
    "Column",
    "ColumnSplit",
    "Counter",
    "Flex",
    "GridRow",
    "Grid",
    "List",
    "ListItem",
   // "ListItemGroup",
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
    "TabContent",
    "WaterFlow"]
  // let supportView = ["Column", "ColumnSplit", "Counter", "Flex", "GridRow", "Grid", "List", "ListItem", "ListItemGroup", "Panel", "Refresh", "Row", "RowSplit", "Scroll", "SideBarContainer", "Stack", "Swiper", "Tabs", "Circle", "Ellipse", "Polyline", "Polygon", "Path", "Rect", "Shape", "Line", "TabContent", "WaterFlow"]
  //let supportView = ["Button"]
  //Custom params.
  let childWidth = 200;
  let childHeight = 200;

  let pageConfig = {
    testName: "ConstraintSizeTest",
    pageName: "ConstraintSizePage",
    pageUrl: "MainAbility/pages/constraintSize/ConstraintSizePage",
    childHeight: childHeight,
    childWidth: childWidth
  }

  let testValues = [{
    describe: "Init",
    setValue: undefined,
    expectValue: {
      constraintSize: {
        "minWidth": "0.00vp", "minHeight": "0.00vp", "maxWidth": "Infinityvp", "maxHeight": "Infinityvp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "Number",
    setValue: {
      minWidth: 0,
      maxWidth: 300,
      minHeight: 0,
      maxHeight: 300
    },
    expectValue: {
      constraintSize: {
        "minWidth": "0.00vp", "minHeight": "0.00vp", "maxWidth": "300.00vp", "maxHeight": "300.00vp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "StringPx",
    setValue: {
      minWidth: "0px",
      maxWidth: "900px",
      minHeight: "0px",
      maxHeight: "900px"
    },
    expectValue: {
      constraintSize: {
        "minWidth": "0.00px", "minHeight": "0.00px", "maxWidth": "900.00px", "maxHeight": "900.00px"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "StringPercent",
    setValue: {
      minWidth: 0,
      maxWidth: "50%",
      minHeight: 0,
      maxHeight: "50%"
    },
    expectValue: {
      constraintSize: {
        "minWidth": "0.00vp", "minHeight": "0.00vp", "maxWidth": "50.00%", "maxHeight": "50.00%"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "Resource",
    setValue: {
      minWidth: 0,
      maxWidth: $r('app.float.300vp'),
      minHeight: 0,
      maxHeight: $r('app.float.300vp')
    },
    expectValue: {
      constraintSize: {
        "minWidth": "0.00vp", "minHeight": "0.00vp", "maxWidth": "300.00vp", "maxHeight": "300.00vp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "OutOfScopeMinLessMax1",
    setValue: {
      minWidth: 250,
      maxWidth: 300,
      minHeight: 250,
      maxHeight: 300
    },
    expectValue: {
      constraintSize: {
        "minWidth": "250.00vp", "minHeight": "250.00vp", "maxWidth": "300.00vp", "maxHeight": "300.00vp"
      },
      width: vp2px(250),
      Height: vp2px(250)
    }
  }, {
    describe: "OutOfScopeMinLessMax2",
    setValue: {
      minWidth: 100,
      maxWidth: 150,
      minHeight: 100,
      maxHeight: 150
    },
    expectValue: {
      constraintSize: {
        "minWidth": "100.00vp", "minHeight": "100.00vp", "maxWidth": "150.00vp", "maxHeight": "150.00vp"
      },
      width: vp2px(150),
      Height: vp2px(150)
    }
  }, {
    describe: "OutOfScopeMinGreaterMax1",
    setValue: {
      minWidth: 300,
      maxWidth: 250,
      minHeight: 300,
      maxHeight: 250
    },
    expectValue: {
      constraintSize: {
        "minWidth": "300.00vp", "minHeight": "300.00vp", "maxWidth": "250.00vp", "maxHeight": "250.00vp"
      },
      width: vp2px(250),
      Height: vp2px(250)
    }
  }, {
    describe: "OutOfScopeMinGreaterMax2",
    setValue: {
      minWidth: 150,
      maxWidth: 100,
      minHeight: 150,
      maxHeight: 100
    },
    expectValue: {
      constraintSize: {
        "minWidth": "150.00vp", "minHeight": "150.00vp", "maxWidth": "100.00vp", "maxHeight": "100.00vp"
      },
      width: vp2px(150),
      Height: vp2px(150)
    }
  }, {
    describe: "OutOfScopeMaxEqualWidth1",
    setValue: {
      minWidth: 100,
      maxWidth: 200,
      minHeight: 100,
      maxHeight: 200
    },
    expectValue: {
      constraintSize: {
        "minWidth": "100.00vp", "minHeight": "100.00vp", "maxWidth": "200.00vp", "maxHeight": "200.00vp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "OutOfScopeMinEqualWidth1",
    setValue: {
      minWidth: 200,
      maxWidth: 100,
      minHeight: 200,
      maxHeight: 100
    },
    expectValue: {
      constraintSize: {
        "minWidth": "200.00vp", "minHeight": "200.00vp", "maxWidth": "100.00vp", "maxHeight": "100.00vp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "OutOfScopeMinEqualWidth2",
    setValue: {
      minWidth: 200,
      maxWidth: 300,
      minHeight: 200,
      maxHeight: 300
    },
    expectValue: {
      constraintSize: {
        "minWidth": "200.00vp", "minHeight": "200.00vp", "maxWidth": "300.00vp", "maxHeight": "300.00vp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "OutOfScopeMaxEqualWidth2",
    setValue: {
      minWidth: 300,
      maxWidth: 200,
      minHeight: 300,
      maxHeight: 200
    },
    expectValue: {
      constraintSize: {
        "minWidth": "300.00vp", "minHeight": "300.00vp", "maxWidth": "200.00vp", "maxHeight": "200.00vp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }, {
    describe: "OutOfScopeMaxEqualMin",
    setValue: {
      minWidth: 200,
      maxWidth: 200,
      minHeight: 200,
      maxHeight: 200
    },
    expectValue: {
      constraintSize: {
        "minWidth": "200.00vp", "minHeight": "200.00vp", "maxWidth": "200.00vp", "maxHeight": "200.00vp"
      },
      width: vp2px(200),
      Height: vp2px(200)
    }
  }]

  describe("ConstraintSizeTest", () => {
    CommonTest.initTest(pageConfig, supportView, testValues, async data => {
      let Json_Rect = Utils.getComponentRect(pageConfig["componentKey"]);
      //计算高度
      let Height = Json_Rect.bottom - Json_Rect.top
      //计算宽度
      let width = Json_Rect.right - Json_Rect.left
      console.info('getComponentRect is Json_Rect.right ：' + JSON.stringify(Json_Rect.right));
      console.info('getComponentRect is Json_Rect.left :' + JSON.stringify(Json_Rect.left));
      console.info('getComponentRect is Json_Rect.bottom :' + JSON.stringify(Json_Rect.bottom));
      console.info('getComponentRect is Json_Rect.top :' + JSON.stringify(Json_Rect.top));
      console.info('getComponentRect is width :' + JSON.stringify(width));
      console.info('getComponentRect is Height :' + JSON.stringify(Height));
      console.info('constraintSize is ：' + data.viewObj.$attrs.constraintSize);
      //断言
      expect(data.viewObj.$attrs.constraintSize).assertEqual(JSON.stringify(data.testValue.expectValue.constraintSize));
      expect(data.testValue.expectValue.width).assertEqual(width);
      expect(data.testValue.expectValue.Height).assertEqual(Height);
    });
  })
}