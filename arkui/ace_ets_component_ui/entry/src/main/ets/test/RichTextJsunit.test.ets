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
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.uitest';
import CommonFunc from '../MainAbility/utils/Common';
import {MessageManager,Callback} from '../MainAbility/utils/MessageManager';


export default function RichTextJsunit() {
  describe('RichTextJsunit', function () {
    beforeEach(async function (done) {
      console.info("RichTextJsunit beforeEach start");
      let options = {
        uri: 'MainAbility/pages/RichTextPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get RichTextJsunit state pages: " + JSON.stringify(pages));
        if (!("RichTextPage" == pages.name)) {
          console.info("get RichTextJsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push RichTextJsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push RichTextJsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('RichTextJsunit_0100', 0, async function (done) {
      // Verify the onStart of the RichText component
      console.info('[RichTextJsunit_0100] START');
      await CommonFunc.sleep(1000);
      let driver = await UiDriver.create()
      let textComponent = await driver.findComponent(BY.key('text1'));
      let text = await textComponent.getText();
      expect(text == 'startOn').assertTrue();
      console.info('[RichTextJsunit_0100] END');
      done();
    });

    it('RichTextJsunit_0200', 0, async function (done) {
      // Verify the onComplete of the RichText component
      console.info('[RichTextJsunit_0200] START');
      await CommonFunc.sleep(1000);
      let driver = await UiDriver.create()
      let textComponent = await driver.findComponent(BY.key('text2'));
      let text = await textComponent.getText();
      expect(text == 'completeOn').assertTrue();
      console.info('[RichTextJsunit_0200] END');
      done();
    });
  })
}
