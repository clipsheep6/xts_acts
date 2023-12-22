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

export default function webZoomTest() {

  describe('WebZoomTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebZoomTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebZoomTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebZoomTest state success " + JSON.stringify(pages));
        if (!("WebZoomTest" == pages.name)) {
          console.info("get WebZoomTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebZoomTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebZoomTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebZoomTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebZoomTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_ZOOM_0100
    * @tc.name        : testZoom001
    * @tc.desc        : test zoom performance with parameter 0
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testZoom001', 0, async (done: Function) => {
      Utils.doIt("testZoom001", 80040, Constants.WEB_ZOOM_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_ZOOM_0200
    * @tc.name        : testZoom002
    * @tc.desc        : test zoom performance with parameter -1
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testZoom002', 0, async (done: Function) => {
      Utils.doIt("testZoom002", 80041, Constants.WEB_ZOOM_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_ZOOM_0300
    * @tc.name        : testZoom003
    * @tc.desc        : test zoom performance with parameter 1
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testZoom003', 0, async (done: Function) => {
      Utils.doIt("testZoom003", 80042, Constants.WEB_ZOOM_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
