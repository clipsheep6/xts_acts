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
import * as DigPromise from "./utils/digestalgorithm/publicDigestPromise";
import * as DigCallback from "./utils/digestalgorithm/publicDigestCallback";

export default function DigestAlgorithmSm3StabJsunit() {
  describe("DigestAlgorithmSm3StabJsunit", function () {
    console.info("##########start DigestAlgorithmSm3StabJsunit##########");
    beforeAll(function () {});
    afterEach(function () {});

    /**
     * @tc.number Security_CryptoFramework_MD_Stab_0100
     * @tc.name Summary Calculation stability testing
     * @tc.desc the asyAlgoName is "SM3", Use the Promise Style of Interface
     */
    it("Security_CryptoFramework_MD_Stab_0100", 0, async function (done) {
      try {
        let count;
        const starttimestamp = Date.parse(new Date());
        console.info("mdStabilityProcess start time is :" + starttimestamp);
        for (let index = 0; index < 1000; index++) {
          DigPromise.testMDDigestPromise("SM3");
          count = index;
        }
        const endtimestamp = Date.parse(new Date());
        console.info("mdStabilityProcess end time is :" + endtimestamp);
        let timeconsum = endtimestamp - starttimestamp;
        console.info("mdStabilityProcess timeconsum is :" + timeconsum);
        expect(count == 999).assertTrue();
      }
      catch(err) {
        console.error("mdStabilityProcess catch err:" + err);
        expect(null).assertFail();
      };
      done();
    });


    /**
     * @tc.number Security_CryptoFramework_HMAC_Stab_0100
     * @tc.name Calculate message authentication code stability testing
     * @tc.desc the asyAlgoName is "SM3" and "AES128", Use the Callback Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Stab_0100", 0, async function (done) {
      try {
        let count;
        const starttimestamp = Date.parse(new Date());
        console.info("macStabilityProcess start time is :" + starttimestamp);
        for (let index = 0; index < 1000; index++) {
          DigCallback.testHMACDigestCallback("SM3", "AES128");
          count = index;
        }
        const endtimestamp = Date.parse(new Date());
        console.info("macStabilityProcess end time is :" + endtimestamp);
        let timeconsum = endtimestamp - starttimestamp;
        console.info("macStabilityProcess timeconsum is :" + timeconsum);
        expect(count == 999).assertTrue();
      }
      catch(err) {
        console.error("macStabilityProcess catch err:" + err);
        expect(null).assertFail();
      };
      done();
    });
  });
}

