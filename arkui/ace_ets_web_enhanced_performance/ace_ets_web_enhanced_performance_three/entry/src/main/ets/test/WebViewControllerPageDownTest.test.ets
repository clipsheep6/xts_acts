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

export default function webViewControllerPageDownTest() {

  describe('WebViewControllerPageDownTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebViewControllerPageDownTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewControllerPageDownTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewControllerPageDownTest state success " + JSON.stringify(pages));
        if (!("WebViewControllerPageDownTest" == pages.name)) {
          console.info("get WebViewControllerPageDownTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewControllerPageDownTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewControllerPageDownTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebViewControllerPageDownTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebViewControllerPageDownTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_PAGEDOWN_0100
    * @tc.name        : testWebViewControllerPageDown001
    * @tc.desc        : test pageDown performance with bottom is true
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerPageDown001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerPageDown001", 83210, Constants.WEB_VIEW_CONTROLLER_PAGE_DOWN_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_PAGEDOWN_0200
    * @tc.name        : testWebViewControllerPageDown002
    * @tc.desc        : test pageDown performance with bottom is false
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerPageDown002', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerPageDown002", 83212, Constants.WEB_VIEW_CONTROLLER_PAGE_DOWN_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

  })
}
