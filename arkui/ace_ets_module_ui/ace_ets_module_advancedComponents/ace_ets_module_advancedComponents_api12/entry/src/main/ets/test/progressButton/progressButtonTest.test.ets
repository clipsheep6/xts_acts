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

import Utils from '../Utils';
import router from '@system.router';
import { Driver, ON } from '@ohos.UiTest';
import events_emitter from '@ohos.events.emitter';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';



export default function progressButtonTest() {
  describe("ProgressButtonTest", function () {
    beforeEach(function (done) {
      console.info("ProgressButtonTest beforeEach start");
    })
    let opt = {
      uri: 'MainAbility/pages/ProgressButton/ProgressButtonTest',
    }
    let result;
    try {
      router.clear();
      let pages = router.getState();
      console.info("get ProgressButtonTest state pages: " + JSON.stringify(pages));
      if (!('ProgressButtonTest' == pages.name)) {
        console.info("get ProgressButtonTest pages.name: " + JSON.stringify(pages.name));
        result = await router.push(opt);
        await Utils.sleep(2000);
        console.info("push ProgressButtonTest page result: " + JSON.stringify(result));
      }
    } catch (err) {
      console.error("push ProgressButtonTest page error: " + err);
    }

    await Utils.sleep(1000);
    console.info('ProgressButtonTest beforeEach end');
    done();
  });

  afterEach(async function () {
    await Utils.sleep(1000);
    console.info('ProgressButtonTest after each called');
  })

  /**
   * @tc.number ProgressButtonTest
   * @tc.name   ProgressButtonTest_001
   * @tc.desc   Test ProgressButton page
   * @tc.size   MediumTest
   * @tc.type   Function
   * @tc.level  0
   */
  it('ProgressButtonTest_001', 0, async function (done) {
    console.info('[ProgressButtonTest_001] START');
    let driver = await Driver.create();
    await driver.delayMs(2000);

    //查询ProgressButton是否存在 '下载按钮'的文本
    let ProgressButtonItem = await driver.findComponent(ON.text('下载按钮'));
    expect(ProgressButtonItem !== null).assertTrue();
    console.info('[ProgressButtonTest_001] END');
    done();
  });

  /**
   * @tc.number ProgressButtonTest_002
   * @tc.name   Test the properties of components
   * @tc.desc   Click ProgressButton item
   * @tc.size   MediumTest
   * @tc.type   Function
   * @tc.level  0
   */

  it('ProgressButtonTest_002', 0, async function (done) {
    console.info('[ProgressButtonTest_002] START');
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
    console.info('[ProgressButtonTest_002] END');
    done();
  })
}