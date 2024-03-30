/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import ohosrouter from '@ohos.router';
import { Driver, ON } from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';
import { BusinessError } from '@ohos.base';


export default function ApiCommponentAddJsunit() {
  describe('ApiCommponentAddJsunit', () => {
    beforeAll(async (done: Function) => {
      console.info("ApiCommponentAddJsunit beforeEach start");
      try {
        ohosrouter.clear();
        let pages = ohosrouter.getState();
        console.info("ApiCommponentAddJsunit " + JSON.stringify(pages));
        if (!("loadingprogrees_add" == pages.name)) {
          console.info("ApiCommponentAddJsunit state success " + JSON.stringify(pages.name));
          ohosrouter.pushUrl({
            url: 'MainAbility/pages/loadingprogrees_add',
            params: {
              data1: 'message',
              data2: {
                data3: [123, 456, 789]
              }
            }
          }).then(() => {
            // success
          })
            .catch((err: BusinessError) => {
              console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
            })
          await CommonFunc.sleep(2000);
          console.info("push circle page success ");
        }
      } catch (err) {
        console.error("push circle page error: " + err);
      }
      done()

    });

    it('apiCommponentAddJsunit_0100', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0100 START');
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/loadingprogrees_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      })
        .catch((err: BusinessError) => {
          console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
        })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('loadingAdd');

      console.info("[apiCommponentAddJsunit_0100'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .borderRadius);
      expect(JSON.parse(strJson).$attrs.borderRadius).assertEqual('4.00vp');
      done();
    });

    it('apiCommponentAddJsunit_0200', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0200 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/list_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let gridTop = CommonFunc.getComponentRect('listadd');
      let top = gridTop.top;
      let gridBottom = CommonFunc.getComponentRect('listadd');
      let bottom = gridBottom.bottom;
      let gridRight = CommonFunc.getComponentRect('listadd');
      let right = gridRight.right;
      let driver = await Driver.create();
      await driver.swipe(Math.round(top + 50), Math.round(right - 50), Math.round(bottom - 50), Math.round(right - 50));
      await CommonFunc.sleep(1000);
      // judge whether the top
      let onScrollStartText = await driver.findComponent(ON.id('4'));
      let textAdd = await onScrollStartText.getText();
      console.info("[apiCommponentAddJsunit_0200] onScrollStartText: " + textAdd);
      expect(textAdd).assertEqual('4');
      done();
    });

    it('apiCommponentAddJsunit_0300', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0300 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/grid_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('nexpageAdd'));
      await btn.click();
      await CommonFunc.sleep(100);
      // wether if swipe
      let gridText = await driver.findComponent(ON.id('25'));
      let text = await gridText.getText();
      console.info("apiCommponentAddJsunit_0300] onScrollText: " + text);
      expect(text).assertEqual('4');
      done();
    });

    it('apiCommponentAddJsunit_0400', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0400 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/scroll_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let scrollBar = await driver.findComponent(ON.type('Scroll'));
      await scrollBar.scrollToBottom();
      await CommonFunc.sleep(100);
      // wether if swipe
      let gridText = await driver.findComponent(ON.id('9'));
      let text = await gridText.getText();
      console.info("[apiCommponentAddJsunit_0500] onScrollText: " + text);
      expect(text).assertEqual('9');
      done();
    });

    it('apiCommponentAddJsunit_0500', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0500 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/search_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('searchAdd');

      console.info("[apiCommponentAddJsunit_0500'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('Search');
      done();
    });

    it('apiCommponentAddJsunit_0600', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0600 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/swipe_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      // whether react
      let strJson: string = getInspectorByKey('swiperValue');

      console.info("[apiCommponentAddJsunit_0600'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('hello');
      done();
    });

    it('apiCommponentAddJsunit_0700', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0700 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/textArea_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('textAreaAdd');

      console.info("[apiCommponentAddJsunit_0700'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('TextArea');
      done();
    });

    it('apiCommponentAddJsunit_0800', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0800 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/textinput_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      let strJson: string = getInspectorByKey('textInputAdd');

      console.info("[apiCommponentAddJsunit_0800'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('TextInput');
      done();

    });

    it('apiCommponentAddJsunit_0900', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_0900 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/waterflow_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      let strJson: string = getInspectorByKey('waterflowAdd');

      console.info("[apiCommponentAddJsunit_0900'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .enableScrollInteraction);
      expect(JSON.parse(strJson).$attrs.enableScrollInteraction).assertTrue();
      done();
    });

    it('apiCommponentAddJsunit_1000', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_1000 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/navigation_add',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      let strJson: string = getInspectorByKey('navigationAdd');

      console.info("[apiCommponentAddJsunit_1000'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('Navigation');
      done();
    });

    it('apiCommponentAddJsunit_1100', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_1100 START');
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/messureSize',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('width11');

      console.info("[apiCommponentAddJsunit_1100'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('0');
      done();
    });

    it('apiCommponentAddJsunit_1200', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_1200 START');
      try {
        expect(SafeAreaType.SYSTEM).assertEqual(0);
        expect(SafeAreaType.CUTOUT).assertEqual(1);
        expect(SafeAreaType.KEYBOARD).assertEqual(2);
      } catch (err) {
        console.error("apiCommponentAddJsunit_1200 error " + JSON.stringify(err));
      }
      done();
    });

    it('apiCommponentAddJsunit_1300', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_1300] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/scroll_addattrs',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let scrollBar = await driver.findComponent(ON.type('Scroll'));
      await scrollBar.scrollToBottom();
      await CommonFunc.sleep(100);
      // wether if swipe
      let gridText = await driver.findComponent(ON.id('9'));
      let text = await gridText.getText();
      console.info("[apiCommponentAddJsunit_1300] onScrollText: " + text);
      expect(text).assertEqual('9');
      done();

    });

    it('apiCommponentAddJsunit_1400', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_1400] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/listItemAddgroup',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('listattrs');

      console.info("[apiCommponentAddJsunit_1400'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('List');
      done();
    });

    it('apiCommponentAddJsunit_1500', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_1500] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/navrouteradd',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('addOne');

      console.info("[apiCommponentAddJsunit_1500'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('Navigation');
      done();
    });

    it('apiCommponentAddJsunit_1600', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_1600] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/animateAdd',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('keyImageAdd');

      console.info("[apiCommponentAddJsunit_1600'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .width);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('200.00vp');
      done();
    });

    it('apiCommponentAddJsunit_1700', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_1700] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/bindConver',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('buttonAdd');

      console.info("[apiCommponentAddJsunit_1700'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .borderWidth);
      expect(JSON.parse(strJson).$attrs.borderWidth).assertEqual('0.00vp');
      done();
    });

    it('apiCommponentAddJsunit_1800', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_1800] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/common_ets_api',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('labelAAd');

      console.info("[apiCommponentAddJsunit_1800'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .width);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('320.00vp');
      done();
    });


    it('apiCommponentAddJsunit_1900', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_1900] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/commonAdd',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('commonAdd');

      console.info("[apiCommponentAddJsunit_1900'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .width);
      expect(JSON.parse(strJson).$attrs.width).assertEqual('300.00vp');
      done();
    });

    it('apiCommponentAddJsunit_2000', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_2000] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/createBuilderadd',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('crateFrom');

      console.info("[apiCommponentAddJsunit_2000'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .borderWidth);
      expect(JSON.parse(strJson).$attrs.borderWidth).assertEqual('0.00vp');
      done();
    });
    it('apiCommponentAddJsunit_2100', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_2100] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/dragAdd',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('dragAdd');

      console.info("[apiCommponentAddJsunit_2100'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .margin);
      expect(JSON.parse(strJson).$attrs.margin).assertEqual('10.00vp');
      done();
    });

    it('apiCommponentAddJsunit_2200', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_2200] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/TouchAdd',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('touchAdd');

      console.info("[apiCommponentAddJsunit_2200'] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .margin);
      expect(JSON.parse(strJson).$attrs.margin).assertEqual('0.00vp');
      done();
    });

    it('apiCommponentAddJsunit_2300', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_2300] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/navition3',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('ArkUX_Navigation_1111');
      console.info('apiCommponentAddJsunit_2300 START  :' + JSON.stringify(strJson));

      console.info("apiCommponentAddJsunit_2300 JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      let mode = JSON.parse(strJson).$attrs.mode
      let minContentWidth = JSON.parse(strJson).$attrs.minContentWidth
      let navBarWidth = JSON.parse(strJson).$attrs.navBarWidth
      let navBarWidthRange = JSON.parse(strJson).$attrs.navBarWidthRange
      expect(mode).assertEqual("NavigationMode.AUTO");
      expect(minContentWidth).assertEqual("50.00vp");
      expect(navBarWidth).assertEqual("100.00vp");
      expect(navBarWidthRange).assertEqual("50.00vp, 300.00vp");
      console.info('apiCommponentAddJsunit_2300 END ');
      done();
    });

    it('apiCommponentAddJsunit_2400', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_2400] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/richEditor',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('richEditor');

      console.info("[apiCommponentAddJsunit_2400'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('RichEditor');
      done();
    });

    it('apiCommponentAddJsunit_2500', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_2500] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/richEditorCustomKeyBoard',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('richEditor1');

      console.info("[apiCommponentAddJsunit_2500'] component JSON.parse(strJson) is: " + JSON.parse(strJson).$type);
      expect(JSON.parse(strJson).$type).assertEqual('RichEditor');
      done();
    });

    it('apiCommponentAddJsunit_2600', 0, async (done: Function) => {
      console.info('apiCommponentAddJsunit_2600 START');
      try {
        expect(DialogButtonStyle.HIGHLIGHT).assertEqual(1);
      } catch (err) {
        console.error("apiCommponentAddJsunit_2600 error " + JSON.stringify(err));
      }
      done();
    });

    it('apiCommponentAddJsunit_2700', 0, async (done: Function) => {
      console.info("[apiCommponentAddJsunit_2700] START");
      ohosrouter.clear();
      ohosrouter.pushUrl({
        url: 'MainAbility/pages/lifecycle',
        params: {
          data1: 'message',
          data2: {
            data3: [123, 456, 789]
          }
        }
      }).then(() => {
        // success
      }).catch((err: BusinessError) => {
        console.error(`pushUrl failed, code is ${err.code}, message is ${err.message}`);
      })
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('S1');

      console.info("[apiCommponentAddJsunit_2700] component JSON.parse(strJson) is: " + JSON.parse(strJson)
        .$attrs
        .content);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('S1');
      done();
    });
  })
}