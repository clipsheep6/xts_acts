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
import * as sysAbCallback from './utils/AbnormalFunction/systemApiCallback';


export default function certManagerSystemJsAPIAbnormalTestUnit() {
  describe('certManagerSystemJsAPIAbnormalTestUnit', () => {
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
        console.error("certManagerSystemJsAPIAbnormalTestUnit afterAll err: " + err);
        expect(null).assertFail();
      });
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0100
     * @tc.name Test setCertificateStatus with abnormal certUri
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0100', 0, async (done: Function) => {
      let store: number = 1;
      let status: boolean = true;
      try {
        await sysAbCallback.setCertificateStatusAbnormal("", store, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.setCertificateStatusAbnormal("111111111aa", store, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0200
     * @tc.name Test setCertificateStatus with abnormal certUri two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0200', 0, async (done: Function) => {
      let store: number = 1;
      let status: boolean = true;
      try {
        await certManager.setCertificateStatus("", store, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.setCertificateStatus(null, store, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.setCertificateStatus("111111111aa", store, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0300
     * @tc.name Test setCertificateStatus with abnormal store
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0300', 0, async (done: Function) => {
      let certUri: string = "4b718d9b.0";
      let status: boolean = true;
      try {
        await sysAbCallback.setCertificateStatusAbnormal(certUri, 2, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await sysAbCallback.setCertificateStatusAbnormal(certUri, 11, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0400
     * @tc.name Test setCertificateStatus with abnormal store two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0400', 0, async (done: Function) => {
      let certUri: string = "4b718d9b.0";
      let status: boolean = true;
      try {
        await certManager.setCertificateStatus(certUri, 2, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await certManager.setCertificateStatus(certUri, 11, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.setCertificateStatus(certUri, null, status);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0600
     * @tc.name Test setCertificateStatus with abnormal status two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0600', 0, async (done: Function) => {
      let certUri: string = "4b718d9b.0";
      let store: number = 1;
      try {
        await certManager.setCertificateStatus(certUri, store, null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.setCertificateStatus(certUri, store, null, null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0700
     * @tc.name Test installUserTrustedCertificate with abnormal status
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0700', 0, async (done: Function) => {
      let certificate: certManager.CertBlob = {
        inData: commonParameter.invalidUserTrustedCert,
        alias: "invalidCertDemo"
      };
      try {
        await sysAbCallback.installUserTrustedCertificateAbnormal(certificate);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500004);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0800
     * @tc.name Test installUserTrustedCertificate with abnormal status two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0800', 0, async (done: Function) => {
      let certificateab: certManager.CertBlob = {
        inData: commonParameter.invalidUserTrustedCert,
        alias: "invalidCertDemo"
      };
      try {
        await certManager.installUserTrustedCertificate(certificateab);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500004);
      }
      try {
        await certManager.installUserTrustedCertificate(null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_0900
     * @tc.name Test uninstallUserTrustedCertificate with abnormal status
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_0900', 0, async (done: Function) => {
      try {
        await sysAbCallback.uninstallUserTrustedCertificateAbnormal("111");
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1000
     * @tc.name Test uninstallUserTrustedCertificate with abnormal status two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1000', 0, async (done: Function) => {
      try {
        await certManager.uninstallUserTrustedCertificate(null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.uninstallUserTrustedCertificate("222");
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1100
     * @tc.name Test installAppCertificate with abnormal status
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1100', 0, async (done: Function) => {
      //接口底层校验不够全面, 第一个参数对空字符串校验不够
      let keystorePwd: string = '123456';
      let certAlias: string = 'pubCredDemo1';
      try {
        await sysAbCallback.installAppCertificateAbnormal(commonParameter.invalidCredInfo, keystorePwd, certAlias);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.installAppCertificateAbnormal(commonParameter.rsa512P12CertInfo, '123', certAlias);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.installAppCertificateAbnormal(commonParameter.rsa512P12CertInfo, keystorePwd, '');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1200
     * @tc.name Test installAppCertificate with abnormal status two
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1200', 0, async (done: Function) => {
      //接口底层校验不够全面, 第一个参数对空字符串校验不够
      let keystorePwd: string = '123456';
      let certAlias: string = 'pubCredDemo1';
      try {
        await certManager.installAppCertificate(commonParameter.invalidCredInfo, keystorePwd, certAlias);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.installAppCertificate(null, keystorePwd, certAlias);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.installAppCertificate(commonParameter.rsa512P12CertInfo, '123', certAlias);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.installAppCertificate(commonParameter.rsa512P12CertInfo, keystorePwd, '');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.installAppCertificate(commonParameter.rsa512P12CertInfo, keystorePwd, null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.installAppCertificate(commonParameter.rsa512P12CertInfo, keystorePwd, certAlias, null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1300
     * @tc.name Test uninstallAppCertificate with abnormal status
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1300', 0, async (done: Function) => {
      let keystore: Uint8Array = commonParameter.rsa2048P12CertInfo;
      let keystorePwd: string = '123456';
      let certAlias: string = 'pubCredDemo1';
      let keyUri: string = '';
      await certManager.installAppCertificate(keystore, keystorePwd, certAlias).then((cmResult: certManager.CMResult) => {
        expect(cmResult != null).assertTrue();
        keyUri = cmResult?.uri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      try {
        await certManager.uninstallAppCertificate(null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.uninstallAppCertificate('');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1400
     * @tc.name Test uninstallAppCertificate with abnormal status two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1400', 0, async (done: Function) => {
      try {
        await sysAbCallback.uninstallAppCertificateAbnormal('');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1500
     * @tc.name Test grantAppCertificate with abnormal status
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1500', 0, async (done: Function) => {
      //第二个参数为空字符串或者错误字符串时可以授权成功，逻辑存疑
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      try {
        await certManager.grantAppCertificate(null, appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.grantAppCertificate('', appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.grantAppCertificate('333', appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await certManager.grantAppCertificate(keyUri, null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.grantAppCertificate(keyUri, '');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1600
     * @tc.name Test grantAppCertificate with abnormal status two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1600', 0, async (done: Function) => {
      //第二个参数为空字符串或者错误字符串时可以授权成功，逻辑存疑
      let keyUri: string ='';
      let appUid: string = await commonFunction.getClientAppUid();
      await certManager.getAppCertificateList().then((cmResult: certManager.CMResult) => {
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
      }).catch((err: Error) => {
        expect(null).assertFail();
      });
      try {
        await sysAbCallback.grantAppCertificateAbnormal('', appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.grantAppCertificateAbnormal('333', appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500003);
      }
      try {
        await sysAbCallback.grantAppCertificateAbnormal(keyUri, '');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1700
     * @tc.name Test getAuthorizedAppList with abnormal status
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1700', 0, async (done: Function) => {
      let appUid: string = await commonFunction.getClientAppUid();
      let cmResult: certManager.CMResult;
      try {
        cmResult = await certManager.getAppCertificateList();
        let appKeyUri1: string = cmResult.credentialList?.[0]?.keyUri as string;
        await certManager.grantAppCertificate(appKeyUri1, appUid);
      }
      catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.getAuthorizedAppList(null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.getAuthorizedAppList('');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.getAuthorizedAppList('333');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1800
     * @tc.name Test getAuthorizedAppList with abnormal status two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1800', 0, async (done: Function) => {
      let appUid: string = await commonFunction.getClientAppUid();
      let cmResult: certManager.CMResult = {};
      try {
        cmResult = await certManager.getAppCertificateList();
        await certManager.grantAppCertificate(cmResult.credentialList?.[0]?.keyUri as string, appUid);
      }
      catch (err) {
        expect(null).assertFail();
      }
      try {
        await sysAbCallback.getAuthorizedAppListAbnormal('');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.getAuthorizedAppListAbnormal('333');
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_1900
     * @tc.name Test removeGrantedAppCertificate with abnormal status
     * @tc.desc Use Promise Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_1900', 0, async (done: Function) => {
      //clientAppUid使用错误的能删除授权成功，有bug
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      try {
        let cmResult: certManager.CMResult = await certManager.getAppCertificateList();
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
        await certManager.grantAppCertificate(keyUri, appUid);
      }
      catch (err) {
        expect(null).assertFail();
      }
      try {
        await certManager.removeGrantedAppCertificate("", appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.removeGrantedAppCertificate(null, appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.removeGrantedAppCertificate("111", appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.removeGrantedAppCertificate(keyUri, "");
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await certManager.removeGrantedAppCertificate(keyUri, null);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(401);
      }
      try {
        await certManager.removeGrantedAppCertificate(keyUri, "222");
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
    /**
     * @tc.number Security_CertManager_SystemJsApi_Abnormal_Func_2000
     * @tc.name Test removeGrantedAppCertificate with abnormal status two
     * @tc.desc Use AsyncCallback Type
     */
    it('Security_CertManager_SystemJsApi_Abnormal_Func_2000', 0, async (done: Function) => {
      //clientAppUid使用错误的能删除授权成功，有bug
      let keyUri: string = '';
      let appUid: string = await commonFunction.getClientAppUid();
      try {
        let cmResult: certManager.CMResult = await certManager.getAppCertificateList();
        keyUri = cmResult.credentialList?.[0]?.keyUri as string;
        await certManager.grantAppCertificate(keyUri, appUid);
      }
      catch (err) {
        expect(null).assertFail();
      }
      try {
        await sysAbCallback.removeGrantedAppCertificateAbnormal("", appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.removeGrantedAppCertificateAbnormal("111", appUid);
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.removeGrantedAppCertificateAbnormal(keyUri, "");
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      try {
        await sysAbCallback.removeGrantedAppCertificateAbnormal(keyUri, "222");
        expect(null).assertFail();
      }
      catch (err) {
        expect(err.code).assertEqual(17500001);
      }
      done();
    });
  })
}