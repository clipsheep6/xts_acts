// @ts-nocheck
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
import * as asyPromise from "./utils/asymmetric/publicAsymmetricPromise";
import * as asyCommon from "./utils/common/publicDoSpec";
import * as asyCallback from "./utils/asymmetric/publicAsymmetricCallback";
import cryptoFramework from "@ohos.security.cryptoFramework";

export default function SecuritySignatureVerificationJsunit() {
    describe("SecuritySignatureVerificationJsunit", function () {
        console.info("##########start SecuritySignatureVerificationJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0100
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the RSAKeyPar structure with a signature verification type of "RSA512|PKCS1|MD5"
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0100",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA512|PKCS1|MD5")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0200
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a promise style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA768|PSS|SHA1|MGF1_SHA1", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0200",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA768|PSS|SHA1|MGF1_SHA1", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0300
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a callback style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA1024|PSS|SHA224|MGF1_SHA224", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0300",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PSS|SHA224|MGF1_SHA224", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0400
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a promise style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA2048|PSS|SHA256|MGF1_SHA256", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0400",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA2048|PSS|SHA256|MGF1_SHA256", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0500
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a callback style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA3072|PSS|SHA384|MGF1_SHA384", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0500",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA3072|PSS|SHA384|MGF1_SHA384", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0600
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a promise style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA4096|PSS|SHA512|MGF1_SHA512", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0600",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA4096|PSS|SHA512|MGF1_SHA512", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0700
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a callback style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA8192|PSS|SHA512|MGF1_SHA512", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0700",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA8192|PSS|SHA512|MGF1_SHA512", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0800
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the RSAKeyPar structure with a signature verification type of "RSA|PKCS1|MD5"
         * and use a promise style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0800",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA|PKCS1|MD5")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0900
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a callback style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA|PSS|SHA256|MGF1_SHA256", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_0900",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA|PSS|SHA256|MGF1_SHA256", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1000
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a promise style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA|PSS|SHA384|MGF1_SHA384", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1000",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA|PSS|SHA384|MGF1_SHA384", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1100
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a callback style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA|PSS|SHA512|MGF1_SHA512", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1100",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA|PSS|SHA512|MGF1_SHA512", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "asyCallback signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1200
         * @tc.name Signature verification and parameter filling combination scenario testing
         * @tc.desc Use a promise style interface to pass in the RSAKeyPar structure with signature verification type
         * "RSA|PSS|SHA224|MGF1_SHA224", parameter setting mode cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM
         * and parameter 32
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1200",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifySetAndGetSpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA|PSS|SHA224|MGF1_SHA224", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 32)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifySetAndGetSpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );


        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1300
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the ECCKeyPar structure with a signature verification type of "ECC256|SHA256"
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1300",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
                        "ECC256|SHA256")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1400
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the ECCKeyPar structure with a signature verification type of "ECC|SHA224"
         * and use a promise style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1400",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
                        "ECC|SHA224")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1500
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the ECCKeyPar structure with a signature verification type of "ECC224|SHA256"
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1500",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
                        "ECC224|SHA256")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1600
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the ECCKeyPar structure with a signature verification type of "ECC384|SHA224"
         * and use a promise style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1600",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
                        "ECC384|SHA224")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1700
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the ECCKeyPar structure with a signature verification type of "ECC521|SHA256"
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1700",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecProcess(asyCommon.genEccCommonSpec(),
                        "ECC521|SHA256")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1800
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the DSAKeyPar structure with a signature verification type of "DSA|SHA1"
         * and use a promise style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1800",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
                        "DSA|SHA1")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1900
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the DSAKeyPar structure with a signature verification type of "DSA|SHA224"
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_1900",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
                        "DSA|SHA224")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2000
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the DSAKeyPar structure with a signature verification type of "DSA1024|SHA224"
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2000",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
                        "DSA1024|SHA224")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2100
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the DSAKeyPar structure with a signature verification type of "DSA2048|SHA256"
         * and use a promise style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2100",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
                        "DSA2048|SHA256")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2200
         * @tc.name Signature verification combination scenario testing
         * @tc.desc Pass in the DSAKeyPar structure with a signature verification type of "DSA3072|SHA384"
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2200",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecProcess(asyCommon.genDsa2048CommonSpecBigE(),
                        "DSA3072|SHA384")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2300
         * @tc.name Scenario testing of signature verification and key generation and conversion combination
         * @tc.desc Pass in key generation parameter "DSA1024|PRIMES_2", signature verification parameter "DSA1024|SHA1",
         * and use a promise style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2300",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyNormalProcess("DSA1024|PRIMES_2", "DSA1024|SHA1")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AyPromise signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2400
         * @tc.name Scenario testing of signature verification and key generation and conversion combination
         * @tc.desc Pass in key generation parameter "DSA2048|PRIMES_2", signature verification parameter "DSA2048|SHA256",
         * and use a callback style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2400",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyNormalProcess("DSA2048|PRIMES_2", "DSA2048|SHA256")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecProcess catch error: " +
                            err
                        );
                        expect(null).assertFail();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2500
         * @tc.name Scenario testing of signature verification and key generation and conversion combination
         * @tc.desc Pass in key generation parameter "DSA3072|PRIMES_2", signature verification parameter "DSA3072|SHA384",
         * and use a promise style interface
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2500",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyNormalProcess("DSA3072|PRIMES_2", "DSA3072|SHA384")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyNormalProcess catch error: " +
                            err.code
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2600
         * @tc.name Exception in creating signature object
         * @tc.desc Pass in an exception parameter and call it in the form of a promise
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2600",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA10000|SHA224")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        null)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024PKCS1MD5RSA1024PKCS1MD5RSA1024PKCS1MD5")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyBySpecProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2700
         * @tc.name Exception in initializing signature object
         * @tc.desc Pass in an exception parameter and call it in the form of a callback
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2700",
            0,
            async function (done) {
                await asyCallback
                    .signAndVerifyBySpecAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecAbnormalParameterProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .signAndVerifyBySpecAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecAbnormalParameterProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .signAndVerifyBySpecAbnormalParameterProcess(asyCommon.genDsa2048CommonSpecBigE(),
                        "RSA1024|PKCS1|SHA224", 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecAbnormalParameterProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .signAndVerifyBySpecAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 3)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAndVerifyBySpecAbnormalParameterProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );


        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2800
         * @tc.name Abnormal situation of adding signature data
         * @tc.desc Pass in an exception parameter and call it in the form of a promise
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2800",
            0,
            async function (done) {
                await asyPromise
                    .updateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise updateAbnormalParameterProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .updateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise updateAbnormalParameterProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .updateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise updateAbnormalParameterProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .updateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 3)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise updateAbnormalParameterProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .updateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 4)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise updateAbnormalParameterProcess 5 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );


        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_2900
         * @tc.name Signature data anomaly
         * @tc.desc Pass in an exception parameter and call it in the form of a callback
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_2900",
            0,
            async function (done) {
                await asyCallback
                    .signAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAbnormalParameterProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .signAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "3AsyCallback signAbnormalParameterProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .signAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAbnormalParameterProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .signAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 3)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback signAbnormalParameterProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
         * @tc.name Exception in signature setting parameter mode
         * @tc.desc Pass in an exception parameter and call it in the form of a promise
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3000",
            0,
            async function (done) {
                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 32, 0, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 0, 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", -1, 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 2, 1, 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 65535, 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 5 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 6, 1, 3)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 6 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "string", 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 7 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 32, 1, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 8 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyPromise
                    .signAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 32, 1, 5)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAbnormalSetFillProcess 9 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_ASymmetric_Encryption_RSA_3100
         * @tc.name Exception in signature getting parameter mode
         * @tc.desc Pass in an exception parameter and call it in the form of a callback
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3100",
            0,
            async function (done) {
                await asyCallback
                    .SignAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", 10000, 1, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback SignAbnormalGetFillProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .SignAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 0, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback SignAbnormalGetFillProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .SignAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 1, 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback SignAbnormalGetFillProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .SignAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", cryptoFramework.SignSpecItem.PSS_TRAILER_FIELD_NUM, 1, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback SignAbnormalGetFillProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_3200
         * @tc.name Abnormal situation of creating verification objects
         * @tc.desc Pass in an exception parameter and call it in the form of a promise
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3200",
            0,
            async function (done) {
                await asyPromise
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA10000|SHA224", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalParameterProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        null, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalParameterProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024PKCS1MD5RSA1024PKCS1MD5RSA1024PKCS1MD5", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalParameterProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.info("AsyPromise verifyAbnormalParameterProcess 4 catch err" + err);
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "DSA512|PKCS1|MD5", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.info("AsyPromise verifyAbnormalParameterProcess 5 catch err" + err);
                        expect(err.code == undefined).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_3300
         * @tc.name Abnormal situation of initialization verification object
         * @tc.desc Pass in an exception parameter and call it in the form of a callback
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3300",
            0,
            async function (done) {
                await asyCallback
                    .VerifyInitParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback VerifyInitParameterProcess 1 catch error: " +
                            err.code
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .VerifyInitParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback VerifyInitParameterProcess 2 catch error: " +
                            err.code
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .VerifyInitParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback VerifyInitParameterProcess 3 catch error: " +
                            err.code
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .VerifyInitParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 3)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback VerifyInitParameterProcess 4 catch error: " +
                            err.code
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_3400
         * @tc.name Abnormal situation of additional signature verification data
         * @tc.desc Pass in an exception parameter and call it in the form of a promise
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3400",
            0,
            async function (done) {
                await asyPromise
                    .verifyUpdateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyUpdateAbnormalParameterProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 801).assertTrue();
                    });

                await asyPromise
                    .verifyUpdateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyUpdateAbnormalParameterProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 801).assertTrue();
                    });

                await asyPromise
                    .verifyUpdateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 3)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyUpdateAbnormalParameterProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 801).assertTrue();
                    });

                await asyPromise
                    .verifyUpdateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 4)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyUpdateAbnormalParameterProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 801).assertTrue();
                    });

                await asyPromise
                    .verifyUpdateAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 5)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyUpdateAbnormalParameterProcess 5 catch error: " +
                            err
                        );
                        expect(err.code == 801).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_3500
         * @tc.name Abnormal situation of visa verification signature data
         * @tc.desc Pass in an exception parameter and call it in the form of a callback
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3500",
            0,
            async function (done) {
                await asyCallback
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .verifyAbnormalParameterProcess(asyCommon.genRsa2048KeyPairSpec(),
                        "RSA1024|PKCS1|SHA224", 4)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_3600
         * @tc.name Abnormal situation of parameter mode for signature verification setting
         * @tc.desc Pass in an exception parameter and call it in the form of a promise
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3600",
            0,
            async function (done) {
                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 32, 0, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 0, 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", -1, 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 2, 1, 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 65535, 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 5 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 6, 1, 3)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 6 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", "string", 1, 0)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 7 catch error: " +
                            err
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 32, 1, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 8 catch error: " +
                            err.code
                        );
                        expect(err.code == undefined).assertTrue();
                    });

                await asyPromise
                    .verifyAbnormalSetFillProcess("RSA1024|PRIMES_2", "RSA1024|PKCS1|SHA512", 32, 1, 5)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise verifyAbnormalSetFillProcess 9 catch error: " +
                            err.code
                        );
                        expect(err.code == undefined).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_3700
         * @tc.name Abnormal situation of parameter mode for signature verification getting
         * @tc.desc Pass in an exception parameter and call it in the form of a callback
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3700",
            0,
            async function (done) {
                await asyCallback
                    .VerifyAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", 10000, 1, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 1 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .VerifyAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 0, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 2 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .VerifyAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, 1, 2)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 3 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });

                await asyCallback
                    .VerifyAbnormalGetFillProcess("RSA1024|PRIMES_2",
                        "RSA1024|PKCS1|SHA512", cryptoFramework.SignSpecItem.PSS_TRAILER_FIELD_NUM, 1, 1)
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyCallback verifyAbnormalParameterProcess 4 catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_3800
         * @tc.name Signature verification and corresponding algorithm for obtaining signatures
         * @tc.desc Pass in algorithm name "RSA1024|PKCS1|SHA512" and call it using the promise method
         */
        it(
            "Security_CryptoFramework_SignatureVerification_Func_3800",
            0,
            async function (done) {
                await asyPromise
                    .signAndVerifyGetAlgNameProcess("RSA1024|PKCS1|SHA512")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    })
                    .catch((err) => {
                        console.error(
                            "AsyPromise signAndVerifyGetAlgNameProcess catch error: " +
                            err
                        );
                        expect(err.code == 401).assertTrue();
                    });
                done();
            }
        );
    });
}
