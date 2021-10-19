/**
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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

import {apiToPromise} from './ApiToPromise.js';
import {TEST_RELY_NUMBER} from './Const.js';
// packaging the function to the reliability test function
export function apiToPromiseReliability (options, args) {
  let {func, caseName, target, compareFunc} = options; // arg compareFun use to determine the case is right or fail
  return new Promise(async (resolve, reject) => {
    let flag = true;
    for (let i = 0;i < TEST_RELY_NUMBER;i++) {
      let data = null;
      let error = null;
      try {
        data = await apiToPromise({func, caseName, target})(...args);
      } catch (error) {
        error = error;
      }
      flag = flag && compareFunc(error, data);
    }
    if (flag) {
      resolve(flag);
    } else {
      reject(flag);
    }
  });
}


