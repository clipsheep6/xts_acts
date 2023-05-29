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

//async function testCreatRandomPromise(length) {
//  var rand;
//
//  return new Promise((resolve, reject) => {
//    const timestamp = Date.parse(new Date());
//    console.log("CreatRandomPromise start time is :" + timestamp);
//    cryptoFramework.createRandom().then(() => {
//        console.log("[CreatRandomPromise] rand set Seed is success！");
//        resolve();
//      }).catch((err) => {
//        console.error("[CreatRandomPromise]catch err:" + err);
//        console.error("[CreatRandomPromise]catch err.code:" + err.code);
//        expect(err.code == 401).assertTrue();
//        reject(err);
//      });
//  });
//}
//
//async function testCreatRandomMultiParameterPromise(length) {
//  var rand;
//
//  return new Promise((resolve, reject) => {
//    const timestamp = Date.parse(new Date());
//    console.log("CreatRandomMultiParameterPromise start time is :" + timestamp);
//    cryptoFramework.createRandom(length).then(() => {
//      console.log("[CreatRandomMultiParameterPromise] rand set Seed is success！");
//      resolve();
//    }).catch((err) => {
//      console.error("[CreatRandomMultiParameterPromise]catch err:" + err);
//      console.error("[CreatRandomMultiParameterPromise]catch err.code:" + err.code);
//      expect(err.code == 401).assertTrue();
//      reject(err);
//    });
//  });
//}

async function testRandomPromise(length) {
  var rand;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("RandomPromise start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    rand
      .generateRandom(length)
      .then((randData) => {
        const timestampend = Date.parse(new Date());
        console.log("RandomPromise end time is :" + timestampend);
        expect(randData != null).assertTrue();
        console.log(
          "[RandomPromise] rand result first:" + uInt8ArrayToShowStr(randData.data)
        );
        let result = rand.setSeed(randData);
        return result;
      })
      .then(() => {
        console.log("[RandomPromise] rand set Seed is success！");
      })
      .catch((err) => {
        console.error("[RandomPromise]catch err1:" + err);
        reject(err);
      });

    rand
      .generateRandom(length)
      .then((randData) => {
        const timestampend = Date.parse(new Date());
        console.log("RandomPromise end time is :" + timestampend);
        expect(randData != null).assertTrue();
        console.log(
          "[RandomPromise] rand result second: " + uInt8ArrayToShowStr(randData.data)
        );
        resolve();
      })
      .catch((err) => {
        console.error("[RandomPromise]catch err2:" + err);
        reject(err);
      });
  });
}

async function testRandomAbnormalPromise(length) {
  var rand;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("Abnormal start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    rand
      .generateRandom(length)
      .then((randData) => {
        const timestampend = Date.parse(new Date());
        console.log("Abnormal end time is :" + timestampend);
        expect(randData != null).assertTrue();
        console.log(
          "[Abnormal] rand result first:" + uInt8ArrayToShowStr(randData.data)
        );
        let result = rand.setSeed(randData);
        return result;
      })
      .then(() => {
        console.log("[Abnormal] rand set Seed is success！");
      })
      .catch((err) => {
        console.error("[Abnormal]catch err1:" + err);
        reject(err);
      });

    rand
      .generateRandom(length)
      .then((randData) => {
        const timestampend = Date.parse(new Date());
        console.log("Abnormal end time is :" + timestampend);
        expect(randData != null).assertTrue();
        console.log(
          "[Abnormal] rand result second: " + uInt8ArrayToShowStr(randData.data)
        );
        resolve();
      })
      .catch((err) => {
        console.error("[Abnormal]catch err2:" + err);
        reject(err);
      });
  });
}

async function testRandomSyncAbnormalPromise(length) {
  var rand;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SyncAbnormal start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    rand
      .generateRandomSync(length)
      .then((randData) => {
        const timestampend = Date.parse(new Date());
        console.log("SyncAbnormal end time is :" + timestampend);
        expect(randData != null).assertTrue();
        console.log(
          "[SyncAbnormal] rand result first:" + uInt8ArrayToShowStr(randData.data)
        );
        let result = rand.setSeed(randData);
        return result;
      })
      .then(() => {
        console.log("[SyncAbnormal] rand set Seed is success！");
      })
      .catch((err) => {
        console.error("[SyncAbnormal]catch err1:" + err);
        reject(err);
      });

    rand
      .generateRandomSync(length)
      .then((randData) => {
        const timestampend = Date.parse(new Date());
        console.log("RandomPromise end time is :" + timestampend);
        expect(randData != null).assertTrue();
        console.log(
          "[Promise] rand result second: " + uInt8ArrayToShowStr(randData.data)
        );
        resolve();
      })
      .catch((err) => {
        console.error("[promise]catch err2:" + err);
        reject(err);
      });
  });
}

export {
  //testCreatRandomPromise,
  //testCreatRandomMultiParameterPromise,
  testRandomPromise,
  testRandomAbnormalPromise,
  testRandomSyncAbnormalPromise,
};
