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

export default function webRunJavaScriptTest() {

  describe('WebRunJavaScriptTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebRunJavaScriptTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebRunJavaScriptTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebRunJavaScriptTest state success " + JSON.stringify(pages));
        if (!("WebRunJavaScriptTest" == pages.name)) {
          console.info("get WebRunJavaScriptTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebRunJavaScriptTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebRunJavaScriptTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebRunJavaScriptTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebRunJavaScriptTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_RUNJAVASCRIPT_0100
    * @tc.name        : testRunJavaScript001
    * @tc.desc        : test runJavaScript performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testRunJavaScript001', 0, async (done: Function) => {
      Utils.doIt("testRunJavaScript001", 83065, Constants.WEB_RUN_JAVASCRIPT_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_RUNJAVASCRIPT_0200
    * @tc.name        : testRunJavaScript002
    * @tc.desc        : test runJavaScript performance without callback
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testRunJavaScript002', 0, async (done: Function) => {
      Utils.doIt("testRunJavaScript002", 83065, Constants.WEB_RUN_JAVASCRIPT_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

  })
}
