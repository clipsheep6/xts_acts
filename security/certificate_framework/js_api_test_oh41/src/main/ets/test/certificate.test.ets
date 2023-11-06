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

export default function certificateJsunit() {
  describe("CertificateJsunit", function () {
    console.info("##########start CertificateJsunit##########");
    beforeAll(function () { });
    afterEach(function () { });


    /**
     * @tc.number Security_crypto_framework_CertChainValidator_0400
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_0400",
      0,
      async function (done) {
        await certPromise
          .checkGetX509CRLExtensionsPromise(0)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkGetX509CRLExtensionsCallback(0)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_crypto_framework_CertChainValidator_0500
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_0500",
      0,
      async function (done) {
        await certPromise
          .checkGetX509CRLExtensionsPromise(1)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkGetX509CRLExtensionsCallback(1)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_crypto_framework_CertChainValidator_0600
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_0600",
      0,
      async function (done) {
        await certPromise
          .checkGetX509CRLExtensionsPromise()
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkGetX509CRLExtensionsCallback()
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_crypto_framework_CertChainValidator_0700
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_0700",
      0,
      async function (done) {
        await certPromise
          .checkGetX509CRLEntryExtensionsPromise(1)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkGetX509CRLEntryExtensionsCallback(1)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_crypto_framework_CertChainValidator_0800
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_0800",
      0,
      async function (done) {
        await certPromise
          .checkGetX509CRLEntryExtensionsPromise()
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkGetX509CRLEntryExtensionsCallback()
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_crypto_framework_CertChainValidator_0900
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_0900",
      0,
      async function (done) {
        await certPromise
          .checkHasX509CRLEntryExtensionsPromise(0)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkHasX509CRLEntryExtensionsCallback(0)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_crypto_framework_CertChainValidator_1000
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_1000",
      0,
      async function (done) {
        await certPromise
          .checkHasX509CRLEntryExtensionsPromise(1)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkHasX509CRLEntryExtensionsCallback(1)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_crypto_framework_CertChainValidator_1100
     * @tc.name check validate interface for CertChainValidator with invalid Certs
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it(
      "Security_crypto_framework_CertChainValidator_1100",
      0,
      async function (done) {
        await certPromise
          .checkHasX509CRLEntryExtensionsPromise(2)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });

        await certCallback
          .checkHasX509CRLEntryExtensionsCallback(2)
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err) => {
            expect(null).assertFail();
          });
        done();
      }
    );
  });


  /**
   * @tc.number Security_CertificateFramework_CertExtensionTest_Func_1200
   * @tc.name X509 CertExtension checkCA Test With Invalid Param 2
   * @tc.desc Use callback style
   */
  it(
    "Security_CertificateFramework_CertExtensionTest_Func_1200",
    0,
    async function (done) {
      await certPromise
        .checkHasUnsupportedX509CrlPromise('certNoCritical')
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err) => {
          expect(null).assertFail();
        });

      await certCallback
        .checkHasUnsupportedX509CrlCallback('certNoCritical')
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err) => {
          expect(null).assertFail();
        });
      done();
    }
  );
  /**
   * @tc.number Security_CertificateFramework_CertExtensionTest_Func_1300
   * @tc.name X509 CertExtension checkCA Test With Invalid Param 2
   * @tc.desc Use callback style
   */
  it(
    "Security_CertificateFramework_CertExtensionTest_Func_1300",
    0,
    async function (done) {
      await certPromise
        .checkHasUnsupportedX509CrlPromise('certHasCritical')
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err) => {
          expect(null).assertFail();
        });

      await certCallback
        .checkHasUnsupportedX509CrlCallback('certHasCritical')
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err) => {
          expect(null).assertFail();
        });
      done();
    }
  );
}
