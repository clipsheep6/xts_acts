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
import * as asyPromise from "./utils/asymmetric/publicAsymmetricPromise";
import * as common from "./utils/common/publicDoSpec";

function genRsa2048KeyPairSpec() {
    let nIn = BigInt("0x9260d0750ae117eee55c3f3deaba74917521a262ee76007cdf8a56755ad73a1598a1408410a01434c3f5bc54a88b57f" +
    "a19fc4328daea0750a4c44e88cff3b2382621b80f670464433e4336e6d003e8cd65bff211da144b88291c2259a00a72b711c116ef7686e8fee" +
    "34e4d933c868187bdc26f7be071493c86f7a5941c3510806ad67b0f94d88f5cf5c02a092821d8626e8932b65c5bd8c92049c210932b7afa7ac" +
    "59c0e886ae5c1edb00d8ce2c57633db26bd6639bff73cee82be9275c402b4cf2a4388da8cf8c64eefe1c5a0f5ab8057c39fa5c0589c3e253f0" +
    "960332300f94bea44877b588e1edbde97cf2360727a09b775262d7ee552b3319b9266f05a25");
    let eIn = BigInt("0x010001");
    let dIn = BigInt("0x6a7df2ca63ead4dda191d614b6b385e0d9056a3d6d5cfe07db1daabee022db08212d97613d3328e0267c9dd23d787" +
    "abde2afcb306aeb7dfce69246cc73f5c87fdf06030179a2114b767db1f083ff841c025d7dc00cd82435b9a90f695369e94df23d2ce458bc3" +
    "b3283ad8bba2b8fa1ba62e2dce9accff3799aae7c840016f3ba8e0048c0b6cc4339af7161003a5beb864a0164b2c1c9237b64bc875569943" +
    "51b27506c33d4bcdfce0f9c491a7d6b0628c7c852be4f0a9c3132b2ed3a2c8881e9aab07e20e17deb074691be677776a78b5c502e05d9bdd" +
    "e72126b3738695e2dd1a0a98a14247c65d8a7ee79432a092cb0721a12df798e44f7cfce0c498147a9b1");
    return common.genRsaKeyPairSpec(nIn, eIn, dIn);
}

export default function SecurityCipherJsunit() {
    describe("SecurityCipherJsunit", function () {
        console.info("##########start SecurityCipherJsunit##########");
        beforeAll(function () {
        });
        afterEach(function () {
        });

        /**
         * @tc.number Security_CryptoFramework_Cipher_Stab_0100
         * @tc.name Test encryptAndDecryptTimesProcess
         * @tc.desc the asyAlgoName is genRsa2048KeyPairSpec, Use the Promise Style of Interface
         */
        it("Security_CryptoFramework_Cipher_Stab_0100", 0, async function (done) {
            console.info("Security_CryptoFramework_Cipher_Stab_0100 stare");
            asyPromise.encryptAndDecryptTimesProcess(genRsa2048KeyPairSpec(), "RSA|PKCS1_OAEP|SHA1|MGF1_MD5")
                .then((data) => {
                    expect(data == null).assertTrue();
                })
                .catch((err) => {
                    console.error("Security_CryptoFramework_Cipher_Stab_0100 catch  error: " + err);
                    expect(null).assertFail();
                });
            console.info("Security_CryptoFramework_Cipher_Stab_0100 end");
            done();
        }
        );
    });
}