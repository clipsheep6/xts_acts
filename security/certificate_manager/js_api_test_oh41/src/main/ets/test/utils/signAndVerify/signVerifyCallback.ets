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

async function initProcess(authUri: string, spec: certManager.CMSignatureSpec): Promise<certManager.CMHandle> {
  return new Promise((resolve, reject) => {
    certManager.init(authUri, spec, (err: Error, CMHandle: certManager.CMHandle) => {
      if (err) {
        console.error("[Callback] initProcess get err: " + err);
        reject(err);
      } else {
        console.log("[Callback] initProcess get CMHandle: " + CMHandle.handle);
        resolve(CMHandle);
      }
    })
  })
}

async function updateProcess(handle: Uint8Array, data: Uint8Array): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.update(handle, data, (err: Error, status: boolean) => {
      if (err) {
        console.error("[Callback] updateProcess get err: " + err);
        reject(err);
      } else {
        console.log("[Callback] updateProcess get status: " + status);
        resolve(status);
      }
    })
  })
}

async function finishProcess(handle: Uint8Array, signature?: Uint8Array): Promise<certManager.CMResult> {
  return new Promise((resolve, reject) => {
    if (signature) {
      certManager.finish(handle, signature, (err: Error, CMResult: certManager.CMResult) => {
        if (err) {
          console.error("[Callback] verify finishProcess get err: " + err);
          reject(err);
        } else {
          console.log("[Callback] verify finishProcess get CMResult: " + CMResult);
          resolve(CMResult);
        }
      })
    } else {
      certManager.finish(handle, (err: Error, CMResult: certManager.CMResult) => {
        if (err) {
          console.error("[Callback] signature finishProcess get err: " + err);
          reject(err);
        } else {
          console.log("[Callback] signature finishProcess get CMResult: " + CMResult);
          resolve(CMResult);
        }
      })
    }
  })
}

async function abortProcess(handle: Uint8Array): Promise<boolean> {
  return new Promise((resolve, reject) => {
    certManager.abort(handle, (err: Error, status: boolean) => {
      if (err) {
        console.error("[Callback] abortProcess get err: " + err);
        reject(err);
      } else {
        console.log("[Callback] abortProcess get status: " + status);
        resolve(status);
      }
    })
  })
}

async function signVerifyNormalProcess(authUri: string, srcData: Uint8Array) {
  let signSpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
  };
  let verifySpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_VERIFY
  };

  try {
    let signHandle: certManager.CMHandle = await initProcess(authUri, signSpec);
    await updateProcess(signHandle.handle, srcData);
    let signResult: certManager.CMResult = await finishProcess(signHandle.handle);
    let verifyHandle: certManager.CMHandle = await initProcess(authUri, verifySpec);
    await updateProcess(verifyHandle.handle, srcData);
    let verifyResult: certManager.CMResult = await finishProcess(verifyHandle.handle, signResult.outData);
    return verifyResult;
  } catch (err) {
    console.error("[Callback]signVerifyNormalProcess catch err: " + err);
    throw new Error(err);
  }
}

async function verifyAbortProcess(authUri: string, srcData: Uint8Array, flag: string) {
  let signSpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
  };
  let verifySpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_VERIFY
  };
  let status: boolean = false;
  try {
    let signHandle: certManager.CMHandle = await initProcess(authUri, signSpec);
    await updateProcess(signHandle.handle, srcData);
    let signResult: certManager.CMResult = await finishProcess(signHandle.handle);
    let verifyHandle: certManager.CMHandle = await initProcess(authUri, verifySpec);
    switch (flag) {
      case "after_verify_init":
        status = await abortProcess(verifyHandle.handle);
        console.log("[Callback]abort status: " + status);
        return status;
      case "after_verify_update":
        await updateProcess(verifyHandle.handle, srcData);
        status = await abortProcess(verifyHandle.handle);
        console.log("[Callback]abort status: " + status);
        return status;
      case "after_verify_finish":
        await updateProcess(verifyHandle.handle, srcData);
        await finishProcess(verifyHandle.handle, signResult.outData)
        status = await abortProcess(verifyHandle.handle);
        console.log("[Callback]abort status: " + status);
        return status;
      default:
        throw new Error("wrong parameter");
        break;
    }
  } catch (err) {
    console.error("[Callback]verifyAbortProcess catch err: " + err);
    throw new Error(err);
  }
}

async function signAbortProcess(authUri: string, srcData: Uint8Array, flag: string) {
  let signSpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
  };
  let status: boolean = false;

  try {
    let signHandle: certManager.CMHandle = await initProcess(authUri, signSpec);
    switch (flag) {
      case "after_init":
        status = await abortProcess(signHandle.handle);
        console.log("[Callback]abort status: " + status);
        return status;
      case "after_update":
        await updateProcess(signHandle.handle, srcData);
        status = await abortProcess(signHandle.handle);
        console.log("[Callback]abort status: " + status);
        return status;
      case "after_finish":
        await updateProcess(signHandle.handle, srcData);
        await finishProcess(signHandle.handle);
        status = await abortProcess(signHandle.handle);
        console.log("[Callback]abort status: " + status);
        return status;
      default:
        throw new Error("wrong parameter");
        break;
    }
  } catch (err) {
    console.error("[Callback]signAbortProcess catch err: " + err);
    throw new Error(err);
  }
}

export { signVerifyNormalProcess, signAbortProcess, verifyAbortProcess }