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
import cryptoFramework from "@ohos.security.cryptoFramework";
import { createAsyKeyGeneratorBySpec, } from "./publicAsymmetricSpecCommon";

async function generateSpecCommonAsyKeyPair(asyKeySpec, type) {
    return new Promise((resolve, reject) => {
        asyKeySpec.generateKeyPair((err, asyKeyPair) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generateSpecAsyKeyPair failed. error is " + err);
                reject(err);
            } else {
                console.info("Security_CryptoFramework type " + type)
                if (type == "ECC") {
                    let sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
                    console.info("Security_CryptoFramework ECCCommon sk:" + sk)
                    let pkX = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
                    console.info("Security_CryptoFramework ECCCommon pkX:" + pkX)
                    let pkY = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
                    console.info("Security_CryptoFramework ECCCommon pkY:" + pkY)
                } else if (type == "DSA") {
                    let p = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
                    console.info("Security_CryptoFramework DSACommon p:" + p)
                    let q = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_Q_BN);
                    console.info("Security_CryptoFramework DSACommon q:" + q)
                } else {
                    let sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
                    console.info("Security_CryptoFramework RSACommon sk:" + sk)
                    let pk = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_PK_BN);
                    console.info("Security_CryptoFramework RSACommon pk:" + pk)
                }
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                resolve();
            }
        });
    });
}

async function generatePubKeyByCommonSpec(asyKeySpec, type) {
    return new Promise((resolve, reject) => {
        asyKeySpec.generatePubKey((err, asyKeyPair) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatePriKeyByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                if (type == "ECC") {
                    let pkX = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
                    console.info("Security_CryptoFramework ECCCommonPub pkX:" + pkX)
                    let pkY = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
                    console.info("Security_CryptoFramework ECCCommonPub pkY:" + pkY)
                } else if (type == "DSA") {
                    let pk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_PK_BN);
                    console.info("Security_CryptoFramework DSACommonPub pk:" + pk)
                } else {
                    let pk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_PK_BN);
                    console.info("Security_CryptoFramework RSAommonPub pk:" + pk)
                }
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                resolve(asyKeyPair);
            }
        });
    });
}

async function generatePriKeyByCommonSpec(asyKeySpec, type) {
    return new Promise((resolve, reject) => {
        asyKeySpec.generatePriKey().then(asyKeyPair => {
            if (type == "ECC") {
                let sk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
                console.info("Security_CryptoFramework ECCCommonPriKey sk:" + sk);
            } else if (type == "DSA") {
                let sk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
                console.info("Security_CryptoFramework ECCCommonPriKey sk:" + sk)
            } else {
                let sk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
                console.info("Security_CryptoFramework ECCCommonPriKey sk:" + sk)
            }
            console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair);
            resolve();
        }).catch(err => {
            console.error("Security_CryptoFramework [Callback] generateSpecAsyKeyPair failed. error is " + err);
            reject(err);
        });
    });
}

async function generateByCommonSpec(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        generateSpecCommonAsyKeyPair(asyKeyPairSpec, state)
            .then((asyKeyPair) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec asyKeyPair " + asyKeyPair);
                expect(asyKeyPair != null).assertTrue();
                resolve();
            }).catch((err) => {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            });
    });
}

async function generateByKeyPairSpec(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        generateSpecCommonAsyKeyPair(asyKeyPairSpec, state)
            .then((asyKeyPair) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec asyKeyPair " + asyKeyPair);
                expect(asyKeyPair != null).assertTrue();
                return generatePriKeyByCommonSpec(asyKeyPairSpec, state);
            })
            .then((priKey) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec priKey " + priKey);
                expect(priKey != null)
                return generatePubKeyByCommonSpec(asyKeyPairSpec, state);
            })
            .then((pubKey) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec pubKey " + pubKey);
                expect(pubKey != null);
                resolve();
            })
            .catch((err) => {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            })
    });
}

async function generateByPriKeySpec(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        asyKeyPairSpec.generatePriKey((err, PriKey) => {
            if (err) {
                console.error("generateByPriKeySpec [Callback] generateSpecAsyKeyPair failed. error is " + err);
                reject(err);
            }
            else {
                if (state == "ECC") {
                    let sk = PriKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
                    console.info("generateByPriKeySpec ECCCommonPriKey sk:" + sk);
                } else if (state == "DSA") {
                    let sk = PriKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
                    console.info("generateByPriKeySpec ECCCommonPriKey sk:" + sk)
                } else {
                    let sk = PriKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
                    console.info("generateByPriKeySpec ECCCommonPriKey sk:" + sk)
                }
                resolve();
            }
        });
    });
}

async function generatePubTopriSpecFailed(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        console.info("generatePubTopriSpecFailed ECCCommonPriKey 111");
            asyKeyPairSpec.generatePriKey((err, PriKey) => {
            if (err) {
                console.error("generatePubTopriSpecFailed [Callback] generateSpecAsyKeyPair failed. error is " + err);
                reject(err);
            }
            else {
                if (state == "ECC") {
                    let sk = PriKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
                    console.info("generatePubTopriSpecFailed ECCCommonPriKey sk:" + sk);
                } else if (state == "DSA") {
                    let sk = PriKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
                    console.info("generatePubTopriSpecFailed ECCCommonPriKey sk:" + sk);
                } else {
                    let sk = PriKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
                    console.info("generatePubTopriSpecFailed ECCCommonPriKey sk:" + sk);
                }
                console.info("generatePubTopriSpecFailed PriKey = " + PriKey);
                resolve();
            }
        });
    });
}

async function rsaPubGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        asyKeyPairSpec.generateKeyPair((err, keyPair) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                let pk = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_PK_BN);
                console.info("Security_CryptoFramework RSAPUB PK:" + pk);
                let n = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_N_BN);
                console.info("Security_CryptoFramework RSAPUB n:" + n);
                resolve();
            }
        });
    });
}

async function eccPubGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        asyKeyPairSpec.generateKeyPair((err, keyPair) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                let pkx = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
                console.info("Security_CryptoFramework ECCPUB pkx:" + pkx);
                let pky = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
                console.info("Security_CryptoFramework ECCPUB pky:" + pky);
                let p = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
                console.info("Security_CryptoFramework ECCPUB p:" + p);
                let a = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_A_BN);
                console.info("Security_CryptoFramework ECCPUB a:" + a);
                let b = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_B_BN);
                console.info("Security_CryptoFramework ECCPUB b:" + b);
                let gx = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_X_BN);
                console.info("Security_CryptoFramework ECCPUB gx:" + gx);
                let gy = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_Y_BN);
                console.info("Security_CryptoFramework ECCPUB gx:" + gy);
                let n = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_N_BN);
                console.info("Security_CryptoFramework ECCPUB n:" + n);
                let h = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_H_NUM);
                console.info("Security_CryptoFramework ECCPUB n:" + h);
                let fieldType = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FIELD_TYPE_STR);
                console.info("Security_CryptoFramework ECCPUB fieldSize :" + fieldType);
                let fieldSize = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FIELD_SIZE_NUM);
                console.info("Security_CryptoFramework ECCPUB fieldSize :" + fieldSize);
                resolve();
            }
        });
    });
}

async function dsaPriGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        asyKeyPairSpec.generateKeyPair((err, keyPair) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                let sk = keyPair.prikey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
                expect(sk != null).assertTrue();
                console.info("Security_CryptoFramework DSAPRI pk:" + sk);
                let p = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
                expect(p != null).assertTrue();
                console.info("Security_CryptoFramework DSAPRI p:" + p);
                let q = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_Q_BN);
                expect(q != null).assertTrue();
                console.info("Security_CryptoFramework DSAPRI q:" + q);
                let g = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_G_BN);
                expect(g != null).assertTrue();
                console.info("Security_CryptoFramework DSAPRI g:" + g);
                resolve();
            }
        });
    });
}

async function PubGetAsyKeySpecFailed(asyKeySpecRsa, asyKeySpecDsa, asyKeySpecEcc) {
    return new Promise((resolve, reject) => {
        let rsaKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecRsa);
        rsaKeyPairSpec.generateKeyPair((err, keyPair) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
                resolve();
            }
        });

        let dsaKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecDsa);
        dsaKeyPairSpec.generateKeyPair((err, keyPairDsa) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                keyPairDsa.pubKey.getAsyKeySpec(1024);
                resolve();
            }
        });

        let eccKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecEcc);
        eccKeyPairSpec.generateKeyPair((err, keyPairEcc) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                keyPairEcc.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
                resolve();
            }
        });

        dsaKeyPairSpec.generateKeyPair((err, keyPairDsa) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                keyPairDsa.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_A_BN);
                resolve();
            }
        });

        dsaKeyPairSpec.generateKeyPair((err, keyPairDsa) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                keyPairDsa.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
                resolve();
            }
        });
    });
}


async function clearMemGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        asyKeyPairSpec.generateKeyPair((err, keyPair) => {
            if (err) {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            } else {
                keyPair.pubKey.clearMem();
                resolve();
            }
        });
    });
}

async function generateCreateAsyKeyFailed(eccKeySpec, rsaKeySpec, dsaKeySpec) {
    return new Promise((resolve, reject) => {
        try {
            cryptoFramework.createAsyKeyGeneratorBySpec(eccKeySpec);
        } catch (err) {
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        }
        try {
            cryptoFramework.createAsyKeyGeneratorBySpec(rsaKeySpec);
            resolve();
        } catch (err) {
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        }
        try {
            cryptoFramework.createAsyKeyGeneratorBySpec(dsaKeySpec);
            resolve();
        } catch (err) {
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        }
    });
}

export {
    generateByCommonSpec,
    generateByKeyPairSpec,
    generateByPriKeySpec,
    generatePubTopriSpecFailed,
    generateCreateAsyKeyFailed,
    rsaPubGetAsyKeySpec,
    eccPubGetAsyKeySpec,
    dsaPriGetAsyKeySpec,
    PubGetAsyKeySpecFailed,
    clearMemGetAsyKeySpec,
};
