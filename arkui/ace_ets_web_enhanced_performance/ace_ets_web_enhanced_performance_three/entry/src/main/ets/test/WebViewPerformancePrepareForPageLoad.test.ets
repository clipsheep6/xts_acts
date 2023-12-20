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

import { beforeEach, describe, it } from '@ohos/hypium';
import router from '@ohos.router';
import Utils from './Utils';
import { Constants } from './Constants'

export default function webViewPerformancePrepareForPageLoad() {

  describe('WebViewPerformancePrepareForPageLoad', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewPerformancePrepareForPageLoad',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewPerformancePrepareForPageLoad state success " + JSON.stringify(pages));
        if (!("WebViewPerformancePrepareForPageLoad" == pages.name)) {
          console.info("get WebViewPerformancePrepareForPageLoad state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewPerformancePrepareForPageLoad page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewPerformancePrepareForPageLoad page error: " + err);
      }
      done()
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_PREPAREFORPAGELOAD_0100
    * @tc.name       : testWebViewControllerPrepareForPageLoad001
    * @tc.desc       : test prepareForPageLoad
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerPrepareForPageLoad001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerPrepareForPageLoad001", 1511, Constants.WEB_PREPARE_FOR_PAGE_LOAD,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })
  })
}
