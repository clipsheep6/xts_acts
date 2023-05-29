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

async function testSecuritySignCallback(algName) {
  var sign;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("signCallback start time is :" + timestamp);
    try {
      sign = cryptoFramework.createSign(algName);
      expect(sign != null).assertTrue();
      console.info("signCallback sign.algName." + sign.algName);
      console.info("signCallback end.");
      resolve();
    }catch(error) {
      console.error(
        "[signCallback] catch error:" +
        error +
        "[signCallback]: error code: " +
        error.code
      );
      console.info("[signCallback] resolve");
      expect(error.code == 401).assertTrue();
      reject(error);
    };
  });
}

async function testSecuritySignNotParameterCallback() {
  var sign;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("SignNotParameterCallback start time is :" + timestamp);
    try {
      sign = cryptoFramework.createSign();
      expect(sign != null).assertTrue();
      console.info("SignNotParameterCallback end.");
      resolve();
    }catch(error) {
      console.error(
        "[SignNotParameterCallback] catch error:" +
        error +
        "[SignNotParameterCallback]: error code: " +
        error.code
      );
      console.info("[SignNotParameterCallback] resolve");
      expect(error.code == 401).assertTrue();
      reject(error);
    };
  });
}

async function testSecuritySignDoubleParameterCallback(algNameFirst, algNameSecond) {
  var sign;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("SignDoubleParameterCallback start time is :" + timestamp);
    try {
      sign = cryptoFramework.createSign(algNameFirst, algNameSecond);
      expect(sign != null).assertTrue();
      console.info("SignDoubleParameterCallback end.");
      resolve();
    }catch(error) {
      console.error(
        "[SignDoubleParameterCallback] catch error:" +
        error +
        "[SignDoubleParameterCallback]: error code: " +
        error.code
      );
      console.info("[SignDoubleParameterCallback] resolve");
      expect(error.code == 401).assertTrue();
      reject(error);
    };
  });
}

async function testSecuritySignThreeStageCallback(algNameKey, algNameSign, plan1, plan2) {
  return new Promise((resolve, reject) => {
    let globalKeyPair;
    let SignMessageBlob;
    let input1 = { data : stringToUint8Array(plan1) };
    let input2 = { data : stringToUint8Array(plan2) };

    let rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    let signer = cryptoFramework.createSign(algNameSign);
    rsaGenerator.generateKeyPair(function (err, keyPair) {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      signer.init(priKey, function (err, data) {
        console.log("SignThreeStageCallback start 111");
        signer.update(input1, function (err, data) { // add first segment of data
          console.log("SignThreeStageCallback start 222");
          signer.sign(input2, function (err, data) { // add second segment of data, sign input1 and input2
            SignMessageBlob = data;
            console.info("SignThreeStageCallback SignMessageBlob.data: " +  SignMessageBlob.data);
            resolve();
          });
        });
      });
    });
  });
}

async function testSecuritySignInitCallback(algNameKey, algNameSign) {
  return new Promise((resolve, reject) => {
    let globalKeyPair;

    let rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    let signer = cryptoFramework.createSign(algNameSign);
    rsaGenerator.generateKeyPair(function (err, keyPair) {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignInitCallback start 111");
      signer.init(priKey, function (err, data) {
        console.log("SignInitCallback start 222");
        resolve();
      }).catch((err) => {
        console.error("[SignInitCallback]catch err:" + err);
        console.error("[SignInitCallback]catch err.code:" + err.code);
        //expect(err.code == 401).assertTrue();
        reject(err);
      });
    });
  });
}

async function testSecuritySignUpDateCallback(algNameKey, algNameSign, plan1) {
  return new Promise((resolve, reject) => {
    let globalKeyPair;
    let SignMessageBlob;
    let input1 = { data : stringToUint8Array(plan1) };

    let rsaGenerator = cryptoFramework.createAsyKeyGenerator(algNameKey);
    let signer = cryptoFramework.createSign(algNameSign);
    rsaGenerator.generateKeyPair(function (err, keyPair) {
      globalKeyPair = keyPair;
      let priKey = globalKeyPair.priKey;
      console.log("SignUpDateCallback start");
      signer.init(priKey, function (err, data) {
        console.log("SignUpDateCallback start 111");
        signer.update(input1, function (err, data) { // add first segment of data
          console.log("SignUpDateCallback start 222");
          resolve();
        }).catch((err) => {
          console.error("[SignInitCallback]catch err:" + err);
          console.error("[SignInitCallback]catch err.code:" + err.code);
          //expect(err.code == 401).assertTrue();
          reject(err);
        });
      });
    });
  });
}

async function testSecuritySignAlgNameCallback(algNameSign) {
  return new Promise((resolve, reject) => {
    try {
        let signer = cryptoFramework.createSign(algNameSign);
        console.info("SignAlgNameCallback signer:" + signer.algName);
        resolve();
      }catch (error) {
        console.error("[SignAlgNameCallback]catch err:" + error);
        console.error("[SignAlgNameCallback]catch err.code:" + error.code);
        expect(error.code == 401).assertTrue();
        reject(error);
      };
  });
}

async function testSecurityVerifyCallback(algName) {
  var verify;

  return new Promise((resolve, reject) => {
    const timestamp = Date.parse(new Date());
    console.info("VerifyCallback start time is :" + timestamp);
    try {
      verify = cryptoFramework.createVerify(algName);
      expect(verify != null).assertTrue();
      console.info("VerifyCallback verify.algName." + verify.algName);
      console.info("VerifyCallback end.");
      resolve();
    }catch(error) {
      console.error(
        "[VerifyCallback] catch error:" +
        error +
        "[VerifyCallback]: error code: " +
        error.code
      );
      console.info("[VerifyCallback] resolve");
      reject(error);
    };
  });
}


//融合
async function initSign(signGenerator, priKey) {
  return new Promise((resolve, reject) => {
    signGenerator.init(priKey, (err) => {
      if (err) {
        console.error("[Callback]signGenerator init failed. error is " + err);
        reject(err);
      } else {
        console.log("[Callback]signGenerator init success!");
        resolve("init success");
      }
    });
  });
}

async function updateSign(signGenerator, dataBlob) {
  return new Promise((resolve, reject) => {
    signGenerator.update(dataBlob, (err) => {
      if (err) {
        console.error("[Callback]signGenerator update failed. error is " + err);
        reject(err);
      } else {
        console.log("[Callback]signGenerator update success!");
        resolve("update success");
      }
    });
  });
}

async function signForSign(signGenerator, dataBlob) {
  return new Promise((resolve, reject) => {
    signGenerator.sign(dataBlob, (err, signOutput) => {
      if (err) {
        console.error("[Callback]signGenerator sign failed. error is " + err);
        reject(err);
      } else {
        console.log("[Callback]signGenerator sign success!");
        resolve(signOutput);
      }
    });
  });
}

async function initVerify(verifyGenerator, pubKey) {
  return new Promise((resolve, reject) => {
    verifyGenerator.init(pubKey, (err) => {
      if (err) {
        console.error("[Callback]verifyGenerator init failed. error is " + err);
        reject(err);
      } else {
        console.log("[Callback]verifyGenerator init success!");
        resolve("init success");
      }
    });
  });
}

async function updateVerify(verifyGenerator, dataBlob) {
  return new Promise((resolve, reject) => {
    verifyGenerator.update(dataBlob, (err) => {
      if (err) {
        console.error(
          "[Callback]verifyGenerator update failed. error is " + err
        );
        reject(err);
      } else {
        console.log("[Callback]verifyGenerator update success!");
        resolve("update success");
      }
    });
  });
}

async function verifyForVerify(verifyGenerator, dataBlob, signDataBlob) {
  return new Promise((resolve, reject) => {
    verifyGenerator.verify(dataBlob, signDataBlob, (err, verifyOutput) => {
      if (err) {
        console.error("[Callback]signGenerator sign failed. error is " + err);
        reject(err);
      } else {
        console.log("[Callback]signGenerator sign success!");
        resolve(verifyOutput);
      }
    });
  });
}

function createAsyKeyGenerator(asyAlgoName) {
  try {
    let rsaGenerator = cryptoFramework.createAsyKeyGenerator(asyAlgoName);
    console.log("rsaGenerator algName: " + rsaGenerator.algName);
    return rsaGenerator;
  } catch (err) {
    console.error("rsaGenerator error:" + err);
    return err;
  }
}

function createAsySign(signAlgoName) {
  try {
    let signGenerator = cryptoFramework.createSign(signAlgoName);
    console.log("signGenerator algName: " + signGenerator.algName);
    return signGenerator;
  } catch (err) {
    console.error("signGenerator error:" + err);
    return err;
  }
}

function createAsyVerify(verifyAlgoName) {
  try {
    let verifyGenerator = cryptoFramework.createVerify(verifyAlgoName);
    console.log("verifyGenerator algName: " + verifyGenerator.algName);
    return verifyGenerator;
  } catch (err) {
    console.error("verifyGenerator error:" + err);
    return err;
  }
}

function createAsyKeyAgreement(ECDHAlgoName) {
  try {
    let generator = cryptoFramework.createKeyAgreement(ECDHAlgoName);
    console.log("createKeyAgreement algName: " + generator.algName);
    return generator;
  } catch (err) {
    console.error("createKeyAgreement error:" + err);
    return err;
  }
}

async function generateAsyKeyPair(rsaGenerator) {
  var pubKey;
  var priKey;
  return new Promise((resolve, reject) => {
    rsaGenerator.generateKeyPair((err, rsaKeyPair) => {
      if (err) {
        console.error("[Callback]generateSymKey failed. error is " + err);
        reject(err);
      } else {
        pubKey = rsaKeyPair.pubKey;
        let encodedPubKey = pubKey.getEncoded();
        console.log("[Callback]: pubKey.getAlgorithm= " + pubKey.algName);
        console.log("[Callback]: pubKey.getEncoded= " + encodedPubKey.data);
        console.log("[Callback]: pubKey.getFormat= " + pubKey.format);
        priKey = rsaKeyPair.priKey;
        let encodedPriKey = priKey.getEncoded();
        console.log("[Callback]: priKey.getAlgorithm= " + priKey.algName);
        console.log("[Callback]: priKey.getEncoded= " + encodedPriKey.data);
        console.log("[Callback]: priKey.getFormat= " + priKey.format);
        resolve(rsaKeyPair);
      }
    });
  });
}

async function signAndVerifyNormalProcess(asyAlgoName, signVerifyAlgoName, state) {
  var globalRsaKeyPair;
  var globalSignBlob;
  var globalText = "This is a sign test";
  var input = { data: stringTouInt8Array(globalText) };

  return new Promise((resolve, reject) => {
    let rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();
    let signGenerator = createAsySign(signVerifyAlgoName);
    expect(signGenerator != null).assertTrue();
    let verifyGenerator;
    if (state) {
      verifyGenerator = createAsyVerify(signVerifyAlgoName);
    } else {
      verifyGenerator = createAsyVerify("RSA1024|PKCS1|SHA512");
    }
    expect(verifyGenerator != null).assertTrue();

    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        globalRsaKeyPair = rsaKeyPair;
        return initSign(signGenerator, globalRsaKeyPair.priKey);
      })
      .then((initData) => {
        expect(initData === "init success").assertTrue();
        return updateSign(signGenerator, input);
      })
      .then((updateData) => {
        expect(updateData === "update success").assertTrue();
        return signForSign(signGenerator, input);
      })
      .then((finalOutput) => {
        expect(finalOutput != null).assertTrue();
        globalSignBlob = finalOutput;
        console.log("signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
        return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
      })
      .then((initData) => {
        expect(initData === "init success").assertTrue();
        return updateVerify(verifyGenerator, input);
      })
      .then((updateData) => {
        expect(updateData === "update success").assertTrue();
        return verifyForVerify(verifyGenerator, input, globalSignBlob);
      })
      .then((finalStatus) => {
        expect(finalStatus).assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error("[Callback] signAndVerifyNormalProcess catch err:" + err);
        reject(err);
      });
  });
}

export {
  testSecuritySignCallback,
  testSecuritySignNotParameterCallback,
  testSecuritySignDoubleParameterCallback,
  testSecuritySignThreeStageCallback,
  testSecuritySignInitCallback,
  testSecuritySignUpDateCallback,
  testSecuritySignAlgNameCallback,
  testSecurityVerifyCallback,
  signAndVerifyNormalProcess,
};
