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

import { expect } from "@ohos/hypium";
import cryptoFramework from "@ohos.security.cryptoFramework";
import {
    stringTouInt8Array,
    uInt8ArrayToShowStr,
    uInt8ArrayToString,
} from "../common/publicDoString";

import { createSymKeyGenerator, createSymCipher, } from "./publicSymmetricCommon";

async function generateSymKey(symKeyGenerator) {
    return new Promise((resolve, reject) => {
        symKeyGenerator.generateSymKey((err, symKey) => {
            if (err) {
                console.error("[Callback] generateSymKey failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback] generateSymKey success. symKey is " + symKey);
                console.log("[Callback] key algName:" + symKey.algName);
                console.log("[Callback] key format:" + symKey.format);
                var encodeKey = symKey.getEncoded();
                console.log(
                    "[Callback] key getEncoded hex: " + uInt8ArrayToShowStr(encodeKey.data)
                );
                resolve(symKey);
            }
        });
    });
}

async function initCipher(cipherGenerator, mode, key, params) {
    return new Promise((resolve, reject) => {
        cipherGenerator.init(mode, key, params, (err) => {
            if (err) {
                console.error(
                    "[Callback] cipherGenerator init failed. error is " +
                    err +
                    "mode is " +
                    mode
                );
                reject(err);
            } else {
                console.log(
                    "[Callback]cipherGenerator init success! mode is : " + mode
                );
                resolve("init success");
            }
        });
    });
}

async function updateCipher(cipherGenerator, mode, plainText) {
    return new Promise((resolve, reject) => {
        cipherGenerator.update(plainText, (err, updateData) => {
            if (err) {
                console.error(
                    "[Callback] cipherGenerator update failed. error is " +
                    err +
                    "mode is " +
                    mode
                );
                reject(err);
            } else {
                console.log(
                    "[Callback] cipherGenerator update success! mode is : " + mode
                );
                resolve(updateData);
            }
        });
    });
}

async function doFinalCipher(cipherGenerator, mode, dataBlob) {
    return new Promise((resolve, reject) => {
        cipherGenerator.doFinal(dataBlob, (err, finalData) => {
            if (err) {
                console.error(
                    "[Callback] cipherGenerator doFinal failed. error is " +
                    err +
                    "mode is " +
                    mode
                );
                reject(err);
            } else {
                console.log(
                    "[Callback] cipherGenerator doFinal success! mode is : " + mode
                );
                resolve(finalData);
            }
        });
    });
}

async function updateCipherFailed(cipherGenerator, data, itemType) {
    return new Promise((resolve, reject) => {
        switch (itemType) {
            case 0:
                cipherGenerator.update((err) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve("update success");
                    }
                });
                break;
            case 1:
                cipherGenerator.update(null, (err) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve("update success");
                    }
                });
                break;
            case 2:
                cipherGenerator.update(data, data, (err) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve("update success");
                    }
                });
                break;
            case 3:
                cipherGenerator.update(data, (err, signOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(signOutput);
                    }
                });
                break;
            default:
                reject("err");
                break;
        }
    });
}

async function encryptAndDecryptNormalProcess(symAlgoName, cipherAlgoName) {
    var updateOutputdata;
    var globalCipherText;
    var globalKey;
    var globalText = "abcdefghabcdefghabcdefghabcdefgh";
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        var symKeyGenerator = createSymKeyGenerator(symAlgoName);
        var cipherGenerator = createSymCipher(cipherAlgoName);

        generateSymKey(symKeyGenerator).then((CallbackKey) => {
            globalKey = CallbackKey;
            return initCipher(cipherGenerator, encryptMode, CallbackKey, null);
        }).then((initData) => {
            console.log("initData: " + initData);
            let plainText = { data: stringTouInt8Array(globalText) };
            return updateCipher(cipherGenerator, encryptMode, plainText);
        }).then((updateOutput) => {
            console.log("[Callback] encrypt update out hex:" + uInt8ArrayToShowStr(updateOutput.data));
            globalCipherText = updateOutput;
            return doFinalCipher(cipherGenerator, encryptMode, null);
        }).then((finalOutput) => {
            if (finalOutput == null) {
            } else {
                console.log("[Callback] encrypt authTag(finalOutput) hex: " + uInt8ArrayToShowStr(finalOutput.data));
                globalCipherText = Array.from(globalCipherText.data);
                finalOutput = Array.from(finalOutput.data);
                globalCipherText = globalCipherText.concat(finalOutput);
                globalCipherText = new Uint8Array(globalCipherText);
                globalCipherText = { data: globalCipherText };
            }
            return initCipher(cipherGenerator, decryptMode, globalKey, null);
        }).then((initData) => {
            console.log("initData: " + initData);
            return updateCipher(cipherGenerator, decryptMode, globalCipherText);
        }).then((updateOutput) => {
            updateOutputdata = uInt8ArrayToString(updateOutput.data);
            console.log("[Callback] decrypt update out: " + uInt8ArrayToString(updateOutput.data));
            return doFinalCipher(cipherGenerator, decryptMode, null);
        }).then((finalOutput) => {
            console.log("finalOutput: " + finalOutput);
            console.log("[Callback] Decrypt text data: " + updateOutputdata);
            if (updateOutputdata == globalText) {
                resolve(true);
            } else {
                resolve(false);
            }
        }).catch((err) => {
            console.error("[Callback] encryptProcess catch err:" + err);
            reject(err);
        });
    });
}

async function encryptUpdateCipherFailed(symAlgoName, cipherAlgoName, state) {
    let globalText = "This is a sign test";
    let input = { data: stringTouInt8Array(globalText) };
    let encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    return new Promise((resolve, reject) => {
        var symKeyGenerator = createSymKeyGenerator(symAlgoName);
        var cipherGenerator = createSymCipher(cipherAlgoName);

        generateSymKey(symKeyGenerator).then((CallbackKey) => {
            if (state == 3) {
                resolve(updateCipherFailed(cipherGenerator, input, state));
            }
            return initCipher(cipherGenerator, encryptMode, CallbackKey, null);
        }).then((initCipher) => {
            console.log("[Callback] encryptUpdateCipherFailed initCipher:" + initCipher);
            resolve(updateCipherFailed(cipherGenerator, input, state));
        }).catch((err) => {
            reject(err);
        });
    });
}

export {
    encryptAndDecryptNormalProcess,
    encryptUpdateCipherFailed,
};
