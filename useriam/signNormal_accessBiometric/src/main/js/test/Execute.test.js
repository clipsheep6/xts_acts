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
  authType: [userAuth.UserAuthType.PIN],
  authTrustLevel: userAuth.AuthTrustLevel.ATL1,
};
const widgetParamDefault = {
  title: '使用密码验证',
  windowMode: 1,
  navigationButtonText: '确定',
};

export default function execute() {
  describe('execute', function () {
    /*
        * @tc.number    : Security_IAM_getUserAuthInstance_Func_0043
        * @tc.name      : execute_getUserAuthInstance_params_onResult_offResult_start_cancel
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthInstance_Func_0043', 0, async function (done) {
      console.info("Security_IAM_getUserAuthInstance_Func_0043 start");
      const authParam = [
        {
          ...authParamDefault,
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FACE],
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FINGERPRINT],
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authTrustLevel: userAuth.AuthTrustLevel.ATL2,
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FACE],
          authTrustLevel: userAuth.AuthTrustLevel.ATL2,
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FINGERPRINT],
          authTrustLevel: userAuth.AuthTrustLevel.ATL2,
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authTrustLevel: userAuth.AuthTrustLevel.ATL3,
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FINGERPRINT],
          authTrustLevel: userAuth.AuthTrustLevel.ATL3,
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authTrustLevel: userAuth.AuthTrustLevel.ATL4,
          code: userAuth.UserAuthResultCode.NOT_ENROLLED,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FACE],
          authTrustLevel: userAuth.AuthTrustLevel.ATL3,
          code: userAuth.UserAuthResultCode.TRUST_LEVEL_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FACE],
          authTrustLevel: userAuth.AuthTrustLevel.ATL4,
          code: userAuth.UserAuthResultCode.TRUST_LEVEL_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authType: [userAuth.UserAuthType.FINGERPRINT],
          authTrustLevel: userAuth.AuthTrustLevel.ATL4,
          code: userAuth.UserAuthResultCode.TRUST_LEVEL_NOT_SUPPORT,
        },
      ];
      for (let index = 0; index < authParam.length; index++) {
        const { code, ...other } = authParam[index];
        try {
          const userAuthInstance = userAuth.getUserAuthInstance(other, widgetParamDefault);
          userAuthInstance.start();
          console.info(`Security_IAM_getUserAuthInstance_Func_0043 step${index + 1} success`);
          expect(null).assertFail();
        } catch (e) {
          console.info(`Security_IAM_getUserAuthInstance_Func_0043 step${index + 1} fail ${e.code}`);
          expect(e.code).assertEqual(code);
        }
      }

      const widgetParam = [
        {
          ...widgetParamDefault,
        },
        {
          ...widgetParamDefault,
        },
        {
          ...widgetParamDefault,
          windowMode: userAuth.WindowModeType.DIALOG_BOX,
        },
        {
          ...widgetParamDefault,
          windowMode: userAuth.WindowModeType.FULLSCREEN,
        },
      ]
      for (let index = 0; index < widgetParam.length; index++) {
        try {
          userAuth.getUserAuthInstance(authParamDefault, widgetParam[index]);
          console.info(`Security_IAM_getUserAuthInstance_Func_0043 step${index + 13} success`);
          expect(null).assertFail();
        } catch (e) {
          console.info(`Security_IAM_getUserAuthInstance_Func_0043 step${index + 13}  fail ${e.code}`);
          expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
        }
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthInstance_Func_0043 step17 onResult result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step17 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step17 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthInstance_Func_0043 step18 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off("result", {
          callback: (result) => {
            console.info("Security_IAM_getUserAuthInstance_Func_0043 step18 offResult result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step18 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step18 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step19 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step19 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        userAuthInstance.cancel();
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step20 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_getUserAuthInstance_Func_0043 step20 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_getUserAuthInstance_Func_0044
        * @tc.name      : execute_getUserAuthInstance_params
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_getUserAuthInstance_Func_0044', 0, async function (done) {
      console.info("Security_IAM_getUserAuthInstance_Func_0044 start");
      const authParam = [
        {
          authType: [userAuth.UserAuthType.PIN],
          authTrustLevel: userAuth.AuthTrustLevel.ATL1,
          code: 401,
        },
        {
          ...authParamDefault,
          challenge: null,
          code: 401,
        },
        {
          ...authParamDefault,
          challenge: new Uint8Array(['aaa']),
          code: 401,
        },
        {
          challenge: new Uint8Array([49, 49, 49, 49, 49, 49]),
          authTrustLevel: userAuth.AuthTrustLevel.ATL1,
          code: userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authType: [401],
          code: userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authType: [5],
          code: userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authType: [-1],
          code: userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authType: ['a'],
          code: userAuth.UserAuthResultCode.TYPE_NOT_SUPPORT,
        },
        {
          challenge: new Uint8Array([49, 49, 49, 49, 49, 49]),
          authType: [userAuth.UserAuthType.PIN],
          code: userAuth.UserAuthResultCode.TRUST_LEVEL_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authTrustLevel: 401,
          code: userAuth.UserAuthResultCode.TRUST_LEVEL_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authTrustLevel: -1,
          code: userAuth.UserAuthResultCode.TRUST_LEVEL_NOT_SUPPORT,
        },
        {
          ...authParamDefault,
          authTrustLevel: 'a',
          code: userAuth.UserAuthResultCode.TRUST_LEVEL_NOT_SUPPORT,
        },
      ];
      for (let index = 0; index < authParam.length; index++) {
        const { code, ...other } = authParam[index];
        try {
          userAuth.getUserAuthInstance(other, widgetParamDefault);
          console.info(`Security_IAM_getUserAuthInstance_Func_0044 step${index + 1} success`);
          expect(null).assertFail();
        } catch (e) {
          console.info(`Security_IAM_getUserAuthInstance_Func_0044 step${index + 1} fail ${e.code}`);
          expect(e.code).assertEqual(code);
        }
      }

      const widgetParam = [
        {
          title: '使用密码验证',
          windowMode: 1,
        },
        {
          ...widgetParamDefault,
          navigationButtonText: null,
        },
        {
          windowMode: 1,
          navigationButtonText: '确定',
        },
        {
          ...widgetParamDefault,
          title: null,
        },
      ];
      for (let index = 0; index < widgetParam.length; index++) {
        console.info(`Security_IAM_getUserAuthInstance_Func_0044 step${index + 13} 啊啊啊`);
        try {
          userAuth.getUserAuthInstance(authParamDefault, widgetParam[index]);
          console.info(`Security_IAM_getUserAuthInstance_Func_0044 step${index + 13} success`);
          expect(null).assertFail();
        } catch (e) {
          console.info(`Security_IAM_getUserAuthInstance_Func_0044 step${index + 13} fail ${e.code}`);
          expect(e.code).assertEqual(401);
        }
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0002
        * @tc.name      : execute_userAuthInstance_onResult
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0002', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0002 start");
      try {
        let customCode;
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0002 onResult result = " + JSON.stringify(result));
          }
        });
        customCode = userAuth.UserAuthResultCode.SUCCESS;
        console.info("Security_IAM_UserAuthInstance_Func_0002 success");
        expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0002 fail " + e.code);
        expect(null).assertFail();
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0003
        * @tc.name      : execute_userAuthInstance_offResult_offUndefined
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0003', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0003 start");
      try {
        let customCode;
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0003 step1 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0003 step1 offResult result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_UserAuthInstance_Func_0003 step1 success");
        customCode = userAuth.UserAuthResultCode.SUCCESS;
        expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0003 step1 fail " + e.code);
        expect(null).assertFail();
      }

      try {
        let customCode;
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0003 step2 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off("result");
        console.info("Security_IAM_UserAuthInstance_Func_0003 step2 success");
        customCode = userAuth.UserAuthResultCode.SUCCESS;
        expect(customCode).assertEqual(userAuth.UserAuthResultCode.SUCCESS);
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0003 step2 fail " + e.code);
        expect(null).assertFail();
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0004
        * @tc.name      : execute_userAuthInstance_on_is_aaaa_null_undefined
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0004', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0004 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("aaaa", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0004 onAaaa result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_UserAuthInstance_Func_0004 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0004 step1 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on(null, {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0004 onNull result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_UserAuthInstance_Func_0004 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0004 step2 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on();
        console.info("Security_IAM_UserAuthInstance_Func_0004 step3 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0004 step3 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on('result');
        console.info("Security_IAM_UserAuthInstance_Func_0004 step4 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0004 step4 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on('result', null);
        console.info("Security_IAM_UserAuthInstance_Func_0004 step5 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0004 step5 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0005
        * @tc.name      : execute_userAuthInstance_off_is_aaaa_null_undefined_callbackUndefined
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0005', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0005 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0005 step1 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off("aaaa", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0005 step1 offAaaa result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_UserAuthInstance_Func_0005 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0005 step1 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0005 step2 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off(null, {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0005 step2 offNull result = " + JSON.stringify(result));
          }
        });
        console.info("Security_IAM_UserAuthInstance_Func_0005 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0005 step2 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0005 step3 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off();
        console.info("Security_IAM_UserAuthInstance_Func_0005 step3 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0005 step3 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.on("result", {
          callback: (result) => {
            console.info("Security_IAM_UserAuthInstance_Func_0005 step4 onResult result = " + JSON.stringify(result));
          }
        });
        userAuthInstance.off('result', null);
        console.info("Security_IAM_UserAuthInstance_Func_0005 step4 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0005 step4 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0006
        * @tc.name      : execute_userAuthInstance_start
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0006', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0006 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        console.info("Security_IAM_UserAuthInstance_Func_0006 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0006 fail " + e.code);
        expect(e.code).assertEqual(userAuth.UserAuthResultCode.NOT_ENROLLED);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0007
        * @tc.name      : execute_userAuthInstance_start_is_aaaa_null
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0007', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0007 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start('aaaa');
        console.info("Security_IAM_UserAuthInstance_Func_0007 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0007 step1 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start(null);
        console.info("Security_IAM_UserAuthInstance_Func_0007 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0007 step2 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0008
        * @tc.name      : execute_userAuthInstance_cancel
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0008', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0008 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        userAuthInstance.cancel();
        console.info("Security_IAM_UserAuthInstance_Func_0008 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0008 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });

    /*
        * @tc.number    : Security_IAM_UserAuthInstance_Func_0009
        * @tc.name      : execute_userAuthInstance_cancel_is_aaaa_null
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 0
    */
    it('Security_IAM_UserAuthInstance_Func_0009', 0, async function (done) {
      console.info("Security_IAM_UserAuthInstance_Func_0009 start");
      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        userAuthInstance.cancel('aaaa');
        console.info("Security_IAM_UserAuthInstance_Func_0009 step1 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0009 step1 fail " + e.code);
        expect(e.code).assertEqual(401);
      }

      try {
        const userAuthInstance = userAuth.getUserAuthInstance(authParamDefault, widgetParamDefault);
        userAuthInstance.start();
        userAuthInstance.cancel(null);
        console.info("Security_IAM_UserAuthInstance_Func_0009 step2 success");
        expect(null).assertFail();
      } catch (e) {
        console.info("Security_IAM_UserAuthInstance_Func_0009 step2 fail " + e.code);
        expect(e.code).assertEqual(401);
      }
      done();
    });
  });
};