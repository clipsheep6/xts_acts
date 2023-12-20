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

export default function webRefreshTest() {

  describe('WebRefreshTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebRefreshTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebRefreshTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebRefreshTest state success " + JSON.stringify(pages));
        if (!("WebRefreshTest" == pages.name)) {
          console.info("get WebRefreshTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebRefreshTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebRefreshTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebRefreshTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebRefreshTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_REFRESH_0100
    * @tc.name        : testRefresh001
    * @tc.desc        : test refresh performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testRefresh001', 0, async (done: Function) => {
      Utils.doIt("testRefresh001", 80105, Constants.WEB_REFRESH_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_REFRESH_0200
    * @tc.name        : testRefresh002
    * @tc.desc        : test refresh performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testRefresh002', 0, async (done: Function) => {
      Utils.doIt("testRefresh002", 80111, Constants.WEB_REFRESH_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_REFRESH_0300
    * @tc.name        : testRefresh003
    * @tc.desc        : test refresh performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testRefresh003', 0, async (done: Function) => {
      Utils.doIt("testRefresh003", 80112, Constants.WEB_REFRESH_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_REFRESH_0400
    * @tc.name        : testRefresh004
    * @tc.desc        : test refresh performance
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testRefresh004', 0, async (done: Function) => {
      Utils.doIt("testRefresh004", 80113, Constants.WEB_REFRESH_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

  })
}
