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
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../MainAbility/utils/Common';




export default function scrollList2Jsunit() {
  describe('scrollList2Jsunit', function () {
    beforeEach(async function (done) {
      console.info("scrollList2Jsunit beforeEach start");
      let options = {
        uri: "MainAbility/pages/scrollList2",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get scrollList2Jsunit state pages: " + JSON.stringify(pages));
        if (!("scrollList2" == pages.name)) {
          console.info("get scrollList2Jsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push scrollList2Jsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push scrollList2Jsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });


    /* *
    * @tc.number: SUB_ACE_TS_COMPONENT_SR000I46QC_0024
    * @tc.name  : scrollList2Jsunit_0001
    * @tc.desc  : scrollToIndex null
    * @tc.level : Level 2
    */
    it('scrollList2Jsunit_0001', 0, async function (done) {
      console.info('[scrollList2Jsunit_0001] START');
      await CommonFunc.sleep(1000);
      let driver = Driver.create();
      let btn = await driver.findComponent(ON.id('button_scrollTo'));
      await btn.click();
      await CommonFunc.sleep(100);

      let strJson1 = getInspectorByKey('scroll_list');
      let obj1 = JSON.parse(strJson1);
      console.info("[scrollListJsunit_0001] obj1 is: " + JSON.stringify(obj1));
      expect(obj1.$attrs.listDirection).assertEqual('Axis.Horizontal');


      let strJson2 = getInspectorByKey('scrolllist2_text');
      let obj2 = JSON.parse(strJson2);
      expect(obj2.$attrs.content).assertEqual('0');

      console.info('[scrollList2Jsunit_0001] END');
      done();
    });

  })
}

