/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import app from '@system.app'
import worker from "@ohos.worker"
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function WaitTest() {
    describe('WaitTest', function () {

        afterAll(function () {
            console.info('total case over');
        })

        function promiseCase() {
            let p = new Promise(function (resolve, reject) {
                setTimeout(function () {
                    resolve()
                }, 50)
            }).then(undefined, (error) => {
            })
            return p
        }

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_NOTIFY_001
         * @tc.name    testCommonlibraryAtomicsNotify001
         * @tc.desc    returns a string which is either "ok", "not-equal", or "timed-out".
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         * @tc.author  jiangkai
         */
        it('SUB_COMMONLIBRARY_ATOMICS_NOTIFY_001', 0, async function (done) {
            var sab = new SharedArrayBuffer(20);
            var int32 = new Int32Array(sab);
            var flag = false
            var res = 0;
            var res1 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker010.js");
            let tt = new worker.Worker("entry/ets/workers/worker011.js");
            let uu = new worker.Worker("entry/ets/workers/worker012.js");

            ss.onmessage = function (e) {
                if (e.data == "end") {
                    res++;
                }
                flag = true;
            }
            tt.onmessage = function (e) {
                if (e.data == "end1") {
                    res1++;
                }
                if (e.data == "end2") {
                    res1 += 5;
                }
                flag = true;
            }
            uu.onmessage = function (e) {
                if (e.data == "end") {
                    flag = true;
                }
            }

            ss.onexit = function () {
                flag = true;
            }
            tt.onexit = function () {
                flag = true;
            }
            uu.onexit = function () {
                flag = true;
            }

            ss.postMessage(int32);
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.postMessage(int32);
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            uu.postMessage(int32);
            while (!flag) {
                await promiseCase();
            }

            Atomics.notify(int32, 0, 1);
            Atomics.notify(int32, 2, 1);
            while (res == 0 || res1 == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.terminate();
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            uu.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual(1)
            expect(res1).assertEqual(5)
            done()
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAIT_001
         * @tc.name    testCommonlibraryAtomicsWait001
         * @tc.desc    returns a string which is either "ok", "not-equal", or "timed-out".
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         * @tc.author  jiangkai
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAIT_001', 0, async function (done) {
            var sab = new SharedArrayBuffer(20);
            var flag = false;
            var int32 = new Int32Array(sab);
            var res = 0;
            const ss = new worker.Worker("entry/ets/workers/worker020.js");

            ss.onmessage = function (e) {
                if (e.data != 'wait') {
                    res = e.data;
                }
                flag = true;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(int32);
            while (!flag) {
                await promiseCase();
            }

            flag = false
            Atomics.store(int32, 0, 2);
            Atomics.load(int32, 0);
            Atomics.notify(int32, 0, 1)
            while (!flag) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual(3)
            done()
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_ADD_001
         * @tc.name    testCommonlibraryAtomicsAdd001
         * @tc.desc    returns a string which is either "ok", "not-equal", or "timed-out".
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         * @tc.author  jiangkai
         */
        it('SUB_COMMONLIBRARY_ATOMICS_ADD_001', 0, async function (done) {
            var sab = new SharedArrayBuffer(20);
            var int32 = new Uint32Array(sab);
            int32[0] = 1;
            var flag = false;
            var count = 0;
            let ss = new worker.Worker("entry/ets/workers/worker030.js");
            let tt = new worker.Worker("entry/ets/workers/worker031.js");

            ss.onmessage = function () {
                count += 1;
            }
            tt.onmessage = function () {
                count += 1;
            }

            ss.onexit = function () {
                flag = true;
            }
            tt.onexit = function () {
                flag = true;
            }

            ss.postMessage(sab);
            tt.postMessage(sab);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(int32[0]).assertEqual(21)
            done()
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_001
         * @tc.name    testCommonlibraryAtomicsWaitAsync001
         * @tc.desc    False timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_001', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/false-for-timeout-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_false_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(3);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_002
         * @tc.name    testCommonlibraryAtomicsWaitAsync002
         * @tc.desc    Test Atomics.waitAsync on arrays that allow atomic operations
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_002', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/good-views.js
            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_good_views.js");

            ss.onmessage = function (e) {
                if (e.data == 'A timed-out' || e.data == 'B not-equal'
                    || e.data == 'C not-equal,not-equal,not-equal,not-equal,not-equal') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }
            ss.postMessage("start");
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(3);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_003
         * @tc.name    testCommonlibraryAtomicsWaitAsync003
         * @tc.desc    Undefined timeout arg is coerced to zero
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_003', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/implicit-infinity-for-timeout.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            let { async, value } = Atomics.waitAsync(i32a, 0, 0);

            value.then(result => {
                expect(result).assertEqual("ok");
                done();
            })

            Atomics.notify(i32a, 0);
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_004
         * @tc.name    testCommonlibraryAtomicsWaitAsync004
         * @tc.desc    NaN timeout arg should result in an infinite timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_004', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/nan-for-timeout-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_nan_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == 'ok') {
                    res = e.data;
                }
                flag = true;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }

            flag = false;
            expect(Atomics.notify(i32a, 0)).assertEqual(1);
            while (!flag) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual('ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_005
         * @tc.name    testCommonlibraryAtomicsWaitAsync005
         * @tc.desc    Test that Atomics.waitAsync returns the right result when it timed out
         *             and that the time to time out is reasonable.
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_005', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-no-operation.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_no_operation.js");

            ss.onmessage = function (e) {
                if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_006
         * @tc.name    testCommonlibraryAtomicsWaitAsync006
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Add operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_006', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-add.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.add(i32a, 0, 1);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_007
         * @tc.name    testCommonlibraryAtomicsWaitAsync007
         * @tc.desc    Waiter does not spuriously notify on index which is subject to And operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_007', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-and.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.and(i32a, 0, 1);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_008
         * @tc.name    testCommonlibraryAtomicsWaitAsync008
         * @tc.desc    Waiter does not spuriously notify on index which is subject to compareExchange operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_008', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-compareExchange.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.compareExchange(i32a, 0, 0, 1);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_009
         * @tc.name    testCommonlibraryAtomicsWaitAsync009
         * @tc.desc    Test that Atomics.waitAsync times out with a negative timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_009', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/negative-timeout-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_negative_timeout.js");

            ss.onmessage = function (e) {
                res = e.data;
                flag = true;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_010
         * @tc.name    testCommonlibraryAtomicsWaitAsync010
         * @tc.desc    Waiter does not spuriously notify on index which is subject to exchange operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_010', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-exchange.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.exchange(i32a, 0, 1);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_011
         * @tc.name    testCommonlibraryAtomicsWaitAsync011
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Or operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_011', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-or.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.or(i32a, 0, 1);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_012
         * @tc.name    testCommonlibraryAtomicsWaitAsync012
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Sub operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_012', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-sub.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.sub(i32a, 0, 1);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_013
         * @tc.name    testCommonlibraryAtomicsWaitAsync013
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Store operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_013', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-store.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.store(i32a, 0, 0b1010);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_014
         * @tc.name    testCommonlibraryAtomicsWaitAsync014
         * @tc.desc    Waiter does not spuriously notify on index which is subject to xor operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_014', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/no-spurious-wakeup-on-xor.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.xor(i32a, 0, 1);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_015
         * @tc.name    testCommonlibraryAtomicsWaitAsync015
         * @tc.desc    null timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_015', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/null-for-timeout-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_null_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 6) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(6);
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_016
         * @tc.name    testCommonlibraryAtomicsWaitAsync016
         * @tc.desc    Object valueOf, toString, toPrimitive Zero timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_016', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/object-for-timeout-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_object_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 6) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(6);
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_017
         * @tc.name    testCommonlibraryAtomicsWaitAsync017
         * @tc.desc    Throws a TypeError if timeout arg can not be converted to number
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_017', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/poisoned-object-for-timeout-throws-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_poisoned_object_for_timeout_throws.js");

            ss.onmessage = function (e) {
                if (e.data == 'poisonedValueOf' || e.data == 'poisonedToPrimitive') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_018
         * @tc.name    testCommonlibraryAtomicsWaitAsync018
         * @tc.desc    Atomics.waitAsync returns a result object containing a property named "value"
         *             whose value is a promise that resolves to "ok" and async is true.
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_018', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/returns-result-object-value-is-promise-resolves-to-ok.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 8));

            let { async, value } = Atomics.waitAsync(i32a, 0, 0, 1000);
            expect(async).assertEqual(true);
            expect(value instanceof Promise).assertEqual(true);
            expect(Object.getPrototypeOf(value)).assertEqual(Promise.prototype);

            value.then(outcome => {
                expect(outcome).assertEqual("ok");
                done();
            })

            Atomics.add(i32a, 0, 1);
            Atomics.notify(i32a, 0, 1);
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_019
         * @tc.name    testCommonlibraryAtomicsWaitAsync019
         * @tc.desc    Atomics.waitAsync returns a result object containing a promise that
         *             resolves to "timed-out" and async is true.
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_019', 0, async function (done) {
            // for test/built-ins/Atomics/waitAsync/returns-result-object-value-is-promise-resolves-to-timed-out.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 8));

            let { async, value } = Atomics.waitAsync(i32a, 0, 0, 100);
            value.then(outcome => {
                expect(outcome).assertEqual("timed-out");
                done();
            })
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_020
         * @tc.name    testCommonlibraryAtomicsWaitAsync020
         * @tc.desc    Throws a TypeError if index arg can not be converted to an Integer
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_020', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/symbol-for-index-throws-agent.js 
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_symbol_for_index_throws.js");

            ss.onmessage = function (e) {
                if (e.data == 'A TypeError' || e.data == 'B TypeError') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_021
         * @tc.name    testCommonlibraryAtomicsWaitAsync021
         * @tc.desc    Throws a TypeError if timeout arg can not be converted to an Number
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_021', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/symbol-for-timeout-throws-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_symbol_for_timeout_throws.js");

            ss.onmessage = function (e) {
                if (e.data == 'A TypeError' || e.data == 'B TypeError') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_022
         * @tc.name    testCommonlibraryAtomicsWaitAsync022
         * @tc.desc    Throws a TypeError if value arg is a Symbol
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_022', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/symbol-for-value-throws-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_symbol_for_value_throws.js");

            ss.onmessage = function (e) {
                if (e.data == 'A TypeError' || e.data == 'B TypeError') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_023
         * @tc.name    testCommonlibraryAtomicsWaitAsync023
         * @tc.desc    True timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_023', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/true-for-timeout-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_true_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(3);
            expect(Atomics.notify(i32a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_024
         * @tc.name    testCommonlibraryAtomicsWaitAsync024
         * @tc.desc    True timeout arg should result in an +1 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_024', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/true-for-timeout.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));
            const valueOf = {
                valueOf() {
                    return true;
                }
            };

            const toPrimitive = {
                [Symbol.toPrimitive]() {
                    return true;
                }
            };
            Promise.all([
                Atomics.waitAsync(i32a, 0, 0, true).value,
                Atomics.waitAsync(i32a, 0, 0, valueOf).value,
                Atomics.waitAsync(i32a, 0, 0, toPrimitive).value,
            ]).then((results) => {
                expect(results[0]).assertEqual("timed-out");
                expect(results[1]).assertEqual("timed-out");
                expect(results[2]).assertEqual("timed-out");
                done();
            });
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_025
         * @tc.name    testCommonlibraryAtomicsWaitAsync025
         * @tc.desc    Undefined timeout arg is coerced to zero
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_025', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/undefined-for-timeout-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var result1 = 0;
            var result2 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_undefined_for_timeout01.js");
            let tt = new worker.Worker("entry/ets/workers/worker_wait_async_undefined_for_timeout02.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result1 = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            tt.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result2 = e.data;
                }
            }

            tt.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            expect(Atomics.notify(i32a, 0, 2)).assertEqual(2);
            while (result1 == 0 || result2 == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(result1).assertEqual('A ok');
            expect(result2).assertEqual('B ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_026
         * @tc.name    testCommonlibraryAtomicsWaitAsync026
         * @tc.desc    Undefined timeout arg is coerced to zero
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_026', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/undefined-for-timeout.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            const valueOf = {
                valueOf() {
                    return undefined;
                }
            };

            const toPrimitive = {
                [Symbol.toPrimitive]() {
                    return undefined;
                }
            };

            Promise.all([
                Atomics.waitAsync(i32a, 0, 0).value,
                Atomics.waitAsync(i32a, 0, 0, undefined).value,
                Atomics.waitAsync(i32a, 0, 0, valueOf).value,
                Atomics.waitAsync(i32a, 0, 0, toPrimitive).value
            ]).then((results) => {
                expect(results[0]).assertEqual("ok");
                expect(results[1]).assertEqual("ok");
                expect(results[2]).assertEqual("ok");
                expect(results[3]).assertEqual("ok");
                done();
            });
            Atomics.notify(i32a, 0);
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_027
         * @tc.name    testCommonlibraryAtomicsWaitAsync027
         * @tc.desc    Undefined index arg is coerced to zero
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_027', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/undefined-index-defaults-to-zero-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var result1 = 0;
            var result2 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_undefined_index_defaults_to_zero01.js");
            let tt = new worker.Worker("entry/ets/workers/worker_wait_async_undefined_index_defaults_to_zero02.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result1 = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            tt.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result2 = e.data;
                }
            }

            tt.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }
            expect(Atomics.notify(i32a, 0, 2)).assertEqual(2);
            while (result1 == 0 || result2 == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(result1).assertEqual('A ok');
            expect(result2).assertEqual('B ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_028
         * @tc.name    testCommonlibraryAtomicsWaitAsync028
         * @tc.desc    Test that Atomics.waitAsync returns the right result when it was awoken before a timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_028', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/was-woken-before-timeout.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var result = 0;
            var lapse = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_was_woken_before_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else if (e.data == "ok") {
                    result = e.data;
                } else {
                    lapse = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (!flag) {
                await promiseCase();
            }

            expect(Atomics.notify(i32a, 0)).assertEqual(1);
            while (result == 0 || lapse == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual('ok');
            expect(lapse < 10000).assertEqual(true);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_029
         * @tc.name    testCommonlibraryAtomicsWaitAsync029
         * @tc.desc    Returns "not-equal" when value arg does not match an index in the typedArray
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_029', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/value-not-equal-agent.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var res = 0;
            var res2 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_value_not_equal.js");

            ss.onmessage = function (e) {
                if (e.data == "not-equal") {
                    res = e.data;
                } else {
                    res2 = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i32a);
            while (res == 0 || res2 == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual('not-equal');
            expect(res2).assertEqual(42);
            expect(Atomics.notify(i32a, 0, 1)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_030
         * @tc.name    testCommonlibraryAtomicsWaitAsync030
         * @tc.desc    False timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_030', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/false-for-timeout-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_false_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 6) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(6);
            expect(Atomics.notify(i64a, 0, 1)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_031
         * @tc.name    testCommonlibraryAtomicsWaitAsync031
         * @tc.desc    Get the correct WaiterList
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_031', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/waiterlist-block-indexedposition-wake.js
            const i32a = new Int32Array(new SharedArrayBuffer(Int32Array.BYTES_PER_ELEMENT * 5));

            var flag1 = false;
            var flag2 = false;
            var result1 = 0;
            var result2 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_waiterlist_block_indexed_position_wake01.js");
            let tt = new worker.Worker("entry/ets/workers/worker_wait_async_waiterlist_block_indexed_position_wake02.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag1 = true;
                } else {
                    result1 = e.data;
                }
            }

            ss.onexit = function () {
                flag1 = true;
            }

            tt.onmessage = function (e) {
                if (e.data == "success") {
                    flag2 = true;
                } else {
                    result2 = e.data;
                }
            }

            tt.onexit = function () {
                flag2 = true;
            }

            ss.postMessage(i32a);
            while (!flag1) {
                await promiseCase();
            }

            tt.postMessage(i32a);
            while (!flag2) {
                await promiseCase();
            }
            flag1 = false;
            flag2 = false;
            expect(Atomics.notify(i32a, 1)).assertEqual(0);
            expect(Atomics.notify(i32a, 3)).assertEqual(0);
            expect(Atomics.notify(i32a, 2)).assertEqual(1);
            expect(Atomics.notify(i32a, 0)).assertEqual(1);
            while (result1 == 0 || result2 == 0 || !flag1 || !flag2) {
                await promiseCase();
            }

            expect(result1).assertEqual('ok');
            expect(result2).assertEqual('ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_032
         * @tc.name    testCommonlibraryAtomicsWaitAsync032
         * @tc.desc    Test Atomics.waitAsync on arrays that allow atomic operations
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_032', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/good-views.js
            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_good_views.js");

            ss.onmessage = function (e) {
                if (e.data == 'A timed-out' || e.data == 'B not-equal'
                    || e.data == 'C not-equal,not-equal,not-equal,not-equal,not-equal') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }
            ss.postMessage("start");
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(3);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_033
         * @tc.name    testCommonlibraryAtomicsWaitAsync033
         * @tc.desc    NaN timeout arg should result in an infinite timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_033', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/nan-for-timeout-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_nan_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == 'ok') {
                    res = e.data;
                }
                flag = true;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }

            flag = false;
            expect(Atomics.notify(i64a, 0)).assertEqual(1);
            while (!flag) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual('ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_034
         * @tc.name    testCommonlibraryAtomicsWaitAsync034
         * @tc.desc    Test that Atomics.waitAsync times out with a negative timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_034', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/negative-timeout-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_negative_timeout.js");

            ss.onmessage = function (e) {
                res = e.data;
                flag = true;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_035
         * @tc.name    testCommonlibraryAtomicsWaitAsync035
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Add operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_035', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-add.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.add(i64a, 0, 1n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_036
         * @tc.name    testCommonlibraryAtomicsWaitAsync036
         * @tc.desc    Test that Atomics.waitAsync returns the right result when it timed out
         *             and that the time to time out is reasonable.
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_036', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-no-operation.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_no_operation.js");

            ss.onmessage = function (e) {
                if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_037
         * @tc.name    testCommonlibraryAtomicsWaitAsync037
         * @tc.desc    Waiter does not spuriously notify on index which is subject to compareExchange operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_037', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-compareExchange.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.compareExchange(i64a, 0, 0n, 1n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_038
         * @tc.name    testCommonlibraryAtomicsWaitAsync038
         * @tc.desc    Waiter does not spuriously notify on index which is subject to exchange operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_038', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-exchange.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.exchange(i64a, 0, 1n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_039
         * @tc.name    testCommonlibraryAtomicsWaitAsync039
         * @tc.desc    Waiter does not spuriously notify on index which is subject to And operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_039', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-and.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.and(i64a, 0, 1n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_040
         * @tc.name    testCommonlibraryAtomicsWaitAsync040
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Store operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_040', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-store.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.store(i64a, 0, 0b1010n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_041
         * @tc.name    testCommonlibraryAtomicsWaitAsync041
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Or operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_041', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-or.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.or(i64a, 0, 1n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_042
         * @tc.name    testCommonlibraryAtomicsWaitAsync042
         * @tc.desc    Waiter does not spuriously notify on index which is subject to xor operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_042', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-xor.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.xor(i64a, 0, 1n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_043
         * @tc.name    testCommonlibraryAtomicsWaitAsync043
         * @tc.desc    Waiter does not spuriously notify on index which is subject to Sub operation
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_043', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/no-spurious-wakeup-on-sub.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var res = 0;
            var lapse = 0;
            var count = 0;
            const ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_no_spurious_wakeup_on_add.js");

            ss.onmessage = function (e) {
                if (e.data == 'success') {
                    flag = true;
                } else if (e.data == 'timed-out') {
                    res = e.data;
                } else {
                    lapse = e.data;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            Atomics.sub(i64a, 0, 1n);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(lapse >= 200).assertEqual(true);
            expect(res).assertEqual('timed-out');
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_044
         * @tc.name    testCommonlibraryAtomicsWaitAsync044
         * @tc.desc    null timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_044', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/null-for-timeout-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));
            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_null_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 6) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(6);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_045
         * @tc.name    testCommonlibraryAtomicsWaitAsync045
         * @tc.desc    Object valueOf, toString, toPrimitive Zero timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_045', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/object-for-timeout-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_object_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 6) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(6);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_046
         * @tc.name    testCommonlibraryAtomicsWaitAsync046
         * @tc.desc    Throws a TypeError if index arg can not be converted to an Integer
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_046', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/symbol-for-index-throws-agent.js 
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_symbol_for_index_throws.js");

            ss.onmessage = function (e) {
                if (e.data == 'A TypeError' || e.data == 'B TypeError') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_047
         * @tc.name    testCommonlibraryAtomicsWaitAsync047
         * @tc.desc    Throws a TypeError if timeout arg can not be converted to number
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_047', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/poisoned-object-for-timeout-throws-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_poisoned_object_for_timeout_throws");

            ss.onmessage = function (e) {
                if (e.data == 'poisonedValueOf' || e.data == 'poisonedToPrimitive') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_048
         * @tc.name    testCommonlibraryAtomicsWaitAsync048
         * @tc.desc    Throws a TypeError if timeout arg can not be converted to an Number
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_048', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/symbol-for-timeout-throws-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_symbol_for_timeout_throws.js");

            ss.onmessage = function (e) {
                if (e.data == 'A TypeError' || e.data == 'B TypeError') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_049
         * @tc.name    testCommonlibraryAtomicsWaitAsync049
         * @tc.desc    Throws a TypeError if value arg is a Symbol
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_049', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/symbol-for-value-throws-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_symbol_for_value_throws.js");

            ss.onmessage = function (e) {
                if (e.data == 'A TypeError' || e.data == 'B TypeError') {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 2) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(2);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_050
         * @tc.name    testCommonlibraryAtomicsWaitAsync050
         * @tc.desc    True timeout arg should result in an +0 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_050', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/true-for-timeout-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var count = 0;
            var result = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_true_for_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "timed-out") {
                    result++;
                }
                count++;
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (count != 3) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual(3);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_051
         * @tc.name    testCommonlibraryAtomicsWaitAsync051
         * @tc.desc    True timeout arg should result in an +1 timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_051', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/true-for-timeout.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            const valueOf = {
                valueOf() {
                    return true;
                }
            };
            const toPrimitive = {
                [Symbol.toPrimitive]() {
                    return true;
                }
            };
            Promise.all([
                Atomics.waitAsync(i64a, 0, 0n, true).value,
                Atomics.waitAsync(i64a, 0, 0n, valueOf).value,
                Atomics.waitAsync(i64a, 0, 0n, toPrimitive).value
            ]).then((results) => {
                expect(results[0]).assertEqual("timed-out");
                expect(results[1]).assertEqual("timed-out");
                expect(results[2]).assertEqual("timed-out");
                done();
            });
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_052
         * @tc.name    testCommonlibraryAtomicsWaitAsync052
         * @tc.desc    Undefined timeout arg is coerced to zero
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_052', 0, async function (done) {
            // test262/data/test/built-ins/Atomics/waitAsync/bigint/undefined-for-timeout-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var result1 = 0;
            var result2 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_undefined_for_timeout01.js");
            let tt = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_undefined_for_timeout02.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result1 = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            tt.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result2 = e.data;
                }
            }

            tt.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            expect(Atomics.notify(i64a, 0, 2)).assertEqual(2);
            while (result1 == 0 || result2 == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(result1).assertEqual('A ok');
            expect(result2).assertEqual('B ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_053
         * @tc.name    testCommonlibraryAtomicsWaitAsync053
         * @tc.desc    Undefined timeout arg is coerced to zero
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_053', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/undefined-for-timeout.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            const valueOf = {
                valueOf() {
                    return undefined;
                }
            };

            const toPrimitive = {
                [Symbol.toPrimitive]() {
                    return undefined;
                }
            };

            Promise.all([
                Atomics.waitAsync(i64a, 0, 0n).value,
                Atomics.waitAsync(i64a, 0, 0n, undefined).value,
                Atomics.waitAsync(i64a, 0, 0n, valueOf).value,
                Atomics.waitAsync(i64a, 0, 0n, toPrimitive).value
            ]).then((results) => {
                expect(results[0]).assertEqual("ok");
                expect(results[1]).assertEqual("ok");
                expect(results[2]).assertEqual("ok");
                expect(results[3]).assertEqual("ok");
                done();
            });
            Atomics.notify(i64a, 0);
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_054
         * @tc.name    testCommonlibraryAtomicsWaitAsync054
         * @tc.desc    Undefined index arg is coerced to zero
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_054', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/undefined-index-defaults-to-zero-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var result1 = 0;
            var result2 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_undefined_index_defaults_to_zero01.js");
            let tt = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_undefined_index_defaults_to_zero02.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result1 = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            tt.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else {
                    result2 = e.data;
                }
            }

            tt.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }
            expect(Atomics.notify(i64a, 0, 2)).assertEqual(2);
            while (result1 == 0 || result2 == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }
            flag = false;
            tt.terminate();
            while (!flag) {
                await promiseCase();
            }

            expect(result1).assertEqual('A ok');
            expect(result2).assertEqual('B ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_055
         * @tc.name    testCommonlibraryAtomicsWaitAsync055
         * @tc.desc    Returns "not-equal" when value arg does not match an index in the typedArray
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_055', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/value-not-equal-agent.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var res = 0;
            var res2 = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_value_not_equal.js");

            ss.onmessage = function (e) {
                if (e.data == "not-equal") {
                    res = e.data;
                } else {
                    res2 = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (res == 0 || res2 == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(res).assertEqual('not-equal');
            expect(res2 == 42n).assertEqual(true);
            expect(Atomics.notify(i64a, 0, 1)).assertEqual(0);
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_056
         * @tc.name    testCommonlibraryAtomicsWaitAsync056
         * @tc.desc    Get the correct WaiterList
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_056', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/waiterlist-block-indexedposition-wake.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 5));

            var flag1 = false;
            var flag2 = false;
            var result1 = 0;
            var result2 = 0;
            let ss = new worker.Worker(
                "entry/ets/workers/worker_wait_async_bigint_waiterlist_block_indexed_position_wake01.js");
            let tt = new worker.Worker(
                "entry/ets/workers/worker_wait_async_bigint_waiterlist_block_indexed_position_wake02.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag1 = true;
                } else {
                    result1 = e.data;
                }
            }

            ss.onexit = function () {
                flag1 = true;
            }

            tt.onmessage = function (e) {
                if (e.data == "success") {
                    flag2 = true;
                } else {
                    result2 = e.data;
                }
            }

            tt.onexit = function () {
                flag2 = true;
            }

            ss.postMessage(i64a);
            while (!flag1) {
                await promiseCase();
            }

            tt.postMessage(i64a);
            while (!flag2) {
                await promiseCase();
            }
            flag1 = false;
            flag2 = false;
            expect(Atomics.notify(i64a, 1)).assertEqual(0);
            expect(Atomics.notify(i64a, 3)).assertEqual(0);
            expect(Atomics.notify(i64a, 2)).assertEqual(1);
            expect(Atomics.notify(i64a, 0)).assertEqual(1);
            while (result1 == 0 || result2 == 0 || !flag1 || !flag2) {
                await promiseCase();
            }

            expect(result1).assertEqual('ok');
            expect(result2).assertEqual('ok');
            done();
        })

        /**
         * @tc.number  SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_057
         * @tc.name    testCommonlibraryAtomicsWaitAsync057
         * @tc.desc    Test that Atomics.waitAsync returns the right result when it was awoken before a timeout
         * @tc.size    MediumTest
         * @tc.type    Function
         * @tc.level   Level 2
         */
        it('SUB_COMMONLIBRARY_ATOMICS_WAITASYNC_057', 0, async function (done) {
            // for test262/data/test/built-ins/Atomics/waitAsync/bigint/was-woken-before-timeout.js
            const i64a = new BigInt64Array(new SharedArrayBuffer(BigInt64Array.BYTES_PER_ELEMENT * 4));

            var flag = false;
            var result = 0;
            var lapse = 0;
            let ss = new worker.Worker("entry/ets/workers/worker_wait_async_bigint_was_woken_before_timeout.js");

            ss.onmessage = function (e) {
                if (e.data == "success") {
                    flag = true;
                } else if (e.data == "ok") {
                    result = e.data;
                } else {
                    lapse = e.data;
                }
            }

            ss.onexit = function () {
                flag = true;
            }

            ss.postMessage(i64a);
            while (!flag) {
                await promiseCase();
            }

            expect(Atomics.notify(i64a, 0)).assertEqual(1);
            while (result == 0 || lapse == 0) {
                await promiseCase();
            }

            flag = false;
            ss.terminate()
            while (!flag) {
                await promiseCase();
            }

            expect(result).assertEqual('ok');
            expect(lapse < 10000).assertEqual(true);
            expect(Atomics.notify(i64a, 0)).assertEqual(0);
            done();
        })
    })
}
