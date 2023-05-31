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
import { expect } from "@ohos/hypium";
import cryptoFramework from "@ohos.security.cryptoFramework";
import {
  stringTouInt8Array,
  uInt8ArrayToShowStr,
  uInt8ArrayToString,
} from "../common/publicDoString";

async function testRandomSync(length) {
  var rand;
    const timestamp = Date.parse(new Date());
    console.log("RandomSync start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();

    if (length != null) {
      try {
        rand.generateRandomSync(length);
      }catch(err) {
        console.error(
          "[RandomSync]generateRandom catch error:" +
          err +
          "[RandomSync]: error code: " +
          err.code
        );
        console.info("[RandomSync] resolve");
        return;
      };
    } else {
      try {
        rand.generateRandomSync(length);
      } catch (err) {
        console.error(
          "[RandomSync]RandomSync catch err1:" +
          err +
          "[RandomSync]: error code: " +
          err.code
        );
        console.info("[RandomSync] resolve");
        return;
      }
    }
  console.info("RandomSync end.");
}

async function testRandomSyncabilityProcess() {
  return new Promise((resolve, reject) => {
    try {
      const starttimestamp = Date.parse(new Date());
      console.info("testRandomSyncabilityProcess start time is :" + starttimestamp);
      for (let index = 0; index < 1000; index++) {
        console.info("[promise] testRandomSyncabilityProcess start index:" + index);
        //sleep(600);
        testRandomSync(32);
        console.info("[promise] testRandomSyncabilityProcess index:" + index);
      }
      const endtimestamp = Date.parse(new Date());
      console.info("testRandomSyncabilityProcess end time is :" + endtimestamp);
      let timeconsum = endtimestamp - starttimestamp;
      console.info("testRandomSyncabilityProcess timeconsum is :" + timeconsum);
      resolve();
    }
    catch(err) {
      console.error("[promise] testRandomSyncabilityProcess catch err:" + err);
      reject(err);
    };
  });
}

export {
  testRandomSync,
  testRandomSyncabilityProcess,
};
