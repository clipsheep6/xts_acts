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
    genGcmParamsSpec,
    genIvParamsSpec,
    genCcmParamsSpec,
} from "../common/publicDoString";

import { createSymKeyGenerator, createSymCipher, } from "./publicSymmetricCommon";

function createGlobalParams(symAlgoName, paramType) {
    let params;
    try {
        if (paramType == "genIvParamsSpec") {
            if (symAlgoName.includes("AES")) {
                params = genIvParamsSpec(16);
            } else if (symAlgoName.includes("3DES")) {
                params = genIvParamsSpec(8);
            } else {
                throw "[error]invalid symAlgoName!";
            }
        } else if (paramType == "genGcmParamsSpec") {
            params = genGcmParamsSpec();
        } else if (paramType == "genCcmParamsSpec") {
            params = genCcmParamsSpec();
        } else if (paramType == "null") {
            params = null;
        } else {
            throw "[error]invalid paramType!";
        }
        return params;
    } catch (err) {
        return err;
    }
}

async function generateSymKey(symKeyGenerator) {
    return new Promise((resolve, reject) => {
        console.log("[Promise]generateSymKey start111111 ");
        symKeyGenerator
            .generateSymKey()
            .then((symKey) => {
                console.log("[Promise]generateSymKey success. symKey is " + symKey);
                console.log("[promise]key algName:" + symKey.algName);
                console.log("[promise]key format:" + symKey.format);
                let encodeKey = symKey.getEncoded();
                console.log(
                    "[promise]key getEncoded hex: " + uInt8ArrayToShowStr(encodeKey.data)
                );
                resolve(symKey);
            })
            .catch((err) => {
                console.error("[Promise]generateSymKey failed. error is " + err);
                reject(err);
            });
        console.log("[Promise]generateSymKey end111111 ");
    });
}

async function initCipher(cipherGenerator, mode, key, params) {
    return new Promise((resolve, reject) => {
        cipherGenerator
            .init(mode, key, params)
            .then(() => {
                console.log("[Promise]cipherGenerator init success! mode is : " + mode);
                resolve("init success");
            })
            .catch((err) => {
                console.error(
                    "[Promise]cipherGenerator init failed. error is " +
                    err +
                    "mode is " +
                    mode
                );
                reject(err);
            });
    });
}

async function updateCipher(cipherGenerator, mode, plainText) {
    return new Promise((resolve, reject) => {
        cipherGenerator
            .update(plainText)
            .then((updateData) => {
                console.log(
                    "[Promise]cipherGenerator update success! mode is : " + mode
                );
                resolve(updateData);
            })
            .catch((err) => {
                console.error(
                    "[Promise]cipherGenerator update failed. error is " +
                    err +
                    "mode is " +
                    mode
                );
                reject(err);
            });
    });
}

async function doFinalCipher(cipherGenerator, mode, dataBlob) {
    return new Promise((resolve, reject) => {
        cipherGenerator.doFinal(dataBlob).then((finalData) => {
            console.log("[Promise]cipherGenerator doFinal success! mode is : " + mode);
            resolve(finalData);
        }).catch((err) => {
            console.error("[Promise]cipherGenerator doFinal failed. error is " + err + "mode is " + mode);
            reject(err);
        });
    });
}

async function doFinalCipherTypeFailed(cipherGenerator, dataBlob, itemType) {
    return new Promise((resolve, reject) => {
        switch (itemType) {
            case 0:
                cipherGenerator.doFinal().then((finalData) => {
                    resolve(finalData);
                }).catch((err) => {
                    console.error("[Promise]cipherGenerator doFinal failed. 1 error is " + err.code);
                    reject(err);
                });
                break;
            case 1:
                cipherGenerator.doFinal(null).then((finalData) => {
                    resolve(finalData);
                }).catch((err) => {
                    console.error("[Promise]cipherGenerator doFinal failed. 2 error is " + err.code);
                    reject(err);
                });
                break;
            case 2:
                cipherGenerator.doFinal(dataBlob).then((finalData) => {
                    console.log("[Promise]cipherGenerator doFinal success! dataBlob is : " + dataBlob);
                    resolve(finalData);
                }).catch((err) => {
                    console.log("[Promise]cipherGenerator doFinal faailed dataBlob is : " + dataBlob);
                    console.error("[Promise]cipherGenerator doFinal failed. error is " + err);
                    reject(err);
                });
                break;
            default :
                resolve("dofinal cipher failed");
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

        generateSymKey(symKeyGenerator).then((promiseKey) => {
            globalKey = promiseKey;
            return initCipher(cipherGenerator, encryptMode, promiseKey, null);
        }).then((initData) => {
            console.log("initData: " + initData);
            let plainText = { data: stringTouInt8Array(globalText) };
            return updateCipher(cipherGenerator, encryptMode, plainText);
        }).then((updateOutput) => {
            console.log("[promise]encrypt update out hex:" + uInt8ArrayToShowStr(updateOutput.data));
            globalCipherText = updateOutput;
            return doFinalCipher(cipherGenerator, encryptMode, null);
        }).then((finalOutput) => {
            if (finalOutput == null) {
            } else {
                console.log("[promise]encrypt authTag(finalOutput) hex: " + uInt8ArrayToShowStr(finalOutput.data));
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
            console.log("[promise]decrypt update out: " + uInt8ArrayToString(updateOutput.data));
            return doFinalCipher(cipherGenerator, decryptMode, null);
        }).then((finalOutput) => {
            console.log("finalOutput: " + finalOutput);
            console.log("[promise]Decrypt text data: " + updateOutputdata);
            if (updateOutputdata == globalText) {
                resolve(true);
            } else {
                resolve(false);
            }
        }).catch((err) => {
            console.error("[promise] encryptProcess catch err:" + err);
            reject(err);
        });
    });
}

async function doFinalCipherFailed(symAlgoName, cipherAlgoName, itemType) {
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;

    return new Promise((resolve, reject) => {
        var symKeyGenerator = createSymKeyGenerator(symAlgoName);
        var cipherGenerator = createSymCipher(cipherAlgoName);
        var globalParams = createGlobalParams(symAlgoName, null);

        generateSymKey(symKeyGenerator).then((specKeyPair) => {
            if(itemType != 2)
            {
                initCipher(cipherGenerator, encryptMode, specKeyPair, globalParams);
            }
            resolve(doFinalCipherTypeFailed(cipherGenerator, input, itemType));
        }).catch ((err) => {
            reject(err);
        });
    });
}

export {
    encryptAndDecryptNormalProcess,
    doFinalCipherFailed,
};
