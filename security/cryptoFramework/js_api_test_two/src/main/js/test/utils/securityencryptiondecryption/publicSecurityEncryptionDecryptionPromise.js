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

function stringToUint8Array(str) {
  var arr = [];
  for (var i = 0, j = str.length; i < j; ++i) {
    arr.push(str.charCodeAt(i));
  }
  var tmpArray = new Uint8Array(arr);
  return tmpArray;
}

async function testSecuritySignThreeStagePromise(algNameKey, algNameSign, plan1, plan2) {
  var globalKeyPair;
  var SignMessageBlob;
  var input1;
  var input2;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignThreeStagePromise start time is :" + timestamp);

    input1 = { data : stringToUint8Array(plan1) };
    input2 = { data : stringToUint8Array(plan2) };
    console.log("SignThreeStagePromise start 111");

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignThreeStagePromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignThreeStagePromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignThreeStagePromise start 444");
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignThreeStagePromise start 1");
      return sign.init(priKey);
    }).then(() => {
      console.log("SignThreeStagePromise start 2");
      return sign.update(input1);
    }).then(() => {
      console.log("SignThreeStagePromise start 3");
      return sign.sign(input2);
    }).then(dataBlob => {
      SignMessageBlob = dataBlob;
      console.info("SignThreeStagePromise sign output is " + SignMessageBlob.data);
      expect(SignMessageBlob.data != null).assertTrue();
      resolve();
    }).catch((err) => {
      console.error("[SignThreeStagePromise]catch err1:" + err);
      reject(err);
    });
  });
}

async function testSecuritySignAppendDataPromise(algNameKey, algNameSign, plan1) {
  var globalKeyPair;
  var input1;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignAppendDataPromise start time is :" + timestamp);

    input1 = { data : stringToUint8Array(plan1) };
    console.log("SignAppendDataPromise start 111");

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignAppendDataPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignAppendDataPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignAppendDataPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("SignAppendDataPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignAppendDataPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      for (let i = 1; i < 1000; i++) {
        console.log("SignAppendDataPromise start :" + i);
        sign.update(input1);
      }
      return sign.update(input1);
    }).then(() => {
      const timestampend = Date.parse(new Date());
      let counttime = timestampend - timestampstart;
      console.log("SignAppendDataPromise Calculate the average time of 1000 calls :" + counttime);
      resolve();
    }).catch((err) => {
      console.error("[SignAppendDataPromise]catch err1:" + err);
      reject(err);
    });
  });
}

async function testSecuritySignInitPromise(algNameKey, algNameSign, state) {
  var globalKeyPair;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignInitPromise start time is :" + timestamp);

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignInitPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignInitPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignInitPromise start 444");
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey;
      if (state == 0) {
        console.log("SignInitPromise start empty");
        return sign.init();
      }
      if (state == 1) {
        priKey = null;
        console.log("SignInitPromise start 222");
        return sign.init(priKey);
      }
      if (state == 2) {
        priKey = globalKeyPair.priKey;
        console.log("SignInitPromise start 222");
        return sign.init(priKey, priKey);
      }
      if (state == 3) {
        priKey = "sroundpriKey";
        console.log("SignInitPromise start 333");
        return sign.init(priKey);
      }
      priKey = globalKeyPair.priKey;
      console.log("SignInitPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      console.log("SignInitPromise start sign.init ok.");
      resolve();
    }).catch((err) => {
      console.error("[SignInitPromise]catch err:" + err);
      console.error("[SignInitPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecuritySignAddDataSignedPromise(algNameKey, algNameSign, plan1) {
  var globalKeyPair;
  var input1;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignAddDataSignedPromise start time is :" + timestamp);

    input1 = { data : stringToUint8Array(plan1) };
    console.log("SignAddDataSignedPromise start 111");

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignAddDataSignedPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignAddDataSignedPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignAddDataSignedPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("SignAddDataSignedPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignAddDataSignedPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      return sign.update(input1);
    }).then(() => {
      console.log("SignAddDataSignedPromise update ok.");
      resolve();
    }).catch((err) => {
      console.error("[SignAddDataSignedPromise]catch err1:" + err);
      console.error("[SignAddDataSignedPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

//？？？？？
async function testSecuritySignAddLongDataSignedPromise(algNameKey, algNameSign, plan1) {
  var globalKeyPair;
  var input1;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignAddLongDataSignedPromise start time is :" + timestamp);

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignAddLongDataSignedPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignAddLongDataSignedPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignAddLongDataSignedPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("SignAddLongDataSignedPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignAddLongDataSignedPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      let str = plan1;
      for (let index = 0; index < 1000; index++) {
        str = str + plan1;
      }
      input1 = { data : stringToUint8Array(str) };
      return sign.update(input1);
    }).then(() => {
      console.log("SignAddLongDataSignedPromise update ok.");
      resolve();
    }).catch((err) => {
      console.error("[SignAddLongDataSignedPromise]catch err1:" + err);
      console.error("[SignAddLongDataSignedPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecurityNotParameterAddDataSignedPromise(algNameKey, algNameSign) {
  var globalKeyPair;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("NotParameterAddDataSignedPromise start time is :" + timestamp);

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("NotParameterAddDataSignedPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("NotParameterAddDataSignedPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("NotParameterAddDataSignedPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("NotParameterAddDataSignedPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("NotParameterAddDataSignedPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      return sign.update();
    }).then(() => {
      console.log("NotParameterAddDataSignedPromise update ok.");
      resolve();
    }).catch((err) => {
      console.error("[NotParameterAddDataSignedPromise]catch err1:" + err);
      console.error("[NotParameterAddDataSignedPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecurityMultiParameterAddDataSignedPromise(algNameKey, algNameSign, plan1, plan2) {
  var globalKeyPair;
  var rsaGenerator;
  var sign;
  var input1;
  var input2;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("MultiParameterAddDataSignedPromise start time is :" + timestamp);

    input1 = { data : stringToUint8Array(plan1) };
    input2 = { data : stringToUint8Array(plan2) };
    console.log("SignThreeStagePromise start 111");

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("MultiParameterAddDataSignedPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("MultiParameterAddDataSignedPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("MultiParameterAddDataSignedPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("MultiParameterAddDataSignedPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("MultiParameterAddDataSignedPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      return sign.update(input1, input2);
    }).then(() => {
      console.log("MultiParameterAddDataSignedPromise update ok.");
      resolve();
    }).catch((err) => {
      console.error("[MultiParameterAddDataSignedPromise]catch err1:" + err);
      console.error("[MultiParameterAddDataSignedPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecurityNotInitializedAddDataSignedPromise(algNameKey, algNameSign, plan1) {
  var globalKeyPair;
  var input1;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("NotInitializedAddDataSignedPromise start time is :" + timestamp);

    input1 = { data : stringToUint8Array(plan1) };
    console.log("NotInitializedAddDataSignedPromise start 111");

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("NotInitializedAddDataSignedPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("NotInitializedAddDataSignedPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("NotInitializedAddDataSignedPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("NotInitializedAddDataSignedPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      console.log("NotInitializedAddDataSignedPromise start 1");
      return sign.update(input1);
    }).then(() => {
      console.log("NotInitializedAddDataSignedPromise update ok.");
      resolve();
    }).catch((err) => {
      console.error("[NotInitializedAddDataSignedPromise]catch err1:" + err);
      console.error("[NotInitializedAddDataSignedPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecurityNotInitializedSignDataPromise(algNameKey, algNameSign, plan1, plan2) {
  var globalKeyPair;
  var SignMessageBlob;
  var input1;
  var input2;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("NotInitializedSignDataPromise start time is :" + timestamp);

    input1 = { data : stringToUint8Array(plan1) };
    input2 = { data : stringToUint8Array(plan2) };
    console.log("NotInitializedSignDataPromise start 111");

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("NotInitializedSignDataPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("NotInitializedSignDataPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("NotInitializedSignDataPromise start 444");
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      console.log("NotInitializedSignDataPromise start 1");
      return sign.sign(input2);
    }).then(dataBlob => {
      console.log("NotInitializedSignDataPromise update ok.");
      resolve();
    }).catch((err) => {
      console.error("[NotInitializedSignDataPromise]catch err1:" + err);
      console.error("[NotInitializedSignDataPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecuritySignLongUpDataPromise(algNameKey, algNameSign, plan1, plan2) {
  var globalKeyPair;
  var SignMessageBlob;
  var input1;
  var input2;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignLongUpDataPromise start time is :" + timestamp);
    input2 = { data : stringToUint8Array(plan2) };
    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignLongUpDataPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignLongUpDataPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignLongUpDataPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("SignLongUpDataPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignLongUpDataPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      let str = plan1;
      for (let index = 0; index < 1000; index++) {
        str = str + plan1;
      }
      input1 = { data : stringToUint8Array(str) };
      return sign.update(input1);
    }).then(() => {
      console.log("SignLongUpDataPromise start 3");
      return sign.sign(input2);
    }).then(dataBlob => {
      SignMessageBlob = dataBlob;
      console.info("SignLongUpDataPromise sign output is " + SignMessageBlob.data);
      expect(SignMessageBlob.data != null).assertTrue();
      resolve();
    }).catch((err) => {
      console.error("[SignLongUpDataPromise]catch err1:" + err);
      console.error("[SignLongUpDataPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecuritySignLongDataPromise(algNameKey, algNameSign, plan1, state) {
  var globalKeyPair;
  var SignMessageBlob;
  var input1;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignLongDataPromise start time is :" + timestamp);
    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignLongDataPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignLongDataPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignLongDataPromise start 444");
    const timestampstart = Date.parse(new Date());
    console.log("SignLongDataPromise start time is :" + timestampstart);
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignLongDataPromise start 1");
      return sign.init(priKey);
    }).then(() => {
      let str = plan1;
      for (let index = 0; index < 1000; index++) {
        str = str + plan1;
      }
      input1 = { data : stringToUint8Array(str) };
      console.log("SignLongDataPromise start 3");
      if (state == 0) {
        return sign.sign();
      }
      if (state == 1) {
        return sign.sign(input1);
      }
      if (state == 2) {
        return sign.sign(input1, input1);
      }
    }).then(dataBlob => {
      SignMessageBlob = dataBlob;
      console.info("SignLongDataPromise sign output is " + SignMessageBlob.data);
      expect(SignMessageBlob.data != null).assertTrue();
      resolve();
    }).catch((err) => {
      console.error("[SignLongDataPromise]catch err1:" + err);
      console.error("[SignLongDataPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}

async function testSecuritySignInitFillPromise(algNameKey, algNameSign, itemType, itemValue, state, fillState) {
  var globalKeyPair;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignInitFillPromise start time is :" + timestamp);

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignInitFillPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignInitFillPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignInitFillPromise start 444");
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey;
      if (state == 0) {
        console.log("SignInitFillPromise start empty");
        return;
      }
      if (state == 1) {
        priKey = globalKeyPair.priKey;
        console.log("SignInitFillPromise start 1");
        return sign.init(priKey);
      }
    }).then(() => {
      if(fillState == 0) {
        console.log("SignInitFillPromise fillState 0");
        return sign.setSignSpec(itemType, itemValue);
      }
      if (fillState == 1) {
        console.log("SignInitFillPromise fillState 1");
        return sign.setSignSpec(itemType);
      }
      if (fillState == 3) {
        console.log("SignInitFillPromise fillState 3");
        return sign.setSignSpec(itemType, itemValue, itemValue);
      }
    }).then(() => {
      console.log("SignInitFillPromise start sign.init ok.");
      resolve();
    }).catch((err) => {
      console.error("[SignInitFillPromise]catch err:" + err);
      console.error("[SignInitFillPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}


async function testSecuritySignGetFillPromise(algNameKey, algNameSign, itemType, state, fillState) {
  var globalKeyPair;
  var rsaGenerator;
  var sign;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("SignGetFillPromise start time is :" + timestamp);

    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("SignGetFillPromise start 222");
    sign = cryptoFramework.createSign(algNameSign);
    console.log("SignGetFillPromise start 333");
    keyGenPromise = rsaGenerator.generateKeyPair();
    console.log("SignGetFillPromise start 444");
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      let priKey;
      if (state == 0) {
        console.log("SignGetFillPromise start empty");
        return;
      }
      if (state == 1) {
        priKey = globalKeyPair.priKey;
        console.log("SignGetFillPromise start 1");
        return sign.init(priKey);
      }
    }).then(() => {
      if(fillState == 0) {
        console.log("SignGetFillPromise fillState 0");
        return sign.getSignSpec();
      }
      if (fillState == 1) {
        console.log("SignGetFillPromise fillState 1");
        let result = sign.getSignSpec(itemType);
        console.log("SignGetFillPromise getSignSpec :" + result);
        return result;
      }
      if (fillState == 3) {
        console.log("SignGetFillPromise fillState 3");
        return sign.getSignSpec(itemType, itemType);
      }
    }).then(() => {
      console.log("SignGetFillPromise start sign.init ok.");
      resolve();
    }).catch((err) => {
      console.error("[SignGetFillPromise]catch err:" + err);
      console.error("[SignGetFillPromise]catch err.code:" + err.code);
      expect(err.code == 401).assertTrue();
      reject(err);
    });
  });
}


// 验签
// 验签
// 验签
async function testSecurityVerifyThreeStagePromise(algNameKey, algNameSign) {
  var globalKeyPair;
  var rsaGenerator;
  var keyGenPromise;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("VerifyThreeStagePromise start time is :" + timestamp);
    rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    console.log("VerifyThreeStagePromise 111");
    let input1 = null;
    let input2 = null;
    let signMessageBlob = null; // 签名后的数据，此处省略
    let verifyInitPromise;
    keyGenPromise = rsaGenerator.generateKeyPair();
    let globalKeyPair; // globalKeyPair为使用非对称密钥生成器生成的非对称密钥对象，此处省略生成过程
    console.log("VerifyThreeStagePromise 222");
    let verifyer = cryptoFramework.createVerify(algNameSign);
    console.log("VerifyThreeStagePromise 333");
    keyGenPromise.then( keyPair => {
      globalKeyPair = keyPair;
      verifyInitPromise = verifyer.init(globalKeyPair.pubKey);
      console.log("VerifyThreeStagePromise 444");
      verifyInitPromise.then(() => {
      console.log("VerifyThreeStagePromise 555");
      return verifyer.update(input1);
      }).then(() => {
        console.log("VerifyThreeStagePromise 666");
        return verifyer.verify(input2, signMessageBlob);
      }).then(res => {
        console.log("VerifyThreeStagePromise result is " + res);
        resolve();
      }).catch((err) => {
        console.error("[VerifyThreeStagePromise]catch err1:" + err);
        reject(err);
      });
    });
  });
}

async function testSecurityVerifyPromise(algName) {
  var verify;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.log("VerifyPromise start time is :" + timestamp);
    verify = cryptoFramework.createVerify(algName);
    expect(verify != null).assertTrue();
  });
}

export {
  testSecuritySignThreeStagePromise,
  testSecuritySignAppendDataPromise,
  testSecuritySignInitPromise,
  testSecuritySignAddDataSignedPromise,
  testSecuritySignAddLongDataSignedPromise,
  testSecurityNotParameterAddDataSignedPromise,
  testSecurityMultiParameterAddDataSignedPromise,
  testSecurityNotInitializedAddDataSignedPromise,
  testSecurityNotInitializedSignDataPromise,
  testSecuritySignLongUpDataPromise,
  testSecuritySignLongDataPromise,
  testSecuritySignInitFillPromise,
  testSecuritySignGetFillPromise,
  testSecurityVerifyThreeStagePromise,
  testSecurityVerifyPromise,
};
