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

export default function webGetCookieManagerTest() {

  describe('WebGetCookieManagerTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebGetCookieManagerTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebGetCookieManagerTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebGetCookieManagerTest state success " + JSON.stringify(pages));
        if (!("WebGetCookieManagerTest" == pages.name)) {
          console.info("get WebGetCookieManagerTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebGetCookieManagerTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebGetCookieManagerTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebGetCookieManagerTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebGetCookieManagerTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_GETCOOKIEMANAGER_0100
    * @tc.name        : testGetCookieManager001
    * @tc.desc        : test GetCookieManager performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testGetCookieManager001', 0, async (done: Function) => {
      Utils.doIt("testGetCookieManager001", 83001, Constants.WEB_GET_COOKIE_MANAGER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
