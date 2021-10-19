
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
import {TEST_PERF_COUNT} from './Const.js';
// packaging the function to the perfomace test function
export function apiToPromisePerfomace (options, args) {
  // arg compareFun use to determine the case is right or fail,and arg perfTime is goal to reach
  let {func, caseName, target, compareFunc, perfTime} = options;
  return new Promise(async (resolve, reject) => {
    let startTime = new Date().getTime();
    let flag = true;
    for (let i = 0;i < TEST_PERF_COUNT;i++) {
      let data = null;
      let error = null;
      try {
        data = await apiToPromise({func, caseName, target})(...args);
      } catch (error) {
        error = error;
      }
      flag = flag && compareFunc(error, data);
    }
    let endTime = new Date().getTime();
    const cost = endTime - startTime;
    console.log(`${caseName} cost ${cost} , and goal is ${perfTime}`);
    if (flag && cost < perfTime) {
      resolve(true);
    } else {
      reject(false);
    }
  });
}