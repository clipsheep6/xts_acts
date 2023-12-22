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

export default function webCookieManagerPutAcceptCookieEnabledTest() {

  describe('WebCookieManagerPutAcceptCookieEnabledTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebCookieManagerPutAcceptCookieEnabledTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebCookieManagerPutAcceptCookieEnabledTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebCookieManagerPutAcceptCookieEnabledTest state success " + JSON.stringify(pages));
        if (!("WebCookieManagerPutAcceptCookieEnabledTest" == pages.name)) {
          console.info("get WebCookieManagerPutAcceptCookieEnabledTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebCookieManagerPutAcceptCookieEnabledTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebCookieManagerPutAcceptCookieEnabledTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebCookieManagerPutAcceptCookieEnabledTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebCookieManagerPutAcceptCookieEnabledTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBCOOKIEMANAGER_PUTACCEPTCOOKIEENABLED_0100
    * @tc.name        : testWebCookieManagerPutAcceptCookieEnabled001
    * @tc.desc        : test putAcceptCookieEnabled performance with true
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebCookieManagerPutAcceptCookieEnabled001', 0, async (done: Function) => {
      Utils.doIt("testWebCookieManagerPutAcceptCookieEnabled001", 83250, Constants.WEB_COOKIE_MANAGER_PUT_ACCEPT_COOKIE_ENABLED_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBCOOKIEMANAGER_PUTACCEPTCOOKIEENABLED_0200
    * @tc.name        : testWebCookieManagerPutAcceptCookieEnabled002
    * @tc.desc        : test putAcceptCookieEnabled performance with false
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebCookieManagerPutAcceptCookieEnabled002', 0, async (done: Function) => {
      Utils.doIt("testWebCookieManagerPutAcceptCookieEnabled002", 83251, Constants.WEB_COOKIE_MANAGER_PUT_ACCEPT_COOKIE_ENABLED_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
