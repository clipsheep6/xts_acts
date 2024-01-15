/*
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
import CommonFunc from '../../MainAbility/utils/Common';

export default function onclickGetFocus12Jsunit() {
  describe('onclickGetFocus12Jsunit', function () {
    beforeEach(async function (done) {
      console.info("onclickGetFocus12Jsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/onclickGetFocus/onclickGetFocus12',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get onclickGetFocus12Jsunit state pages: " + JSON.stringify(pages));
        if (!("onclickGetFocus12" == pages.name)) {
          console.info("get onclickGetFocus12Jsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push onclickGetFocus12Jsunit page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push onclickGetFocus12Jsunit page error: " + err);
        expect().assertFail();
      }
      done()
    });

    // 2-SUB_ACE_UI_ABILITY_FOCUS_001
    it('onclickGetFocus12Jsunit_0010', 0, async function (done) {
      await CommonFunc.sleep(1000);
      console.info('onclickGetFocus12Jsunit_0010 START');
      let driver = await UiDriver.create()
      await CommonFunc.sleep(1000);
      await driver.triggerKey(2049)
      await CommonFunc.sleep(1000);
      await driver.triggerKey(2054)
      await CommonFunc.sleep(1000);
      let strJson1 = getInspectorByKey('onclickGetFocus12Text_Father');
      let obj1 = JSON.parse(strJson1);
      console.info("[onclickGetFocus12Jsunit_0010] component obj is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.content).assertEqual("fatherstart");
      let strJson2 = getInspectorByKey('onclickGetFocus12Text_Son');
      let obj2 = JSON.parse(strJson2);
      console.info("[onclickGetFocus12Jsunit_0010] component obj is: " + JSON.stringify(obj2));
      expect(obj2.$attrs.content).assertEqual("sonfocus");
      console.info('[onclickGetFocus12Jsunit_0010] END');
      done();
    });

  })
}
