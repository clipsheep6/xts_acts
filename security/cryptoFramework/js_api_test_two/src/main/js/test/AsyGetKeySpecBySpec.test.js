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
    return asyCommon.genRsa2048KeyPairSpec();
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
         * @tc.name RSA pubKey parsing and parameter acquisition
         * @tc.desc the asyKeySpec is genRsa2048KeyPairSpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0100", 0, async function (done) {
            asyCallback.rsaPubGetAsyKeySpec(genRsa2048KeyPairSpec())
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0100 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0200
         * @tc.name DSA pubKey parsing and parameter acquisition
         * @tc.desc the asyKeySpec is genDsa2048KeyPairSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0200", 0, async function (done) {
            asyPromise.dsaPubGetAsyKeySpec(genDsa2048KeyPairSpec())
                .then(data => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0200 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0300
         * @tc.name ECC pubKey parsing and parameter acquisition
         * @tc.desc the asyKeySpec is eccCommonSpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0300", 0, async function (done) {
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
         * @tc.name RSA priKey parsing and parameter acquisition
         * @tc.desc the asyKeySpec is genRsa2048KeyPairSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0400", 0, async function (done) {
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
         * @tc.name DSA priKey parsing and parameter acquisition
         * @tc.desc the asyKeySpec is genDsa2048KeyPairSpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0500", 0, async function (done) {
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
         * @tc.name ECC priKey parsing and parameter acquisition
         * @tc.desc the asyKeySpec is eccCommonSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0600", 0, async function (done) {
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
         * @tc.name pubKey parsing and parameter acquisition failed
         * @tc.desc the asyKeySpec is err parameter, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0700", 0, async function (done) {
            asyCallback.PubGetAsyKeySpecFailed(genRsa2048KeyPairSpec(), genDsa2048KeyPairSpec(),
            genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC))
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0700 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0800
         * @tc.name priKey parsing and parameter acquisition failed
         * @tc.desc the asyKeySpec is err parameter, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0800", 0, async function (done) {
            asyPromise.PriGetAsyKeySpecFailed(genRsa2048KeyPairSpec(), genDsa2048KeyPairSpec(),
                genEccKeyTypeSpec(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC))
                .then((data) => {
                    expect(data == null).assertTrue();
                }).catch(err => {
                console.error("Security_CryptoFramework_AsyKeySpec_Func_0800 catch err " + err);
                expect(null).assertFail();
            });
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_AsyKeySpec_Func_0900
         * @tc.name pubkey zeroing
         * @tc.desc the asyKeySpec is eccCommonSpec, Use the callback Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_0900", 0, async function (done) {
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
         * @tc.name prikey zeroing
         * @tc.desc the asyKeySpec is eccCommonSpec, Use the promise Style of Interface
         */
        it("Security_CryptoFramework_AsyKeySpec_Func_1000", 0, async function (done) {
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