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
import {
  testSecuritySignThreeStagePromise,
  testSecuritySignAppendDataPromise,
  testSecuritySignInitPromise,
  testSecuritySignAddDataSignedPromise,
  testSecuritySignAddLongDataSignedPromise,
  testSecurityNotParameterAddDataSignedPromise,
  testSecurityMultiParameterAddDataSignedPromise,
  testSecurityNotInitializedAddDataSignedPromise,
  testSecurityNotInitializedSignDataPromise,
  testSecuritySignLongUpDataPromise,
  testSecuritySignLongDataPromise,
  testSecuritySignInitFillPromise,
  testSecuritySignGetFillPromise,
} from "./utils/securitysignverify/publicSecuritySignVerifyPromise";

import {
  testSecuritySignCallback,
  testSecuritySignNotParameterCallback,
  testSecuritySignDoubleParameterCallback,
  testSecuritySignThreeStageCallback,
  testSecuritySignAlgNameCallback,
  testSecuritySignInitCallback,
  testSecuritySignUpDateCallback,
} from "./utils/securitysignverify/publicSecuritySignVerifyCallback";

export default function SecuritySignJsunit() {
  describe("SecuritySignJsunit", function () {
    console.info("##########start SecuritySignJsunit##########");
    beforeAll(function () {});
    afterEach(function () {});

    /**
     * @tc.number Security_crypto_framework_Sign_0100
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0100", 0, async function (done) {
      await testSecuritySignCallback("RSA512|PKCS1|MD5")
        .then((data) => {
          console.info("RSA512 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA512 SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA768|PKCS1|MD5")
        .then((data) => {
          console.info("RSA768 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA768 SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA1024|PKCS1|MD5")
        .then((data) => {
          console.info("RSA1024 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA1024 SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA2048|PKCS1|MD5")
        .then((data) => {
          console.info("RSA2048 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA2048 SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA3072|PKCS1|MD5")
        .then((data) => {
          console.info("RSA3072 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA3072 SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA4096|PKCS1|MD5")
        .then((data) => {
          console.info("RSA4096 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA4096 SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA8192|PKCS1|MD5")
        .then((data) => {
          console.info("RSA8192 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA8192 SignCallback fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0400
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0200", 0, async function (done) {
      await testSecuritySignCallback(null)
        .then((data) => {
          console.info("null SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("null SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA10000|PKCS1|MD5")
        .then((data) => {
          console.info("RSA10000 SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA10000 SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback("RSA1024PKCS1MD5RSA1024PKCS1MD5RSA1024PKCS1MD5")
        .then((data) => {
          console.info("long SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("long SignCallback fail");
          expect(null).assertNull();
        });

      await testSecuritySignCallback(36)
        .then((data) => {
          console.info("long SignCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("long SignCallback fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0300
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0300", 0, async function (done) {
      await testSecuritySignNotParameterCallback()
        .then((data) => {
          console.info("SignNotParameterCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("SignNotParameterCallback fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0500
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0400", 0, async function (done) {
      await testSecuritySignDoubleParameterCallback("RSA10000|PKCS1|MD5", "RSA10000|PKCS1|SHA512")
        .then((data) => {
          console.info("SignDoubleParameterCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("SignDoubleParameterCallback fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_1100
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0500", 0, async function (done) {
      await testSecuritySignInitPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", 5)
        .then((data) => {
          console.info("1000 SignInitPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1000 SignInitPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_1300
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    /*it("Security_crypto_framework_Sign_0600", 0, async function (done) {
      await testSecuritySignInitCallback("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512")
        .then((data) => {
          console.info("1200 SignThreeStageCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1200 SignThreeStageCallback fail");
          expect(null).assertNull();
        });
      done();
    });*/

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0700", 0, async function (done) {
      await testSecuritySignInitPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", 0)
        .then((data) => {
          console.info("0600 SignInitPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("0600 SignInitPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0800", 0, async function (done) {
      await testSecuritySignInitPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", 1)
        .then((data) => {
          console.info("0700 SignInitPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("0700 SignInitPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_0900", 0, async function (done) {
      await testSecuritySignInitPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", 2)
        .then((data) => {
          console.info("0800 SignInitPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("0800 SignInitPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_1000", 0, async function (done) {
      await testSecuritySignInitPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", 3)
        .then((data) => {
          console.info("0900 SignInitPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("0900 SignInitPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_1400
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    /*it("Security_crypto_framework_Sign_1100", 0, async function (done) {
      await testSecuritySignUpDateCallback("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "Test1")
        .then((data) => {
          console.info("1300 SignThreeStageCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1300 SignThreeStageCallback fail");
          expect(null).assertNull();
        });
      done();
    });*/

    /**
     * @tc.number Security_crypto_framework_Sign_1600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_1200", 0, async function (done) {
      await testSecuritySignAddDataSignedPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", "Test1")
        .then((data) => {
          console.info("1500 SignAddDataSignedPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1500 SignAddDataSignedPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_1500
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_1300", 0, async function (done) {
      await testSecuritySignAddDataSignedPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", "")
        .then((data) => {
          console.info("1400 SignAddDataSignedPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1400 SignAddDataSignedPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0300
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_1400", 0, async function (done) {
      await testSecuritySignAppendDataPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", "Test1")
        .then((data) => {
          console.info("RSA1024 SignAppendDataPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA1024 SignAppendDataPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_1800
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_1500", 0, async function (done) {
      await testSecurityNotParameterAddDataSignedPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5")
        .then((data) => {
          console.info("1700 NotParameterAddDataSignedPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1700 NotParameterAddDataSignedPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_1900
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_1600", 0, async function (done) {
      await testSecurityMultiParameterAddDataSignedPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", "Test1", "Test2")
        .then((data) => {
          console.info("1800 MultiParameterAddDataSignedPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1800 MultiParameterAddDataSignedPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0300
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    /*it("Security_crypto_framework_Sign_1700", 0, async function (done) {
      await testSecuritySignAddLongDataSignedPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", "Test1")
        .then((data) => {
          console.info("1600 SignAddDataSignedPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1600 SignAddDataSignedPromise fail");
          expect(null).assertNull();
        });
      done();
    });*/

    /**
     * @tc.number Security_crypto_framework_Sign_2000
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_1700", 0, async function (done) {
      await testSecurityNotInitializedAddDataSignedPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", "Test1")
        .then((data) => {
          console.info("1900 NotInitializedAddDataSignedPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1900 NotInitializedAddDataSignedPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /* Security_crypto_framework_Sign_1800*/

    /* Security_crypto_framework_Sign_1900*/

    /**
     * @tc.number Security_crypto_framework_Sign_2000
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2000", 0, async function (done) {
      await testSecurityNotInitializedSignDataPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "Test1", "Test2")
        .then((data) => {
          console.info("2000 SignThreeStageCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2000 SignThreeStageCallback fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2100", 0, async function (done) {
      await testSecuritySignLongDataPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "Test1", 1)
        .then((data) => {
          console.info("2200 SignLongDataPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2200 SignLongDataPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0200
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2200", 0, async function (done) {
      await testSecuritySignThreeStagePromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|MD5", "Test1", "Test2")
        .then((data) => {
          console.info("RSA512 SignThreeStagePromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA512 SignThreeStagePromise fail");
          expect(null).assertNull();
        });

      await testSecuritySignThreeStagePromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA1", "Test1", "Test2")
        .then((data) => {
          console.info("RSA1024 SHA1 SignThreeStagePromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA1024 SHA1 SignThreeStagePromise fail");
          expect(null).assertNull();
        });

      await testSecuritySignThreeStagePromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA224", "Test1", "Test2")
        .then((data) => {
          console.info("RSA1024 SHA224 SignThreeStagePromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA1024 SHA224 SignThreeStagePromise fail");
          expect(null).assertNull();
        });

      await testSecuritySignThreeStagePromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA256", "Test1", "Test2")
        .then((data) => {
          console.info("RSA1024 SHA256 SignThreeStagePromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA1024 SHA256 SignThreeStagePromise fail");
          expect(null).assertNull();
        });

      await testSecuritySignThreeStagePromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA384", "Test1", "Test2")
        .then((data) => {
          console.info("RSA1024 SHA384 SignThreeStagePromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA1024 SHA384 SignThreeStagePromise fail");
          expect(null).assertNull();
        });

      await testSecuritySignThreeStagePromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "Test1", "Test2")
        .then((data) => {
          console.info("RSA1024 SHA512 SignThreeStagePromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("RSA1024 SHA512 SignThreeStagePromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2300", 0, async function (done) {
      await testSecuritySignLongDataPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "Test1", 0)
        .then((data) => {
          console.info("2300 SignLongDataPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2300 SignLongDataPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_1200
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2400", 0, async function (done) {
      await testSecuritySignThreeStageCallback("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "Test1", "Test2")
        .then((data) => {
          console.info("1100 SignThreeStageCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("1100 SignThreeStageCallback fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2500", 0, async function (done) {
      await testSecuritySignLongDataPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "Test1", 2)
        .then((data) => {
          console.info("2400 SignLongDataPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2400 SignLongDataPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2600", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 2, 0, 0)
        .then((data) => {
          console.info("2500 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2500 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2700", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, -1, 1, 0)
        .then((data) => {
          console.info("2600 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2600 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2800", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 0, 1, 0)
        .then((data) => {
          console.info("2700 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2700 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_2900", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 2, 1, 0)
        .then((data) => {
          console.info("2800 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2800 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3000", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 255, 2, 1, 0)
        .then((data) => {
          console.info("2900 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("2900 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3100", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 65535, 1, 0)
        .then((data) => {
          console.info("3000 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3000 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3200", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 6, 1, 3)
        .then((data) => {
          console.info("3100 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3100 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3300", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 6, 1, 1)
        .then((data) => {
          console.info("3200 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3200 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3400", 0, async function (done) {
      await testSecuritySignInitFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, "string", 1, 0)
        .then((data) => {
          console.info("3200 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3200 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3500", 0, async function (done) {
      await testSecuritySignGetFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 1, 0)
        .then((data) => {
          console.info("3500 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3500 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3600", 0, async function (done) {
      await testSecuritySignGetFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 1, 1)
        .then((data) => {
          console.info("3500 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3500 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3700", 0, async function (done) {
      await testSecuritySignGetFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 10000, 1, 1)
        .then((data) => {
          console.info("3500 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3500 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3800", 0, async function (done) {
      await testSecuritySignGetFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 10000, 0, 1)
        .then((data) => {
          console.info("3500 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3500 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_3900", 0, async function (done) {
      await testSecuritySignGetFillPromise("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 103, 1, 3)
        .then((data) => {
          console.info("3500 SignInitFillPromise ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3500 SignInitFillPromise fail");
          expect(null).assertNull();
        });
      done();
    });

    /**
     * @tc.number Security_crypto_framework_Sign_0600
     * @tc.name Support setting random number seed and restart encryption and decryption framework
     * @tc.desc the length of random is 32, use callback style of interface
     */
    it("Security_crypto_framework_Sign_4000", 0, async function (done) {
      await testSecuritySignAlgNameCallback("RSA1024|PKCS1|SHA512")
        .then((data) => {
          console.info("3500 SignAlgNameCallback ok");
          expect(data == null).assertTrue();
        })
        .catch((err) => {
          console.info("3500 SignAlgNameCallback fail");
          expect(null).assertNull();
        });
      done();
    });
  });
}
