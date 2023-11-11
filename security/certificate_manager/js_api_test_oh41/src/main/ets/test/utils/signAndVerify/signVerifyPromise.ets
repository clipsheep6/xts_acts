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

async function signVerifyNormalProcess(authUri: string, srcData: Uint8Array) {
  let signSpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
  };
  let verifySpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_VERIFY
  };

  try {
    let signHandle: certManager.CMHandle = await certManager.init(authUri, signSpec);
    await certManager.update(signHandle.handle, srcData);
    let signResult: certManager.CMResult = await certManager.finish(signHandle.handle);
    let verifyHandle: certManager.CMHandle = await certManager.init(authUri, verifySpec);
    await certManager.update(verifyHandle.handle, srcData);
    let verifyResult = await certManager.finish(verifyHandle.handle, signResult.outData);
    return verifyResult;
  } catch (err) {
    console.error("[Promise]signVerifyNormalProcess catch err: " + err);
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
    let signHandle: certManager.CMHandle = await certManager.init(authUri, signSpec);
    await certManager.update(signHandle.handle, srcData);
    let signResult: certManager.CMResult = await certManager.finish(signHandle.handle);
    let verifyHandle: certManager.CMHandle = await certManager.init(authUri, verifySpec);
    switch (flag) {
      case "after_verify_init":
        status = await certManager.abort(verifyHandle.handle);
        console.log("[Promise]abort status: " + status);
        return status;
      case "after_verify_update":
        await certManager.update(verifyHandle.handle, srcData);
        status = await certManager.abort(verifyHandle.handle);
        console.log("[Promise]abort status: " + status);
        return status;
      case "after_verify_finish":
        await certManager.update(verifyHandle.handle, srcData);
        await certManager.finish(verifyHandle.handle, signResult.outData)
        status = await certManager.abort(verifyHandle.handle);
        console.log("[Promise]abort status: " + status);
        return status;
      default:
        throw new Error("wrong parameter");
        break;
    }
  } catch (err) {
    console.error("[Promise]verifyAbortProcess catch err: " + err);
    throw new Error(err);
  }
}

async function signAbortProcess(authUri: string, srcData: Uint8Array, flag: string) {
  let signSpec: certManager.CMSignatureSpec = {
    purpose: certManager.CmKeyPurpose.CM_KEY_PURPOSE_SIGN
  };
  let status: boolean = false;

  try {
    let signHandle: certManager.CMHandle = await certManager.init(authUri, signSpec);
    switch (flag) {
      case "after_init":
        status = await certManager.abort(signHandle.handle);
        console.log("[Promise]abort status: " + status);
        return status;
      case "after_update":
        await certManager.update(signHandle.handle, srcData);
        status = await certManager.abort(signHandle.handle);
        console.log("[Promise]abort status: " + status);
        return status;
      case "after_finish":
        await certManager.update(signHandle.handle, srcData);
        await certManager.finish(signHandle.handle);
        status = await certManager.abort(signHandle.handle);
        console.log("[Promise]abort status: " + status);
        return status;
      default:
        throw new Error("wrong parameter");
        break;
    }
  } catch (err) {
    console.error("[Promise]signAbortProcess catch err: " + err);
    throw new Error(err);
  }
}

export { signVerifyNormalProcess, signAbortProcess, verifyAbortProcess }