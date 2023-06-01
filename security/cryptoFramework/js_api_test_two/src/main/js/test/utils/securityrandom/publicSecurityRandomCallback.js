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
import { expect } from "@ohos/hypium";
import cryptoFramework from "@ohos.security.cryptoFramework";
import {
  stringTouInt8Array,
  uInt8ArrayToShowStr,
  uInt8ArrayToString,
} from "../common/publicDoString";

async function testCreatRandomCallback(length) {
  var rand;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("CreatRandomCallback start time is :" + timestamp);
    try {
      if (length) {
        rand = cryptoFramework.createRandom(length);
        console.info("CreatRandomCallback 111");
        console.info("CreatRandomCallback rand.algName" + rand.algName);
        reject();
      } else {
        rand = cryptoFramework.createRandom();
        console.info("CreatRandomCallback 222");
        resolve();
      }
    }catch(error) {
      console.error(
        "[CreatRandomCallback]CreatRandomCallback catch error:" +
        error +
        "[CreatRandomCallback]: error code: " +
        error.code
      );
      console.info("[CreatRandomCallback]: error code: 401");
      expect(error.code == 401).assertTrue();
      reject(error);
    }
  });
}

async function testRandomCallback(length) {
  var rand;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("RandomCallback start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    rand.generateRandom(length, (err, randData) => {
      const timestampend = Date.parse(new Date());
      console.info("RandomCallback end time is :" + timestampend);
      if (err) {
        console.error("[callback]generateRandom catch err1:" + err);
        reject(err);
      } else {
        expect(randData != null).assertTrue();
        console.info(
          "[callback] rand result first:" + uInt8ArrayToShowStr(randData.data)
        );
        try {
          rand.setSeed(randData);
        } catch (err1) {
          reject(err1);
        }
      }
    });

    rand.generateRandom(length, (err, randData) => {
      const timestampend = Date.parse(new Date());
      console.info("RandomCallback end time is :" + timestampend);
      if (err) {
        console.error("[callback]generateRandom catch err2:" + err);
        reject(err);
      } else {
        expect(randData != null).assertTrue();
        console.info(
          "[callback] rand result second:" + uInt8ArrayToShowStr(randData.data)
        );
        resolve();
      }
    });
  });
}

async function testRandomAbnormalCallback(length) {
  var rand;
  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("RandomAbnormal start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    if (length != null) {
      try {
              console.info("RandomAbnormal is not null.");

              rand.generateRandom(length);
              const timestampend = Date.parse(new Date());
              console.info("RandomAbnormal 111 end time is :" + timestampend);
              reject();
           }catch(error) {
            console.error(
              "[RandomAbnormal]generateRandom catch error:" +
              error +
              "[RandomAbnormal]: error code: " +
              error.code
            );
            console.info("[RandomAbnormal] resolve");
            reject(error);
      };
    } else {
      try {
        console.info("RandomAbnormal is null.");
        rand.generateRandom(length);
        const timestampend = Date.parse(new Date());
        console.info("RandomAbnormal end time is :" + timestampend);
        reject();
      } catch (error) {
        console.error(
          "[RandomAbnormal]RandomAbnormal catch err1:" +
          error +
          "[RandomAbnormal]: error code: " +
          error.code
        );
        console.info("[RandomAbnormal] resolve");
        reject(error);
      }
    }
  });
}

async function testRandomNotParameterCallback() {
  var rand;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("RandomNotParameter start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    try {
      console.info("RandomNotParameter is not null.");
      rand.generateRandom();
      const timestampend = Date.parse(new Date());
      console.info("RandomNotParameter 111 end time is :" + timestampend);
      reject();
    }catch(error) {
      console.error(
        "[RandomNotParameter]RandomNotParameter catch error:" +
        error +
        "[RandomNotParameter]: error code: " +
        error.code
      );
      console.info("[RandomNotParameter]: error code: 401");
      expect(error.code == 401).assertTrue();
      reject(error);
    }
  });
}

async function testRandomMultiParameterCallback(length, data) {
  var rand;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("RandomDoubleParameter start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    try {
      console.info("RandomDoubleParameter is not null.");
      rand.generateRandom(length, data);
      const timestampend = Date.parse(new Date());
      console.info("RandomDoubleParameter 111 end time is :" + timestampend);
      reject();
    }catch(error) {
      console.error(
        "[RandomDoubleParameter]RandomDoubleParameter catch error:" +
        error +
        "[RandomDoubleParameter]: error code: " +
        error.code
      );
      console.info("[RandomDoubleParameter]: error code: 401");
      expect(error.code == 401).assertTrue();
      reject(error);
    }
  });
}

async function testRandomLengthCallback(length) {
  var rand;
  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("RandomLength start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    if (length != null) {
      rand.generateRandom(length, (err, randData) => {
        const timestampend = Date.parse(new Date());
        console.info("RandomLength end time is :" + timestampend);
        if (err) {
          console.error(
            "[callback]generateRandom catch error:" +
              err +
              "[callback]: error code: " +
              err.code
          );
          console.info("[callback] 401");
          expect(err.code == 401).assertTrue();
          resolve();
        } else {
          console.info("[callback] != null");
          expect(randData != null).assertTrue();
          reject(err);
        }
      });
    } else {
      try {
        console.info("[callback] random");
        rand.generateRandom(length);
        const timestampend = Date.parse(new Date());
        console.info("RandomLength end time is :" + timestampend);
        reject();
      } catch (error) {
        console.error(
          "[callback]generateRandom catch err1:" +
            error +
            "[callback]: error code: " +
            error.code
        );
        console.info("[callback] resolve");
        reject(error);
      }
    }
  });
}

async function testRandomCallbackSeed(data) {
  var rand;
  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("RandomCallbackSeed start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    try {
      rand.setSeed(data);
      const timestampend = Date.parse(new Date());
      console.info("RandomCallbackSeed end time is :" + timestampend);
      reject();
    } catch (error) {
      console.error(
        "[callback]setSeed catch err:" +
          error +
          "[callback]: error code: " +
          error.code
      );
      expect(error.code == 401).assertTrue();
      resolve();
    }
  });
}

async function testRandomAlgNameCallback() {
  var rand;
  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("RandomAlgNameCallback start time is :" + timestamp);
    rand = cryptoFramework.createRandom();
    expect(rand != null).assertTrue();
    console.info("RandomAlgNameCallback rand.algName :" + rand.algName);
    reject();
  });
}

export {
  testCreatRandomCallback,
  testRandomCallback,
  testRandomNotParameterCallback,
  testRandomMultiParameterCallback,
  testRandomAbnormalCallback,
  testRandomLengthCallback,
  testRandomCallbackSeed,
  testRandomAlgNameCallback,
};
