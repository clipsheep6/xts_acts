/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import huks from '@ohos.security.huks'
import {describe, it, expect} from 'deccjsunit/index'
import {
  appName,
  makeAgreeOptions,
  makeGenerateKeyOption,
  makeEmptyOption,
  makeEncryptAndDecryptOption,
  makeImportOption,
  makeMacOption,
  makeRandomArr,
  makeSignAndVerifyOption,
  loop,
  timer
} from './hks_common.test.js'

describe('HKS_CONCURRENCY_USE_KEY_APP1', function () {

  var defaultAlias = 'defaultAlias';
  var defaultAliasA = 'defaultAliasA';
  var defaultAliasB = 'defaultAliasB';

  var emptyOption = makeEmptyOption();
  var plainText = makeRandomArr(64);
  var ciphertext = [];
  var publicKey = [];
  var agreeKeyAOption = {};
  var agreeKeyBOption = {};

  var generateAes128KeyOpt = makeGenerateKeyOption(
    huks.HksKeyAlg.HKS_ALG_AES,
    huks.HksKeySize.HKS_AES_KEY_SIZE_128,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT | huks.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
    huks.HksKeyPadding.HKS_PADDING_NONE,
    huks.HksCipherMode.HKS_MODE_CBC
  );
  var generateRsa512KeyOpt = makeGenerateKeyOption(
    huks.HksKeyAlg.HKS_ALG_RSA,
    huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT | huks.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
    huks.HksKeyPadding.HKS_PADDING_NONE,
    huks.HksCipherMode.HKS_MODE_ECB,
    huks.HksKeyDigest.HKS_DIGEST_NONE
  );
  var encryptAes128Opt = makeEncryptAndDecryptOption(
    huks.HksKeyAlg.HKS_ALG_AES,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT,
    huks.HksKeyPadding.HKS_PADDING_NONE,
    huks.HksCipherMode.HKS_MODE_CBC,
    null,
    null,
    plainText
  );

  var generateEcc224Opt = makeGenerateKeyOption(
    huks.HksKeyAlg.HKS_ALG_ECC,
    huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
    huks.HksKeyPadding.HKS_PADDING_NONE,
    null,
    huks.HksKeyDigest.HKS_DIGEST_NONE
  );

  var signPlainText = makeRandomArr(16);
  var signOption = makeSignAndVerifyOption(
    huks.HksKeyAlg.HKS_ALG_ECC,
    huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
    huks.HksKeyPadding.HKS_PADDING_NONE,
    huks.HksKeyDigest.HKS_DIGEST_NONE,
    signPlainText
  );
  var verifyOptions = makeSignAndVerifyOption(
    huks.HksKeyAlg.HKS_ALG_ECC,
    huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
    huks.HksKeyPadding.HKS_PADDING_NONE,
    huks.HksKeyDigest.HKS_DIGEST_NONE,
    signPlainText
  );

  var generateAgreeKeyOption = makeGenerateKeyOption(
    huks.HksKeyAlg.HKS_ALG_ECC,
    huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_AGREE,
    null,
    null,
    huks.HksKeyDigest.HKS_DIGEST_NONE
  );

  var generateMacKeyOption = makeGenerateKeyOption(
    huks.HksKeyAlg.HKS_ALG_HMAC,
    160,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_MAC,
    null,
    null,
    huks.HksKeyDigest.HKS_DIGEST_SHA1
  );

  var macOption = makeMacOption(plainText);

  async function generateAesKey(){
    var genKeyRet = await huks.generateKey(defaultAlias, generateAes128KeyOpt);
    expect(genKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var isKeyExistRet = await huks.isKeyExist(defaultAlias, emptyOption);
    expect(isKeyExistRet).assertEqual(true);
  };

  async function generateRsaKey(){
    var genKeyRet = await huks.generateKey(defaultAliasA, generateRsa512KeyOpt);
    expect(genKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var isKeyExistRet = await huks.isKeyExist(defaultAliasA, emptyOption);
    expect(isKeyExistRet).assertEqual(true);
  };

  async function deleteAesKey(){
    var delKeyRet = await huks.deleteKey(defaultAlias, emptyOption);
    expect(delKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var isKeyExistRet = await huks.isKeyExist(defaultAlias, emptyOption);
    expect(isKeyExistRet).assertEqual(false);
  };

  async function deleteKeyAB(){
    var delKeyARet = await huks.deleteKey(defaultAliasA, emptyOption);
    expect(delKeyARet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var isKeyAExistRet = await huks.isKeyExist(defaultAliasA, emptyOption);
    expect(isKeyAExistRet).assertEqual(false);
    var delKeyBRet = await huks.deleteKey(defaultAliasB, emptyOption);
    expect(delKeyBRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var isKeyBExistRet = await huks.isKeyExist(defaultAliasB, emptyOption);
    expect(isKeyBExistRet).assertEqual(false);
  };

  function isKeyNotExist(alias, done) {
    huks.isKeyExist(alias, emptyOption, function (err, data) {
      expect(data).assertEqual(false);
      done();
    })
  };

  function deleteKey(alias, done) {
    huks.deleteKey(alias, emptyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      isKeyNotExist(alias, done);
    })
  };

  function aesDecryptCallback(index, done) {
    var decryptOpt = makeEncryptAndDecryptOption(
      huks.HksKeyAlg.HKS_ALG_AES,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksCipherMode.HKS_MODE_CBC,
      null,
      null,
      ciphertext
    );
    huks.decrypt(defaultAlias, decryptOpt, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      expect(JSON.stringify(plainText)).assertEqual(JSON.stringify(data.outData));
      if (index < loop) {
        index++;
        aesEncryptCallback(index, done);
      } else {
        deleteKey(defaultAlias, done);
      }
    });
  };

  function aesEncryptCallback(index, done) {
    console.log(appName + ' HUKS_Concurrency_Test_00400 callback index ' + index);
    huks.encrypt(defaultAlias, encryptAes128Opt, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      ciphertext = data.outData
      aesDecryptCallback(index, done);
    })
  };

  function aesEncryptAndDecryptCallback(done) {
    var index = 0;
    aesEncryptCallback(index, done);
  };

  function isAliasBExist(done) {
    huks.isKeyExist(defaultAliasB, emptyOption, function (err, data) {
      expect(data).assertEqual(false);
      done();
    });
  };

  function isAliasAExist(done) {
    huks.isKeyExist(defaultAliasA, emptyOption, function (err, data) {
      expect(data).assertEqual(false);
      isAliasBExist(done);
    });
  };

  function deleteAliasB(done) {
    huks.deleteKey(defaultAliasB, emptyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      isAliasAExist(done);
    });
  };

  function deleteAliasA(done) {
    huks.deleteKey(defaultAliasA, emptyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      deleteAliasB(done);
    });
  };

  function rsaImportCallback(index, done) {
    var importRsa512KeyOpt = makeImportOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksCipherMode.HKS_MODE_ECB,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      publicKey
    );
    huks.importKey(defaultAliasB, importRsa512KeyOpt, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      if (index < loop) {
        index ++;
        rsaExportCallback(index, done);
      } else {
        deleteAliasA(done);
      }
    });
  };

  function rsaExportCallback(index, done) {
    console.log(appName + ' HUKS_Concurrency_Test_00600 callback index ' + index);
    huks.exportKey(defaultAliasA, emptyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      publicKey = data.outData;
      rsaImportCallback(index, done);
    });
  };

  function rsaExportAndImportCallback(done) {
    var index = 0;
    rsaExportCallback(index, done);
  };

  function getKeyPropertiesCallback(index,done){
    huks.getKeyProperties(defaultAlias,emptyOption,function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      if (index < loop) {
        index ++;
        getKeyPropertiesCallback(index,done);
      } else {
        deleteKey(defaultAlias,done);
      }
    });
  };

  function isKeyNotExistCallback(index,done){
    console.log(appName + ' HUKS_Concurrency_Test_00800 callback not exist key index ' + index);
    huks.isKeyExist(defaultAlias,emptyOption,function(err,data){
      expect(data).assertEqual(false);
      if (index < loop) {
        index ++;
        isKeyNotExistCallback(index,done);
      } else {
        done();
      }
    });
  };

  function deleteExistKeyCallback(done){
    huks.deleteKey(defaultAlias,emptyOption,function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      isKeyNotExistCallback(0,done);
    });
  };

  function isKeyExistCallback(index,done){
    console.log(appName + ' HUKS_Concurrency_Test_00800 callback exist key index ' + index);
    huks.isKeyExist(defaultAlias,emptyOption,function(err,data){
      expect(data).assertEqual(true);
      if(index < loop){
        index ++;
        isKeyExistCallback(index,done);
      } else {
        deleteExistKeyCallback(done);
      }
    });
  };

  async function generateSignKey(){
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateEcc224Opt);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var exportKeyRet = await huks.exportKey(defaultAliasA, emptyOption);
    var importOptions = makeImportOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      exportKeyRet.outData
    );
    var importKeyRet = await huks.importKey(defaultAliasB, importOptions);
    expect(importKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
  };

  function verifyWithCallback(index,done){
    huks.verify(defaultAliasB,verifyOptions,ciphertext,function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      if (index < loop) {
        index ++;
        signWithCallback(index,done);
      } else {
        deleteAliasA(done);
      }
    });
  }

  function signWithCallback(index,done){
    console.log(appName + ' HUKS_Concurrency_Test_01100 callback index ' + index);
    huks.sign(defaultAliasA,signOption,function(err,data){
      ciphertext = data.outData;
      verifyWithCallback(index,done);
    });
  }

  function signAndVerifyCallback(done){
    signWithCallback(0,done);
  };

  function agreeKeyBWithCallback(key,index,done){
    huks.agreeKey(defaultAliasB,agreeKeyBOption,function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      expect(JSON.stringify(data.outData)).assertEqual(JSON.stringify(key));
      if (index < loop) {
        index ++;
        agreeKeyAWithCallback(index,done);
      } else {
        deleteAliasA(done);
      }
    });
  };

  function agreeKeyAWithCallback(index,done){
    console.log(appName + ' HUKS_Concurrency_Test_01200 promise callback index ' + index);
    huks.agreeKey(defaultAliasA,agreeKeyAOption,function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      var key = data.outData;
      console.log('agreeKeyARet.outData' + key);

      agreeKeyBWithCallback(key,index,done);
    });
  };

  function agreeWithCallback(done){
    agreeKeyAWithCallback(0,done);
  };

  function macWithCallback(index,done){
    huks.mac(defaultAlias,macOption,function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      if (index < loop) {
        index ++;
        macWithCallback(index,done);
      } else {
        deleteKey(defaultAlias,done);
      }
    });
  };

  /**
   * @tc.number   HUKS_Concurrency_Test_00200
   * @tc.name     Concurrency_Test_GetSdkVersion
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00200', 0, async function (done) {
    for (let index = 0;index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_00200 promise index ' + index);
      var sdkVersion = await huks.getSdkVersion(emptyOption);
      console.log('sdk version ' + JSON.stringify(sdkVersion));
      var result = false;
      if (sdkVersion.length > 0) {
        result = true;
      }
      expect(result).assertEqual(true);
    }
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_00300
   * @tc.name     Concurrency_Test_Encrypt_Decrypt_Promise
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00300', 0, async function (done) {
    await generateAesKey();
    for (let index = 0;index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_00300 promise index ' + index);
      var encryptRet = await huks.encrypt(defaultAlias, encryptAes128Opt);
      expect(encryptRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      var decryptOpt = makeEncryptAndDecryptOption(
        huks.HksKeyAlg.HKS_ALG_AES,
        huks.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
        huks.HksKeyPadding.HKS_PADDING_NONE,
        huks.HksCipherMode.HKS_MODE_CBC,
        null,
        null,
        encryptRet.outData
      );
      var decryptRet = await huks.decrypt(defaultAlias, decryptOpt);
      expect(decryptRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      expect(JSON.stringify(plainText)).assertEqual(JSON.stringify(decryptRet.outData));
    }
    await deleteAesKey();
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_00400
   * @tc.name     Concurrency_Test_Encrypt_Decrypt_Callback
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00400', 0, async function (done) {
    await generateAesKey();
    aesEncryptAndDecryptCallback(done);
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_00500
   * @tc.name     Concurrency_Test_Import_Export_Promise
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00500', 0, async function (done) {
    await generateRsaKey();
    for (let index = 0; index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_00500 promise index ' + index);
      var exportPublicKeyRet = await huks.exportKey(defaultAliasA, emptyOption);
      expect(exportPublicKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      var importRsa512KeyOpt = makeImportOption(
        huks.HksKeyAlg.HKS_ALG_RSA,
        huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
        huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT,
        huks.HksKeyPadding.HKS_PADDING_NONE,
        huks.HksCipherMode.HKS_MODE_ECB,
        huks.HksKeyDigest.HKS_DIGEST_NONE,
        exportPublicKeyRet.outData
      );
      var importRsa512KeyRet = await huks.importKey(defaultAliasB, importRsa512KeyOpt);
      expect(importRsa512KeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    }
    await deleteKeyAB();
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_00600
   * @tc.name     Concurrency_Test_Import_Export_Callback
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00600', 0, async function (done) {
    await generateRsaKey();
    rsaExportAndImportCallback(done);
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_00700
   * @tc.name     Concurrency_Test_GetKeyProperties
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00700', 0, async function (done) {
    await generateAesKey();
    for (let index = 0; index < loop; index++) {
      var getKeyPropertiesRet = await huks.getKeyProperties(defaultAlias, emptyOption);
      expect(getKeyPropertiesRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    }
    getKeyPropertiesCallback(0,done);
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_00800
   * @tc.name     Concurrency_Test_IsKeyExist_Promise
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00800', 0, async function (done) {
    await generateAesKey();
    for (let index = 0; index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_00800 exist key index ' + index);
      var isKeyExistRet = await huks.isKeyExist(defaultAlias, emptyOption);
      expect(isKeyExistRet).assertEqual(true);
    }
    await deleteAesKey();
    for (let index = 0; index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_00800 not exist key  index ' + index);
      var isKeyExistRet = await huks.isKeyExist(defaultAlias, emptyOption);
      expect(isKeyExistRet).assertEqual(false);
    }
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_00900
   * @tc.name     Concurrency_Test_IsKeyExist_Callback
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00900', 0, async function (done) {
    await generateAesKey();
    isKeyExistCallback(0,done);
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_01000
   * @tc.name     Concurrency_Test_Sign_Verify_Promise
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_01000', 0, async function (done) {
    await generateSignKey();
    for (let index = 0; index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_01000 promise index ' + index);
      var signRet = await huks.sign(defaultAliasA, signOption);
      var verifyRet = await huks.verify(defaultAliasB, verifyOptions, signRet.outData);
      expect(verifyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    }
    await deleteKeyAB();
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_01100
   * @tc.name     Concurrency_Test_Sign_Verify_Callback
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_01100', 0, async function (done) {
    await generateSignKey();
    signAndVerifyCallback(done);
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_01200
   * @tc.name     Concurrency_Test_agree
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_01200', 0, async function (done) {
    var generateKeyARet = await huks.generateKey(defaultAliasA, generateAgreeKeyOption);
    expect(generateKeyARet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var generateKeyBRet = await huks.generateKey(defaultAliasB, generateAgreeKeyOption);
    expect(generateKeyBRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var exportKeyARet = await huks.exportKey(defaultAliasA, emptyOption);
    expect(exportKeyARet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var exportKeyBRet = await huks.exportKey(defaultAliasB, emptyOption);
    expect(exportKeyBRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    agreeKeyBOption = makeAgreeOptions(exportKeyARet.outData);
    agreeKeyAOption = makeAgreeOptions(exportKeyBRet.outData);
    for (let index = 0; index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_01200 promise index ' + index);
      var agreeKeyARet = await huks.agreeKey(defaultAliasA, agreeKeyAOption);
      expect(agreeKeyARet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      var agreeKeyBRet = await huks.agreeKey(defaultAliasB, agreeKeyBOption);
      expect(agreeKeyBRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      expect(JSON.stringify(agreeKeyARet.outData)).assertEqual(JSON.stringify(agreeKeyBRet.outData));
    }
    agreeWithCallback(done);
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_Concurrency_Test_01300
   * @tc.name     Concurrency_Test_mac
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_01300', 0, async function (done) {
    var generateKeyRet = await huks.generateKey(defaultAlias, generateMacKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    var macOption = makeMacOption(plainText);
    for (let index = 0; index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_01300 promise index ' + index);
      var macRet = await huks.mac(defaultAlias, macOption);
      expect(macRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
    }
    macWithCallback(0,done);
    setTimeout(function () {
    }, timer);
  });
});