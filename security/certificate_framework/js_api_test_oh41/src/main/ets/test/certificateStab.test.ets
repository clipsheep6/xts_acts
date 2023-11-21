/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import * as certPromise from "./utils/certificate/publicCertificatePromise";
import * as certCallback from "./utils/certificate/publicCertificateCallback";

export default function certificateStabJsunit() {
  describe("certificateStabJsunit", () => {
    console.info("##########start certificateStabJsunit##########");
    beforeAll(() => {
    });
    afterEach(() => {
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Stab_0100
     * @tc.name check X509CRL get extension true by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Stab_0100", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLExtensionsStabilityPromise("pem", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_Cert_Framework_Certificate_Stab_0200
     * @tc.name check X509CRLEntry get extension false by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Stab_0200", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLEntryExtensionsStabilityPromise("pem", true)
        .then((data) => {
          expect(data !== null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
  });
}
