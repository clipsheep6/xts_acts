// @ts-nocheck
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
import * as asyPromise from "./utils/asymmetric/publicAsymmetricPromise";
import * as asyCommon from "./utils/common/publicDoSpec";
import * as asyCallback from "./utils/asymmetric/publicAsymmetricCallback";
import cryptoFramework from "@ohos.security.cryptoFramework";

export default function SecuritySignAndVerifyJsunit() {
  describe("SecuritySignAndVerifyJsunit", function () {
    console.info("##########start SecuritySignAndVerifyJsunit##########");
    beforeAll(function () {
    });
    afterEach(function () {
    });

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0100",
      0,
      async function (done) {
        await asyCallback
          .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA512|PKCS1|MD5", 1)
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0200",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA768|PKCS1|SHA1", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "0200 signAndVerifySetAndGetSpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm RSA2048|PSS|SHA256|MGF1_SHA256   signAndVerifySetAndGetSpecProcess
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0300",
      0,
      async function (done) {
        await asyCallback
          .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA2048|PSS|SHA256|MGF1_SHA256", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0400",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA2048|PKCS1|SHA256", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm   RSA3072|PKCS1|SHA384
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0500",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA3072|PKCS1|SHA384", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0600",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA4096|PKCS1|SHA512", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0700",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA8192|PKCS1|MD5", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0800",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA|PKCS1|MD5", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA2048|PSS|SHA256|MGF1_SHA256 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_0900",
      0,
      async function (done) {
        await asyCallback
          .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
            "RSA2048|PSS|SHA256|MGF1_SHA256", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifySetAndGetSpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_1000
     * @tc.name Test convertKey
     * @tc.desc Use RSA2048|PSS|SHA256|MGF1_SHA256 algorithm
     */

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_1100
     * @tc.name Test convertKey
     * @tc.desc Use RSA2048|PSS|SHA256|MGF1_SHA256 algorithm
     */

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_1200
     * @tc.name Test convertKey
     * @tc.desc Use RSA2048|PSS|SHA256|MGF1_SHA256 algorithm
     */



    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_1300",
      0,
      async function (done) {
        await asyCallback
          .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
            "ECC256|SHA256", 1)
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_1400",
      0,
      async function (done) {
        await asyCallback
          .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
            "ECC256|SHA256", 1)
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3700 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_1500",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
            "ECC224|SHA256", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_1600",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
            "ECC384|SHA224", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_1700",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
            "ECC521|SHA256", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_1800",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
            "DSA|SHA1", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_1900",
      0,
      async function (done) {
        await asyCallback
          .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
            "DSA|SHA224", 1)
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_2000",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
            "DSA1024|SHA224", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_2100",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
            "DSA2048|SHA256", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_2200",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
            "DSA3072|SHA384", 1, "Notnull")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifyBySpecProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );

    /**
     * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
     * @tc.name Test convertKey 1000
     * @tc.desc Use RSA1024|PRIMES_2 algorithm
     */
    it(
      "Security_crypto_framework_Sign_And_Verify_2300",
      0,
      async function (done) {
        await asyPromise
          .signAndVerifystabilityProcess()
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 signAndVerifystabilityProcess catch  error: " +
              err
            );
            expect(null).assertFail();
          });
        done();
      }
    );
  });
}
