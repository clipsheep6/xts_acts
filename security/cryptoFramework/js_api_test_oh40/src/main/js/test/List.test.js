/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import SecurityRandomSyncJsunit from "./SecurityRandomSync.test";
import SecuritySignatureVerificationJsunit from "./SecuritySignatureVerification.test";
import SecurityKeyAgreementJsunit from "./SecurityKeyAgreement.test";
import AsyKeyGeneratorBySpecJsunit from "./AsyKeyGeneratorBySpec.test";
import AsyGetKeySpecBySpecJsunit from "./AsyGetKeySpecBySpec.test";
import SecurityCipherJsunit from "./SecurityCipher.test";

export default function testsuite() {
  SecurityRandomSyncJsunit();
  SecuritySignatureVerificationJsunit();
  SecurityKeyAgreementJsunit();
  AsyGetKeySpecBySpecJsunit();
  AsyKeyGeneratorBySpecJsunit();
  SecurityCipherJsunit();
}
