/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import cryptoFramework from "@ohos.security.cryptoFramework";
import { BusinessError } from '@ohos.base';

let symKeyGenerator = cryptoFramework.createSymKeyGenerator('3DES192');
let asyKeyGenerator = cryptoFramework.createAsyKeyGenerator("ECC256");
let KeyPairGenPromise = asyKeyGenerator.generateKeyPair();

let pubKeyArray = new Uint8Array([48, 89, 48, 19, 6, 7, 42, 134, 72, 206, 61, 2, 1, 6, 8, 42, 134, 72, 206, 61, 3, 1, 7, 3, 66, 0, 4, 83, 96, 142, 9, 86, 214, 126, 106, 247, 233, 92, 125, 4, 128, 138, 105, 246, 162, 215, 71, 81, 58, 202, 121, 26, 105, 211, 55, 130, 45, 236, 143, 55, 16, 248, 75, 167, 160, 167, 106, 2, 152, 243, 44, 68, 66, 0, 167, 99, 92, 235, 215, 159, 239, 28, 106, 124, 171, 34, 145, 124, 174, 57, 92]);
let priKeyArray = new Uint8Array([48, 49, 2, 1, 1, 4, 32, 115, 56, 137, 35, 207, 0, 60, 191, 90, 61, 136, 105, 210, 16, 27, 4, 171, 57, 10, 61, 123, 40, 189, 28, 34, 207, 236, 22, 45, 223, 10, 189, 160, 10, 6, 8, 42, 134, 72, 206, 61, 3, 1, 7]);
let pubKeyBlob: cryptoFramework.DataBlob = {data: pubKeyArray}; // Data of the public key.
let priKeyBlob: cryptoFramework.DataBlob = {data: priKeyArray}; // Data of the private key.
let convertKeyGenPromise = asyKeyGenerator.convertKey(pubKeyBlob, priKeyBlob);

let plan1 = "This is Sign test plan1"; // The first segment of the data.
let plan2 = "This is Sign test plan2"; // The second segment of the data.
let arr1 = new Uint8Array(plan1.length);
let arr2 = new Uint8Array(plan2.length);
for (let i = 0, j = plan1.length; i < j; ++i) {
  arr1[i] = plan1.charCodeAt(i);
}

for (let i = 0, j = plan2.length; i < j; ++i) {
  arr2[i] = plan2.charCodeAt(i);
}
let input1: cryptoFramework.DataBlob = { data: arr1 };
let input2: cryptoFramework.DataBlob = { data: arr2 };

let rsaGenerator = cryptoFramework.createAsyKeyGenerator("RSA1024|PRIMES_2");

let dsaCommonSpec: cryptoFramework.DSACommonParamsSpec = {
  algName : "DSA",
  specType : cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC,
  p : BigInt("0xed1501551b8ab3547f6355ffdc2913856ddeca198833dbd04f020e5f25e47c50e0b3894f7690a0d2ea5ed3a7be25c54292a698e1f086eb3a97deb4dbf04fcad2dafd94a9f35c3ae338ab35477e16981ded6a5b13d5ff20bf55f1b262303ad3a80af71aa6aa2354d20e9c82647664bdb6b333b7bea0a5f49d55ca40bc312a1729"),
  q : BigInt("0xd23304044019d5d382cfeabf351636c7ab219694ac845051f60b047b"),
  g : BigInt("0x2cc266d8bd33c3009bd67f285a257ba74f0c3a7e12b722864632a0ac3f2c17c91c2f3f67eb2d57071ef47aaa8f8e17a21ad2c1072ee1ce281362aad01dcbcd3876455cd17e1dd55d4ed36fa011db40f0bbb8cba01d066f392b5eaa9404bfcb775f2196a6bc20eeec3db32d54e94d87ecdb7a0310a5a017c5cdb8ac78597778bd"),
}

let dsaKeyPairSpec: cryptoFramework.DSAKeyPairSpec = {
  algName : "DSA",
  specType : cryptoFramework.AsyKeySpecType.KEY_PAIR_SPEC,
  params : dsaCommonSpec,
  sk : BigInt("0xa2dd2adb2d11392c2541930f61f1165c370aabd2d78d00342e0a2fd9"),
  pk : BigInt("0xae6b5d5042e758f3fc9a02d009d896df115811a75b5f7b382d8526270dbb3c029403fafb8573ba4ef0314ea86f09d01e82a14d1ebb67b0c331f41049bd6b1842658b0592e706a5e4d20c14b67977e17df7bdd464cce14b5f13bae6607760fcdf394e0b73ac70aaf141fa4dafd736bd0364b1d6e6c0d7683a5de6b9221e7f2d6b"),
}

let asyKeyPairSpec = dsaKeyPairSpec;
let asyKeyGeneratorBySpec = cryptoFramework.createAsyKeyGeneratorBySpec(asyKeyPairSpec);
let priKeyGenPromise = asyKeyGeneratorBySpec.generatePriKey();
let pubKeyGenPromise = asyKeyGeneratorBySpec.generatePubKey();

let cipherAlgName = '3DES192|ECB|PKCS7';
let cipher = cryptoFramework.createCipher(cipherAlgName);

let signer = cryptoFramework.createSign("RSA1024|PKCS1|SHA256");
let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");

export default function cryptoFrame() {
  describe('CryptoFrame', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    it('assertContain', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      hilog.info(0x0000, 'testTag', '%{public}s', 'it begin');
      let a = 'abc';
      let b = 'b';
      // Defines a variety of assertion methods, which are used to declare expected boolean conditions.
      expect(a).assertContain(b);
      expect(a).assertEqual(a);
    })

    /**
     *@tc.number    : testResult001
     *@tc.name      : testResult001
     *@tc.desc      : 表示执行结果的枚举。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 2
     */
    it('testResult001', 0, async (done:Function) => {

      expect(cryptoFramework.Result.INVALID_PARAMS === 401).assertTrue();
      expect(cryptoFramework.Result.NOT_SUPPORT === 801).assertTrue();
      expect(cryptoFramework.Result.ERR_OUT_OF_MEMORY === 17620001).assertTrue();
      expect(cryptoFramework.Result.ERR_RUNTIME_ERROR === 17620002).assertTrue();
      expect(cryptoFramework.Result.ERR_CRYPTO_OPERATION === 17630001).assertTrue();

      done();

    })

    /**
     *@tc.number    : testCryptoMode001
     *@tc.name      : testCryptoMode001
     *@tc.desc      : 表示执行结果的枚举。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 3
     */
    it('testCryptoMode001', 0, async (done:Function) => {

      expect(cryptoFramework.CryptoMode.ENCRYPT_MODE === 0).assertTrue();
      expect(cryptoFramework.CryptoMode.DECRYPT_MODE === 1).assertTrue();

      done();

    })

    /**
     *@tc.number    : testAsyKeySpecItem001
     *@tc.name      : testAsyKeySpecItem001
     *@tc.desc      : 表示密钥参数的枚举。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 4
     */
    it('testAsyKeySpecItem001', 0, async (done:Function) => {

      expect(cryptoFramework.AsyKeySpecItem.DSA_P_BN === 101).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.DSA_Q_BN === 102).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.DSA_G_BN === 103).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.DSA_SK_BN === 104).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.DSA_PK_BN === 105).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN === 201).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_A_BN === 202).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_B_BN === 203).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_G_X_BN === 204).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_G_Y_BN === 205).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_N_BN === 206).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_H_NUM === 207).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_SK_BN === 208).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_PK_X_BN === 209).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_PK_Y_BN === 210).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_FIELD_TYPE_STR === 211).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_FIELD_SIZE_NUM === 212).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.ECC_CURVE_NAME_STR === 213).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.RSA_N_BN === 301).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.RSA_SK_BN === 302).assertTrue();
      expect(cryptoFramework.AsyKeySpecItem.RSA_PK_BN === 303).assertTrue();

      done();

    })

    /**
     *@tc.number    : testAsyKeySpecType001
     *@tc.name      : testAsyKeySpecType001
     *@tc.desc      : 表示密钥参数类型的枚举。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 5
     */
    it('testAsyKeySpecType001', 0, async (done:Function) => {

      expect(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC === 0).assertTrue();
      expect(cryptoFramework.AsyKeySpecType.PRIVATE_KEY_SPEC === 1).assertTrue();
      expect(cryptoFramework.AsyKeySpecType.PUBLIC_KEY_SPEC === 2).assertTrue();
      expect(cryptoFramework.AsyKeySpecType.KEY_PAIR_SPEC === 3).assertTrue();

      done();

    })

    /**
     *@tc.number    : testCipherSpecItem001
     *@tc.name      : testCipherSpecItem001
     *@tc.desc      : 表示加解密参数的枚举，这些加解密参数支持通过setCipherSpec接口设置/通过getCipherSpec接口获取。当前只支持RSA算法，
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 6
     */
    it('testCipherSpecItem001', 0, async (done:Function) => {

      expect(cryptoFramework.CipherSpecItem.OAEP_MD_NAME_STR === 100).assertTrue();
      expect(cryptoFramework.CipherSpecItem.OAEP_MGF_NAME_STR === 101).assertTrue();
      expect(cryptoFramework.CipherSpecItem.OAEP_MGF1_MD_STR === 102).assertTrue();
      expect(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR === 103).assertTrue();

      done();

    })

    /**
     *@tc.number    : testSignSpecItem001
     *@tc.name      : testSignSpecItem001
     *@tc.desc      : 表示签名验签参数的枚举，这些签名验签参数支持通过setSignSpec、setVerifySpec接口设置/通过getSignSpec、getVerifySpec接口获取。当前只支持RSA算法，
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 7
     */
    it('testSignSpecItem001', 0, async (done:Function) => {

      expect(cryptoFramework.SignSpecItem.PSS_MD_NAME_STR === 100).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_MGF_NAME_STR === 101).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_MGF1_MD_STR === 102).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM === 103).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_TRAILER_FIELD_NUM === 104).assertTrue();

      done();

    })

    /**
     *@tc.number    : testGetEncoded001
     *@tc.name      : testGetEncoded001
     *@tc.desc      : 同步方法，获取密钥数据的字节流。密钥可以为对称密钥，公钥或者私钥。其中，公钥格式满足ASN.1语法、X.509规范、DER编码格式；私钥格式满足ASN.1语法，PKCS#8规范、DER编码方式。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 8
     */
    it('testGetEncoded001', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey((err, key) => {
        if (err) {
          console.error(`Generate symKey failed, ${err.code}, ${err.message}`);
          done();
        } else {
          let encodedKey = key.getEncoded();
          console.info("key blob: "+ encodedKey.data);
          expect(encodedKey.data instanceof Uint8Array).assertTrue();
          done();
        }
      })

    })

    /**
     *@tc.number    : testSymKeyClearMem001
     *@tc.name      : testSymKeyClearMem001
     *@tc.desc      : 同步方法，将系统底层内存中的的密钥内容清零。建议在不再使用对称密钥实例时，调用本函数，避免内存中密钥数据存留过久。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 9
     */
    it('testSymKeyClearMem001', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey((err, key) => {
        if (err) {
          console.error(`Generate symKey failed, ${err.code}, ${err.message}`);
          done();
        } else {
          let encodedKey = key.getEncoded();
          console.info("key blob111: " + encodedKey.data);    // Display key content.
          key.clearMem();
          encodedKey = key.getEncoded();
          console.info("key blob111:" + encodedKey.data);    // Display all 0s.
          done();
        }
      })

    })

    /**
     *@tc.number    : testPubKeyGetAsyKeySpec001
     *@tc.name      : testPubKeyGetAsyKeySpec001
     *@tc.desc      : 公钥，是Key的子类，在非对称加解密、验签、密钥协商时需要将其对象作为输入使用。
     公钥可以通过非对称密钥生成器AsyKeyGenerator、AsyKeyGeneratorBySpec来生成。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 10
     */
    it('testPubKeyGetAsyKeySpec001', 0, async (done:Function) => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          done();
          return;
        }
        console.info("generateKeyPair: success.");
        let p = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
        console.info("ecc item --- p: " + p.toString(16));
        expect(p).not().assertNull();
        done();
      })

    })

    /**
     *@tc.number    : testPriKeyClearMem001
     *@tc.name      : testPriKeyClearMem001
     *@tc.desc      : 同步方法，将系统底层内存中的的密钥内容清零。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 11
     */
    it('testPriKeyClearMem001', 0, async (done:Function) => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          done();
          return;
        }
        console.info("generateKeyPair: success.");
        keyPair.priKey.clearMem();
        done();
      })

    })

    /**
     *@tc.number    : testPriKeyGetAsyKeySpec001
     *@tc.name      : testPriKeyGetAsyKeySpec001
     *@tc.desc      : 同步方法，获取密钥参数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 12
     */
    it('testPriKeyGetAsyKeySpec001', 0, async (done:Function) => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          done();
          return;
        }
        console.info("generateKeyPair: success.");
        let p = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
        console.info("ecc item --- p: " + p.toString(16));
        expect(p).not().assertNull();
        done();
      })

    })

    /**
     *@tc.number    : testCreateSymKeyGenerator001
     *@tc.name      : testCreateSymKeyGenerator001
     *@tc.desc      : 通过指定算法名称，获取相应的Cipher实例。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 13
     */
    it('testCreateSymKeyGenerator001', 0, async (done:Function) => {

      try {
        let symKeyGenerator = cryptoFramework.createSymKeyGenerator('3DES192');
        expect(symKeyGenerator).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })

    /**
     *@tc.number    : testSymKeyGeneratorGenerateSymKey001
     *@tc.name      : testSymKeyGeneratorGenerateSymKey001
     *@tc.desc      : 异步获取对称密钥生成器随机生成的密钥，通过注册回调函数获取结果。
     必须在使用createSymKeyGenerator创建对称密钥生成器后，才能使用本函数。
     目前支持使用OpenSSL的RAND_priv_bytes()作为底层能力生成随机密钥。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 14
     */
    it('testSymKeyGeneratorGenerateSymKey001', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey((err, symKey) => {
        if (err) {
          console.error(`Generate symKey failed, ${err.code}, ${err.message}`);
          done();
        } else {
          console.info(`Generate symKey success, algName: ${symKey.algName}`);
          expect(symKey.algName).not().assertNull();
          done();
        }
      })

    })

    /**
     *@tc.number    : testSymKeyGeneratorGenerateSymKey002
     *@tc.name      : testSymKeyGeneratorGenerateSymKey002
     *@tc.desc      : 异步获取该对称密钥生成器随机生成的密钥，通过Promise获取结果。
     必须在使用createSymKeyGenerator创建对称密钥生成器后，才能使用本函数。
     目前支持使用OpenSSL的RAND_priv_bytes()作为底层能力生成随机密钥。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 15
     */
    it('testSymKeyGeneratorGenerateSymKey002', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey()
        .then(symKey => {
          console.info(`Generate symKey success, algName: ${symKey.algName}`);
          expect(symKey.algName).not().assertNull();
          done();
        }, (error: BusinessError) => {
          console.error(`Generate symKey failed, ${error.code}, ${error.message}`);
          done();
        })

    })

    /**
     *@tc.number    : testSymKeyGeneratorConvertKey001
     *@tc.name      : testSymKeyGeneratorConvertKey001
     *@tc.desc      : 异步根据指定数据生成对称密钥，通过注册回调函数获取结果。
     必须在使用createSymKeyGenerator创建对称密钥生成器后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 16
     */
    it('testSymKeyGeneratorConvertKey001', 0, async (done:Function) => {

      let arr = [
        0xba, 0x3d, 0xc2, 0x71, 0x21, 0x1e, 0x30, 0x56,
        0xad, 0x47, 0xfc, 0x5a, 0x46, 0x39, 0xee, 0x7c,
        0xba, 0x3b, 0xc2, 0x71, 0xab, 0xa0, 0x30, 0x72]; // keyLen = 192 (24 bytes)
      let keyMaterial = new Uint8Array(arr);

      let keyMaterialBlob:cryptoFramework.DataBlob = { data: keyMaterial };
      symKeyGenerator.convertKey(keyMaterialBlob, (err, symKey) => {
        if (err) {
          console.error(`Convert symKey failed, ${err.code}, ${err.message}`);
          done();
        } else {
          console.info(`Convert symKey success, algName: ${symKey.algName}`);
          expect(symKey.algName).not().assertNull();
          done();
        }
      })

    })

    /**
     *@tc.number    : testSymKeyGeneratorConvertKey002
     *@tc.name      : testSymKeyGeneratorConvertKey002
     *@tc.desc      : 异步根据指定数据生成对称密钥，通过Promise获取结果。
     必须在使用createSymKeyGenerator创建对称密钥生成器后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 17
     */
    it('testSymKeyGeneratorConvertKey002', 0, async (done:Function) => {

      let arr = [
        0xba, 0x3d, 0xc2, 0x71, 0x21, 0x1e, 0x30, 0x56,
        0xad, 0x47, 0xfc, 0x5a, 0x46, 0x39, 0xee, 0x7c,
        0xba, 0x3b, 0xc2, 0x71, 0xab, 0xa0, 0x30, 0x72]; // keyLen = 192 (24 bytes)
      let keyMaterial = new Uint8Array(arr);

      let keyMaterialBlob:cryptoFramework.DataBlob = { data: keyMaterial };
      symKeyGenerator.convertKey(keyMaterialBlob)
        .then(symKey => {
          console.info(`Convert symKey success, algName: ${symKey.algName}`);
          expect(symKey.algName).not().assertNull();
          done();
        }, (error: BusinessError) => {
          console.error(`Convert symKey failed, ${error.code}, ${error.message}`);
          done();
        })

    })

    /**
     *@tc.number    : testCreateAsyKeyGenerator001
     *@tc.name      : testCreateAsyKeyGenerator001
     *@tc.desc      : 通过指定算法名称，获取相应的Cipher实例。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 18
     */
    it('testCreateAsyKeyGenerator001', 0, async (done:Function) => {

      try {
        let asyKeyGenerator = cryptoFramework.createAsyKeyGenerator("ECC256");
        expect(asyKeyGenerator).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })

    /**
     *@tc.number    : testAsyKeyGeneratorGenerateKeyPair001
     *@tc.name      : testAsyKeyGeneratorGenerateKeyPair001
     *@tc.desc      : 异步获取非对称密钥生成器随机生成的密钥，通过注册回调函数获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 19
     */
    it('testAsyKeyGeneratorGenerateKeyPair001', 0, async (done:Function) => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          done();
          return;
        }
        expect(keyPair).not().assertNull();
        console.info("generateKeyPair: success.");
        done();
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorGenerateKeyPair002
     *@tc.name      : testAsyKeyGeneratorGenerateKeyPair002
     *@tc.desc      : 异步获取该非对称密钥生成器随机生成的密钥，通过Promise获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 20
     */
    it('testAsyKeyGeneratorGenerateKeyPair002', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        console.info("generateKeyPair success.");
        expect(keyPair).not().assertNull();
        done();
      }).catch((error: BusinessError) => {
        console.error("generateKeyPair error.");
        done();
      });

    })

    /**
     *@tc.number    : testAsyKeyGeneratorConvertKey001
     *@tc.name      : testAsyKeyGeneratorConvertKey001
     *@tc.desc      : 异步获取该非对称密钥生成器随机生成的密钥，通过Promise获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 21
     */
    it('testAsyKeyGeneratorConvertKey001', 0, async (done:Function) => {

      let pubKeyArray = new Uint8Array([48, 89, 48, 19, 6, 7, 42, 134, 72, 206, 61, 2, 1, 6, 8, 42, 134, 72, 206, 61, 3, 1, 7, 3, 66, 0, 4, 83, 96, 142, 9, 86, 214, 126, 106, 247, 233, 92, 125, 4, 128, 138, 105, 246, 162, 215, 71, 81, 58, 202, 121, 26, 105, 211, 55, 130, 45, 236, 143, 55, 16, 248, 75, 167, 160, 167, 106, 2, 152, 243, 44, 68, 66, 0, 167, 99, 92, 235, 215, 159, 239, 28, 106, 124, 171, 34, 145, 124, 174, 57, 92]);
      let priKeyArray = new Uint8Array([48, 49, 2, 1, 1, 4, 32, 115, 56, 137, 35, 207, 0, 60, 191, 90, 61, 136, 105, 210, 16, 27, 4, 171, 57, 10, 61, 123, 40, 189, 28, 34, 207, 236, 22, 45, 223, 10, 189, 160, 10, 6, 8, 42, 134, 72, 206, 61, 3, 1, 7]);
      let pubKeyBlob: cryptoFramework.DataBlob = {data: pubKeyArray}; // Data of the public key.
      let priKeyBlob: cryptoFramework.DataBlob = {data: priKeyArray}; // Data of the private key.
      asyKeyGenerator.convertKey(pubKeyBlob, priKeyBlob, (err, keyPair) => {
        if (err) {
          console.error("convertKey: error.");
          done();
          return;
        }
        console.info("convertKey: success.");
        expect(keyPair).not().assertNull();
        done();
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorConvertKey002
     *@tc.name      : testAsyKeyGeneratorConvertKey002
     *@tc.desc      : 异步获取指定数据生成非对称密钥，通过Promise获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 22
     */
    it('testAsyKeyGeneratorConvertKey002', 0, async (done:Function) => {

      convertKeyGenPromise.then( keyPair => {
        console.info("convertKey success.");
        expect(keyPair).not().assertNull();
        done();
      }).catch((error: BusinessError) => {
        console.error("convertKey error.");
        done();
      });

    })

    /**
     *@tc.number    : testCreateAsyKeyGeneratorBySpec001
     *@tc.name      : testCreateAsyKeyGeneratorBySpec001
     *@tc.desc      : 通过指定算法名称，获取相应的Cipher实例。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 23
     */
    it('testCreateAsyKeyGeneratorBySpec001', 0, async (done:Function) => {

      try {
        let asyKeyGeneratorBySpec = cryptoFramework.createAsyKeyGeneratorBySpec(asyKeyPairSpec);
        expect(asyKeyGeneratorBySpec).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })


    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGenerateKeyPair001
     *@tc.name      : testAsyKeyGeneratorBySpecGenerateKeyPair001
     *@tc.desc      : 异步获取非对称密钥生成器生成的密钥，通过注册回调函数获取结果。
     当使用COMMON_PARAMS_SPEC类型的密钥参数来创建密钥生成器时，可以得到随机生成的密钥对；当使用KEY_PAIR_SPEC类型的密钥参数来创建密钥生成器时，可以得到各项数据与密钥参数一致的密钥对。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 24
     */
    it('testAsyKeyGeneratorBySpecGenerateKeyPair001', 0, async (done:Function) => {

      asyKeyGeneratorBySpec.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          done();
          return;
        }
        expect(keyPair).not().assertNull();
        done();
        console.info("generateKeyPair: success.");
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGenerateKeyPair002
     *@tc.name      : testAsyKeyGeneratorBySpecGenerateKeyPair002
     *@tc.desc      : 异步获取该非对称密钥生成器生成的密钥，通过Promise获取结果。
     当使用COMMON_PARAMS_SPEC类型的密钥参数来创建密钥生成器时，可以得到随机生成的密钥对；当使用KEY_PAIR_SPEC类型的密钥参数来创建密钥生成器时，可以得到各项数据与密钥参数一致的密钥对。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 25
     */
    it('testAsyKeyGeneratorBySpecGenerateKeyPair002', 0, async (done:Function) => {

      KeyPairGenPromise.then( keyPair => {
        console.info("generateKeyPair success.");
        expect(keyPair).not().assertNull();
        done();
      }).catch((error: BusinessError) => {
        done();
        console.error("generateKeyPair error.");
      });

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePriKey001
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePriKey001
     *@tc.desc      : 异步获取非对称密钥生成器生成的密钥，通过注册回调函数获取结果。
     当使用PRIVATE_KEY_SPEC类型的密钥参数来创建密钥生成器时，可以得到指定的私钥；当使用KEY_PAIR_SPEC类型的密钥参数来创建密钥生成器时，可以从生成的密钥对中获取指定的私钥。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 26
     */
    it('testAsyKeyGeneratorBySpecGeneratePriKey001', 0, async (done:Function) => {

      asyKeyGeneratorBySpec.generatePriKey((err, prikey) => {
        if (err) {
          console.error("generatePriKey: error.");
          done();
          return;
        }
        expect(prikey).not().assertNull();
        done();
        console.info("generatePriKey: success.");
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePriKey002
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePriKey002
     *@tc.desc      : 异步获取该非对称密钥生成器生成的密钥，通过Promise获取结果。
     当使用PRIVATE_KEY_SPEC类型的密钥参数来创建密钥生成器时，可以得到指定的私钥；当使用KEY_PAIR_SPEC类型的密钥参数来创建密钥生成器时，可以从生成的密钥对中获取指定的私钥。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 27
     */
    it('testAsyKeyGeneratorBySpecGeneratePriKey002', 0, async (done:Function) => {

      priKeyGenPromise.then( priKey => {
        expect(priKey).not().assertNull();
        done();
        console.info("generatePriKey success.");
      }).catch((error: BusinessError) => {
        console.error("generatePriKey error.");
        done();
      });

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePubKey001
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePubKey001
     *@tc.desc      : 异步获取非对称密钥生成器生成的密钥，通过注册回调函数获取结果。
     当使用PUBLIC_KEY_SPEC类型的密钥参数来创建密钥生成器时，可以得到指定的公钥；当使用KEY_PAIR_SPEC类型的密钥参数来创建密钥生成器时，可以从生成的密钥对中获取指定的公钥。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 28
     */
    it('testAsyKeyGeneratorBySpecGeneratePubKey001', 0, async (done:Function) => {

      asyKeyGeneratorBySpec.generatePubKey((err, pubKey) => {
        if (err) {
          console.error("generatePubKey: error.");
          done();
          return;
        }
        expect(pubKey).not().assertNull();
        done();
        console.info("generatePubKey: success.");
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePubKey002
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePubKey002
     *@tc.desc      : 异步获取该非对称密钥生成器生成的密钥，通过Promise获取结果。
     当使用PUBLIC_KEY_SPEC类型的密钥参数来创建密钥生成器时，可以得到指定的公钥；当使用KEY_PAIR_SPEC类型的密钥参数来创建密钥生成器时，可以从生成的密钥对中获取指定的公钥。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 29
     */
    it('testAsyKeyGeneratorBySpecGeneratePubKey002', 0, async (done:Function) => {

      pubKeyGenPromise.then( pubKey => {
        console.info("generatePubKey pubKey success.");
        expect(pubKey).not().assertNull();
        done();
      }).catch((error: BusinessError) => {
        console.error("generatePubKey error.");
        done();
      });

    })

    /**
     *@tc.number    : testCreateCipher001
     *@tc.name      : testCreateCipher001
     *@tc.desc      : 通过指定算法名称，获取相应的Cipher实例。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 30
     */
    it('testCreateCipher001', 0, async (done:Function) => {

      let cipherAlgName = '3DES192|ECB|PKCS7';
      try {
        let cipher = cryptoFramework.createCipher(cipherAlgName);
        console.info(`cipher algName: ${cipher.algName}`);
        expect(cipher.algName).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })

    /**
     *@tc.number    : testCipherInit001
     *@tc.name      : testCipherInit001
     *@tc.desc      : 初始化加解密的cipher对象，通过注册回调函数获取结果。
     必须在使用createCipher创建Cipher实例后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 31
     */
    it('testCipherInit001', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey((err, symKey) => {

        cipher.init(cryptoFramework.CryptoMode.ENCRYPT_MODE, symKey, null, (err) => {
          if (err) {
            console.error(`Failed to init cipher, ${err.code}, ${err.message}`);
            done();
          } else {
            console.info(`Init cipher success`);
            expect(err).assertUndefined();
            done();
          }
        })
      })

    })

    /**
     *@tc.number    : testCipherInit002
     *@tc.name      : testCipherInit002
     *@tc.desc      : 初始化加解密的cipher对象，通过Promise获取结果。
     必须在使用createCipher创建Cipher实例后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 32
     */
    it('testCipherInit002', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey((err, symKey) => {

        cipher.init(cryptoFramework.CryptoMode.ENCRYPT_MODE, symKey, null)
          .then(() => {
            console.info(`Init cipher success`);
            done();
          }, (error: BusinessError) => {
            console.error(`Failed to init cipher, ${error.code}, ${error.message}`);
            done();
          })
      })

    })

    /**
     *@tc.number    : testCipherUpdate001
     *@tc.name      : testCipherUpdate001
     *@tc.desc      : 分段更新加密或者解密数据操作，通过注册回调函数获取加/解密数据。
     必须在对Cipher实例使用init()初始化后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 33
     */
    it('testCipherUpdate001', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey((err, symKey) => {

        let str = 'this is test!';
        let arr = new Uint8Array(str.length);
        for (let i = 0, j = str.length; i < j; ++i) {
          arr[i] = str.charCodeAt(i);
        }

        let plainText: cryptoFramework.DataBlob = {data: arr};
        cipher.update(plainText, (err, output) => {       // Example of the encryption process.
          if (err) {
            console.error(`Failed to update cipher`);
            done();
          } else {
            console.info(`Update cipher success`);
            expect(output).not().assertNull();
            done();
          }
        })

      })

    })

    /**
     *@tc.number    : testCipherUpdate002
     *@tc.name      : testCipherUpdate002
     *@tc.desc      : 分段更新加密或者解密数据操作，通过Promise获取加/解密数据。
     必须在对Cipher实例使用init()初始化后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 34
     */
    it('testCipherUpdate002', 0, async (done:Function) => {

      symKeyGenerator.generateSymKey((err, symKey) => {

        let str = 'this is test!';
        let arr = new Uint8Array(str.length);
        for (let i = 0, j = str.length; i < j; ++i) {
          arr[i] = str.charCodeAt(i);
        }

        let plainText: cryptoFramework.DataBlob = {data: arr};
        cipher.update(plainText)
          .then((output) => {
            console.info(`Update cipher success.`);
            expect(output).not().assertNull();
            done();
          }, (error: BusinessError) => {
            console.info(`Update cipher failed.`);
            done();
          })
      })

    })

    /**
     *@tc.number    : testCipherDoFinal001
     *@tc.name      : testCipherDoFinal001
     *@tc.desc      : （1）在对称加解密中，doFinal加/解密（分组模式产生的）剩余数据和本次传入的数据，最后结束加密或者解密数据操作，通过注册回调函数获取加密或者解密数据。
     如果数据量较小，可以在doFinal中一次性传入数据，而不使用update；如果在本次加解密流程中，已经使用update传入过数据，可以在doFinal的data参数处传入null。
     根据对称加解密的模式不同，doFinal的输出有如下区别：
     对于GCM和CCM模式的对称加密：一次加密流程中，如果将每一次update和doFinal的结果拼接起来，会得到“密文+authTag”，即末尾的16字节（GCM模式）或12字节（CCM模式）是authTag，而其余部分均为密文。（也就是说，如果doFinal的data参数传入null，则doFinal的结果就是authTag）
     authTag需要填入解密时的GcmParamsSpec或CcmParamsSpec；密文则作为解密时的入参data。
     对于其他模式的对称加解密、GCM和CCM模式的对称解密：一次加/解密流程中，每一次update和doFinal的结果拼接起来，得到完整的明文/密文。
     （2）在RSA、SM2非对称加解密中，doFinal加/解密本次传入的数据，通过注册回调函数获取加密或者解密数据。如果数据量较大，可以多次调用doFinal，拼接结果得到完整的明文/密文。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 35
     */
    it('testCipherDoFinal001', 0, async (done:Function) => {

      let str = 'this is test!';
      let arr = new Uint8Array(str.length);
      for (let i = 0, j = str.length; i < j; ++i) {
        arr[i] = str.charCodeAt(i);
      }

      let plainText: cryptoFramework.DataBlob = {data: arr};
      cipher.doFinal(plainText, (err, output) => {
        if (err) {
          console.error(`Failed to finalize cipher, ${err.code}, ${err.message}`);
          done();
        } else {
          console.info(`Finalize cipher success`);
          expect(output).not().assertNull();
          done();
        }
      })

    })

    /**
     *@tc.number    : testCipherDoFinal002
     *@tc.name      : testCipherDoFinal002
     *@tc.desc      : （1）在对称加解密中，doFinal加/解密（分组模式产生的）剩余数据和本次传入的数据，最后结束加密或者解密数据操作，通过Promise获取加密或者解密数据。
     如果数据量较小，可以在doFinal中一次性传入数据，而不使用update；如果在本次加解密流程中，已经使用update传入过数据，可以在doFinal的data参数处传入null。
     根据对称加解密的模式不同，doFinal的输出有如下区别：
     对于GCM和CCM模式的对称加密：一次加密流程中，如果将每一次update和doFinal的结果拼接起来，会得到“密文+authTag”，即末尾的16字节（GCM模式）或12字节（CCM模式）是authTag，而其余部分均为密文。（也就是说，如果doFinal的data参数传入null，则doFinal的结果就是authTag）
     authTag需要填入解密时的GcmParamsSpec或CcmParamsSpec；密文则作为解密时的入参data。
     对于其他模式的对称加解密、GCM和CCM模式的对称解密：一次加/解密流程中，每一次update和doFinal的结果拼接起来，得到完整的明文/密文。
     （2）在RSA、SM2非对称加解密中，doFinal加/解密本次传入的数据，通过Promise获取加密或者解密数据。如果数据量较大，可以多次调用doFinal，拼接结果得到完整的明文/密文。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 36
     */
    it('testCipherDoFinal002', 0, async (done:Function) => {

      let str = 'this is test!';
      let arr = new Uint8Array(str.length);
      for (let i = 0, j = str.length; i < j; ++i) {
        arr[i] = str.charCodeAt(i);
      }
      let plainText: cryptoFramework.DataBlob = {data: arr};

      cipher.doFinal(plainText)
        .then(output => {
          console.info(`Finalize cipher success` + output);
          expect(output).not().assertNull();
          done();
        }, (error: BusinessError) => {
          console.error(`Failed to finalize cipher, ${error.code}, ${error.message}`);
          done();
        })

    })

    /**
     *@tc.number    : testSetCipherSpec001
     *@tc.name      : testSetCipherSpec001
     *@tc.desc      : 设置加解密参数。常用的加解密参数可以直接通过createCipher 来指定，剩余参数可以通过本接口指定。当前只支持RSA算法。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 37
     */
    it('testSetCipherSpec001', 0, async (done:Function) => {

      try {
        let pSource = new Uint8Array([1,2,3,4]);
        cipher.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
        let mdName = cipher.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
        console.log('test mdName3' + mdName);
        expect(mdName).not().assertNull();
      } catch (e) {
        console.error(`Failed to err` + JSON.stringify(e));
      }
      done();

    })

    /**
     *@tc.number    : testGetCipherSpec001
     *@tc.name      : testGetCipherSpec001
     *@tc.desc      : 获取加解密参数。当前只支持RSA算法。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 38
     */
    it('testGetCipherSpec001', 0, async (done:Function) => {

      try {
        let pSource = new Uint8Array([1,2,3,4]);
        cipher.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
        let mdName = cipher.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
        console.log('test mdName3' + mdName);
        expect(mdName).not().assertNull();
      } catch (e) {
        console.error(`Failed to err` + JSON.stringify(e));
      }
      done();

    })

    /**
     *@tc.number    : testCreateSign001
     *@tc.name      : testCreateSign001
     *@tc.desc      : Sign实例生成。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 39
     */
    it('testCreateSign001', 0, async (done:Function) => {

      expect(signer).not().assertNull();
      done();

    })

    /**
     *@tc.number    : testSignInit001
     *@tc.name      : testSignInit001
     *@tc.desc      : 使用私钥初始化Sign对象，通过注册回调函数获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 40
     */
    it('testSignInit001', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;

      rsaGenerator.generateKeyPair((err, keyPair) => {
        globalKeyPair = keyPair;
        let priKey = globalKeyPair.priKey;
        signer.init(priKey, err => {
          console.log('err:' + err)
          if(err) {
            console.log('signer init err:' + JSON.stringify(err));
            done();
            return;
          }
          expect(err).assertUndefined();
          console.log('signer init success');
          done();
        });
      });

    })

    /**
     *@tc.number    : testSignInit002
     *@tc.name      : testSignInit002
     *@tc.desc      : 使用私钥初始化Sign对象，通过注册回调函数获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 41
     */
    it('testSignInit002', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        done();
      }).catch((err:BusinessError) => {
        done();
      });
    })

    /**
     *@tc.number    : testSignUpdate001
     *@tc.name      : testSignUpdate001
     *@tc.desc      : 追加待签名数据，通过注册回调函数完成更新。必须在对Sign实例使用init()初始化后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 42
     */
    it('testSignUpdate001', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;

      rsaGenerator.generateKeyPair((err, keyPair) => {
        globalKeyPair = keyPair;
        let priKey = globalKeyPair.priKey;
        signer.init(priKey, err => {
          if(err) {
            console.log('signer init err:' + JSON.stringify(err));
            done();
            return;
          }
          console.log('signer init success');
          signer.update(input1, err => {
            if(err) {
              console.log('signer update err:' + JSON.stringify(err));
              done();
              return;
            }
            expect(err).assertNull();
            console.log('signer update success');

            done();
          });
        });
      });

    })

    /**
     *@tc.number    : testSignUpdate002
     *@tc.name      : testSignUpdate002
     *@tc.desc      : 使用私钥初始化Sign对象，通过注册回调函数获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 43
     */
    it('testSignUpdate002', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        console.log('signer init success');
        return signer.update(input1);
      }).then(() => {
        console.log('signer update success');
        done();
      }).catch((err:BusinessError) => {
        console.log('signer update err');
        done();
      });

    })

    /**
     *@tc.number    : testSignSign001
     *@tc.name      : testSignSign001
     *@tc.desc      : 对数据进行签名，通过注册回调函数获取签名结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 44
     */
    it('testSignSign001', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;
      let signMessageBlob: cryptoFramework.DataBlob;

      let signer = cryptoFramework.createSign("RSA1024|PKCS1|SHA256");
      rsaGenerator.generateKeyPair((err, keyPair) => {
        globalKeyPair = keyPair;
        let priKey = globalKeyPair.priKey;
        signer.init(priKey, err => {
          if(err) {
            console.log('signer init err:' + JSON.stringify(err));
            done();
            return;
          }
          signer.update(input1, err => {
            if(err) {
              console.log('signer init err:' + JSON.stringify(err));
              done();
              return;
            }
            signer.sign(input2, (err, data) => {
              if(err) {
                console.log('signer init err:' + JSON.stringify(err));
                done();
                return;
              }
              signMessageBlob = data;
              expect(data).not().assertNull();
              done();
            });
          });
        });
      });

    })

    /**
     *@tc.number    : testSignSign002
     *@tc.name      : testSignSign002
     *@tc.desc      : 使用私钥初始化Sign对象，通过注册回调函数获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 45
     */
    it('testSignSign002', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {
        console.info("sign output is " + dataBlob.data);
        expect(dataBlob.data).not().assertNull();
        done();
      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testSetSignSpec001
     *@tc.name      : testSetSignSpec001
     *@tc.desc      : 设置签名参数。常用的签名参数可以直接通过createSign 来指定，剩余参数可以通过本接口指定。当前只支持RSA算法。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 46
     */
    it('testSetSignSpec001', 0, async (done:Function) => {

      let setN = 20;

      try {
        signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
        done();
      } catch (e) {
        console.error(`Failed to err`);
        done();
      }

    })

    /**
     *@tc.number    : testGetSignSpec001
     *@tc.name      : testGetSignSpec001
     *@tc.desc      : 设置签名参数。常用的签名参数可以直接通过createSign 来指定，剩余参数可以通过本接口指定。当前只支持RSA算法。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 47
     */
    it('testGetSignSpec001', 0, async (done:Function) => {

      let setN = 20;

      try {
        signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
        let saltLen = signer.getSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM);
        expect(saltLen).assertEqual(setN);
        done();
      } catch (e) {
        console.error(`Failed to err`);
        done();
      }

    })

    /**
     *@tc.number    : testCreateVerify001
     *@tc.name      : testCreateVerify001
     *@tc.desc      : Verify实例生成。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 48
     */
    it('testCreateVerify001', 0, async (done:Function) => {

      try {
        let verifyer1 = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        let verifyer2 = cryptoFramework.createVerify("RSA1024|PSS|SHA256|MGF1_SHA256")
        expect(verifyer1).not().assertNull();
        expect(verifyer2).not().assertNull();
        done();
      } catch (e) {
        console.error(`Failed to err`);
        done();
      }

    })

    /**
     *@tc.number    : testVerifyInit001
     *@tc.name      : testVerifyInit001
     *@tc.desc      : 传入公钥初始化Verify对象，通过注册回调函数获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 49
     */
    it('testVerifyInit001', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        globalKeyPair = keyPair;
      }).then(() => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        verifyer.init(globalKeyPair.pubKey, (err, data) => {
          if(err) {
            console.log('verifyer init err');
            done();
          }else {
            expect(data).not().assertNull();
            done();
          }
        })

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testVerifyInit002
     *@tc.name      : testVerifyInit002
     *@tc.desc      : 传入公钥初始化Verify对象，通过Promise获取结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 50
     */
    it('testVerifyInit002', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        globalKeyPair = keyPair;
      }).then(() => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        let verifyInitPromise = verifyer.init(globalKeyPair.pubKey);
        done();

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testVerifyUpdate001
     *@tc.name      : testVerifyUpdate001
     *@tc.desc      : 追加待验签数据，通过注册回调函数完成更新。必须在对Verify实例使用init()初始化后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 51
     */
    it('testVerifyUpdate001', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        globalKeyPair = keyPair;
      }).then(() => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        verifyer.init(globalKeyPair.pubKey, (err, data) => {
          if(err) {
            console.log('verifyer init err');
            done();
            return;
          }
          verifyer.update(input1, (err, data) => {
            if(err) {
              console.log('verifyer update err');
              done();
              return;
            }
            expect(data).not().assertNull();
            done();
          });

        })

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testVerifyUpdate002
     *@tc.name      : testVerifyUpdate002
     *@tc.desc      : 追加待验签数据，通过Promise方式完成更新。必须在对Verify实例使用init()初始化后，才能使用本函数。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 52
     */
    it('testVerifyUpdate002', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        globalKeyPair = keyPair;
        return signer.init(priKey);
      }).then(() => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        let verifyInitPromise = verifyer.init(globalKeyPair.pubKey);

        verifyInitPromise.then((): Promise<void> => {
          return verifyer.update(input1);
        }).then(() => {
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testVerifyVerify001
     *@tc.name      : testVerifyVerify001
     *@tc.desc      : 对数据进行验签，通过注册回调函数返回返回验签结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 53
     */
    it('testVerifyVerify001', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        globalKeyPair = keyPair;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        verifyer.init(globalKeyPair.pubKey, (err, data) => {
          if(err) {
            console.log('verifyer init err');
            done();
            return;
          }
          verifyer.update(input1, (err, data) => {
            if(err) {
              console.log('verifyer update err');
              done();
              return;
            }
            verifyer.verify(input2, dataBlob, (err, data) => {
              if(err) {
                console.log('verifyer verify err');
                done();
                return;
              }
              console.info("verify result is " + data);
              expect(data).not().assertNull();
              done();
            })
          });
        })

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testVerifyVerify002
     *@tc.name      : testVerifyVerify002
     *@tc.desc      : 对数据进行验签，通过Promise返回验签结果。
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 54
     */
    it('testVerifyVerify002', 0, async (done:Function) => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        globalKeyPair = keyPair;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        let verifyInitPromise = verifyer.init(globalKeyPair.pubKey);

        verifyInitPromise.then((): Promise<void> => {
          return verifyer.update(input1);
        }).then(() => {
          return verifyer.verify(input2, dataBlob);
        }).then(data => {
          console.log("Verify result is " + data);
          expect(data).not().assertNull();
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testSetVerifySpec001
     *@tc.name      : testSetVerifySpec001
     *@tc.desc      : 设置验签参数。常用的签名参数可以直接通过createVerify 来指定，剩余参数可以通过本接口指定。当前只支持RSA算法。验签的参数应当与签名的参数保持一致。
     获取验签参数。当前只支持RSA算法。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 55
     */
    it('testSetVerifySpec001', 0, async (done:Function) => {

      let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
      let setN = 20;

      try {
        verifyer.setVerifySpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
      } catch (e) {
        console.error(`Failed to err`);
      }
      done();

    })

    /**
     *@tc.number    : testGetSignSpec001
     *@tc.name      : testGetSignSpec001
     *@tc.desc      : 设置验签参数。常用的签名参数可以直接通过createVerify 来指定，剩余参数可以通过本接口指定。当前只支持RSA算法。验签的参数应当与签名的参数保持一致。
     获取验签参数。当前只支持RSA算法。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 56
     */
    it('testGetSignSpec001', 0, async (done:Function) => {

      let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
      let setN = 20;

      try {
        verifyer.setVerifySpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
        let saltLen = verifyer.getVerifySpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM);
        expect(saltLen).assertEqual(setN);
      } catch (e) {
        console.error(`Failed to err`);
      }
      done();

    })

    /**
     *@tc.number    : testCreateKeyAgreement001
     *@tc.name      : testCreateKeyAgreement001
     *@tc.desc      : KeyAgreement实例生成。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 57
     */
    it('testCreateKeyAgreement001', 0, async (done:Function) => {

      try {
        let keyAgreement = cryptoFramework.createKeyAgreement("ECC256");
        expect(keyAgreement).not().assertNull();
      } catch (e) {
        console.error(`Failed to err`);
      }
      done();

    })

    /**
     *@tc.number    : testGenerateSecret001
     *@tc.name      : testGenerateSecret001
     *@tc.desc      : 基于传入的私钥与公钥进行密钥协商，通过注册回调函数返回共享秘密。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 58
     */
    it('testGenerateSecret001', 0, async (done:Function) => {

      let rsaGenerator = cryptoFramework.createAsyKeyGenerator("RSA1024|PRIMES_2");
      rsaGenerator.generateKeyPair((err, keyPair) => {
        let globalKeyPair: cryptoFramework.KeyPair = keyPair;

        let keyAgreement = cryptoFramework.createKeyAgreement("ECC256");
        keyAgreement.generateSecret(globalKeyPair.priKey, globalKeyPair.pubKey, (err, secret) => {
          if (err) {
            console.error("keyAgreement error.");
            done();
            return;
          }
          console.info("keyAgreement output is " + secret.data);
          expect(secret.data).not().assertNull();
          done();
        });

      });

    })

    /**
     *@tc.number    : testGenerateSecret002
     *@tc.name      : testGenerateSecret002
     *@tc.desc      : 基于传入的私钥与公钥进行密钥协商，通过Promise返回共享秘密。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 59
     */
    it('testGenerateSecret002', 0, async (done:Function) => {

      let rsaGenerator = cryptoFramework.createAsyKeyGenerator("RSA1024|PRIMES_2");
      rsaGenerator.generateKeyPair((err, keyPair) => {
        let globalKeyPair: cryptoFramework.KeyPair = keyPair;

        let keyAgreement = cryptoFramework.createKeyAgreement("ECC256");
        let keyAgreementPromise = keyAgreement.generateSecret(globalKeyPair.priKey, globalKeyPair.pubKey);
        keyAgreementPromise.then((secret) => {
          console.info("keyAgreement output is " + secret.data);
          expect(secret.data).not().assertNull();
          done();
        }).catch((error: BusinessError) => {
          console.error("keyAgreement error.");
          done();
        });

      });

    })

    /**
     *@tc.number    : testCreateMd001
     *@tc.name      : testCreateMd001
     *@tc.desc      : 生成Md实例，用于进行消息摘要的计算与操作。支持的规格详见框架概述“MD消息摘要算法规格”一节。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 60
     */
    it('testCreateMd001', 0, async (done:Function) => {

      try {
        let md = cryptoFramework.createMd("SHA256");
        expect(md).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })

    /**
     *@tc.number    : testCreateMdUpdate001
     *@tc.name      : testCreateMdUpdate001
     *@tc.desc      : 传入消息进行Md更新计算，通过注册回调函数更新。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 61
     */
    it('testCreateMdUpdate001', 0, async (done:Function) => {

      let md = cryptoFramework.createMd("SHA256");
      console.info("Md algName is: " + md.algName);

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        md.update(dataBlob, (err,) => {
          if (err) {
            console.error("[Callback] err: " + err.code);
            done();
            return;
          }
          expect(err).assertNull();
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testCreateMdUpdate002
     *@tc.name      : testCreateMdUpdate002
     *@tc.desc      : 传入消息进行Md更新计算，通过Promise更新。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 62
     */
    it('testCreateMdUpdate002', 0, async (done:Function) => {

      let md = cryptoFramework.createMd("SHA256");
      console.info("Md algName is: " + md.algName);

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let promiseMdUpdate = md.update(dataBlob);
        promiseMdUpdate.then(() => {
          done();
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testCreateMdDigest001
     *@tc.name      : testCreateMdDigest001
     *@tc.desc      : 通过注册回调函数返回Md的计算结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 63
     */
    it('testCreateMdDigest001', 0, async (done:Function) => {

      let md = cryptoFramework.createMd("SHA256");
      console.info("Md algName is: " + md.algName);

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        md.update(dataBlob, (err,) => {
          if (err) {
            console.error("[Callback] err: " + err.code);
            done();
            return;
          }
          md.digest((err1, mdOutput) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              done();
              return;
            }
            console.error("[Callback]: MD result: " + mdOutput);
            expect(mdOutput).not().assertNull();
            done();
          });
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testCreateMdDigest002
     *@tc.name      : testCreateMdDigest002
     *@tc.desc      : 通过注册回调函数返回Md的计算结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 64
     */
    it('testCreateMdDigest002', 0, async (done:Function) => {

      let md = cryptoFramework.createMd("SHA256");
      console.info("Md algName is: " + md.algName);

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let promiseMdUpdate = md.update(dataBlob);
        promiseMdUpdate.then(() => {
          let promiseMdDigest = md.digest();
          return promiseMdDigest;
        }).then(mdOutput => {
          console.error("[Promise]: MD result: " + mdOutput.data);
          expect(mdOutput).not().assertNull();
          done();
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testCreateMdGetMdLength001
     *@tc.name      : testCreateMdGetMdLength001
     *@tc.desc      : 通过注册回调函数返回Md的计算结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 65
     */
    it('testCreateMdGetMdLength001', 0, async (done:Function) => {

      let md = cryptoFramework.createMd("SHA256");
      console.info("Md algName is: " + md.algName);

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let promiseMdUpdate = md.update(dataBlob);
        promiseMdUpdate.then(() => {
          let promiseMdDigest = md.digest();
          return promiseMdDigest;
        }).then(mdOutput => {
          console.error("[Promise]: MD result: " + mdOutput.data);
          let mdLen = md.getMdLength();
          console.error("MD len: " + mdLen);
          expect(mdLen).not().assertNaN();
          done();
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testCreateMac001
     *@tc.name      : testCreateMac001
     *@tc.desc      : 生成Mac实例，用于进行消息认证码的计算与操作。支持的规格详见框架概述“HMAC消息认证码算法规格”一节。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 66
     */
    it('testCreateMac001', 0, async (done:Function) => {

      try {
        let mac = cryptoFramework.createMac("SHA256");
        expect(mac).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })

    /**
     *@tc.number    : testMacInit001
     *@tc.name      : testMacInit001
     *@tc.desc      : 使用对称密钥初始化Mac计算，通过注册回调函数获取结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 67
     */
    it('testMacInit001', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let mac = cryptoFramework.createMac("SHA256");
        let symKeyGenerator = cryptoFramework.createSymKeyGenerator("AES128");
        symKeyGenerator.convertKey(dataBlob, (err, symKey) => {
          if (err) {
            console.error("[Callback] err: " + err.code);
            done();
            return;
          }
          mac.init(symKey, (err1, ) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              done();
              return;
            }
            expect(err1).assertNull();
            done();
          });
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testMacInit002
     *@tc.name      : testMacInit002
     *@tc.desc      : 使用对称密钥初始化Mac计算，通过注册回调函数获取结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 68
     */
    it('testMacInit002', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let mac = cryptoFramework.createMac("SHA256");
        console.info("Mac algName is: " + mac.algName);

        let symKeyGenerator = cryptoFramework.createSymKeyGenerator("AES128");
        let promiseConvertKey = symKeyGenerator.convertKey(dataBlob);
        promiseConvertKey.then(symKey => {

          let promiseMacInit = mac.init(symKey);
          promiseMacInit.then(() => {
            done();
          })

        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testMacUpdate001
     *@tc.name      : testMacUpdate001
     *@tc.desc      : 传入消息进行Mac更新计算，通过注册回调函数获取结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 69
     */
    it('testMacUpdate001', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let mac = cryptoFramework.createMac("SHA256");
        let symKeyGenerator = cryptoFramework.createSymKeyGenerator("AES128");
        symKeyGenerator.convertKey(dataBlob, (err, symKey) => {
          if (err) {
            console.error("[Callback] err: " + err.code);
            done();
            return;
          }
          mac.init(symKey, (err1, ) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              done();
              return;
            }
            mac.update(dataBlob, (err2, data) => {
              if (err2) {
                console.error("[Callback] err: " + err2.code);
                done();
                return;
              }
              expect(data).not().assertNull();
              done();
            });
          });
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testMacUpdate002
     *@tc.name      : testMacUpdate002
     *@tc.desc      : 传入消息进行Mac更新计算，通过Promise获取结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 70
     */
    it('testMacUpdate002', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let mac = cryptoFramework.createMac("SHA256");
        console.info("Mac algName is: " + mac.algName);

        let symKeyGenerator = cryptoFramework.createSymKeyGenerator("AES128");
        let promiseConvertKey = symKeyGenerator.convertKey(dataBlob);
        promiseConvertKey.then(symKey => {
          let promiseMacInit = mac.init(symKey);
          return promiseMacInit;
        }).then(() => {

          let promiseMacUpdate = mac.update(dataBlob);
          promiseMacUpdate.then((data) => {
            expect(data).not().assertNull();
            done();
          })

        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testMacDoFinal001
     *@tc.name      : testMacDoFinal001
     *@tc.desc      : 通过注册回调函数返回Mac的计算结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 71
     */
    it('testMacDoFinal001', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let mac = cryptoFramework.createMac("SHA256");
        let symKeyGenerator = cryptoFramework.createSymKeyGenerator("AES128");
        symKeyGenerator.convertKey(dataBlob, (err, symKey) => {
          if (err) {
            console.error("[Callback] err: " + err.code);
            done();
            return;
          }
          mac.init(symKey, (err1, ) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              done();
              return;
            }
            mac.update(dataBlob, (err2, ) => {
              if (err2) {
                console.error("[Callback] err: " + err2.code);
                done();
                return;
              }
              mac.doFinal((err3, macOutput) => {
                if (err3) {
                  console.error("[Callback] err: " + err3.code);
                  done();
                  return;
                }
                console.error("[Promise]: HMAC result: " + macOutput);
                expect(macOutput).not().assertNull();
                done();
              });
            });
          });
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testMacDoFinal002
     *@tc.name      : testMacDoFinal002
     *@tc.desc      : 通过Promise返回Mac的计算结果。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 72
     */
    it('testMacDoFinal002', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let mac = cryptoFramework.createMac("SHA256");
        console.info("Mac algName is: " + mac.algName);
        let symKeyGenerator = cryptoFramework.createSymKeyGenerator("AES128");
        let promiseConvertKey = symKeyGenerator.convertKey(dataBlob);
        promiseConvertKey.then(symKey => {
          let promiseMacInit = mac.init(symKey);
          return promiseMacInit;
        }).then(() => {
          let promiseMacUpdate = mac.update(dataBlob);
          return promiseMacUpdate;
        }).then(() => {
          let promiseMacDoFinal = mac.doFinal();
          return promiseMacDoFinal;
        }).then(macOutput => {
          console.error("[Promise]: HMAC result: " + macOutput.data);
          expect(macOutput.data).not().assertNull();
          done();
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testMacGetMacLength001
     *@tc.name      : testMacGetMacLength001
     *@tc.desc      : 获取Mac消息认证码的长度（字节数）。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 73
     */
    it('testMacGetMacLength001', 0, async (done:Function) => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        return signer.update(input1);
      }).then(() => {
        return signer.sign(input2);
      }).then(dataBlob => {

        let mac = cryptoFramework.createMac("SHA256");
        console.info("Mac algName is: " + mac.algName);
        let symKeyGenerator = cryptoFramework.createSymKeyGenerator("AES128");
        let promiseConvertKey = symKeyGenerator.convertKey(dataBlob);
        promiseConvertKey.then(symKey => {
          let promiseMacInit = mac.init(symKey);
          return promiseMacInit;
        }).then(() => {
          let promiseMacUpdate = mac.update(dataBlob);
          return promiseMacUpdate;
        }).then(() => {
          let promiseMacDoFinal = mac.doFinal();
          return promiseMacDoFinal;
        }).then(macOutput => {
          console.error("[Promise]: HMAC result: " + macOutput.data);
          let macLen = mac.getMacLength();
          console.error("MAC len: " + macLen);
          expect(macLen).not().assertNaN();
          done();
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          done();
        });

      }).catch((err:BusinessError) => {
        done();
      });

    })

    /**
     *@tc.number    : testCreateRandom001
     *@tc.name      : testCreateRandom001
     *@tc.desc      : 生成Random实例，用于进行随机数的计算与设置种子。支持的规格详见框架概述“随机数算法规格”一节。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 74
     */
    it('testCreateRandom001', 0, async (done:Function) => {

      try {
        let rand = cryptoFramework.createRandom();
        expect(rand).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })

    /**
     *@tc.number    : testGenerateRandom001
     *@tc.name      : testGenerateRandom001
     *@tc.desc      : 异步生成指定长度的随机数，通过注册回调函数返回。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 75
     */
    it('testGenerateRandom001', 0, async (done:Function) => {

      let rand = cryptoFramework.createRandom();
      rand.generateRandom(12, (err, randData) => {
        if (err) {
          console.error("[Callback] err: " + err.code);
          done();
          return;
        }
        console.error("[Callback]: generate random result: " + randData.data);
        expect(randData.data).not().assertNull();
        done();
      });

    })

    /**
     *@tc.number    : testGenerateRandom002
     *@tc.name      : testGenerateRandom002
     *@tc.desc      : 异步生成指定长度的随机数，通过Promise返回。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 76
     */
    it('testGenerateRandom002', 0, async (done:Function) => {

      let rand = cryptoFramework.createRandom();
      let promiseGenerateRand = rand.generateRandom(12);
      promiseGenerateRand.then(randData => {
        console.error("[Promise]: rand result: " + randData.data);
        expect(randData.data).not().assertNull();
        done();
      }).catch((error: BusinessError) => {
        console.error("[Promise]: error: " + error.message);
        done();
      });

    })



    /**
     *@tc.number    : testGenerateRandomSync001
     *@tc.name      : testGenerateRandomSync001
     *@tc.desc      : 同步生成指定长度的随机数。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 77
     */
    it('testGenerateRandomSync001', 0, async (done:Function) => {

      let rand = cryptoFramework.createRandom();
      try {
        let randData = rand.generateRandomSync(12);
        if (randData != null) {
          console.info("[Sync]: rand result: " + randData.data);
          expect(randData.data).not().assertNull();
        } else {
          console.error("[Sync]: get rand result fail!");
        }
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      done();

    })

    /**
     *@tc.number    : testSetSeed001
     *@tc.name      : testSetSeed001
     *@tc.desc      : 设置指定的种子。
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 78
     */
    it('testSetSeed001', 0, async (done:Function) => {

      let rand = cryptoFramework.createRandom();
      rand.generateRandom(12, (err, randData) => {
        if (err) {
          console.error("[Callback] err: " + err.code);
          done();
          return;
        }
        console.info("[Callback]: generate random result: " + randData.data);
        try {
          rand.setSeed(randData);
        } catch (error) {
          let e: BusinessError = error as BusinessError;
          console.error(`sync error, ${e.code}, ${e.message}`);
        }
        done();
      });

    })

  })
}