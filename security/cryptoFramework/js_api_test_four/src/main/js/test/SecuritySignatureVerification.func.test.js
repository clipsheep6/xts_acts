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
import cryptoFramework from "@ohos.security.cryptoFramework";
import { stringTouInt8Array, uInt8ArrayToShowStr } from "./utils/common/publicDoString";

export default function SecuritySignatureVerificationFuncJsunit() {
    describe("SecuritySignatureVerificationFuncJsunit", function () {
        console.log("##########start SecuritySignatureVerificationFuncJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0100
         * @tc.name Signature and verification scenario testing
         * @tc.desc the asyAlgoName is "SM2256|SM3", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0100", 0, async function (done) {
            await asyCallback.signAndVerifyNormalProcess("SM2256", "SM2256|SM3").then((result) => {
                expect(result).assertTrue();
            }).catch((err) => {
                console.error("Security_CryptoFramework_SignatureVerification_Func_0100 catch error: " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0200
         * @tc.name Create signature compatibility test
         * @tc.desc the asyAlgoName is "SM2256|NoHash", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|MD5", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA256", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA1", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA224", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA384", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA512", Use the async Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0200", 0, async function (done) {
            try {
                cryptoFramework.createSign("SM2256|NoHash");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator 1 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createSign("SM2256|MD5");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator 2 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createSign("SM2256|SHA256");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator 3 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createSign("SM2256|SHA1");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator 4 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createSign("SM2256|SHA224");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator 5 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                await cryptoFramework.createSign("SM2256|SHA384");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator 6 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                await cryptoFramework.createSign("SM2256|SHA512");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator 7 error:" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0300
         * @tc.name Create verification compatibility test
         * @tc.desc the asyAlgoName is "SM2256|NoHash", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|MD5", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA256", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA1", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA224", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA384", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA512", Use the async Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0300", 0, async function (done) {
            try {
                cryptoFramework.createVerify("SM2256|NoHash");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 1 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|MD5");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 2 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|SHA256");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 3 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|SHA1");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 4 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|SHA224");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 5 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|SHA384");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 6 error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|SHA512");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 7 error:" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0400
         * @tc.name Create Key Generator Test
         * @tc.desc the asyAlgoName is "SM22567", Use the async Style of Interface
         * @tc.desc the asyAlgoName is null, Use the async Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0400", 0, async function (done) {
            try {
                cryptoFramework.createAsyKeyGenerator("SM22567");
                expect(null).assertFail();
            } catch (err) {
                console.error("rsaGenerator error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createAsyKeyGenerator(null);
                expect(null).assertFail();
            } catch (err) {
                console.error("rsaGenerator error:" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0500
         * @tc.name Create signature failed
         * @tc.desc the asyAlgoName is "SM2256|SHA257", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|NULL", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "NULL|SHA1", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "ECC|SHA", Use the async Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0500", 0, async function (done) {
            try {
                cryptoFramework.createSign("SM2256|SHA257");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createSign("SM2256|NULL");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createSign("NULL|SHA1");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator error:" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createSign("ECC|SHA");
                expect(null).assertFail();
            } catch (err) {
                console.error("signGenerator error:" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0600
         * @tc.name Exception while initializing rsa signature object
         * @tc.desc Pass in an exception parameter null and call it as a async
         * @tc.desc Pass in the two public keys generated by the exception parameter SM2256 and call them as async
         * @tc.desc Pass in an exception parameter "sroundpriKey" and call it as a async
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0600", 0, async function (done) {
            let specGenerator = cryptoFramework.createAsyKeyGenerator("SM2256");
            let signGenerator = cryptoFramework.createSign("SM2256|SM3");
            let signKeyPair;
            await new Promise((resolve, reject) => {
                specGenerator.generateKeyPair((err, keyPair) => {
                    if (err) {
                        reject(err);
                    } else {
                        signKeyPair = keyPair;
                        resolve();
                    }
                });
            });

            try {
                signGenerator.init(null);
                expect(null).assertFail();
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }

            try {
                signGenerator.init(signKeyPair.priKey, signKeyPair.priKey);
                expect(null).assertFail();
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }

            try {
                signGenerator.init("sroundpriKey");
                expect(null).assertFail();
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }

            done();
        });


        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0700
         * @tc.name Exception in adding signature data to rsa objects
         * @tc.desc Call it as a promise without passing in parameters
         * @tc.desc Pass in an exception parameter null and call it as a promise
         * @tc.desc Pass in an exception parameter "" and call it as a promise
         * @tc.desc Pass in an exception parameter of "This is a sign test" multiplied by 5000 times and call it promise
         * @tc.desc The signature object was not initialized, and the data to be signed "This is a sign test"
         * was passed in as a promise to be called
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0700", 0, async function (done) {
            await asyPromise.updateAbnormalParameterProcess("SM2256", "SM2256|SM3", 0).then((data) => {
                console.log("data 1 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise updateAbnormalParameterProcess 1 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.updateAbnormalParameterProcess("SM2256", "SM2256|SM3", 1).then((data) => {
                console.log("data 2 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise updateAbnormalParameterProcess 2 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.updateAbnormalParameterProcess("SM2256", "SM2256|SM3", 2).then((data) => {
                console.log("data 3 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise updateAbnormalParameterProcess 3 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.updateAbnormalParameterProcess("SM2256", "SM2256|SM3", 3).then((data) => {
                console.log("data 4 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise updateAbnormalParameterProcess 4 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.updateAbnormalParameterProcess("SM2256", "SM2256|SM3", 4).then((data) => {
                console.log("data 5 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise updateAbnormalParameterProcess 5 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });
            done();
        });


        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0800
         * @tc.name Signature data anomaly
         * @tc.desc Pass in an exception parameter "This is a sign test" and "This is a sign test"
         * call it in the form of a callback
         * @tc.descPass in an exception parameter null and call it as a callback
         * @tc.desc Pass in an exception parameter "" and call it as a callback
         * @tc.desc Pass in two exception parameters "This is a sign test" and "This is a sign test"
         * and call it as a callback
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0800", 0, async function (done) {
            await asyCallback.signAbnormalParameterProcess("SM2256", "SM2256|SM3", 0).then((data) => {
                console.log("signAbnormalParameterProcess data 1 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback signAbnormalParameterProcess 1 catch error: " + err.code);
                expect(err.code == 401).assertTrue();
            });

            await asyCallback.signAbnormalParameterProcess("SM2256", "SM2256|SM3", 1).then((data) => {
                console.log("signAbnormalParameterProcess data 2 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback signAbnormalParameterProcess 2 catch error: " + err.code);
                expect(err.code == 401).assertTrue();
            });

            await asyCallback.signAbnormalParameterProcess("SM2256", "SM2256|SM3", 2).then((data) => {
                console.log("signAbnormalParameterProcess data 3 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback signAbnormalParameterProcess 3 catch error: " + err.code);
                expect(err.code == 401).assertTrue();
            });

            await asyCallback.signAbnormalParameterProcess("SM2256", "SM2256|SM3", 3).then((data) => {
                console.log("signAbnormalParameterProcess data 4 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback signAbnormalParameterProcess 4 catch error: " + err.code);
                expect(err.code == 401).assertTrue();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_0900
         * @tc.name Create verification failed
         * @tc.desc the asyAlgoName is "SM22567|SHA256", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "NULL|SHA256", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|SHA122", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "SM2256|NULL", Use the async Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_0900", 0, async function (done) {
            try {
                cryptoFramework.createVerify("SM22567|SHA256");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 1 error:" + err.code);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("NULL|SHA256");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 2 error:" + err.code);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|SHA122");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 3 error:" + err.code);
                expect(err.code == 401).assertTrue();
            }

            try {
                cryptoFramework.createVerify("SM2256|NULL");
                expect(null).assertFail();
            } catch (err) {
                console.error("verifyGenerator 4 error:" + err.code);
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1000
         * @tc.name Abnormal situation of initialization verification object
         * @tc.desc Pass in an exception parameter null and call it as a async
         * @tc.desc Pass in the two public keys generated by the exception parameter SM2256 and call them as async
         * @tc.desc Pass in an exception parameter "sroundpriKey" and call it as a async
         */
        it("Security_CryptoFramework_SignatureVerification_Func_1000", 0, async function (done) {
            let specGenerator = cryptoFramework.createAsyKeyGenerator("SM2256");
            let verifyGenerator = cryptoFramework.createVerify("SM2256|SM3");
            let verifyKeyPair;
            await new Promise((resolve, reject) => {
                specGenerator.generateKeyPair((err, keyPair) => {
                    if (err) {
                        reject(err);
                    } else {
                        verifyKeyPair = keyPair;
                        resolve();
                    }
                });
            });

            try {
                verifyGenerator.init(null);
                expect(null).assertFail();
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }

            try {
                verifyGenerator.init(verifyKeyPair.pubKey, verifyKeyPair.pubKey);
                expect(null).assertFail();
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }

            try {
                verifyGenerator.init("sroundpriKey");
                expect(null).assertFail();
            } catch (err) {
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1100
         * @tc.name Abnormal situation of additional signature verification data
         * @tc.desc Call it as a promise without passing in parameters
         * @tc.desc Pass in an exception parameter null and call it as a promise
         * @tc.desc Pass in an exception parameter "" and call it as a promise
         * @tc.desc Pass in two exception parameters "This is a sign test" and "This is a sign test"
         * and call them as promise
         * @tc.desc The verify object was not initialized, and the data to be signed "This is a sign test"
         * was passed in as a promise to be called
         */
        it("Security_CryptoFramework_SignatureVerification_Func_1100", 0, async function (done) {
            await asyPromise.verifyUpdateAbnormalParameterProcess("SM2256", "SM2256|SM3", 0).then((data) => {
                console.log("data 1 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise verifyUpdateAbnormalParameterProcess 1 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.verifyUpdateAbnormalParameterProcess("SM2256", "SM2256|SM3", 1).then((data) => {
                console.log("data 2 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise verifyUpdateAbnormalParameterProcess 2 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.verifyUpdateAbnormalParameterProcess("SM2256", "SM2256|SM3", 2).then((data) => {
                console.log("data 3 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise verifyUpdateAbnormalParameterProcess 3 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.verifyUpdateAbnormalParameterProcess("SM2256", "SM2256|SM3", 3).then((data) => {
                console.log("data 4 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise verifyUpdateAbnormalParameterProcess 4 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyPromise.verifyUpdateAbnormalParameterProcess("SM2256", "SM2256|SM3", 4).then((data) => {
                console.log("data 5 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyPromise verifyUpdateAbnormalParameterProcess 5 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1200
         * @tc.name Abnormal situation of visa verification signature data
         * @tc.desc Call it as a callback without passing in parameters
         * @tc.desc Pass in an exception parameter null and call it as a callback
         * @tc.desc Pass in an exception parameter "" and call it as a callback
         * @tc.desc Pass in an exception parameter "This is a sign test" and "This is a sign test"
         * call it in the form of a callback
         */
        it("Security_CryptoFramework_SignatureVerification_Func_1200", 0, async function (done) {
            await asyCallback.verifyAbnormalParameterProcess("SM2256", "SM2256|SM3", 0).then((data) => {
                console.log("data 1 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback verifyAbnormalParameterProcess 1 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyCallback.verifyAbnormalParameterProcess("SM2256", "SM2256|SM3", 1).then((data) => {
                console.log("data 2 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback verifyAbnormalParameterProcess 2 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyCallback.verifyAbnormalParameterProcess("SM2256", "SM2256|SM3", 2).then((data) => {
                console.log("data 3 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback verifyAbnormalParameterProcess 3 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });

            await asyCallback.verifyAbnormalParameterProcess("SM2256", "SM2256|SM3", 3).then((data) => {
                console.log("data 4 : " + data);
                expect(null).assertFail();
            }).catch((err) => {
                console.error("AsyCallback verifyAbnormalParameterProcess 4 catch error: " + err);
                expect(err.code == 401).assertTrue();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1300
         * @tc.name Test signature verification and pass in ultra long parameters
         * @tc.desc the asyAlgoName is "SM2256|SM3", Use the async Style of Interface
         * @tc.desc the asyAlgoName is "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefhijklmnopqrstuvwxyz" * 350,
         * Use the async Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_1300", 0, async function (done) {
            let globalSignBlob;
            let globalRsaKeyPair;
            let globalText;
            let t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefhijklmnopqrstuvwxyz";
            let n = t.length;
            for (let i = 0; i < 350; i++) {
                globalText += t.charAt(Math.floor(Math.random() * n));
            }
            let input = { data: stringTouInt8Array(globalText) };

            let result = await new Promise((resolve, reject) => {
                let rsaGenerator = cryptoFramework.createAsyKeyGenerator("SM2256");
                let signGenerator = cryptoFramework.createSign("SM2256|SM3");
                let verifyGenerator = cryptoFramework.createVerify("SM2256|SM3");
                rsaGenerator.generateKeyPair().then((rsaKeyPair) => {
                    globalRsaKeyPair = rsaKeyPair;
                    return signGenerator.init(globalRsaKeyPair.priKey);
                }).then((initData) => {
                    console.log("initData: " + initData);
                    return signGenerator.update(input);
                }).then((updateData) => {
                    console.log("updateData: " + updateData);
                    return signGenerator.sign(input);
                }).then((finalOutput) => {
                    globalSignBlob = finalOutput;
                    console.log("signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
                    return verifyGenerator.init(globalRsaKeyPair.pubKey);
                }).then((initData) => {
                    console.log("initData: " + initData);
                    return verifyGenerator.update(input);
                }).then((updateData) => {
                    console.log("updateData: " + updateData);
                    return verifyGenerator.verify(input, globalSignBlob);
                }).then((finalStatus) => {
                    console.log("finalStatus: " + finalStatus);
                    resolve(true);
                }).catch((err) => {
                    console.error("signAndVerifyNormalProcess catch err:" + err);
                    reject(err);
                });
            });

            try {
                expect(result).assertTrue();
            } catch (err) {
                expect(null).assertFail();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1400
         * @tc.name Key negotiation test
         * @tc.desc the asyAlgoName is "SM2256", Use the async Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerification_Func_1400", 0, async function (done) {
            try {
                cryptoFramework.createAsyKeyGenerator("SM2256");
                cryptoFramework.createKeyAgreement("SM2256");
                expect(null).assertFail();
            } catch (err) {
                console.error("createAsyKeyAgreement error:" + err.code);
                expect(err.code == 801).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerification_Func_1500
         * @tc.name Signature verification and corresponding algorithm for obtaining signatures
         * @tc.desc Pass in algorithm name "SM2256|SM3" and call it using the async method
         * @tc.desc Pass in algorithm name "SM2256|SM3" and call it using the async method
         */
        it("Security_CryptoFramework_SignatureVerification_Func_1500", 0, async function (done) {
            try {
                let signGenerator = cryptoFramework.createSign("SM2256|SM3");
                expect(signGenerator.algName == "SM2256|SM3").assertTrue();
                let verifyGenerator = cryptoFramework.createVerify("SM2256|SM3");
                expect(verifyGenerator.algName == "SM2256|SM3").assertTrue();
            } catch (err) {
                console.log("Security_CryptoFramework_SignatureVerification_Func_1500 catch err: " + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        });
    });
}
