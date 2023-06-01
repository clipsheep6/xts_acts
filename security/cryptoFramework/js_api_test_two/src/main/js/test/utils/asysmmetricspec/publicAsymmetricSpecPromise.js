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

import { expect } from "@ohos/hypium";
import cryptoFramework from "@ohos.security.cryptoFramework";
import { stringTouInt8Array, uInt8ArrayToShowStr, uInt8ArrayToString, } from "../common/publicDoString";
import { createAsyKeyGeneratorBySpec, } from "./publicAsymmetricSpecCommon";

async function generateSpecCommonAsyKeyPair(asyKeySpec, type) {
    var type = type;
    //var asyKeySpec = asyKeySpec;
    return new Promise((resolve, reject) => {
        asyKeySpec.generateKeyPair()
            .then((asyKeyPair) => {
                console.info("Security_CryptoFramework generateSpecCommonAsyKeyPair type " + type)
                if (type == "ECC") {
                    //        let p = asyKeyPair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
                    //        showBigIntInfo("ECCCommon p:" + p);
                    //        let a = asyKeyPair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_A_BN);
                    //        console.info("ECCCommon a:" + a);
                    //        let b = asyKeyPair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_B_BN);
                    //        console.info("ECCCommon b:" + b);
                    //        let gX = asyKeyPair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_X_BN);
                    //        console.info("ECCCommon gX:" + gX);
                    //        let gY = asyKeyPair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_Y_BN);
                    //        console.info("ECCCommon gY:" + gY);
                    //        let n = asyKeyPair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_N_BN);
                    //        console.info("ECCCommon n:" + n);
                    //        let h = asyKeyPair.pubkey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_H_NUM);
                    //        console.info("ECCCommon h:" + h);
                    let sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
                    console.info("Security_CryptoFramework ECCCommon sk:" + sk)
                    let pkX = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
                    console.info("Security_CryptoFramework ECCCommon pkX:" + pkX)
                    let pkY = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
                    console.info("Security_CryptoFramework ECCCommon pkY:" + pkY)
                } else if (type == "DSA") {
                    let Sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
                    console.info("Security_CryptoFramework DSACommon Sk:" + Sk)
                    let Pk = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_PK_BN);
                    console.info("Security_CryptoFramework DSACommon Pk:" + Pk)
                } else {
                    let sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
                    console.info("Security_CryptoFramework RSACommon sk:" + sk)
                    let pk = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_PK_BN);
                    console.info("Security_CryptoFramework RSACommon pk:" + pk)
                }
                console.info("Security_CryptoFramework generateSpecCommonAsyKeyPair success");
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                expect(asyKeyPair != null).assertTrue();
                resolve(asyKeyPair);
            })
            .catch((err) => {
                console.info("Security_CryptoFramework [Promise] generateSpecAsyKeyPair faile");
                expect(err.code == 401).assertTrue();
                console.error("Security_CryptoFramework [Promise] generateSpecAsyKeyPair failed. error is " + err);
                reject(err);
            })
    });
}

async function generatePubKeyBySpec(asyKeySpec, type) {
    return new Promise((resolve, reject) => {
        asyKeySpec.generatePubKey()
            .then((asyKeyPair) => {
                if (type == "ECC") {
                    let pkX = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
                    console.info("Security_CryptoFramework ECCCommonPub pkX:" + pkX)
                    let pkY = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
                    console.info("Security_CryptoFramework ECCCommonPub pkY:" + pkY)
                }
                else if (type == "DSA") {
                    let pk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_PK_BN);
                    console.info("Security_CryptoFramework DSACommonPub pk:" + pk)
                } else {
                    let pk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_PK_BN);
                    console.info("Security_CryptoFramework RSAommonPub pk:" + pk)
                }
                console.info("Security_CryptoFramework generateSpecKeyPairAsyKeyPair success");
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                expect(asyKeyPair != null).assertTrue();
                resolve(asyKeyPair);
            })
            .catch((err) => {
                console.info("Security_CryptoFramework [Promise] generatePriKeyByCommonSpec faile");
                expect(err.code == 401).assertTrue();
                console.error("Security_CryptoFramework [Promise] generatePriKeyByCommonSpec failed. error is " + err);
                reject(err);
            })
    });
}

async function generatePriKeyBySpec(asyKeySpec, type) {
    return new Promise((resolve, reject) => {
        asyKeySpec.generatePriKey()
            .then((asyKeyPair) => {
                if (type == "ECC") {
                    let sk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
                    console.info("Security_CryptoFramework ECCCommonPriKey sk:" + sk)
                    let pkX = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
                    console.info("Security_CryptoFramework ECCCommonPriKey pkX:" + pkX)
                    let pkY = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
                    console.info("Security_CryptoFramework ECCCommonPriKey pkY:" + pkY)
                } else if (type == "DSA") {
                    let p = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
                    console.info("Security_CryptoFramework ECCCommonPriKey p:" + p)
                } else {
                    let sk = asyKeyPair.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
                    console.info("Security_CryptoFramework ECCCommonPriKey sk:" + sk)
                }
                console.info("Security_CryptoFramework generateSpecCommonAsyKeyPair success");
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                resolve(asyKeyPair);
            })
            .catch((err) => {
                console.info("Security_CryptoFramework [Promise] generateSpecAsyKeyPair failed");
                expect(err.code == 401).assertTrue();
                console.error("Security_CryptoFramework [Promise] generateSpecAsyKeyPair failed. error is " + err);
                reject(err);
            })
    });
}


async function generateSpecKeyPair(asyKeySpec, type) {
    return new Promise((resolve, reject) => {
        asyKeySpec.generateKeyPair()
            .then((asyKeyPair) => {
                if (type == "ECC") {
                    let sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
                    console.info("Security_CryptoFramework ECCKeyPair sk:" + sk)
                    let pkX = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
                    console.info("Security_CryptoFramework ECCKeyPair pkX:" + pkX)
                    let pkY = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
                    console.info("Security_CryptoFramework ECCKeyPair pkY:" + pkY)
                } else if (type == "DSA") {
                    let Sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
                    console.info("Security_CryptoFramework DSAKeyPair Sk:" + Sk)
                    let PK = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_PK_BN);
                    console.info("Security_CryptoFramework DSAKeyPair PK:" + PK)
                } else {
                    let sk = asyKeyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
                    console.info("Security_CryptoFramework RSAKeyPair sk:" + sk)
                    let pk = asyKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_PK_BN);
                    console.info("Security_CryptoFramework RSAKeyPair pk:" + pk)
                }
                console.info("Security_CryptoFramework generateSpecCommonAsyKeyPair success");
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                expect(asyKeyPair != null).assertTrue();
                resolve(asyKeyPair);
            })
            .catch((err) => {
                console.info("Security_CryptoFramework [Promise] generateSpecAsyKeyPair failed");
                expect(err.code == 401).assertTrue();
                console.error("Security_CryptoFramework [Promise] generateSpecAsyKeyPair failed. error is " + err);
                reject(err);
            })
    });
}

async function generateByCommonSpec(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        try {
            let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
            if (asyKeyPairSpec === null) {
                reject("invalid key spec");
            }
            generateSpecCommonAsyKeyPair(asyKeyPairSpec, state)
                //        .then((asyKeyPair) =>{
                //          console.info("[Callback] generatorByCommonSpec asyKeyPair " + asyKeyPair)
                //          expect(asyKeyPair != null).assertTrue();
                //          return generatePriKeyByCommonSpec(asyKeyPairSpec, state);
                //        })
                //        .then((priKey) =>{
                //          console.info("[Callback] generatorByCommonSpec priKey " + priKey)
                //          expect(priKey != null)
                //          return generatePubKeyBySpec(asyKeyPairSpec, state);
                //        })
                .then((asyKeyPair) => {
                    console.info("Security_CryptoFramework [Promise] generatorByCommonSpec asyKeyPair " + asyKeyPair)
                    expect(asyKeyPair != null).assertTrue();
                    resolve();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
                    reject(err);
                })
        } catch (err) {
            reject(err)
        }
    });
}

async function generateByKeyPairSpec(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        generateSpecKeyPair(asyKeyPairSpec, state)
            .then((asyKeyPair) => {
                console.info("Security_CryptoFramework generatorByCommonSpec asyKeyPair " + asyKeyPair)
                expect(asyKeyPair != null).assertTrue();
                return generatePriKeyBySpec(asyKeyPairSpec, state);
            })
            .then((priKey) => {
                console.info("Security_CryptoFramework generatorByCommonSpec priKey " + priKey)
                expect(priKey != null)
                return generatePubKeyBySpec(asyKeyPairSpec, state);
            })
            .then((pubKey) => {
                console.info("Security_CryptoFramework generatorByCommonSpec pubKey " + pubKey)
                expect(pubKey != null);
                resolve();
            })
            .catch((err) => {
                console.error("Security_CryptoFramework generatorByCommonSpec failed. error is " + err);
                reject(err);
            })
    });
}

async function generateByPubKeySpec(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec)
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        generatePubKeyBySpec(asyKeyPairSpec, state)
            .then((pubKey) => {
                console.info("Security_CryptoFramework [Promise] generatorByCommonSpec pubKey " + pubKey)
                expect(pubKey != null).assertTrue();
                resolve()
            })
            .catch((err) => {
                console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
                reject(err);
            })
    });
}

async function generatePriTopubSpecFailed(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        generatePriKeyBySpec(asyKeyPairSpec, state)
            .then((pubKey) => {
                console.info("Security_CryptoFramework [Promise] generatorByCommonSpec pubKey " + pubKey)
                expect(pubKey != null).assertTrue();
                resolve()
            })
            .catch((err) => {
                console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
                reject(err);
            })
    });
}

async function rsaPriGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        asyKeyPairSpec.generateKeyPair().then(keyPair => {
            let sk = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_SK_BN);
            expect(sk != null).assertTrue();
            console.info("Security_CryptoFramework RSAPUB sk:" + sk);
            let n = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_N_BN);
            expect(n != null).assertTrue();
            console.info("Security_CryptoFramework RSAPUB n:" + n);
            resolve();
        }).catch (err => {
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function dsaPubGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        asyKeyPairSpec.generateKeyPair().then(keyPair => {
            let pk = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_PK_BN);
            expect(pk != null).assertTrue();
            console.info("Security_CryptoFramework DSAPUB pk:" + pk);
            let p = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
            expect(p != null).assertTrue();
            console.info("Security_CryptoFramework DSAPUB p:" + p);
            let q = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_Q_BN);
            expect(q != null).assertTrue();
            console.info("Security_CryptoFramework DSAPUB q:" + q);
            let g = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_G_BN);
            expect(g != null).assertTrue();
            console.info("Security_CryptoFramework DSAPUB g:" + g);
            resolve();
        }).catch(err => {
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function eccPriGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        asyKeyPairSpec.generateKeyPair().then(keyPair => {
            let sk = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_SK_BN);
            expect(sk != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB pkx:" + sk);
            let p = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
            expect(p != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB p:" + p);
            let a = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_A_BN);
            expect(a != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB a:" + a);
            let b = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_B_BN);
            expect(b != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB b:" + b);
            let gx = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_X_BN);
            expect(gx != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB gx:" + gx);
            let gy = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_Y_BN);
            expect(gy != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB gx:" + gy);
            let n = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_N_BN);
            expect(n != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB n:" + n);
            let h = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_H_NUM);
            expect(h != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB n:" + h);
            let fieldType = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FIELD_TYPE_STR);
            expect(fieldType != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB fieldSize :" + fieldType);
            let fieldSize = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FIELD_SIZE_NUM);
            expect(fieldSize != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB fieldSize :" + fieldSize);
            resolve();
        }).catch (err => {
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function PriGetAsyKeySpecFailed(asyKeySpecRsa, asyKeySpecDsa, asyKeySpecEcc) {
    return new Promise((resolve, reject) => {
        let rsaKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecRsa);
        if (rsaKeyPairSpec === null) {
            reject("invalid key spec");
        }
        rsaKeyPairSpec.generateKeyPair().then(keyPairRsa => {
            keyPairRsa.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });

        let dsaKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecDsa);
        dsaKeyPairSpec.generateKeyPair().then(keyPairDsa => {
            keyPairDsa.priKey.getAsyKeySpec(1024);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });

        let eccKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecEcc);
        eccKeyPairSpec.generateKeyPair().then(keyPairEcc => {
            keyPairEcc.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });

        dsaKeyPairSpec.generateKeyPair().then(keyPairDsa => {
            keyPairDsa.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_A_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });

        dsaKeyPairSpec.generateKeyPair().then(keyPairDsa => {
            keyPairDsa.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_PK_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function clearMemGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        asyKeyPairSpec.generateKeyPair().then(keyPair => {
            keyPair.priKey.clearMem();
            resolve();
        }).catch (err => {
            console.error("Security_CryptoFramework [Promise] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

export {
    generateByCommonSpec,
    generateByKeyPairSpec,
    generateByPubKeySpec,
    generatePriTopubSpecFailed,
    rsaPriGetAsyKeySpec,
    dsaPubGetAsyKeySpec,
    eccPriGetAsyKeySpec,
    PriGetAsyKeySpecFailed,
    clearMemGetAsyKeySpec,
};
