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

import { afterEach, beforeAll, beforeEach, describe, it } from '@ohos/hypium';
import router from '@ohos.router';
import { Constants } from './Constants';
import Utils from './Utils';

export default function webControllerAccessStepTest() {

  describe('WebControllerAccessStepTest', () => {

    beforeAll(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebControllerAccessStepTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebControllerAccessStepTest state success " + JSON.stringify(pages));
        if (!("WebControllerAccessStepTest" == pages.name)) {
          console.info("get WebControllerAccessStepTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebControllerAccessStepTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebControllerAccessStepTest page error: " + err);
      }
      done()
    });

    beforeEach(async (done: Function) => {
      console.info("WebControllerAccessStepTest beforeEach start");
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebControllerAccessStepTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebControllerAccessStepTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBCONTROLLER_ACCESSSTEP_0100
    * @tc.name        : testWebControllerAccessStep001
    * @tc.desc        : test webController accessStep performance with raw files
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebControllerAccessStep001', 0, async (done: Function) => {
      Utils.doIt("testWebControllerAccessStep001", 90080, Constants.WEB_CONTROLLER_ACCESSSTEP_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
   * @tc.number      : SUB_WEB_PERFORMANCE_WEBCONTROLLER_ACCESSSTEP_0200
   * @tc.name        : testWebControllerAccessStep002
   * @tc.desc        : test webController accessStep performance with raw files
   * @tc.size        : MediumTest
   * @tc.type        : Function
   * @tc.level       : Level 1
   */
    it('testWebControllerAccessStep002', 0, async (done: Function) => {
      Utils.doIt("testWebControllerAccessStep002", 90085, Constants.WEB_CONTROLLER_ACCESSSTEP_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
   * @tc.number      : SUB_WEB_PERFORMANCE_WEBCONTROLLER_ACCESSSTEP_0300
   * @tc.name        : testWebControllerAccessStep003
   * @tc.desc        : test webController accessStep performance with raw files
   * @tc.size        : MediumTest
   * @tc.type        : Function
   * @tc.level       : Level 1
   */
    it('testWebControllerAccessStep003', 0, async (done: Function) => {
      Utils.doIt("testWebControllerAccessStep003", 90090, Constants.WEB_CONTROLLER_ACCESSSTEP_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
   * @tc.number      : SUB_WEB_PERFORMANCE_WEBCONTROLLER_ACCESSSTEP_0400
   * @tc.name        : testWebControllerAccessStep004
   * @tc.desc        : test webController accessStep performance with raw files
   * @tc.size        : MediumTest
   * @tc.type        : Function
   * @tc.level       : Level 1
   */
    it('testWebControllerAccessStep004', 0, async (done: Function) => {
      Utils.doIt("testWebControllerAccessStep004", 90095, Constants.WEB_CONTROLLER_ACCESSSTEP_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
