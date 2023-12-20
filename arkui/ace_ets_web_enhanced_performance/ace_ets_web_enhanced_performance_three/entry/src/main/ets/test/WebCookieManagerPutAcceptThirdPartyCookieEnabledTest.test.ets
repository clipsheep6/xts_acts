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

export default function webCookieManagerPutAcceptThirdPartyCookieEnabledTest() {

  describe('WebCookieManagerPutAcceptThirdPartyCookieEnabledTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebCookieManagerPutAcceptThirdPartyCookieEnabledTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebCookieManagerPutAcceptThirdPartyCookieEnabledTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebCookieManagerPutAcceptThirdPartyCookieEnabledTest state success " + JSON.stringify(pages));
        if (!("WebCookieManagerPutAcceptThirdPartyCookieEnabledTest" == pages.name)) {
          console.info("get WebCookieManagerPutAcceptThirdPartyCookieEnabledTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebCookieManagerPutAcceptThirdPartyCookieEnabledTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebCookieManagerPutAcceptThirdPartyCookieEnabledTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebCookieManagerPutAcceptThirdPartyCookieEnabledTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebCookieManagerPutAcceptThirdPartyCookieEnabledTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBCOOKIEMANAGER_PUTACCEPTTHIRDPARTYCOOKIEENABLED_0100
    * @tc.name        : testWebCookieManagerPutAcceptThirdPartyCookieEnabled001
    * @tc.desc        : test putAcceptThirdPartyCookieEnabled performance with true
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebCookieManagerPutAcceptThirdPartyCookieEnabled001', 0, async (done: Function) => {
      Utils.doIt("testWebCookieManagerPutAcceptThirdPartyCookieEnabled001", 83255, Constants.WEB_COOKIE_MANAGER_PUT_ACCEPT_THIRD_PARTY_COOKIE_ENABLED_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBCOOKIEMANAGER_PUTACCEPTTHIRDPARTYCOOKIEENABLED_0200
    * @tc.name        : testWebCookieManagerPutAcceptThirdPartyCookieEnabled002
    * @tc.desc        : test putAcceptThirdPartyCookieEnabled performance with false
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebCookieManagerPutAcceptThirdPartyCookieEnabled002', 0, async (done: Function) => {
      Utils.doIt("testWebCookieManagerPutAcceptThirdPartyCookieEnabled002", 83256, Constants.WEB_COOKIE_MANAGER_PUT_ACCEPT_THIRD_PARTY_COOKIE_ENABLED_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
