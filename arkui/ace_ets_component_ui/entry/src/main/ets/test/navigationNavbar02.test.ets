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
import router from '@system.router';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';
import {MessageManager,Callback} from '../MainAbility/utils/MessageManager';


export default function navigationNavbar02() {
  describe('navigationNavbar02', function () {
    beforeEach(async function (done) {
      console.info("navigationNavbar02 beforeEach start");
      let options = {
        uri: 'MainAbility/pages/navigationNavbar02',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get navigationNavbar02 state pages: " + JSON.stringify(pages));
        if (!("navigationNavbar02" == pages.name)) {
          console.info("get navigationNavbar02 state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push navigationNavbar02 page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push navigationNavbar02 page error: " + err);
        expect().assertFail();
      }
      done();
    });

    //Set navbarWidth to -2
    it('navigationNavbar02_001', 0, async function (done) {

      console.info('[navigationNavbar02_001] START');
      globalThis.value.message.notify({name:'navBarWidth', value: -2 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_001] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.navBarWidth).assertEqual('240.00vp');
      console.info('[navigationNavbar02_001] END');
      done();
    });

    //Set navbarWidth to 0
    it('navigationNavbar02_002', 0, async function (done) {

      console.info('[navigationNavbar02_002] START');
      globalThis.value.message.notify({name:'navBarWidth', value: 0 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_002] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.navBarWidth).assertEqual('240.00vp');

      console.info('[navigationNavbar02_002] END');
      done();
    });

    //Set navbarWidth to 260
    it('navigationNavbar02_003', 0, async function (done) {

      console.info('[navigationNavbar02_003] START');
      globalThis.value.message.notify({name:'navBarWidth', value: 260 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_003] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.navBarWidth).assertEqual('260.00vp');

      console.info('[navigationNavbar02_003] END');
      done();
    });

    //Set mode to NavigationMode.Stack
    it('navigationNavbar02_004', 0, async function (done) {

      console.info('[navigationNavbar02_004] START');
      globalThis.value.message.notify({name:'navModeIndex', value: 1 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_004] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.mode).assertEqual('NavigationMode.STACK');

      console.info('[navigationNavbar02_004] END');
      done();
    });

    //Set hideNavBar to true
    it('navigationNavbar02_005', 0, async function (done) {

      console.info('[navigationNavbar02_005] START');
      globalThis.value.message.notify({name:'hideNavBar', value: true });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_005] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.hideNavBar).assertEqual(true);

      console.info('[navigationNavbar02_005] END');
      done();
    });

    //Set minContentWidth to -2
    it('navigationNavbar02_006', 0, async function (done) {

      console.info('[navigationNavbar02_006] START');
      globalThis.value.message.notify({name:'minContentWidth', value: -2 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_006] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.minContentWidth).assertEqual('360.00vp');

      console.info('[navigationNavbar02_006] END');
      done();
    });

    //Set minContentWidth to 0
    // it('navigationNavbar02_007', 0, async function (done) {
    //
    //   console.info('[navigationNavbar02_007] START');
    //   globalThis.value.message.notify({name:'minContentWidth', value: 0 });
    //   await CommonFunc.sleep(1000);
    //   let strJson = getInspectorByKey('navigationNavbar');
    //   let obj = JSON.parse(strJson);
    //   console.info("[navigationNavbar02_007] component obj is: " + JSON.stringify(obj));
    //   await CommonFunc.sleep(1000);
    //   expect(obj.$attrs.minContentWidth).assertEqual('360.00vp');
    //
    //   console.info('[navigationNavbar02_007] END');
    //   done();
    // });

    //Set minContentWidth to 360
    it('navigationNavbar02_008', 0, async function (done) {

      console.info('[navigationNavbar02_008] START');
      globalThis.value.message.notify({name:'minContentWidth', value: 360 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_008] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.minContentWidth).assertEqual('360.00vp');

      console.info('[navigationNavbar02_008] END');
      done();
    });

    //Set mode to NavigationMode.Split
    it('navigationNavbar02_009', 0, async function (done) {

      console.info('[navigationNavbar02_011] START');
      globalThis.value.message.notify({name:'navModeIndex', value: 0 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_011] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.mode).assertEqual('NavigationMode.SPLIT');

      console.info('[navigationNavbar02_011] END');
      done();
    });

    //Set mode to NavigationMode.Auto
    it('navigationNavbar02_010', 0, async function (done) {

      console.info('[navigationNavbar02_012] START');
      globalThis.value.message.notify({name:'navModeIndex', value: 2 });
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('navigationNavbar');
      let obj = JSON.parse(strJson);
      console.info("[navigationNavbar02_012] component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.mode).assertEqual('NavigationMode.AUTO');

      console.info('[navigationNavbar02_012] END');
      done();
    });



  })
}
