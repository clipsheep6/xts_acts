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

async function convertAsyKey(rsaGenerator, pubKeyDataBlob, priKeyDataBlob) {
    return new Promise((resolve, reject) => {
        rsaGenerator.convertKey(
            pubKeyDataBlob,
            priKeyDataBlob,
            (err, convertKeyPair) => {
                if (err) {
                    console.error("[Callback]convertKey failed. error is " + err);
                    reject(err);
                } else {
                    console.log("[Callback]convertKey success. convertKeyPair is " + convertKeyPair);
                    resolve(convertKeyPair);
                }
            }
        );
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
        signGenerator.sign(dataBlob, (err, signOutput) => {
            if (err) {
                console.error("[Callback]signGenerator sign failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback]signGenerator sign success!");
                resolve(signOutput);
            }
        });
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
                console.log("[Callback]signGenerator sign success!");
                resolve(verifyOutput);
            }
        });
    });
}

async function generateAsySecret(generator, priKey, pubKey) {
    return new Promise((resolve, reject) => {
        generator.generateSecret(priKey, pubKey, (err, output) => {
            if (err) {
                console.error("[Callback]generateSecret failed. error is " + err);
                reject(err);
            } else {
                console.log("[Callback]generateSecret success!");
                resolve(output);
            }
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
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        var cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);

        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDecrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorDecrypt, decryptMode, globalCipherText);
            })
            .then(() => {
                resolve();
            })
            .catch((err) => {
                console.error("[Callback] encryptAndDecryptNormalProcess catch err:" + err);
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
            }).then(() => {
            return updateSign(signGenerator, input);
        }).then(() => {
            return signForSign(signGenerator, input);
        }).then((finalOutput) => {
            globalSignBlob = finalOutput;
            console.log("signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then(() => {
            return updateVerify(verifyGenerator, input);
        }).then(() => {
            return verifyForVerify(verifyGenerator, input, globalSignBlob);
        }).then(() => {
            resolve();
        })
        .catch((err) => {
            console.error("[Callback] signAndVerifyNormalProcess catch err:" + err);
            reject(err);
        });
    });
}

async function convertKeyEncryptAndDecryptProcess(asyAlgoName) {
    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);

        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                let encodedPubKey = rsaKeyPair.pubKey.getEncoded();
                let encodedPriKey = rsaKeyPair.priKey.getEncoded();
                return convertAsyKey(rsaGenerator, encodedPubKey, encodedPriKey);
            })
            .then((convertKeyPair) => {
                let encodedConvertPubKey = convertKeyPair.pubKey.getEncoded();
                console.warn("[Callback]: pubKey.getAlgorithm= " + convertKeyPair.pubKey.algName);
                console.warn("[Callback]: pubKey.getEncoded= " + encodedConvertPubKey.data);
                console.warn("[Callback]: pubKey.getFormat= " + convertKeyPair.pubKey.format);
                let encodedConvertPriKey = convertKeyPair.priKey.getEncoded();
                console.warn("[Callback]: priKey.getAlgorithm= " + convertKeyPair.priKey.algName);
                console.warn("[Callback]: priKey.getEncoded= " + encodedConvertPriKey.data);
                console.warn("[Callback]: priKey.getFormat= " + convertKeyPair.priKey.format);
                resolve();
            })
            .catch((err) => {
                console.error("[Callback] convertKeyEncryptAndDecryptProcess catch err:" + err);
                reject(err);
            });
    });
}

async function createAsyKeyAgreementFail(ECDHAlgoName) {
    return new Promise((resolve, reject) => {
        var globalECDHData = createAsyKeyAgreement(ECDHAlgoName);
        resolve(globalECDHData);
        expect(globalECDHData == "TypeError: Cannot read property algName of undefined").assertTrue();
        if (globalECDHData != "TypeError: Cannot read property algName of undefined") {
            reject();
        }
    });
}

async function keyAgreementProcess(ECDHAlgoName) {
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
                resolve();
            })
            .catch((err) => {
                console.error("[Callback] keyAgreementProcess catch err:" + err);
                reject(err);
            });
    });
}

async function keyAgreementProcessFail(ECDHAlgoName, ECDHAlgoName1) {
    var globalRsaKeyPair;

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(ECDHAlgoName);
        var globalECDHData = createAsyKeyAgreement(ECDHAlgoName1);

        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return generateAsySecret(globalECDHData, globalRsaKeyPair.priKey, globalRsaKeyPair.pubKey);
            })
            .then((result) => {
                console.warn("result data is  " + uInt8ArrayToShowStr(result.data));
                reject();
            })
            .catch((err) => {
                console.error("[Callback] keyAgreementProcess catch err:" + err);
                resolve(err);
            });
    });
}

async function keyAgreementProcessParameterException(ECDHAlgoName) {
    var globalRsaKeyPair;

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(ECDHAlgoName);
        var globalECDHData = createAsyKeyAgreement(ECDHAlgoName);

        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return generateAsySecret(globalECDHData, null, null);
            })
            .then((result) => {
                console.warn("result data is  " + uInt8ArrayToShowStr(result.data));
            })
            .catch((err) => {
                expect(err == "Error: [PriKey]: param unwarp error.").assertTrue();
            });
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return generateAsySecret(globalECDHData, globalRsaKeyPair.pubKey, null);
            })
            .then((result) => {
                console.warn("result data is  " + uInt8ArrayToShowStr(result.data));
            })
            .catch((err) => {
                expect(err == "Error: [PubKey]: param unwarp error.").assertTrue();
                reject(err);
            });
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return generateAsySecret(globalECDHData, null, globalRsaKeyPair.priKey);
            })
            .then((result) => {
                console.warn("result data is  " + uInt8ArrayToShowStr(result.data));
                reject();
            })
            .catch((err) => {
                expect(err == "Error: [PriKey]: param unwarp error.").assertTrue();
                resolve(err);
            });
    });
}

async function createAsyKeyGeneratorFail(asyAlgoName) {

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        resolve(rsaGenerator);
        expect(rsaGenerator == "TypeError: Cannot read property algName of null").assertTrue();
        if (rsaGenerator != "TypeError: Cannot read property algName of null") {
            reject();
        }
    });
}

async function encryptAndDecryptNormalProcessSuperdata(asyAlgoName, cipherAlgoName, globalTextLen) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText;
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;
    var t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefhijklmnopqrstuvwxyz";
    var n = t.length;
    for (let i = 0; i < globalTextLen; i++) {
        globalText += t.charAt(Math.floor(Math.random() * n));
    }
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        var cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDecrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorDecrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                if (finalOutput == null) {
                    console.error("[Callback]decrypt doFinal out is null");
                } else {
                    console.log("[Callback]decrypt doFinal out hex: " + uInt8ArrayToShowStr(finalOutput.data));
                }
                resolve();
            })
            .catch((err) => {
                console.error("[Callback] encryptAndDecryptNormalProcess catch err:" + err);
                reject(err);
            });
    });
}

async function encryptAndDecryptNormalProcessNull(asyAlgoName, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;
    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        var cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalRsaKeyPair = rsaKeyPair;
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, null);
            })
            .then((finalOutput) => {
                globalCipherText = finalOutput;
                console.log("cipherOutput: " + uInt8ArrayToShowStr(globalCipherText.data));
                return initCipher(cipherGeneratorDecrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorDecrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                if (finalOutput == null) {
                    console.error("[Callback]decrypt doFinal out is null");
                } else {
                    console.log("[Callback]decrypt doFinal out hex: " + uInt8ArrayToShowStr(finalOutput.data));
                }
                reject();
            })
            .catch((err) => {
                console.error("[Callback] encryptAndDecryptNormalProcess catch err:" + err);
                resolve(err);
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
            signGenerator.setSignSpec(itemType, itemValue);
            verifyGenerator.setVerifySpec(itemType, itemValue);
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then(() => {
            return updateSign(signGenerator, input);
        }).then(() => {
            return signForSign(signGenerator, input);
        }).then((finalOutput) => {
            globalSignBlob = finalOutput;
            console.log("[callback] signAndVerifySetAndGetSpecProcess signOutput: " +
            uInt8ArrayToShowStr(globalSignBlob.data));
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then(() => {
            return updateVerify(verifyGenerator, input);
        }).then(() => {
            return verifyForVerify(verifyGenerator, input, globalSignBlob);
        }).then(() => {
            let signSpec = signGenerator.getSignSpec(itemType);
            console.log("[callback] signAndVerifySetAndGetSpecProcess getSignSpec :" + signSpec);
            let verifySpec = verifyGenerator.getVerifySpec(itemType);
            console.log("[callback] signAndVerifySetAndGetSpecProcess getSignSpec :" + verifySpec);
            resolve();
        }).catch((err) => {
            console.error("[promise] signAndVerifySetAndGetSpecProcess catch err:" + err);
            reject(err);
        });
    });
}

async function createCipherFail(cipherAlgoName) {
    try {
        cryptoFramework.createCipher(null);
    } catch (err) {
        console.error("createCipherFail catch  error success: " + err);
        expect(err == "Error: create C cipher fail!").assertTrue();
    }
    try {
        cryptoFramework.createCipher(cipherAlgoName);
        console.info("createCipherFail catch  error failed");
    } catch (err) {
        console.error("createCipherFail catch  error success: " + err);
        expect(err == "Error: create C cipher fail!").assertTrue();
    }
}

async function encryptAndDecryptBySpecProcess(asyKeySpec, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        console.info("11111111 cipherGeneratorEncrypt" + cipherGeneratorEncrypt);
        let cipherGeneratorDncrypt = createAsyCipher(cipherAlgoName);

        specGenerator.generateKeyPair().then((specKeyPair) => {
                globalRsaKeyPair = specKeyPair;
                console.info("[callback] encryptAndDecryptBySpecProcess initCipher1");
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then(() => {
                console.info("[callback] encryptAndDecryptBySpecProcess doFinalCipher1");
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                globalCipherText = finalOutput;
                return initCipher(cipherGeneratorDncrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorDncrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                if (finalOutput == null) {
                    console.error("[Callback]encryptAndDecryptNormalProcess decrypt doFinal out is null");
                } else {
                    console.log("[Callback] decrypt doFinal out hex: " + uInt8ArrayToShowStr(finalOutput.data));
                }
                let decryptData = uInt8ArrayToString(finalOutput.data);
                expect(decryptData == globalText).assertTrue();
                resolve();
            })
            .catch((err) => {
                console.error("[Callback] encryptAndDecryptBySpecProcess catch err:" + err);
                reject(err);
            });
    });
}

async function signAndVerifyBySpecAbnormalParameterProcess(asyKeySpec, signVerifyAlgoName, initType) {
    var globalRsaKeyPair;
    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            switch (initType) {
                case 0:
                    return initSign(signGenerator);
                    break;
                case 1:
                    return initSign(signGenerator, null);
                    break;
                case 2:
                    return initSign(signGenerator, globalRsaKeyPair.priKey);
                    break;
                case 3:
                    return initSign(signGenerator, "sroundpriKey");
                    break;
                default:
                    return initSign(signGenerator, globalRsaKeyPair.priKey);
                    break;
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[callback] signAndVerifyBySpecAbnormalParameterProcess catch err:" + err);
            console.error("[callback] signAndVerifyBySpecAbnormalParameterProcess catch err.code:" + err.code);
            reject(err);
        });
    });
}

async function signAbnormalParameterProcess(asyKeySpec, signVerifyAlgoName, signType) {
    var globalRsaKeyPair;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let signGenerator = createAsySign(signVerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            if (signType == 3) {
                return signGenerator.sign(input);
            }
            return initSign(signGenerator, globalRsaKeyPair.priKey);
        }).then(() => {
            switch (signType) {
                case 0:
                    return signForSign(signGenerator);
                    break;
                case 1:
                    return signForSign(signGenerator, null);
                    break;
                case 2:
                    return signForSign(signGenerator, "");
                    break;
                default:
                    return signForSign(signGenerator, input);
                    break;
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[callback] signAndVerifySignAbnormalParameterProcess catch err:" + err);
            console.error("[callback] signAndVerifySignAbnormalParameterProcess catch err.code:" + err.code);
            reject(err);
        });
    });
}

async function SignAbnormalGetFillProcess(algNameKey, algNameSign, itemType, initstate, fillState) {
    var globalKeyPair;
    var rsaGenerator;
    var signer;

    return new Promise((resolve, reject) => {
        rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
        signer = cryptoFramework.createSign(algNameSign);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalKeyPair = rsaKeyPair;
                let priKey;
                if (initstate == 0) {
                    return signer.getSignSpec(itemType);
                }
                else {
                    priKey = globalKeyPair.priKey;
                    return signer.init(priKey);
                }
            }).then(() => {
            switch (fillState) {
                case 0:
                    return signer.getSignSpec();
                    break;
                case 1:
                    return signer.getSignSpec(itemType);
                    break;
                case 2:
                    return signer.getSignSpec(itemType, itemType);
                    break;
                default:
                    return signer.getSignSpec(itemType);
                    break;
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[SignAbnormalGetFillProcess]catch err:" + err);
            console.error("[SignAbnormalGetFillProcess]catch err.code:" + err.code);
            expect(err.code == 401).assertTrue();
            reject(err);
        });
    });
}

async function encryptSetSpecFail(asyKeySpec, cipherAlgoName) {
    var pSource = new Uint8Array([1, 2, 3, 4]);
    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("specGenerator " + specGenerator)
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        try {
            cipherGeneratorEncrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, null);
            resolve()
        } catch (err) {
            console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
            expect(err.code == 401).assertTrue();
            reject(err);
        }
        try {
            cipherGeneratorEncrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, 12456);
            resolve()
        } catch (err) {
            console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
            expect(err.code == 401).assertTrue();
            reject(err);
        }
        try {
            cipherGeneratorEncrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, "asdfr");
            resolve()
        } catch (err) {
            console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
            expect(err.code == 401).assertTrue();
            reject(err);
        }
        try {
            cipherGeneratorEncrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, "asdfr", pSource);
            resolve()
        } catch (err) {
            console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
            expect(err.code == 401).assertTrue();
            reject(err);
        }
        try {
            cipherGeneratorEncrypt.setCipherSpec();
            resolve()
        } catch (err) {
            console.error("[promise] encryptAndDecryptNormalProcess catch err:" + err);
            expect(err.code == 401).assertTrue();
            reject(err);
        }
    });
}

async function encryptSetAndGetSpecInitProcess(asyKeySpec, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;
    var pSource = new Uint8Array([1, 2, 3, 4]);

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        let cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);

        cipherGeneratorEncrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
        let retP = cipherGeneratorEncrypt.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
        if (retP.toString() != pSource.toString()) {
            console.info("error init pSource" + retP);
        } else {
            console.info("pSource changed ==" + retP);
        }
        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                globalRsaKeyPair = specKeyPair;
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                globalCipherText = finalOutput;
                cipherGeneratorDecrypt.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
                cipherGeneratorDecrypt.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
                return initCipher(cipherGeneratorDecrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorDecrypt, decryptMode, globalCipherText);
            })
            .then((finalOutput) => {
                let decryptData = uInt8ArrayToString(finalOutput.data);
                expect(decryptData == globalText).assertTrue();
                resolve();
            })
            .catch((err) => {
                console.error("[Callback] encryptAndDecryptBySpecProcess catch err:" + err);
                reject(err);
            });
    });
}

async function VerifyInitParameterProcess(asyKeySpec, VerifyAlgoName, initType) {
    var globalSignBlob;
    var globalRsaKeyPair;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };
    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let verifyGenerator = createAsyVerify(VerifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            switch (initType) {
                case 0:
                    return initVerify(verifyGenerator);
                    break;
                case 1:
                    return initVerify(verifyGenerator, null);
                    break;
                case 2:
                    return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
                    break;
                case 3:
                    return initVerify(verifyGenerator, "sroundpriKey");
                    break;
                default:
                    return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
                    break;
            }
        }).then(() => {
            return updateVerify(verifyGenerator, input);
        }).then(() => {
            return verifyForVerify(verifyGenerator, input, globalSignBlob);
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[callback] VerifyInitParameterProcess catch err:" + err);
            console.error("[callback] VerifyInitParameterProcess catch err.code:" + err.code);
            reject(err);
        });
    });
}

async function verifyAbnormalParameterProcess(asyKeySpec, verifyAlgoName, signType) {
    var globalRsaKeyPair;
    var globalSignBlob;
    var globalText = "This is a sign test";
    var input = { data: stringTouInt8Array(globalText) };
    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let verifyGenerator = createAsyVerify(verifyAlgoName);
        let keyPairPromise = specGenerator.generateKeyPair();
        keyPairPromise.then((keyPair) => {
            globalRsaKeyPair = keyPair;
            if (signType == 4) {
                return verifyForVerify(verifyGenerator, input, globalSignBlob);
            }
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then(() => {
            switch (signType) {
                case 0:
                    return verifyForVerify(verifyGenerator, globalSignBlob);
                    break;
                case 1:
                    return verifyForVerify(verifyGenerator, null, globalSignBlob);
                    break;
                case 2:
                    return verifyForVerify(verifyGenerator, "", globalSignBlob);
                    break;
                default:
                    return verifyForVerify(verifyGenerator, input, globalSignBlob);
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[callback] verifyAbnormalParameterProcess catch err:" + err);
            console.error("[callback] verifyAbnormalParameterProcess catch err.code:" + err.code);
            reject(err);
        });
    });

}

async function encryptUpdateCipherFailed(asyKeySpec, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        let cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);

        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                globalRsaKeyPair = specKeyPair;
                return initCipher(cipherGeneratorEncrypt, encryptMode, globalRsaKeyPair.pubKey, null);
            })
            .then(() => {
                return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
            })
            .then((finalOutput) => {
                globalCipherText = finalOutput;
                console.log("cipherOutput: " + uInt8ArrayToShowStr(globalCipherText.data));
                console.info("[callback] encryptAndDecryptBySpecProcess initCipher2");
                return initCipher(cipherGeneratorEncrypt, decryptMode, globalRsaKeyPair.priKey, null);
            })
        try {
            cipherGeneratorEncrypt.update(null, () => {
            })
            resolve();
        } catch (err) {
            console.error("[Callback] encryptAndDecryptBySpecProcess catch err:" + err);
            reject(err);
        }
        try {
            cipherGeneratorEncrypt.update(() => {
            })
            resolve();
        } catch (err) {
            console.error("[Callback] encryptAndDecryptBySpecProcess catch err:" + err);
            reject(err);
        }
    });
}

async function VerifyAbnormalGetFillProcess(algNameKey, algNameSign, itemType, state, fillState) {
    var globalKeyPair;
    var rsaGenerator;
    var signer;

    return new Promise((resolve, reject) => {
        rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
        signer = cryptoFramework.createSign(algNameSign);
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                globalKeyPair = rsaKeyPair;
                let priKey;
                if (state == 0) {
                    console.log("SignAbnormalGetFillProcess start empty");
                    return signer.getSignSpec(itemType);;
                }
                else {
                    priKey = globalKeyPair.priKey;
                    return signer.init(priKey);
                }
            }).then(() => {
            switch (fillState) {
                case 0:
                    return signer.getSignSpec();
                    break;
                case 1:
                    return signer.getSignSpec(itemType);
                    break;
                case 2:
                    return signer.getSignSpec(itemType, itemType);
                    break;
                default:
                    return signer.getSignSpec(itemType);
            }
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[SignAbnormalGetFillProcess]catch err:" + err);
            console.error("[SignAbnormalGetFillProcess]catch err.code:" + err.code);
            expect(err.code == 401).assertTrue();
            reject(err);
        });
    });
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
        console.info("[callback]: verifyGenerator.algName : " + verifyGenerator.algName);
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
            console.log("[callback] signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
            return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
        }).then(() => {
            return updateVerify(verifyGenerator, input);
        }).then(() => {
            return verifyForVerify(verifyGenerator, input, globalSignBlob);
        }).then(() => {
            resolve();
        }).catch((err) => {
            console.error("[callback] signAndVerifyBySpecProcess catch err:" + err);
            reject(err);
        });
    });
}

async function keyGenerationBySpecProcess(asyAlgoName) {
    let keyPairPromise;
    let generatorBySpec;
    return new Promise((resolve, reject) => {
        var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
        expect(rsaGenerator != null).assertTrue();
        generateAsyKeyPair(rsaGenerator)
            .then((rsaKeyPair) => {
                let encodedPubKey = rsaKeyPair.pubKey.getEncoded();
                let encodedPriKey = rsaKeyPair.priKey.getEncoded();
                return convertAsyKey(rsaGenerator, encodedPubKey, encodedPriKey);
            })
            .then((convertKeyPair) => {
                let dsap = convertKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
                let dsaq = convertKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_Q_BN);
                let dsag = convertKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_G_BN);
                let commKeySpec = asyCommon.genDsaKeyPairSpec(dsap, dsaq, dsag);
                generatorBySpec = createAsyKeyGeneratorBySpec(commKeySpec);
                keyPairPromise = generatorBySpec.generateKeyPair();
                console.info("[Callback]  keyPairPromise:" + keyPairPromise);
                resolve();
            })
            .catch((err) => {
                console.error("[Callback] convertKeyEncryptAndDecryptProcess catch err:" + err);
                reject(err);
            });
    });
}

export {
    encryptAndDecryptNormalProcess,
    signAndVerifyNormalProcess,
    convertKeyEncryptAndDecryptProcess,
    keyAgreementProcess,
    createAsyKeyAgreementFail,
    keyAgreementProcessFail,
    keyAgreementProcessParameterException,
    createAsyKeyGeneratorFail,
    encryptAndDecryptNormalProcessSuperdata,
    encryptAndDecryptNormalProcessNull,
    encryptSetSpecFail,
    encryptSetAndGetSpecInitProcess,
    encryptUpdateCipherFailed,
    createCipherFail,
    encryptAndDecryptBySpecProcess,
    signAndVerifyBySpecProcess,
    keyGenerationBySpecProcess,
    signAndVerifySetAndGetSpecProcess,
    signAndVerifyBySpecAbnormalParameterProcess,
    signAbnormalParameterProcess,
    SignAbnormalGetFillProcess,
    VerifyInitParameterProcess,
    verifyAbnormalParameterProcess,
    VerifyAbnormalGetFillProcess,
};
