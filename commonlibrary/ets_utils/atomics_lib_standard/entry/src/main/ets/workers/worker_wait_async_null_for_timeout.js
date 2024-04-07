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

parentPort.onmessage = async function (e) {
    const valueOf = {
        valueOf() {
            return null;
        }
    };

    const toPrimitive = {
        [Symbol.toPrimitive]() {
            return null;
        }
    };

    var i32a = e.data;
    Atomics.add(i32a, 1, 1);
    parentPort.postMessage(await Atomics.waitAsync(i32a, 0, 0, null).value);
    parentPort.postMessage(await Atomics.waitAsync(i32a, 0, 0, valueOf).value);
    parentPort.postMessage(await Atomics.waitAsync(i32a, 0, 0, toPrimitive).value);
    parentPort.postMessage(Atomics.waitAsync(i32a, 0, 0, null).value);
    parentPort.postMessage(Atomics.waitAsync(i32a, 0, 0, valueOf).value);
    parentPort.postMessage(Atomics.waitAsync(i32a, 0, 0, toPrimitive).value);
}