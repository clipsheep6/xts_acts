/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import router from '@system.router';
import {UiComponent, Driver, Component, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/utils/Common';
import {MessageManager,Callback} from '../../MainAbility/utils/MessageManager';


export default function PropArray1() {
  describe('PropArray1', function () {
    beforeEach(async function (done) {
      console.info("PropArray1 beforeEach start");
      let options = {
        uri: 'MainAbility/pages/@state/PropArray1',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get PropArray1 state pages: " + JSON.stringify(pages));
        if (!("PropArray1" == pages.name)) {
          console.info("get PropArray1 state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push PropArray1 success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push PropArray1 page error: " + err);
        expect().assertFail();
      }
      done();
    });



    it('PropArray_0500', 0, async function (done) {
      console.info('PropArray_0100 START');
      let driver = await Driver.create()
      let button = await driver.findComponent(ON.id('state5'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('PropArray1');
      let obj = JSON.parse(strJson);
      console.info("[PropArray_0100] component obj is: " + JSON.stringify(obj));
      console.info("[PropArray_0100] title: " + JSON.stringify(obj.$attrs.content));
      expect(obj.$attrs.backgroundColor).assertEqual("count type of Boolean number is 200");
      console.info('[PropArray_0100] END');
      done();
    });

    it('PropArray_0600', 0, async function (done) {
      console.info('PropArray_0100 START');
      let driver = await Driver.create()
      let button = await driver.findComponent(ON.id('state6'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('PropArray1');
      let obj = JSON.parse(strJson);
      console.info("[PropArray_0100] component obj is: " + JSON.stringify(obj));
      console.info("[PropArray_0100] title: " + JSON.stringify(obj.$attrs.content));
      expect(obj.$attrs.backgroundColor).assertEqual("count type of Boolean number is 200");
      console.info('[PropArray_0100] END');
      done();
    });

    it('PropArray_0700', 0, async function (done) {
      console.info('PropArray_0100 START');
      let driver = await Driver.create()
      let button = await driver.findComponent(ON.id('state7'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('PropArray1');
      let obj = JSON.parse(strJson);
      console.info("[PropArray_0100] component obj is: " + JSON.stringify(obj));
      console.info("[PropArray_0100] title: " + JSON.stringify(obj.$attrs.content));
      expect(obj.$attrs.backgroundColor).assertEqual("count type of Boolean number is 200");
      console.info('[PropArray_0100] END');
      done();
    });

    it('PropArray_0800', 0, async function (done) {
      console.info('PropArray_0100 START');
      let driver = await Driver.create()
      let button = await driver.findComponent(ON.id('state8'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('PropArray1');
      let obj = JSON.parse(strJson);
      console.info("[PropArray_0100] component obj is: " + JSON.stringify(obj));
      console.info("[PropArray_0100] title: " + JSON.stringify(obj.$attrs.content));
      expect(obj.$attrs.backgroundColor).assertEqual("count type of Boolean number is 200");
      console.info('[PropArray_0100] END');
      done();
    });

  })
}

