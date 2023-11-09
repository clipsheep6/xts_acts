/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import certManager from '@ohos.security.certManager';
import * as commonParameter from './utils/common/common_parameter';
import * as commonFunction from './utils/common/common_function';
import * as thCallback from './utils/AbnormalFunction/thirdPartyiCallback';


export default function certManagerThirdPartyJsAPIAbnormalTestUnit() {
  describe('certManagerThirdPartyJsAPIAbnormalTestUnit', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async function () {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.

      // try {
      //   await commonFunction.installUserTrustedCertificates();
      // } catch (err) {
      //   console.error("certManagerThirdPartyJsAPIAbnormalTestUnit beforeAll err: " + err);
      //   expect(null).assertFail();
      // }
    })
    beforeEach(function () {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(function () {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(async function () {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
      await certManager.uninstallAllUserTrustedCertificate().then(status => {
        expect(status).assertTrue();
      }).catch(err => {
        console.error("certManagerThirdPartyJsAPIAbnormalTestUnit afterAll err1: " + err.code);
        expect(null).assertFail();
      })
      await certManager.uninstallAllAppCertificate().then(status => {
        expect(status).assertTrue();
      }).catch(err => {
        console.error("certManagerThirdPartyJsAPIAbnormalTestUnit afterAll err2: " + err.code);
        expect(null).assertFail();
      })
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0100
     * @tc.name Test getSystemTrustedCertificate with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0100', 0, async function (done) {
      try {
        await thCallback.getSystemTrustedCertificateAbnormal("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.getSystemTrustedCertificateAbnormal(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.getSystemTrustedCertificateAbnormal("111");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500004);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0200
     * @tc.name Test getSystemTrustedCertificate with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0200', 0, async function (done) {
      let certUri: string = "1d3472b9.0";
      try {
        await certManager.getSystemTrustedCertificate("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.getSystemTrustedCertificate(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.getSystemTrustedCertificate("111");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500004);
      }
      try {
        await certManager.getSystemTrustedCertificate(certUri, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0300
     * @tc.name Test getUserTrustedCertificate with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0300', 0, async function (done) {
      try {
        await thCallback.getUserTrustedCertificateAbnormal("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.getUserTrustedCertificateAbnormal(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.getUserTrustedCertificateAbnormal("111");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500004);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0400
     * @tc.name Test getUserTrustedCertificate with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0400', 0, async function (done) {
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.getUserTrustedCertificateList();
      } catch (err) {
        expect(null).assertFail();
      }
      let certUri: string = cmResult.certList[0].uri;
      try {
        await certManager.getUserTrustedCertificate("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.getUserTrustedCertificate(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.getUserTrustedCertificate("111");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500004);
      }
      try {
        await certManager.getUserTrustedCertificate(certUri, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0500
     * @tc.name Test installPrivateCertificate with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0500', 0, async function (done) {
      //此处接口底层完全没有做非法参数拦截，怎么安装都能成功
      let keystore: Uint8Array = commonParameter.priRsaCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoRsa';
      try {
        await thCallback.installPrivateCertificateAbnormal(commonParameter.invalidCredInfo, keystorePwd, certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.installPrivateCertificateAbnormal("", keystorePwd, certAlias);
        expect(null).assertFail();
      } catch (err) {
        console.error(err.message);
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.installPrivateCertificateAbnormal(null, keystorePwd, certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.installPrivateCertificateAbnormal(keystore, 'aaaa', certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.installPrivateCertificateAbnormal(keystore, 111, certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.installPrivateCertificateAbnormal(keystore, null, certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.installPrivateCertificateAbnormal(keystore, keystorePwd, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0600
     * @tc.name Test installPrivateCertificate with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0600', 0, async function (done) {
      //此处接口底层完全没有做非法参数拦截，怎么安装都能成功
      let keystore: Uint8Array = commonParameter.priRsaCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoRsa';
      try {
        await certManager.installPrivateCertificate(commonParameter.invalidCredInfo, keystorePwd, certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.installPrivateCertificate(null, keystorePwd, certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.installPrivateCertificate(keystore, 'aaaa', certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.installPrivateCertificate(keystore, null, certAlias);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.installPrivateCertificate(keystore, keystorePwd, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.installPrivateCertificate(keystore, keystorePwd, certAlias, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0700
     * @tc.name Test uninstallPrivateCertificate with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0700', 0, async function (done) {
      //凭据keyUri输入错误字符串可以卸载成功，有bug
      try {
        await new Promise((resolve, reject) => {
          certManager.uninstallPrivateCertificate("", (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await new Promise((resolve, reject) => {
          certManager.uninstallPrivateCertificate(null, (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await new Promise((resolve, reject) => {
          certManager.uninstallPrivateCertificate("aabb", (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0800
     * @tc.name Test uninstallPrivateCertificate with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0800', 0, async function (done) {
      //凭据keyUri输入错误字符串可以卸载成功，有bug
      let keystore: Uint8Array = commonParameter.priRsaCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoRsa';
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.installPrivateCertificate(keystore, keystorePwd, certAlias);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.uninstallPrivateCertificate("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.uninstallPrivateCertificate(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.uninstallPrivateCertificate("aabb");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.uninstallPrivateCertificate(cmResult.uri, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0900
     * @tc.name Test getAppCertificate with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_0900', 0, async function (done) {
      try {
        await new Promise((resolve, reject) => {
          certManager.getAppCertificate("", (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await new Promise((resolve, reject) => {
          certManager.getAppCertificate(null, (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await new Promise((resolve, reject) => {
          certManager.getAppCertificate("aabb", (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1000
     * @tc.name Test getAppCertificate with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1000', 0, async function (done) {
      let keystore: Uint8Array = commonParameter.rsa512P12CertInfo;
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.installAppCertificate(keystore, '123456', 'testPubCredential001');
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.getAppCertificate("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.getAppCertificate(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.getAppCertificate("aabb");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.getAppCertificate(cmResult.uri, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1100
     * @tc.name Test getPrivateCertificate with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1100', 0, async function (done) {
      try {
        await new Promise((resolve, reject) => {
          certManager.getPrivateCertificate("", (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await new Promise((resolve, reject) => {
          certManager.getPrivateCertificate(null, (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await new Promise((resolve, reject) => {
          certManager.getPrivateCertificate("aabb", (err, status) => {
            if (err) {
              reject(err);
            } else {
              resolve(status);
            }
          })
        })
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1200
     * @tc.name Test getPrivateCertificate with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1200', 0, async function (done) {
      let keystore: Uint8Array = commonParameter.priRsaCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoRsa';
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.installPrivateCertificate(keystore, keystorePwd, certAlias);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.getPrivateCertificate("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.getPrivateCertificate(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.getPrivateCertificate("aabb");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.getPrivateCertificate(cmResult.uri, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1300
     * @tc.name Test isAuthorizedApp with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1300', 0, async function (done) {
      let appUid: string = await commonFunction.getClientAppUid();
      let keystore: Uint8Array = commonParameter.rsa1024P12CertInfo;
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.installAppCertificate(keystore, '123456', 'testPubCredential002');
      } catch (err) {
        expect(null).assertFail();
      }
      await certManager.grantAppCertificate(cmResult.uri, appUid).then(CMResult => {
        expect(CMResult.uri != null).assertTrue();
      }).catch(err => {
        console.error("grantAppCertificate err: " + err);
        expect(null).assertFail();
      })
      try {
        await thCallback.isAuthorizedAppAbnormal("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.isAuthorizedAppAbnormal(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.isAuthorizedAppAbnormal(123);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1400
     * @tc.name Test isAuthorizedApp with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1400', 0, async function (done) {
      let appUid: string = await commonFunction.getClientAppUid();
      let appKeyUri: string;
      let keystore: Uint8Array = commonParameter.rsa1024P12CertInfo;
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.installAppCertificate(keystore, '123456', 'testPubCredential002');
      } catch (err) {
        expect(null).assertFail();
      }
      await certManager.grantAppCertificate(cmResult.uri, appUid).then(CMResult => {
        expect(CMResult.uri != null).assertTrue();
        appKeyUri = CMResult.uri;
      }).catch(err => {
        console.error("grantAppCertificate err: " + err);
        expect(null).assertFail();
      })
      try {
        await certManager.isAuthorizedApp("");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.isAuthorizedApp(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.isAuthorizedApp(appKeyUri, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1500
     * @tc.name Test init with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1500', 0, async function (done) {
      let cmResult: certManager.CMResult;
      let appKeyUri1: string;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let errorSpec: certManager.CMSignatureSpec = {
        purpose: 3
      };
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri1 = cmResult.credentialList[0].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await thCallback.initAbnormal("", signSpec);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await thCallback.initAbnormal(null, signSpec);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.initAbnormal(appKeyUri1, "");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.initAbnormal(appKeyUri1, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.initAbnormal(appKeyUri1, errorSpec);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }

      //padding and digest
      let signSpec1: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      const supportPaddings = Object.keys(certManager.CmKeyPadding).filter(item => isNaN(Number(item)));
      const supportDigests = Object.keys(certManager.CmKeyDigest).filter(item => isNaN(Number(item)));
      for (let supportPadding of supportPaddings) {
        signSpec1.padding = certManager.CmKeyPadding[supportPadding as keyof typeof certManager.CmKeyPadding]
        for (let supportDigest of supportDigests) {
          signSpec1.digest = certManager.CmKeyDigest[supportDigest as keyof typeof certManager.CmKeyDigest]
          try {
            await thCallback.initAbnormal(appKeyUri1, signSpec1);
          } catch (err) {
            expect(null).assertFail();
          }
        }
      }

      let signSpec2: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN,
        padding: certManager.CmKeyPadding.CM_PADDING_PSS
      };
      try {
        await thCallback.initAbnormal(appKeyUri1, signSpec2);
      } catch (err) {
        expect(null).assertFail();
      }

      let signSpec3: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN,
        digest: certManager.CmKeyDigest.CM_DIGEST_MD5
      };
      try {
        await thCallback.initAbnormal(appKeyUri1, signSpec3);
      } catch (err) {
        expect(null).assertFail();
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1600
     * @tc.name Test init with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1600', 0, async function (done) {
      let cmResult: certManager.CMResult;
      let appKeyUri1: string;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let errorSpec: certManager.CMSignatureSpec = {
        purpose: 3
      };
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri1 = cmResult.credentialList[0].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.init("", signSpec);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.init(null, signSpec);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.init(appKeyUri1, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.init(appKeyUri1, errorSpec);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.init(appKeyUri1, signSpec, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }

      //padding and digest
      let signSpec1: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      const supportPaddings = Object.keys(certManager.CmKeyPadding).filter(item => isNaN(Number(item))).filter(item => Number(item) > 0);
      const supportDigests = Object.keys(certManager.CmKeyDigest).filter(item => isNaN(Number(item)));
      for (let supportPadding of supportPaddings) {
        signSpec1.padding = certManager.CmKeyPadding[supportPadding as keyof typeof certManager.CmKeyPadding]
        for (let supportDigest of supportDigests) {
          signSpec1.digest = certManager.CmKeyDigest[supportDigest as keyof typeof certManager.CmKeyDigest]
          try {
            await certManager.init(appKeyUri1, signSpec1);
          } catch (err) {
            expect(null).assertFail();
          }
        }
      }

      let signSpec2: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN,
        padding: certManager.CmKeyPadding.CM_PADDING_PSS
      };
      try {
        await certManager.init(appKeyUri1, signSpec2);
      } catch (err) {
        expect(null).assertFail();
      }

      let signSpec3: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN,
        digest: certManager.CmKeyDigest.CM_DIGEST_MD5
      };
      try {
        await certManager.init(appKeyUri1, signSpec3);
      } catch (err) {
        expect(null).assertFail();
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1700
     * @tc.name Test update with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1700', 0, async function (done) {
      //update第一个参数为null，错误码没有定义, 第二个参数输入错误数据，错误码没有定义
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let cmHandle: certManager.CMHandle;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        let appKeyUri1: string = cmResult.credentialList[0].keyUri;
        cmHandle = await certManager.init(appKeyUri1, signSpec);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await thCallback.updateAbnormal(new Uint8Array([0x30, 0x82, 0x0b]), keyStore);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await thCallback.updateAbnormal(null, keyStore);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await thCallback.updateAbnormal(cmHandle.handle, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1800
     * @tc.name Test update with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1800', 0, async function (done) {
      //update第一个参数为null，错误码没有定义, 第二个参数输入错误数据，错误码没有定义
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let cmHandle: certManager.CMHandle;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        let appKeyUri1: string = cmResult.credentialList[0].keyUri;
        cmHandle = await certManager.init(appKeyUri1, signSpec);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.update(new Uint8Array([0x30, 0x82, 0x0b]), keyStore);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await certManager.update(null, keyStore);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.update(cmHandle.handle, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.update(cmHandle.handle, keyStore, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1900
     * @tc.name Test finish with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_1900', 0, async function (done) {
      //finish第一个参数输入错误格式的handle，错误码没有定义; 第二个参数输入空字符串，错误码没有定义
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let cmHandle: certManager.CMHandle;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        let appKeyUri1: string = cmResult.credentialList[0].keyUri;
        cmHandle = await certManager.init(appKeyUri1, signSpec);
        await certManager.update(cmHandle.handle, keyStore);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await thCallback.finishAbnormal(new Uint8Array([0x31, 0x82, 0x0c]));
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await thCallback.finishAbnormal("111");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await thCallback.finishAbnormal(cmHandle.handle, "");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await thCallback.finishAbnormal(cmHandle.handle, new Uint8Array([0x31, 0x82, 0x0c]));
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_2000
     * @tc.name Test finish with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_2000', 0, async function (done) {
      //finish第一个参数输入错误格式的handle，错误码没有定义; 第二个参数输入null，错误码没有定义
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let cmHandle: certManager.CMHandle;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        let appKeyUri1: string = cmResult.credentialList[0].keyUri;
        cmHandle = await certManager.init(appKeyUri1, signSpec);
        await certManager.update(cmHandle.handle, keyStore);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.finish(new Uint8Array([0x31, 0x82, 0x0c]));
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await certManager.finish(cmHandle.handle, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await certManager.finish(cmHandle.handle, new Uint8Array([0x31, 0x82, 0x0c]));
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.finish(cmHandle.handle, new Uint8Array([0x31, 0x82, 0x0c]), null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })
    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_2100
     * @tc.name Test abort with abnormal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_2100', 0, async function (done) {
      //abort输入错误的Uint8Array数据可以成功， 存在bug, 输入null显示错误码未定义
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let cmHandle: certManager.CMHandle;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        let appKeyUri1: string = cmResult.credentialList[0].keyUri;
        cmHandle = await certManager.init(appKeyUri1, signSpec);
        await certManager.update(cmHandle.handle, keyStore);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await thCallback.abortAbnormal(new Uint8Array([0x31, 0x82, 0x0c]));
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await thCallback.abortAbnormal(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await thCallback.abortAbnormal("111");
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Abnormal_Func_2200
     * @tc.name Test abort with abnormal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Abnormal_Func_2200', 0, async function (done) {
      //abort输入错误的Uint8Array数据可以成功， 存在bug, 输入null显示错误码未定义
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let signSpec: certManager.CMSignatureSpec = {
        purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
      };
      let cmHandle: certManager.CMHandle;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        let appKeyUri1: string = cmResult.credentialList[0].keyUri;
        cmHandle = await certManager.init(appKeyUri1, signSpec);
        await certManager.update(cmHandle.handle, keyStore);
      } catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.abort(new Uint8Array([0x31, 0x82, 0x0c]));
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await certManager.abort(null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await certManager.abort(cmHandle.handle, null);
        expect(null).assertFail();
      } catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    })
  })
}

