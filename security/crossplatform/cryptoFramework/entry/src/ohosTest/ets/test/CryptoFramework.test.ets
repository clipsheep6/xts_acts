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
import {
  symKeyGenerator,asyKeyGenerator,KeyPairGenPromise,
  pubKeyArray,priKeyArray,pubKeyBlob,priKeyBlob,convertKeyGenPromise,plan1,plan2,arr1,arr2,input1,input2,
  rsaGenerator,dsaCommonSpec,dsaKeyPairSpec,asyKeyPairSpec,asyKeyGeneratorBySpec,priKeyGenPromise,pubKeyGenPromise,
  cipherAlgName,cipher,signer,verifyer
} from '../utils/CommonVariables';

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
     *@tc.desc      : An enumeration that represents the result of an execution
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 2
     */
    it('testResult001', 0, async () => {

      expect(cryptoFramework.Result.INVALID_PARAMS === 401).assertTrue();
      expect(cryptoFramework.Result.NOT_SUPPORT === 801).assertTrue();
      expect(cryptoFramework.Result.ERR_OUT_OF_MEMORY === 17620001).assertTrue();
      expect(cryptoFramework.Result.ERR_RUNTIME_ERROR === 17620002).assertTrue();
      expect(cryptoFramework.Result.ERR_CRYPTO_OPERATION === 17630001).assertTrue();
      expect(cryptoFramework.CryptoMode.ENCRYPT_MODE === 0).assertTrue();
      expect(cryptoFramework.CryptoMode.DECRYPT_MODE === 1).assertTrue();
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
      expect(cryptoFramework.AsyKeySpecType.COMMON_PARAMS_SPEC === 0).assertTrue();
      expect(cryptoFramework.AsyKeySpecType.PRIVATE_KEY_SPEC === 1).assertTrue();
      expect(cryptoFramework.AsyKeySpecType.PUBLIC_KEY_SPEC === 2).assertTrue();
      expect(cryptoFramework.AsyKeySpecType.KEY_PAIR_SPEC === 3).assertTrue();
      expect(cryptoFramework.CipherSpecItem.OAEP_MD_NAME_STR === 100).assertTrue();
      expect(cryptoFramework.CipherSpecItem.OAEP_MGF_NAME_STR === 101).assertTrue();
      expect(cryptoFramework.CipherSpecItem.OAEP_MGF1_MD_STR === 102).assertTrue();
      expect(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR === 103).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_MD_NAME_STR === 100).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_MGF_NAME_STR === 101).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_MGF1_MD_STR === 102).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM === 103).assertTrue();
      expect(cryptoFramework.SignSpecItem.PSS_TRAILER_FIELD_NUM === 104).assertTrue();

      

    })

    /**
     *@tc.number    : testGetEncoded001
     *@tc.name      : testGetEncoded001
     *@tc.desc      : A byte steam that gets the key data
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 8
     */
    it('testGetEncoded001', 0, async () => {

      symKeyGenerator.generateSymKey((err, key) => {
        if (err) {
          console.error(`Generate symKey failed, ${err.code}, ${err.message}`);
          
        } else {
          let encodedKey = key.getEncoded();
          console.info("key blob: "+ encodedKey.data);
          expect(encodedKey.data instanceof Uint8Array).assertTrue();
          
        }
      })

    })

    /**
     *@tc.number    : testSymKeyClearMem001
     *@tc.name      : testSymKeyClearMem001
     *@tc.desc      : Zeros out the key content in the underlying memory of the system
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 9
     */
    it('testSymKeyClearMem001', 0, async () => {

      symKeyGenerator.generateSymKey((err, key) => {
        if (err) {
          console.error(`Generate symKey failed, ${err.code}, ${err.message}`);
          
        } else {
          let encodedKey = key.getEncoded();
          console.info("key blob111: " + encodedKey.data);    // Display key content.
          key.clearMem();
          encodedKey = key.getEncoded();
          console.info("key blob111:" + encodedKey.data);    // Display all 0s. 00 0 0 0 0 0 0 000
          
        }
      })

    })

    /**
     *@tc.number    : testPubKeyGetAsyKeySpec001
     *@tc.name      : testPubKeyGetAsyKeySpec001
     *@tc.desc      : The public key,which is a subclass of the key
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 10
     */
    it('testPubKeyGetAsyKeySpec001', 0, async () => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          
          return;
        }
        console.info("generateKeyPair: success.");
        let p = keyPair.pubKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
        console.info("ecc item --- p: " + p.toString(16));
        expect(p).not().assertNull();
        
      })

    })

    /**
     *@tc.number    : testPriKeyClearMem001
     *@tc.name      : testPriKeyClearMem001
     *@tc.desc      : Synchronization method,which clears the key content in the underlying memory of the system
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 11
     */
    it('testPriKeyClearMem001', 0, async () => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          
          return;
        }
        console.info("generateKeyPair: success.");
        keyPair.priKey.clearMem();
        
      })

    })

    /**
     *@tc.number    : testPriKeyGetAsyKeySpec001
     *@tc.name      : testPriKeyGetAsyKeySpec001
     *@tc.desc      : Synchronization method,Obtain the key
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 12
     */
    it('testPriKeyGetAsyKeySpec001', 0, async () => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          
          return;
        }
        console.info("generateKeyPair: success.");
        let p = keyPair.priKey.getAsyKeySpec(cryptoFramework.AsyKeySpecItem.ECC_FP_P_BN);
        console.info("ecc item --- p: " + p.toString(16));
        expect(p).not().assertNull();
        
      })

    })

    /**
     *@tc.number    : testCreateSymKeyGenerator001
     *@tc.name      : testCreateSymKeyGenerator001
     *@tc.desc      : Obtain the corresponding cipher instance
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 13
     */
    it('testCreateSymKeyGenerator001', 0, async () => {

      try {
        let symKeyGenerator = cryptoFramework.createSymKeyGenerator('3DES192');
        expect(symKeyGenerator).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      

    })

    /**
     *@tc.number    : testSymKeyGeneratorGenerateSymKey001
     *@tc.name      : testSymKeyGeneratorGenerateSymKey001
     *@tc.desc      : get a randomly generated key from the symmetric key generator through callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 14
     */
    it('testSymKeyGeneratorGenerateSymKey001', 0, async () => {

      symKeyGenerator.generateSymKey((err, symKey) => {
        if (err) {
          console.error(`Generate symKey failed, ${err.code}, ${err.message}`);
          
        } else {
          console.info(`Generate symKey success, algName: ${symKey.algName}`);
          expect(symKey.algName).not().assertNull();
          
        }
      })

    })

    /**
     *@tc.number    : testSymKeyGeneratorGenerateSymKey002
     *@tc.name      : testSymKeyGeneratorGenerateSymKey002
     *@tc.desc      : Asynchronously obtains the key randomly generated by the symmetric key generator through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 15
     */
    it('testSymKeyGeneratorGenerateSymKey002', 0, async () => {

      symKeyGenerator.generateSymKey()
        .then(symKey => {
          console.info(`Generate symKey success, algName: ${symKey.algName}`);
          expect(symKey.algName).not().assertNull();
          
        }, (error: BusinessError) => {
          console.error(`Generate symKey failed, ${error.code}, ${error.message}`);
          
        })

    })

    /**
     *@tc.number    : testSymKeyGeneratorConvertKey001
     *@tc.name      : testSymKeyGeneratorConvertKey001
     *@tc.desc      : Asynchronously generates a symmetric key based on the specified data by callback function
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 16
     */
    it('testSymKeyGeneratorConvertKey001', 0, async () => {

      let arr = [
        0xba, 0x3d, 0xc2, 0x71, 0x21, 0x1e, 0x30, 0x56,
        0xad, 0x47, 0xfc, 0x5a, 0x46, 0x39, 0xee, 0x7c,
        0xba, 0x3b, 0xc2, 0x71, 0xab, 0xa0, 0x30, 0x72]; // keyLen = 192 (24 bytes)
      let keyMaterial = new Uint8Array(arr);

      let keyMaterialBlob:cryptoFramework.DataBlob = { data: keyMaterial };
      symKeyGenerator.convertKey(keyMaterialBlob, (err, symKey) => {
        if (err) {
          console.error(`Convert symKey failed, ${err.code}, ${err.message}`);
          
        } else {
          console.info(`Convert symKey success, algName: ${symKey.algName}`);
          expect(symKey.algName).not().assertNull();
          
        }
      })

    })

    /**
     *@tc.number    : testSymKeyGeneratorConvertKey002
     *@tc.name      : testSymKeyGeneratorConvertKey002
     *@tc.desc      : Asynchronously generates a symmetric key base on the specified data through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 17
     */
    it('testSymKeyGeneratorConvertKey002', 0, async () => {

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
          
        }, (error: BusinessError) => {
          console.error(`Convert symKey failed, ${error.code}, ${error.message}`);
          
        })

    })

    /**
     *@tc.number    : testCreateAsyKeyGenerator001
     *@tc.name      : testCreateAsyKeyGenerator001
     *@tc.desc      : Specify the algorithm name to obtain the corresponding cipher instance
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 18
     */
    it('testCreateAsyKeyGenerator001', 0, async () => {

      try {
        let asyKeyGenerator = cryptoFramework.createAsyKeyGenerator("ECC256");
        expect(asyKeyGenerator).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      

    })

    /**
     *@tc.number    : testAsyKeyGeneratorGenerateKeyPair001
     *@tc.name      : testAsyKeyGeneratorGenerateKeyPair001
     *@tc.desc      : Asynchronously obtains a randomly generated key from an asymmetric key generator through callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 19
     */
    it('testAsyKeyGeneratorGenerateKeyPair001', 0, async () => {

      asyKeyGenerator.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          
          return;
        }
        expect(keyPair).not().assertNull();
        console.info("generateKeyPair: success.");
        
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorGenerateKeyPair002
     *@tc.name      : testAsyKeyGeneratorGenerateKeyPair002
     *@tc.desc      : Asynchronously obtains the key generated by the asymmetric key generator through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 20
     */
    it('testAsyKeyGeneratorGenerateKeyPair002', 0, async () => {

      KeyPairGenPromise.then(keyPair => {
        console.info("generateKeyPair success.");
        expect(keyPair).not().assertNull();
        
      }).catch((error: BusinessError) => {
        console.error("generateKeyPair error.");
        
      });

    })

    /**
     *@tc.number    : testAsyKeyGeneratorConvertKey001
     *@tc.name      : testAsyKeyGeneratorConvertKey001
     *@tc.desc      : Asynchronously obtains the key generated by the asymmetric key generator by callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 21
     */
    it('testAsyKeyGeneratorConvertKey001', 0, async () => {

      let pubKeyArray = new Uint8Array([48, 89, 48, 19, 6, 7, 42, 134, 72, 206, 61, 2, 1, 6, 8, 42, 134, 72, 206, 61, 3, 1, 7, 3, 66, 0, 4, 83, 96, 142, 9, 86, 214, 126, 106, 247, 233, 92, 125, 4, 128, 138, 105, 246, 162, 215, 71, 81, 58, 202, 121, 26, 105, 211, 55, 130, 45, 236, 143, 55, 16, 248, 75, 167, 160, 167, 106, 2, 152, 243, 44, 68, 66, 0, 167, 99, 92, 235, 215, 159, 239, 28, 106, 124, 171, 34, 145, 124, 174, 57, 92]);
      let priKeyArray = new Uint8Array([48, 49, 2, 1, 1, 4, 32, 115, 56, 137, 35, 207, 0, 60, 191, 90, 61, 136, 105, 210, 16, 27, 4, 171, 57, 10, 61, 123, 40, 189, 28, 34, 207, 236, 22, 45, 223, 10, 189, 160, 10, 6, 8, 42, 134, 72, 206, 61, 3, 1, 7]);
      let pubKeyBlob: cryptoFramework.DataBlob = {data: pubKeyArray}; // Data of the public key.
      let priKeyBlob: cryptoFramework.DataBlob = {data: priKeyArray}; // Data of the private key.
      asyKeyGenerator.convertKey(pubKeyBlob, priKeyBlob, (err, keyPair) => {
        if (err) {
          console.error("convertKey: error.");
          
          return;
        }
        console.info("convertKey: success.");
        expect(keyPair).not().assertNull();
        
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorConvertKey002
     *@tc.name      : testAsyKeyGeneratorConvertKey002
     *@tc.desc      : Asynchronously obtains the key generated by the asymmetric key generator by promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 22
     */
    it('testAsyKeyGeneratorConvertKey002', 0, async () => {

      convertKeyGenPromise.then( keyPair => {
        console.info("convertKey success.");
        expect(keyPair).not().assertNull();
        
      }).catch((error: BusinessError) => {
        console.error("convertKey error.");
        
      });

    })

    /**
     *@tc.number    : testCreateAsyKeyGeneratorBySpec001
     *@tc.name      : testCreateAsyKeyGeneratorBySpec001
     *@tc.desc      : obtain the corresponding cipher instance
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 23
     */
    it('testCreateAsyKeyGeneratorBySpec001', 0, async () => {

      try {
        let asyKeyGeneratorBySpec = cryptoFramework.createAsyKeyGeneratorBySpec(asyKeyPairSpec);
        expect(asyKeyGeneratorBySpec).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      

    })


    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGenerateKeyPair001
     *@tc.name      : testAsyKeyGeneratorBySpecGenerateKeyPair001
     *@tc.desc      : Asynchronously obtains the key through callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 24
     */
    it('testAsyKeyGeneratorBySpecGenerateKeyPair001', 0, async () => {

      asyKeyGeneratorBySpec.generateKeyPair((err, keyPair) => {
        if (err) {
          console.error("generateKeyPair: error.");
          
          return;
        }
        expect(keyPair).not().assertNull();
        
        console.info("generateKeyPair: success.");
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGenerateKeyPair002
     *@tc.name      : testAsyKeyGeneratorBySpecGenerateKeyPair002
     *@tc.desc      : Asynchronous acquisition of the key generated by the asymmetric key generator by promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 25
     */
    it('testAsyKeyGeneratorBySpecGenerateKeyPair002', 0, async () => {

      KeyPairGenPromise.then( keyPair => {
        console.info("generateKeyPair success.");
        expect(keyPair).not().assertNull();
        
      }).catch((error: BusinessError) => {
        
        console.error("generateKeyPair error.");
      });

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePriKey001
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePriKey001
     *@tc.desc      : Asynchronous acquisition of keys generated by asymmetric key generators by callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 26
     */
    it('testAsyKeyGeneratorBySpecGeneratePriKey001', 0, async () => {

      asyKeyGeneratorBySpec.generatePriKey((err, prikey) => {
        if (err) {
          console.error("generatePriKey: error.");
          
          return;
        }
        expect(prikey).not().assertNull();
        
        console.info("generatePriKey: success.");
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePriKey002
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePriKey002
     *@tc.desc      : Asynchronously obtains the key generated by the asymmetric key generator by promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 27
     */
    it('testAsyKeyGeneratorBySpecGeneratePriKey002', 0, async () => {

      priKeyGenPromise.then( priKey => {
        expect(priKey).not().assertNull();
        
        console.info("generatePriKey success.");
      }).catch((error: BusinessError) => {
        console.error("generatePriKey error.");
        
      });

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePubKey001
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePubKey001
     *@tc.desc      : Asynchronously obtains the key generated by the asymmetric key generator by callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 28
     */
    it('testAsyKeyGeneratorBySpecGeneratePubKey001', 0, async () => {

      asyKeyGeneratorBySpec.generatePubKey((err, pubKey) => {
        if (err) {
          console.error("generatePubKey: error.");
          
          return;
        }
        expect(pubKey).not().assertNull();
        
        console.info("generatePubKey: success.");
      })

    })

    /**
     *@tc.number    : testAsyKeyGeneratorBySpecGeneratePubKey002
     *@tc.name      : testAsyKeyGeneratorBySpecGeneratePubKey002
     *@tc.desc      : Asynchronously obtains the key generated by the asymmetric key generator through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 29
     */
    it('testAsyKeyGeneratorBySpecGeneratePubKey002', 0, async () => {

      pubKeyGenPromise.then( pubKey => {
        console.info("generatePubKey pubKey success.");
        expect(pubKey).not().assertNull();
        
      }).catch((error: BusinessError) => {
        console.error("generatePubKey error.");
        
      });

    })

    /**
     *@tc.number    : testCreateCipher001
     *@tc.name      : testCreateCipher001
     *@tc.desc      : You can specify an algorithm name to obtain the Cipher instance.
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 30
     */
    it('testCreateCipher001', 0, async () => {

      let cipherAlgName = '3DES192|ECB|PKCS7';
      try {
        let cipher = cryptoFramework.createCipher(cipherAlgName);
        console.info(`cipher algName: ${cipher.algName}`);
        expect(cipher.algName).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      

    })

    /**
     *@tc.number    : testCipherInit001
     *@tc.name      : testCipherInit001
     *@tc.desc      : The cipher object for encryption and decryption is initialized and the result is obtained by registering the callback function.
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 31
     */
    it('testCipherInit001', 0, async () => {

      symKeyGenerator.generateSymKey((err, symKey) => {

        cipher.init(cryptoFramework.CryptoMode.ENCRYPT_MODE, symKey, null, (err) => {
          if (err) {
            console.error(`Failed to init cipher, ${err.code}, ${err.message}`);
            
          } else {
            console.info(`Init cipher success`);
            expect(err).assertUndefined();
            
          }
        })
      })

    })

    /**
     *@tc.number    : testCipherInit002
     *@tc.name      : testCipherInit002
     *@tc.desc      : The cipher object for encryption and decryption is initialized and the result is obtained using a Promise.
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 32
     */
    it('testCipherInit002', 0, async () => {

      symKeyGenerator.generateSymKey((err, symKey) => {

        cipher.init(cryptoFramework.CryptoMode.ENCRYPT_MODE, symKey, null)
          .then(() => {
            console.info(`Init cipher success`);
            
          }, (error: BusinessError) => {
            console.error(`Failed to init cipher, ${error.code}, ${error.message}`);
            
          })
      })

    })

    /**
     *@tc.number    : testCipherUpdate001
     *@tc.name      : testCipherUpdate001
     *@tc.desc      : Segmenting updates encrypting or decrypting data operations by registering callback functions to obtain add/decrypt data.
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 33
     */
    it('testCipherUpdate001', 0, async () => {

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
            
          } else {
            console.info(`Update cipher success`);
            expect(output).not().assertNull();
            
          }
        })

      })

    })

    /**
     *@tc.number    : testCipherUpdate002
     *@tc.name      : testCipherUpdate002
     *@tc.desc      : Piecewise updates encrypt or decrypt data operations to get add/decrypt data through Promises
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 34
     */
    it('testCipherUpdate002', 0, async () => {

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
            
          }, (error: BusinessError) => {
            console.info(`Update cipher failed.`);
            
          })
      })

    })

    /**
     *@tc.number    : testCipherDoFinal001
     *@tc.name      : testCipherDoFinal001
     *@tc.desc      : Piecewise updates encrypt or decrypt data operations to get add/decrypt data through callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 35
     */
    it('testCipherDoFinal001', 0, async () => {

      let str = 'this is test!';
      let arr = new Uint8Array(str.length);
      for (let i = 0, j = str.length; i < j; ++i) {
        arr[i] = str.charCodeAt(i);
      }

      let plainText: cryptoFramework.DataBlob = {data: arr};
      cipher.doFinal(plainText, (err, output) => {
        if (err) {
          console.error(`Failed to finalize cipher, ${err.code}, ${err.message}`);
          
        } else {
          console.info(`Finalize cipher success`);
          expect(output).not().assertNull();
          
        }
      })

    })

    /**
     *@tc.number    : testCipherDoFinal002
     *@tc.name      : testCipherDoFinal002
     *@tc.desc      : In symmetric encryption and decryption, doFinal adds/decrypts the remaining data (generated by the grouping mode) and the incoming data
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 36
     */
    it('testCipherDoFinal002', 0, async () => {

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
          
        }, (error: BusinessError) => {
          console.error(`Failed to finalize cipher, ${error.code}, ${error.message}`);
          
        })

    })

    /**
     *@tc.number    : testSetCipherSpec001
     *@tc.name      : testSetCipherSpec001
     *@tc.desc      : Set encryption and decryption parameters
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 37
     */
    it('testSetCipherSpec001', 0, async () => {

      try {
        let cipherAlgName = 'RSA512|PRIMES_2';
        let cipher = cryptoFramework.createCipher(cipherAlgName);
        let pSource = new Uint8Array([1,2,3,4]);
        cipher.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
        let mdName = cipher.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
        console.log('test mdName3' + mdName);
        expect(mdName).not().assertNull();
      } catch (e) {
        console.error(`Failed to err` + JSON.stringify(e));
      }
      

    })

    /**
     *@tc.number    : testGetCipherSpec001
     *@tc.name      : testGetCipherSpec001
     *@tc.desc      : Get encryption and decryption parameters
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 38
     */
    it('testGetCipherSpec001', 0, async () => {

      try {
        let cipherAlgName = 'RSA512|PRIMES_2';
        let cipher = cryptoFramework.createCipher(cipherAlgName);
        let pSource = new Uint8Array([1,2,3,4]);
        cipher.setCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR, pSource);
        let mdName = cipher.getCipherSpec(cryptoFramework.CipherSpecItem.OAEP_MGF1_PSRC_UINT8ARR);
        console.log('test mdName3' + mdName);
        expect(mdName).not().assertNull();
      } catch (e) {
        console.error(`Failed to err` + JSON.stringify(e));
      }
      

    })

    /**
     *@tc.number    : testCreateSign001
     *@tc.name      : testCreateSign001
     *@tc.desc      : Sign instance generation
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 39
     */
    it('testCreateSign001', 0, async () => {

      expect(signer).not().assertNull();
      

    })

    /**
     *@tc.number    : testSignInit001
     *@tc.name      : testSignInit001
     *@tc.desc      : Initialize the Sign object with the private key through callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 40
     */
    it('testSignInit001', 0, async () => {

      let globalKeyPair: cryptoFramework.KeyPair;

      rsaGenerator.generateKeyPair((err, keyPair) => {
        globalKeyPair = keyPair;
        let priKey = globalKeyPair.priKey;
        signer.init(priKey, err => {
          console.log('err:' + err)
          if(err) {
            console.log('signer init err:' + JSON.stringify(err));
            
            return;
          }
          expect(err).assertUndefined();
          console.log('signer init success');
          
        });
      });

    })

    /**
     *@tc.number    : testSignInit002
     *@tc.name      : testSignInit002
     *@tc.desc      : Initialize the Sign object with the private key through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 41
     */
    it('testSignInit002', 0, async () => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        
      }).catch((err:BusinessError) => {
        
      });
    })

    /**
     *@tc.number    : testSignUpdate001
     *@tc.name      : testSignUpdate001
     *@tc.desc      : Append data to be signed and update it by registering the callback function
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 42
     */
    it('testSignUpdate001', 0, async () => {

      let globalKeyPair: cryptoFramework.KeyPair;

      rsaGenerator.generateKeyPair((err, keyPair) => {
        globalKeyPair = keyPair;
        let priKey = globalKeyPair.priKey;
        signer.init(priKey, err => {
          if(err) {
            console.log('signer init err:' + JSON.stringify(err));
            
            return;
          }
          console.log('signer init success');
          signer.update(input1, err => {
            if(err) {
              console.log('signer update err:' + JSON.stringify(err));
              
              return;
            }
            expect(err).assertNull();
            console.log('signer update success');

            
          });
        });
      });

    })

    /**
     *@tc.number    : testSignUpdate002
     *@tc.name      : testSignUpdate002
     *@tc.desc      : Initialize the Sign object with the private key through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 43
     */
    it('testSignUpdate002', 0, async () => {

      KeyPairGenPromise.then(keyPair => {
        let priKey = keyPair.priKey;
        return signer.init(priKey);
      }).then(() => {
        console.log('signer init success');
        return signer.update(input1);
      }).then(() => {
        console.log('signer update success');
        
      }).catch((err:BusinessError) => {
        console.log('signer update err');
        
      });

    })

    /**
     *@tc.number    : testSignSign001
     *@tc.name      : testSignSign001
     *@tc.desc      : Sign the data by callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 44
     */
    it('testSignSign001', 0, async () => {

      let globalKeyPair: cryptoFramework.KeyPair;
      let signMessageBlob: cryptoFramework.DataBlob;

      let signer = cryptoFramework.createSign("RSA1024|PKCS1|SHA256");
      rsaGenerator.generateKeyPair((err, keyPair) => {
        globalKeyPair = keyPair;
        let priKey = globalKeyPair.priKey;
        signer.init(priKey, err => {
          if(err) {
            console.log('signer init err:' + JSON.stringify(err));
            
            return;
          }
          signer.update(input1, err => {
            if(err) {
              console.log('signer init err:' + JSON.stringify(err));
              
              return;
            }
            signer.sign(input2, (err, data) => {
              if(err) {
                console.log('signer init err:' + JSON.stringify(err));
                
                return;
              }
              signMessageBlob = data;
              expect(data).not().assertNull();
              
            });
          });
        });
      });

    })

    /**
     *@tc.number    : testSignSign002
     *@tc.name      : testSignSign002
     *@tc.desc      : Initialize the Sign object with the private key through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 45
     */
    it('testSignSign002', 0, async () => {

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
        
      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testSetSignSpec001
     *@tc.name      : testSetSignSpec001
     *@tc.desc      : Set the signature parameters
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 46
     */
    it('testSetSignSpec001', 0, async () => {

      let setN = 20;

      try {
        signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
        
      } catch (e) {
        console.error(`Failed to err`);
        
      }

    })

    /**
     *@tc.number    : testGetSignSpec001
     *@tc.name      : testGetSignSpec001
     *@tc.desc      : Set the signature parameters
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 47
     */
    it('testGetSignSpec001', 0, async () => {

      let setN = 20;

      try {
        signer.setSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
        let saltLen = signer.getSignSpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM);
        expect(saltLen).assertEqual(setN);
        
      } catch (e) {
        console.error(`Failed to err`);
        
      }

    })

    /**
     *@tc.number    : testCreateVerify001
     *@tc.name      : testCreateVerify001
     *@tc.desc      : Verify instance generation
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 48
     */
    it('testCreateVerify001', 0, async () => {

      try {
        let verifyer1 = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        let verifyer2 = cryptoFramework.createVerify("RSA1024|PSS|SHA256|MGF1_SHA256")
        expect(verifyer1).not().assertNull();
        expect(verifyer2).not().assertNull();
        
      } catch (e) {
        console.error(`Failed to err`);
        
      }

    })

    /**
     *@tc.number    : testVerifyInit001
     *@tc.name      : testVerifyInit001
     *@tc.desc      : Initialize the Verify object by passing in the public key through callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 49
     */
    it('testVerifyInit001', 0, async () => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        globalKeyPair = keyPair;
      }).then(() => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        verifyer.init(globalKeyPair.pubKey, (err, data) => {
          if(err) {
            console.log('verifyer init err');
            
          }else {
            expect(data).not().assertNull();
            
          }
        })

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testVerifyInit002
     *@tc.name      : testVerifyInit002
     *@tc.desc      : Initialize the Verify object by passing in the public key through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 50
     */
    it('testVerifyInit002', 0, async () => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        globalKeyPair = keyPair;
      }).then(() => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        let verifyInitPromise = verifyer.init(globalKeyPair.pubKey);
        

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testVerifyUpdate001
     *@tc.name      : testVerifyUpdate001
     *@tc.desc      : Add pending signature data and update it by registering a callback function
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 51
     */
    it('testVerifyUpdate001', 0, async () => {

      let globalKeyPair: cryptoFramework.KeyPair;
      KeyPairGenPromise.then(keyPair => {
        globalKeyPair = keyPair;
      }).then(() => {

        let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
        verifyer.init(globalKeyPair.pubKey, (err, data) => {
          if(err) {
            console.log('verifyer init err');
            
            return;
          }
          verifyer.update(input1, (err, data) => {
            if(err) {
              console.log('verifyer update err');
              
              return;
            }
            expect(data).not().assertNull();
            
          });

        })

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testVerifyUpdate002
     *@tc.name      : testVerifyUpdate002
     *@tc.desc      : Append the data to be verified through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 52
     */
    it('testVerifyUpdate002', 0, async () => {

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
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testVerifyVerify001
     *@tc.name      : testVerifyVerify001
     *@tc.desc      : Verify the data through callback
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 53
     */
    it('testVerifyVerify001', 0, async () => {

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
            
            return;
          }
          verifyer.update(input1, (err, data) => {
            if(err) {
              console.log('verifyer update err');
              
              return;
            }
            verifyer.verify(input2, dataBlob, (err, data) => {
              if(err) {
                console.log('verifyer verify err');
                
                return;
              }
              console.info("verify result is " + data);
              expect(data).not().assertNull();
              
            })
          });
        })

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testVerifyVerify002
     *@tc.name      : testVerifyVerify002
     *@tc.desc      : Verify the data through promise
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 54
     */
    it('testVerifyVerify002', 0, async () => {

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
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testSetVerifySpec001
     *@tc.name      : testSetVerifySpec001
     *@tc.desc      : Set the verification parameters
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 55
     */
    it('testSetVerifySpec001', 0, async () => {

      let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
      let setN = 20;

      try {
        verifyer.setVerifySpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
      } catch (e) {
        console.error(`Failed to err`);
      }
      

    })

    /**
     *@tc.number    : testGetSignSpec001
     *@tc.name      : testGetSignSpec001
     *@tc.desc      : Set the verification parameters
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 56
     */
    it('testGetSignSpec001', 0, async () => {

      let verifyer = cryptoFramework.createVerify("RSA1024|PKCS1|SHA256");
      let setN = 20;

      try {
        verifyer.setVerifySpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM, setN);
        let saltLen = verifyer.getVerifySpec(cryptoFramework.SignSpecItem.PSS_SALT_LEN_NUM);
        expect(saltLen).assertEqual(setN);
      } catch (e) {
        console.error(`Failed to err`);
      }
      

    })

    /**
     *@tc.number    : testCreateKeyAgreement001
     *@tc.name      : testCreateKeyAgreement001
     *@tc.desc      : KeyAgreement instance generation
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 57
     */
    it('testCreateKeyAgreement001', 0, async () => {

      try {
        let keyAgreement = cryptoFramework.createKeyAgreement("ECC256");
        expect(keyAgreement).not().assertNull();
      } catch (e) {
        console.error(`Failed to err`);
      }
      

    })

    /**
     *@tc.number    : testGenerateSecret001
     *@tc.name      : testGenerateSecret001
     *@tc.desc      : Key negotiation is performed based on the incoming private key and public key by callback
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 58
     */
    it('testGenerateSecret001', 0, async () => {

      let rsaGenerator = cryptoFramework.createAsyKeyGenerator("RSA1024|PRIMES_2");
      rsaGenerator.generateKeyPair((err, keyPair) => {
        let globalKeyPair: cryptoFramework.KeyPair = keyPair;

        let keyAgreement = cryptoFramework.createKeyAgreement("ECC256");
        keyAgreement.generateSecret(globalKeyPair.priKey, globalKeyPair.pubKey, (err, secret) => {
          if (err) {
            console.error("keyAgreement error.");
            
            return;
          }
          console.info("keyAgreement output is " + secret.data);
          expect(secret.data).not().assertNull();
          
        });

      });

    })

    /**
     *@tc.number    : testGenerateSecret002
     *@tc.name      : testGenerateSecret002
     *@tc.desc      : Key negotiation is performed based on the incoming private key and public key by promise
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 59
     */
    it('testGenerateSecret002', 0, async () => {

      let rsaGenerator = cryptoFramework.createAsyKeyGenerator("RSA1024|PRIMES_2");
      rsaGenerator.generateKeyPair((err, keyPair) => {
        let globalKeyPair: cryptoFramework.KeyPair = keyPair;

        let keyAgreement = cryptoFramework.createKeyAgreement("ECC256");
        let keyAgreementPromise = keyAgreement.generateSecret(globalKeyPair.priKey, globalKeyPair.pubKey);
        keyAgreementPromise.then((secret) => {
          console.info("keyAgreement output is " + secret.data);
          expect(secret.data).not().assertNull();
          
        }).catch((error: BusinessError) => {
          console.error("keyAgreement error.");
          
        });

      });

    })

    /**
     *@tc.number    : testCreateMd001
     *@tc.name      : testCreateMd001
     *@tc.desc      : Generate an Md instance for computation and operation of message digests.
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 60
     */
    it('testCreateMd001', 0, async () => {

      try {
        let md = cryptoFramework.createMd("SHA256");
        expect(md).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      

    })

    /**
     *@tc.number    : testCreateMdUpdate001
     *@tc.name      : testCreateMdUpdate001
     *@tc.desc      : Incoming messages are calculated for Md updates through callback
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 61
     */
    it('testCreateMdUpdate001', 0, async () => {

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
            
            return;
          }
          expect(err).assertNull();
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testCreateMdUpdate002
     *@tc.name      : testCreateMdUpdate002
     *@tc.desc      : Incoming messages are calculated for Md updates through promise
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 62
     */
    it('testCreateMdUpdate002', 0, async () => {

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
          
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testCreateMdDigest001
     *@tc.name      : testCreateMdDigest001
     *@tc.desc      : The result of the calculation of Md is returned by registering a callback function
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 63
     */
    it('testCreateMdDigest001', 0, async () => {

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
            
            return;
          }
          md.digest((err1, mdOutput) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              
              return;
            }
            console.error("[Callback]: MD result: " + mdOutput);
            expect(mdOutput).not().assertNull();
            
          });
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testCreateMdDigest002
     *@tc.name      : testCreateMdDigest002
     *@tc.desc      : The result of the calculation of Md is returned by registering a promise function
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 64
     */
    it('testCreateMdDigest002', 0, async () => {

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
          
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testCreateMdGetMdLength001
     *@tc.name      : testCreateMdGetMdLength001
     *@tc.desc      : The result of the calculation of Md is returned by registering a promise function
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 65
     */
    it('testCreateMdGetMdLength001', 0, async () => {

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
          
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testCreateMac001
     *@tc.name      : testCreateMac001
     *@tc.desc      : Generate a Mac instance
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 66
     */
    it('testCreateMac001', 0, async () => {

      try {
        let mac = cryptoFramework.createMac("SHA256");
        expect(mac).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      

    })

    /**
     *@tc.number    : testMacInit001
     *@tc.name      : testMacInit001
     *@tc.desc      : Initialize Mac computation with a symmetric key through callback
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 67
     */
    it('testMacInit001', 0, async () => {

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
            
            return;
          }
          mac.init(symKey, (err1, ) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              
              return;
            }
            expect(err1).assertNull();
            
          });
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testMacInit002
     *@tc.name      : testMacInit002
     *@tc.desc      : Initialize Mac computation with a symmetric key through promise
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 68
     */
    it('testMacInit002', 0, async () => {

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
            
          })

        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testMacUpdate001
     *@tc.name      : testMacUpdate001
     *@tc.desc      : Incoming messages are computed for Mac updates through callback
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 69
     */
    it('testMacUpdate001', 0, async () => {

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
            
            return;
          }
          mac.init(symKey, (err1, ) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              
              return;
            }
            mac.update(dataBlob, (err2, data) => {
              if (err2) {
                console.error("[Callback] err: " + err2.code);
                
                return;
              }
              expect(data).not().assertNull();
              
            });
          });
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testMacUpdate002
     *@tc.name      : testMacUpdate002
     *@tc.desc      : Incoming messages are computed for Mac updates through promise
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 70
     */
    it('testMacUpdate002', 0, async () => {

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
            
          })

        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testMacDoFinal001
     *@tc.name      : testMacDoFinal001
     *@tc.desc      : Return the result of the Mac calculation by registering the callback function
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 71
     */
    it('testMacDoFinal001', 0, async () => {

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
            
            return;
          }
          mac.init(symKey, (err1, ) => {
            if (err1) {
              console.error("[Callback] err: " + err1.code);
              
              return;
            }
            mac.update(dataBlob, (err2, ) => {
              if (err2) {
                console.error("[Callback] err: " + err2.code);
                
                return;
              }
              mac.doFinal((err3, macOutput) => {
                if (err3) {
                  console.error("[Callback] err: " + err3.code);
                  
                  return;
                }
                console.error("[Promise]: HMAC result: " + macOutput);
                expect(macOutput).not().assertNull();
                
              });
            });
          });
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testMacDoFinal002
     *@tc.name      : testMacDoFinal002
     *@tc.desc      : get return Mac result through promise
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 72
     */
    it('testMacDoFinal002', 0, async () => {

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
          
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testMacGetMacLength001
     *@tc.name      : testMacGetMacLength001
     *@tc.desc      : get the length Mac message authentication code
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 73
     */
    it('testMacGetMacLength001', 0, async () => {

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
          
        }).catch((error: BusinessError) => {
          console.error("[Promise]: error: " + error.message);
          
        });

      }).catch((err:BusinessError) => {
        
      });

    })

    /**
     *@tc.number    : testCreateRandom001
     *@tc.name      : testCreateRandom001
     *@tc.desc      : get random instance
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 74
     */
    it('testCreateRandom001', 0, async () => {

      try {
        let rand = cryptoFramework.createRandom();
        expect(rand).not().assertNull();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.error(`sync error, ${e.code}, ${e.message}`);
      }
      

    })

    /**
     *@tc.number    : testGenerateRandom001
     *@tc.name      : testGenerateRandom001
     *@tc.desc      : Asynchronously generates a random number of a specified length through callback
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 75
     */
    it('testGenerateRandom001', 0, async () => {

      let rand = cryptoFramework.createRandom();
      rand.generateRandom(12, (err, randData) => {
        if (err) {
          console.error("[Callback] err: " + err.code);
          
          return;
        }
        console.error("[Callback]: generate random result: " + randData.data);
        expect(randData.data).not().assertNull();
        
      });

    })

    /**
     *@tc.number    : testGenerateRandom002
     *@tc.name      : testGenerateRandom002
     *@tc.desc      : Asynchronously generates a random number of fixed length through promise
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 76
     */
    it('testGenerateRandom002', 0, async () => {

      let rand = cryptoFramework.createRandom();
      let promiseGenerateRand = rand.generateRandom(12);
      promiseGenerateRand.then(randData => {
        console.error("[Promise]: rand result: " + randData.data);
        expect(randData.data).not().assertNull();
        
      }).catch((error: BusinessError) => {
        console.error("[Promise]: error: " + error.message);
        
      });

    })



    /**
     *@tc.number    : testGenerateRandomSync001
     *@tc.name      : testGenerateRandomSync001
     *@tc.desc      : Synchronously generates a random number of fixed length
     * *@tc.size    : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 77
     */
    it('testGenerateRandomSync001', 0, async () => {

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
      

    })

    /**
     *@tc.number    : testSetSeed001
     *@tc.name      : testSetSeed001
     *@tc.desc      : set specified seed
     *@tc.size      : MediumTest
     *@tc.type      : Function
     *@tc.level     : Level 2
     *@tc.index     : 78
     */
    it('testSetSeed001', 0, async () => {

      let rand = cryptoFramework.createRandom();
      rand.generateRandom(12, (err, randData) => {
        if (err) {
          console.error("[Callback] err: " + err.code);
          
          return;
        }
        console.info("[Callback]: generate random result: " + randData.data);
        try {
          rand.setSeed(randData);
        } catch (error) {
          let e: BusinessError = error as BusinessError;
          console.error(`sync error, ${e.code}, ${e.message}`);
        }
        
      });

    })

  })
}