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
        //console.info("RandomSync is not null.");
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
        //console.info("RandomSync is null.");
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

async function testGetRandomSync(length) {
  var rand;
  var srand;
  const timestamp = Date.parse(new Date());
  console.log("GetRandomSync start time is :" + timestamp);
  rand = cryptoFramework.createRandom();
  expect(rand != null).assertTrue();
    try {
      //console.info("RandomSync is not null.");
      srand = rand.generateRandomSync(length);
      console.info("[GetRandomSync] srand data:" + srand.data);
    }catch(err) {
      console.error(
        "[GetRandomSync]generateRandom catch error:" +
        err +
        "[GetRandomSync]: error code: " +
        err.code
      );
      console.info("[GetRandomSync] resolve");
      return;
    };
  console.info("GetRandomSync end.");
}

export {
  testRandomSync,
  testGetRandomSync,
};
