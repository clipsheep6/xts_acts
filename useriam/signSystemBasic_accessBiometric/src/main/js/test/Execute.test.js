/*
 * Copyright (C) 2022-2023 Huawei Device Co., Ltd.
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

import { describe, it, expect } from '@ohos/hypium'
import userAuth from '@ohos.userIAM.userAuth'

const authParamDefault = {
  challenge: new Uint8Array([49, 49, 49, 49, 49, 49]),
  authType: [1],
  authTrustLevel: 10000,
};
const widgetParamDefault = {
  title: '请输入密码',
  windowMode: 1,
  navigationButtonText: '确定',
};

export default function execute() {
  describe('execute', function () {
    /*
        * @tc.number    : Security_IAM_getUserAuthInstance_Func_0045
        * @tc.name      : execute_getUserAuthInstance
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthInstance_Func_0045', 0, async function (done) {
      console.info("Security_IAM_getUserAuthInstance_Func_0045 start");
      try {
        userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        console.info("Security_IAM_getUserAuthInstance_Func_0045 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0045 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }
      done();
    });

    /*
      * @tc.number    : Security_IAM_UserAuthInstance_Func_0054
      * @tc.name      : execute_userAuthInstance_onResult
      * @tc.size      : MediumTest
      * @tc.type      : Function
      * @tc.level     : Level 0
 */
    it('Security_IAM_UserAuthInstance_Func_0054', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0054 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0054 onResult result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_UserAuthInstance_Func_0054 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0054 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }
      done();
    });

    /*
          * @tc.number    : Security_IAM_UserAuthInstance_Func_0056
          * @tc.name      : execute_userAuthInstance_off
          * @tc.size      : MediumTest
          * @tc.type      : Function
          * @tc.level     : Level 0
     */
    it('Security_IAM_UserAuthInstance_Func_0056', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0056 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0056 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0056 offResult result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_UserAuthInstance_Func_0056 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0056 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }
      done();
    });

    /*
          * @tc.number    : Security_IAM_UserAuthInstance_Func_0057
          * @tc.name      : execute_userAuthInstance_start
          * @tc.size      : MediumTest
          * @tc.type      : Function
          * @tc.level     : Level 0
     */
    it('Security_IAM_UserAuthInstance_Func_0057', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0057 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        console.info("Security_IAM_UserAuthInstance_Func_0057 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0057 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }
      done();
    });

    /*
          * @tc.number    : Security_IAM_UserAuthInstance_Func_0058
          * @tc.name      : execute_userAuthInstance_cancel
          * @tc.size      : MediumTest
          * @tc.type      : Function
          * @tc.level     : Level 0
     */
    it('Security_IAM_UserAuthInstance_Func_0058', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0058 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        userAuthInstance.cancel();
        console.info("Security_IAM_UserAuthInstance_Func_0058 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0058 fail " + e.code);
      }
      done();
    });
  });
};