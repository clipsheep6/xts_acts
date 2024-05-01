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
    var sab = new SharedArrayBuffer(2048);
    var good_indices = [(view) => 0 / -1, // -0
                        (view) => '-0',
                        (view) => view.length - 1,
                        (view) => ({ valueOf: () => 0 }),
                        // non-callable valueOf triggers invocation of toString
                        (view) => ({ toString: () => '0', valueOf: false })
                       ];

    var view = new BigInt64Array(sab, 32, 20);

    view[0] = 0n;
    parentPort.postMessage("A " + (await Atomics.waitAsync(view, 0, 0n, 0).value))
    parentPort.postMessage("B " + (await Atomics.waitAsync(view, 0, 37n, 0).value));

    const results = [];
    // In-bounds boundary cases for indexing
    for (let IdxGen of good_indices) {
        let Idx = IdxGen(view);
        view.fill(0n);
        // Atomics.store() computes an index from Idx in the same way as other
        // Atomics operations, not quite like view[Idx].
        Atomics.store(view, Idx, 37n);
        results.push(await Atomics.waitAsync(view, Idx, 0n).value);
    }
    parentPort.postMessage("C " + results.join(","));
}
