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