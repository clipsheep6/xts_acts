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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "@ohos/hypium"
import router from '@system.router';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';
import {MessageManager,Callback} from '../MainAbility/utils/MessageManager';
import events_emitter from '@ohos.events.emitter'

export default function CustomDialogSafeAreaJsunit() {
  describe('CustomDialogSafeAreaJsunit', function () {
    beforeEach(async function (done) {
      console.info("CustomDialogSafeAreaJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/CustomDialogSafeArea',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get CustomDialogSafeAreaJsunit state pages: " + JSON.stringify(pages));
        if (!("overlay" == pages.name)) {
          console.info("get CustomDialogSafeAreaJsunit state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push CustomDialogSafeAreaJsunit page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push CustomDialogSafeAreaJsunit page error:" + err);
      }
      done()
    });

    afterEach(async function () {
      await CommonFunc.sleep(1000);
      console.info("overlay after each called");
    });

    it('CustomDialogSafeAreaJsunit_0100', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0100] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeSTART = await driver.findComponent(BY.key('SafeAreaEdge.START'));
      await button_SafeAreaEdgeSTART.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0100] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:2 undefined");
      console.info('[CustomDialogSafeAreaJsunit_0100] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0200', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0200] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeEND = await driver.findComponent(BY.key('SafeAreaEdge.END'));
      await button_SafeAreaEdgeEND.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0200] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:3 undefined");
      console.info('[CustomDialogSafeAreaJsunit_0200] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0300', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0300] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeTOP = await driver.findComponent(BY.key('SafeAreaEdge.TOP'));
      await button_SafeAreaEdgeTOP.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0300] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:0 undefined");
      console.info('[CustomDialogSafeAreaJsunit_0300] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0400', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0400] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeBOTTOM = await driver.findComponent(BY.key('SafeAreaEdge.BOTTOM'));
      await button_SafeAreaEdgeBOTTOM.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0400] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:1 undefined");
      console.info('[CustomDialogSafeAreaJsunit_0400] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0500', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0500] START');
      let driver = await UiDriver.create()
      let button_SafeAreaTypeCUTOUT = await driver.findComponent(BY.key('SafeAreaType.CUTOUT'));
      await button_SafeAreaTypeCUTOUT.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaTypenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0500] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaType:1 undefined");
      console.info('[CustomDialogSafeAreaJsunit_0500] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0600', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0600] START');
      let driver = await UiDriver.create()
      let button_SafeAreaTypeSYSTEM = await driver.findComponent(BY.key('SafeAreaType.SYSTEM'));
      await button_SafeAreaTypeSYSTEM.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaTypenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0600] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaType:0 undefined");
      console.info('[CustomDialogSafeAreaJsunit_0600] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0700', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0700] START');
      let driver = await UiDriver.create()
      let button_SafeAreaTypeKEYBOARD = await driver.findComponent(BY.key('SafeAreaType.KEYBOARD'));
      await button_SafeAreaTypeKEYBOARD.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaTypenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0700] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaType:2 undefined");
      console.info('[CustomDialogSafeAreaJsunit_0700] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0800', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0800] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeSTART = await driver.findComponent(BY.key('SafeAreaEdge.START.END'));
      await button_SafeAreaEdgeSTART.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0800] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:2 3");
      console.info('[CustomDialogSafeAreaJsunit_0800] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_0900', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_0900] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeEND = await driver.findComponent(BY.key('SafeAreaEdge.END.TOP'));
      await button_SafeAreaEdgeEND.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_0900] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:3 0");
      console.info('[CustomDialogSafeAreaJsunit_0900] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_1000', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_1000] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeTOP = await driver.findComponent(BY.key('SafeAreaEdge.TOP.BOTTOM'));
      await button_SafeAreaEdgeTOP.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_1000] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:0 1");
      console.info('[CustomDialogSafeAreaJsunit_1000] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_1100', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_1100] START');
      let driver = await UiDriver.create()
      let button_SafeAreaEdgeBOTTOM = await driver.findComponent(BY.key('SafeAreaEdge.BOTTOM.END'));
      await button_SafeAreaEdgeBOTTOM.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaEdgenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_1100] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaEdge:1 2");
      console.info('[CustomDialogSafeAreaJsunit_1100] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_1200', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_1200] START');
      let driver = await UiDriver.create()
      let button_SafeAreaTypeKEYBOARD = await driver.findComponent(BY.key('SafeAreaType.KEYBOARD.SYSTEM'));
      await button_SafeAreaTypeKEYBOARD.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaTypenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_1200] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaType:2 0");
      console.info('[CustomDialogSafeAreaJsunit_1200] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_1300', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_1300] START');
      let driver = await UiDriver.create()
      let button_SafeAreaTypeKEYBOARD = await driver.findComponent(BY.key('SafeAreaType.KEYBOARD.CUTOUT'));
      await button_SafeAreaTypeKEYBOARD.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaTypenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_1300] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaType:2 1");
      console.info('[CustomDialogSafeAreaJsunit_1300] END');
      done();
    });
	
	it('CustomDialogSafeAreaJsunit_1400', 0, async function (done) {
      console.info('[CustomDialogSafeAreaJsunit_1400] START');
      let driver = await UiDriver.create()
      let button_SafeAreaTypeSYSTEM = await driver.findComponent(BY.key('SafeAreaType.SYSTEM.CUTOUT'));
      await button_SafeAreaTypeSYSTEM.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('SafeAreaTypenums');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogSafeAreaJsunit_1400] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.content).assertEqual("SafeAreaType:0 1");
      console.info('[CustomDialogSafeAreaJsunit_1400] END');
      done();
    });
  })
}
