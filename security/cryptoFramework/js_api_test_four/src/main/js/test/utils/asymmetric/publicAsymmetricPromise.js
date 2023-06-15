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

import cryptoFramework from "@ohos.security.cryptoFramework";
import { stringTouInt8Array, uInt8ArrayToString, } from "../common/publicDoString";
import {
    createAsyKeyGenerator,
    createAsyCipher,
    createAsyVerify,
} from "./publicAsymmetricCommon";

async function initCipher(cipherGenerator, mode, key, params) {
    return new Promise((resolve, reject) => {
        cipherGenerator.init(mode, key, params).then(() => {
            console.log("[Promise]cipherGenerator init success! mode is : " + mode);
            resolve("init success");
        }).catch((err) => {
            console.error("[Promise]cipherGenerator init failed. error is " + err + "mode is " + mode);
            reject(err);
        });
    });
}

async function doFinalCipher(cipherGenerator, mode, dataBlob) {
    return new Promise((resolve, reject) => {
        cipherGenerator.doFinal(dataBlob).then((finalData) => {
            console.log("[Promise]cipherGenerator doFinal success! mode is : " + mode);
            console.log("[Promise]cipherGenerator doFinal success! dataBlob is : " + dataBlob);
            resolve(finalData);
        }).catch((err) => {
            console.log("[Promise]cipherGenerator doFinal faailed dataBlob is : " + dataBlob);
            console.error("[Promise]cipherGenerator doFinal failed. error is " + err +"mode is " + mode);
            reject(err);
        });
    });
}

function createAsySign(signAlgoName) {
    try {
        let signGenerator = cryptoFramework.createSign(signAlgoName);
        console.log("signGenerator algName: " + signGenerator.algName);
        return signGenerator;
    } catch (err) {
        console.error("signGenerator error:" + err);
        return err;
    }
}

async function initSign(signGenerator, priKey) {
    return new Promise((resolve, reject) => {
        signGenerator.init(priKey).then(() => {
            console.log("[Promise]signGenerator init success!");
            resolve("init success");
        }).catch((err) => {
            console.error("[Promise]signGenerator init failed. error is " + err);
            reject(err);
        });
    });
}

async function updateSign(signGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        signGenerator.update(dataBlob).then(() => {
            console.log("[Promise]signGenerator update success!");
            resolve("update success");
        }).catch((err) => {
            console.error("[Promise]signGenerator update failed. error is " + err);
            reject(err);
        });
    });
}

async function signForSign(signGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        signGenerator.sign(dataBlob).then((signOutput) => {
            console.log("[Promise]signGenerator sign success!");
            resolve(signOutput);
        }).catch((err) => {
            console.error("[Promise]signGenerator sign failed. error is " + err);
            reject(err);
        });
    });
}

async function initVerify(verifyGenerator, pubKey) {
    return new Promise((resolve, reject) => {
        verifyGenerator.init(pubKey).then(() => {
            console.log("[Promise]verifyGenerator init success!");
            resolve("init success");
        }).catch((err) => {
            console.error("[Promise]verifyGenerator init failed. error is " + err);
            reject(err);
        });
    });
}

async function updateSignFailed(signGenerator, dataBlob, itemType) {
    return new Promise((resolve, reject) => {
        switch (itemType) {
            case 0:
                signGenerator.update().then(() => {
                    resolve("update success");
                }).catch((err) => {
                    reject(err);
                });
                break;
            case 1:
                signGenerator.update(null).then(() => {
                    resolve("update success");
                }).catch((err) => {
                    reject(err);
                });
                break;
            case 2:
                signGenerator.update("").then(() => {
                    resolve("update success");
                }).catch((err) => {
                    reject(err);
                });
                break;
            case 3:
                let data = dataBlob;
                for (let i = 1; i < 5000; i++) {
                    data = data + data;
                }
                signGenerator.update(data).then(() => {
                    resolve("update success");
                }).catch((err) => {
                    reject(err);
                });
                break;
            default:
                signGenerator.update(dataBlob).then(() => {
                    resolve("update success");
                }).catch((err) => {
                    reject(err);
                });
                break;
        }
    });
}

async function updateVerifyFailed(verifyGenerator, dataBlob, itemType) {
    return new Promise((resolve, reject) => {
        if (itemType == 0) {
            verifyGenerator.update().then(() => {
                resolve("update success");
            }).catch((err) => {
                reject(err);
            });
        } else if (itemType == 1) {
            verifyGenerator.update(null).then(() => {
                resolve("update success");
            }).catch((err) => {
                reject(err);
            });
        } else if (itemType == 2) {
            verifyGenerator.update("").then(() => {
                resolve("update success");
            }).catch((err) => {
                reject(err);
            });
        }
        else if (itemType == 3) {
            verifyGenerator.update(dataBlob, dataBlob).then(() => {
                resolve("update success");
            }).catch((err) => {
                reject(err);
            });
        }
        else {
            verifyGenerator.update(dataBlob).then(() => {
                resolve("update success");
            }).catch((err) => {
                reject(err);
            });
        }
    });
}

async function encryptAndDecryptNormalProcess(asyKeySpec, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGenerator(asyKeySpec);
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        let cipherGeneratorDncrypt = createAsyCipher(cipherAlgoName);
        specGenerator.generateKeyPair().then((specKeyPair) => {
            globalRsaKeyPair = specKeyPair;
            return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
        }).then((initCipherOut) => {
            console.log("[promise] encryptAndDecryptBySpecProcess encryptMode initCipherOut:" + initCipherOut);
            return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
        }).then((finalOutput) => {
            globalCipherText = finalOutput;
            return initCipher(cipherGeneratorDncrypt, decryptMode, globalRsaKeyPair.priKey, null);
        }).then((initCipherOut) => {
            console.log("[promise] encryptAndDecryptBySpecProcess decryptMode initCipherOut:" + initCipherOut);
            return doFinalCipher(cipherGeneratorDncrypt, decryptMode, globalCipherText);
        }).then((finalOutput) => {
            let decryptData = uInt8ArrayToString(finalOutput.data);
            if (decryptData == globalText) {
                resolve(true);
            } else {
                resolve(false);
            }
        }).catch((err) => {
            console.error("[promise] encryptAndDecryptBySpecProcess catch err:" + err);
            reject(err);
        });
    });
}

async function updateAbnormalParameterProcess(asyKeySpec, signVerifyAlgoName, updateType) {
    var globalRsaKeyPair;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGenerator(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            if (updateType == 4) {
                resolve(updateSignFailed(signGenerator, input, updateType));
            }
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then((initSignOut) => {
            console.log("[promise] updateAbnormalParameterProcess initSignOut:" + initSignOut);
            resolve(updateSignFailed(signGenerator, input, updateType));
        }).catch((err) => {
            console.error("[promise] updateAbnormalParameterProcess catch err:" + err);
            reject(err);
        });
    });
}

async function verifyUpdateAbnormalParameterProcess(asyKeySpec, signVerifyAlgoName, updateType) {
    var globalRsaKeyPair;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGenerator(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let verifyGenerator = createAsyVerify(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then( rsaKeyPair => {
            globalRsaKeyPair = rsaKeyPair;
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then((initSignOut) => {
            console.log("[promise] verifyUpdateAbnormalParameterProcess initSignOut:" + initSignOut);
            return updateSign(signGenerator, input);
        }).then((updateSignOut) => {
            console.log("[promise] verifyUpdateAbnormalParameterProcess updateSignOut:" + updateSignOut);
            return signForSign(signGenerator, input);
        }).then((signOut) => {
            console.log("[promise] verifyUpdateAbnormalParameterProcess signOut:" + signOut);
            if (updateType == 4) {
                resolve(updateVerifyFailed(verifyGenerator, input, updateType));
            }
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then((initVerifyOut) => {
            console.log("[promise] verifyUpdateAbnormalParameterProcess initVerifyOut:" + initVerifyOut);
            resolve(updateVerifyFailed(verifyGenerator, input, updateType));
        }).catch((err) => {
            console.error("[promise] VerifyUpdateAbnormalParameterProcess catch err:" + err);
            reject(err);
        });
    });
}

export {
    encryptAndDecryptNormalProcess,
    updateAbnormalParameterProcess,
    verifyUpdateAbnormalParameterProcess,
};
