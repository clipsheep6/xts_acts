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

import { describe, beforeAll, afterEach, it, expect } from "@ohos/hypium";
import * as DigPromise from "./utils/digestalgorithm/publicDigestPromise";
import * as DigCallback from "./utils/digestalgorithm/publicDigestCallback";
import cryptoFramework from "@ohos.security.cryptoFramework";

import { stringTouInt8Array, uInt8ArrayToShowStr } from "./utils/common/publicDoString";

export default function DigestAlgorithmSm3FuncJsunit() {
  describe("DigestAlgorithmSm3FuncJsunit", function () {
    console.info("##########start DigestAlgorithmSm3FuncJsunit##########");
    beforeAll(function () {});
    afterEach(function () {});

    /**
     * @tc.number Security_CryptoFramework_MD_Func_0100
     * @tc.name Summary Calculation scenario testing
     * @tc.desc the asyAlgoName is "SM3", Use the Promise Style of Interface
     */
    it("Security_CryptoFramework_MD_Func_0100", 0, async function (done) {
      await DigPromise.testMDDigestPromise("SM3").then((result) => {
          expect(result).assertTrue();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_MD_Func_0100 catch err: " + err);
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_MD_Func_0200
     * @tc.name Summary Calculation scenario testing
     * @tc.desc the asyAlgoName is "SHA5", Use the async Style of Interface
     * @tc.desc the asyAlgoName is null, Use the async Style of Interface
     */
    it("Security_CryptoFramework_MD_Func_0200", 0, async function (done) {
      try {
        cryptoFramework.createMd("SHA5");
        expect(null).assertFail();
      } catch (err) {
        console.error("CreateMd catch err: " + err);
        expect(err.code == 801).assertTrue();
      }

      try {
        cryptoFramework.createMd(null);
        expect(null).assertFail();
      } catch (err) {
        console.error("CreateMd catch err: " + err);
        expect(err.code == 401).assertTrue();
      }
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_MD_Func_0300
     * @tc.name Summary Calculation scenario testing
     * @tc.desc the asyAlgoName is "SM3", Use the async Style of Interface
     * @tc.desc the asyAlgoName is "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefhijklmnopqrstuvwxyz" * 1000,
     * Use the async Style of Interface
     */
    it("Security_CryptoFramework_MD_Func_0300", 0, async function (done) {
      let globalMd;
      let globalText;
      let t = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefhijklmnopqrstuvwxyz";
      let n = t.length;
      for (let i = 0; i < 10000; i++){
        globalText += t.charAt(Math.floor(Math.random() * n));
      }
      console.log("Datablob = " + globalText);
      let ginBlob = { data: stringTouInt8Array(globalText), };

      let result = await new Promise((resolve, reject) => {
        globalMd = cryptoFramework.createMd("SM3");
        console.log("Md= " + globalMd);
        console.log("MD algName is: " + globalMd.algName);

        globalMd.update(ginBlob).then(() => {
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
          console.error("testMDDigestCallback catch error: " + err);
          reject(err);
        });
      });

      try {
        expect(result).assertTrue();
      } catch (err) {
        expect(null).assertFail();
      }
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_MD_Func_0400
     * @tc.name Summary Calculation scenario testing
     * @tc.desc Call it as a promise without passing in parameters
     * @tc.desc Pass in an exception parameter null and call it as a Callback
     * @tc.desc Pass in an exception parameter "" and call it as a Callback
     * @tc.desc Pass in two exception parameters "Test Md Message" and "Test Md Message"
     * and call them as Callback
     */
    it("Security_CryptoFramework_MD_Func_0400", 0, async function (done) {
      await DigCallback.testMDDigestUpdateAbnormalProcess("SM3", 0)
        .then((data) => {
          console.log("data 1: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_MD_Func_0500 catch 0 err: " + err);
          expect(err.code == 401).assertTrue();
        });

      await DigCallback.testMDDigestUpdateAbnormalProcess("SM3", 1)
        .then((data) => {
          console.log("data 2: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_MD_Func_0500 catch 1 err: " + err);
          expect(err.code == 401).assertTrue();
        });

      await DigCallback.testMDDigestUpdateAbnormalProcess("SM3", 2)
        .then((data) => {
          console.log("data 3: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_MD_Func_0500 catch 2 err: " + err);
          expect(err.code == 401).assertTrue();
        });

      await DigCallback.testMDDigestUpdateAbnormalProcess("SM3", 3)
        .then((data) => {
          console.log("data 4: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_MD_Func_0500 catch 3 err: " + err);
          expect(err.code == 401).assertTrue();
        });
      done();
    });


    /**
     * @tc.number Security_CryptoFramework_MD_Func_0500
     * @tc.name Obtain summary calculation results scenario testing
     * @tc.desc The md object was not initialized, and obtain calculation result sand call them as async
     */
    it("Security_CryptoFramework_MD_Func_0500", 0, async function (done) {
      let globalMd;

      let result = await new Promise((resolve, reject) => {
        globalMd = cryptoFramework.createMd("SM3");
        console.log("Md= " + globalMd);
        console.log("MD algName is: " + globalMd.algName);

        globalMd.digest().then((digestBlob) => {
          console.log("Digest result: " + uInt8ArrayToShowStr(digestBlob.data));
          if (digestBlob != null) {
            resolve(true);
          } else {
            resolve(false);
          }
        }).catch((err) => {
          console.error("testMDDigest catch err: " + err);
          reject(err);
        });
      });

      try {
        expect(result).assertTrue();
      } catch (err) {
        expect(null).assertFail();
      }
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_MD_Func_0600
     * @tc.name Obtain the summary calculation algorithm name
     * @tc.desc the asyAlgoName is "SM3", Use the async Style of Interface
     */
    it("Security_CryptoFramework_MD_Func_0600", 0, async function (done) {
      try {
        let globalMd = cryptoFramework.createMd("SM3");
        expect(globalMd.algName == "SM3").assertTrue();
      } catch (err) {
        console.error("testMDDigest catch err: " + err);
        expect(null).assertFail();
      }
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0100
     * @tc.name Calculate message authentication code scenario testing
     * @tc.desc the asyAlgoName is "AES128", Use the Callback Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_0100", 0, async function (done) {
      await DigCallback.testHMACDigestCallback("SM3", "AES128")
        .then((result) => {
          expect(result).assertTrue();
        })
        .catch((err) => {
          console.error("testHMAC catch err: " + err);
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0200
     * @tc.name Calculate message authentication code scenario testing
     * @tc.desc the asyAlgoName is "AES192", Use the Promise Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_0200", 0, async function (done) {
      await DigPromise.testHMACDigestPromise("SM3", "AES192")
        .then((result) => {
          expect(result).assertTrue();
        })
        .catch((err) => {
          console.error("testHMAC catch err: " + err);
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0300
     * @tc.name Calculate message authentication code scenario testing
     * @tc.desc the asyAlgoName is "AES256", Use the Callback Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_0300", 0, async function (done) {
      await DigCallback.testHMACDigestCallback("SM3", "AES256")
        .then((result) => {
          expect(result).assertTrue();
        })
        .catch((err) => {
          console.error("testHMAC catch err: " + err);
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0400
     * @tc.name Calculate message authentication code scenario testing
     * @tc.desc the asyAlgoName is "3DES192", Use the Promise Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_0400", 0, async function (done) {
      await DigPromise.testHMACDigestPromise("SM3", "3DES192")
        .then((result) => {
          expect(result).assertTrue();
        })
        .catch((err) => {
          console.error("testHMAC catch err: " + err);
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0500
     * @tc.name Calculate message authentication code scenario testing
     * @tc.desc the asyAlgoName is "SM4_128", Use the Callback Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_0500", 0, async function (done) {
      await DigCallback.testHMACDigestCallback("SM3", "SM4_128")
        .then((result) => {
          expect(result).assertTrue();
        })
        .catch((err) => {
          console.error("testHMAC catch err: " + err);
          expect(null).assertFail();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0600
     * @tc.name Create a calculation message authentication code object scenario testing
     * @tc.desc the asyAlgoName is "SHA5", Use the async Style of Interface
     * @tc.desc the asyAlgoName is null, Use the async Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_0600", 0, async function (done) {
      try {
        cryptoFramework.createMac("SHA5");
        expect(null).assertFail();
      } catch (err) {
        console.error("CreateMac catch 1 err: " + err);
        expect(err.code == 801).assertTrue();
      }

      try {
        cryptoFramework.createMac(null);
        expect(null).assertFail();
      } catch (err) {
        console.error("CreateMac catch 2 err: " + err);
        expect(err.code == 401).assertTrue();
      }
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0700
     * @tc.name Initialize the calculation message authentication code object scenario testing
     * @tc.desc Call it as a promise without passing in parameters
     * @tc.desc Pass in an exception parameter null and call it as a Promise
     * @tc.desc Pass in an exception parameter "" and call it as a Promise
     * @tc.desc Pass in two exception parameters "Test hmac data" and "Test hmac data"
     * and call them as Promise
     * @tc.desc Incoming rsa asymmetric key pair, and call them as Promise
     */
    it("Security_CryptoFramework_HMAC_Func_0700", 0, async function (done) {
      await DigPromise.initHMACDigestAbnormalProcess("SM3", "RSA1024|PRIMES_2", 0)
        .then((data) => {
          console.log("data 0: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("testHMACDigestPromiseErrorKey catch 0 err: " + err);
          expect(err.code == 801).assertTrue();
        });

      await DigPromise.initHMACDigestAbnormalProcess("SM3", "RSA1024|PRIMES_2", 1)
        .then((data) => {
          console.log("data 1: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("testHMACDigestPromiseErrorKey catch 1 err: " + err);
          expect(err.code == 801).assertTrue();
        });

      await DigPromise.initHMACDigestAbnormalProcess("SM3", "RSA1024|PRIMES_2", 2)
        .then((data) => {
          console.log("data 2: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("testHMACDigestPromiseErrorKey catch 2 err: " + err);
          expect(err.code == 801).assertTrue();
        });

      await DigPromise.initHMACDigestAbnormalProcess("SM3", "RSA1024|PRIMES_2", 3)
        .then((data) => {
          console.log("data 3: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("testHMACDigestPromiseErrorKey catch 3 err: " + err);
          expect(err.code == 801).assertTrue();
        });

      await DigPromise.initHMACDigestAbnormalProcess("SM3", "RSA1024|PRIMES_2", 4)
        .then((data) => {
          console.log("data 0: " + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("testHMACDigestPromiseErrorKey catch 4 err: " + err);
          expect(err.code == 801).assertTrue();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0800
     * @tc.name Calculate Message Authentication Code scenario testing
     * @tc.desc Call it as a promise without passing in parameters
     * @tc.desc Pass in an exception parameter null and call it as a Callback
     * @tc.desc Pass in an exception parameter "" and call it as a Callback
     * @tc.desc Pass in two exception parameters "Mac test data" and "Mac test data"
     * and call them as Callback
     * @tc.desc The mac object was not initialized, and the data is "Mac test data"
     * was passed in as a Callback to be called
     */
    it("Security_CryptoFramework_HMAC_Func_0800", 0, async function (done) {
      await DigCallback.updateHMACDigestAbnormalProcess("SM3", "SM4_128", 0)
        .then((data) => {
          console.log("data 0:" + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_HMAC_Func_0500 catah 0 err:" + err);
          expect(err.code == 401).assertTrue();
        });

      await DigCallback.updateHMACDigestAbnormalProcess("SM3", "SM4_128", 1)
        .then((data) => {
          console.log("data 0:" + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_HMAC_Func_0500 catah 1 err:" + err);
          expect(err.code == 401).assertTrue();
        });

      await DigCallback.updateHMACDigestAbnormalProcess("SM3", "SM4_128", 2)
        .then((data) => {
          console.log("data 0:" + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_HMAC_Func_0500 catah 2 err:" + err);
          expect(err.code == 401).assertTrue();
        });

      await DigCallback.updateHMACDigestAbnormalProcess("SM3", "SM4_128", 3)
        .then((data) => {
          console.log("data 0:" + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_HMAC_Func_0500 catah 3 err:" + err);
          expect(err.code == 401).assertTrue();
        });

      await DigCallback.updateHMACDigestAbnormalProcess("SM3", "SM4_128", 4)
        .then((data) => {
          console.log("data 0:" + data);
          expect(null).assertFail();
        })
        .catch((err) => {
          console.error("Security_CryptoFramework_HMAC_Func_0500 catah 4 err:" + err.code);
          expect(err.code == 17630001).assertTrue();
        });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_0900
     * @tc.name Obtain the calculation message authentication code scenario testing
     * @tc.desc The mac object was not initialized, Use the async Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_0900", 0, async function (done) {
      let globalHMAC;
      let globalsymKeyGenerator;

      let result =  await new Promise((resolve, reject) => {
        globalHMAC = cryptoFramework.createMac("SM3");
        console.log("mac= " + globalHMAC);
        console.log("HMAC algName is: " + globalHMAC.algName);
        globalsymKeyGenerator = cryptoFramework.createSymKeyGenerator("3DES192");
        console.log("symKeyGenerator algName:" + globalsymKeyGenerator.algName);
        globalsymKeyGenerator.generateSymKey().then((key) => {
          console.log("key algName:" + key.algName);
          console.log("key format:" + key.format);
          let encodedKey = key.getEncoded();
          console.log("key getEncoded hex: " + uInt8ArrayToShowStr(encodedKey.data));

          globalHMAC.doFinal().then((dataBlob) => {
            console.log("Digest result: " + uInt8ArrayToShowStr(dataBlob.data));
            resolve(true);
          }).catch((err) => {
            console.error("testHMACDigest catch error: " + err.code);
            expect(err.code == 17630001).assertTrue();
            reject(false);
          });
        });

        try {
          console.log("testHMACDigest catch error: result: " + result);
          expect(result).assertTrue();
        } catch (err) {
          console.error("testHMACDigest catch error: 2" + err.code);
          expect(err.code == undefined).assertTrue();
        }
      });
      done();
    });

    /**
     * @tc.number Security_CryptoFramework_HMAC_Func_1100
     * @tc.name Obtain the calculate message authentication code algorithm name
     * @tc.desc the asyAlgoName is "SM3", Use the async Style of Interface
     */
    it("Security_CryptoFramework_HMAC_Func_1100", 0, async function (done) {
      try {
        let globalMac = cryptoFramework.createMd("SM3");
        expect(globalMac.algName == "SM3").assertTrue();
      } catch (err) {
        console.error("MacDigestAlgoName catch err: " + err);
        expect(null).assertFail();
      }
      done();
    });
  });
}

