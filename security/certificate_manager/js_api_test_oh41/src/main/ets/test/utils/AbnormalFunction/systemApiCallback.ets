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

async function setCertificateStatusAbnormal(certUri, store, status) {
  return new Promise((resolve, reject) => {
    certManager.setCertificateStatus(certUri, store, status, (err, result) => {
      if (err) {
        console.error("[Callback]setCertificateStatus err: " + err.code);
        reject(err);
      } else {
        resolve(result);
      }
    })
  });
}

async function installUserTrustedCertificateAbnormal(certificate) {
  return new Promise((resolve, reject) => {
    certManager.installUserTrustedCertificate(certificate, (err, CMResult) => {
      if (err) {
        console.error("[Callback]installUserTrustedCertificate err: " + err.code);
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  });
}

async function installAppCertificateAbnormal(keystore, keystorePwd, certAlias) {
  return new Promise((resolve, reject) => {
    certManager.installAppCertificate(keystore, keystorePwd, certAlias, (err, cmResult) => {
      if (err) {
        console.error("[Callback]installAppCertificate err: " + err.code);
        reject(err);
      } else {
        resolve(cmResult);
      }
    })
  });
}


async function uninstallAppCertificateAbnormal(keyUri) {
  return new Promise((resolve, reject) => {
    certManager.uninstallAppCertificate(keyUri, (err, status) => {
      if (err) {
        console.error("[Callback]uninstallAppCertificate err: " + err.code);
        reject(err);
      } else {
        resolve(status);
      }
    })
  });
}

async function grantAppCertificateAbnormal(keyUri, appUid) {
  return new Promise((resolve, reject) => {
    certManager.grantAppCertificate(keyUri, appUid, (err, CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  })
}

async function getAuthorizedAppListAbnormal(keyUri) {
  return new Promise((resolve, reject) => {
    certManager.getAuthorizedAppList(keyUri, (err, CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  })
}

async function removeGrantedAppCertificateAbnormal(keyUri, clientAppUid) {
  return new Promise((resolve, reject) => {
    certManager.removeGrantedAppCertificate(keyUri, clientAppUid, (err, CMResult) => {
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
  removeGrantedAppCertificateAbnormal
}

