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
import cryptoFramework from "@ohos.security.cryptoFramework";

function genRsa2048KeyPairSpec() {
    return common.genRsa2048KeyPairSpec();
}

export default function SecurityCipherSpecJsunit() {
    describe("SecurityCipherSpecJsunit", function () {
        console.log("##########start SecurityCipherSpecJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2000
         * @tc.name set and get fill mode before init
         * @tc.desc the itemType is OAEP_MGF1_PSRC_UINT8ARR, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2000", 0, async function (done) {
            await asyCallback.encryptSetAndGetSpecInitProcess(genRsa2048KeyPairSpec(),
                "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1").then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2000 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2100
         * @tc.name set and get fill mode after init
         * @tc.desc the itemType is OAEP_MGF1_PSRC_UINT8ARR, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2100", 0, async function (done) {
            await asyPromise.encryptInitSetAndGetSpecProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1")
                .then((result) => {
                    expect(result).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2100 catch error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2200
         * @tc.name set fill mode failed
         * @tc.desc Pass in exception parameter mode cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR,
         * parameter null, and call it synchronously
         * @tc.desc Pass in exception parameter mode cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR,
         * parameter 12456, and call it synchronously
         * @tc.desc Pass in exception parameter mode cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR,
         * parameter "asdfr", and call it synchronously
         */
        it("Security_CryptoFramework_Cipher_Func_2200", 0, async function (done) {
            let cipherGenerator = cryptoFramework.createCipher("RSA|PKCS1_OAEP|SHA256|MGF1_SHA1");

            try {
                cipherGenerator.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, null);
                expect(null).assertFail();
            } catch (err) {
                console.log("Security_CryptoFramework_Cipher_Func_2200 1 err" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cipherGenerator.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, 12456);
                expect(null).assertFail();
            } catch (err) {
                console.log("Security_CryptoFramework_Cipher_Func_2200 2 err" + err);
                expect(err.code == 401).assertTrue();
            }

            try {
                cipherGenerator.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, "asdfr");
                expect(null).assertFail();
            } catch (err) {
                console.log("Security_CryptoFramework_Cipher_Func_2200 3 err" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2300
         * @tc.name get fill mode failed
         * @tc.desc Pass in exception parameter mode 303, and call it synchronously
         */
        it("Security_CryptoFramework_Cipher_Func_2300", 0, async function (done) {
            let cipherGeneratorEncrypt = cryptoFramework.createCipher("RSA1024|PKCS1");

            try {
                cipherGeneratorEncrypt.getCipherSpec(303);
                expect(null).assertFail();
            }
            catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_2300 1 catch err" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2400
         * @tc.name Obtain the encryption and decryption algorithm name
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2400", 0, async function (done) {
            try {
                let cipherGeneratorEncrypt = cryptoFramework.createCipher("RSA1024|PKCS1");
                expect(cipherGeneratorEncrypt.algName == "RSA1024|PKCS1").assertTrue();
            }
            catch(err) {
                console.log("Security_CryptoFramework_Cipher_Func_2400 catch err" + err);
                expect(err.code == 401).assertTrue();
            }
            done();
        }
        );
    });
}