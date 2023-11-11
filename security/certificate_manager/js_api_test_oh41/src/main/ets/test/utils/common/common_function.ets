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

import bundleManager from '@ohos.bundle.bundleManager';
import * as commonParameter from './common_parameter';
import certManager from '@ohos.security.certManager';

async function getClientAppUid() {
  try {
    let bundleInfo: bundleManager.BundleInfo;
    bundleInfo = await bundleManager.getBundleInfoForSelf(bundleManager.BundleFlag.GET_BUNDLE_INFO_WITH_APPLICATION);
    console.warn("grant --->get bundleInfo is " + JSON.stringify(bundleInfo));
    let clientAppUid = bundleInfo.appInfo.uid;
    console.warn("get clientAppUid: " + clientAppUid.toString());
    return clientAppUid.toString();
  } catch (err) {
    console.error("getClientAppUid error: " + err);
    throw new Error(err);
  }
}

async function installPrivateCertificates() {
  let keystore1: Uint8Array = commonParameter.priRsaCredData;
  let keystore2: Uint8Array = commonParameter.priEccCredData;
  let keystorePwd: string = "123456";

  try {
    await certManager.installPrivateCertificate(keystore1, keystorePwd, "testPriCredential001");
    await certManager.installPrivateCertificate(keystore2, keystorePwd, "testPriCredential002");
  } catch (err) {
    console.error("installPrivateCertificates err: " + err.code);
    throw new Error(err);
  }
}

async function installAppCertificates() {
  let keyStore1: Uint8Array = commonParameter.rsa512P12CertInfo;
  let keyStore2: Uint8Array = commonParameter.rsa1024P12CertInfo;
  let keyStore3: Uint8Array = commonParameter.rsa2048P12CertInfo;
  let keyStore4: Uint8Array = commonParameter.eccP224P12CertInfo;
  let keystorePwd: string = "123456";

  try {
    await certManager.installAppCertificate(keyStore1, keystorePwd, "testPubCredential001");
    await certManager.installAppCertificate(keyStore2, keystorePwd, "testPubCredential002");
    await certManager.installAppCertificate(keyStore3, keystorePwd, "testPubCredential003");
    await certManager.installAppCertificate(keyStore4, keystorePwd, "testPubCredential004");
  } catch (err) {
    console.error("ActsCertManagerThirdPartyJsAPITestUnit beforeAll installAppCertificates err: " + err.code);
    throw new Error(err);
  }
}

async function installUserTrustedCertificates() {
  let certificate1: certManager.CertBlob = {
    inData: commonParameter.userTrustedCert1,
    alias: "usertrustcert1"
  };
  let certificate2: certManager.CertBlob = {
    inData: commonParameter.userTrustedCert2,
    alias: "usertrustcert2"
  };
  let certificate3: certManager.CertBlob = {
    inData: commonParameter.userTrustedCert3,
    alias: "usertrustcert3"
  };
  let certificate4: certManager.CertBlob = {
    inData: commonParameter.userTrustedCert4,
    alias: "usertrustcert4"
  };
  try {
    await certManager.installUserTrustedCertificate(certificate1);
    await certManager.installUserTrustedCertificate(certificate2);
    await certManager.installUserTrustedCertificate(certificate3);
    await certManager.installUserTrustedCertificate(certificate4);
  } catch (err) {
    console.error("ActsCertManagerThirdPartyJsAPINormalTestUnit beforeAll err: " + err.code);
    throw new Error(err);
  }
}

export { getClientAppUid, installPrivateCertificates, installAppCertificates, installUserTrustedCertificates }