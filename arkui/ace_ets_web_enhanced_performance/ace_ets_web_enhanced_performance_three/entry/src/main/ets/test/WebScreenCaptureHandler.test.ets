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

export default function webScreenCaptureHandler() {

  describe('WebScreenCaptureHandler', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebScreenCaptureHandler',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebScreenCaptureHandler state success " + JSON.stringify(pages));
        if (!("WebScreenCaptureHandler" == pages.name)) {
          console.info("get WebScreenCaptureHandler state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebScreenCaptureHandler page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebScreenCaptureHandler page error: " + err);
      }
      done()
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_SCREENCAPTUREHANDLER_GETORIGIN_0100
    * @tc.name       : testScreenCaptureHandlerGetOrigin001
    * @tc.desc       : test getOrigin
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testScreenCaptureHandlerGetOrigin001', 0, async (done: Function) => {
      Utils.doIt("testScreenCaptureHandlerGetOrigin001", 6201, Constants.SCREEN_CAPTURE_HANDLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_SCREENCAPTUREHANDLER_GRANT_0100
    * @tc.name       : testScreenCaptureHandlerGrant001
    * @tc.desc       : test grant
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testScreenCaptureHandlerGrant001', 0, async (done: Function) => {
      Utils.doIt("testScreenCaptureHandlerGrant001", 6202, Constants.SCREEN_CAPTURE_HANDLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_SCREENCAPTUREHANDLER_DENY_0100
    * @tc.name       : testScreenCaptureHandlerDeny001
    * @tc.desc       : test PerformanceScreenCaptureConfigDeny
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testScreenCaptureHandlerDeny001', 0, async (done: Function) => {
      Utils.doIt("testScreenCaptureHandlerDeny001", 6203, Constants.SCREEN_CAPTURE_HANDLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })
  })
}
