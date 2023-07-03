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
  title: '使用密码验证',
  windowMode: 1,
  navigationButtonText: '确定',
};
const eventDataDefault = {
  event: 'EVENT_AUTH_TYPE_READY',
  version: '1',
  payload: {
    type: ['pin']
  }
}

export default function execute() {
  describe('execute', function () {
    /*
        * @tc.number    : Security_IAM_sendNotice_Func_0059
        * @tc.name      : execute_sendNotice
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_sendNotice_Func_0059', 0, async function (done) {
      console.info("Security_IAM_sendNotice_Func_0059 start");
      try {
        userAuth.sendNotice(1, JSON.stringify({
          ...eventDataDefault,
          payload: {
            type: ['face']
          }
        }));
        console.info("Security_IAM_sendNotice_Func_0059 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_sendNotice_Func_0059 fail " + e.code);
        expect(e.code).assertEqual(202);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0061
        * @tc.name      : execute_getUserAuthWidgetMgr
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0061', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0061 start");
      try {
        userAuth.getUserAuthWidgetMgr(1);
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0061 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0061 fail " + e.code);
        expect(e.code).assertEqual(202);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0063
        * @tc.name      : execute_userAuthInstance_onCommand
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0063', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0063 start");
      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0063 onCommand result = " + JSON.stringify(result));
          }
        });
        expect(null).assertFail();
      } catch (e) {
        console.info(`Security_IAM_getUserAuthWidgetMgr_Func_0063 fail ${e.code}`);
        expect(e.code).assertEqual(202);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0064
        * @tc.name      : execute_userAuthWidgetMgr_off
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0064', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0064 start");
      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0064 onCommand result = " + JSON.stringify(result));
          }
        });
        userAuthWidgetMgr.off("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0064 offCommand result = " + JSON.stringify(result));
          }
        });
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0064 fail " + e.code);
        expect(e.code).assertEqual(202);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthInstance_Func_0082
        * @tc.name      : execute_getUserAuthInstance
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthInstance_Func_0082', 0, async function (done) {
      console.info("Security_IAM_getUserAuthInstance_Func_0082 start");
      try {
        userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        console.info("Security_IAM_getUserAuthInstance_Func_0082 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0082 step1 fail " + e.code);
        expect(e.code).assertEqual(202);
      }

      try {
        userAuth.getUserAuthInstance(authParamDefault, {
          ...widgetParamDefault,
          windowMode: 2
        });
        console.info("Security_IAM_getUserAuthInstance_Func_0082 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0082 step2 fail " + e.code);
        expect(e.code).assertEqual(202);
      }
      done();
    });
  });
};