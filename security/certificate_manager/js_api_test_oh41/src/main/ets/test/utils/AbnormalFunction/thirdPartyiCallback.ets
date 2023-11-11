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

async function getSystemTrustedCertificateAbnormal(certUri: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.getSystemTrustedCertificate(certUri, (err: Error, CMResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  })
}

async function getUserTrustedCertificateAbnormal(certUri: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.getUserTrustedCertificate(certUri, (err: Error, CMResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMResult);
      }
    })
  })
}

async function installPrivateCertificateAbnormal(keystore: Uint8Array, keystorePwd: string, certAlias: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.installPrivateCertificate(keystore, keystorePwd, certAlias, (err: Error, cmResult: certManager.CMResult) => {
      if (err) {
        reject(err);
      } else {
        resolve(cmResult);
      }
    })
  });
}


async function uninstallPrivateCertificateAbnormal(keyUri: string): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.uninstallPrivateCertificate(keyUri, (err: Error, status: boolean) => {
      if (err) {
        reject(err);
      } else {
        resolve(status);
      }
    })
  });
}

async function isAuthorizedAppAbnormal(keyUri: string): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.isAuthorizedApp(keyUri, (err: Error, status: boolean) => {
      if (err) {
        reject(err);
      } else {
        resolve(status);
      }
    })
  });
}

async function initAbnormal(authUri: string, spec: certManager.CMSignatureSpec): Promise<certManager.CMHandle> {
  return new Promise((resolve, reject) => {
    certManager.init(authUri, spec, (err: Error, CMHandle: certManager.CMHandle) => {
      if (err) {
        reject(err);
      } else {
        resolve(CMHandle);
      }
    })
  });
}

async function updateAbnormal(handle:Uint8Array, data:Uint8Array): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.update(handle, data, (err: Error, status: boolean) => {
      if (err) {
        reject(err);
      } else {
        resolve(status);
      }
    })
  });
}

async function finishAbnormal(handle: Uint8Array, signature?: Uint8Array): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    if (signature != null && signature != undefined) {
      certManager.finish(handle, signature, (err: Error, CMResult: certManager.CMResult) => {
        if (err) {
          reject(err);
        } else {
          resolve(CMResult);
        }
      })
    } else {
      certManager.finish(handle, (err: Error, CMResult: certManager.CMResult) => {
        if (err) {
          reject(err);
        } else {
          resolve(CMResult);
        }
      })
    }
  });
}

async function abortAbnormal(handle: Uint8Array): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.abort(handle, (err: Error, status: boolean) => {
      if (err) {
        reject(err);
      } else {
        resolve(status);
      }
    })
  });
}

async function getAppCertificateAbnormal(keyUri: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.getAppCertificate("", (err: Error, status: certManager.CMResult) => {
      if (err) {
        reject(err);
      }
      else {
        resolve(status);
      }
    });
  });
}

async function getPrivateCertificateAbnormal(keyUri: string): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    certManager.getPrivateCertificate("", (err: Error, result: certManager.CMResult) => {
      if (err) {
        reject(err);
      }
      else {
        resolve(result);
      }
    });
  });
}

export {
  getSystemTrustedCertificateAbnormal,
  getUserTrustedCertificateAbnormal,
  installPrivateCertificateAbnormal,
  uninstallPrivateCertificateAbnormal,
  isAuthorizedAppAbnormal,
  initAbnormal,
  updateAbnormal,
  finishAbnormal,
  abortAbnormal,
  getAppCertificateAbnormal,
  getPrivateCertificateAbnormal
}

