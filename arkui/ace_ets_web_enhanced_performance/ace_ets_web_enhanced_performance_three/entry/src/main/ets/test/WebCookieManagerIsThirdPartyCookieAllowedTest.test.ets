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

export default function webCookieManagerIsThirdPartyCookieAllowedTest() {

  describe('WebCookieManagerIsThirdPartyCookieAllowedTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebCookieManagerIsThirdPartyCookieAllowedTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebCookieManagerIsThirdPartyCookieAllowedTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebCookieManagerIsThirdPartyCookieAllowedTest state success " + JSON.stringify(pages));
        if (!("WebCookieManagerIsThirdPartyCookieAllowedTest" == pages.name)) {
          console.info("get WebCookieManagerIsThirdPartyCookieAllowedTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebCookieManagerIsThirdPartyCookieAllowedTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebCookieManagerIsThirdPartyCookieAllowedTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebCookieManagerIsThirdPartyCookieAllowedTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebCookieManagerIsThirdPartyCookieAllowedTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBCOOKIEMANAGER_ISTHIRDPARTYCOOKIEALLOWED_0100
    * @tc.name        : testWebCookieManagerIsThirdPartyCookieAllowed001
    * @tc.desc        : test isThirdPartyCookieAllowed performance with true
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebCookieManagerIsThirdPartyCookieAllowed001', 0, async (done: Function) => {
      Utils.doIt("testWebCookieManagerIsThirdPartyCookieAllowed001", 83245, Constants.WEB_COOKIE_MANAGER_IS_THIRD_PARTY_COOKIE_ALLOWED_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBCOOKIEMANAGER_ISTHIRDPARTYCOOKIEALLOWED_0200
    * @tc.name        : testWebCookieManagerIsThirdPartyCookieAllowed002
    * @tc.desc        : test isThirdPartyCookieAllowed performance with false
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebCookieManagerIsThirdPartyCookieAllowed002', 0, async (done: Function) => {
      Utils.doIt("testWebCookieManagerIsThirdPartyCookieAllowed002", 83246, Constants.WEB_COOKIE_MANAGER_IS_THIRD_PARTY_COOKIE_ALLOWED_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
