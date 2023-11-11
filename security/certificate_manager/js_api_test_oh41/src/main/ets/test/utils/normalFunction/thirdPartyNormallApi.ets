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
    console.error("[sssssss]thirdPartyNormallApi testInit begin");
    await commonFunction.installPrivateCertificates();
    cmResult = await certManager.getPrivateCertificateList();
    appKeyUri = cmResult.credentialList?.[0]?.keyUri as string;
    console.log("[sssssss]thirdPartyNormallApi testInit end");
  }
  catch (err) {
    console.error("[sssssss]thirdPartyNormallApi testInit err: " + err);
    expect(null).assertFail();
  }

  try {
    console.log("[sssssss]thirdPartyNormallApi init begin");
    await certManager.init(appKeyUri, signSpec);
    console.log("[sssssss]thirdPartyNormallApi init end");
  }
  catch (err) {
    console.error("[sssssss]thirdPartyNormallApi init err: " + err);
    expect(null).assertFail();
  }
}


export {
  testInit
}

