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
        * @tc.number    : Security_IAM_sendNotice_Func_0060
        * @tc.name      : execute_sendNotice
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_sendNotice_Func_0060', 0, async function (done) {
      console.info("Security_IAM_sendNotice_Func_0060 start");
      try {
        userAuth.sendNotice(1, JSON.stringify({
          ...eventDataDefault,
          payload: {
            type: ['face']
          }
        }));
        console.info("Security_IAM_sendNotice_Func_0060 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_sendNotice_Func_0060 fail " + e.code);
        expect(e.code).assertEqual(201);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0078
        * @tc.name      : execute_getUserAuthWidgetMgr
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0078', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0078 start");
      try {
        userAuth.getUserAuthWidgetMgr(1);
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0078 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0078 fail " + e.code);
        expect(e.code).assertEqual(201);
      }
      done();
    });
  });
};