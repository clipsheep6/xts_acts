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
import * as asyCommon from "../common/publicDoSpec";
import {
  stringTouInt8Array,
  uInt8ArrayToShowStr,
  uInt8ArrayToString,
} from "../common/publicDoString";
import {
  createAsyKeyGenerator,
  createAsyKeyGeneratorBySpec,
  createAsyCipher,
  createAsySign,
  createAsyVerify,
  createAsyKeyAgreement,
} from "./publicAsymmetricCommon";

function sleep(delay) {
  var start = (new Date()).getTime();
  while ((new Date()).getTime() - start < delay) {
    continue;
  }
}

async function generateAsyKeyPair(rsaGenerator) {
  var pubKey;
  var priKey;
  return new Promise((resolve, reject) => {
    rsaGenerator
      .generateKeyPair()
      .then((rsaKeyPair) => {
        pubKey = rsaKeyPair.pubKey;
        let encodedPubKey = pubKey.getEncoded();
        console.log("[Promise]: pubKey.getAlgorithm= " + pubKey.algName);
        console.log("[Promise]: pubKey.getEncoded= " + encodedPubKey.data);
        console.log("[Promise]: pubKey.getFormat= " + pubKey.format);
        priKey = rsaKeyPair.priKey;
        let encodedPriKey = priKey.getEncoded();
        console.log("[Promise]: priKey.getAlgorithm= " + priKey.algName);
        console.log("[Promise]: priKey.getEncoded= " + encodedPriKey.data);
        console.log("[Promise]: priKey.getFormat= " + priKey.format);
        resolve(rsaKeyPair);
      })
      .catch((err) => {
        console.error("[Promise]generateSymKey failed. error is " + err);
        reject(err);
      });
  });
}

async function convertAsyKey(rsaGenerator, pubKeyDataBlob, priKeyDataBlob) {
  return new Promise((resolve, reject) => {
    rsaGenerator
      .convertKey(pubKeyDataBlob, priKeyDataBlob)
      .then((convertKeyPair) => {
        console.log(
          "[Promise]convertKey success. convertKeyPair is " + convertKeyPair
        );
        resolve(convertKeyPair);
      })
      .catch((err) => {
        console.error("[Promise]convertKey failed. error is " + err);
        reject(err);
      });
  });
}

async function initCipher(cipherGenerator, mode, key, params) {
  return new Promise((resolve, reject) => {
    cipherGenerator
      .init(mode, key, params)
      .then(() => {
        console.log("[Promise]cipherGenerator init success! mode is : " + mode);
        resolve("init success");
      })
      .catch((err) => {
        console.error(
          "[Promise]cipherGenerator init failed. error is " +
            err +
            "mode is " +
            mode
        );
        reject(err);
      });
  });
}

async function doFinalCipher(cipherGenerator, mode, dataBlob) {
  return new Promise((resolve, reject) => {
    cipherGenerator
      .doFinal(dataBlob)
      .then((finalData) => {
        console.log(
          "[Promise]cipherGenerator doFinal success! mode is : " + mode
        );
        resolve(finalData);
      })
      .catch((err) => {
        console.error(
          "[Promise]cipherGenerator doFinal failed. error is " +
            err +
            "mode is " +
            mode
        );
        reject(err);
      });
  });
}

async function initSign(signGenerator, priKey) {
  return new Promise((resolve, reject) => {
    signGenerator
      .init(priKey)
      .then(() => {
        console.log("[Promise]signGenerator init success!");
        resolve("init success");
      })
      .catch((err) => {
        console.error("[Promise]signGenerator init failed. error is " + err);
        reject(err);
      });
  });
}

async function updateSign(signGenerator, dataBlob) {
  return new Promise((resolve, reject) => {
    signGenerator
      .update(dataBlob)
      .then(() => {
        console.log("[Promise]signGenerator update success!");
        resolve("update success");
      })
      .catch((err) => {
        console.error("[Promise]signGenerator update failed. error is " + err);
        reject(err);
      });
  });
}

async function signForSign(signGenerator, dataBlob) {
  return new Promise((resolve, reject) => {
    signGenerator
      .sign(dataBlob)
      .then((signOutput) => {
        console.log("[Promise]signGenerator sign success!");
        resolve(signOutput);
      })
      .catch((err) => {
        console.error("[Promise]signGenerator sign failed. error is " + err);
        reject(err);
      });
  });
}

async function initVerify(verifyGenerator, pubKey) {
  return new Promise((resolve, reject) => {
    verifyGenerator
      .init(pubKey)
      .then(() => {
        console.log("[Promise]verifyGenerator init success!");
        resolve("init success");
      })
      .catch((err) => {
        console.error("[Promise]verifyGenerator init failed. error is " + err);
        reject(err);
      });
  });
}

async function updateVerify(verifyGenerator, dataBlob) {
  return new Promise((resolve, reject) => {
    verifyGenerator
      .update(dataBlob)
      .then(() => {
        console.log("[Promise]verifyGenerator update success!");
        resolve("update success");
      })
      .catch((err) => {
        console.error(
          "[Promise]verifyGenerator update failed. error is " + err
        );
        reject(err);
      });
  });
}

async function verifyForVerify(verifyGenerator, dataBlob, signDataBlob) {
  return new Promise((resolve, reject) => {
    verifyGenerator
      .verify(dataBlob, signDataBlob)
      .then((verifyOutput) => {
        console.log("[Promise]signGenerator sign success!");
        resolve(verifyOutput);
      })
      .catch((err) => {
        console.error("[Promise]signGenerator sign failed. error is " + err);
        reject(err);
      });
  });
}

async function generateAsySecret(generator, priKey, pubKey) {
  return new Promise((resolve, reject) => {
    generator
      .generateSecret(priKey, pubKey)
      .then((output) => {
        console.log("[Promise]generateSecret success!");
        resolve(output);
      })
      .catch((err) => {
        console.error("[Promise]generateSecret failed. error is " + err);
        reject(err);
      });
  });
}

async function encryptAndDecryptNormalProcess(asyAlgoName, cipherAlgoName) {
  var globalCipherText;
  var globalRsaKeyPair;
  var globalText = "This is a cipher test";
  var input = { data: stringTouInt8Array(globalText) };
  var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
  var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();
    var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
    expect(cipherGeneratorEncrypt != null).assertTrue();
    var cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
    expect(cipherGeneratorDecrypt != null).assertTrue();

    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        globalRsaKeyPair = rsaKeyPair;
        return initCipher(
          cipherGeneratorEncrypt,
          encryptMode,
          globalRsaKeyPair.pubKey,
          null
        );
      })
      .then((initData) => {
        expect(initData === "init success").assertTrue();
        return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
      })
      .then((finalOutput) => {
        expect(finalOutput != null).assertTrue();
        globalCipherText = finalOutput;
        console.log(
          "cipherOutput: " + uInt8ArrayToShowStr(globalCipherText.data)
        );
        return initCipher(
          cipherGeneratorDecrypt,
          decryptMode,
          globalRsaKeyPair.priKey,
          null
        );
      })
      .then((initData) => {
        expect(initData === "init success").assertTrue();
        return doFinalCipher(
          cipherGeneratorDecrypt,
          decryptMode,
          globalCipherText
        );
      })
      .then((finalOutput) => {
        if (finalOutput == null) {
          console.error("[promise]decrypt doFinal out is null");
        } else {
          console.log(
            "[promise]decrypt doFinal out hex: " +
              uInt8ArrayToShowStr(finalOutput.data)
          );
        }
        let decryptData = uInt8ArrayToString(finalOutput.data);
        expect(decryptData == globalText).assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error(
          "[promise] encryptAndDecryptNormalProcess catch err:" + err
        );
        reject(err);
      });
  });
}

async function signAndVerifyNormalProcess(asyAlgoName, signVerifyAlgoName) {
  var globalRsaKeyPair;
  var globalSignBlob;
  var globalText = "This is a sign test";
  var input = { data: stringTouInt8Array(globalText) };

  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();
    var signGenerator = createAsySign(signVerifyAlgoName);
    expect(signGenerator != null).assertTrue();
    var verifyGenerator = createAsyVerify(signVerifyAlgoName);
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
        console.error("[promise] signAndVerifyNormalProcess catch err:" + err);
        reject(err);
      });
  });
}

async function signAndVerifyNormalProcessDataException(asyAlgoName, signVerifyAlgoName, dataType) {
  var globalRsaKeyPair;
  var globalSignBlob;
  var globalText = "This is a sign test";
  var input;
  if (dataType == "null") {
    input = null;
  } else {
    input = { data: stringTouInt8Array(globalText) };
  };

  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();
    var signGenerator = createAsySign(signVerifyAlgoName);
    expect(signGenerator != null).assertTrue();
    var verifyGenerator = createAsyVerify(signVerifyAlgoName);
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
        if (dataType == "null") {
          reject();
        } else {
          resolve();
        }
      })
      .catch((err) => {
        console.error("[promise] signAndVerifyNormalProcess catch err:" + err);
        if (dataType =="null") {
          resolve(err);
        } else {
          reject(err);
        }
      });
  });
}

async function convertKeyEncryptAndDecryptProcess(asyAlgoName) {
  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();
    console.info("[Promise]: AsyKeyGenerator.algName : " + rsaGenerator.algName);
    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        let encodedPubKey = rsaKeyPair.pubKey.getEncoded();
        let encodedPriKey = rsaKeyPair.priKey.getEncoded();
        return convertAsyKey(rsaGenerator, encodedPubKey, encodedPriKey);
      })
      .then((convertKeyPair) => {
        expect(convertKeyPair != null).assertTrue();
        let encodedConvertPubKey = convertKeyPair.pubKey.getEncoded();
        console.warn(
          "[Promise]: pubKey.getAlgorithm= " + convertKeyPair.pubKey.algName
        );
        console.warn(
          "[Promise]: pubKey.getEncoded= " + encodedConvertPubKey.data
        );
        console.warn(
          "[Promise]: pubKey.getFormat= " + convertKeyPair.pubKey.format
        );
        let encodedConvertPriKey = convertKeyPair.priKey.getEncoded();
        console.warn(
          "[Promise]: priKey.getAlgorithm= " + convertKeyPair.priKey.algName
        );
        console.warn(
          "[Promise]: priKey.getEncoded= " + encodedConvertPriKey.data
        );
        console.warn(
          "[Promise]: priKey.getFormat= " + convertKeyPair.priKey.format
        );
        resolve();
      })
      .catch((err) => {
        console.error(
          "[promise] convertKeyEncryptAndDecryptProcess catch err:" + err
        );
        reject(err);
      });
  });
}

async function keyAgreementProcess(ECDHAlgoName) {
  var globalRsaKeyPair;

  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(ECDHAlgoName);
    expect(rsaGenerator != null).assertTrue();
    var globalECDHData = createAsyKeyAgreement(ECDHAlgoName);
    expect(globalECDHData != null).assertTrue();
    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        globalRsaKeyPair = rsaKeyPair;
        return generateAsySecret(globalECDHData, globalRsaKeyPair.priKey, globalRsaKeyPair.pubKey);
      })
      .then((result) => {
        console.warn("result data is  " + uInt8ArrayToShowStr(result.data));
        expect(result != null).assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error("[promise] keyAgreementProcess catch err:" + err);
        reject(err);
      });
  });
}

async function keyAgreementGetAlgNmaeProcess(ECDHAlgoName) {
  var globalRsaKeyPair;

  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(ECDHAlgoName);
    expect(rsaGenerator != null).assertTrue();
    var globalECDHData = createAsyKeyAgreement(ECDHAlgoName);
    expect(globalECDHData != null).assertTrue();
    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        globalRsaKeyPair = rsaKeyPair;
        return generateAsySecret(globalECDHData, globalRsaKeyPair.priKey, globalRsaKeyPair.pubKey);
      })
      .then((result) => {
        console.warn("result data is  " + uInt8ArrayToShowStr(result.data));
        expect(result != null).assertTrue();
        console.info(
          "[Promise]: globalECDHData.algName 1: " + ECDHAlgoName);
        console.info(
          "[Promise]: globalECDHData.algName 2: " + globalECDHData.algName);
        expect(globalECDHData.algName == "ECC521").assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error("[promise] keyAgreementProcess catch err:" + err);
        reject(err);
      });
  });
}

async function keyAgreementBySpecProcess(asyKeySpec, ECDHAlgoName) {
  var globalRsaKeyPair;

  return new Promise((resolve, reject) => {
    let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
    expect(specGenerator != null).assertTrue();
    let globalECDHData = createAsyKeyAgreement(ECDHAlgoName);
    expect(globalECDHData != null).assertTrue();
    let keyPairPromise = specGenerator.generateKeyPair(); // 使用生成器创建ECC密钥对
    keyPairPromise.then((keyPair) => {
        expect(keyPair != null).assertTrue();
        globalRsaKeyPair = keyPair;
        return generateAsySecret(globalECDHData, globalRsaKeyPair.priKey, globalRsaKeyPair.pubKey);
      })
      .then((result) => {
        console.warn("keyAgreementBySpecProcess result data is  " + uInt8ArrayToShowStr(result.data));
        expect(result != null).assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error("[promise] keyAgreementBySpecProcess catch err:" + err);
        reject(err);
      });
  });
}

async function AsyPriKeyClearProcess(asyAlgoName) {
  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();

    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        let result = rsaKeyPair.priKey.clearMem();
        console.log("result is: " + result);
        expect(result == undefined).assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error("[promise] AsyPriKeyClearProcess catch err:" + err);
        reject(err);
      });
  });
}

async function createAsyKeyGeneratorFail(asyAlgoName) {
  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    resolve(rsaGenerator);
    expect(rsaGenerator == "TypeError: Cannot read property algName of null").assertTrue();
    if (rsaGenerator != "TypeError: Cannot read property algName of null") {
      reject();
    }
  });
}

async function createAsySignFail(
    asyAlgoName,
    signVerifyAlgoName,
    signVerifyAlgoName1,
    signVerifyAlgoName2,
    signVerifyAlgoName3
) {
  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();
    var rsaKeyPair = generateAsyKeyPair(rsaGenerator);
    expect(rsaKeyPair != null).assertTrue();
    var signGenerator = createAsySign(signVerifyAlgoName);
    expect(signGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();

    var signGenerator = createAsySign(signVerifyAlgoName1);
    expect(signGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();

    var signGenerator = createAsySign(signVerifyAlgoName2);
    expect(signGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();

    var signGenerator = createAsySign(signVerifyAlgoName3);
    resolve(signGenerator);
    expect(signGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();
    if (signGenerator != "TypeError: Cannot read property algName of undefined") {
      reject();
    }
  });
}

async function createAsyVerifyFail(
    asyAlgoName,
    signVerifyAlgoName,
    signVerifyAlgoName1,
    signVerifyAlgoName2,
    signVerifyAlgoName3
) {
  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    expect(rsaGenerator != null).assertTrue();
    var rsaKeyPair = generateAsyKeyPair(rsaGenerator);
    expect(rsaKeyPair != null).assertTrue();
    var verifyGenerator = createAsyVerify(signVerifyAlgoName);
    expect(verifyGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();

    var verifyGenerator = createAsyVerify(signVerifyAlgoName1);
    expect(verifyGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();

    var verifyGenerator = createAsyVerify(signVerifyAlgoName2);
    expect(verifyGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();

    var verifyGenerator = createAsyVerify(signVerifyAlgoName3);
    resolve(verifyGenerator);
    expect(verifyGenerator == "TypeError: Cannot read property algName of undefined").assertTrue();
    if (verifyGenerator != "TypeError: Cannot read property algName of undefined") {
      reject();
    }
  });
}

//新增
async function encryptAndDecryptBySpecProcess(asyKeySpec, cipherAlgoName, state) {
  var globalCipherText;
  var globalRsaKeyPair;
  var globalText = "This is a cipher test";
  var input = { data: stringTouInt8Array(globalText) };
  var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
  var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
    expect(rsaGenerator != null).assertTrue();
    var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
    expect(cipherGeneratorEncrypt != null).assertTrue();
    let cipherGeneratorDecrypt;
    if (state) {
      cipherGeneratorDecrypt = createAsyCipher(cipherAlgoName);
    } else {
      cipherGeneratorDecrypt = createAsyCipher("3DES192|ECB|PKCS7");
    }
    expect(cipherGeneratorDecrypt != null).assertTrue();

    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        globalRsaKeyPair = rsaKeyPair;
        console.info("encryptAndDecryptBySpecProcess initCipher1");
        return initCipher(
          cipherGeneratorEncrypt,
          encryptMode,
        globalRsaKeyPair.pubKey,
          null
        );
      })
      .then((initData) => {
        expect(initData === "init success").assertTrue();
        console.info("encryptAndDecryptBySpecProcess doFinalCipher1");
        return doFinalCipher(cipherGeneratorEncrypt, encryptMode, input);
      })
      .then((finalOutput) => {
        expect(finalOutput != null).assertTrue();
        globalCipherText = finalOutput;
        console.log(
          "cipherOutput: " + uInt8ArrayToShowStr(globalCipherText.data)
        );
        console.info("encryptAndDecryptBySpecProcess initCipher2");
        return initCipher(
          cipherGeneratorDecrypt,
          decryptMode,
        globalRsaKeyPair.priKey,
          null
        );
      })
      .then((initData) => {
        expect(initData === "init success").assertTrue();
        console.info("encryptAndDecryptBySpecProcess doFinalCipher2");
        return doFinalCipher(
          cipherGeneratorDecrypt,
          decryptMode,
          globalCipherText
        );
      })
      .then((finalOutput) => {
        if (finalOutput == null) {
          console.error("[promise]encryptAndDecryptNormalProcess decrypt doFinal out is null");
        } else {
          console.log(
            "[promise]encryptAndDecryptNormalProcess decrypt doFinal out hex: " +
            uInt8ArrayToShowStr(finalOutput.data)
          );
        }
        let decryptData = uInt8ArrayToString(finalOutput.data);
        expect(decryptData == globalText).assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error(
          "[promise] encryptAndDecryptNormalProcess catch err:" + err
        );
        reject(err);
      });
  });
}

async function signAndVerifyBySpecProcess(asyKeySpec, signVerifyAlgoName, verifyType, dataType) {
  var globalRsaKeyPair;
  var globalSignBlob;
  var globalText = "This is a sign test";
  var input;
  if (dataType == "null") {
    input = null;
  } else {
    input = { data: stringTouInt8Array(globalText) };
  };
  return new Promise((resolve, reject) => {
    let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
    expect(specGenerator != null).assertTrue();
    console.info("signAndVerifyBySpecProcess 111");
    let signGenerator = createAsySign(signVerifyAlgoName);
    expect(signGenerator != null).assertTrue();
    console.info("signAndVerifyBySpecProcess 222");
    let verifyGenerator;
    if (verifyType) {
      verifyGenerator = createAsyVerify(signVerifyAlgoName);
    } else {
      verifyGenerator = createAsyVerify("RSA1024|PKCS1|SHA512");
    }
    console.info("[Promise]: verifyGenerator.algName : " + verifyGenerator.algName);
    expect(verifyGenerator != null).assertTrue();
    let keyPairPromise = specGenerator.generateKeyPair(); // 使用生成器创建ECC密钥对
    keyPairPromise.then((keyPair) => {
        expect(keyPair != null).assertTrue();
        globalRsaKeyPair = keyPair;
        return initSign(signGenerator, globalRsaKeyPair.priKey);
      }).then((initData) => {
        expect(initData === "init success").assertTrue();
        return updateSign(signGenerator, input);
      }).then((updateData) => {
        expect(updateData === "update success").assertTrue();

        return signForSign(signGenerator, input);
      }).then((finalOutput) => {
        expect(finalOutput != null).assertTrue();
        globalSignBlob = finalOutput;
        console.log("signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
        return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
      }).then((initData) => {
        expect(initData === "init success").assertTrue();
        return updateVerify(verifyGenerator, input);
      }).then((updateData) => {
        expect(updateData === "update success").assertTrue();
        return verifyForVerify(verifyGenerator, input, globalSignBlob);
      }).then((finalStatus) => {
        expect(finalStatus).assertTrue();
        if (dataType == "null") {
          reject();
        } else {
          resolve();
        }
      }).catch((err) => {
        console.error("[promise] signAndVerifyBySpecProcess catch err:" + err);
        if (dataType =="null") {
          resolve(err);
        } else {
          reject(err);
        }
      });
  });
}

async function signAndVerifystabilityProcess() {
  return new Promise((resolve, reject) => {
    try {
      const starttimestamp = Date.parse(new Date());
      console.info("signAndVerifystabilityProcess start time is :" + starttimestamp);
      for (let index = 0; index < 1000; index++) {
        console.info("[promise] signAndVerifystabilityProcess start index:" + index);
        //sleep(600);
        signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5", 1, "Notnull");
        console.info("[promise] signAndVerifystabilityProcess index:" + index);
      }
      const endtimestamp = Date.parse(new Date());
      console.info("signAndVerifystabilityProcess end time is :" + endtimestamp);
      let timeconsum = endtimestamp - starttimestamp;
      console.info("signAndVerifystabilityProcess timeconsum is :" + timeconsum);
      resolve();
    }
    catch(err) {
      console.error("[promise] signAndVerifystabilityProcess catch err:" + err);
      reject(err);
    };
  });
}

async function signAndVerifySetAndGetSpecProcess(asyKeySpec, signVerifyAlgoName, itemType, itemValue) {
  var globalRsaKeyPair;
  var globalSignBlob;
  var globalText = "This is a sign test";
  var input = { data: stringTouInt8Array(globalText) };

  return new Promise((resolve, reject) => {
    let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
    expect(specGenerator != null).assertTrue();
    let signGenerator = createAsySign(signVerifyAlgoName);
    expect(signGenerator != null).assertTrue();
    let verifyGenerator = createAsyVerify(signVerifyAlgoName);
    expect(verifyGenerator != null).assertTrue();
    let keyPairPromise = specGenerator.generateKeyPair(); // 使用生成器创建ECC密钥对
    keyPairPromise.then((keyPair) => {
        expect(keyPair != null).assertTrue();
        globalRsaKeyPair = keyPair;
        return initSign(signGenerator, globalRsaKeyPair.priKey);
      }).then((initData) => {
        expect(initData === "init success").assertTrue();
        console.info("signAndVerifySetAndGetSpecProcess 111");
        signGenerator.setSignSpec(itemType, itemValue);
        console.info("signAndVerifySetAndGetSpecProcess 222");
        verifyGenerator.setVerifySpec(itemType, itemValue);
        console.info("signAndVerifySetAndGetSpecProcess 333");
        return updateSign(signGenerator, input);
      }).then((updateData) => {
        expect(updateData === "update success").assertTrue();
        return signForSign(signGenerator, input);
      }).then((finalOutput) => {
        expect(finalOutput != null).assertTrue();
        globalSignBlob = finalOutput;
        console.log("signAndVerifySetAndGetSpecProcess signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
        return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
      }).then((initData) => {
        expect(initData === "init success").assertTrue();
        return updateVerify(verifyGenerator, input);
      }).then((updateData) => {
        expect(updateData === "update success").assertTrue();
        return verifyForVerify(verifyGenerator, input, globalSignBlob);
      }).then((finalStatus) => {
        expect(finalStatus).assertTrue();
        let signSpec = signGenerator.getSignSpec(itemType);
        console.log("signAndVerifySetAndGetSpecProcess getSignSpec :" + signSpec);
        let verifySpec = verifyGenerator.getVerifySpec(itemType);
        console.log("signAndVerifySetAndGetSpecProcess getSignSpec :" + verifySpec);
        resolve();
      }).catch((err) => {
        console.error("[promise] signAndVerifySetAndGetSpecProcess catch err:" + err);
        reject(err);
      });
  });
}

async function convertKeyEncryptAndDecryptstabilityProcess() {
  return new Promise((resolve, reject) => {
    try {
      const starttimestamp = Date.parse(new Date());
      console.info("convertKeyEncryptAndDecryptstabilityProcess start time is :" + starttimestamp);
      for (let index = 0; index < 1000; index++) {
        console.info("[promise] convertKeyEncryptAndDecryptstabilityProcess start index:" + index);
        sleep(600);
        convertKeyEncryptAndDecryptProcess("DSA1024");
        console.info("[promise] convertKeyEncryptAndDecryptstabilityProcess index:" + index);
      }
      const endtimestamp = Date.parse(new Date());
      console.info("convertKeyEncryptAndDecryptstabilityProcess end time is :" + endtimestamp);
      let timeconsum = endtimestamp - starttimestamp;
      console.info("convertKeyEncryptAndDecryptstabilityProcess timeconsum is :" + timeconsum);
      resolve();
    }
    catch(err) {
      console.error("[promise] convertKeyEncryptAndDecryptstabilityProcess catch err:" + err);
      reject(err);
    };
  });
}

async function keyGenerationBySpecProcess(asyAlgoName) {
  return new Promise((resolve, reject) => {
    var rsaGenerator = createAsyKeyGenerator(asyAlgoName);
    let keyPairPromise;
    let generatorBySpec;
    expect(rsaGenerator != null).assertTrue();
    console.info("[Promise]: AsyKeyGenerator.algName : " + rsaGenerator.algName);
    generateAsyKeyPair(rsaGenerator)
      .then((rsaKeyPair) => {
        expect(rsaKeyPair != null).assertTrue();
        let encodedPubKey = rsaKeyPair.pubKey.getEncoded();
        let encodedPriKey = rsaKeyPair.priKey.getEncoded();
        console.info("[Promise]: convertKeyEncryptAndDecryptBySpecProcess 1");
        return convertAsyKey(rsaGenerator, encodedPubKey, encodedPriKey);
      })
      .then((convertKeyPair) => {
        expect(convertKeyPair != null).assertTrue();
        console.info("[Promise]: convertKeyEncryptAndDecryptBySpecProcess 11");
        let dsap = convertKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_P_BN);
        let dsaq = convertKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_Q_BN);
        let dsag = convertKeyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.DSA_G_BN);
        let commKeySpec = asyCommon.genDsaKeyPairSpec(dsap, dsaq, dsag);
        console.info("[Promise]: convertKeyEncryptAndDecryptBySpecProcess 111");
        generatorBySpec = createAsyKeyGeneratorBySpec(commKeySpec);
        console.info("[Promise]: convertKeyEncryptAndDecryptBySpecProcess 1111");
        keyPairPromise = generatorBySpec.generateKeyPair();
        expect(keyPairPromise != null).assertTrue();
        resolve();
      })
      .catch((err) => {
        console.error(
          "[promise] convertKeyEncryptAndDecryptProcess catch err:" + err
        );
        reject(err);
      });
  });
}

export {
  encryptAndDecryptNormalProcess,
  signAndVerifyNormalProcess,
  convertKeyEncryptAndDecryptProcess,
  keyAgreementProcess,
  keyAgreementGetAlgNmaeProcess,
  keyAgreementBySpecProcess,
  AsyPriKeyClearProcess,
  signAndVerifyNormalProcessDataException,
  createAsyKeyGeneratorFail,
  createAsySignFail,
  createAsyVerifyFail,

  encryptAndDecryptBySpecProcess,
  signAndVerifyBySpecProcess,
  signAndVerifySetAndGetSpecProcess,
  signAndVerifystabilityProcess,
  convertKeyEncryptAndDecryptstabilityProcess,
  keyGenerationBySpecProcess,
};
