/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import { Driver, ON } from '@ohos.UiTest';
import router from '@system.router';
import events_emitter from '@ohos.events.emitter';
import Utils from '../Utils';



export default function progressButtonTest() {
  describe('progressButtonTest', function () {
    beforeEach(async function (done) {
      console.info("progressButtonTest beforeEach start");
      let options = {
        uri: 'MainAbility/pages/progressButton/progressButtonTest',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get progressButtonTest state pages: " + JSON.stringify(pages));
        if (!('progressButtonTest' == pages.name)) {
          console.info("get progressButtonTest pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push progressButtonTest page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push progressButtonTest page error: " + err);
      }

      await Utils.sleep(1000);
      console.info('progressButtonTest beforeEach end');
      done();
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info('progressButtonTest after each called');
    })

    /**
     * @tc.number progressButtonTest
     * @tc.name   progressButtonTest_0100
     * @tc.desc   Test progressButton page
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('progressButtonTest_0100', 0, async function (done) {
      console.info('[progressButtonTest_0100] START');
      let driver = await Driver.create();
      await driver.delayMs(2000);

      //查询ProgressButton是否存在 '下载按钮'的文本
      let ProgressButtonItem = await driver.findComponent(ON.text('下载按钮'));
      expect(ProgressButtonItem !== null).assertTrue();
      console.info('[progressButtonTest_0100] END');
      done();
    });

    /**
     * @tc.number progressButtonTest_0200
     * @tc.name   Test the properties of components
     * @tc.desc   Click ProgressButton item
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */

    it('progressButtonTest_0200', 0, async function (done) {
      console.info('[progressButtonTest_0200] START');
      let driver = await Driver.create();
      await Utils.sleep(2000);
      //点击按钮触发 下载状态
      let buttonText1 = await driver.findComponent(ON.text('等待中'));
      let buttonText2 = await driver.findComponent(ON.text('打开'));
      await buttonText1.click();
      await buttonText2.click();
      await Utils.sleep(1000);

      let buttonText3 = await driver.findComponent(ON.text('打开'));
      expect(buttonText3 !== null).assertTrue();
      console.info('[progressButtonTest_0200] END');
      done();
    });
  })
}