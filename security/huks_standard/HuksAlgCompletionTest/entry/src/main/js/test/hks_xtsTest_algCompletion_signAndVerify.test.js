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
  useLib,
  makeGenerateKeyOption,
  makeRandomArr,
  makeEmptyOption,
  makeImportOption
} from './hks_common.test.js'

describe('Hks_XtsTest_AlgCompletion_Sign_Verify', function () {

  var timer = 1000;
  var defaultAliasA = 'defaultAliasA';
  var defaultAliasB = 'defaultAliasB';
  var signedText = [];
  var publicKey = [];
  var emptyOption = makeEmptyOption();

  function makeSignAndVerifyOption(alg, size, purpose, padding, digest, text) {
    var properties = new Array();
    properties[0] = {
      tag: huks.HksTag.HKS_TAG_ALGORITHM,
      value: alg
    };
    properties[1] = {
      tag: huks.HksTag.HKS_TAG_KEY_SIZE,
      value: size
    };
    properties[2] = {
      tag: huks.HksTag.HKS_TAG_PURPOSE,
      value: purpose
    };
    properties[3] = {
      tag: huks.HksTag.HKS_TAG_PADDING,
      value: padding
    };
    properties[4] = {
      tag: huks.HksTag.HKS_TAG_DIGEST,
      value: digest
    };
    var options = {
      properties: properties,
      inData: text
    };
    return options;
  };

  function isAliasBExist(done, caseId) {
    huks.isKeyExist(defaultAliasA, emptyOption, function (err, data) {
      expect(data).assertEqual(false);
      console.log(caseId + ' end');
      done();
    })
  }

  function isAliasAExist(done, caseId) {
    huks.isKeyExist(defaultAliasA, emptyOption, function (err, data) {
      expect(data).assertEqual(false);
      isAliasBExist(done, caseId);
    })
  };

  function deleteAliasB(done, caseId) {
    huks.deleteKey(defaultAliasB, emptyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      isAliasAExist(done, caseId);
    })
  }

  function deleteAliasA(done, caseId) {
    huks.deleteKey(defaultAliasA, emptyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      deleteAliasB(done, caseId);
    })
  };

  function verifyWithCallback(alg, size, padding, digest, plainText, done, caseId) {
    var verifyOptions = makeSignAndVerifyOption(
      alg,
      size,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      padding,
      digest,
      plainText
    );
    huks.verify(defaultAliasB, verifyOptions, signedText, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      deleteAliasA(done, caseId);
    });
  };

  function importWithCallback(alg, size, padding, digest, plainText, done, caseId) {
    var importOption = makeImportOption(
      alg,
      size,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      padding,
      null,
      digest,
      publicKey
    );
    huks.importKey(defaultAliasB, importOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      verifyWithCallback(alg, size, padding, digest, plainText, done, caseId);
    });
  };

  function exportWithCallback(alg, size, padding, digest, plainText, done, caseId) {
    huks.exportKey(defaultAliasA, emptyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      publicKey = data.outData;
      importWithCallback(alg, size, padding, digest, plainText, done, caseId);
    });
  };

  function signWithCallback(alg, size, padding, digest, done, caseId) {
    var plainText = makeRandomArr(16);
    var signOption = makeSignAndVerifyOption(
      alg,
      size,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
      padding,
      digest,
      plainText
    );
    huks.sign(defaultAliasA, signOption, function (err, data) {
      if (useLib == 'mbedtls' && (
        caseId == 'HUKS_ALG_COMPLETION_28900' ||
        caseId == 'HUKS_ALG_COMPLETION_29500' ||
        caseId == 'HUKS_ALG_COMPLETION_29600')) {
        expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
        done();
      } else {
        expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        signedText = data.outData;
        console.log('signedText ' + JSON.stringify(signedText));
        exportWithCallback(alg, size, padding, digest, plainText, done, caseId);
      }
    });
  };

  function signAndVerifyCallback(alg, size, padding, digest, done, caseId) {
    var generateKeyOption = makeGenerateKeyOption(
      alg,
      size,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      padding,
      null,
      digest
    );
    huks.generateKey(defaultAliasA, generateKeyOption, function (err, data) {
      if (useLib == 'mbedtls' && alg == huks.HksKeyAlg.HKS_ALG_DSA) {
        expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_NOT_SUPPORTED);
        console.log(caseId + ' end');
        done();
      } else {
        expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        signWithCallback(alg, size, padding, digest, done, caseId);
      }
    });
  };

  async function signAndVerifyPromise (alg, size, padding, digest, done, caseId) {
    var plainText = makeRandomArr(16);
    var generateKeyOption = makeGenerateKeyOption(
      alg, size, huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY, padding, null, digest
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    if (useLib == 'mbedtls' && alg == huks.HksKeyAlg.HKS_ALG_DSA) {
      expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_NOT_SUPPORTED);
    } else {
      expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      var signOption = makeSignAndVerifyOption(
        alg, size, huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN, padding, digest, plainText
      );
      var signRet = await huks.sign(defaultAliasA, signOption);
      if (useLib == 'mbedtls' && (
        caseId == 'HUKS_ALG_COMPLETION_24700' ||
        caseId == 'HUKS_ALG_COMPLETION_25300' ||
        caseId == 'HUKS_ALG_COMPLETION_25400')) {
        expect(signRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
      } else {
        expect(signRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        signedText = signRet.outData;
        var exportKeyRet = await huks.exportKey(defaultAliasA, emptyOption);
        expect(exportKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        publicKey = exportKeyRet.outData;
        var importOptions = makeImportOption(
          alg, size, huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY, padding, null, digest, publicKey
        );
        var importKeyRet = await huks.importKey(defaultAliasB, importOptions);
        expect(importKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        var verifyOptions = makeSignAndVerifyOption(
          alg, size, huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY, padding, digest, plainText
        );
        var verifyRet = await huks.verify(defaultAliasB, verifyOptions, signedText);
        expect(verifyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        var deleteKeyAliasA = await huks.deleteKey(defaultAliasA, emptyOption);
        var deleteKeyAliasB = await huks.deleteKey(defaultAliasB, emptyOption);
        expect(deleteKeyAliasA.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        expect(deleteKeyAliasB.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
        var isKeyAExist = await huks.isKeyExist(defaultAliasA, emptyOption);
        expect(isKeyAExist).assertEqual(false);
        var isKeyBExist = await huks.isKeyExist(defaultAliasB, emptyOption);
        expect(isKeyBExist).assertEqual(false);
      }
    }
    console.log(caseId + ' end');
    done();
  };

  /**
   * @tc.number   HUKS_ALG_COMPLETION_13300
   * @tc.name     RSA512_MD5withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_13300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_13300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_13400
   * @tc.name     RSA768_MD5withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_13400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_13400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_13500
   * @tc.name     RSA1024_MD5withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_13500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_13500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_13600
   * @tc.name     RSA2048_MD5withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_13600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_13600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_13700
   * @tc.name     RSA3072_MD5withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_13700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_13700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_13800
   * @tc.name     RSA4096_MD5withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_13800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_13800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_13900
   * @tc.name     RSA512_NONEwithRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_13900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_13900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14000
   * @tc.name     RSA768_NONEwithRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_14000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14100
   * @tc.name     RSA1024_NONEwithRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_14100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14200
   * @tc.name     RSA2048_NONEwithRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_14200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14300
   * @tc.name     RSA3072_NONEwithRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_14300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14400
   * @tc.name     RSA4096_NONEwithRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_14400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14500
   * @tc.name     RSA512_SHA1withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_14500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14600
   * @tc.name     RSA768_SHA1withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_14600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14700
   * @tc.name     RSA1024_SHA1withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_14700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14800
   * @tc.name     RSA2048_SHA1withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_14800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_14900
   * @tc.name     RSA3072_SHA1withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_14900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_14900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15000
   * @tc.name     RSA4096_SHA1withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_15000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15100
   * @tc.name     RSA512_SHA224withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_15100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15200
   * @tc.name     RSA768_SHA224withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_15200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15300
   * @tc.name     RSA1024_SHA224withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_15300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15400
   * @tc.name     RSA2048_SHA224withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_15400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15500
   * @tc.name     RSA3072_SHA224withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_15500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15600
   * @tc.name     RSA4096_SHA224withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_15600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15700
   * @tc.name     RSA512_SHA256withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_15700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15800
   * @tc.name     RSA768_SHA256withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_15800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_15900
   * @tc.name     RSA1024_SHA256withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_15900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_15900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16000
   * @tc.name     RSA2048_SHA256withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_16000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16100
   * @tc.name     RSA3072_SHA256withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_16100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16200
   * @tc.name     RSA4096_SHA256withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_16200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16300
   * @tc.name     RSA512_SHA384withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16300', 0, async function (done) {
    var plainText = makeRandomArr(16);
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      null,
      huks.HksKeyDigest.HKS_DIGEST_SHA384
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);

    var signOption = makeSignAndVerifyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      plainText
    );
    var signRet = await huks.sign(defaultAliasA, signOption);
    expect(signRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
    console.log('HUKS_ALG_COMPLETION_16300 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16400
   * @tc.name     RSA768_SHA384withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_16400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16500
   * @tc.name     RSA1024_SHA384withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_16500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16600
   * @tc.name     RSA2048_SHA384withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_16600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16700
   * @tc.name     RSA3072_SHA384withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_16700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16800
   * @tc.name     RSA4096_SHA384withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_16800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_16900
   * @tc.name     RSA512_SHA512withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_16900', 0, async function (done) {
    var plainText = makeRandomArr(16);
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      null,
      huks.HksKeyDigest.HKS_DIGEST_SHA512
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);

    var signOption = makeSignAndVerifyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      plainText
    );
    var signRet = await huks.sign(defaultAliasA, signOption);
    expect(signRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
    console.log('HUKS_ALG_COMPLETION_16900 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17000
   * @tc.name     RSA768_SHA512withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_17000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17100
   * @tc.name     RSA1024_SHA512withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_17100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17200
   * @tc.name     RSA2048_SHA512withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_17200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17300
   * @tc.name     RSA3072_SHA512withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_17300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17400
   * @tc.name     RSA4096_SHA512withRSA_Promise
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_17400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17500
   * @tc.name     RSA512_MD5withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_17500'
    );
    setTimeout(function () {
    }, timer);
  });


  /**
   * @tc.number   HUKS_ALG_COMPLETION_17600
   * @tc.name     RSA768_MD5withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_17600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17700
   * @tc.name     RSA1024_MD5withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_17700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17800
   * @tc.name     RSA2048_MD5withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_17800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_17900
   * @tc.name     RSA3072_MD5withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_17900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_17900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18000
   * @tc.name     RSA4096_MD5withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_18000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18100
   * @tc.name     RSA512_NONEwithRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_18100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18200
   * @tc.name     RSA768_NONEwithRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_18200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18300
   * @tc.name     RSA1024_NONEwithRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_18300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18400
   * @tc.name     RSA2048_NONEwithRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_18400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18500
   * @tc.name     RSA3072_NONEwithRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_18500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18600
   * @tc.name     RSA4096_NONEwithRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_18600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18700
   * @tc.name     RSA512_SHA1withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_18700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18800
   * @tc.name     RSA768_SHA1withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_18800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_18900
   * @tc.name     RSA1024_SHA1withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_18900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_18900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19000
   * @tc.name     RSA2048_SHA1withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_19000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19100
   * @tc.name     RSA3072_SHA1withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_19100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19200
   * @tc.name     RSA4096_SHA1withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_19200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19300
   * @tc.name     RSA512_SHA224withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_19300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19400
   * @tc.name     RSA768_SHA224withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_19400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19500
   * @tc.name     RSA1024_SHA224withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_19500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19600
   * @tc.name     RSA2048_SHA224withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_19600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19700
   * @tc.name     RSA3072_SHA224withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_19700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19800
   * @tc.name     RSA4096_SHA224withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_19800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_19900
   * @tc.name     RSA512_SHA256withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_19900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_19900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20000
   * @tc.name     RSA768_SHA256withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_20000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20100
   * @tc.name     RSA1024_SHA256withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_20100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20200
   * @tc.name     RSA2048_SHA256withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_20200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20300
   * @tc.name     RSA3072_SHA256withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_20300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20400
   * @tc.name     RSA4096_SHA256withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_20400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20500
   * @tc.name     RSA512_SHA384withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20500', 0, async function (done) {
    var plainText = makeRandomArr(16);
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      null,
      huks.HksKeyDigest.HKS_DIGEST_SHA384
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);

    var signOption = makeSignAndVerifyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      plainText
    );
    huks.sign(defaultAliasA, signOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
      console.log('HUKS_ALG_COMPLETION_20500 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20600
   * @tc.name     RSA768_SHA384withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_20600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20700
   * @tc.name     RSA1024_SHA384withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_20700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20800
   * @tc.name     RSA2048_SHA384withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_20800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_20900
   * @tc.name     RSA3072_SHA384withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_20900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_20900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21000
   * @tc.name     RSA4096_SHA384withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_21000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_21000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21100
   * @tc.name     RSA512_SHA512withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_21100', 0, async function (done) {
    var plainText = makeRandomArr(16);
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      null,
      huks.HksKeyDigest.HKS_DIGEST_SHA512
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);

    var signOption = makeSignAndVerifyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      plainText
    );
    huks.sign(defaultAliasA, signOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
      console.log('HUKS_ALG_COMPLETION_21100 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21200
   * @tc.name     RSA768_SHA512withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_21200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_21200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21300
   * @tc.name     RSA1024_SHA512withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_21300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_21300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   zHUKS_ALG_COMPLETION_21400
   * @tc.name     RSA2048_SHA512withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_21400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_21400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21500
   * @tc.name     RSA3072_SHA512withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_21500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_21500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21600
   * @tc.name     RSA4096_SHA512withRSA_Callback
   * @tc.desc     Test for sign and verify with rsa.
   */
  it('HUKS_ALG_COMPLETION_21600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PKCS1_V1_5,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_21600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21700
   * @tc.name     RSA512_MD5withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_21700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_21700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21800
   * @tc.name     RSA768_MD5withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_21800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_21800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_21900
   * @tc.name     RSA1024_MD5withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_21900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_21900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22000
   * @tc.name     RSA2048_MD5withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_22000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22100
   * @tc.name     RSA3072_MD5withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_22100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22200
   * @tc.name     RSA4096_MD5withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_22200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22300
   * @tc.name     RSA512_NONEwithRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_22300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22400
   * @tc.name     RSA768_NONEwithRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_22400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22500
   * @tc.name     RSA1024_NONEwithRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_22500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22600
   * @tc.name     RSA2048_NONEwithRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_22600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22700
   * @tc.name     RSA3072_NONEwithRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_22700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22800
   * @tc.name     RSA4096_NONEwithRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_22800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_22900
   * @tc.name     RSA512_SHA1withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_22900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_22900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23000
   * @tc.name     RSA768_SHA1withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_23000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23100
   * @tc.name     RSA1024_SHA1withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_23100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23200
   * @tc.name     RSA2048_SHA1withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_23200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23300
   * @tc.name     RSA3072_SHA1withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_23300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23400
   * @tc.name     RSA4096_SHA1withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_23400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23500
   * @tc.name     RSA512_SHA224withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_23500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23600
   * @tc.name     RSA768_SHA224withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_23600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23700
   * @tc.name     RSA1024_SHA224withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_23700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23800
   * @tc.name     RSA2048_SHA224withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_23800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_23900
   * @tc.name     RSA3072_SHA224withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_23900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_23900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24000
   * @tc.name     RSA4096_SHA224withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_24000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24100
   * @tc.name     RSA512_SHA256withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_24100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24200
   * @tc.name     RSA768_SHA256withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_24200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24300
   * @tc.name     RSA1024_SHA256withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_24300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24400
   * @tc.name     RSA2048_SHA256withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_24400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24500
   * @tc.name     RSA3072_SHA256withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_24500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24600
   * @tc.name     RSA4096_SHA256withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_24600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24700
   * @tc.name     RSA512_SHA384withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_24700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24800
   * @tc.name     RSA768_SHA384withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_24800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_24900
   * @tc.name     RSA1024_SHA384withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_24900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_24900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25000
   * @tc.name     RSA2048_SHA384withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_25000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25100
   * @tc.name     RSA3072_SHA384withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_25100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25200
   * @tc.name     RSA4096_SHA384withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_25200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25300
   * @tc.name     RSA512_SHA512withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25300', 0, async function (done) {
    var plainText = makeRandomArr(16);
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      null,
      huks.HksKeyDigest.HKS_DIGEST_SHA512
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);

    var signOption = makeSignAndVerifyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      plainText
    );
    var signRet = await huks.sign(defaultAliasA, signOption);
    expect(signRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
    console.log('HUKS_ALG_COMPLETION_25300 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25400
   * @tc.name     RSA768_SHA512withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_25400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25500
   * @tc.name     RSA1024_SHA512withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_25500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25600
   * @tc.name     RSA2048_SHA512withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_25600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25700
   * @tc.name     RSA3072_SHA512withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_25700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25800
   * @tc.name     RSA4096_SHA512withRSA_Pss_Promise
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_25800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_25900
   * @tc.name     RSA512_MD5withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_25900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_25900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26000
   * @tc.name     RSA768_MD5withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_26000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26100
   * @tc.name     RSA1024_MD5withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_26100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26200
   * @tc.name     RSA2048_MD5withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_26200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26300
   * @tc.name     RSA3072_MD5withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_26300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26400
   * @tc.name     RSA4096_MD5withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_MD5,
      done,
      'HUKS_ALG_COMPLETION_26400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26500
   * @tc.name     RSA512_NONEwithRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_26500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26600
   * @tc.name     RSA768_NONEwithRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_26600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26700
   * @tc.name     RSA1024_NONEwithRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_26700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26800
   * @tc.name     RSA2048_NONEwithRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_26800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_26900
   * @tc.name     RSA3072_NONEwithRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_26900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_26900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27000
   * @tc.name     RSA4096_NONEwithRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_27000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27100
   * @tc.name     RSA512_SHA1withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_27100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27200
   * @tc.name     RSA768_SHA1withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_27200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27300
   * @tc.name     RSA1024_SHA1withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_27300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27400
   * @tc.name     RSA2048_SHA1withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_27400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27500
   * @tc.name     RSA3072_SHA1withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_27500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27600
   * @tc.name     RSA4096_SHA1withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_27600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27700
   * @tc.name     RSA512_SHA224withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_27700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27800
   * @tc.name     RSA768_SHA224withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_27800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_27900
   * @tc.name     RSA1024_SHA224withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_27900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_27900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28000
   * @tc.name     RSA2048_SHA224withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_28000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28100
   * @tc.name     RSA3072_SHA224withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_28100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28200
   * @tc.name     RSA4096_SHA224withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_28200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28300
   * @tc.name     RSA512_SHA256withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_28300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28400
   * @tc.name     RSA768_SHA256withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_28400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28500
   * @tc.name     RSA1024_SHA256withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_28500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28600
   * @tc.name     RSA2048_SHA256withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_28600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28700
   * @tc.name     RSA3072_SHA256withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_28700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28800
   * @tc.name     RSA4096_SHA256withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_28800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_28900
   * @tc.name     RSA512_SHA384withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_28900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_28900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29000
   * @tc.name     RSA768_SHA384withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_29000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29100
   * @tc.name     RSA1024_SHA384withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_29100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29200
   * @tc.name     RSA2048_SHA384withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_29200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29300
   * @tc.name     RSA3072_SHA384withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_29300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29400
   * @tc.name     RSA4096_SHA384withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_29400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29500
   * @tc.name     RSA512_SHA512withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29500', 0, async function (done) {
    var plainText = makeRandomArr(16);
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      null,
      huks.HksKeyDigest.HKS_DIGEST_SHA512
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);

    var signOption = makeSignAndVerifyOption(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_512,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      plainText
    );
    var signRet = await huks.sign(defaultAliasA, signOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_CRYPTO_ENGINE_ERROR);
      console.log('HUKS_ALG_COMPLETION_29500 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29600
   * @tc.name     RSA768_SHA512withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_768,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_29600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29700
   * @tc.name     RSA1024_SHA512withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_1024,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_29700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29800
   * @tc.name     RSA2048_SHA512withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_2048,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_29800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_29900
   * @tc.name     RSA3072_SHA512withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_29900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_3072,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_29900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30000
   * @tc.name     RSA4096_SHA512withRSA_Pss_AsyncCallback
   * @tc.desc     Test for sign and verify with rsa/pss.
   */
  it('HUKS_ALG_COMPLETION_30000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_RSA,
      huks.HksKeySize.HKS_RSA_KEY_SIZE_4096,
      huks.HksKeyPadding.HKS_PADDING_PSS,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_30000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30100
   * @tc.name     DSA_MD5withDSA_Promise
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30100', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
    console.log('HUKS_ALG_COMPLETION_30100 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30200
   * @tc.name     DSA_NONEwithDSA_Promise
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30200', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_NONE
    );
    var generateKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(generateKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
    console.log('HUKS_ALG_COMPLETION_30200 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30300
   * @tc.name     DSA_SHA1withDSA_Promise
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_30300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30400
   * @tc.name     DSA_SHA224withDSA_Promise
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_30400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30500
   * @tc.name     DSA_SHA256withDSA_Promise
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_30500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30600
   * @tc.name     DSA_SHA384withDSA_Promise
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_30600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30700
   * @tc.name     DSA_SHA512withDSA_Promise
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_30700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30800
   * @tc.name     DSA_MD5withDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30800', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    huks.generateKey(defaultAliasA, generateKeyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
      console.log('HUKS_ALG_COMPLETION_30800 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_30900
   * @tc.name     DSA_NONEwithDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_30900', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_NONE
    );
    huks.generateKey(defaultAliasA, generateKeyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
      console.log('HUKS_ALG_COMPLETION_30900 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31000
   * @tc.name     DSA_SHA1withDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_31000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_31000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31100
   * @tc.name     DSA_SHA224withDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_31100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_31100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31200
   * @tc.name     DSA_SHA256withDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_31200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_31200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31300
   * @tc.name     DSA_SHA384withDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_31300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_31300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31400
   * @tc.name     DSA_SHA512withDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with dsa.
   */
  it('HUKS_ALG_COMPLETION_31400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_DSA,
      1024,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_31400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31500
   * @tc.name     ECDSA224_MD5withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_31500', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    var genKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(genKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
    console.log('HUKS_ALG_COMPLETION_31500 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31600
   * @tc.name     ECDSA224_NONEwithECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_31600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_31600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31700
   * @tc.name     ECDSA224_SHA1withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_31700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_31700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31800
   * @tc.name     ECDSA224_SHA224withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_31800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_31800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_31900
   * @tc.name     ECDSA224_SHA256withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_31900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_31900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32000
   * @tc.name     ECDSA224_SHA384withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_32000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32100
   * @tc.name     ECDSA224_SHA512withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_32100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32200
   * @tc.name     ECDSA224_MD5withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32200', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    huks.generateKey(defaultAliasA, generateKeyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
      console.log('HUKS_ALG_COMPLETION_32200 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32300
   * @tc.name     ECDSA224_NONEwithECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_32300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32400
   * @tc.name     ECDSA224_SHA1withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_32400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32500
   * @tc.name     ECDSA224_SHA224withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_32500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32600
   * @tc.name     ECDSA224_SHA256withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_32600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32700
   * @tc.name     ECDSA224_SHA384withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_32700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32800
   * @tc.name     ECDSA224_SHA512withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_224,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_32800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_32900
   * @tc.name     ECDSA256_MD5withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_32900', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    var genKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(genKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
    console.log('HUKS_ALG_COMPLETION_32900 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33000
   * @tc.name     ECDSA256_NONEwithECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_33000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33100
   * @tc.name     ECDSA256_SHA1withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_33100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33200
   * @tc.name     ECDSA256_SHA224withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_33200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33300
   * @tc.name     ECDSA256_SHA256withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_33300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33400
   * @tc.name     ECDSA256_SHA384withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_33400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33500
   * @tc.name     ECDSA256_SHA512withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_33500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33600
   * @tc.name     ECDSA256_MD5withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33600', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    huks.generateKey(defaultAliasA, generateKeyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
      console.log('HUKS_ALG_COMPLETION_33600 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33700
   * @tc.name     ECDSA256_NONEwithECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_33700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33800
   * @tc.name     ECDSA256_SHA1withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_33800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_33900
   * @tc.name     ECDSA256_SHA224withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_33900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_33900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34000
   * @tc.name     ECDSA256_SHA256withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_34000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34100
   * @tc.name     ECDSA256_SHA384withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_34100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34200
   * @tc.name     ECDSA256_SHA512withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_34200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34300
   * @tc.name     ECDSA384_MD5withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34300', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    var genKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(genKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
    console.log('HUKS_ALG_COMPLETION_34300 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34400
   * @tc.name     ECDSA384_NONEwithECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34400', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_34400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34500
   * @tc.name     ECDSA384_SHA1withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34500', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_34500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34600
   * @tc.name     ECDSA384_SHA224withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34600', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_34600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34700
   * @tc.name     ECDSA384_SHA256withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34700', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_34700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34800
   * @tc.name     ECDSA384_SHA384withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_34800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_34900
   * @tc.name     ECDSA384_SHA512withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_34900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_34900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35000
   * @tc.name     ECDSA384_MD5withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35000', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    huks.generateKey(defaultAliasA, generateKeyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
      console.log('HUKS_ALG_COMPLETION_35000 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35100
   * @tc.name     ECDSA384_NONEwithECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35100', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_35100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35200
   * @tc.name     ECDSA384_SHA1withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_35200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35300
   * @tc.name     ECDSA384_SHA224withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35300', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_35300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35400
   * @tc.name     ECDSA384_SHA256withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35400', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_35400'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35500
   * @tc.name     ECDSA384_SHA384withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_35500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35600
   * @tc.name     ECDSA384_SHA512withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_384,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_35600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35700
   * @tc.name     ECDSA521_MD5withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35700', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    var genKeyRet = await huks.generateKey(defaultAliasA, generateKeyOption);
    expect(genKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
    console.log('HUKS_ALG_COMPLETION_35700 end');
    done();
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35800
   * @tc.name     ECDSA521_NONEwithECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35800', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_35800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_35900
   * @tc.name     ECDSA521_SHA1withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_35900', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_35900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36000
   * @tc.name     ECDSA521_SHA224withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36000', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_36000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36100
   * @tc.name     ECDSA521_SHA256withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_36100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36200
   * @tc.name     ECDSA521_SHA384withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36200', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_36200'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36300
   * @tc.name     ECDSA521_SHA512withECDSA_Promise
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36300', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_36300'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36400
   * @tc.name     ECDSA521_MD5withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36400', 0, async function (done) {
    var generateKeyOption = makeGenerateKeyOption(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      null,
      huks.HksKeyDigest.HKS_DIGEST_MD5
    );
    huks.generateKey(defaultAliasA, generateKeyOption, function (err, data) {
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_ERROR_INVALID_DIGEST);
      console.log('HUKS_ALG_COMPLETION_36400 end');
      done();
    });
    setTimeout(function () {
    }, timer);
  });


  /**
   * @tc.number   HUKS_ALG_COMPLETION_36500
   * @tc.name     ECDSA521_NONEwithECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36500', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_36500'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36600
   * @tc.name     ECDSA521_SHA1withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36600', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA1,
      done,
      'HUKS_ALG_COMPLETION_36600'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36700
   * @tc.name     ECDSA521_SHA224withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36700', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA224,
      done,
      'HUKS_ALG_COMPLETION_36700'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36800
   * @tc.name     ECDSA521_SHA256withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36800', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA256,
      done,
      'HUKS_ALG_COMPLETION_36800'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_36900
   * @tc.name     ECDSA521_SHA384withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_36900', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA384,
      done,
      'HUKS_ALG_COMPLETION_36900'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_37000
   * @tc.name     ECDSA521_SHA512withECDSA_AsyncCallback
   * @tc.desc     Test for sign and verify with ECDSA.
   */
  it('HUKS_ALG_COMPLETION_37000', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ECC,
      huks.HksKeySize.HKS_ECC_KEY_SIZE_521,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_SHA512,
      done,
      'HUKS_ALG_COMPLETION_37000'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_37100
   * @tc.name     Regression_Testing_ED25519_Promise
   * @tc.desc     Test for ED25519 Regression Testing.
   */
  it('HUKS_ALG_COMPLETION_37100', 0, async function (done) {
    signAndVerifyPromise(
      huks.HksKeyAlg.HKS_ALG_ED25519,
      huks.HksKeySize.HKS_CURVE25519_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_37100'
    );
    setTimeout(function () {
    }, timer);
  });

  /**
   * @tc.number   HUKS_ALG_COMPLETION_37200
   * @tc.name     Regression_Testing_ED25519_CallBack
   * @tc.desc     Test for ED25519 Regression Testing.
   */
  it('HUKS_ALG_COMPLETION_37200', 0, async function (done) {
    signAndVerifyCallback(
      huks.HksKeyAlg.HKS_ALG_ED25519,
      huks.HksKeySize.HKS_CURVE25519_KEY_SIZE_256,
      huks.HksKeyPadding.HKS_PADDING_NONE,
      huks.HksKeyDigest.HKS_DIGEST_NONE,
      done,
      'HUKS_ALG_COMPLETION_37200'
    );
    setTimeout(function () {
    }, timer);
  });
});