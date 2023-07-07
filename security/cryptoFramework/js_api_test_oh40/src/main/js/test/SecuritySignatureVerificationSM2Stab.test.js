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
import * as asyCallback from "./utils/asymmetric/publicAsymmetricCallback";

export default function SecuritySignatureVerificationSM2StabJsunit() {
    describe("SecuritySignatureVerificationSM2StabJsunit", function () {
        console.log("##########start SecuritySignatureVerificationSM2StabJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_SignatureVerificationSM2_Stab_0100
         * @tc.name Signature and verification stability testing
         * @tc.desc the asyAlgoName is "SM2_256|SM3", Use the Callback Style of Interface
         */
        it("Security_CryptoFramework_SignatureVerificationSM2_Stab_0100", 0, async function (done) {
            try {
                let count;
                const starttimestamp = Date.parse(new Date());
                console.info("signAndVerifyStabilityProcess start time is :" + starttimestamp);
                for (let index = 0; index < 1000; index++) {
                    asyCallback.signAndVerifyNormalProcess("SM2_256", "SM2_256|SM3");
                    count = index;
                }
                const endtimestamp = Date.parse(new Date());
                console.info("signAndVerifyStabilityProcess end time is :" + endtimestamp);
                let timeconsum = endtimestamp - starttimestamp;
                console.info("signAndVerifyStabilityProcess timeconsum is :" + timeconsum);
                expect(count == 999).assertTrue();
            }
            catch(err) {
                console.error("signAndVerifyStabilityProcess catch err:" + err);
                expect(null).assertFail();
            };
            done();
        });
    });
}
