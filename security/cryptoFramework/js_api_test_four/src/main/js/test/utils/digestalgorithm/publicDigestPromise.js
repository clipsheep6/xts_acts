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

import cryptoFramework from "@ohos.security.cryptoFramework";
import {
  stringTouInt8Array,
  uInt8ArrayToShowStr,
} from "../common/publicDoString";

async function initHMACFailed(HMACGenerator, key, itemType) {
  return new Promise((resolve, reject) => {
    switch (itemType) {
      case 0:
        HMACGenerator.init().then(() => {
          resolve("init success");
        }).catch((err) => {
          reject(err);
        });
        break;
      case 1:
        HMACGenerator.init(null).then(() => {
          resolve("init success");
        }).catch((err) => {
          reject(err);
        });
        break;
      case 2:
        HMACGenerator.init("").then(() => {
          resolve("init success");
        }).catch((err) => {
          reject(err);
        });
        break;
      case 3:
        HMACGenerator.init(key, key).then(() => {
          resolve("init success");
        }).catch((err) => {
          reject(err);
        });
        break;
      default:
          reject("err");
        break;
    }
  });
}

async function testMDDigestPromise(MDAlgoName) {
  let globalMd;
  let globalText = "Test Md Message";
  let inBlob = { data: stringTouInt8Array(globalText) };

  return new Promise((resolve, reject) => {
    globalMd = cryptoFramework.createMd(MDAlgoName);
    console.log("Md= " + globalMd);
    console.log("MD algName is: " + globalMd.algName);

    globalMd.update(inBlob).then(() => {
      return globalMd.digest();
    }).then((digestBlob) => {
      console.log("Digest result: " + uInt8ArrayToShowStr(digestBlob.data));
      let mdLen = globalMd.getMdLength();
      console.log("Md len: " + mdLen);
      if (digestBlob != null && mdLen != 0 && mdLen != null) {
        resolve(true);
      } else {
        resolve(false);
      }
    }).catch((err) => {
      console.error("testMDDigest catch error: " + err);
      reject(err);
    });
  });
}

async function testHMACDigestPromise(HMACAlgoName, keyAlgoName) {
  let globalHMAC;
  let globalText = "Mac test data";
  let globalsymKeyGenerator;
  let inBlob = { data: stringTouInt8Array(globalText), };

  return new Promise((resolve, reject) => {
    globalHMAC = cryptoFramework.createMac(HMACAlgoName);
    console.log("mac= " + globalHMAC);
    console.log("HMAC algName is: " + globalHMAC.algName);
    globalsymKeyGenerator = cryptoFramework.createSymKeyGenerator(keyAlgoName);
    console.log("symKeyGenerator algName:" + globalsymKeyGenerator.algName);
    globalsymKeyGenerator.generateSymKey().then((key) => {
      console.log("key algName:" + key.algName);
      console.log("key format:" + key.format);
      let encodedKey = key.getEncoded();
      console.log("key getEncoded hex: " + uInt8ArrayToShowStr(encodedKey.data));
      let promiseMacInit = globalHMAC.init(key);
      return promiseMacInit;
    }).then(() => {
      let promiseMacUpdate = globalHMAC.update(inBlob);
      return promiseMacUpdate;
    }).then(() => {
      let promiseMacdoFinal = globalHMAC.doFinal();
      return promiseMacdoFinal;
    }).then((macOutput) => {
      console.log("HMAC result:" + macOutput.data);
      let macLen = globalHMAC.getMacLength();
      console.log("MAC len:" + macLen);
      if (macOutput != null && macLen != 0 && macLen != null) {
        resolve(true);
      } else {
        resolve(false);
      }
    }).catch((err) => {
      console.error("[promise]catch err:" + err);
      reject(err);
    });
  });
}

async function initHMACDigestAbnormalProcess(HMACAlgoName, keyAlgoName, initState) {
  let globalHMAC;
  let globalsymKeyGenerator;

  return new Promise((resolve, reject) => {
    globalHMAC = cryptoFramework.createMac(HMACAlgoName);
    console.log("HMAC algName is: " + globalHMAC.algName);
    globalsymKeyGenerator = cryptoFramework.createSymKeyGenerator(keyAlgoName);
    let asyKeyGenerator = cryptoFramework.createAsyKeyGenerator("RSA");
    let asyKeyPair = asyKeyGenerator.generateAsyKey();
    globalsymKeyGenerator.generateSymKey().then((symKey) => {
      if (initState == 4) {
        resolve(globalHMAC.init(asyKeyPair));
      } else {
        resolve(initHMACFailed(globalHMAC, symKey, initState));
      }
    }).catch((err) => {
      console.error("[promise]catch err:" + err);
      reject(err);
    });
  });
}

async function doFinalHMACDigestAbnormalProcess(HMACAlgoName, keyAlgoName, doFinalState) {
  let globalHMAC;
  let globalText = "Mac test data";
  let globalsymKeyGenerator;
  let inBlob = { data: stringTouInt8Array(globalText), };

  return new Promise((resolve, reject) => {
    globalHMAC = cryptoFramework.createMac(HMACAlgoName);
    console.log("mac= " + globalHMAC);
    console.log("HMAC algName is: " + globalHMAC.algName);
    globalsymKeyGenerator = cryptoFramework.createSymKeyGenerator(keyAlgoName);
    console.log("symKeyGenerator algName:" + globalsymKeyGenerator.algName);
    globalsymKeyGenerator.generateSymKey().then((key) => {
      console.log("key algName:" + key.algName);
      console.log("key format:" + key.format);
      let encodedKey = key.getEncoded();
      console.log("key getEncoded hex: " + uInt8ArrayToShowStr(encodedKey.data));
      if (doFinalState == 1) {
        resolve(globalHMAC.doFinal());
      } else {
        let promiseMacInit = globalHMAC.init(key);
        return promiseMacInit;
      }
    }).then(() => {
      if (doFinalState == 2) {
        resolve(globalHMAC.doFinal());
      } else {
        let promiseMacUpdate = globalHMAC.update(inBlob);
        return promiseMacUpdate;
      }
    }).then(() => {
      resolve(globalHMAC.doFinal());
    }).catch((err) => {
      console.error("[promise]catch err:" + err);
      reject(err);
    });
  });
}

export {
  testMDDigestPromise,
  testHMACDigestPromise,
  initHMACDigestAbnormalProcess,
  doFinalHMACDigestAbnormalProcess,
};
