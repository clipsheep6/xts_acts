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
import { expect } from '@ohos/hypium';
import * as commonFunction from '../common/common_function';

async function testInit(signSpec: certManager.CMSignatureSpec) {
  let cmResult: certManager.CMResult = {};
  let appKeyUri: string = '';

  try {
    await commonFunction.installPrivateCertificates();
    cmResult = await certManager.getPrivateCertificateList();
    appKeyUri = cmResult.credentialList?.[0]?.keyUri as string;
    expect(appKeyUri).assertEqual("oh:t=ak;o=testPriCredential001;u=100;a=20010043");
  }
  catch (err) {
    expect(null).assertFail();
  }

  try {
    await initNormal(appKeyUri, signSpec);
  }
  catch (err) {
    expect(null).assertFail();
  }
}

async function initNormal(authUri: string, spec: certManager.CMSignatureSpec): Promise<certManager.CMHandle> {
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


export {
  testInit
}

