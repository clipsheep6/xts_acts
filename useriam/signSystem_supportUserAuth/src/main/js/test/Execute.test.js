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
        * @tc.number    : Security_IAM_sendNotice_Func_0010
        * @tc.name      : execute_sendNotice_params
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_sendNotice_Func_0010', 0, async function (done) {
      console.info("Security_IAM_sendNotice_Func_0010 start");
      const eventData = [
        {
          ...eventDataDefault
        },
        {
          ...eventDataDefault,
          event: 'EVENT_AUTH_USER_CANCEL'
        },
        {
          ...eventDataDefault,
          event: 'EVENT_AUTH_USER_CANCEL_ALL'
        },
        {
          ...eventDataDefault,
          event: 'EVENT_KEY_DERIVATION_READY'
        },
        {
          ...eventDataDefault,
          type: ['pin']
        },
        {
          ...eventDataDefault,
          type: ['face']
        },
        {
          ...eventDataDefault,
          type: ['fingerprint']
        }
      ];
      for (let index = 0; index < eventData.length; index++) {
        try {
          let customCode;
          userAuth.sendNotice(1, JSON.stringify(eventData[index]));
          console.info(`Security_IAM_sendNotice_Func_0010 step${index + 1} success`);
          customCode = userAuth.UserAuthResultCode.SUCCESS;
          expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
        } catch (e) {
          console.info(`Security_IAM_sendNotice_Func_0010 step${index + 1} fail ${e.code}`);
          expect(null).assertFail();
        }
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_sendNotice_Func_0011
        * @tc.name      : execute_sendNotice_params
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_sendNotice_Func_0011', 0, async function (done) {
      console.info("Security_IAM_sendNotice_Func_0011 start");
      const noticeType = [-1, 'a', null];
      for (let index = 0; index < noticeType.length; index++) {
        try {
          userAuth.sendNotice(noticeType[index], JSON.stringify(eventDataDefault));
          console.info(`Security_IAM_sendNotice_Func_0011 step${index + 1} success`);
          expect(null).assertFail();
        } catch (e) {
          console.info(`Security_IAM_sendNotice_Func_0011 step${index + 1} fail ${e.code}`);
          expect(e.code).assertEqual(401);
        }
      }

      try {
        userAuth.sendNotice();
        console.info("Security_IAM_sendNotice_Func_0011 step4 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_sendNotice_Func_0011 step4 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      const eventData = [
        {
          version: '1',
          payload: {
            type: ['pin']
          }
        },
        {
          ...eventDataDefault,
          event: null
        },
        {
          ...eventDataDefault,
          event: '123'
        },
        {
          ...eventDataDefault,
          version: null
        },
        {
          ...eventDataDefault,
          version: '0'
        },
        {
          ...eventDataDefault,
          version: '-1'
        },
        {
          ...eventDataDefault,
          version: 'a'
        },
        {
          ...eventDataDefault,
          type: null
        },
        {
          ...eventDataDefault,
          type: 'aaa'
        },
        {
          event: 'EVENT_AUTH_TYPE_READY',
          version: '1',
          payload: {}
        },
        {
          ...eventDataDefault,
          payload: null
        },
        {
          event: 'EVENT_AUTH_TYPE_READY',
          version: '1'
        }
      ];
      for (let index = 0; index < eventData.length; index++) {
        try {
          userAuth.sendNotice(1, JSON.stringify(eventData[index]));
          console.info(`Security_IAM_sendNotice_Func_0011 step${index + 5} success`);
          expect(null).assertFail();
        } catch (e) {
          console.info(`Security_IAM_sendNotice_Func_0011 step${index + 5} fail ${e.code}`);
          expect(e.code).assertEqual(401);
        }
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0012
        * @tc.name      : execute_getUserAuthWidgetMgr
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0012', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0012 start");
      try {
        let customCode;
        userAuth.getUserAuthWidgetMgr(1);
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0012 success");
        customCode = userAuth.UserAuthResultCode.SUCCESS;
        expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0012 fail " + e.code);
        expect(null).assertFail();
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0013
        * @tc.name      : Kit interface get userAuthWidgetMgr
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0013', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 start");
      try {
        userAuth.getUserAuthWidgetMgr(null);
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 step1 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT);
      }

      try {
        userAuth.getUserAuthWidgetMgr();
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 step2 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT);
      }

      try {
        userAuth.getUserAuthWidgetMgr(-1);
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 step3 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 step3 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT);
      }

      try {
        userAuth.getUserAuthWidgetMgr('a');
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 step4 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0013 step4 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0014
        * @tc.name      : execute_userAuthInstance_onCommand
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0014', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0014 start");
      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0014 onCommand result = " + JSON.stringify(result));
          }
        });
        let customCode;
        customCode = userAuth.UserAuthResultCode.SUCCESS;
        expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
      } catch (e) {
        console.info(`Security_IAM_getUserAuthWidgetMgr_Func_0014 fail ${e.code}`);
        expect(null).assertFail();
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0015
        * @tc.name      : execute_userAuthInstance_offCommand
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0015', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0015 start");
      try {
        let customCode;
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0015 step1 onCommand result = " + JSON.stringify(result));
          }
        });
        userAuthWidgetMgr.off("command");
        customCode = userAuth.UserAuthResultCode.SUCCESS;
        expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0015 step1 fail " + e.code);
        expect(null).assertFail();
      }

      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0015 step2 onCommand result = " + JSON.stringify(result));
          }
        });
        userAuthWidgetMgr.off("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0015 step2 offCommand result = " + JSON.stringify(result));
          }
        });
        let customCode;
        customCode = userAuth.UserAuthResultCode.SUCCESS;
        expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0015 step2 fail " + e.code);
        expect(null).assertFail();
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0016
        * @tc.name      : execute_userAuthInstance_callback_on_is_command_null_aaaa
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0016', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 start");
      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on();
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step1 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on(null, {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step2 onNull result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step2 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("aaaa", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step3 onAaaa result = " + JSON.stringify((result)));
          }
        });
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step3 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step3 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command");
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step4 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step4 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", "aaaa");
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step5 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0016 step5 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthWidgetMgr_Func_0017
        * @tc.name      : execute_userAuthInstance_callback_on_is_command_null_aaaa
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthWidgetMgr_Func_0017', 0, async function (done) {
      console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 start");
      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step1 onCommand result = " + JSON.stringify(result));
          }
        });
        userAuthWidgetMgr.off();
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step1 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step2 onCommand result = " + JSON.stringify(result));
          }
        });
        userAuthWidgetMgr.off(null, {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step2 offNull result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step2 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthWidgetMgr = userAuth.getUserAuthWidgetMgr(1);
        userAuthWidgetMgr.on("command", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step3 onCommand result = " + JSON.stringify(result));
          }
        });
        userAuthWidgetMgr.off("aaaa", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step3 offAaaa result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step3 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthWidgetMgr_Func_0017 step3 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthInstance_Func_0080
        * @tc.name      : execute_getUserAuthInstance
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthInstance_Func_0080', 0, async function (done) {
      console.info("Security_IAM_getUserAuthInstance_Func_0080 start");
      try {
        userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        console.info("Security_IAM_getUserAuthInstance_Func_0080 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0080 step1 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }

      try {
        userAuth.getUserAuthInstance(authParamDefault, {
          ...widgetParamDefault,
          windowMode: 2
        });
        console.info("Security_IAM_getUserAuthInstance_Func_0080 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0080 step2 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthInstance_Func_0081
        * @tc.name      : execute_getUserAuthInstance
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthInstance_Func_0081', 0, async function (done) {
      console.info("Security_IAM_getUserAuthInstance_Func_0081 start");
      try {
        userAuth.getUserAuthInstance(authParamDefault, {
          title: '使用密码验证',
          navigationButtonText: '确定',
        });
        console.info("Security_IAM_getUserAuthInstance_Func_0081 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0081 step1 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        userAuth.getUserAuthInstance(authParamDefault, {
          ...widgetParamDefault,
          windowMode: null
        });
        console.info("Security_IAM_getUserAuthInstance_Func_0081 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0081 step2 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        userAuth.getUserAuthInstance(authParamDefault, {
          ...widgetParamDefault,
          windowMode: -1
        });
        console.info("Security_IAM_getUserAuthInstance_Func_0081 step3 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0081 step3 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });
  });
};