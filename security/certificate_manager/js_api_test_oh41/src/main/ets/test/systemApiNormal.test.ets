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
import * as sysNormalCallback from './utils/normalFunction/systemNormalApiCallback';


export default function certManagerSystemJsAPINormalTestUnit() {
  describe('certManagerSystemJsAPINormalTestUnit', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      // #define CM_CREDENTIAL_STORE             0
      // #define CM_SYSTEM_TRUSTED_STORE         1
      // #define CM_USER_TRUSTED_STORE           2
      // #define CM_PRI_CREDENTIAL_STORE         3
    });
    beforeEach(async () => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
      try {
        await commonFunction.installAppCertificates();
      }
      catch (err) {
        console.error("beforeAll installAppCertificates err: " + err);
        expect(null).assertFail();
      }
    });
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    });
    afterAll(async () => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
      await certManager.uninstallAllAppCertificate().then((status: boolean) => {
        expect(status).assertTrue();
      }).catch((err: Error) => {
        console.error("ActsCertManagerSystemJsAPITestUnit afterAll err: " + err);
        expect(null).assertFail();
      });
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0100
     * @tc.name Test setCertificateStatus with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0100', 0, async (done: Function) => {
      let certUri: string = "4b718d9b.0";
      let store: number = 1;
      let status: boolean = true;
      try {
        let result: boolean = await new Promise((resolve, reject) => {
          certManager.setCertificateStatus(certUri, store, status, (err: Error, result: boolean) => {
            if (err) {
              console.error("[Callback]setCertificateStatus err: " + err);
              reject(err);
            }
            else {
              resolve(result);
            }
          });
        });
        expect(result).assertTrue();
      }
      catch (err) {
        expect(null).assertFail();
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0200
     * @tc.name Test setCertificateStatus with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0200', 0, async (done: Function) => {
      // let certUri: string = "1d3472b9.0";
      let certUri: string = "4b718d9b.0";
      let store: number = 1;
      let status: boolean = false;
      await certManager.setCertificateStatus(certUri, store, status).then((result: boolean) => {
        expect(result).assertTrue();
      }).catch((err: Error) => {
        console.error("[Promise]setCertificateStatus err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0300
     * @tc.name Test installUserTrustedCertificate and uninstallUserTrustedCertificate with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0300', 0, async (done: Function) => {
      let inData: Uint8Array = new Uint8Array(commonParameter.userTrustedCert1);
      let alias: string = "usertrustcert1";
      let certificate: certManager.CertBlob = {
        inData, alias
      };
      let cmResult: certManager.CMResult;
      try {
        cmResult = await new Promise((resolve, reject) => {
          certManager.installUserTrustedCertificate(certificate, (err: Error, CMResult: certManager.CMResult) => {
            if (err) {
              console.error("[Callback]installUserTrustedCertificate err: " + err);
              reject(err);
            }
            else {
              resolve(CMResult);
            }
          });
        });
        expect(cmResult != null).assertTrue();
        console.warn("[Promise] cmResult.uri: " + cmResult.uri);
      }
      catch (err) {
        expect(null).assertFail();
      }
      try {
        let status: boolean = await new Promise((resolve, reject) => {
          certManager.uninstallUserTrustedCertificate(cmResult.uri, (err: Error, status: boolean) => {
            if (err) {
              console.error("[Callback]uninstallUserTrustedCertificate err: " + err);
              reject(err);
            }
            else {
              resolve(status);
            }
          });
        });
        expect(status).assertTrue();
      }
      catch (err) {
        expect(null).assertFail();
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0400
     * @tc.name Test installUserTrustedCertificate and uninstallUserTrustedCertificate with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0400', 0, async (done: Function) => {
      let inData: Uint8Array = new Uint8Array(commonParameter.userTrustedCert2);
      let alias: string = "usertrustcert2";
      let certificate: certManager.CertBlob = {
        inData, alias
      };
      let certUri: string = '';
      await certManager.installUserTrustedCertificate(certificate).then((cmResult: certManager.CMResult) => {
        expect(cmResult != null).assertTrue();
        certUri = cmResult.uri as string;
        console.warn("[Promise] cmResult.uri: " + certUri);
      }).catch((err: Error) => {
        console.error("[Promise]installUserTrustedCertificate err: " + err);
        expect(null).assertFail();
      });
      await certManager.uninstallUserTrustedCertificate(certUri).then((status: boolean) => {
        expect(status).assertTrue();
      }).catch((err: Error) => {
        console.error("[Promise]uninstallUserTrustedCertificate err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0500
     * @tc.name Test uninstallAllUserTrustedCertificate with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0500', 0, async (done: Function) => {
      let certificate1: certManager.CertBlob = {
        inData: new Uint8Array(commonParameter.userTrustedCert1),
        alias: "usertrustcert1"
      };
      let certificate2: certManager.CertBlob = {
        inData: new Uint8Array(commonParameter.userTrustedCert2),
        alias: "usertrustcert2"
      };
      let certificate3: certManager.CertBlob = {
        inData: new Uint8Array(commonParameter.userTrustedCert3),
        alias: "usertrustcert3"
      };
      try {
        await certManager.installUserTrustedCertificate(certificate1);
        await certManager.installUserTrustedCertificate(certificate2);
        await certManager.installUserTrustedCertificate(certificate3);
      }
      catch (err) {
        console.error("[Callback]uninstallAllUserTrustedCertificate err1: " + err.code);
        expect(null).assertFail();
      }
      try {
        let status: boolean = await new Promise((resolve, reject) => {
          certManager.uninstallAllUserTrustedCertificate((err: Error, status: boolean) => {
            if (err) {
              console.error("[Callback]uninstallAllUserTrustedCertificate err2: " + err);
              reject(err);
            }
            else {
              resolve(status);
            }
          });
        });
        expect(status).assertTrue();
      }
      catch (err) {
        expect(null).assertFail();
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0600
     * @tc.name Test uninstallAllUserTrustedCertificate with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0600', 0, async (done: Function) => {
      let certificate1: certManager.CertBlob = {
        inData: new Uint8Array(commonParameter.userTrustedCert1),
        alias: "usertrustcert1"
      };
      let certificate2: certManager.CertBlob = {
        inData: new Uint8Array(commonParameter.userTrustedCert2),
        alias: "usertrustcert2"
      };
      let certificate3: certManager.CertBlob = {
        inData: new Uint8Array(commonParameter.userTrustedCert3),
        alias: "usertrustcert3"
      };
      try {
        await certManager.installUserTrustedCertificate(certificate1);
        await certManager.installUserTrustedCertificate(certificate2);
        await certManager.installUserTrustedCertificate(certificate3);
      }
      catch (err) {
        console.error("[Promise]uninstallAllUserTrustedCertificate err1: " + err.code);
        expect(null).assertFail();
      }
      await certManager.uninstallAllUserTrustedCertificate().then((status: boolean) => {
        expect(status).assertTrue();
      }).catch((err: Error) => {
        console.error("[Promise]installUserTrustedCertificate err2: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0700
     * @tc.name Test installAppCertificate and uninstallAppCertificate with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0700', 0, async (done: Function) => {
      let keystore: Uint8Array = commonParameter.rsa2048P12CertInfo;
      let keystorePwd: string = '123456';
      let certAlias: string = 'pubCredDemo1';
      let keyUri: string = '';
      await certManager.installAppCertificate(keystore, keystorePwd, certAlias).then((cmResult: certManager.CMResult) => {
        expect(cmResult != null).assertTrue();
        console.warn("[Promise] cmResult.uri: " + cmResult.uri);
        keyUri = cmResult.uri as string;
      }).catch((err: Error) => {
        console.error("[Promise] installAppCertificate err: " + err);
        expect(null).assertFail();
      });
      await certManager.uninstallAppCertificate(keyUri).then((status: boolean) => {
        expect(status).assertTrue();
      }).catch((err: Error) => {
        console.error("[Promise] uninstallAppCertificate err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0800
     * @tc.name Test installAppCertificate and uninstallAppCertificate with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0800', 0, async (done: Function) => {
      let keystore: Uint8Array = commonParameter.eccP224P12CertInfo;
      let keystorePwd: string = '123456';
      let certAlias: string = 'pubCredDemo2';
      let cmResult: certManager.CMResult = {};
      let status: boolean = false;
      try {
        cmResult = await new Promise((resolve, reject) => {
          certManager.installAppCertificate(keystore, keystorePwd, certAlias, (err: Error, cmResult: certManager.CMResult) => {
            if (err) {
              console.error("[Callback]installAppCertificate err: " + err);
              reject(err);
            }
            else {
              resolve(cmResult);
            }
          });
        });
      }
      catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult != null).assertTrue();
      console.warn("[Callback] cmResult.uri: " + cmResult.uri);
      try {
        status = await new Promise((resolve, reject) => {
          certManager.uninstallAppCertificate(cmResult.uri, (err: Error, status: boolean) => {
            if (err) {
              console.error("[Callback]uninstallAppCertificate err: " + err);
              reject(err);
            }
            else {
              resolve(status);
            }
          });
        });
      }
      catch (err) {
        expect(null).assertFail();
      }
      expect(status).assertTrue();
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_0900
     * @tc.name Test getAppCertificateList with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_0900', 0, async (done: Function) => {
      let cmResult: certManager.CMResult = {};
      try {
        cmResult = await new Promise((resolve, reject) => {
          certManager.getAppCertificateList((err: Error, CMResult: certManager.CMResult) => {
            if (err) {
              console.error("[Callback]getAppCertificateList err: " + err);
              reject(err);
            }
            else {
              resolve(CMResult);
            }
          });
        });
      }
      catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult != null).assertTrue();
      expect(cmResult.credentialList?.length).assertLessOrEqual(129);
      if (cmResult.credentialList) {
        for (let i = 0; i < cmResult.credentialList.length; i++) {
          console.warn("start: [Callback] cmResult.credentialList " + i);
          console.warn("[Callback] type: " + cmResult.credentialList[i].type);
          console.warn("[Callback] alias: " + cmResult.credentialList[i].alias);
          console.warn("[Callback] keyUri: " + cmResult.credentialList[i].keyUri);
          console.warn("end: [Callback] cmResult.credentialList " + i);
        }
      }

      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1000
     * @tc.name Test getAppCertificateList with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1000', 0, async (done: Function) => {
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        expect(cmResult != null).assertTrue();
        expect(cmResult.credentialList?.length).assertLessOrEqual(129);
        if (cmResult.credentialList) {
          for (let i = 0; i < cmResult.credentialList.length; i++) {
            console.warn("start: [Promise] cmResult.credentialList " + i);
            console.warn("[Promise] type: " + cmResult.credentialList[i].type);
            console.warn("[Promise] alias: " + cmResult.credentialList[i].alias);
            console.warn("[Promise] keyUri: " + cmResult.credentialList[i].keyUri);
            console.warn("end: [Promise] cmResult.credentialList " + i);
          }
        }

      }).catch((err: Error) => {
        console.error("[Promise] getAppCertificateList err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1100
     * @tc.name Test getAppCertificate with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1100', 0, async (done: Function) => {
      let cmResult: certManager.CMResult = {};
      let cmResult2: certManager.CMResult = {};
      try {
        cmResult = await certManager.getAppCertificateList();
      }
      catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult != null).assertTrue();
      let keyUri: string = cmResult.credentialList?.[0]?.keyUri as string;
      try {
        cmResult2 = await new Promise((resolve, reject) => {
          certManager.getAppCertificate(keyUri, (err: Error, CMResult: certManager.CMResult) => {
            if (err) {
              console.error("[Callback]getAppCertificate err: " + err);
              reject(err);
            }
            else {
              resolve(CMResult);
            }
          });
        });
      }
      catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult2.credential != null).assertTrue();
      console.warn("[Callback] type: " + cmResult2.credential?.type);
      console.warn("[Callback] alias: " + cmResult2.credential?.alias);
      console.warn("[Callback] keyUri: " + cmResult2.credential?.keyUri);
      console.warn("[Callback] certNum: " + cmResult2.credential?.certNum);
      console.warn("[Callback] keyNum: " + cmResult2.credential?.keyNum);
      console.warn("[Callback] credData: " + cmResult2.credential?.credData);
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1200
     * @tc.name Test getAppCertificate with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1200', 0, async (done: Function) => {
      let cmResult: certManager.CMResult = {};
      try {
        cmResult = await certManager.getAppCertificateList();
      }
      catch (err) {
        expect(null).assertFail();
      }
      expect(cmResult != null).assertTrue();
      let keyUri: string = cmResult.credentialList?.[1]?.keyUri as string;
      await certManager.getAppCertificate(keyUri).then((cmResult2: certManager.CMResult) => {
        expect(cmResult2.credential != null).assertTrue();
        console.warn("[Promise] type: " + cmResult2.credential?.type);
        console.warn("[Promise] alias: " + cmResult2.credential?.alias);
        console.warn("[Promise] keyUri: " + cmResult2.credential?.keyUri);
        console.warn("[Promise] certNum: " + cmResult2.credential?.certNum);
        console.warn("[Promise] keyNum: " + cmResult2.credential?.keyNum);
        console.warn("[Promise] credData: " + cmResult2.credential?.credData);
      }).catch((err: Error) => {
        console.error("[Promise] getAppCertificate err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1300
     * @tc.name Test uninstallAllAppCertificate with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1300', 0, async (done: Function) => {
      try {
        await commonFunction.installAppCertificates();
      }
      catch (err) {
        console.error("Security_CertManager_SystemJsApi_Normal_Func_1300 installAppCertificates err: " + err.code);
        expect(null).assertFail();
      }
      try {
        let status: boolean = await new Promise((resolve, reject) => {
          certManager.uninstallAllAppCertificate((err: Error, status: boolean) => {
            if (err) {
              console.error("[Callback]uninstallAllAppCertificate err: " + err);
              reject(err);
            }
            else {
              resolve(status);
            }
          });
        });
        expect(status).assertTrue();
      }
      catch (err) {
        expect(null).assertFail();
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1400
     * @tc.name Test uninstallAllAppCertificate with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1400', 0, async (done: Function) => {
      try {
        await commonFunction.installAppCertificates();
      }
      catch (err) {
        console.error("Security_CertManager_SystemJsApi_Normal_Func_1400 installAppCertificates err: " + err.code);
        expect(null).assertFail();
      }
      await certManager.uninstallAllAppCertificate().then((status: boolean) => {
        expect(status).assertTrue();
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1500
     * @tc.name Test getPrivateCertificateList with normal parameters one
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1500', 0, async (done: Function) => {
      let cmResult: certManager.CMResult;
      try {
        await commonFunction.installPrivateCertificates();
      }
      catch (err) {
        console.error("beforeAll  installPrivateCertificates err: " + err.code);
        expect(null).assertFail();
      }
      try {
        cmResult = await new Promise((resolve, reject) => {
          certManager.getPrivateCertificateList((err: Error, CMResult: certManager.CMResult) => {
            if (err) {
              console.error("[Callback]getPrivateCertificateList err: " + err);
              reject(err);
            }
            else {
              resolve(CMResult);
            }
          });
        });
        expect(cmResult != null).assertTrue();
        expect(cmResult.credentialList?.length).assertLessOrEqual(129);
        if (cmResult.credentialList) {
          for (let i = 0; i < cmResult.credentialList.length; i++) {
            console.warn("start: [Callback] cmResult.credentialList " + i);
            console.warn("[Callback] type: " + cmResult.credentialList[i].type);
            console.warn("[Callback] alias: " + cmResult.credentialList[i].alias);
            console.warn("[Callback] keyUri: " + cmResult.credentialList[i].keyUri);
            console.warn("end: [Callback] cmResult.credentialList " + i);
          }
        }
      }
      catch (err) {
        expect(null).assertFail();
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1600
     * @tc.name Test getPrivateCertificateList with normal parameters two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1600', 0, async (done: Function) => {
      try {
        await commonFunction.installPrivateCertificates();
      }
      catch (err) {
        console.error("beforeAll  installPrivateCertificates err: " + err.code);
        expect(null).assertFail();
      }
      await certManager.getPrivateCertificateList().then((cmResult: certManager.CMResult) => {
        expect(cmResult != null).assertTrue();
        expect(cmResult.credentialList?.length).assertLessOrEqual(129);
        if (cmResult.credentialList) {
          for (let i = 0; i < cmResult.credentialList.length; i++) {
            console.warn("start: [Promise] cmResult.credentialList " + i);
            console.warn("[Promise] type: " + cmResult.credentialList[i].type);
            console.warn("[Promise] alias: " + cmResult.credentialList[i].alias);
            console.warn("[Promise] keyUri: " + cmResult.credentialList[i].keyUri);
            console.warn("end: [Promise] cmResult.credentialList " + i);
          }
        }
      }).catch((err: Error) => {
        console.error("[Promise]getPrivateCertificateList err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1700
     * @tc.name Test grantAppCertificate  and isAuthorizedApp with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1700', 0, async (done: Function) => {
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      let appKeyUri: string = '';
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      await certManager.grantAppCertificate(keyUri, appUid).then((cmResult: certManager.CMResult) => {
        expect(cmResult.uri != null).assertTrue();
        console.warn("uri: " + cmResult.uri);
        appKeyUri = cmResult.uri as string;
      }).catch((err: Error) => {
        console.error("[Promise]grantAppCertificate err: " + err);
        expect(null).assertFail();
      });
      await certManager.isAuthorizedApp(appKeyUri).then((status: boolean) => {
        expect(status).assertTrue();
      }).catch((err: Error) => {
        console.error("[Promise]isAuthorizedApp err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1800
     * @tc.name Test grantAppCertificate and isAuthorizedApp with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1800', 0, async (done: Function) => {
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      let cmResult2: certManager.CMResult;
      let status: boolean = false;
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[1]?.keyUri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      try {
        cmResult2 = await new Promise((resolve, reject) => {
          certManager.grantAppCertificate(keyUri, appUid, (err: Error, CMResult: certManager.CMResult) => {
            if (err) {
              reject(err);
            }
            else {
              resolve(CMResult);
            }
          });
        });
      }
      catch (err) {
        console.error("[Callback]grantAppCertificate err: " + err);
        expect(null).assertFail();
      }
      try {
        status = await new Promise((resolve, reject) => {
          certManager.isAuthorizedApp(cmResult2.uri, (err: Error, status: boolean) => {
            if (err) {
              reject(err);
            }
            else {
              resolve(status);
            }
          });
        });
      }
      catch (err) {
        console.error("[Callback]isAuthorizedApp err: " + err);
        expect(null).assertFail();
      }
      expect(status).assertTrue();
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_1900
     * @tc.name Test getAuthorizedAppList with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_1900', 0, async (done: Function) => {
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      await certManager.grantAppCertificate(keyUri, appUid).then((cmResult: certManager.CMResult) => {
        expect(cmResult.uri != null).assertTrue();
        console.warn("uri: " + cmResult.uri);
      }).catch((err: Error) => {
        console.error("[Promise]grantAppCertificate err: " + err);
        expect(null).assertFail();
      });
      await certManager.getAuthorizedAppList(keyUri).then((cmResult: certManager.CMResult) => {
        expect(cmResult.appUidList != null).assertTrue();
        console.warn("[Promise]CMResult.appUidList: " + cmResult.appUidList);
      }).catch((err: Error) => {
        console.error("[Promise]getAuthorizedAppList err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_2000
     * @tc.name Test getAuthorizedAppList with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_2000', 0, async (done: Function) => {
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      let cmResult3: certManager.CMResult = {};
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[1]?.keyUri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      try {
        await sysNormalCallback.setCertificateStatusNormal(keyUri, appUid);
      }
      catch (err) {
        expect(null).assertFail();
      }
      try {
        cmResult3 = await new Promise((resolve, reject) => {
          certManager.getAuthorizedAppList(keyUri, (err: Error, CMResult: certManager.CMResult) => {
            if (err) {
              reject(err);
            }
            else {
              resolve(CMResult);
            }
          });
        });
      }
      catch (err) {
        console.error("[Callback]getAuthorizedAppList err: " + err);
        expect(null).assertFail();
      }
      expect(cmResult3.appUidList != null).assertTrue();
      console.warn("[Callback]CMResult.appUidList: " + cmResult3?.appUidList);
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_2100
     * @tc.name Test removeGrantedAppCertificate with normal parameters one
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_2100', 0, async (done: Function) => {
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
      }).catch((err: Error) => {
        console.error("getAppCertificateList err: " + err);
        expect(null).assertFail();
      });
      await certManager.grantAppCertificate(keyUri, appUid).then((cmResult: certManager.CMResult) => {
        expect(cmResult.uri != null).assertTrue();
        console.warn("uri: " + cmResult.uri);
      }).catch((err: Error) => {
        console.error("[Promise]grantAppCertificate err: " + err);
        expect(null).assertFail();
      });
      await certManager.removeGrantedAppCertificate(keyUri, appUid).then((status: boolean) => {
        expect(status).assertTrue();
      }).catch((err: Error) => {
        console.error("[Promise]removeGrantedAppCertificate err: " + err);
        expect(null).assertFail();
      });
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Normal_Func_2200
     * @tc.name Test removeGrantedAppCertificate with normal parameters two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Normal_Func_2200', 0, async (done: Function) => {
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      let status: boolean = false;
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      try {
        await sysNormalCallback.grantAppCertificateNormal(keyUri, appUid);
      }
      catch (err) {
        console.error("[Callback]grantAppCertificate err: " + err);
        expect(null).assertFail();
      }
      try {
        status = await new Promise((resolve, reject) => {
          certManager.removeGrantedAppCertificate(keyUri, appUid, (err: Error, status: boolean) => {
            if (err) {
              reject(err);
            }
            else {
              resolve(status);
            }
          });
        });
      }
      catch (err) {
        console.error("[Callback]removeGrantedAppCertificate err: " + err);
        expect(null).assertFail();
      }
      expect(status).assertTrue();
      done();
    });
  })
}