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

export var useLib = 'openssl';
export var appName = 'app1';
export var loop = 3000;
export var timer = 1000;

export function makeGenerateKeyOption(alg, size, purpose, padding, mode, digest) {
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
  if (purpose == (huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT | huks.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT)) {
    properties[3] = {
      tag: huks.HksTag.HKS_TAG_PADDING,
      value: padding
    };
    properties[4] = {
      tag: huks.HksTag.HKS_TAG_BLOCK_MODE,
      value: mode
    };
    if (alg == huks.HksKeyAlg.HKS_ALG_RSA) {
      properties[5] = {
        tag: huks.HksTag.HKS_TAG_DIGEST,
        value: digest
      };
      properties[6] = {
        tag: huks.HksTag.HKS_TAG_KEY_GENERATE_TYPE,
        value: huks.HksKeyGenerateType.HKS_KEY_GENERATE_TYPE_DEFAULT
      };
    }
  } else if (purpose == (huks.HksKeyPurpose.HKS_KEY_PURPOSE_SIGN | huks.HksKeyPurpose.HKS_KEY_PURPOSE_VERIFY)) {
    properties[3] = {
      tag: huks.HksTag.HKS_TAG_PADDING,
      value: padding
    };
    properties[4] = {
      tag: huks.HksTag.HKS_TAG_DIGEST,
      value: digest
    };
  } else if (purpose == huks.HksKeyPurpose.HKS_KEY_PURPOSE_MAC) {
    properties[3] = {
      tag: huks.HksTag.HKS_TAG_DIGEST,
      value: digest
    };
    properties[4] = {
      tag: huks.HksTag.HKS_TAG_KEY_TYPE,
      value: huks.HksKeyType.HKS_KEY_TYPE_HMAC
    };
  } else {
    properties[3] = {
      tag: huks.HksTag.HKS_TAG_DIGEST,
      value: digest
    };
  }
  var options = {
    properties: properties
  };
  return options;
};

export function makeEncryptAndDecryptOption(alg, purpose, padding, mode, size, digest, text) {
  var properties = new Array();
  properties[0] = {
    tag: huks.HksTag.HKS_TAG_ALGORITHM,
    value: alg,
  };
  properties[1] = {
    tag: huks.HksTag.HKS_TAG_PURPOSE,
    value: purpose
  };
  properties[2] = {
    tag: huks.HksTag.HKS_TAG_PADDING,
    value: padding
  };
  properties[3] = {
    tag: huks.HksTag.HKS_TAG_BLOCK_MODE,
    value: mode
  };
  if (alg == huks.HksKeyAlg.HKS_ALG_AES || alg == huks.HksKeyAlg.HKS_ALG_HMAC) {
    properties[4] = {
      tag: huks.HksTag.HKS_TAG_IV,
      value: new Uint8Array(16)
    };
  } else if (alg == huks.HksKeyAlg.HKS_ALG_RSA) {
    properties[4] = {
      tag: huks.HksTag.HKS_TAG_IS_KEY_ALIAS,
      value: true
    };
    properties[5] = {
      tag: huks.HksTag.HKS_TAG_KEY_SIZE,
      value: size
    };
    properties[6] = {
      tag: huks.HksTag.HKS_TAG_DIGEST,
      value: digest
    };
  }
  var options = {
    properties: properties,
    inData: text
  };
  return options;
};

export function makeImportOption(alg, size, purpose, padding, mode, digest, publicKey) {
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
  if (alg == huks.HksKeyAlg.HKS_ALG_RSA || alg == huks.HksKeyAlg.HKS_ALG_DSA || alg == huks.HksKeyAlg.HKS_ALG_ECC) {
    if (purpose == (huks.HksKeyPurpose.HKS_KEY_PURPOSE_ENCRYPT | huks.HksKeyPurpose.HKS_KEY_PURPOSE_DECRYPT)) {
      properties[4] = {
        tag: huks.HksTag.HKS_TAG_BLOCK_MODE,
        value: mode
      };
      properties[5] = {
        tag: huks.HksTag.HKS_TAG_DIGEST,
        value: digest
      };
      properties[6] = {
        tag: huks.HksTag.HKS_TAG_KEY_GENERATE_TYPE,
        value: huks.HksKeyGenerateType.HKS_KEY_GENERATE_TYPE_DEFAULT
      };
    } else {
      properties[4] = {
        tag: huks.HksTag.HKS_TAG_DIGEST,
        value: digest
      };
    }
  }
  var options = {
    properties: properties,
    inData: publicKey
  };
  return options;
};

export function makeEmptyOption() {
  var emptyOptions = {
    properties: []
  };
  return emptyOptions;
};

export function makeRandomArr(size) {
  var arr = new Uint8Array(size);
  for (var i = 0; i < size; i++) {
    arr[i] = Math.floor(Math.random() * 10);
  }
  return arr;
};

export function makeAgreeOptions(publicKey) {
  var properties = new Array();
  properties[0] = {
    tag: huks.HksTag.HKS_TAG_ALGORITHM,
    value: huks.HksKeyAlg.HKS_ALG_ECDH
  };
  properties[1] = {
    tag: huks.HksTag.HKS_TAG_KEY_SIZE,
    value: huks.HksKeySize.HKS_ECC_KEY_SIZE_224
  };
  var options = {
    properties: properties,
    inData: publicKey
  };
  return options;
};

export function makeSignAndVerifyOption(alg, size, purpose, padding, digest, text) {
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

export function makeMacOption(plaintText) {
  var properties = new Array();
  properties[0] = {
    tag: huks.HksTag.HKS_TAG_ALGORITHM,
    value: huks.HksKeyAlg.HKS_ALG_HMAC
  };
  properties[1] = {
    tag: huks.HksTag.HKS_TAG_PURPOSE,
    value: huks.HksKeyPurpose.HKS_KEY_PURPOSE_MAC
  };
  properties[2] = {
    tag: huks.HksTag.HKS_TAG_DIGEST,
    value: huks.HksKeyDigest.HKS_DIGEST_SHA1
  };
  properties[3] = {
    tag: huks.HksTag.HKS_TAG_KEY_TYPE,
    value: huks.HksKeyType.HKS_KEY_TYPE_HMAC
  };
  properties[4] = {
    tag: huks.HksTag.HKS_TAG_KEY_SIZE,
    value: 160
  };
  properties[5] = {
    tag: huks.HksTag.HKS_TAG_IV,
    value: new Uint8Array(16)
  };
  var options = {
    properties: properties,
    inData: plaintText
  };
  return options;
};

