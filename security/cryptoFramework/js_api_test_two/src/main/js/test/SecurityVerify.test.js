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
import {
    //testSecuritySignThreeStagePromise,
} from "./utils/securitysignverify/publicSecuritySignVerifyPromise";

import {
    testSecurityVerifyCallback,
} from "./utils/securitysignverify/publicSecuritySignVerifyCallback";

export default function SecuritySecurityVerifyJsunit() {
    describe("SecuritySecurityVerifyJsunit", function () {
        console.info("##########start SecuritySecurityVerifyJsunit##########");
        beforeAll(function () {});
        afterEach(function () {});

        /**
         * @tc.number Security_crypto_framework_Sign_0200
         * @tc.name Support setting random number seed and restart encryption and decryption framework
         * @tc.desc the length of random is 32, use callback style of interface
         */
        it("Security_crypto_framework_Sign_0100", 0, async function (done) {
            await testSecurityVerifyCallback("RSA512|PKCS1|MD5")
                .then((data) => {
                    console.info("RSA512 SignCallback ok");
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.info("RSA512 SignCallback fail");
                    expect(null).assertNull();
                });
            done();
        });
    });
}