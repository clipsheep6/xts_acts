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
import * as asyCallback from "./utils/asymmetric/publicAsymmetricCallback";
import * as asyCommen from "./utils/asymmetric/publicAsymmetricCommon";
import * as asyPromise from "./utils/asymmetric/publicAsymmetricPromise";
import * as commen from "./utils/common/publicDoSpec";
import * as symCallback from "./utils/symmetric/publicSymmetricCallback";
import * as symPromise from "./utils/symmetric/publicSymmetricPromise";

function genRsa2048KeyPairSpec() {
    let nIn = BigInt("0x9260d0750ae117eee55c3f3deaba74917521a262ee76007cdf8a56755ad73a1598a1408410a01434c3f5bc54a88b57f" +
    "a19fc4328daea0750a4c44e88cff3b2382621b80f670464433e4336e6d003e8cd65bff211da144b88291c2259a00a72b711c116ef7686e8fee" +
    "34e4d933c868187bdc26f7be071493c86f7a5941c3510806ad67b0f94d88f5cf5c02a092821d8626e8932b65c5bd8c92049c210932b7afa7ac" +
    "59c0e886ae5c1edb00d8ce2c57633db26bd6639bff73cee82be9275c402b4cf2a4388da8cf8c64eefe1c5a0f5ab8057c39fa5c0589c3e253f0" +
    "960332300f94bea44877b588e1edbde97cf2360727a09b775262d7ee552b3319b9266f05a25");
    let eIn = BigInt("0x010001");
    let dIn = BigInt("0x6a7df2ca63ead4dda191d614b6b385e0d9056a3d6d5cfe07db1daabee022db08212d97613d3328e0267c9dd23d787" +
    "abde2afcb306aeb7dfce69246cc73f5c87fdf06030179a2114b767db1f083ff841c025d7dc00cd82435b9a90f695369e94df23d2ce458bc3" +
    "b3283ad8bba2b8fa1ba62e2dce9accff3799aae7c840016f3ba8e0048c0b6cc4339af7161003a5beb864a0164b2c1c9237b64bc875569943" +
    "51b27506c33d4bcdfce0f9c491a7d6b0628c7c852be4f0a9c3132b2ed3a2c8881e9aab07e20e17deb074691be677776a78b5c502e05d9bdd" +
    "e72126b3738695e2dd1a0a98a14247c65d8a7ee79432a092cb0721a12df798e44f7cfce0c498147a9b1");
    return commen.genRsaKeyPairSpec(nIn, eIn, dIn);
}

function genRsa2048CommonSpec() {
    let nIn = BigInt("0x9260d0750ae117eee55c3f3deaba74917521a262ee76007cdf8a56755ad73a1598a1408410a01434c3f5bc54a88b5" +
    "7fa19fc4328daea0750a4c44e88cff3b2382621b80f670464433e4336e6d003e8cd65bff211da144b88291c2259a00a72b711c116ef7686e" +
    "8fee34e4d933c868187bdc26f7be071493c86f7a5941c3510806ad67b0f94d88f5cf5c02a092821d8626e8932b65c5bd8c92049c210932b7" +
    "afa7ac59c0e886ae5c1edb00d8ce2c57633db26bd6639bff73cee82be9275c402b4cf2a4388da8cf8c64eefe1c5a0f5ab8057c39fa5c0589" +
    "c3e253f0960332300f94bea44877b588e1edbde97cf2360727a09b775262d7ee552b3319b9266f05a25");
    return commen.genRsaCommonSpec(nIn);
}

function genRsa2048PubKetSpec() {
    let nIn = BigInt("0x9260d0750ae117eee55c3f3deaba74917521a262ee76007cdf8a56755ad73a1598a1408410a01434c3f5bc54a88b5" +
    "7fa19fc4328daea0750a4c44e88cff3b2382621b80f670464433e4336e6d003e8cd65bff211da144b88291c2259a00a72b711c116ef7686e" +
    "8fee34e4d933c868187bdc26f7be071493c86f7a5941c3510806ad67b0f94d88f5cf5c02a092821d8626e8932b65c5bd8c92049c210932b7" +
    "afa7ac59c0e886ae5c1edb00d8ce2c57633db26bd6639bff73cee82be9275c402b4cf2a4388da8cf8c64eefe1c5a0f5ab8057c39fa5c0589" +
    "c3e253f0960332300f94bea44877b588e1edbde97cf2360727a09b775262d7ee552b3319b9266f05a25");
    let eIn = BigInt("0x010001");
    return commen.genRSAPubKeySpec(nIn, eIn);
}

function genRsa2048PriKeySpec() {
    let nIn = BigInt("0x9260d0750ae117eee55c3f3deaba74917521a262ee76007cdf8a56755ad73a1598a1408410a01434c3f5bc" +
    "54a88b57fa19fc4328daea0750a4c44e88cff3b2382621b80f670464433e4336e6d003e8cd65bff211da144b88291c2259a00a72b" +
    "711c116ef7686e8fee34e4d933c868187bdc26f7be071493c86f7a5941c3510806ad67b0f94d88f5cf5c02a092821d8626e8932b6" +
    "5c5bd8c92049c210932b7afa7ac59c0e886ae5c1edb00d8ce2c57633db26bd6639bff73cee82be9275c402b4cf2a4388da8cf8c64" +
    "eefe1c5a0f5ab8057c39fa5c0589c3e253f0960332300f94bea44877b588e1edbde97cf2360727a09b775262d7ee552b3319b9266f05a25");
    let dIn = BigInt("0x6a7df2ca63ead4dda191d614b6b385e0d9056a3d6d5cfe07db1daabee022db08212d97613d3328e0267c9dd" +
    "23d787abde2afcb306aeb7dfce69246cc73f5c87fdf06030179a2114b767db1f083ff841c025d7dc00cd82435b9a90f695369e94df" +
    "23d2ce458bc3b3283ad8bba2b8fa1ba62e2dce9accff3799aae7c840016f3ba8e0048c0b6cc4339af7161003a5beb864a0164b2c1c" +
    "9237b64bc87556994351b27506c33d4bcdfce0f9c491a7d6b0628c7c852be4f0a9c3132b2ed3a2c8881e9aab07e20e17deb074691b" +
    "e677776a78b5c502e05d9bdde72126b3738695e2dd1a0a98a14247c65d8a7ee79432a092cb0721a12df798e44f7cfce0c498147a9b1");
    return commen.genRSAPriKeySpec(nIn, dIn);
}

export default function SecurityCipherJsunit() {
    describe("SecurityCipherJsunit", function () {
        console.info("##########start SecurityCipherJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0100
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0100", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0100 stare");
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA1")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0100 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0100 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0200
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0200", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0200 stare");
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA224")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0200 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0200 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0300
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0300", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0300 stare");
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA256")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0300 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0300 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0400
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0400", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0400 stare");
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA384")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0400 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0400 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0500
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0500", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0500 stare");
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA512")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0500 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0500 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0600
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0600", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0600 stare");
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0600 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0600 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0700
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is DSA1024, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0700", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0700 stare");
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA1")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0700 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0700 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0800
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0800", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0800 stare");
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA224")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0800 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0800 end");
            done();
        }
        );

        /**
         * @tc.number Encrypt_And_Decrypt_Test_0900
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0900", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_0900 stare");
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA256")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0900 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_0900 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1000
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1000", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_1000 stare");
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA384")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1000 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_1000 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1100
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1100", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_1100 stare");
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA512")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1100 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_1100 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1200
         * @tc.name Test encryptAndDecryptBySpecProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1200", 0, async function (done) {
            console.info("Encrypt_And_Decrypt_Test_1200 stare");
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_MD5")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1200 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_1200 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1300
         * @tc.name Test encryptAndDecryptNormalProcess
         * @tc.desc the asyAlgoName is "RSA1024|PRIMES_2", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1300", 0, async function (done) {
            console.info("Encrypt_And_Decrypt_Test_1300 stare");
            await asyCallback.encryptAndDecryptNormalProcess("RSA1024|PRIMES_2", "RSA|PKCS1|SHA256")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1300 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_1300 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1400
         * @tc.name Test encryptAndDecryptNormalProcess
         * @tc.desc the asyAlgoName is "AES128", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1400", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_1400 stare");
            await symPromise.encryptAndDecryptNormalProcess("AES256", "AES|ECB|PKCS7", "null")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1400 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_1400 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1500
         * @tc.name Test encryptAndDecryptNormalProcess
         * @tc.desc the asyAlgoName is "3DES192", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1500", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_1500 stare");
            await symPromise.encryptAndDecryptNormalProcess("3DES192", "3DES|ECB|PKCS5", "null")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1500 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Func_1500 end");
            done();
        }
        );

        /**
         * @tc.number Encrypt_And_Decrypt_Test_1600
         * @tc.name Test encryptAndDecryptTimesProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Encrypt_And_Decrypt_Test_1600", 0, async function (done) {
            console.info("Encrypt_And_Decrypt_Test_1600 stare");
            await asyPromise.encryptAndDecryptTimesProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_MD5")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Encrypt_And_Decrypt_Test_1600 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Encrypt_And_Decrypt_Test_1600 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1700
         * @tc.name Test createCipherFail
         * @tc.desc the asyAlgoName is "ECC128|GCM|PKCS7", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1700", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_1800 stare");
            try {
                await asyCallback.createCipherFail("ECC128|GCM|PKCS7");
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            console.info("Security_CryptoFramework_Cipher_Func_1700 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1800
         * @tc.name Test initCipherFail
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1800", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_1800 stare");
            try {
                await asyPromise.initCipherFail("RSA1024", "RSA1024|PKCS1", 3, null, true)
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            try {
                await asyPromise.initCipherFail("RSA1024", "RSA1024|PKCS1", 0, null, false)
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            try {
                await asyPromise.initCipherFail("ECC256", "RSA1024|PKCS1", 0, null, true)
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            try {
                await asyPromise.initCipherFail("RSA1024", "RSA1024|PKCS1", 3, null, true)
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            try {
                await asyPromise.initCipherMultipleParameters("RSA1024", "RSA1024|PKCS1", 0, null, true)
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            try {
                await asyPromise.initCipherFewParameters("RSA1024", "RSA1024|PKCS1", 0, null, true)
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            console.info("Security_CryptoFramework_Cipher_Func_1800 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1900
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1900", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_1900 stare");
            try {
                await asyCallback.encryptUpdateCipherFailed(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5")
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            console.info("Security_CryptoFramework_Cipher_Func_1900 end");
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2000
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2000", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Func_2000 stare");
            try {
                await asyPromise.doFinalCipherFailed(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5", false);
            } catch (err) {
                console.error("Security_CryptoFramework_Cipher_Func_2000 catch  error: " + err);
                expect(err.code == 401).assertTrue();
            }
            try {
                await asyPromise.doFinalCipherFewParameters(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5");
            } catch (err) {
                console.error("Security_CryptoFramework_Cipher_Func_2000 catch  error: " + err);
                expect(err.code == 401).assertTrue();
            }
            try {
                await asyPromise.doFinalCipherMultipleParameters(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5");
            } catch (err) {
                console.error("Security_CryptoFramework_Cipher_Func_2000 catch  error: " + err);
                expect(err.code == 401).assertTrue();
            }
            console.info("Security_CryptoFramework_Cipher_Func_2000 end");
            done();
        }
        );
    });
}