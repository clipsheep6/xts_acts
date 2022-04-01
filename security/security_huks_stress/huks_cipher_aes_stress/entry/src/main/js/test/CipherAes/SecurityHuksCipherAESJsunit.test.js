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

import { describe, it, expect } from 'deccjsunit/index';
import worker from '@ohos.worker';
var timeFlag = false;
var flag = false;
var res = [];
let workers = [];
let count = 15;
let loopCount = 0;

describe('SecurityHuksCipherAESJsunit', function () {
  for (var i = 0; i < count; i++) {
    const obj = {
      worker: new worker.Worker('workers/workerCipherAES.js'),
    };
    workers.push(obj);
  }

  function promiseCase() {
    let p = new Promise(function (resolve, reject) {
      setTimeout(function () {
        resolve();
      }, 500);
    }).then(undefined, (error) => {});
    return p;
  }

  async function startCase() {
    for (var i = 0; i < workers.length; i++) {
      workers[i].worker.postMessage(
        'testCipherAESKeyAliasWoker' + loopCount + i
      );
      await promiseCase();
    }
  }

  function messageListener() {
    for (var i = 0; i < workers.length; i++) {
      workers[i].worker.onmessage = function (e) {
        res.push(e.data);
        if (res.length == count) {
          flag = true;
        }
      };
    }
  }
  it('security_huks_third_stress_aes_cipher_1001', 0, async function (done) {
    setInterval(() => {
      timeFlag = true;
    }, 21600 * 1000);

    messageListener();
    while (!timeFlag) {
      flag = false;
      res = [];
      startCase();
      while (!flag) {
        await promiseCase();
      }
      console.log(`test while end res ${JSON.stringify(res)}`);

      for (var i = 0; i < res.length; i++) {
        if (res[i] === 'fail') {
          expect(res[i] === 'fail').assertFail();
        } else {
          expect(res[i] === 'pass').assertTrue();
        }
      }
      loopCount++;
      await promiseCase();
    }
    done();
  });
});
