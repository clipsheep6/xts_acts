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

export default function webViewControllerLoadDataTest() {

  describe('WebViewControllerLoadDataTest', () => {
    beforeEach(async (done: Function) => {
      console.info("WebViewControllerLoadDataTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewControllerLoadDataTest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewControllerLoadDataTest state success " + JSON.stringify(pages));
        if (!("WebViewControllerLoadDataTest" == pages.name)) {
          console.info("get WebViewControllerLoadDataTest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewControllerLoadDataTest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewControllerLoadDataTest page error: " + err);
      }
      done();
    })

    afterEach(async (done: Function) => {
      console.info("WebViewControllerLoadDataTest afterEach start");
      await Utils.sleep(2000);
      console.info("WebViewControllerLoadDataTest afterEach end");
      done();
    })

    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_LOADDATA_0100
    * @tc.name        : testWebViewControllerLoadData001
    * @tc.desc        : test loadData performance with data,mimeType,encoding
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerLoadData001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerLoadData001", 80114, Constants.WEB_VIEW_CONTROLLER_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_LOADDATA_0200
    * @tc.name        : testWebViewControllerLoadData002
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerLoadData002', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerLoadData002", 80115, Constants.WEB_VIEW_CONTROLLER_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_LOADDATA_0300
    * @tc.name        : testWebViewControllerLoadData003
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl,historyUrl
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerLoadData003', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerLoadData003", 80116, Constants.WEB_VIEW_CONTROLLER_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_LOADDATA_0400
    * @tc.name        : testWebViewControllerLoadData004
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl="",historyUrl
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerLoadData004', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerLoadData004", 80117, Constants.WEB_VIEW_CONTROLLER_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_LOADDATA_0500
    * @tc.name        : testWebViewControllerLoadData005
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl,historyUrl=""
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerLoadData005', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerLoadData005", 80118, Constants.WEB_VIEW_CONTROLLER_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
    /*
    * @tc.number      : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_LOADDATA_0600
    * @tc.name        : testWebViewControllerLoadData006
    * @tc.desc        : test loadData performance with data,mimeType,encoding,baseUrl="",historyUrl=""
    * @tc.size        : MediumTest
    * @tc.type        : Function
    * @tc.level       : Level 1
    */
    it('testWebViewControllerLoadData006', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerLoadData006", 80119, Constants.WEB_VIEW_CONTROLLER_LOAD_DATA_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, 0, callBackId, done);
        })
    });
  })
}
