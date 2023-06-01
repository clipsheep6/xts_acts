// @ts-nocheck
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

import cryptoFramework from "@ohos.security.cryptoFramework";
import { describe, beforeAll, afterEach, it, expect } from "@ohos/hypium";
import * as asyCallback from "./utils/asysmmetricspec/publicAsymmetricSpecCallback";
import * as asyPromise from "./utils/asysmmetricspec/publicAsymmetricSpecPromise";
import * as common from "./utils/common/publicDoSpec";
import * as callback from "./utils/asymmetric/publicAsymmetricCallback";
import * as promise from "./utils/asymmetric/publicAsymmetricPromise";

function genRsa2048KeyPairSpec() {
    return common.genRsa2048KeyPairSpec();
}

function genDsa2048CommonSpec() {
    return common.genDsa2048CommonSpecBigE();
}

function genRsa2048CommonSpec() {
    return common.genRsa2048CommonSpec();
}

function genRsa2048PubKetSpec() {
    return common.genRsa2048PubKetSpec();
}

function genDsa2048KeyPairSpec() {
    return common.genDsa2048KeyPairSpecBigE();
}

function genDsa2048PubKeySpec() {
    return common.genDsa2048PubKeySpecBigE();
}

function genEccKeyTypeSpec(keyType) {
    return common.genEccKeySpec(keyType);
}

function genEccCommonSpecErr() {
    let fieldFp = {
        fieldType: "Fp",
        p: BigInt("0xffffffffffffffffffffffffffffffff000000000000000000000001")
    }

    let G = {
        x: BigInt("0xb70e0cbd6bb4bf7f321390b94a03c1d356c21122343280d6115c1d21"),
        y: BigInt("0xbd376388b5f723fb4c22dfe6cd4375a05a07476444d5819985007e34")
    }

    let eccCommonSpec = {
        algName: "ECC",
        specType: 5,
        field: fieldFp,
        a: BigInt("0xfffffffffffffffffffffffffffffffefffffffffffffffffffffffe"),
        b: BigInt("0xb4050a850c04b3abf54132565044b0b7d7bfd8ba270b39432355ffb4"),
        g: G,
        n: BigInt("0xffffffffffffffffffffffffffff16a2e0b8f03e13dd29455c5c2a3d"),
        h: 1
    }
    return eccCommonSpec;
}

function genDsaKeyPairSpecErr() {
    let dsaCommonSpec = common.genDsa2048CommonSpecBigE();
    let dsaKeyPairSpec = {
        algName: "DSA",
        specType: cryptoFramework.AsyKeySpecType.KEY_PAIR_SPEC,
        params: dsaCommonSpec,
        sk: BigInt("0x326792f6c4e"),
        pk: BigInt("0x178fa8118492ec8347c76ab092af5a2037a36479d2d03dcde061888821cc745dce4c5147f0c55c4c827aaf72adb9" +
        "e053f278b7f0b5487f8a3a18d19f8b7da547b795ab98f87b7450568e57f0eef5b7baab8586f92bef4156a0a49fb73800460aa6f1f" +
        "c1fd84e85449243215d6eccc2cb26310d21c4bd8d24bcd91819d7dcf1e7935048032cae2ee749885f9357279936b420abfca72bf2" +
        "d998d7d4349d9650589aea54f3eef56314ee85837476e15295c3f7eb04047ba7281bccea4a4e84dad89c79d89b66892fcfacd779f" +
        "9a9d8451378b90014c97e22518667b09f261123c838d7701d158e4d4f959740a1c27e011872f410e68d52167ff2c9f8338b33b7ce"),
    }
    return dsaKeyPairSpec;
}

function genRsaKeyPairSpecErr() {
    let nIn = BigInt("0x9260d0750ae117eee55c3f3deaba74917521a262ee76007cdf8a56755ad73a1598a1408410a01434c3f5bc54a88" +
    "b57fa19fc4328daea0750a4c44e88cff3b2382621b80f670464433e4336e6d003e8cd65bff211da144b88291c2259a00a72b711c116ef7" +
    "686e8fee34e4d933c868187bdc26f7be071493c86f7a5941c3510806ad67b0f94d88f5cf5c02a092821d8626e8932b65c5bd8c92049c21" +
    "0932b7afa7ac59c0e886ae5c1edb00d8ce2c57633db26bd6639bff73cee82be9275c402b4cf2a4388da8cf8c64eefe1c5a0f5ab8057c39" +
    "fa5c0589c3e253f0960332300f94bea44877b588e1edbde97cf2360727a09b775262d7ee552b3319b9266f05a25");
    let eIn = BigInt("0x010001122354485");
    let dIn = BigInt("0x6a7df2ca63ead4dda191d614b6b385e0d9056a3d6d5cfe07db1daabee022db08212d97613d3328e0267c9dd23d7" +
    "87abde2afcb306aeb7dfce69246cc73f5c87fdf06030179a2114b767db1f083ff841c025d7dc00cd82435b9a90f695369e94df23d2ce45" +
    "8bc3b3283ad8bba2b8fa1ba62e2dce9accff3799aae7c840016f3ba8e0048c0b6cc4339af7161003a5beb864a0164b2c1c9237b64bc875" +
    "56994351b27506c33d4bcdfce0f9c491a7d6b0628c7c852be4f0a9c3132b2ed3a2c8881e9aab07e20e17deb074691be677776a78b5c502" +
    "e05d9bdde72126b3738695e2dd1a0a98a14247c65d8a7ee79432a092cb0721a12df798e44f7cfce0c498147a9b1");
    let rsaCommSpec = { n: nIn, algName: "RSA", specType: cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC };
    let rsaKeyPairSpec = {
        params: rsaCommSpec,
        sk: dIn,
        pk: eIn,
        algName: "RSA",
        specType: cryptoFramework.AsyKeySpecType.KEY_PAIR_SPEC
    };
    return rsaKeyPairSpec;
}

export default function AsyKeyGeneratorBySpecJsunit() {
    describe("AsyKeyGeneratorBySpecJsunit", function () {
        console.info("##########start AsyKeyGeneratorBySpecJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0100
         * @tc.name DSA Key generation scenario by spec
         * @tc.desc the asyKeySpec is genDsa2048CommonSpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_0100", 0, async function (done) {
            asyCallback.generateByCommonSpec(genDsa2048CommonSpec(), "DSA")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_1900 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0200
         * @tc.name DSA Key generation scenario by spec
         * @tc.desc the asyKeySpec is genDsa2048PubKeySpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_0200", 0, async function (done) {
            asyPromise.generateByPubKeySpec(genDsa2048PubKeySpec(), "DSA").then(data => {
                expect(data == null).assertTrue();
            }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_0200 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GenerateBySpec_Func_0300
         * @tc.name DSA Key generation scenario by spec
         * @tc.desc the asyKeySpec is genDsa2048KeyPairSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GenerateBySpec_Func_0300", 0, async function (done) {
            asyPromise.generateByKeyPairSpec(genDsa2048KeyPairSpec(), "DSA").then((data) => {
                expect(data == null).assertTrue();
            }).catch((err) => {
                console.error("Security_CryptoFramework_GenerateBySpec_Func_0300 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_GenerateBySpec_Func_0400
         * @tc.name DSA pubKey generate prikey failed
         * @tc.desc the asyKeySpec is genDsa2048PubKeySpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_GenerateBySpec_Func_0400", 0, async function (done) {
            asyCallback.generatePubTopriSpecFailed(genDsa2048PubKeySpec(), "DSA")
                .then(data => {
                    console.info("Security_CryptoFramework_GenerateBySpec_Func_0400 success : data:::" + data);
                    expect(true).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_0400 catch err " + err);
                expect(true).assertTrue();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0500
         * @tc.name ECC Key generation scenario by spec
         * @tc.desc the asyKeySpec is eccCommonSpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_0500", 0, async function (done) {
            asyCallback.generateByCommonSpec(
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC), "ECC")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_0500 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0600
         * @tc.name ECC Key generation scenario by spec
         * @tc.desc the asyKeySpec is eccPriKeySpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_0600", 0, async function (done) {
            asyCallback.generateByPriKeySpec(
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.PRIVATE_KEY_SPEC), "ECC")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_0600 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0700
         * @tc.name ECC Key generation scenario by spec
         * @tc.desc the asyKeySpec is eccPubKeySpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_0700", 0, async function (done) {
            asyPromise.generateByPubKeySpec(
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.PUBLIC_KEY_SPEC), "ECC")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_0700 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0800
         * @tc.name ECC Key generation scenario by spec
         * @tc.desc the asyKeySpec is eccKeyPairSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_0800", 0, async function (done) {
            asyPromise.generateByKeyPairSpec(
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.KEY_PAIR_SPEC), "ECC")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_0800 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0900
         * @tc.name ECC PriKey generation Pubkey
         * @tc.desc the asyKeySpec is eccPrikeySpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_0900", 0, async function (done) {
            asyPromise.generatePriTopubSpecFailed(
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.PRIVATE_KEY_SPEC), "ECC")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_0900 catch err " + err);
                expect(true).assertTrue();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1000
         * @tc.name ECC PubKey generation Prikey
         * @tc.desc the asyKeySpec is eccPubkeySpec, Use the callback Style of Interface
         */
                 it("Security_CryptoFramework_GeneratorBySpec_Func_1000", 0, async function (done) {
                     console.info("Security_CryptoFramework_GeneratorBySpec_Func_1000 start");
                     asyCallback.generatePubTopriSpecFailed(genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.PUBLIC_KEY_SPEC), "ECC")
                     .then((data) => {
                         expect(data == null).assertTrue();
                     }).catch(err => {
                         expect(true).assertTrue();
                     });
                     done();
                 }
                 );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1100
         * @tc.name RSA Key generation scenario by spec
         * @tc.desc the asyKeySpec is genRsa2048CommonSpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_1100", 0, async function (done) {
            asyCallback.generateByCommonSpec(genRsa2048CommonSpec(), "RSA")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_1100 catch err " + err);
                expect(true).assertTrue();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1200
         * @tc.name RSA Key generation scenario by spec
         * @tc.desc the asyKeySpec is genRsa2048PubKetSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_1200", 0, async function (done) {
            asyPromise.generateByPubKeySpec(genRsa2048PubKetSpec(), "RSA")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_1200 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1300
         * @tc.name RSA Key generation scenario by spec
         * @tc.desc the asyKeySpec is genRsa2048KeyPairSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_1300", 0, async function (done) {
            asyPromise.generateByKeyPairSpec(genRsa2048KeyPairSpec(), "RSA")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_1300 catch err " + err);
                expect(null).assertFail();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1400
         * @tc.name RSA pubKey generation prikey failed
         * @tc.desc the asyKeySpec is genRsa2048PubKetSpec, Use the callback Style of Interface
         */
                it("Security_CryptoFramework_GeneratorBySpec_Func_1400", 0, async function (done) {
                    console.info("Security_CryptoFramework_GeneratorBySpec_Func_1400 start");
                    asyCallback.generatePubTopriSpecFailed(genRsa2048PubKetSpec(), "RSA")
                    .then((data) => {
                        expect(data == null).assertTrue();
                    }).catch(err => {
                        console.error("Security_CryptoFramework_GeneratorBySpec_Func_1400 catch err " + err);
                        expect(null).assertFail();
                    });
                    done();
                }
                );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1500
         * @tc.name create key parser failed
         * @tc.desc the asyKeySpec is err parameter, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_1500", 0, async function (done) {
            asyCallback.generateCreateAsyKeyFailed(genEccCommonSpecErr(),
                genRsaKeyPairSpecErr(), genDsaKeyPairSpecErr()).then((data) => {
                expect(data == null).assertTrue();
            }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_1500 catch err " + err);
                expect(true).assertTrue();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1600
         * @tc.name relatively pubkey and prikey
         * @tc.desc the asyKeySpec is genDsaKeyPairSpecErr, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_1600", 0, async function (done) {
            promise.keyGenerationBySpecProcess(genDsaKeyPairSpecErr())
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_1600 catch err " + err);
                expect(true).assertTrue();
            });
            done();
        }
        );

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_1700
         * @tc.name relatively pubkey and prikey
         * @tc.desc the asyKeySpec is "DSA", Use the callback Style of Interface
         */
        it("Security_CryptoFramework_GeneratorBySpec_Func_1700", 0, async function (done) {
            callback.keyGenerationBySpecProcess("DSA")
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_GeneratorBySpec_Func_1700 catch err " + err);
                expect(err.code == 401).assertTrue();
            });
            done();
        });

    });
}