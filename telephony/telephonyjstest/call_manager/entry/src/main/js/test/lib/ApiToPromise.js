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

function printData (caseName, func, data, isPerformence, costTime) {
  console.log(`${caseName} ${toString(func)} success ${toString(data)} ${isPerformence ?
    `,perfomance time cost ${costTime}` : ''}`);
}
function printError (caseName, func, error, isPerformence, costTime) {
  console.log(`${caseName} ${toString(func)} error ${toString(error)} ${isPerformence ?
    `,perfomance time cost ${costTime}` : ''}`);
}
export function toString (data) {
  if (typeof data === 'object') {
    return JSON.stringify(data);
  } else {
    return data;
  }
}

export function apiToPromise (options) {
  // if the system support us time,the arg isPerformence may used
  let {func, caseName, target, isPerformence} = options;
  return function () {
    let arg = arguments;
    let callback = arguments[arguments.length - 1];
    callback = typeof callback === 'function' ? callback : null;
    return new Promise(function (resolve, reject) {
      if (callback) { // if callback is exit ,this use the callback function to implement promise function
        let startTime = null;
        arg[arg.length - 1] = function (error, data) {
          // rewrite the callback,the callback in args is a placeholder function
          let endTime = new Date().getTime();
          const costTime = endTime - startTime;
          if (error) {
            printError(caseName, func, error, isPerformence, costTime);
            if (isPerformence) {
              reject({error, performanceTime:costTime});
            } else {
              reject(error);
            }
            return;
          }
          printData(caseName, func, data, isPerformence, costTime);
          if (isPerformence) { // performence scence
            resolve({data, performanceTime:costTime});
          } else {
            resolve(data);
          }
        };


        if (target) { // use the specific object to run function
          startTime = new Date().getTime();
          target[func](...arg);
        } else { // run the function directly
          startTime = new Date().getTime();
          func(...arg);
        }
      } else { // if callback is not exit ,this use the promise function to implement promise function
        if (target) { // use the specific object to run function
          let startTime = new Date().getTime();
          target[func](...arg).then((data) => {
            let endTime = new Date().getTime();
            const costTime = endTime - startTime;
            printData(caseName, func, data, isPerformence, costTime);
            if (isPerformence) { // performence scence
              resolve({data, performanceTime:costTime});
            } else {
              resolve(data);
            }
          }).catch(error => {
            let endTime = new Date().getTime();
            const costTime = endTime - startTime;
            printError(caseName, func, error, isPerformence, costTime);
            if (isPerformence) { // performence scence
              reject({error, performanceTime:costTime});
            } else {
              reject(error);
            }
          });
        } else { // run the function directly
          let startTime = new Date().getTime();
          func(...arg).then((data) => {
            let endTime = new Date().getTime();
            const costTime = endTime - startTime;
            printData(caseName, func, data, isPerformence, costTime);
            if (isPerformence) { // performence scence
              resolve({data, performanceTime:costTime});
            } else {
              resolve(data);
            }
          }).catch(error => {
            let endTime = new Date().getTime();
            const costTime = endTime - startTime;
            printError(caseName, func, error, isPerformence, costTime);
            if (isPerformence) { // performence scence
              reject({error, performanceTime:costTime});
            } else {
              reject(error);
            }
          });
        }
      }
    });
  };
}
