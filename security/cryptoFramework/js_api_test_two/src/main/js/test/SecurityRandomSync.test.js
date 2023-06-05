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

import { describe, beforeAll, afterEach, it, expect } from "@ohos/hypium";
import * as asyRandomCommon from "./utils/securityrandom/publicSecurityRandomCommon";
import cryptoFrameworks from "@ohos.security.cryptoFramework";

export default function SecurityRandomSyncJsunit() {
    describe("SecurityRandomSyncJsunit", function () {
        console.info("##########start SecurityRandomSyncJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_RandomSync_Func_0100
         * @tc.name Synchronous generation of random numbers
         * @tc.desc the length of random is 12, use sync style of interface
         */
        it("Security_CryptoFramework_RandomSync_Func_0100", 0, async function (done) {
            var rand = cryptoFrameworks.createRandom();
            try {
                rand.generateRandomSync(12);
            } catch (err) {
                console.error(
                    "RandomSync 0 catch error:" +
                    err
                );
                console.info("[RandomSync]: 0 error code: 401");
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_RandomSync_Func_0200
         * @tc.name Synchronous generation of random number anomalies and parameter transfer
         * @tc.desc incoming exception parameters, use sync style of interface
         */
        it("Security_CryptoFramework_RandomSync_Func_0200", 0, async function (done) {
            var rand = cryptoFrameworks.createRandom();
            try {
                rand.generateRandomSync(0);
            } catch (err) {
                console.error(
                    "RandomSync 0 catch error:" +
                    err
                );
                console.info("[RandomSync]: 0 error code: 401");
                expect(err.code == 401).assertTrue();
            }

            try {
                rand.generateRandomSync("string");
            } catch (err) {
                console.error(
                    "RandomSync string catch error:" +
                    err
                );
                console.info("[RandomSync]: string error code: 401");
                expect(err.code == 401).assertTrue();
            }

            try {
                rand.generateRandomSync(-1);
            } catch (err) {
                console.error(
                    "RandomSync -1 catch error:" +
                    err
                );
                console.info("[RandomSync]: -1 error code: 401");
                expect(err.code == 401).assertTrue();
            }

            try {
                rand.generateRandomSync(null);
            } catch (err) {
                console.error(
                    "RandomSync null catch error:" +
                    err
                );
                console.info("[RandomSync]: null error code: 401");
                expect(err.code == 401).assertTrue();
            }

            try {
                rand.generateRandomSync(6, 12);
            } catch (err) {
                console.error(
                    "RandomSync 6, 12 catch error:" +
                    err
                );
                console.info("[RandomSync]: 6, 12 error code: 401");
                expect(err.code == 401).assertTrue();
            }

            try {
                rand.generateRandomSync();
                console.info("0800 RandomSync ok");
            } catch (err) {
                console.error(
                    "0800 RandomSync catch error:" +
                    err
                );
                console.info("[RandomSync]: error code: 401");
                expect(err.code == 401).assertTrue();
            }
            
            try {
                rand.generateRandomSync(124384);
            } catch (err) {
                console.error(
                    "0800 RandomSync catch error:" +
                    err
                );
                console.info("[RandomSync]: error code: 401");
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_RandomSync_Func_0300
         * @tc.name Obtain the algorithm corresponding to generating random numbers
         * @tc.desc not transmitting ginseng, use sync style of interface
         */
        it("Security_CryptoFramework_RandomSync_Func_0300", 0, async function (done) {
            var rand = cryptoFrameworks.createRandom();
            try {
                console.info("RandomSync rand.algName :" + rand.algName);
                expect(rand != null).assertTrue();
            } catch (err) {
                console.error(
                    "0400 RandomSync catch error:" +
                    err
                );
                console.info("[RandomSync]: error code: 401");
                expect(err.code == 401).assertTrue();
            }
            done();
        });

        /**
         * @tc.number Security_CryptoFramework_Enum_Func_0100
         * @tc.name test enumerated values
         * @tc.desc cover 100% Enumerated values
         */
        it("Security_CryptoFramework_Enum_Func_0100", 0, async function (done) {
            asyRandomCommon.testRandomEnumCommon();
            done();
        });
    });
}
