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
import cryptoFramework from "@ohos.security.cryptoFramework";
import { stringTouInt8Array, uInt8ArrayToShowStr, uInt8ArrayToString, } from "../common/publicDoString";

function generateAsyKeyPair(asyKeyGenerator) {
    asyKeyGenerator.generateKeyPair((err, data) => {
        if (err) {
            console.error("[callback]: err code = ", err.code);
            return;
        }
        let keyPair = data;
        let pubKey = keyPair.pubKey;
        let encodedPubKey = pubKey.getEncoded();
        console.log("[callback]: pubKey.getAlgorithm=" + pubKey.algName);
        console.log("[callback]: pubKey.getEncoded=" + encodedPubKey.data);
        console.log("[callback]: pubKey.getFormat=" + pubKey.format);
        let priKey = keyPair.priKey;
        let encodedPriKey = priKey.getEncoded();
        console.log("[callback]: priKey.getAlgorithm=" + priKey.algName);
        console.log("[callback]: priKey.getEncoded=" + encodedPriKey.data);
        console.log("[callback]: priKey.getFormat=" + priKey.format);
        let returnParamsSpec = {
            encodedPubKey: encodedPubKey,
            encodedPriKey: encodedPriKey,
        };
        return returnParamsSpec;
    });
}

function convertAsyKey(asyKeyGenerator, encodedPubKey, encodedPriKey) {
    asyKeyGenerator.convertKey(encodedPubKey, encodedPriKey, (err, data) => {
        if (err) {
            console.error("[convertkey]: err code = ", err.code);
            return;
        }
        let convertKeyPair = data;
        let convertPubKey = convertKeyPair.pubKey;
        let encodedConvertPubKey = convertPubKey.getEncoded();
        console.log("[convertkey]: pubKey.getAlgorithm=" + convertPubKey.algName);
        console.log("[convertkey]: pubKey.getEncoded=" + encodedConvertPubKey.data);
        console.log("[convertkey]: pubKey.getFormat=" + convertPubKey.format);
        let convertPriKey = convertKeyPair.priKey;
        let encodedConvertPriKey = convertPriKey.getEncoded();
        console.log("[convertkey]: priKey.getAlgorithm=" + convertPriKey.algName);
        console.log("[convertkey]: priKey.getEncoded=" + encodedConvertPriKey.data);
        console.log("[convertkey]: priKey.getFormat=" + convertPriKey.format);

        console.log("[convertkey]: priKey.clearMem in");
        convertPriKey.clearMem();
        console.log("[convertkey]: priKey.clearMem out");
    });
}

function getEncryptData(cipherGenerator, key, gcmParams) {
    let mode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    let gCipherText = undefined;

    console.log("mode: " + mode);
    console.log("[encrypt] start init ......");
    cipherGenerator.init(mode, key, gcmParams, (err) => {
        if (err) {
            console.error("init error: ", err);
            return;
        }
        console.log("init ok");
        console.log("[encrypt] start update1 ......");
        let plaintext1 = { data: stringTouInt8Array("1 abcd abcd abcd abcd 1") };
        console.log("plaintext1 hex: " + uInt8ArrayToShowStr(plaintext1.data));
        cipherGenerator.update(plaintext1, (err, updateOutput1) => {
            if (err) {
                console.error("update1 error: ", err);
                return;
            }
            console.log("update1 ok");
            console.log(
                "encrypt update1 out hex: " + uInt8ArrayToShowStr(updateOutput1.data)
            );
            let arrUpdateOut1 = Array.from(updateOutput1.data);
            gCipherText = arrUpdateOut1;
            console.log("[encrypt] start update2 ......");
            let plaintext2 = { data: stringTouInt8Array("2 abcd abcd abcd abcd 2") };
            cipherGenerator.update(plaintext2, (err, updateOutput2) => {
                if (err) {
                    console.error("update2 error: ", err);
                    return;
                }
                console.log("update2 ok");
                console.log(
                    "encrypt update2 out hex: " + uInt8ArrayToShowStr(updateOutput2.data)
                );
                let arrUpdateOut2 = Array.from(updateOutput2.data);
                gCipherText = gCipherText.concat(arrUpdateOut2);
                console.log("[encrypt] start doFinall ......");
                cipherGenerator.doFinal(null, (err, authTag) => {
                    if (err) {
                        console.error("doFinal error: ", err);
                        return;
                    }
                    console.log("doFinal ok");
                    console.log(
                        "encrypt authTag hex: " + uInt8ArrayToShowStr(authTag.data)
                    );
                    gcmParams.authTag = authTag;
                });
            });
        });
    });
    let returnParamsSpec = { gcmParams: gcmParams, cipherText: gCipherText };
    return returnParamsSpec;
}

function getDecryptData(cipherGenerator, key, gcmParams, cipherText) {
    let mode = cryptoFramework.CryptoMode.DECRYPT_MODE;
    let decryptText = undefined;
    console.log("mode: " + mode);
    console.log("[decrypt] start init ......");
    cipherGenerator.init(mode, key, gcmParams, (err) => {
        if (err) {
            console.error("init error: ", err);
            return;
        }
        console.log("init ok");
        console.log("[decrypt] start update1 ......");
        var ciphertext1 = cipherText.slice(0, 10);
        ciphertext1 = new Uint8Array(ciphertext1);
        ciphertext1 = { data: ciphertext1 };
        cipherGenerator.update(ciphertext1, (err, updateOutput1) => {
            if (err) {
                console.error("update1 error: ", err);
                return;
            }
            console.log("update1 ok");
            console.log(
                "decrypt update1 out hex: " + uInt8ArrayToString(updateOutput1.data)
            );
            let arrUpdateOut1 = Array.from(updateOutput1.data);
            decryptText = arrUpdateOut1;
            console.log("[decrypt] start update2 ......");
            var ciphertext2 = cipherText.slice(10, cipherText.length);
            ciphertext2 = new Uint8Array(ciphertext2);
            ciphertext2 = { data: ciphertext2 };
            cipherGenerator.update(ciphertext2, (err, updateOutput2) => {
                if (err) {
                    console.error("update2 error: ", err);
                    return;
                }
                console.log("update2 ok");
                console.log(
                    "decrypt update2 out hex: " + uInt8ArrayToString(updateOutput2.data)
                );
                console.log("[decrypt] start doFinall ......");
                cipherGenerator.doFinal(null, (err, finalOutput) => {
                    if (err) {
                        console.error("doFinal error: ", err);
                        return;
                    }
                    console.log("doFinal ok");
                    if (finalOutput != null) {
                        console.log(
                            "decrypt doFinal out hex: " +
                            uInt8ArrayToShowStr(finalOutput.data)
                        );
                        decryptText = finalOutput.data;
                    }
                });
            });
        });
    });
    return decryptText;
}

export {
// createSymKeyInstance,
// createCipherInstance,
    generateAsyKeyPair,
    convertAsyKey,
    getEncryptData,
    getDecryptData,
};
