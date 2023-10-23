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

export default function CustomDialogAlignmentJsunit() {
  describe('CustomDialogAlignmentJsunit', function () {
    beforeEach(async function (done) {
      console.info("CustomDialogAlignmentJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/CustomDialogAlignment',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get CustomDialogAlignmentJsunit state pages: " + JSON.stringify(pages));
        if (!("overlay" == pages.name)) {
          console.info("get CustomDialogAlignmentJsunit state pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push CustomDialogAlignmentJsunit page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push CustomDialogAlignmentJsunit page error:" + err);
      }
      done()
    });

    afterEach(async function () {
      await CommonFunc.sleep(1000);
      console.info("overlay after each called");
    });

    it('CustomDialogAlignmentJsunit_0100', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0100] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('Bottom'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('Bottom');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0100] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("Bottom");
      console.info('[CustomDialogAlignmentJsunit_0100] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0200', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0200] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('BottomStart'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('BottomStart');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0200] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("BottomStart");
      console.info('[CustomDialogAlignmentJsunit_0200] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0300', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0300] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('Top'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('Top');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0300] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("Top");
      console.info('[CustomDialogAlignmentJsunit_0300] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0400', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0400] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('Default'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('Default');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0400] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("Default");
      console.info('[CustomDialogAlignmentJsunit_0400] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0500', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0500] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('TopStart'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('TopStart');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0500] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("TopStart");
      console.info('[CustomDialogAlignmentJsunit_0500] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0600', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0600] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('TopEnd'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('TopEnd');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0600] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("TopEnd");
      console.info('[CustomDialogAlignmentJsunit_0600] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0700', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0700] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('CenterStart'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('CenterStart');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0700] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("CenterStart");
      console.info('[CustomDialogAlignmentJsunit_0700] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0800', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0800] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('CenterEnd'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('CenterEnd');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0800] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("CenterEnd");
      console.info('[CustomDialogAlignmentJsunit_0800] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_0900', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_0900] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('BottomStart'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('BottomStart');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_0900] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("BottomStart");
      console.info('[CustomDialogAlignmentJsunit_0900] END');
      done();
    });
	it('CustomDialogAlignmentJsunit_1000', 0, async function (done) {
      console.info('[CustomDialogAlignmentJsunit_1000] START');
      let driver = await UiDriver.create()
      let button_Bottom = await driver.findComponent(BY.key('BottomEnd'));
      await button_Bottom.click();
      await CommonFunc.sleep(1000);
	  let strJson = getInspectorByKey('BottomEnd');
      let obj = JSON.parse(strJson);
      console.info("[CustomDialogAlignmentJsunit_1000] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.label).assertEqual("BottomEnd");
      console.info('[CustomDialogAlignmentJsunit_1000] END');
      done();
    });
	
  })
}
