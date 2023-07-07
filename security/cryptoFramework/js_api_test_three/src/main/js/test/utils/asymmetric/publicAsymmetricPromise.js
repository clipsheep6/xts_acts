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
import * as asyCommon from "../common/publicDoSpec";
import { uInt8ArrayToString } from "../common/publicDoString";
import {
  stringTouInt8Array,
  uInt8ArrayToShowStr,
} from "../common/publicDoString";
import {
  createAsyKeyGeneratorBySpec,
  createAsySign,
  createAsyVerify,
  createAsyCipher,
} from "./publicAsymmetricCommon";
import cryptoFramework from "@ohos.security.cryptoFramework";

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
        expect(err.code != null).assertTrue();
        reject(err);
      });
  });
}

async function signAndVerifyBySpecProcess(asyKeySpec, signVerifyAlgoName) {
  var globalRsaKeyPair;
  var globalSignBlob;
  var globalText = "This is a sign test";
  var input = { data: stringTouInt8Array(globalText) };
  return new Promise((resolve, reject) => {
    let specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
    let signGenerator = createAsySign(signVerifyAlgoName);
    let verifyGenerator = createAsyVerify(signVerifyAlgoName);
    console.info("[Promise]: verifyGenerator.algName : " + verifyGenerator.algName);
    let keyPairPromise = specGenerator.generateKeyPair();
    keyPairPromise.then((keyPair) => {
        globalRsaKeyPair = keyPair;
        return initSign(signGenerator, globalRsaKeyPair.priKey);
      }).then(() => {
        return updateSign(signGenerator, input);
      }).then(() => {
        return signForSign(signGenerator, input);
      }).then((finalOutput) => {
        globalSignBlob = finalOutput;
        console.log("signOutput: " + uInt8ArrayToShowStr(globalSignBlob.data));
        return initVerify(verifyGenerator, globalRsaKeyPair.pubKey);
      }).then(() => {
        return updateVerify(verifyGenerator, input);
      }).then(() => {
        return verifyForVerify(verifyGenerator, input, globalSignBlob);
      }).then(() => {
        resolve();
      }).catch((err) => {
        console.error("[promise] signAndVerifyBySpecProcess catch err:" + err);
        expect(err.code != null).assertTrue();
        reject(err);
      });
  });
}

async function signAndVerifystabilityProcess() {
  return new Promise((resolve, reject) => {
    try {
      const starttimestamp = Date.parse(new Date());
      console.info("[promise] signAndVerifystabilityProcess start time is :" + starttimestamp);
      for (let index = 0; index < 1000; index++) {
        signAndVerifyBySpecProcess(asyCommon.genRsa2048KeyPairSpec(), "RSA|PKCS1|MD5");
      }
      const endtimestamp = Date.parse(new Date());
      console.info("[promise] signAndVerifystabilityProcess end time is :" + endtimestamp);
      let timeconsum = endtimestamp - starttimestamp;
      console.info("[promise] signAndVerifystabilityProcess timeconsum is :" + timeconsum);
      resolve();
    }
    catch(err) {
      console.error("[promise] signAndVerifystabilityProcess catch err:" + err);
      expect(err.code != null).assertTrue();
      reject(err);
    };
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
                console.log(
                    "[Promise]cipherGenerator doFinal success! dataBlob is : " + dataBlob
                );
                resolve(finalData);
            })
            .catch((err) => {
                console.log(
                    "[Promise]cipherGenerator doFinal faailed dataBlob is : " + dataBlob
                );
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

async function encryptAndDecryptBySpecProcess(asyKeySpec, cipherAlgoName) {
    var globalCipherText;
    var globalRsaKeyPair;
    var globalText = "This is a cipher test";
    var input = { data: stringTouInt8Array(globalText) };
    var encryptMode = cryptoFramework.CryptoMode.ENCRYPT_MODE;
    var decryptMode = cryptoFramework.CryptoMode.DECRYPT_MODE;

    return new Promise((resolve, reject) => {
        var specGenerator = createAsyKeyGeneratorBySpec(asyKeySpec);
        expect(specGenerator != null).assertTrue();
        var cipherGeneratorEncrypt = createAsyCipher(cipherAlgoName);
        expect(cipherGeneratorEncrypt != null).assertTrue();
        let cipherGeneratorDncrypt = createAsyCipher(cipherAlgoName);
        specGenerator.generateKeyPair()
            .then((specKeyPair) => {
                expect(specKeyPair != null).assertTrue();
                globalRsaKeyPair = specKeyPair;
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher1");
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
                console.info("[Promise]: encryptAndDecryptBySpecProcess initCipher2");
                return initCipher(
                    cipherGeneratorDncrypt,
                    decryptMode,
                    globalRsaKeyPair.priKey,
                    null
                );
            })
            .then((initData) => {
                expect(initData === "init success").assertTrue();
                console.info("[Promise]: encryptAndDecryptBySpecProcess doFinalCipher2");
                return doFinalCipher(
                    cipherGeneratorDncrypt,
                    decryptMode,
                    globalCipherText
                );
            })
            .then((finalOutput) => {
                if (finalOutput == null) {
                    console.error("[Promise]: encryptAndDecryptNormalProcess decrypt doFinal out is null");
                } else {
                    console.log(
                        "[Promise]: encryptAndDecryptNormalProcess decrypt doFinal out hex: " +
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

async function encryptAndDecryptTimesProcess(asyKeySpec, cipherAlgoName) {
    return new Promise((resolve, reject) => {
        for (let i = 0; i < 1000; i++) {
            encryptAndDecryptBySpecProcess(asyKeySpec, cipherAlgoName)
                .then((data) => {
                    console.info("encryptAndDecryptTimesProcess data " + data)

                    console.info("encryptAndDecryptTimesProcess success")
                    resolve()
                }).catch(err => {
                console.info("encryptAndDecryptBySpecProcess faile");
                reject(err);
            });
        }
    })
}

export {
  signAndVerifyBySpecProcess,
  signAndVerifystabilityProcess,
  encryptAndDecryptTimesProcess,
};
