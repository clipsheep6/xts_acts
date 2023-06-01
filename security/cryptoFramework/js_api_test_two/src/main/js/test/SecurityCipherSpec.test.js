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
import * as asyCallback from "./utils/asymmetric/publicAsymmetricCallback";
import * as asyPromise from "./utils/asymmetric/publicAsymmetricPromise";
import * as common from "./utils/common/publicDoSpec";

function genRsa2048KeyPairSpec() {
    return common.genRsa2048KeyPairSpec();
}

export default function SecurityCipherSpecJsunit() {
    describe("SecurityCipherSpecJsunit", function () {
        console.info("##########start SecurityCipherSpecJsunit##########");
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
            await asyCallback.encryptSetAndGetSpecInitProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2000 catch  error: " + err);
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
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2100 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2200
         * @tc.name set fill mode failed
         * @tc.desc the asyAlgoName is err parameter, Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2200", 0, async function (done) {
            await asyCallback.encryptSetSpecFail(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1", true)
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2200 catch  error: " + err);
                    expect(err.code == 401).assertTrue();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2300
         * @tc.name get fill mode failed
         * @tc.desc the asyAlgoName is err parameter, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2300", 0, async function (done) {
            await asyPromise.encryptGetSpecFail(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2300 catch  error: " + err);
                    expect(err.code == 401).assertTrue();
                });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_Cipher_Func_2400
         * @tc.name Obtain the encryption and decryption algorithm name
         * @tc.desc the asyAlgoName is "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Func_2400", 0, async function (done) {
            await asyPromise.encryptGetAlgName(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA256|MGF1_SHA1", true)
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Func_2400 catch  error: " + err);
                    expect(null).assertFail();
                });
            done();
        }
        );
    });
}