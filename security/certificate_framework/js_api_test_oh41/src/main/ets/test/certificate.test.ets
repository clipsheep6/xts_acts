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
  describe("CertificateJsunit", () => {
    console.info("##########start CertificateJsunit##########");
    beforeAll(() => {
    });
    afterEach(() => {
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0100
     * @tc.name check X509CRL get extension by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_0100", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLExtensionsPromise("pem")
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0200
     * @tc.name check X509CRL get extension by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_0200", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLExtensionsCallback("pem")
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0300
     * @tc.name check X509CRL get extension by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_0300", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLExtensionsPromise("der")
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0400
     * @tc.name check X509CRL get extension by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_0400", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLExtensionsCallback("der")
        .then((data) => {
          expect(data != null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0500
     * @tc.name check X509CRL entry get extension by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_0500", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLEntryExtensionsPromise("pem")
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0600
     * @tc.name check X509CRL entry get extension by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_0600", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLEntryExtensionsCallback("pem")
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0700
     * @tc.name check X509CRL entry get extension by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_0700", 0, async (done: Function) => {
      await certPromise
        .checkGetX509CRLEntryExtensionsPromise("der")
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0880
     * @tc.name check X509CRL entry get extension by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_0800", 0, async (done: Function) => {
      await certCallback
        .checkGetX509CRLEntryExtensionsCallback("der")
        .then((data) => {
          expect(data == null).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_0900
     * @tc.name check X509CRL entry has extension by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_0900", 0, async (done: Function) => {
      await certPromise
        .checkHasX509CRLEntryExtensionsPromise("pem")
        .then((data) => {
          expect(data != null && data == false).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_1000
     * @tc.name check X509CRL entry has extension by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_PEM
     */
    it("Security_Cert_Framework_Certificate_1000", 0, async (done: Function) => {
      await certCallback
        .checkHasX509CRLEntryExtensionsCallback("pem")
        .then((data) => {
          expect(data != null && data == false).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_1100
     * @tc.name check X509CRL entry has extension by promise
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_1100", 0, async (done: Function) => {
      await certPromise
        .checkHasX509CRLEntryExtensionsPromise("der")
        .then((data) => {
          expect(data != null && data == false).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_1200
     * @tc.name check X509CRL entry has extension by callback
     * @tc.desc The X509 certificate FORMAT is FORMAT_DER
     */
    it("Security_Cert_Framework_Certificate_1200", 0, async (done: Function) => {
      await certCallback
        .checkHasX509CRLEntryExtensionsCallback("der")
        .then((data) => {
          expect(data != null && data == false).assertTrue();
        })
        .catch((err: Error) => {
          expect(null).assertFail();
        });
      done();
    });
    /**
     * @tc.number Security_Cert_Framework_Certificate_1300
     * @tc.name X509 CertExtension checkCA Test With Invalid Param 2
     * @tc.desc Use callback style
     */
    it(
      "Security_Cert_Framework_Certificate_1300",
      0,
      async (done: Function) => {
        await certPromise
          .checkHasUnsupportedX509CrlPromise('certNoCritical')
          .then((data) => {
            expect(data != null && data == false).assertTrue();
          })
          .catch((err: Error) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_Cert_Framework_Certificate_1400
     * @tc.name X509 CertExtension checkCA Test With Invalid Param 2
     * @tc.desc Use callback style
     */
    it(
      "Security_Cert_Framework_Certificate_1400",
      0,
      async (done: Function) => {
        await certCallback
          .checkHasUnsupportedX509CrlCallback('certNoCritical')
          .then((data) => {
            expect(data != null && data == false).assertTrue();
          })
          .catch((err: Error) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_Cert_Framework_Certificate_1500
     * @tc.name X509 CertExtension checkCA Test With Invalid Param 2
     * @tc.desc Use callback style
     */
    it(
      "Security_Cert_Framework_Certificate_1500",
      0,
      async (done: Function) => {
        await certPromise
          .checkHasUnsupportedX509CrlPromise('certHasCritical')
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err: Error) => {
            expect(null).assertFail();
          });
        done();
      }
    );
    /**
     * @tc.number Security_Cert_Framework_Certificate_1600
     * @tc.name X509 CertExtension checkCA Test With Invalid Param 2
     * @tc.desc Use callback style
     */
    it(
      "Security_Cert_Framework_Certificate_1600",
      0,
      async (done: Function) => {
        await certCallback
          .checkHasUnsupportedX509CrlCallback('certHasCritical')
          .then((data) => {
            expect(data != null).assertTrue();
          })
          .catch((err: Error) => {
            expect(null).assertFail();
          });
        done();
      }
    );
  });
}
