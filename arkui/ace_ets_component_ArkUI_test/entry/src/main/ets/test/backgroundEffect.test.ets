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
import bundle from '@ohos.bundle.bundleManager';

export default function backgroundEffectJsunit() {
  describe('backgroundEffectJsunit', function () {
    beforeEach(async function (done) {
      console.info("backgroundEffectJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/backgroundEffect',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get backgroundEffectJsunit state pages: " + JSON.stringify(pages));
        if (!("backgroundEffect" == pages.name)) {
          console.info("get backgroundEffectJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push backgroundEffectJsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push backgroundEffectJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('backgroundEffectJsunit_0100', 0, async function (done) {
      // Get the information of the backgroundEffect component
      console.info('[backgroundEffectJsunit_0100] START');
      let strJson = getInspectorByKey('backgroundEffect_id');
      let obj = JSON.parse(strJson);
      console.info("[backgroundEffectJsunit_0100] component obj is: " + JSON.stringify(obj));
      console.info("[backgroundEffectJsunit_0100] component obj is: " + JSON.stringify(obj.$attrs.backgroundBlurStyle));
      expect(obj.$attrs.backgroundBlurStyle.value).assertEqual("BlurStyle.Regular");
      console.info('[backgroundEffectJsunit_0100] END');
      done();
    });

    it('backgroundEffectJsunit_0200', 0, async function (done) {
      // Get the information of the backgroundEffect component
      console.info('[backgroundEffectJsunit_0200] START');
      let strJson = getInspectorByKey('backgroundEffect_id');
      let obj = JSON.parse(strJson);
      console.info("[backgroundEffectJsunit_0200] component obj is: " + JSON.stringify(obj.$attrs.backgroundBlurStyle));
      expect(obj.$attrs.backgroundBlurStyle.options.colorMode).assertEqual("ThemeColorMode.Light");
      console.info('[backgroundEffectJsunit_0200] END');
      done();
    });

    it('backgroundEffectJsunit_0300', 0, async function (done) {
      // Get the information of the backgroundEffect component
      console.info('[backgroundEffectJsunit_0300] START');
      let strJson = getInspectorByKey('backgroundEffect_id');
      let obj = JSON.parse(strJson);
      console.info("[backgroundEffectJsunit_0300] component obj is: " + JSON.stringify(obj.$attrs.backgroundBlurStyle));
      expect(obj.$attrs.backgroundBlurStyle.options.adaptiveColor).assertEqual("AdaptiveColor.Default");
      console.info('[backgroundEffectJsunit_0300] END');
      done();
    });

    it('backgroundEffectJsunit_0400', 0, async function (done) {
      // Get the information of the backgroundEffect component
      console.info('[backgroundEffectJsunit_0400] START');
      let strJson = getInspectorByKey('backgroundEffect_id');
      let obj = JSON.parse(strJson);
      console.info("[backgroundEffectJsunit_0400] component obj is: " + JSON.stringify(obj.$attrs.backgroundBlurStyle));
      expect(obj.$attrs.backgroundBlurStyle.options.scale).assertEqual(1);
      console.info('[backgroundEffectJsunit_0400] END');
      done();
    });
  })
}
