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

import { describe, beforeAll, afterEach, it, expect } from "@ohos/hypium";
import { testHMACDigestPromise, testMDDigestPromise } from "./utils/digestalgorithm/publicDigestPromise";

const TIMEOUT = 500;

export default function DigestAlgorithmJsunit() {
    describe("DigestAlgorithmJsunit", function () {
        console.info("##########start DigestAlgorithmJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        function sleep(delay) {
            var start = new Date().getTime();
            var next = new Date().getTime();
            while (next - start < delay) {
                next = new Date().getTime();
            }
        }

        /**
         * @tc.number Security_crypto_framework_MD_0100
         * @tc.name Test MD5 for MD digest algotithm
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_MD_0100",
            0,
            async function (done) {
                await testMDDigestPromise("MD5");
                done();
            }
        );

        /**
         * @tc.number Security_crypto_framework_HMAC_0100
         * @tc.name Test SHA1 for HMAC digest algorithm
         * @tc.desc Use the Promise Style of Interface
         */
        it(
            "Security_crypto_framework_HMAC_0100",
            0,
            async function (done) {
                await testHMACDigestPromise("SHA1", "AES128");
                done();
            }
        );
    });
}
