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
import { stringTouInt8Array, uInt8ArrayToString, uInt8ArrayToShowStr } from "../common/publicDoString";
import {
    createAsyKeyGenerator,
    createAsyCipher,
    createAsySign,
    createAsyVerify,
} from "./publicAsymmetricCommon";

async function generateAsyKeyPair(rsaGenerator) {
    var pubKey;
    var priKey;
    return new Promise((resolve, reject) => {
        rsaGenerator.generateKeyPair((err, rsaKeyPair) => {
            if (err) {
                console.error("[Callback]generateSymKey failed. error is " + err);
                reject(err);
            } else {
                pubKey = rsaKeyPair.pubKey;
                let encodedPubKey = pubKey.getEncoded();
                console.log("[Callback]: pubKey.getAlgorithm= " + pubKey.algName);
                console.log("[Callback]: pubKey.getEncoded= " + encodedPubKey.data);
                console.log("[Callback]: pubKey.getFormat= " + pubKey.format);
                priKey = rsaKeyPair.priKey;
                let encodedPriKey = priKey.getEncoded();
                console.log("[Callback]: priKey.getAlgorithm= " + priKey.algName);
                console.log("[Callback]: priKey.getEncoded= " + encodedPriKey.data);
                console.log("[Callback]: priKey.getFormat= " + priKey.format);
                resolve(rsaKeyPair);
            }
        });
    });
}

async function initSign(signGenerator, priKey) {
    return new Promise((resolve, reject) => {
        signGenerator.init(priKey, (err) => {
            if (err) {
                console.error("[Callback]signGenerator init failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback]signGenerator init success!");
                resolve("init success");
            }
        });
    });
}

async function updateSign(signGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        signGenerator.update(dataBlob, (err) => {
            if (err) {
                console.error("[Callback]signGenerator update failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback]signGenerator update success!");
                resolve("update success");
            }
        });
    });
}

async function signForSign(signGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        console.log("[Callback]signGenerator sign 11111");
        signGenerator.sign(dataBlob, (err, signOutput) => {
            if (err) {
                console.error("[Callback]signGenerator sign failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback]signGenerator sign success!");
                resolve(signOutput);
            }
        });
        console.log("[Callback]signGenerator sign 2222222");
    });
}

async function signForSignFailed(signGenerator, dataBlob, itemType) {
    return new Promise((resolve, reject) => {
        switch (itemType) {
            case 0:
                signGenerator.sign((err, signOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(signOutput);
                    }
                });
                break;
            case 1:
                signGenerator.sign(null, (err, signOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(signOutput);
                    }
                });

                break;
            case 2:
                signGenerator.sign("", (err, signOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(signOutput);
                    }
                });
                break;
            case 3:
                signGenerator.sign(dataBlob, dataBlob, (err, signOutput) => {
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

async function initVerify(verifyGenerator, pubKey) {
    return new Promise((resolve, reject) => {
        verifyGenerator.init(pubKey, (err) => {
            if (err) {
                console.error("[Callback]verifyGenerator init failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback]verifyGenerator init success!");
                resolve("init success");
            }
        });
    });
}

async function updateVerify(verifyGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        verifyGenerator.update(dataBlob, (err) => {
            if (err) {
                console.error("[Callback]verifyGenerator update failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback]verifyGenerator update success!");
                resolve("update success");
            }
        });
    });
}

async function verifyForVerify(verifyGenerator, dataBlob, signDataBlob) {
    return new Promise((resolve, reject) => {
        verifyGenerator.verify(dataBlob, signDataBlob, (err, verifyOutput) => {
            if (err) {
                console.error("[Callback]signGenerator sign failed. error is " + err);
                reject(err);
            } else {
                console.error("[Callback]signGenerator sign success is  " + verifyOutput);
                resolve(verifyOutput);
            }
        });
    });
}

async function verifyForVerifyFailed(verifyGenerator, dataBlob, signDataBlob, verifyType) {
    return new Promise((resolve, reject) => {
        switch (verifyType) {
            case 0:
                verifyGenerator.verify(dataBlob, (err, verifyOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(verifyOutput);
                    }
                });
                break;
            case 1:
                verifyGenerator.verify(dataBlob, null, (err, verifyOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(verifyOutput);
                    }
                });
                break;
            case 2:
                verifyGenerator.verify(dataBlob, "", (err, verifyOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(verifyOutput);
                    }
                });
                break;
            case 3:
                verifyGenerator.verify(dataBlob, signDataBlob, signDataBlob, (err, verifyOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(verifyOutput);
                    }
                });
                break;
            case 4:
                verifyGenerator.verify(dataBlob, signDataBlob, (err, verifyOutput) => {
                    if (err) {
                        reject(err);
                    } else {
                        resolve(verifyOutput);
                    }
                });
                break;
            default:
                reject("err");
        }
    });
}

async function initCipher(cipherGenerator, mode, key, params) {
    return new Promise((resolve, reject) => {
        cipherGenerator.init(mode, key, params, (err) => {
            if (err) {
                console.error("[Callback]cipherGenerator init failed. error is " + err + "mode is " + mode);
                reject(err);
            } else {
                console.log("[Callback]cipherGenerator init success! mode is : " + mode);
                resolve("init success");
            }
        });
    });
}

async function doFinalCipher(cipherGenerator, mode, dataBlob) {
    return new Promise((resolve, reject) => {
        cipherGenerator.doFinal(dataBlob, (err, finalData) => {
            if (err) {
                console.error("[Callback]cipherGenerator doFinal failed. error is " + err + "mode is " + mode);
                reject(err);
            } else {
                console.log("[Callback]cipherGenerator doFinal success! mode is : " + mode);
                resolve(finalData);
            }
        });
    });
}

async function signAndVerifyNormalProcess(asyAlgoName, signVerifyAlgoName) {
    var globalRsaKeyPair;
    var globalSignBlob;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        var signGenerator = createAsySign(signVerifyAlgoName);
        var verifyGenerator = createAsyVerify(signVerifyAlgoName);
        generateAsyKeyPair(rsaGenerator).then((rsaKeyPair) => {
            globalRsaKeyPair = rsaKeyPair;
            //console.log("[Callback] signAndVerifyNormalProcess globalRsaKeyPair.priKey:" + globalRsaKeyPair.priKey.getEncoded().data);
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then((initSignOut) => {
            console.log("[Callback] signAndVerifyNormalProcess initSignOut:" + initSignOut);
            return updateSign(signGenerator, input);
        }).then((updateSignOut) => {
            console.log("[Callback] signAndVerifyNormalProcess updateSignOut:" + updateSignOut);
            return signForSign(signGenerator, input);
        }).then((finalOutput) => {
            //console.log("[Callback] signAndVerifyNormalProcess finalOutput:" + uInt8ArrayToShowStr(finalOutput.data));
            globalSignBlob = finalOutput;
            //console.log("[Callback] signAndVerifyNormalProcess globalRsaKeyPair.pubKey:" + globalRsaKeyPair.pubKey.getEncoded().data);
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then((initVerifyOut) => {
            console.log("[Callback] signAndVerifyNormalProcess initVerifyOut:" + initVerifyOut);
            return updateVerify(verifyGenerator, input);
        }).then((updateVerifyOut) => {
            console.log("[Callback] signAndVerifyNormalProcess updateVerifyOut:" + updateVerifyOut);
            return verifyForVerify(verifyGenerator, input, globalSignBlob);
        }).then((verifyOutput) => {
            console.log("[Callback] signAndVerifyNormalProcess verifyOutput :" + verifyOutput);
            resolve(verifyOutput);
        })
        .catch((err) => {
            reject(err);
        });
    });
}

async function signAbnormalParameterProcess(asyKeySpec, signVerifyAlgoName, signType) {
    var globalRsaKeyPair;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGenerator(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then((initSignOut) => {
            console.log("[Callback] signAbnormalParameterProcess initSignOut:" + initSignOut);
            resolve(signForSignFailed(signGenerator, input, signType));
        }).catch((err) => {
            reject(err);
        });
    });
}

async function verifyAbnormalParameterProcess(asyKeySpec, verifyAlgoName, verifyType) {
    var globalRsaKeyPair;
    var globalSignBlob;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };
    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGenerator(asyKeySpec);
        let verifyGenerator = createAsyVerify(verifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then((initVerifyOut) => {
            console.log("[Callback] verifyAbnormalParameterProcess initVerifyOut:" + initVerifyOut);
            resolve(verifyForVerifyFailed(verifyGenerator, input, globalSignBlob, verifyType));
        }).catch((err) => {
            reject(err);
        });
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
        let specGenerator = createAsyKeyGenerator(asyKeySpec);
        let cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        console.log("[callback] cipherGeneratorEncrypt" + cipherGeneratorEncrypt);
        let cipherGeneratorDncrypt = createAsyCipher(cipherAlgoName);

        specGenerator.generateKeyPair().then((specKeyPair) => {
            globalRsaKeyPair = specKeyPair;
            return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
        })
            .then((initCipherOut) => {
                console.log("[Callback] encryptAndDecryptBySpecProcess encryptMode initCipherOut:" + initCipherOut);
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDncrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then((initCipherOut) => {
                console.log("[Callback] encryptAndDecryptBySpecProcess decryptMode initCipherOut:" + initCipherOut);
                return doFinalCipher(cipherGeneratorDncrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                let decryptData = uInt8ArrayToString(finalOutput.data);
                if (decryptData == globalText) {
                    resolve(true);
                }
                resolve(false);
            })
            .catch((err) => {
                console.error("[Callback] encryptAndDecryptBySpecProcess catch err:" + err);
                reject(err);
            });
    });
}

export {
    signAndVerifyNormalProcess,
    signAbnormalParameterProcess,
    verifyAbnormalParameterProcess,
    encryptAndDecryptNormalProcess,
};
