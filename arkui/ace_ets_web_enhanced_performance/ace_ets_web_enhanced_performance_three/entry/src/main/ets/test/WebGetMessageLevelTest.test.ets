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

export default function webGetMessageLevelTest() {

  describe('WebGetMessageLevelTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebGetMessageLevelTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebGetMessageLevelTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebGetMessageLevelTest state success " + JSON.stringify(pages));
        if (!("WebGetMessageLevelTest" == pages.name)) {
          console.info("get WebGetMessageLevelTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebGetMessageLevelTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebGetMessageLevelTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebGetMessageLevelTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebGetMessageLevelTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_GETMESSAGELEVEL_0100
    * @tc.name        : testWebGetMessageLevel001
    * @tc.desc        : test GetMessageLevel performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebGetMessageLevel001', 0, async (done: Function) => {
      Utils.doIt("testWebGetMessageLevel001", 80405, Constants.WEB_GET_MESSAGE_LEVEL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

  })
}
