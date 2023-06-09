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
import * as asyCallback from "./utils/asymmetric/publicAsymmetricCallback";
import * as asyPromise from "./utils/asymmetric/publicAsymmetricPromise";
import * as common from "./utils/common/publicDoSpec";
import * as symPromise from "./utils/symmetric/publicSymmetricPromise";
import cryptoFramework from "@ohos.security.cryptoFramework";

function genRsa2048KeyPairSpec() {
    return common.genRsa2048KeyPairSpec();
}

export default function SecurityCipherJsunit() {
    describe("SecurityCipherJsunit", function () {
        console.log("##########start SecurityCipherJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0100
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1|SHA1", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0100", 0, async function (done) {
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0100 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0200
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1|SHA224", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0200", 0, async function (done) {
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA224")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0200 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0300
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1|SHA256", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0300", 0, async function (done) {
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA256")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0300 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0400
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1|SHA384", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0400", 0, async function (done) {
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA384")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0400 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0500
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1|SHA512", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0500", 0, async function (done) {
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|SHA512")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0500 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0600
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1|MD5", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0600", 0, async function (done) {
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0600 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0700
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA1|MGF1_SHA1", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0700", 0, async function (done) {
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA1")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0700 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_0800
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA1|MGF1_SHA224", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0800", 0, async function (done) {
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA224")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0800 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Encrypt_And_Decrypt_Test_0900
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA1|MGF1_SHA256", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_0900", 0, async function (done) {
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA256")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_0900 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1000
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA1|MGF1_SHA384", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1000", 0, async function (done) {
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA384")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1000 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1100
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA1|MGF1_SHA512", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1100", 0, async function (done) {
            await asyCallback.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_SHA512")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1100 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1200
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA1|MGF1_MD5", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1200", 0, async function (done) {
            await asyPromise.encryptAndDecryptBySpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_MD5")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1200 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1300
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "RSA|PKCS1|SHA256", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1300", 0, async function (done) {
            await asyCallback.encryptAndDecryptNormalProcess("RSA1024|PRIMES_2", "RSA|PKCS1|SHA256")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1300 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1400
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "AES|ECB|PKCS7", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1400", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("AES256", "AES|ECB|PKCS7", "null")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1400 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1500
         * @tc.name Encryption and decryption scenario testing
         * @tc.desc the asyAlgoName is "3DES|ECB|PKCS5", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_1500", 0, async function (done) {
            await symPromise.encryptAndDecryptNormalProcess("3DES192", "3DES|ECB|PKCS5", "null")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1500 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1600
         * @tc.name create cipher failed
         * @tc.desc Pass in an exception parameter null and call it as a async
         * @tc.desc Pass in an exception parameter "ECC128|GCM|PKCS7" and call it as a async
         */
        it("Security_CryptoFramework_Cipher_Func_1600", 0, async function (done) {
            try {
                cryptoFramework.createCipher(null);
                expect(null).assertFail();
            } catch (err) {
                console.error("createCipherFail catch  error: " + err.code);
                expect(err.code == 401).assertTrue();
            }
            try {
                cryptoFramework.createCipher("ECC128|GCM|PKCS7");
                expect(null).assertFail();
            } catch (err) {
                console.error("createCipherFail catch  error: " + err.code);
                expect(err.code == 801).assertTrue();
            }
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1700
         * @tc.name init cipher failed
         * @tc.desc Pass in three exception parameters 3 and keyPair and null, and call them as async
         * @tc.desc Pass in three exception parameters null and keyPair and null, and call them as async
         * @tc.desc Pass in three exception parameters encryptMode and null and null, and call them as async
         * @tc.desc Pass in four exception parameters 3 and keyPair and null and keyPair, and call them as async
         */
        it("Security_CryptoFramework_Cipher_Func_1700", 0, async function (done) {
            var asyGenerator = cryptoFramework.createAsyKeyGenerator("RSA1024");
            var cipherGeneratorEncrypt = cryptoFramework.createCipher("RSA1024|PKCS1");
            var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
            let keyPair;
            asyGenerator.generateKeyPair().then((asyKeyPair) => {
                    keyPair = asyKeyPair;
            }).catch ((err) => {
                console.log("Security_CryptoFramework_Cipher_Func_1700 0 catch err" + err);
            })

            try {
                cipherGeneratorEncrypt.init(3, keyPair, null);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_1700 1 catch err" + err);
                expect(err.code == 401).assertTrue();

            }

            try {
                cipherGeneratorEncrypt.init(null, keyPair, null);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_1700 2 catch err" + err);
                expect(err.code == 401).assertTrue();

            }

            try {
                cipherGeneratorEncrypt.init(encryptMode, null, null);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_1700 3 catch err" + err);
                expect(err.code == 401).assertTrue();

            }

            try {
                cipherGeneratorEncrypt.init(3, keyPair, null, keyPair);
                expect(null).assertFail();
            } catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_1700 5 catch err" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1800
         * @tc.name update cipher failed
         * @tc.desc Call it as a promise without passing in parameters
         * @tc.desc Pass in an exception parameter null and call it as a promise
         * @tc.desc Pass in two exception parameters "This is a sign test" and "This is a sign test"
         * and call them as promise
         * @tc.desc The encrypt object was not initialized, and the data to be signed "This is a sign test"
         * was passed in as a promise to be called
         */
        it("Security_CryptoFramework_Cipher_Func_1800", 0, async function (done) {
            await asyCallback.encryptUpdateCipherFailed("3DES192", "3DES|ECB|PKCS5", 0)
                .then((data) => {
                    console.log("data 1: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1800 catch 1 error: " + err);
                    expect(err.code == 401).assertTrue();
                });

            await asyCallback.encryptUpdateCipherFailed("3DES192", "3DES|ECB|PKCS5", 1)
                .then((data) => {
                    console.log("data 2: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1800 catch 2 error: " + err);
                    expect(err.code == 401).assertTrue();
                });

            await asyCallback.encryptUpdateCipherFailed("3DES192", "3DES|ECB|PKCS5", 2)
                .then((data) => {
                    console.log("data 3: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1800 catch 3 error: " + err);
                    expect(err.code == 401).assertTrue();
                });

            await asyCallback.encryptUpdateCipherFailed("3DES192", "3DES|ECB|PKCS5", 3)
                .then((data) => {
                    console.log("data 4: " + data);
                    expect(null).assertFail();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_1800 catch 4 error: " + err);
                    expect(err.code == 401).assertTrue();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_1900
         * @tc.name doFinal cipher failed
         * @tc.desc Call it as a callback without passing in parameters
         * @tc.desc Pass in an exception parameter null and call it as a callback
         * @tc.desc The encrypt object was not initialized, and the data to be signed 'This is a sign test'
         * was passed in as a callback to be called
         */
        it("Security_CryptoFramework_Cipher_Func_1900", 0, async function (done) {
        await asyPromise.doFinalCipherFailed(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5", 2).then((data) => {
            console.log("data 1: " + data);
            expect(null).assertFail();
        }).catch((err) => {
            console.error("Security_CryptoFramework_Cipher_Func_1900 catch 0 error: " + err);
            expect(err.code == 401).assertTrue();
        });

        await asyPromise.doFinalCipherFailed(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5", 0).then((data) => {
            console.log("data 2: " + data);
            expect(null).assertFail();
        }).catch((err) => {
            console.error("Security_CryptoFramework_Cipher_Func_1900 catch 1 error: " + err);
            expect(err.code == 401).assertTrue();
        });

        await asyPromise.doFinalCipherFailed(genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5", 1).then((data) => {
            console.log("data 3: " + data);
            expect(null).assertFail();
        }).catch((err) => {
            console.error("Security_CryptoFramework_Cipher_Func_1900 catch 2 error: " + err);
            expect(err.code == 401).assertTrue();
        });
            done();
        });
    });
}