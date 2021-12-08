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
  makeGenerateKeyOption,
  makeEmptyOption,
  loop,
  timer
} from './hks_common.test.js'

describe('HKS_CONCURRENCY_GENERATE_DELETE_KEY_APP2', function () {

  var defaultAlias = 'defaultAlias';

  var emptyOption = makeEmptyOption();

  var generateKeyOpt = makeGenerateKeyOption(
    huks.HksKeyAlg.HKS_ALG_AES,
    huks.HksKeySize.HKS_AES_KEY_SIZE_128,
    huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT | huks.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT,
    huks.HksKeyPadding.HKS_PADDING_NONE,
    huks.HksCipherMode.HKS_MODE_CBC
  );

  function isKeyExistAfterDelKey(index,done){
    huks.isKeyExist(defaultAlias,emptyOption,function(err,data){
      expect(data).assertEqual(false);
      if (index < loop) {
        index ++;
        generateKeyCallback(index,done);
      } else {
        done();
      }
    });
  };

  function deleteKeyCallback(index,done){
    huks.deleteKey(defaultAlias, emptyOption, function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      isKeyExistAfterDelKey(index,done);
    });
  };

  function isKeyExistAfterGenKey(index,done){
    huks.isKeyExist(defaultAlias,emptyOption,function(err,data){
      expect(data).assertEqual(true);
      deleteKeyCallback(index,done);
    });
  };

  function generateKeyCallback(index,done){
    console.log(appName + ' HUKS_Concurrency_Test_00100 callback index ' + index);
    huks.generateKey(defaultAlias, generateKeyOpt, function(err,data){
      expect(data.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      isKeyExistAfterGenKey(index,done);
    });
  };

  function genAndDelKeyCallback(done){
    var index = 0
    generateKeyCallback(index,done);
  };

  /**
   * @tc.number   HUKS_Concurrency_Test_00100
   * @tc.name     Concurrency_Test_GenKey_AES
   * @tc.desc     Test for APP Concurrency.
   */
  it('HUKS_Concurrency_Test_00100', 0, async function (done) {
    for (let index = 0;index < loop; index++) {
      console.log(appName + ' HUKS_Concurrency_Test_00100 promise index ' + index);
      var genKeyRet = await huks.generateKey(defaultAlias, generateKeyOpt);
      expect(genKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      var isKeyExistRet = await huks.isKeyExist(defaultAlias, emptyOption);
      expect(isKeyExistRet).assertEqual(true);
      var delKeyRet = await huks.deleteKey(defaultAlias, emptyOption);
      expect(delKeyRet.errorCode).assertEqual(huks.HksErrorCode.HKS_SUCCESS);
      var isKeyExistRet = await huks.isKeyExist(defaultAlias, emptyOption);
      expect(isKeyExistRet).assertEqual(false);
    }
    genAndDelKeyCallback(done);
    setTimeout(function () {
    }, timer);
  });
});