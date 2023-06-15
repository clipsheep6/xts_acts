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
import * as asyCallback from "./utils/asymmetric/publicAsymmetricCallback";
import * as symPromise from "./utils/symmetric/publicSymmetricPromise";
import * as symCallback from "./utils/symmetric/publicSymmetricCallback";
import cryptoFramework from "@ohos.security.cryptoFramework";

export default function SecurityCipherFuncJsunit() {
    describe("SecurityCipherFuncJsunit", function () {
        console.log("##########start SecurityCipherFuncJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0100
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CTR|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0100", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CTR|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0100 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0200
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CTR|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0200", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CTR|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0200 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0300
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CTR|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0300", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CTR|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0300 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0400
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|ECB|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0400", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|ECB|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0400 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0500
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|ECB|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0500", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|ECB|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0500 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0600
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|ECB|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0600", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|ECB|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0600 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0700
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CBC|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0700", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CBC|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0700 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0800
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CBC|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0800", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CBC|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0800 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Encrypt_And_Decrypt_Test_0900
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CBC|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0900", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CBC|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0900 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1000
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|OFB|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1000", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|OFB|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1000 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1100
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|OFB|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1100", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|OFB|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1100 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1200
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|OFB|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1200", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|OFB|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1200 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1300
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CFB|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1300", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CFB|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1300 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1400
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CFB|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1400", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CFB|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1400 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1500
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CFB|PKCS5", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1500", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CFB|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1500 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1600
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CFB128|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1600", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CFB128|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1600 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1700
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CFB128|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1700", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CFB128|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1700 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1800
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_128|CFB128|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1800", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_128", "SM4_128|CFB128|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1800 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1900
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_192|CBC|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1900", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_192", "SM4_192|CBC|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1900 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2000
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_192|ECB|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2000", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_192", "SM4_192|ECB|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2000 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2100
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_192|CTR|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2100", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_192", "SM4_192|CTR|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2100 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2200
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_192|OFB|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2200", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_192", "SM4_192|OFB|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2200 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2300
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_192|CFB|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2300", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_192", "SM4_192|CFB|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2300 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2400
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_192|CFB128|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2400", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_192", "SM4_192|CFB128|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2400 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2500
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_256|CBC|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2500", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_256", "SM4_256|CBC|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2500 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2600
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_256|ECB|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2600", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_256", "SM4_256|ECB|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2600 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2700
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_256|CTR|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2700", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_256", "SM4_256|CTR|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2700 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2800
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_256|OFB|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2800", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_256", "SM4_256|OFB|NoPadding")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2800 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2900
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_256|CFB|PKCS5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2900", 0, async function (done) {
            await symCallback.encryptAndDecryptNormalProcess("SM4_256", "SM4_256|CFB|PKCS5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2900 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3000
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4_256|CFB128|PKCS7", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3000", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("SM4_256", "SM4_256|CFB128|PKCS7")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3000 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3100
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM4|ECB|PKCS7", Use the Promise Style of Interface
         */
//        it("Security_CryptoFramework_Cipher_Func_3100", 0, async function (done) {
//            await symPromise.encryptAndDecryptNormalProcess("SM4", "SM4|ECB|PKCS7")
//                .then((result) => {
//                    expect(result).assertTrue();
//                })
//                .catch((err) => {
//                    console.error("Security_CryptoFramework_Cipher_Func_3100 catch error: " + err);
//                    expect(null).assertFail();
//                });
//            done();
//        });


        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3200
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|NoHash", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3200", 0, async function (done) {
            await asyPromise.encryptAndDecryptNormalProcess("SM2256", "SM2256|NoHash")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3200 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3300
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|MD5", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3300", 0, async function (done) {
            await asyCallback.encryptAndDecryptNormalProcess("SM2256", "SM2256|MD5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3300 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3400
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|SM3", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3400", 0, async function (done) {
            await asyPromise.encryptAndDecryptNormalProcess("SM2256", "SM2256|SM3")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3400 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3500
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|SHA1", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3500", 0, async function (done) {
            await asyCallback.encryptAndDecryptNormalProcess("SM2256", "SM2256|SHA1")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3500 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3600
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|SHA224", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3600", 0, async function (done) {
            await asyPromise.encryptAndDecryptNormalProcess("SM2256", "SM2256|SHA224")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3600 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3700
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|SHA256", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3700", 0, async function (done) {
            await asyCallback.encryptAndDecryptNormalProcess("SM2256", "SM2256|SHA256")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3700 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3800
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|SHA384", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3800", 0, async function (done) {
            await asyPromise.encryptAndDecryptNormalProcess("SM2256", "SM2256|SHA384")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3800 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_3900
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "SM2256|SHA512", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_3900", 0, async function (done) {
            await asyCallback.encryptAndDecryptNormalProcess("SM2256", "SM2256|SHA512")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_3900 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_4000
         * @tc.name create cipher failed
         * @tc.desc Pass in an exception parameter null and call it as a async
         * @tc.desc Pass in an exception parameter "SM2257|SHA256" and call it as a async
         */
        it("Security_CryptoFramework_Cipher_Func_4000", 0, async function (done) {
            try {
                cryptoFramework.createCipher(null);
                expect(null).assertFail();
            } catch (err) {
                console.error("createCipherFail catch error: " + err);
                expect(err.code == 401).assertTrue();
            }
            try {
                await cryptoFramework.createCipher("SM2257|SHA256");
                expect(null).assertFail();
            } catch (err) {
                console.error("createCipherFail catch error: " + err);
                expect(err.code == 801).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_4100
         * @tc.name init cipher failed
         * @tc.desc Pass in three exception parameters 3 and symKeyPair and null, and call them as async
         * @tc.desc Pass in three exception parameters null and symKeyPair and null, and call them as async
         * @tc.desc Pass in three exception parameters encryptMode and null and null, and call them as async
         * @tc.desc Pass in four exception parameters 3 and symKeyPair and null and symKeyPair, and call them as async
         */
        it("Security_CryptoFramework_Cipher_Func_4100", 0, async function (done) {
            var asyGenerator = cryptoFramework.createSymKeyGenerator("SM4_128");
            var cipherGeneratorEncrypt = cryptoFramework.createCipher("SM4_128|CTR|NoPadding");
            var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
            let symKeyPair;
            asyGenerator.generateSymKey().then((symKey) => {
                symKeyPair = symKey;
            }).catch ((err) => {
                console.log("Security_CryptoFramework_Cipher_Func_4100 0 catch err" + err);
            })

            try {
                cipherGeneratorEncrypt.init(3, symKeyPair, null);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_4100 1 catch err" + err);
                expect(err.code == 401).assertTrue();

            }

            try {
                cipherGeneratorEncrypt.init(null, symKeyPair, null);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_4100 2 catch err" + err);
                expect(err.code == 401).assertTrue();

            }

            try {
                cipherGeneratorEncrypt.init(encryptMode, null, null);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_4100 3 catch err" + err);
                expect(err.code == 401).assertTrue();

            }

            try {
                cipherGeneratorEncrypt.init(3, symKeyPair, null, symKeyPair);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_4100 4 catch err" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_4200
         * @tc.name update cipher failed
         * @tc.desc Call it as a promise without passing in parameters
         * @tc.desc Pass in an exception parameter null and call it as a promise
         * @tc.desc Pass in two exception parameters "This is a sign test" and "This is a sign test"
         * and call them as promise
         * @tc.desc The encrypt object was not initialized, and the data to be signed "This is a sign test"
         * was passed in as a promise to be called
         */
        it("Security_CryptoFramework_Cipher_Func_4200", 0, async function (done) {
            await symCallback.encryptUpdateCipherFailed("SM4_128", "SM4_128|CTR|NoPadding", 0)
                .then((data) => {
                    console.log("data 1: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_4200 catch 1 error: " + err);
                    expect(err.code == 401).assertTrue();
                });

            await symCallback.encryptUpdateCipherFailed("SM4_128", "SM4_128|CTR|NoPadding", 1)
                .then((data) => {
                    console.log("data 2: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_4200 catch 2 error: " + err);
                    expect(err.code == 401).assertTrue();
                });

            await symCallback.encryptUpdateCipherFailed("SM4_128", "SM4_128|CTR|NoPadding", 2)
                .then((data) => {
                    console.log("data 3: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_4200 catch 3 error: " + err);
                    expect(err.code == 401).assertTrue();
                });

            await symCallback.encryptUpdateCipherFailed("SM4_128", "SM4_128|CTR|NoPadding", 3)
                .then((data) => {
                    console.log("data 4: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_4200 catch 4 error: " + err);
                    expect(err.code == 401).assertTrue();
                });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_4300
         * @tc.name doFinal cipher failed
         * @tc.desc Call it as a callback without passing in parameters
         * @tc.desc Pass in an exception parameter null and call it as a callback
         * @tc.desc The encrypt object was not initialized, and the data to be signed 'This is a sign test'
         * was passed in as a callback to be called
         */
        it("Security_CryptoFramework_Cipher_Func_4300", 0, async function (done) {
            await symPromise.doFinalCipherFailed("SM4_128", "SM4_128|CTR|NoPadding", 0).then((data) => {
                console.log("data 2: " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("Security_CryptoFramework_Cipher_Func_4300 catch 1 error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await symPromise.doFinalCipherFailed("SM4_128", "SM4_128|CTR|NoPadding", 1).then((data) => {
                console.log("data 3: " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("Security_CryptoFramework_Cipher_Func_4300 catch 2 error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await symPromise.doFinalCipherFailed("SM4_128", "SM4_128|CTR|NoPadding", 2).then((data) => {
                console.log("data 1: " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("Security_CryptoFramework_Cipher_Func_4300 catch 0 error: " + err);
                expect(err.code == 401).assertTrue();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_4400
         * @tc.name Encryption and decryption algorithm for obtaining signatures
         * @tc.desc Pass in algorithm name "SM2256|SM3" and call it using the async method
         */
        it("Security_CryptoFramework_Cipher_Func_4400", 0, async function (done) {
            try {
                let cipherGenerator = cryptoFramework.createCipher("SM2256|SM3");
                expect(cipherGenerator.algName == "SM2256|SM3").assertTrue();
            } catch (err) {
                console.log("Security_CryptoFramework_Cipher_Func_4400 catch err: " + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });
    });
}


