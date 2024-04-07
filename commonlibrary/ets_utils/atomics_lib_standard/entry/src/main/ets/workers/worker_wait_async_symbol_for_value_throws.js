/*
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import worker from '@ohos.worker';
const parentPort = worker.parentPort;

const poisonedValueOf = {
  valueOf() {
    throw new Error('should not evaluate this code');
  }
};

const poisonedToPrimitive = {
  [Symbol.toPrimitive]() {
    throw new Error('should not evaluate this code');
  }
};

parentPort.onmessage = async function (e) {
  var i32a = e.data;
  Atomics.add(i32a, 1, 1);
  let status1 = "";
  let status2 = "";

  try {
    Atomics.waitAsync(i32a, 0, Symbol("1"), poisonedValueOf);
  } catch (error) {
    status1 = 'A ' + error.name;
  }
  try {
    Atomics.waitAsync(i32a, 0, Symbol("2"), poisonedToPrimitive);
  } catch (error) {
    status2 = 'B ' + error.name;
  }

  parentPort.postMessage(status1);
  parentPort.postMessage(status2);
}