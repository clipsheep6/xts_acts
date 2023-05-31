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
import * as asyCommon from "./utils/common/publicDoSpec";

function genRsa2048KeyPairSpec() {
    let nIn = BigInt("0x9260d0750ae117eee55c3f3deaba74917521a262ee76007cdf8a56755ad73a1598a1408410a01434c3f5bc54a" +
    "88b57fa19fc4328daea0750a4c44e88cff3b2382621b80f670464433e4336e6d003e8cd65bff211da144b88291c2259a00a72b711c11" +
    "6ef7686e8fee34e4d933c868187bdc26f7be071493c86f7a5941c3510806ad67b0f94d88f5cf5c02a092821d8626e8932b65c5bd8c92" +
    "049c210932b7afa7ac59c0e886ae5c1edb00d8ce2c57633db26bd6639bff73cee82be9275c402b4cf2a4388da8cf8c64eefe1c5a0f5a" +
    "b8057c39fa5c0589c3e253f0960332300f94bea44877b588e1edbde97cf2360727a09b775262d7ee552b3319b9266f05a25");
    let eIn = BigInt("0x010001");
    let dIn = BigInt("0x6a7df2ca63ead4dda191d614b6b385e0d9056a3d6d5cfe07db1daabee022db08212d97613d3328e0267c9dd23d" +
    "787abde2afcb306aeb7dfce69246cc73f5c87fdf06030179a2114b767db1f083ff841c025d7dc00cd82435b9a90f695369e94df23d2ce" +
    "458bc3b3283ad8bba2b8fa1ba62e2dce9accff3799aae7c840016f3ba8e0048c0b6cc4339af7161003a5beb864a0164b2c1c9237b64bc" +
    "87556994351b27506c33d4bcdfce0f9c491a7d6b0628c7c852be4f0a9c3132b2ed3a2c8881e9aab07e20e17deb074691be677776a78b5" +
    "c502e05d9bdde72126b3738695e2dd1a0a98a14247c65d8a7ee79432a092cb0721a12df798e44f7cfce0c498147a9b1");
    return asyCommon.genRsaKeyPairSpec(nIn, eIn, dIn);
}

function genDsa2048KeyPairSpec() {
    return asyCommon.genDsa2048KeyPairSpecBigE();
}

function genEccKeyTypeSpec(keyType) {
    return asyCommon.genEccKeySpec(keyType);
}

export default function AsyGetKeySpecBySpecJsunit() {
    describe("AsyGetKeySpecBySpecJsunit", function () {
        console.info("##########start AsyGetKeySpecBySpecJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_GeneratorBySpec_Func_0100
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0100", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0100 start");
            asyCallback.rsaPubGetAsyKeySpec(genRsa2048KeyPairSpec()).then((data) => {
                expect(data == null).assertTrue();
            }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0100 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0200
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0200", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0200 stare");
            asyPromise.dsaPubGetAsyKeySpec(genDsa2048KeyPairSpec()).then(data => {
                expect(data == null).assertTrue();
            }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0200 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0300
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0300", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0300 stare");
            asyCallback.eccPubGetAsyKeySpec(genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC))
                .then(data => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0300 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0400
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0400", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0400 stare");
            asyPromise.rsaPriGetAsyKeySpec(genRsa2048KeyPairSpec())
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0400 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0500
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0500", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0500 stare");
            asyCallback.dsaPriGetAsyKeySpec(genDsa2048KeyPairSpec())
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0500 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0600
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0600", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0600 stare");
            asyPromise.eccPriGetAsyKeySpec(genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC))
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0600 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0700
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0700", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0700 stare");
            asyCallback.PubGetAsyKeySpecFailed(genRsa2048KeyPairSpec(), genDsa2048KeyPairSpec(),
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC)).then((data) => {
                expect(data == null).assertTrue();
            }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0700 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0800
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0800", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0800 stare");
            asyPromise.PriGetAsyKeySpecFailed(genRsa2048KeyPairSpec(), genDsa2048KeyPairSpec(),
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC)).then((data) => {
                expect(data == null).assertTrue();
            }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0800 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0900
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0900", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_0900 stare");
            asyCallback.clearMemGetAsyKeySpec(genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC))
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0900 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_1000
         * @tc.name Test DSA creat asy key generator
         * @tc.desc the asyAlgoName is DSA1024, Use the commen Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_1000", 0, async function (done) {
            console.info("Security_CryptoFramework_AsyKeySpec_Func_1000 stare");
            asyPromise.clearMemGetAsyKeySpec(genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC))
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_1000 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });
    });
}