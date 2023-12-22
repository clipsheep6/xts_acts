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

export default function webViewPerformanceWebViewController() {

  describe('WebViewPerformanceWebViewController', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewPerformanceWebViewController',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewPerformanceWebViewController state success " + JSON.stringify(pages));
        if (!("WebViewPerformanceWebViewController" == pages.name)) {
          console.info("get WebViewPerformanceWebViewController state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewPerformanceWebViewController page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewPerformanceWebViewController page error: " + err);
      }
      done()
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_GETCUSTOMUSERAGENT_0100
    * @tc.name       : testWebViewControllerGetCustomUserAgent001
    * @tc.desc       : test GetCustomUserAgent
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerGetCustomUserAgent001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerGetCustomUserAgent001", 3201, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_GETPAGEHEIGHT_0100
    * @tc.name       : testWebViewControllerGetPageHeight001
    * @tc.desc       : test testGetPageHeight
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerGetPageHeight001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerGetPageHeight001", 3202, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_GETTITLE_0100
    * @tc.name       : testWebViewControllerGetTitle001
    * @tc.desc       : test GetTitle
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerGetTitle001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerGetTitle001", 3203, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_GETUSERAGENT_0100
    * @tc.name       : testWebViewControllerGetUserAgent001
    * @tc.desc       : test GetUserAgent
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerGetUserAgent001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerGetUserAgent001", 3204, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_GETWEBID_0100
    * @tc.name       : testWebViewControllerGetWebId001
    * @tc.desc       : test GetWebId
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerGetWebId001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerGetWebId001", 3205, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_SEARCHNEXT_0100
    * @tc.name       : testWebViewControllerSearchNext001
    * @tc.desc       : test SearchNext
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerSearchNext001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerSearchNext001", 3206, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_SETCUSTOMUSERAGENT_0100
    * @tc.name       : testWebViewControllerSetCustomUserAgent001
    * @tc.desc       : test SetCustomUserAgent
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerSetCustomUserAgent001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerSetCustomUserAgent001", 3207, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_SEARCHALLASYNC_0100
    * @tc.name       : testWebViewControllerSearchAllAsync001
    * @tc.desc       : test SearchAllAsync
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerSearchAllAsync001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerSearchAllAsync001", 3208, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_HASIMAGE_0100
    * @tc.name       : testWebViewControllerHasImage001
    * @tc.desc       : test hasImage
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerHasImage001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerHasImage001", 1251, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_WEBVIEWCONTROLLER_GETITEMATINDEX_0100
    * @tc.name       : testWebViewControllerGetItemAtIndex001
    * @tc.desc       : test GetItemAtIndex
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testWebViewControllerGetItemAtIndex001', 0, async (done: Function) => {
      Utils.doIt("testWebViewControllerGetItemAtIndex001", 1501, Constants.WEB_VIEW_CONTROLLER_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })
  })
}
