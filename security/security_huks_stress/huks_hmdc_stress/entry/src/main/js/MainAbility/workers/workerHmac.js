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

import huks from '@ohos.security.huks';
import * as Data from '../../../../../../../utils/data.json';
import worker from '@ohos.worker';
import * as params from '../../../../../../../utils/param.js';

var parentPort = worker.parentPort;

var error = 'pass';

var handle = {};
let srcData63Kb = Data.Date63KB;

let HuksHmac = {
  HuksKeyAlg: {
    tag: params.HksTag.HKS_TAG_ALGORITHM,
    value: params.HksKeyAlg.HKS_ALG_HMAC,
  },
  HuksKeyPurpose: {
    tag: params.HksTag.HKS_TAG_PURPOSE,
    value: params.HksKeyPurpose.HKS_KEY_PURPOSE_MAC,
  },
  HuksKeySIZE: {
    tag: params.HksTag.HKS_TAG_KEY_SIZE,
    value: params.HksKeySize.HKS_RSA_KEY_SIZE_512,
  },
  HuksTagDigestSHA1: {
    tag: params.HksTag.HKS_TAG_DIGEST,
    value: params.HksKeyDigest.HKS_DIGEST_SHA1,
  },
};

function stringToArray(str) {
  var arr = [];
  for (var i = 0, j = str.length; i < j; ++i) {
    arr.push(str.charCodeAt(i));
  }
  return arr;
}

async function publicHmacGenFunc(srcKeyAlies, HuksOptions) {
  HuksOptions.properties.splice(1, 0, HuksHmac.HuksKeySIZE);
  await huks
    .generateKey(srcKeyAlies, HuksOptions)
    .then((data) => {
      console.log(`test generateKey data ${JSON.stringify(data)}`);
      if (data.errorCode !== 0) {
        error = 'fail';
      }
    })
    .catch((err) => {
      console.log('test generateKey err information: ' + JSON.stringify(err));
      error = 'fail';
    });
  HuksOptions.properties.splice(1, 1);
}

async function publicHmacInitFunc(srcKeyAlies, HuksOptions) {
  await huks
    .init(srcKeyAlies, HuksOptions)
    .then(async (data) => {
      handle = {
        handle1: data.handle1,
        handle2: data.handle2,
      };
      if (data.errorCode !== 0) {
        error = 'fail';
      }
    })
    .catch((err) => {
      console.log(`test init err: " + ${JSON.stringify(err)}`);
      error = 'fail';
    });
}

async function publicHmacUpdateFunc(HuksOptions) {
  let dateSize = 64 * 1024;
  let huksOptionsInData = HuksOptions.inData;
  let inDataArray = stringToArray(HuksOptions.inData);
  if (inDataArray.length < dateSize) {
    HuksOptions.inData = new Uint8Array(inDataArray);
    await update(handle, HuksOptions);
    HuksOptions.inData = huksOptionsInData;
  } else {
    let count = Math.floor(inDataArray.length / dateSize);
    let remainder = inDataArray.length % dateSize;
    for (let i = 0; i < count; i++) {
      HuksOptions.inData = new Uint8Array(
        stringToArray(huksOptionsInData).slice(dateSize * i, dateSize * (i + 1))
      );
      await update(handle, HuksOptions);
    }
    if (remainder !== 0) {
      HuksOptions.inData = new Uint8Array(
        stringToArray(huksOptionsInData).slice(
          dateSize * count,
          inDataArray.length
        )
      );
      await update(handle, HuksOptions);
    }
  }
}

async function publicHmacFinish(HuksOptions, thirdInderfaceName) {
  if (thirdInderfaceName == 'finish') {
    HuksOptions.inData = new Uint8Array(stringToArray('0'));
    await huks
      .finish(handle, HuksOptions)
      .then((data) => {
        console.log(`test finish data ${JSON.stringify(data)}`);
        if (data.errorCode !== 0) {
          error = 'fail';
        }
      })
      .catch((err) => {
        console.log('test finish err information: ' + err);
        error = 'fail';
      });
  } else if (thirdInderfaceName == 'abort') {
    await huks
      .abort(handle, HuksOptions)
      .then((data) => {
        console.log(`test abort data ${JSON.stringify(data)}`);
        if (data.errorCode !== 0) {
          error = 'fail';
        }
      })
      .catch((err) => {
        console.log('test abort err information: ' + err);
        error = 'fail';
      });
  }
}

async function publicHmacDelete(srcKeyAlies, HuksOptions) {
  HuksOptions.properties.splice(1, 0, HuksHmac.HuksKeySIZE);
  await huks
    .deleteKey(srcKeyAlies, HuksOptions)
    .then((data) => {
      console.log(`test deleteKey data ${JSON.stringify(data)}`);
      if (data.errorCode !== 0) {
        error = 'fail';
      }
    })
    .catch((err) => {
      console.log('test deleteKey err information: ' + JSON.stringify(err));
      error = 'fail';
    });
}

async function publicHmacFunc(srcKeyAlies, HuksOptions, thirdInderfaceName) {
  try {
    await publicHmacGenFunc(srcKeyAlies, HuksOptions);
    await publicHmacInitFunc(srcKeyAlies, HuksOptions);
    await publicHmacUpdateFunc(HuksOptions);
    await publicHmacFinish(HuksOptions, thirdInderfaceName);
    await publicHmacDelete(srcKeyAlies, HuksOptions);
  } catch (e) {
    error = 'fail';
  }
}

async function update(handle, HuksOptions) {
  console.log(`test update data ${JSON.stringify(HuksOptions)}`);
  await huks
    .update(handle, HuksOptions)
    .then(async (data) => {
      console.log(`test update data ${JSON.stringify(data)}`);
      if (data.errorCode !== 0) {
        error = 'fail';
      }
    })
    .catch((err) => {
      console.log('test update err information: ' + err);
      error = 'fail';
    });
}

parentPort.onmessage = async function (e) {
  error = 'pass';
  console.log('test onMessage before e ' + JSON.stringify(e));
  let srcKeyAlies = e.data + '_01';
  let HuksOptions = {
    properties: new Array(
      HuksHmac.HuksKeyAlg,
      HuksHmac.HuksKeyPurpose,
      HuksHmac.HuksTagDigestSHA1
    ),
    inData: srcData63Kb,
  };
  await publicHmacFunc(srcKeyAlies, HuksOptions, 'finish');

  parentPort.postMessage(error);
};
