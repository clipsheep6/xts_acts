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

import { describe, beforeAll, afterEach, it, expect } from "@ohos/hypium";
import * as certPromise from "./utils/certificate/publicCertificatePromise";
import * as certCallback from "./utils/certificate/publicCertificateCallback";
import cert from "@ohos.security.cert";

export default function certificateJsunit() {
  describe("CertificateJsunit", () => {
    console.info("##########start CertificateJsunit##########");
    beforeAll(() => {
    });
    afterEach(() => {
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0100
     * @tc.name check X509CRL get extension true by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_0100", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLExtensionsPromise("pem", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0200
     * @tc.name check X509CRL get extension true by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_0200", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLExtensionsCallback("pem", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0300
     * @tc.name check X509CRL get extension true by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_0300", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLExtensionsPromise("der", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0400
     * @tc.name check X509CRL get extension true by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_0400", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLExtensionsCallback("der", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0500
     * @tc.name check X509CRL get extension false by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_0500", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLExtensionsPromise("pem", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0600
     * @tc.name check X509CRL get extension false by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_0600", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLExtensionsCallback("pem", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0700
     * @tc.name check X509CRL get extension false by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_0700", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLExtensionsPromise("der", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0800
     * @tc.name check X509CRL get extension false by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_0800", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLExtensionsCallback("der", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_0900
     * @tc.name check X509CRLEntry get extension true by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_0900", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLEntryExtensionsPromise("pem", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1000
     * @tc.name check X509CRLEntry get extension true by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_1000", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLEntryExtensionsCallback("pem", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1100
     * @tc.name check X509CRLEntry get extension true by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_1100", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLEntryExtensionsPromise("der", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1200
     * @tc.name check X509CRLEntry get extension true by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_1200", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLEntryExtensionsCallback("der", true)
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1300
     * @tc.name check X509CRLEntry get extension false by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_1300", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLEntryExtensionsPromise("pem", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1400
     * @tc.name check X509CRLEntry get extension false by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_1400", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLEntryExtensionsCallback("pem", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1500
     * @tc.name check X509CRLEntry get extension false by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_1500", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLEntryExtensionsPromise("der", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1600
     * @tc.name check X509CRLEntry get extension false by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_1600", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLEntryExtensionsCallback("der", false)
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1700
     * @tc.name check X509CRLEntry has extension true by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_1700", 0, async (done: Function) => {
      await certPromise
        .checkHasX509CRLEntryExtensionsPromise("pem", true)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1800
     * @tc.name check X509CRLEntry has extension true by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_1800", 0, async (done: Function) => {
      await certCallback
        .checkHasX509CRLEntryExtensionsCallback("pem", true)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_1900
     * @tc.name check X509CRLEntry has extension true by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_1900", 0, async (done: Function) => {
      await certPromise
        .checkHasX509CRLEntryExtensionsPromise("der", true)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2000
     * @tc.name check X509CRLEntry has extension true by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_2000", 0, async (done: Function) => {
      await certCallback
        .checkHasX509CRLEntryExtensionsCallback("der", true)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2100
     * @tc.name check X509CRLEntry has extension false by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_2100", 0, async (done: Function) => {
      await certPromise
        .checkHasX509CRLEntryExtensionsPromise("pem", false)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(!data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2200
     * @tc.name check X509CRLEntry has extension false by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_Func_2200", 0, async (done: Function) => {
      await certCallback
        .checkHasX509CRLEntryExtensionsCallback("pem", false)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(!data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2300
     * @tc.name check X509CRLEntry has extension false by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_2300", 0, async (done: Function) => {
      await certPromise
        .checkHasX509CRLEntryExtensionsPromise("der", false)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(!data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2400
     * @tc.name check X509CRLEntry has extension false by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_Func_2400", 0, async (done: Function) => {
      await certCallback
        .checkHasX509CRLEntryExtensionsCallback("der", false)
        .then((data) => {
          expect(data != null).assertTrue();
          expect(!data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2500
     * @tc.name X509 cert extension has not unSupported Critical by promise
     * @tc.desc certExtension test
     */
    it("Security_Cert_Framework_Certificate_Func_2500", 0, async (done: Function) => {
      await certPromise
        .checkHasUnsupportedX509CrlPromise('certNoCritical')
        .then((data) => {
          expect(data != null).assertTrue();
          expect(!data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2600
     * @tc.name X509 cert extension has not unSupported Critical by callback
     * @tc.desc certExtension test
     */
    it("Security_Cert_Framework_Certificate_Func_2600", 0, async (done: Function) => {
      await certCallback
        .checkHasUnsupportedX509CrlCallback('certNoCritical')
        .then((data) => {
          expect(data != null).assertTrue();
          expect(!data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2700
     * @tc.name X509 cert extension has unSupported Critical by promise
     * @tc.desc certExtension test
     */
    it("Security_Cert_Framework_Certificate_Func_2700", 0, async (done: Function) => {
      await certPromise
        .checkHasUnsupportedX509CrlPromise('certHasCritical')
        .then((data) => {
          expect(data != null).assertTrue();
          expect(data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2800
     * @tc.name X509 cert extension has unSupported Critical by callback
     * @tc.desc certExtension test
     */
    it("Security_Cert_Framework_Certificate_Func_2800", 0, async (done: Function) => {
      await certCallback
        .checkHasUnsupportedX509CrlCallback('certHasCritical')
        .then((data) => {
          expect(data != null).assertTrue();
          expect(data).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_Cert_Framework_Certificate_Func_2900
     * @tc.name check CertResult enums
     * @tc.desc CertResult test
     */
    it("Security_Cert_Framework_Certificate_Func_2900", 0, async (done: Function) => {
      expect(cert.CertResult.INVALID_PARAMS).assertEqual(401);
      expect(cert.CertResult.NOT_SUPPORT).assertEqual(801);
      expect(cert.CertResult.ERR_OUT_OF_MEMORY).assertEqual(19020001);
      expect(cert.CertResult.ERR_RUNTIME_ERROR).assertEqual(19020002);
      expect(cert.CertResult.ERR_CRYPTO_OPERATION).assertEqual(19030001);
      expect(cert.CertResult.ERR_CERT_SIGNATURE_FAILURE).assertEqual(19030002);
      expect(cert.CertResult.ERR_CERT_NOT_YET_VALID).assertEqual(19030003);
      expect(cert.CertResult.ERR_CERT_HAS_EXPIRED).assertEqual(19030004);
      expect(cert.CertResult.ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY).assertEqual(19030005);
      expect(cert.CertResult.ERR_KEYUSAGE_NO_CERTSIGN).assertEqual(19030006);
      expect(cert.CertResult.ERR_KEYUSAGE_NO_DIGITAL_SIGNATURE).assertEqual(19030007);
      done();
    });
  });
}
