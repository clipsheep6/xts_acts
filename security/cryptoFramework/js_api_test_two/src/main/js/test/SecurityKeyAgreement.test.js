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

export default function SecurityKeyAgreementJsunit() {
  describe("SecurityKeyAgreementJsunit", function () {
    console.info("##########start SecurityKeyAgreementJsunit##########");
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
      "Security_crypto_framework_KeyAgreement_0100",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementProcess("ECC256")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementProcess catch  error: " +
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
      "Security_crypto_framework_KeyAgreement_0200",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementProcess("ECC224")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementProcess catch  error: " +
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
      "Security_crypto_framework_KeyAgreement_0300",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementProcess("ECC384")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementProcess catch  error: " +
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
      "Security_crypto_framework_KeyAgreement_0400",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementProcess("ECC521")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementProcess catch  error: " +
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
      "Security_crypto_framework_KeyAgreement_0500",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementProcess("ECC")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementProcess catch  error: " +
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
      "Security_crypto_framework_KeyAgreement_0600",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementProcess("ECC1024")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementProcess catch  error: " +
              err
            );
            expect(err.code == undefined).assertTrue();
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
      "Security_crypto_framework_KeyAgreement_0700",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementGetAlgNmaeProcess("ECC521")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementProcess catch  error: " +
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
      "Security_crypto_framework_KeyAgreement_0800",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementBySpecProcess(asyCommon.genEccCommonSpec(), "ECC521")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementBySpecProcess catch  error: " +
              err
            );
            expect(err.code == undefined).assertTrue();
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
      "Security_crypto_framework_KeyAgreement_0900",
      0,
      async function (done) {
        await asyPromise
          .keyAgreementBySpecProcess(asyCommon.genRsa2048KeyPairSpec(), "ECC521")
          .then((data) => {
            expect(data == null).assertTrue();
          })
          .catch((err) => {
            console.error(
              "3600 keyAgreementBySpecProcess 1 catch  error: " +
              err
            );
            expect(err.code == 401).assertTrue();
          });
        done();
      }
    );
  });
}
