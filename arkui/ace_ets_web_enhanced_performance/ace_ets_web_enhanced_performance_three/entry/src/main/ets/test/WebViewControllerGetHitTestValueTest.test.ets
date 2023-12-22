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

import { afterEach, beforeEach, describe, it } from '@ohos/hypium';
import { Constants } from './Constants';
import Utils from './Utils';
import router from '@ohos.router';

export default function webViewControllerGetHitTestValueTest() {

  describe('WebViewControllerGetHitTestValueTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebViewControllerGetHitTestValueTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewControllerGetHitTestValueTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewControllerGetHitTestValueTest state success " + JSON.stringify(pages));
        if (!("WebViewControllerGetHitTestValueTest" == pages.name)) {
          console.info("get WebViewControllerGetHitTestValueTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewControllerGetHitTestValueTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewControllerGetHitTestValueTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebViewControllerGetHitTestValueTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebViewControllerGetHitTestValueTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_GETHITTESTVALUE_0100
    * @tc.name        : testWebViewControllerGetHitTestValue001
    * @tc.desc        : test getHitTestValue performance with webView.WebHitTestType.EditText
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerGetHitTestValue001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerGetHitTestValue001", 80201, Constants.WEB_VIEW_CONTROLLER_GET_HIT_TEST_VALUE_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
