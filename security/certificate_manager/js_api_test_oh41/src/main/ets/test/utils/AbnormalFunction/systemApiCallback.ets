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

import certManager from '@ohos.security.certManager';

async function setCertificateStatusAbnormal(certUri: string, store: number, status: boolean): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.setCertificateStatus(certUri, store, status, (err: Error, result: boolean) => {
      if (err) {
        reject(err);
      } else {
        resolve(result);
      }
    })
  });
}

async function installUserTrustedCertificateAbnormal(certificate: certManager.CertBlob): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.installUserTrustedCertificate(certificate, (err: Error, CMResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  });
}

async function installAppCertificateAbnormal(keystore: Uint8Array, keystorePwd: string, certAlias: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.installAppCertificate(keystore, keystorePwd, certAlias, (err: Error, cmResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(cmResult);
      }
    })
  });
}


async function uninstallAppCertificateAbnormal(keyUri: string): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.uninstallAppCertificate(keyUri, (err: Error, status: boolean) => {
      if (err) {
        reject(err);
      } else {
        resolve(status);
      }
    })
  });
}

async function uninstallUserTrustedCertificateAbnormal(keyUri: string): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.uninstallUserTrustedCertificate(null, (err: Error, status: boolean) => {
      if (err) {
        reject(err);
      }
      else {
        resolve(status);
      }
    });
  });
}

async function grantAppCertificateAbnormal(keyUri: string, appUid: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.grantAppCertificate(keyUri, appUid, (err: Error, CMResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  })
}

async function getAuthorizedAppListAbnormal(keyUri: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.getAuthorizedAppList(keyUri, (err: Error, CMResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  })
}

async function removeGrantedAppCertificateAbnormal(keyUri: string, clientAppUid: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.removeGrantedAppCertificate(keyUri, clientAppUid, (err: Error, CMResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  })
}

export {
  setCertificateStatusAbnormal,
  installUserTrustedCertificateAbnormal,
  installAppCertificateAbnormal,
  uninstallAppCertificateAbnormal,
  grantAppCertificateAbnormal,
  getAuthorizedAppListAbnormal,
  removeGrantedAppCertificateAbnormal,
  uninstallUserTrustedCertificateAbnormal
}

