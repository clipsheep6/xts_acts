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
import Utils from './Utils';
import router from '@ohos.router';
import { Constants } from './Constants'

export default function webViewPerformancePermissionRequest() {

  describe('WebViewPerformancePermissionRequest', () => {
    beforeEach(async (done: Function) => {
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/WebViewPerformancePermissionRequest',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get WebViewPerformancePermissionRequest state success " + JSON.stringify(pages));
        if (!("WebViewPerformancePermissionRequest" == pages.name)) {
          console.info("get WebViewPerformancePermissionRequest state success " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await Utils.sleep(2000);
          console.info("push WebViewPerformancePermissionRequest page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push WebViewPerformancePermissionRequest page error: " + err);
      }
      done()
    })


    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_PERMISSIONREQUEST_GETORIGIN_0100
    * @tc.name       : testPermissionRequestGetOrigin001
    * @tc.desc       : test getOrigin
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testPermissionRequestGetOrigin001', 0, async (done: Function) => {
      Utils.doIt("testPermissionRequestGetOrigin001", 1102, Constants.WEB_PERMISSION_REQUEST_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_PERMISSIONREQUEST_GETACCESSIBLERESOURCE_0100
    * @tc.name       : testPermissionRequestGetAccessibleResource001
    * @tc.desc       : test getAccessibleResource
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testPermissionRequestGetAccessibleResource001', 0, async (done: Function) => {
      Utils.doIt("testPermissionRequestGetAccessibleResource001", 1103, Constants.WEB_PERMISSION_REQUEST_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
    * @tc.number     : SUB_WEB_PERFORMANCE_PERMISSIONREQUEST_DENY_0100
    * @tc.name       : testPermissionRequestDeny001
    * @tc.desc       : test deny
    * @tc.size       : MediumTest
    * @tc.type       : Function
    * @tc.level      : Level 1
    */
    it('testPermissionRequestDeny001', 0, async (done: Function) => {
      Utils.doIt("testPermissionRequestDeny001", 3101, Constants.WEB_PERMISSION_REQUEST_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })

    /*
        * @tc.number     : SUB_WEB_PERFORMANCE_PERMISSIONREQUEST_GRANT_0100
        * @tc.name       : testPermissionRequestGrant001
        * @tc.desc       : test onPermissionRequestGrant
        * @tc.size       : MediumTest
        * @tc.type       : Function
        * @tc.level      : Level 1
        */
    it('testPermissionRequestGrant001', 0, async (done: Function) => {
      Utils.doIt("testPermissionRequestGrant001", 3102, Constants.WEB_PERMISSION_REQUEST_BUTTON_KEY,
        (testCaseName: string, callBackId: number) => {
          Utils.registerEvent(testCaseName, -1, callBackId, done);
        })
    })
  })
}
