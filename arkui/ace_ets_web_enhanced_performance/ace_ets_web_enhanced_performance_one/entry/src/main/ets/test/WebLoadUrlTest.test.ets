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

export default function webLoadUrlTest() {

  describe('WebLoadUrlTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebLoadUrlTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebLoadUrlTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebLoadUrlTest state success " + JSON.stringify(pages));
        if (!("WebLoadUrlTest" == pages.name)) {
          console.info("get WebLoadUrlTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebLoadUrlTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebLoadUrlTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebLoadUrlTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebLoadUrlTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0100
    * @tc.name        : testLoadUrl001
    * @tc.desc        : test loadUrl performance with raw files
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl001', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl001", 80010, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0200
    * @tc.name        : testLoadUrl002
    * @tc.desc        : test loadUrl performance with resource
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl002', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl002", 80011, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0300
    * @tc.name        : testLoadUrl003
    * @tc.desc        : test loadUrl performance with url
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl003', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl003", 80012, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0400
    * @tc.name        : testLoadUrl004
    * @tc.desc        : test loadUrl performance with sandbox file
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl004', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl004", 80013, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0500
    * @tc.name        : testLoadUrl005
    * @tc.desc        : test loadUrl performance with raw files and customHeaders
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl005', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl005", 80014, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0600
    * @tc.name        : testLoadUrl006
    * @tc.desc        : test loadUrl performance with resource and customHeaders
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl006', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl006", 80015, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0700
    * @tc.name        : testLoadUrl007
    * @tc.desc        : test loadUrl performance with url and customHeaders
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl007', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl007", 80016, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_LOADURL_0800
    * @tc.name        : testLoadUrl008
    * @tc.desc        : test loadUrl performance with sandbox file and customHeaders
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testLoadUrl008', 0, async (done: Function) => {
      Utils.doIt("testLoadUrl008", 80017, Constants.WEB_LOAD_URL_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });

  })
}
