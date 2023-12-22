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

export default function webViewControllerSetWebDebuggingAccessTest() {

  describe('WebViewControllerSetWebDebuggingAccessTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebViewControllerSetWebDebuggingAccessTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewControllerSetWebDebuggingAccessTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewControllerSetWebDebuggingAccessTest state success " + JSON.stringify(pages));
        if (!("WebViewControllerSetWebDebuggingAccessTest" == pages.name)) {
          console.info("get WebViewControllerSetWebDebuggingAccessTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewControllerSetWebDebuggingAccessTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewControllerSetWebDebuggingAccessTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebViewControllerSetWebDebuggingAccessTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebViewControllerSetWebDebuggingAccessTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_SETWEBDEBUGGINGACCESS_0100
    * @tc.name        : testWebViewControllerSetWebDebuggingAccess001
    * @tc.desc        : test setWebDebuggingAccess performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerSetWebDebuggingAccess001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerSetWebDebuggingAccess001", 83200, Constants.WEB_VIEW_CONTROLLER_SET_WEB_DEBUGGING_ACCESS_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_SETWEBDEBUGGINGACCESS_0200
    * @tc.name        : testWebViewControllerSetWebDebuggingAccess002
    * @tc.desc        : test setWebDebuggingAccess performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerSetWebDebuggingAccess002', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerSetWebDebuggingAccess002", 83202, Constants.WEB_VIEW_CONTROLLER_SET_WEB_DEBUGGING_ACCESS_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

  })
}
