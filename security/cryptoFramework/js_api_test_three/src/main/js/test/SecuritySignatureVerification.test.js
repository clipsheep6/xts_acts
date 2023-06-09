/*
 * Copyright (C) 2022-2023 Huawei Device Co., Ltd.
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

import { describe, beforeAll, afterEach, it, expect } from "@ohos/hypium";
import * as asyPromise from "./utils/asymmetric/publicAsymmetricPromise";

export default function SecuritySignatureVerificationJsunit() {
  describe("SecuritySignatureVerificationJsunit", function () {
    console.info("##########start SecuritySignatureVerificationJsunit##########");
    beforeAll(function () {
    });
    afterEach(function () {
    });

    /**
     * @tc.number Security_CryptoFramework_SignatureVerification_Stab_0100
     * @tc.name Signature verification stability test
     * @tc.desc generate a random number by calling 1000 times, use promise style of interface
     */
      it(
        "Security_CryptoFramework_SignatureVerification_Stab_0100",
        0,
        async function (done) {
          await asyPromise
            .signAndVerifystabilityProcess()
            .then((data) => {
              expect(data == null).assertTrue();
            })
            .catch((err) => {
              console.error(
                "AsyPromise signAndVerifystabilityProcess catch error: " +
                err
              );
              expect(null).assertFail();
            });
          done();
        }
      );
  });
}
