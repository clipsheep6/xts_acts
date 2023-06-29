/*
 * Copyright (C) 2022-2023 Huawei Device Co., Ltd.
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
import * as symPromise from "./utils/symmetric/publicSymmetricPromise";

export default function SecurityCipherSM2SM4StabJsunit() {
    describe("SecurityCipherSM2SM4StabJsunit", function () {
        console.log("##########start SecurityCipherSM2SM4StabJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_CipherSMX_Stab_0100
         * @tc.name Encryption and decryption stability testing
         * @tc.desc the asyAlgoName is "SM4128|CTR|NoPadding", Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_CipherSMX_Stab_0100", 0, async function (done) {
            try {
                let count;
                const starttimestamp = Date.parse(new Date());
                console.info("cipherStabilityProcess start time is :" + starttimestamp);
                for (let index = 0; index < 1000; index++) {
                    symPromise.encryptAndDecryptNormalProcess("SM4128", "SM4128|CTR|NoPadding");
                    count = index;
                }
                const endtimestamp = Date.parse(new Date());
                console.info("cipherStabilityProcess end time is :" + endtimestamp);
                let timeconsum = endtimestamp - starttimestamp;
                console.info("cipherStabilityProcess timeconsum is :" + timeconsum);
                expect(count == 999).assertTrue();
            }
            catch(err) {
                console.error("cipherStabilityProcess catch err:" + err);
                expect(null).assertFail();
            };
            done();
        });
    });
}


