/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { AsyncLock } from '@ohos.locks';

export default function LocksTest() {
  function sleep(seconds) {
    return new Promise((resolve) => {
      setTimeout(() => {
        resolve(seconds);
      }, seconds * 1000);
    });
  }

  describe('AsyncLockTest', function () {
    it('AsyncLockTest001', 0, async function (done) {
      let asyncLock = AsyncLock.request('default');
      let result = 0;

      asyncLock.lockAsync('exclusive', async () => {
        result += await sleep(1);
        expect(result).assertEqual(1);
        result += await sleep(1);
        expect(result).assertEqual(2);
      });

      asyncLock.lockAsync('exclusive', async () => {
        result += await sleep(1);
        expect(result).assertEqual(3);
        done();
      });

      expect(result).assertEqual(0);
    });

    it('AsyncLockTest002', 0, async function (done) {
      let asyncLock = new AsyncLock();
      let result = 0;

      asyncLock.lockAsync('exclusive', async () => {
        result += await sleep(1);
        expect(result).assertEqual(1);
        result += await sleep(1);
        expect(result).assertEqual(2);
      });

      asyncLock.lockAsync('exclusive', async () => {
        result += await sleep(1);
        expect(result).assertEqual(3);
        done();
      });

      expect(result).assertEqual(0);
    });
  });

  // describe('AsyncLockCallbackTest', function () {
  //   function sleep(seconds) {
  //     return new Promise((resolve) => {
  //       setTimeout(() => {
  //         resolve(seconds);
  //       }, seconds * 1000);
  //     });
  //   }

  //   it('Demo: add', 0, async function (done) {
  //     let res = locks.LockManager.add(1, 2);

  //     expect(res).assertEqual(3);

  //     done();
  //   });

  //   it('AsyncLockCallbackTest000', 0, async function (done) {
  //     let res = 0;

  //     locks.LockManager.test(() => {
  //       res = 1;
  //     });

  //     expect(res).assertEqual(0);

  //     done();
  //   });

  //   it('AsyncLockCallbackTest001', 0, async function (done) {
  //     let res = 0;

  //     locks.LockManager.test(async () => {
  //       res = 1;
  //     });

  //     expect(res).assertEqual(0);

  //     done();
  //   });

  //   it('AsyncLockCallbackTest002', 0, async function (done) {
  //     let res = 0;

  //     await locks.LockManager.test(async () => {
  //       res = 1;
  //     });

  //     expect(res).assertEqual(1);

  //     done();
  //   });

  //   it('AsyncLockCallbackTest003', 0, async function (done) {
  //     let res = 0;

  //     res = await locks.LockManager.test(async () => {
  //       return 1;
  //     });

  //     expect(res).assertEqual(1);

  //     done();
  //   });

  //   it('AsyncLockCallbackTest004', 0, async function (done) {
  //     let res = 0;

  //     res = await locks.LockManager.test(async () => {
  //       return sleep(1);
  //     });

  //     expect(res).assertEqual(1);

  //     done();
  //   });

  //   it('AsyncLockCallbackTest005', 0, async function (done) {
  //     let res = 0;

  //     res = await locks.LockManager.test(async () => {
  //       return await sleep(1);
  //     });

  //     expect(res).assertEqual(1);

  //     done();
  //   });

  //   // FIXME: remove the following
  //   it('AsyncLockCallbackTest006', 0, async function (done) {
  //     let res = 0;
  //     let res0 = 0;

  //     res = await locks.LockManager.test(async () => {
  //       let res = await sleep(1);
  //       res0 = 1;
  //       return res;
  //     }, true);

  //     expect(res).assertEqual(2);
  //     expect(res0).assertEqual(1);

  //     done();
  //   });
  // });
}
