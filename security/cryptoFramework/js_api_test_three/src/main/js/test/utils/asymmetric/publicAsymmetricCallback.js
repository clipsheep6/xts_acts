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

import { expect } from "@ohos/hypium";
import cryptoFramework from "@ohos.security.cryptoFramework";

async function randomSync(length) {
  var rand;
  const timestamp = Date.parse(new Date());
  console.log("RandomSync start time is :" + timestamp);
  rand = cryptoFramework.createRandom();
  expect(rand != null).assertTrue();
  try {
    rand.generateRandomSync(length);
  }catch(err) {
    console.error(
      "[RandomSync]generateRandom catch error:" +
      err
    );
    expect(err.code != null).assertTrue();
    return;
  };
}

async function randomSyncabilityProcess() {
  return new Promise((resolve, reject) => {
    try {
      const starttimestamp = Date.parse(new Date());
      console.info("testRandomSyncabilityProcess start time is :" + starttimestamp);
      for (let index = 0; index < 1000; index++) {
        console.info("[Callback] testRandomSyncabilityProcess start index:" + index);
        randomSync(32);
        console.info("[Callback] testRandomSyncabilityProcess index:" + index);
      }
      const endtimestamp = Date.parse(new Date());
      console.info("testRandomSyncabilityProcess end time is :" + endtimestamp);
      let timeconsum = endtimestamp - starttimestamp;
      console.info("testRandomSyncabilityProcess timeconsum is :" + timeconsum);
      resolve();
    }
    catch(err) {
      console.error("[Callback] testRandomSyncabilityProcess catch err:" + err);
      expect(err.code != null).assertTrue();
      reject(err);
    };
  });
}

export {
  randomSync,
  randomSyncabilityProcess,
};
