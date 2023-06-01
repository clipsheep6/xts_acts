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

import { expect } from "@ohos/hypium";
import * as asyCommon from "../common/publicDoSpec";
import cryptoFramework from "@ohos.security.cryptoFramework";
import { stringTouInt8Array, uInt8ArrayToShowStr, uInt8ArrayToString, } from "../common/publicDoString";
import {
    createAsyKeyGenerator,
    createAsyKeyGeneratorBySpec,
    createAsyCipher,
    createAsySign,
    createAsyVerify,
    createAsyKeyAgreement,
} from "./publicAsymmetricCommon";

function sleep(delay) {
    var start = (new Date()).getTime();
    while ((new Date()).getTime() - start < delay) {
        continue;
    }
}

async function generateAsyKeyPair(rsaGenerator) {
    var pubKey;
    var priKey;
    return new Promise((resolve, reject) => {
        rsaGenerator
            .generateKeyPair()
            .then((rsaKeyPair) => {
                pubKey = rsaKeyPair.pubKey;
                let encodedPubKey = pubKey.getEncoded();
                priKey = rsaKeyPair.priKey;
                let encodedPriKey = priKey.getEncoded();
                resolve(rsaKeyPair);
            })
            .catch((err) => {
                console.error("[Promise]generateSymKey failed. error is " + err);
                reject(err);
            });
    });
}

async function convertAsyKey(rsaGenerator, pubKeyDataBlob, priKeyDataBlob) {
    return new Promise((resolve, reject) => {
        rsaGenerator
            .convertKey(pubKeyDataBlob, priKeyDataBlob)
            .then((convertKeyPair) => {
                console.log(
                    "[Promise]convertKey success. convertKeyPair is " + convertKeyPair
                );
                resolve(convertKeyPair);
            })
            .catch((err) => {
                console.error("[Promise]convertKey failed. error is " + err);
                reject(err);
            });
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

async function updateCipher(cipherGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        cipherGenerator
            .update(dataBlob)
            .then(() => {
                console.log("[Promise] cipherGenerator update success! dataBlob is : " + dataBlob);
                resolve("update success");
            })
            .catch((err) => {
                console.error(
                    "[Promise]cipherGenerator update failed. error is " +
                    err +
                    "dataBlob is " +
                    dataBlob
                );
                reject(err);
            });
    });
}

async function doFinalCipher(cipherGenerator, mode, dataBlob) {
    return new Promise((resolve, reject) => {
        cipherGenerator
            .doFinal(dataBlob)
            .then((finalData) => {
                console.log(
                    "[Promise]cipherGenerator doFinal success! mode is : " + mode
                );
                console.log(
                    "[Promise]cipherGenerator doFinal success! dataBlob is : " + dataBlob
                );
                resolve(finalData);
            })
            .catch((err) => {
                console.log(
                    "[Promise]cipherGenerator doFinal faailed dataBlob is : " + dataBlob
                );
                console.error(
                    "[Promise]cipherGenerator doFinal failed. error is " +
                    err +
                    "mode is " +
                    mode
                );
                reject(err);
            });
    });
}

async function initSign(signGenerator, priKey) {
    return new Promise((resolve, reject) => {
        signGenerator
            .init(priKey)
            .then(() => {
                console.log("[Promise]signGenerator init success!");
                resolve("init success");
            })
            .catch((err) => {
                console.error("[Promise]signGenerator init failed. error is " + err);
                reject(err);
            });
    });
}

async function updateSign(signGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        signGenerator
            .update(dataBlob)
            .then(() => {
                console.log("[Promise]signGenerator update success!");
                resolve("update success");
            })
            .catch((err) => {
                console.error("[Promise]signGenerator update failed. error is " + err);
                reject(err);
            });
    });
}

async function signForSign(signGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        signGenerator
            .sign(dataBlob)
            .then((signOutput) => {
                console.log("[Promise]signGenerator sign success!");
                resolve(signOutput);
            })
            .catch((err) => {
                console.error("[Promise]signGenerator sign failed. error is " + err);
                reject(err);
            });
    });
}

async function initVerify(verifyGenerator, pubKey) {
    return new Promise((resolve, reject) => {
        verifyGenerator
            .init(pubKey)
            .then(() => {
                console.log("[Promise]verifyGenerator init success!");
                resolve("init success");
            })
            .catch((err) => {
                console.error("[Promise]verifyGenerator init failed. error is " + err);
                reject(err);
            });
    });
}

async function updateVerify(verifyGenerator, dataBlob) {
    return new Promise((resolve, reject) => {
        verifyGenerator
            .update(dataBlob)
            .then(() => {
                console.log("[Promise]verifyGenerator update success!");
                resolve("update success");
            })
            .catch((err) => {
                console.error(
                    "[Promise]verifyGenerator update failed. error is " + err
                );
                reject(err);
            });
    });
}

async function verifyForVerify(verifyGenerator, dataBlob, signDataBlob) {
    return new Promise((resolve, reject) => {
        verifyGenerator
            .verify(dataBlob, signDataBlob)
            .then((verifyOutput) => {
                console.log("[Promise]signGenerator sign success!");
                resolve(verifyOutput);
            })
            .catch((err) => {
                console.error("[Promise]signGenerator sign failed. error is " + err);
                reject(err);
            });
    });
}

async function generateAsySecret(generator, priKey, pubKey) {
    return new Promise((resolve, reject) => {
        generator
            .generateSecret(priKey, pubKey)
            .then((output) => {
                console.log("[Promise]generateSecret success!");
                resolve(output);
            })
            .catch((err) => {
                console.error("[Promise]generateSecret failed. error is " + err);
                reject(err);
            });
    });
}

async function encryptAndDecryptNormalProcess(asyAlgoName, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        expect(rsaGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        var cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorDecrypt != null).assertTrue();

        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                expect(rsaKeyPair != null).assertTrue();
                globalRsaKeyPair = rsaKeyPair;
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                expect(finalOutput != null).assertTrue();
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDecrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                return doFinalCipher(cipherGeneratorDecrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                if (finalOutput == null) {
                    console.error("[promise]decrypt doFinal out is null");
                } else {
                    console.log("[promise]decrypt doFinal out hex: " +uInt8ArrayToShowStr(finalOutput.data));
                }
                let decryptData = uInt8ArrayToString(finalOutput.data);
                expect(decryptData == globalText).assertTrue();
                resolve();
            })
            .catch((err) => {
                console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
                reject(err);
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
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                let encodedPubKey = rsaKeyPair.pubKey.getEncoded();
                let encodedPriKey = rsaKeyPair.priKey.getEncoded();
                convertAsyKey(rsaGenerator, encodedPubKey, encodedPriKey);
                return initSign(signGenerator, globalRsaKeyPair.priKey);
            })
            .then(() => {
                return updateSign(signGenerator, input);
            })
            .then(() => {
                return signForSign(signGenerator, input);
            })
            .then((finalOutput) => {
                globalSignBlob = finalOutput;
                console.log("signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
                return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
            })
            .then(() => {
                return updateVerify(verifyGenerator, input);
            })
            .then(() => {
                return verifyForVerify(verifyGenerator, input, globalSignBlob);
            })
            .then(() => {
                resolve();
            })
            .catch((err) => {
                console.error("[promise] signAndVerifyNormalProcess catch err:" + err);
                reject(err);
            });
    });
}

//稳定性
async function convertKeyEncryptAndDecryptProcess(asyAlgoName) {
    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        expect(rsaGenerator != null).assertTrue();

        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                expect(rsaKeyPair != null).assertTrue();
                let encodedPubKey = rsaKeyPair.pubKey.getEncoded();
                let encodedPriKey = rsaKeyPair.priKey.getEncoded();
                return convertAsyKey(rsaGenerator, encodedPubKey, encodedPriKey);
            })
            .then((convertKeyPair) => {
                expect(convertKeyPair != null).assertTrue();
                let encodedConvertPubKey = convertKeyPair.pubKey.getEncoded();
                resolve();
            })
            .catch((err) => {
                console.error(
                    "[promise] convertKeyEncryptAndDecryptProcess catch err:" + err
                );
                reject(err);
            });
    });
}

async function keyAgreementProcess(ECDHAlgoName) {
    var globalRsaKeyPair;

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator("ECC521");
        var globalECDHData = createAsyKeyAgreement(ECDHAlgoName);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return generateAsySecret(globalECDHData, globalRsaKeyPair.priKey, globalRsaKeyPair.pubKey);
            })
            .then((result) => {
                console.warn("result data is " + uInt8ArrayToShowStr(result.data));
                resolve();
            })
            .catch((err) => {
                console.error("[promise] keyAgreementProcess catch err.code:" + err.code);
                expect(err.code == undefined).assertTrue();
                reject(err);
            });
    });
}

async function AsyPriKeyClearProcess(asyAlgoName) {
    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        expect(rsaGenerator != null).assertTrue();

        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                expect(rsaKeyPair != null).assertTrue();
                let result = rsaKeyPair.priKey.clearMem();
                console.log("result is: " + result);
                expect(result == undefined).assertTrue();
                resolve();
            })
            .catch((err) => {
                console.error("[promise] AsyPriKeyClearProcess catch err:" + err);
                reject(err);
            });
    });
}

async function keyAgreementGetAlgNmaeProcess(ECDHAlgoName) {
    var globalRsaKeyPair;

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(ECDHAlgoName);
        var globalECDHData = createAsyKeyAgreement(ECDHAlgoName);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return generateAsySecret(globalECDHData, globalRsaKeyPair.priKey, globalRsaKeyPair.pubKey);
            })
            .then((result) => {
                console.warn("result data is  " + uInt8ArrayToShowStr(result.data));
                console.info(
                    "[Promise]: globalECDHData.algName 1: " + ECDHAlgoName);
                console.info(
                    "[Promise]: globalECDHData.algName 2: " + globalECDHData.algName);
                resolve();
            })
            .catch((err) => {
                console.error("[promise] keyAgreementProcess catch err:" + err);
                expect(err.code == undefined).assertTrue();
                reject(err);
            });
    });
}

async function keyAgreementBySpecProcess(asyKeySpec, ECDHAlgoName) {
    var globalRsaKeyPair;

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let globalECDHData = createAsyKeyAgreement(ECDHAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            return generateAsySecret(globalECDHData, globalRsaKeyPair.priKey, globalRsaKeyPair.pubKey);
        })
            .then((result) => {
                console.warn("keyAgreementBySpecProcess result data is  " + uInt8ArrayToShowStr(result.data));
                resolve();
            })
            .catch((err) => {
                console.error("[promise] keyAgreementBySpecProcess catch err:" + err.code);
                expect(err.code == 401).assertTrue();
                reject(err);
            });
    });
}

async function encryptAndDecryptBySpecProcess(asyKeySpec, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDncrypt = createAsyCipher(cipherAlgoName);
        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher1");
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                expect(finalOutput != null).assertTrue();
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDncrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                return doFinalCipher(cipherGeneratorDncrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                if (finalOutput == null) {
                    console.error("[Promise]: encryptAndDecryptNormalProcess decrypt doFinal out is null");
                } else {
                    console.log("[Promise]:  decrypt doFinal out hex: " + uInt8ArrayToShowStr(finalOutput.data));
                }
                let decryptData = uInt8ArrayToString(finalOutput.data);
                expect(decryptData == globalText).assertTrue();
                resolve();
            })
            .catch((err) => {
                console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
                reject(err);
            });
    });
}

async function encryptAndDecryptTimesProcess(asyKeySpec, cipherAlgoName) {
    return new Promise((resolve, reject) => {
        for (let i = 0; i < 1000; i++) {
            try {
                encryptAndDecryptBySpecProcess(asyKeySpec, cipherAlgoName)
                    .then((data) => {
                        console.info("encryptAndDecryptTimesProcess data " + data)
                    })
                console.info("encryptAndDecryptTimesProcess success")
                resolve()
            } catch (err) {
                console.info("encryptAndDecryptBySpecProcess faile");
                reject(err);
            }
        }
    })
}

async function createCipherFail(asyKeySpec) {
    try {
        cryptoFramework.createCipher(asyKeySpec);
        console.info("createCipherFail catch  error failed");
    } catch (err) {
        console.error("createCipherFail catch  error success: " + err);
        expect(err == "Error: create C cipher fail!").assertTrue();
    }
}

async function createCipherMultipleParameters(asyKeySpec1, asyKeySpec2) {
    try {
        cryptoFramework.createCipher(asyKeySpec1, asyKeySpec2);
        console.info("createCipherMultipleParameters catch  error failed");
    } catch (err) {
        console.error("createCipherMultipleParameters catch  error success: " + err);
        expect(err.code == 401).assertTrue();
    }
}

async function createCipherFewParameters() {
    try {
        cryptoFramework.createCipher();
        console.info("createCipherFewParameters catch  error failed");
    } catch (err) {
        console.error("createCipherFewParameters catch  error success: " + err);
        expect(err.code == 401).assertTrue();
    }
}

async function initCipherFail(asyAlgoName, cipherAlgoName, mode, params, state) {
    var keyPair;
    var asyGenerator = createAsyKeyGenerator(asyAlgoName);
    console.info("asyGenerator " + asyGenerator)
    expect(asyGenerator != null).assertTrue();
    var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
    console.info("cipherGeneratorEncrypt " + cipherGeneratorEncrypt)
    expect(cipherGeneratorEncrypt != null).assertTrue();
    asyGenerator.generateKeyPair()
        .then((asyKeyPair) => {
            keyPair = asyKeyPair;
        })
    if (state == false) {
        keyPair = null;
    }
    try {
        cipherGeneratorEncrypt.init(mode, keyPair, params);
        console.info("initCipherFail failed")
    } catch (err) {
        console.info("initCipherFail success")
        expect(err.code == 401).assertTrue();
    }
}


async function initCipherMultipleParameters(asyAlgoName, cipherAlgoName, mode, params, state) {
    var keyPair;
    var asyGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(asyGenerator != null).assertTrue();
    var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
    expect(cipherGeneratorEncrypt != null).assertTrue();
    asyGenerator.generateKeyPair()
        .then((asyKeyPair) => {
            keyPair = asyKeyPair;
        })
    if (state == false) {
        keyPair = null;
    }
    try {
        cipherGeneratorEncrypt.init(mode, keyPair, params, state);
        console.info("initCipherMultipleParameters failed")
    } catch (err) {
        console.info("initCipherMultipleParameters success")
        expect(err.code == 401).assertTrue();
    }
}


async function initCipherFewParameters(asyAlgoName, cipherAlgoName, mode, params, state) {
    var keyPair;
    var asyGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(asyGenerator != null).assertTrue();
    var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
    expect(cipherGeneratorEncrypt != null).assertTrue();
    asyGenerator.generateKeyPair()
        .then((asyKeyPair) => {
            keyPair = asyKeyPair;
        })
    if (state == false) {
        keyPair = null;
    }
    try {
        cipherGeneratorEncrypt.init();
        console.info("initCipherFewParameters failed")
    } catch (err) {
        console.info("initCipherFewParameters success")
        expect(err.code == 401).assertTrue();
    }
}

async function updateCipherFailed(asyKeySpec, cipherAlgoName, state) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDecrypt;
        if (state) {
            cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        } else {
            cipherGeneratorDecrypt = createAsyCipher("3DES192|ECB|PKCS7");
        }
        expect(cipherGeneratorDecrypt != null).assertTrue();

        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher1");
                return initCipher(
                    cipherGeneratorEncrypt,
                    encryptMode,
                    globalRsaKeyPair.pubKey,
                    null
                );
            })
        try {
            updateCipher(cipherGeneratorDecrypt, null)
            console.info("updateCipherfailed catch err failed")
            resolve();
        } catch (err) {
            expect(err.code == 401).assertTrue();
            console.info("updateCipherfailed catch err success")
        }
    })
}


async function updateCipherMultipleParameters(asyKeySpec, cipherAlgoName, state) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDecrypt;
        if (state) {
            cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        } else {
            cipherGeneratorDecrypt = createAsyCipher("3DES192|ECB|PKCS7");
        }
        expect(cipherGeneratorDecrypt != null).assertTrue();

        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                return initCipher(
                    cipherGeneratorEncrypt,
                    encryptMode,
                    globalRsaKeyPair.pubKey,
                    null
                );
            })
        try {
            cipherGeneratorDecrypt.update(input, input)
            resolve();
        } catch (err) {
            expect(err.code == 401).assertTrue();
            console.info("updateCipherMultipleParameters catch err success")
            reject(err)
        }
    })
}


async function updateCipherFewParameters(asyKeySpec, cipherAlgoName, state) {
    var globalRsaKeyPair;
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDecrypt;
        if (state) {
            cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        } else {
            cipherGeneratorDecrypt = createAsyCipher("3DES192|ECB|PKCS7");
        }
        expect(cipherGeneratorDecrypt != null).assertTrue();

        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                return initCipher(
                    cipherGeneratorEncrypt,
                    encryptMode,
                    globalRsaKeyPair.pubKey,
                    null
                );
            })
        try {
            cipherGeneratorDecrypt.update();
            resolve();
        } catch (err) {
            expect(err.code == 401).assertTrue();
            console.info("updateCipherFewParameters catch err success")
            reject(err)
        }
    })
}

async function doFinalCipherFailed(asyKeySpec, cipherAlgoName, state) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDecrypt;
        if (state) {
            cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        } else {
            cipherGeneratorDecrypt = createAsyCipher("3DES192|ECB|PKCS7");
        }
        expect(cipherGeneratorDecrypt != null).assertTrue();

        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher1");
            })
        if (state) {
            try {
                cipherGeneratorDecrypt.doFinal(input)
                resolve()
            } catch (err) {
                console.info("doFinalCipherfailed catch err success")
                expect(err.code == 401).assertTrue();
                reject(err);
            }
        } else {
            initCipher(cipherGeneratorDecrypt, encryptMode, globalRsaKeyPair, null);
            try {
                cipherGeneratorDecrypt.doFinal(null)
                resolve()
            } catch (err) {
                console.info("doFinalCipherfailed catch err success")
                expect(err.code == 401).assertTrue();
                reject(err);
            }
        }
    });
}


async function doFinalCipherMultipleParameters(asyKeySpec, cipherAlgoName) {
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        expect(specGenerator != null).assertTrue();
        let cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorDecrypt != null).assertTrue();
        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher1");
            })
        initCipher(cipherGeneratorDecrypt, encryptMode, globalRsaKeyPair, null);
        try {
            cipherGeneratorDecrypt.doFinal(input, input)
            console.info("doFinalCipherMultipleParameters catch err failed")
            resolve()
        } catch (err) {
            console.info("doFinalCipherMultipleParameters catch err success")
            expect(err.code == 401).assertTrue();
            reject(err);
        }
    });
}

async function doFinalCipherFewParameters(asyKeySpec, cipherAlgoName) {
    var globalRsaKeyPair;
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        expect(specGenerator != null).assertTrue();
        let cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorDecrypt != null).assertTrue();
        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher1");
            })
        initCipher(cipherGeneratorDecrypt, encryptMode, globalRsaKeyPair, null);
        try {
            cipherGeneratorDecrypt.doFinal()
            console.info("doFinalCipherFewParameters catch err failed")
            resolve()
        } catch (err) {
            console.info("doFinalCipherFewParameters catch err success")
            expect(err.code == 401).assertTrue();
            reject(err);
        }
        resolve()
    });
}

async function encryptSetAndGetSpecInitProcess(asyKeySpec, cipherAlgoName, state) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;
    var pSource = new Uint8Array([1, 2, 3, 4]);
    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDecrypt;
        if (state) {
            cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        } else {
            cipherGeneratorDecrypt = createAsyCipher("3DES192|ECB|PKCS7");
        }
        expect(cipherGeneratorDecrypt != null).assertTrue();
        cipherGeneratorDecrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
        cipherGeneratorDecrypt.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher1");
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                expect(finalOutput != null).assertTrue();
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDecrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                resolve();
            })
            .catch((err) => {
                console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
                reject(err);
            });
    });
}

async function encryptInitSetAndGetSpecProcess(asyKeySpec, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;
    var pSource = new Uint8Array([1, 2, 3, 4]);
    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorDecrypt != null).assertTrue();
        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then((initData) => {
                cipherGeneratorEncrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
                cipherGeneratorEncrypt.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
                expect(initData === "init success").assertTrue();
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                expect(finalOutput != null).assertTrue();
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDecrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                cipherGeneratorDecrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
                cipherGeneratorDecrypt.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
                return doFinalCipher(cipherGeneratorDecrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                let decryptData = uInt8ArrayToString(finalOutput.data);
                expect(decryptData == globalText).assertTrue();
                resolve();
            })
            .catch((err) => {
                console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
                reject(err);
            });
    });
}

async function encryptGetSpecFail(asyKeySpec, cipherAlgoName) {
    var pSource = new Uint8Array([1, 2, 3, 4]);
    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        cipherGeneratorEncrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
        try {
            cipherGeneratorEncrypt.getCipherSpec(10);
            resolve()
        } catch (err) {
            expect(err.code == 401).assertTrue();
            reject(err);
        }
        ;
        try {
            cipherGeneratorEncrypt.getCipherSpec();
            resolve()
        } catch (err) {
            expect(err.code == 401).assertTrue();
            reject(err);
        }
        ;
    });
}

async function encryptGetAlgName(asyKeySpec, cipherAlgoName) {
    var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
    try {
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt.algName != null).assertTrue();
    } catch (err) {
        console.info("[promise] encryptGetAlgName failed");
    }
}

async function signAndVerifyBySpecProcess(asyKeySpec, signVerifyAlgoName) {
    var globalRsaKeyPair;
    var globalSignBlob;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };
    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let verifyGenerator = createAsyVerify(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then(() => {
            return updateSign(signGenerator, input);
        }).then(() => {
            return signForSign(signGenerator, input);
        }).then((finalOutput) => {
            globalSignBlob = finalOutput;
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then(() => {
            return updateVerify(verifyGenerator, input);
        }).then(() => {
            return verifyForVerify(verifyGenerator, input, globalSignBlob);
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[promise] signAndVerifyBySpecProcess catch err:" + err);
            reject(err);
        });
    });
}

async function signAndVerifySetAndGetSpecProcess(asyKeySpec, signVerifyAlgoName, itemType, itemValue) {
    var globalRsaKeyPair;
    var globalSignBlob;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };
    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let verifyGenerator = createAsyVerify(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then(() => {
            signGenerator.setSignSpec(itemType, itemValue);
            verifyGenerator.setVerifySpec(itemType, itemValue);
            return updateSign(signGenerator, input);
        }).then(() => {
            return signForSign(signGenerator, input);
        }).then((finalOutput) => {
            globalSignBlob = finalOutput;
            console.log("[promise] signAndVerifySetAndGetSpecProcess signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then(() => {
            return updateVerify(verifyGenerator, input);
        }).then(() => {
            return verifyForVerify(verifyGenerator, input, globalSignBlob);
        }).then((finalStatus) => {
            expect(finalStatus).assertTrue();
            let signSpec = signGenerator.getSignSpec(itemType);
            console.log("[promise] signAndVerifySetAndGetSpecProcess getSignSpec :" + signSpec);
            let verifySpec = verifyGenerator.getVerifySpec(itemType);
            console.log("[promise] signAndVerifySetAndGetSpecProcess getSignSpec :" + verifySpec);
            resolve();
        }).catch((err) => {
            console.error("[promise] signAndVerifySetAndGetSpecProcess catch err:" + err);
            reject(err);
        });
    });
}

async function convertKeyEncryptAndDecryptstabilityProcess() {
    return new Promise((resolve, reject) => {
        try {
            const starttimestamp = Date.parse(new Date());
            console.info("[promise] convertKeyEncryptAndDecryptstabilityProcess start time is :" + starttimestamp);
            for (let index = 0; index < 1000; index++) {
                console.info("[promise] convertKeyEncryptAndDecryptstabilityProcess start index:" + index);
                //sleep(600);
                convertKeyEncryptAndDecryptProcess("DSA1024");
                console.info("[promise] convertKeyEncryptAndDecryptstabilityProcess index:" + index);
            }
            const endtimestamp = Date.parse(new Date());
            console.info("convertKeyEncryptAndDecryptstabilityProcess end time is :" + endtimestamp);
            let timeconsum = endtimestamp - starttimestamp;
            console.info("convertKeyEncryptAndDecryptstabilityProcess timeconsum is :" + timeconsum);
            resolve();
        }
        catch (err) {
            console.error("[promise] convertKeyEncryptAndDecryptstabilityProcess catch err:" + err);
            reject(err);
        }
        ;
    });
}

async function updateAbnormalParameterProcess(asyKeySpec, signVerifyAlgoName, updateType) {
    var globalRsaKeyPair;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            if (updateType == 4) {
                return signGenerator.update(input);
            }
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then(() => {
            switch (updateType) {
                case 0:
                    return updateSign(signGenerator);
                    break;
                case 1:
                    return updateSign(signGenerator, null);
                    break;
                case 2:
                    return updateSign(signGenerator, "");
                    break;
                case 3:
                    for (let i = 1; i < 1000; i++) {
                        signGenerator.update(input);
                    }
                    return updateSign(signGenerator, input);
                    break;
                default:
                    return updateSign(signGenerator, input);
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[promise] updateAbnormalParameterProcess catch err:" + err);
            console.error("[promise] updateAbnormalParameterProcess catch err.code:" + err.code);
            reject(err);
        });
    });
}

async function signAbnormalSetFillProcess(algNameKey, algNameSign, itemValue, initState, fillState) {
    var globalKeyPair;
    var rsaGenerator;
    var signer;
    return new Promise((resolve, reject) => {
        rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
        signer = cryptoFramework.createSign(algNameSign);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalKeyPair = rsaKeyPair;
                let priKey = globalKeyPair.priKey;
                if (initState == 0) {
                    return signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
                }
                else {
                    return initSign(signer,  priKey);
                }
            }).then(() => {
            switch (fillState) {
                case 0:
                    return signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
                    break;
                case 1:
                    return signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM);
                    break;
                case 2:
                    return signer.setSignSpec(1024, itemValue);
                    break;
                case 3:
                    return signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue, itemValue);
                    break;
                case 4:
                    return signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
                    break;
                case 5:
                    return signer.setSignSpec();
                    break;
                default:
                    return signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[promise] catch err:" + err);
            expect(err.code == 401).assertTrue();
            reject(err);
        });
    });
}

async function verifyAbnormalParameterProcess(asyKeySpec, verifyAlgoName, verifyType) {
    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        expect(specGenerator != null).assertTrue();
        if (verifyType == 0) {
            createAsyVerify().then(() => {
                resolve();
            }).catch((err) => {
                console.error("[promise] verifyAbnormalParameterProcess catch err:" + err);
                reject(err);
            });
        }
        if (verifyType == 1) {
            createAsyVerify(verifyAlgoName).then(() => {
                resolve();
            }).catch((err) => {
                console.error("[promise] verifyAbnormalParameterProcess catch err:" + err);
                reject(err);
            });
        }
    });
}

async function verifyUpdateAbnormalParameterProcess(asyKeySpec, signVerifyAlgoName, updateType) {
    var globalRsaKeyPair;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let verifyGenerator = createAsyVerify(signVerifyAlgoName);
        generateAsyKeyPair(specGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return initSign(signGenerator, globalRsaKeyPair.priKey);
            }).then(() => {
            return updateSign(signGenerator, input);
        }).then(() => {
            return signForSign(signGenerator, input);
        }).then(() => {
            if (updateType == 5) {
                return updateVerify(verifyGenerator, input);
            }
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then(() => {
            if (updateType == 0) {
                return verifyGenerator.update();
            } else if (updateType == 1) {
                return updateVerify(verifyGenerator, null);
            } else if (updateType == 3) {
                return updateVerify(verifyGenerator, "");
            } else if (updateType == 4) {
                for (let i = 1; i < 1000; i++) {
                    updateVerify(verifyGenerator, input);
                }
                return updateVerify(verifyGenerator, input);
            }
            return updateVerify(verifyGenerator, input);
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[promise] VerifyUpdateAbnormalParameterProcess catch err:" + err);
            reject(err);
        });
    });
}

async function verifyAbnormalSetFillProcess(algNameKey, algNameSign, itemValue, state, fillState) {
    var globalKeyPair;
    var rsaGenerator;
    var verify;
    return new Promise((resolve, reject) => {
        rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
        verify = cryptoFramework.createVerify(algNameSign);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalKeyPair = rsaKeyPair;
                let pubKey;
                if (state == 0) {
                    return verify.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
                }
                if (state == 1) {
                    pubKey = globalKeyPair.pubKey;
                    return initVerify(verify, pubKey);
                }
            }).then(() => {
            switch (fillState) {
                case 0:
                    return verify.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
                    break;
                case 1:
                    return verify.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM);
                    break;
                case 2:
                    return verify.setSignSpec(1024, itemValue);
                    break;
                case 3:
                    return verify.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue, itemValue);
                    break;
                case 4:
                    return verify.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
                    break;
                case 5:
                    return verify.setSignSpec();
                    break;
                default:
                    return verify.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, itemValue);
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[promise] catch err:" + err.code);
            expect(err.code == undefined).assertTrue();
            reject(err);
        });
    });
}

async function signAndVerifyGetAlgNameProcess(signVerifyAlgoName) {
    return new Promise((resolve, reject) => {
        try {
            let signGenerator = createAsySign(signVerifyAlgoName);
            console.info("[Promise] signGenerator.algName : " + signGenerator.algName);
            let verifyGenerator = createAsyVerify(signVerifyAlgoName);
            console.info("[Promise] verifyGenerator.algName : " + verifyGenerator.algName);
            resolve();
        }
        catch (err) {
            console.error("[promise] signAndVerifyBySpecProcess catch err:" + err);
            reject(err);
        }
    });
}

async function keyGenerationBySpecProcess(asyKeySpec) {
    return new Promise((resolve, reject) => {
        try {
            var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
            expect(specGenerator != null).assertTrue();
            let keypair = specGenerator.generateKeyPair();
            expect(keypair != null).assertTrue();
            let pubkey = keypair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_PK_BN);
            let prikey = keypair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
            var rsaGenerator = createAsyKeyGenerator("DSA2048");
            let conkeypair = rsaGenerator.convertKey(pubkey, prikey);
            let encodedPubKey = conkeypair.pubKey.getEncoded();
            let encodedPriKey = conkeypair.priKey.getEncoded();
            expect(pubkey == encodedPubKey).assertTrue();
            expect(prikey == encodedPriKey).assertTrue();
            resolve();
        } catch (err) {
            console.error("[promise] convertKeyEncryptAndDecryptProcess catch err:" + err);
            reject(err);
        }
    });
}

export {
    encryptAndDecryptNormalProcess,
    signAndVerifyNormalProcess,
    convertKeyEncryptAndDecryptProcess,
    keyAgreementProcess,
    AsyPriKeyClearProcess,
    keyAgreementGetAlgNmaeProcess,
    encryptAndDecryptBySpecProcess,
    keyAgreementBySpecProcess,
    encryptAndDecryptTimesProcess,
    createCipherFail,
    createCipherMultipleParameters,
    createCipherFewParameters,
    initCipherFail,
    initCipherMultipleParameters,
    initCipherFewParameters,
    updateCipherFailed,
    updateCipherMultipleParameters,
    updateCipherFewParameters,
    doFinalCipherFailed,
    doFinalCipherMultipleParameters,
    doFinalCipherFewParameters,
    encryptSetAndGetSpecInitProcess,
    encryptInitSetAndGetSpecProcess,
    encryptGetSpecFail,
    encryptGetAlgName,
    signAndVerifyBySpecProcess,
    signAndVerifySetAndGetSpecProcess,
    convertKeyEncryptAndDecryptstabilityProcess,
    updateAbnormalParameterProcess,
    signAbnormalSetFillProcess,
    verifyAbnormalParameterProcess,
    verifyUpdateAbnormalParameterProcess,
    verifyAbnormalSetFillProcess,
    signAndVerifyGetAlgNameProcess,
    keyGenerationBySpecProcess,
};
