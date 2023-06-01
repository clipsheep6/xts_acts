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
    return new Promise((resolve, reject) => {
        asyKeySpec.generateKeyPair((err, asyKeyPair) => {
            if (err) {
                console.info("Security_CryptoFramework [callback] generateSpecAsyKeyPair faile");
                expect(err.code == 401).assertTrue();
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
                console.info("Security_CryptoFramework generateSpecCommonAsyKeyPair success");
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                //expect(asyKeyPair != null).assertTrue();
                resolve();
            }
        });
    });
}

async function generatePubKeyByCommonSpec(asyKeySpec, type) {
    return new Promise((resolve, reject) => {
        asyKeySpec.generatePubKey((err, asyKeyPair) => {
            if (err) {
                console.info("Security_CryptoFramework [callback] generatePriKeyByCommonSpec faile");
                expect(err.code == 401).assertTrue();
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
                console.info("Security_CryptoFramework generateSpecKeyPairAsyKeyPair success");
                console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
                expect(asyKeyPair != null).assertTrue();
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
            console.info("Security_CryptoFramework generateSpecCommonAsyKeyPair success");
            console.info("Security_CryptoFramework asyKeyPair = " + asyKeyPair)
            expect(asyKeyPair != null).assertTrue();
            resolve(asyKeyPair);
        }).catch(err => {
            console.info("Security_CryptoFramework [Callback] generateSpecAsyKeyPair failed");
            expect(err.code == 401).assertTrue();
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
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec asyKeyPair " + asyKeyPair)
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
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec asyKeyPair " + asyKeyPair)
                expect(asyKeyPair != null).assertTrue();
                return generatePriKeyByCommonSpec(asyKeyPairSpec, state);
            })
            .then((priKey) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec priKey " + priKey)
                expect(priKey != null)
                return generatePubKeyByCommonSpec(asyKeyPairSpec, state);
            })
            .then((pubKey) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec pubKey " + pubKey)
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
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        generatePriKeyByCommonSpec(asyKeyPairSpec, state)
            .then((priKey) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec asyKeyPair " + priKey)
                expect(priKey != null).assertTrue();
                resolve()
            })
            .catch((err) => {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                reject(err);
            })
    });
}

async function generatePubTopriSpecFailed(asyKeySpec, state) {
    return new Promise((resolve, reject) => {
//        console.info("Security_CryptoFramework [Callback] generatorByCommonSpec asyKeyPair " + asyKeySpec.specType);
        if (Number(asyKeySpec.specType) == cryptoFramework.AsyKeySpecType.PUBLIC_KEY_SPEC) {
            reject("invalid key spec");
        }
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        generatePriKeyByCommonSpec(asyKeyPairSpec, state)
            .then((priKey) => {
                console.info("Security_CryptoFramework [Callback] generatorByCommonSpec asyKeyPair " + priKey)
                expect(priKey != null).assertTrue();
                resolve()
            })
            .catch((err) => {
                console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
                expect(err.code == 401)
                reject(err);
            })
    });
}

async function rsaPubGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        asyKeyPairSpec.generateKeyPair().then(keyPair => {
            let pk = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_PK_BN);
            console.info("Security_CryptoFramework RSAPUB PK:" + pk);
            let n = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.RSA_N_BN);
            console.info("Security_CryptoFramework RSAPUB n:" + n);
            resolve();
        }).catch (err => {
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function eccPubGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        asyKeyPairSpec.generateKeyPair().then(keyPair => {
            let pkx = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN);
            expect(pkx != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB pkx:" + pkx);
            let pky = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN);
            expect(pky != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB pky:" + pky);
            let p = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
            expect(p != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB p:" + p);
            let a = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_A_BN);
            expect(a != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB a:" + a);
            let b = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_B_BN);
            expect(b != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB b:" + b);
            let gx = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_X_BN);
            expect(gx != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB gx:" + gx);
            let gy = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_G_Y_BN);
            expect(gy != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB gx:" + gy);
            let n = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_N_BN);
            expect(n != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB n:" + n);
            let h = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_H_NUM);
            expect(h != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB n:" + h);
            let fieldType = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FIELD_TYPE_STR);
            expect(fieldType != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB fieldSize :" + fieldType);
            let fieldSize = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FIELD_SIZE_NUM);
            expect(fieldSize != null).assertTrue();
            console.info("Security_CryptoFramework ECCPUB fieldSize :" + fieldSize);
            resolve();
        }).catch (err => {
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function dsaPriGetAsyKeySpec(asyKeySpec) {
    return new Promise((resolve, reject) => {
        let asyKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpec);
        if (asyKeyPairSpec === null) {
            reject("invalid key spec");
        }
        asyKeyPairSpec.generateKeyPair().then(keyPair => {
            let sk = keyPair.prikey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
            expect(sk != null).assertTrue();
            console.info("Security_CryptoFramework DSAPRI pk:" + pk);
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
        }).catch (err => {
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function PubGetAsyKeySpecFailed(asyKeySpecRsa, asyKeySpecDsa, asyKeySpecEcc) {
    return new Promise((resolve, reject) => {
        let rsaKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecRsa);
        if (rsaKeyPairSpec === null) {
            reject("invalid key spec");
        }
        rsaKeyPairSpec.generateKeyPair().then(keyPairRsa => {
            keyPairRsa.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
        let dsaKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecDsa);
        dsaKeyPairSpec.generateKeyPair().then(keyPairDsa => {
            keyPairDsa.pubKey.getAsyKeySpec(1024);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });

        let eccKeyPairSpec = createAsyKeyGeneratorBySpec(asyKeySpecEcc);
        eccKeyPairSpec.generateKeyPair().then(keyPairEcc => {
            keyPairEcc.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });

        dsaKeyPairSpec.generateKeyPair().then(keyPairDsa => {
            keyPairDsa.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_A_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });

        dsaKeyPairSpec.generateKeyPair().then(keyPairDsa => {
            keyPairDsa.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_SK_BN);
            resolve();
        }).catch (err => {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
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
            keyPair.pubKey.clearMem();
            resolve();
        }).catch (err => {
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        });
    });
}

async function generateCreateAsyKeyFailed(eccKeySpec, rsaKeySpec, dsaKeySpec) {
    return new Promise((resolve, reject) => {
        try {
            cryptoFramework.createAsyKeyGeneratorBySpec(eccKeySpec);
            resolve()
        } catch (err) {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        }
        try {
            cryptoFramework.createAsyKeyGeneratorBySpec(rsaKeySpec);
            resolve()
        } catch (err) {
            expect(err.code == 401);
            console.error("Security_CryptoFramework [Callback] generatorByCommonSpec failed. error is " + err);
            reject(err);
        }
        try {
            cryptoFramework.createAsyKeyGeneratorBySpec(dsaKeySpec);
            resolve()
        } catch (err) {
            expect(err.code == 401);
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
