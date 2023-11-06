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
import * as signVerifyCallback from './utils/signAndVerify/signVerifyCallback';
import * as signVerifyPromise from './utils/signAndVerify/signVerifyPromise';


export default function certManagerThirdPartyJsAPINormalTestUnit() {
  describe('certManagerThirdPartyJsAPINormalTestUnit', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async function () {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      try {
        await commonFunction.installUserTrustedCertificates();
      } catch (err) {
        console.error("certManagerThirdPartyJsAPINormalTestUnit beforeAll err: " + err);
        expect(null).assertFail();
      }
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
        console.error("certManagerThirdPartyJsAPINormalTestUnit afterAll err1: " + err.code);
        expect(null).assertFail();
      })
      await certManager.uninstallAllAppCertificate().then(status => {
        expect(status).assertTrue();
      }).catch(err => {
        console.error("certManagerThirdPartyJsAPINormalTestUnit afterAll err2: " + err.code);
        expect(null).assertFail();
      })
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0100
     * @tc.name Test Enumerated value
     * @tc.desc Test Enumerated value
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0100', 0, function (done) {
      //报错： expect undefined equals XXX
      expect(certManager.CMErrorCode.CM_SUCCESS).assertEqual(0);
      expect(certManager.CMErrorCode.CM_ERROR_INNER_ERROR).assertEqual(17500001);
      expect(certManager.CMErrorCode.CM_ERROR_NO_PERMISSION).assertEqual(17500002);
      expect(certManager.CMErrorCode.CM_ERROR_NO_FOUND).assertEqual(17500003);
      expect(certManager.CMErrorCode.CM_ERROR_X509_FORMATE).assertEqual(17500004);
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0200
     * @tc.name Test getSystemTrustedCertificateList with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0200', 0, async function (done) {
      try {
        let cmResult: certManager.CMResult = await new Promise((resolve, reject) => {
          certManager.getSystemTrustedCertificateList((err, cmResult) => {
            if (err) {
              console.error("[Callback]getSystemTrustedCertificateList err: " + err.code);
              reject(err);
            } else {
              resolve(cmResult);
            }
          })
        });
        expect(cmResult != null).assertTrue();
        expect(cmResult.certList.length).assertLessOrEqual(129);
        for (let i = 0; i < cmResult.certList.length; i++) {
          console.warn("start: [Callback] cmResult.certList " + i);
          console.warn("[Callback] uri: " + cmResult.certList[i].uri);
          console.warn("[Callback] certAlias: " + cmResult.certList[i].certAlias);
          console.warn("[Callback] status: " + cmResult.certList[i].status);
          console.warn("[Callback] subjectName: " + cmResult.certList[i].subjectName);
          console.warn("end: [Callback] cmResult.certList " + i);
        }
      } catch (err) {
        expect(null).assertFail();
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0300
     * @tc.name Test getSystemTrustedCertificateList with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0300', 0, async function (done) {
      await certManager.getSystemTrustedCertificateList().then(cmResult => {
        expect(cmResult != null).assertTrue();
        expect(cmResult.certList.length).assertLessOrEqual(129);
        for (let i = 0; i < cmResult.certList.length; i++) {
          console.warn("start: [Promise] cmResult.certList " + i);
          console.warn("[Promise] uri: " + cmResult.certList[i].uri);
          console.warn("[Promise] certAlias: " + cmResult.certList[i].certAlias);
          console.warn("[Promise] status: " + cmResult.certList[i].status);
          console.warn("[Promise] subjectName: " + cmResult.certList[i].subjectName);
          console.warn("end: [Promise] cmResult.certList " + i);
        }
      }).catch(err => {
        console.error("[Promise]getSystemTrustedCertificateList err: " + err.code);
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0400
     * @tc.name Test getSystemTrustedCertificate with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0400', 0, async function (done) {
      let certUri: string = "4b718d9b.0";
      try {
        let cmResult: certManager.CMResult = await new Promise((resolve, reject) => {
          certManager.getSystemTrustedCertificate(certUri, (err, cmResult) => {
            if (err) {
              console.error("[Callback]getSystemTrustedCertificate err: " + err.code);
              reject(err);
            } else {
              resolve(cmResult);
            }
          })
        });
        expect(cmResult != null).assertTrue();
        expect(cmResult.certInfo.uri).assertEqual(certUri);
        console.warn("[Callback] cmResult.certInfo.certAlias: " + cmResult.certInfo.certAlias);
        console.warn("[Callback] cmResult.certInfo.status: " + cmResult.certInfo.status);
        console.warn("[Callback] cmResult.certInfo.issuerName: " + cmResult.certInfo.issuerName);
        console.warn("[Callback] cmResult.certInfo.subjectName: " + cmResult.certInfo.subjectName);
        console.warn("[Callback] cmResult.certInfo.serial: " + cmResult.certInfo.serial);
        console.warn("[Callback] cmResult.certInfo.notBefore: " + cmResult.certInfo.notBefore);
        console.warn("[Callback] cmResult.certInfo.notAfter: " + cmResult.certInfo.notAfter);
        console.warn("[Callback] cmResult.certInfo.fingerprintSha256: " + cmResult.certInfo.fingerprintSha256);
        console.warn("[Callback] cmResult.certInfo.cert: " + cmResult.certInfo.cert);
      } catch (err) {
        expect(null).assertFail();
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0500
     * @tc.name Test getSystemTrustedCertificate with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0500', 0, async function (done) {
      let certUri: string = "1d3472b9.0";
      await certManager.getSystemTrustedCertificate(certUri).then(cmResult => {
        expect(cmResult != null).assertTrue();
        expect(cmResult.certInfo.uri).assertEqual(certUri);
        console.warn("[Promise] cmResult.certInfo.certAlias: " + cmResult.certInfo.certAlias);
        console.warn("[Promise] cmResult.certInfo.status: " + cmResult.certInfo.status);
        console.warn("[Promise] cmResult.certInfo.issuerName: " + cmResult.certInfo.issuerName);
        console.warn("[Promise] cmResult.certInfo.subjectName: " + cmResult.certInfo.subjectName);
        console.warn("[Promise] cmResult.certInfo.serial: " + cmResult.certInfo.serial);
        console.warn("[Promise] cmResult.certInfo.notBefore: " + cmResult.certInfo.notBefore);
        console.warn("[Promise] cmResult.certInfo.notAfter: " + cmResult.certInfo.notAfter);
        console.warn("[Promise] cmResult.certInfo.fingerprintSha256: " + cmResult.certInfo.fingerprintSha256);
        console.warn("[Promise] cmResult.certInfo.cert: " + cmResult.certInfo.cert);
      }).catch(err => {
        console.error("[Promise]getSystemTrustedCertificate err: " + err.code);
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0600
     * @tc.name Test installPrivateCertificate and uninstallPrivateCertificate with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0600', 0, async function (done) {
      let keystore: Uint8Array = commonParameter.priRsaCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoRsa';
      let keyUri: string;
      await certManager.installPrivateCertificate(keystore, keystorePwd, certAlias).then(cmResult => {
        expect(cmResult != null).assertTrue();
        console.warn("[Promise] cmResult.uri: " + cmResult.uri);
        keyUri = cmResult.uri;
      }).catch(err => {
        console.error("[Promise] installPrivateCertificate err: " + err.code);
        expect(null).assertFail();
      })
      await certManager.uninstallPrivateCertificate(keyUri).then(status => {
        expect(status).assertTrue();
      }).catch(err => {
        console.error("[Promise] uninstallPrivateCertificate err: " + err.code);
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0700
     * @tc.name Test installPrivateCertificate and uninstallPrivateCertificate with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0700', 0, async function (done) {
      let keystore: Uint8Array = commonParameter.priEccCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoEcc';
      let cmResult: certManager.CMResult;
      let status: boolean;
      try {
        cmResult = await new Promise((resolve, reject) => {
          certManager.installPrivateCertificate(keystore, keystorePwd, certAlias, (err, cmResult) => {
            if (err) {
              console.error("[Callback]installPrivateCertificate err: " + err.code);
              reject(err);
            } else {
              resolve(cmResult);
            }
          })
        });
      } catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult != null).assertTrue();
      console.warn("[Callback] cmResult.uri: " + cmResult.uri);
      try {
        status = await new Promise((resolve, reject) => {
          certManager.uninstallPrivateCertificate(cmResult.uri, (err, status) => {
            if (err) {
              console.error("[Callback]uninstallPrivateCertificate err: " + err.code);
              reject(err);
            } else {
              resolve(status);
            }
          })
        });
      } catch (err) {
        expect(null).assertFail();
      }
      expect(status).assertTrue();
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0800
     * @tc.name Test getPrivateCertificate with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0800', 0, async function (done) {
      let keystore: Uint8Array = commonParameter.priRsaCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoRsa';
      let keyUri: string;
      await certManager.installPrivateCertificate(keystore, keystorePwd, certAlias).then(cmResult => {
        expect(cmResult != null).assertTrue();
        console.warn("[Promise] cmResult.uri: " + cmResult.uri);
        keyUri = cmResult.uri;
      }).catch(err => {
        console.error("[Promise] installPrivateCertificate err: " + err.code);
        expect(null).assertFail();
      })
      await certManager.getPrivateCertificate(keyUri).then(CMResult => {
        expect(CMResult.credential != null).assertTrue();
        console.warn("[Promise] type: " + CMResult.credential.type);
        console.warn("[Promise] alias: " + CMResult.credential.alias);
        console.warn("[Promise] keyUri: " + CMResult.credential.keyUri);
        console.warn("[Promise] certNum: " + CMResult.credential.certNum);
        console.warn("[Promise] keyNum: " + CMResult.credential.keyNum);
        console.warn("[Promise] credData: " + CMResult.credential.credData);
      }).catch(err => {
        console.error("[Promise] uninstallPrivateCertificate err: " + err.code);
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_0900
     * @tc.name Test getPrivateCertificate with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_0900', 0, async function (done) {
      let keystore: Uint8Array = commonParameter.priEccCredData;
      let keystorePwd: string = '123456';
      let certAlias: string = 'appCertAliasDemoEcc';
      let cmResult2: certManager.CMResult;
      let keyUri: string;
      await certManager.installPrivateCertificate(keystore, keystorePwd, certAlias).then(cmResult => {
        expect(cmResult != null).assertTrue();
        console.warn("[Promise] cmResult.uri: " + cmResult.uri);
        keyUri = cmResult.uri;
      }).catch(err => {
        console.error("[Promise] installPrivateCertificate err: " + err.code);
        expect(null).assertFail();
      })
      try {
        cmResult2 = await new Promise((resolve, reject) => {
          certManager.getPrivateCertificate(keyUri, (err, CMResult) => {
            if (err) {
              console.error("[Callback]getPrivateCertificate err: " + err.code);
              reject(err);
            } else {
              resolve(CMResult);
            }
          })
        });
      } catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult2.credential != null).assertTrue();
      console.warn("[Callback] type: " + cmResult2.credential.type);
      console.warn("[Callback] alias: " + cmResult2.credential.alias);
      console.warn("[Callback] keyUri: " + cmResult2.credential.keyUri);
      console.warn("[Callback] certNum: " + cmResult2.credential.certNum);
      console.warn("[Callback] keyNum: " + cmResult2.credential.keyNum);
      console.warn("[Callback] credData: " + cmResult2.credential.credData);
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1000
     * @tc.name Test getUserTrustedCertificateList with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1000', 0, async function (done) {
      await certManager.getUserTrustedCertificateList().then(cmResult => {
        expect(cmResult != null).assertTrue();
        expect(cmResult.certList.length).assertLessOrEqual(129);
        for (let i = 0; i < cmResult.certList.length; i++) {
          console.warn("start: [Promise] cmResult.certList " + i);
          console.warn("[Promise] uri: " + cmResult.certList[i].uri);
          console.warn("[Promise] certAlias: " + cmResult.certList[i].certAlias);
          console.warn("[Promise] status: " + cmResult.certList[i].status);
          console.warn("[Promise] subjectName: " + cmResult.certList[i].subjectName);
          console.warn("end: [Promise] cmResult.certList " + i);
        }
      }).catch(err => {
        console.error("[Promise] getUserTrustedCertificateList err: " + err.code);
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1100
     * @tc.name Test getUserTrustedCertificateList with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1100', 0, async function (done) {
      let cmResult: certManager.CMResult;
      try {
        cmResult = await new Promise((resolve, reject) => {
          certManager.getUserTrustedCertificateList((err, status) => {
            if (err) {
              console.error("[Callback]getUserTrustedCertificateList err: " + err.code);
              reject(err);
            } else {
              resolve(status);
            }
          })
        });
      } catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult != null).assertTrue();
      expect(cmResult.certList.length).assertLessOrEqual(129);
      for (let i = 0; i < cmResult.certList.length; i++) {
        console.warn("start: [Callback] cmResult.certList " + i);
        console.warn("[Callback] uri: " + cmResult.certList[i].uri);
        console.warn("[Callback] certAlias: " + cmResult.certList[i].certAlias);
        console.warn("[Callback] status: " + cmResult.certList[i].status);
        console.warn("[Callback] subjectName: " + cmResult.certList[i].subjectName);
        console.warn("end: [Callback] cmResult.certList " + i);
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1200
     * @tc.name Test getUserTrustedCertificate with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1200', 0, async function (done) {
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.getUserTrustedCertificateList();
      } catch (err) {
        expect(null).assertFail();
      }
      let certUri: string = cmResult.certList[0].uri;
      await certManager.getUserTrustedCertificate(certUri).then(cmResult => {
        expect(cmResult != null).assertTrue();
        expect(cmResult.certInfo.uri).assertEqual(certUri);
        console.warn("[Promise] cmResult.certInfo.certAlias: " + cmResult.certInfo.certAlias);
        console.warn("[Promise] cmResult.certInfo.status: " + cmResult.certInfo.status);
        console.warn("[Promise] cmResult.certInfo.issuerName: " + cmResult.certInfo.issuerName);
        console.warn("[Promise] cmResult.certInfo.subjectName: " + cmResult.certInfo.subjectName);
        console.warn("[Promise] cmResult.certInfo.serial: " + cmResult.certInfo.serial);
        console.warn("[Promise] cmResult.certInfo.notBefore: " + cmResult.certInfo.notBefore);
        console.warn("[Promise] cmResult.certInfo.notAfter: " + cmResult.certInfo.notAfter);
        console.warn("[Promise] cmResult.certInfo.fingerprintSha256: " + cmResult.certInfo.fingerprintSha256);
        console.warn("[Promise] cmResult.certInfo.cert: " + cmResult.certInfo.cert);
        //isAuth属性无处用到
        console.warn("[Promise] cmResult.isAuth: " + cmResult.isAuth);
      }).catch(err => {
        console.error("[Promise] getUserTrustedCertificate err: " + err.code);
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1300
     * @tc.name Test getUserTrustedCertificate with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1300', 0, async function (done) {
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.getUserTrustedCertificateList();
      } catch (err) {
        expect(null).assertFail();
      }
      let certUri: string = cmResult.certList[1].uri;
      try {
        let cmResult: certManager.CMResult = await new Promise((resolve, reject) => {
          certManager.getUserTrustedCertificate(certUri, (err, cmResult) => {
            if (err) {
              console.error("[Callback]getSystemTrustedCertificate err: " + err.code);
              reject(err);
            } else {
              resolve(cmResult);
            }
          })
        });
        expect(cmResult != null).assertTrue();
        expect(cmResult.certInfo.uri).assertEqual(certUri);
        console.warn("[Callback] cmResult.certInfo.certAlias: " + cmResult.certInfo.certAlias);
        console.warn("[Callback] cmResult.certInfo.status: " + cmResult.certInfo.status);
        console.warn("[Callback] cmResult.certInfo.issuerName: " + cmResult.certInfo.issuerName);
        console.warn("[Callback] cmResult.certInfo.subjectName: " + cmResult.certInfo.subjectName);
        console.warn("[Callback] cmResult.certInfo.serial: " + cmResult.certInfo.serial);
        console.warn("[Callback] cmResult.certInfo.notBefore: " + cmResult.certInfo.notBefore);
        console.warn("[Callback] cmResult.certInfo.notAfter: " + cmResult.certInfo.notAfter);
        console.warn("[Callback] cmResult.certInfo.fingerprintSha256: " + cmResult.certInfo.fingerprintSha256);
        console.warn("[Callback] cmResult.certInfo.cert: " + cmResult.certInfo.cert);
        //isAuth属性无处用到
        console.warn("[Callback] cmResult.isAuth: " + cmResult.isAuth);
      } catch (err) {
        expect(null).assertFail();
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1400
     * @tc.name Test init->update->finish interface with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1400', 0, async function (done) {
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let appKeyUri1: string;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri1 = cmResult.credentialList[0].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      await signVerifyCallback.signVerifyNormalProcess(appKeyUri1, keyStore).then(result => {
        expect(result.outData == null).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1500
     * @tc.name Test init->update->finish interface with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1500', 0, async function (done) {
      let keyStore: Uint8Array = commonParameter.priEccCredData;
      let cmResult: certManager.CMResult;
      let appKeyUri2: string;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri2 = cmResult.credentialList[1].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      await signVerifyPromise.signVerifyNormalProcess(appKeyUri2, keyStore).then(result => {
        expect(result.outData == null).assertTrue();
      }).catch(err => {
        console.error("err: " + err);
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1600
     * @tc.name Test abort interface with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1600', 0, async function (done) {
      let keyStore: Uint8Array = commonParameter.priEccCredData;
      let cmResult: certManager.CMResult;
      let appKeyUri2: string;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri2 = cmResult.credentialList[1].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      await signVerifyPromise.signAbortProcess(appKeyUri2, keyStore, "after_init").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyPromise.signAbortProcess(appKeyUri2, keyStore, "after_update").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyPromise.signAbortProcess(appKeyUri2, keyStore, "after_finish").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1700
     * @tc.name Test abort interface with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1700', 0, async function (done) {
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let appKeyUri1: string;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri1 = cmResult.credentialList[0].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      await signVerifyCallback.signAbortProcess(appKeyUri1, keyStore, "after_init").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyCallback.signAbortProcess(appKeyUri1, keyStore, "after_update").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyCallback.signAbortProcess(appKeyUri1, keyStore, "after_finish").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1800
     * @tc.name Test abort interface with normal parameters three
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1800', 0, async function (done) {
      let keyStore: Uint8Array = commonParameter.priEccCredData;
      let cmResult: certManager.CMResult;
      let appKeyUri2: string;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri2 = cmResult.credentialList[1].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      await signVerifyPromise.verifyAbortProcess(appKeyUri2, keyStore, "after_verify_init").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyPromise.verifyAbortProcess(appKeyUri2, keyStore, "after_verify_update").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyPromise.verifyAbortProcess(appKeyUri2, keyStore, "after_verify_finish").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_1900
     * @tc.name Test abort interface with normal parameters four
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_1900', 0, async function (done) {
      let keyStore: Uint8Array = commonParameter.priRsaCredData;
      let cmResult: certManager.CMResult;
      let appKeyUri1: string;
      try {
        await commonFunction.installPrivateCertificates();
        cmResult = await certManager.getPrivateCertificateList();
        appKeyUri1 = cmResult.credentialList[0].keyUri;
      } catch (err) {
        expect(null).assertFail();
      }
      await signVerifyCallback.verifyAbortProcess(appKeyUri1, keyStore, "after_verify_init").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyCallback.verifyAbortProcess(appKeyUri1, keyStore, "after_verify_update").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      await signVerifyCallback.verifyAbortProcess(appKeyUri1, keyStore, "after_verify_finish").then(result => {
        expect(result).assertTrue();
      }).catch(err => {
        expect(null).assertFail();
      })
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_2000
     * @tc.name Test Max length of UserTrustedCertificate List
     * @tc.desc Test Max length of UserTrustedCertificate List
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_2000', 0, async function (done) {
      try {
        for (let i = 0; i < 200; i++) {
          let certificate_temp: certManager.CertBlob = {
            inData: commonParameter.userTrustedCert1,
            alias: "usertrustcert" + i.toString()
          };
          await certManager.installUserTrustedCertificate(certificate_temp);
        }
        let cmResult: certManager.CMResult = await certManager.getUserTrustedCertificateList();
        console.warn("full UserTrustedCertificate list length is: " + cmResult.certList.length);
        expect(cmResult.certList.length).assertLessOrEqual(129);
      } catch (err) {
        console.error("Security_CertManager_ThirdPartyJsApi_Normal_Func_2000 get err: " + err);
        expect(null).assertFail();
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_2100
     * @tc.name Test Max length of PrivateCredential List
     * @tc.desc Test Max length of PrivateCredential List
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_2100', 0, async function (done) {
      try {
        for (let i = 0; i < 200; i++) {
          let alias_temp: string = "privateCredential" + i.toString();
          await certManager.installPrivateCertificate(commonParameter.priEccCredData, '123456', alias_temp);
        }
        let cmResult: certManager.CMResult = await certManager.getPrivateCertificateList();
        console.warn("full PrivateCredential list length is: " + cmResult.credentialList.length);
        expect(cmResult.credentialList.length).assertLessOrEqual(129);
      } catch (err) {
        console.error("Security_CertManager_ThirdPartyJsApi_Normal_Func_2100 get err: " + err);
        expect(null).assertFail();
      }
      done();
    })

    /**
     * @tc.number Security_CertManager_ThirdPartyJsApi_Normal_Func_2200
     * @tc.name Test Max length of PublicCredential List
     * @tc.desc Test Max length of PublicCredential List
     */
    it('Security_CertManager_ThirdPartyJsApi_Normal_Func_2200', 0, async function (done) {
      try {
        for (let i = 0; i < 200; i++) {
          let alias_temp: string = "publicCredential" + i.toString();
          await certManager.installAppCertificate(commonParameter.rsa512P12CertInfo, '123456', alias_temp);
        }
        let cmResult: certManager.CMResult = await certManager.getAppCertificateList();
        console.warn("full PublicCredential list length is: " + cmResult.credentialList.length);
        expect(cmResult.credentialList.length).assertLessOrEqual(129);
      } catch (err) {
        console.error("Security_CertManager_ThirdPartyJsApi_Normal_Func_2200 get err: " + err);
        expect(null).assertFail();
      }
      done();
    })
  })
}

