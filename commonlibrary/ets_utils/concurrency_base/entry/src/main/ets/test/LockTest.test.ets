/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, afterAll, it, expect } from '@ohos/hypium'
import { skipConditional } from './utils'
import { exclusiveSingleTest, exclusiveMultiTest, exclusiveMultiWorkerTest, sharedSingleTest, sharedMultiTest,
  sharedMultiWorkerTest, isAvailableTest, isNotAvailableTest, queryTest, abortTest, twoLocksSingleTest,
  twoThreadsAcquireOwnLocks, multipleWakeupTest, waitForLock, dontWaitForLock, sequentialLock, sequentialLockWorkerTest,
  sequentialLockInf, sequentialLockUnlocked, sequentialLockUnlocked1, sequentialLockUnlocked3,
  fourThreadsApplyForSameLockExclusive, fourThreadsApplyForSameLockShared, acquireLockTwiceSharedSharedAvailable,
  acquireLockTwiceSharedSharedNotAvailable, acquireLockTwiceSharedExclusiveAvailable,
  acquireLockTwiceSharedExclusiveNotAvailable, acquireLockTwiceExclusiveSharedAvailable,
  acquireLockTwiceExclusiveSharedNotAvailable, acquireLockTwiceExclusiveExclusiveAvailable,
  acquireLockTwiceExclusiveExclusiveNotAvailable, pressureTest, disarmTimeoutTest, disarmTimeoutLongAwaitTest } from './LockTest';


export default function LockTest() {
  let printLog = 'LockTest:';
  describe('LockTest', () => {

    afterAll(() => {
      console.info(printLog + 'total case over');
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_001
     * @tc.name: exclusiveSingleTest
     * @tc.desc: checks exclusive single lock
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('exclusiveSingleTest', 0, async (done: Function) => {
      let result: Object = await exclusiveSingleTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_002
     * @tc.name: exclusiveMultiTest
     * @tc.desc: checks exclusive multiple locks
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('exclusiveMultiTest', 0, async (done: Function) => {
      let result: Object = await exclusiveMultiTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_003
     * @tc.name: exclusiveMultiWorkerTest
     * @tc.desc: checks exclusive multiple locks in workers
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('exclusiveMultiWorkerTest', 0, async (done: Function) => {
      let result: Object = await exclusiveMultiWorkerTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_004
     * @tc.name: sharedSingleTest
     * @tc.desc: checks shared single lock
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sharedSingleTest', 0, async (done: Function) => {
      let result: Object = await sharedSingleTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_005
     * @tc.name: sharedMultiTest
     * @tc.desc: checks shared multiple locks
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sharedMultiTest', 0, async (done: Function) => {
      let result: Object = await sharedMultiTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_006
     * @tc.name: sharedMultiWorkerTest
     * @tc.desc: checks shared multiple locks in workers
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sharedMultiWorkerTest', 0, async (done: Function) => {
      let result: Object = await sharedMultiWorkerTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_007
     * @tc.name: isAvailableTest
     * @tc.desc: checks lock option isAvailable set true
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('isAvailableTest', 0, async (done: Function) => {
      let result: Object = await isAvailableTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_008
     * @tc.name: isNotAvailableTest
     * @tc.desc: checks lock option isAvailable set false
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('isNotAvailableTest', 0, async (done: Function) => {
      let result: Object = await isNotAvailableTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_009
     * @tc.name: queryTest
     * @tc.desc: checks lock query
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('queryTest', 0, async (done: Function) => {
      let result: Object = await queryTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_010
     * @tc.name: abortTest
     * @tc.desc: checks lock signal abort
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('abortTest', 0, async (done: Function) => {
      let result: Object = await abortTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_011
     * @tc.name: twoLocksSingleTest
     * @tc.desc: checks two exclusive locks
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('twoLocksSingleTest', 0, async (done: Function) => {
      let result: Object = await twoLocksSingleTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_012
     * @tc.name: twoThreadsAcquireOwnLocks
     * @tc.desc: checks two threads acquiring own exclusive locks
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('twoThreadsAcquireOwnLocks', 0, async (done: Function) => {
      let result: Object = await twoThreadsAcquireOwnLocks();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_013
     * @tc.name: multipleWakeupTest
     * @tc.desc: checks multiple wake ups
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('multipleWakeupTest', 0, async (done: Function) => {
      let result = await multipleWakeupTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_014
     * @tc.name: waitForLock
     * @tc.desc: checks wait for lock
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('waitForLock', 0, async (done: Function) => {
      let result: Object = await waitForLock();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_015
     * @tc.name: dontWaitForLock
     * @tc.desc: checks not waiting for lock
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('dontWaitForLock', 0, async (done: Function) => {
      let result: Object = await dontWaitForLock();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_016
     * @tc.name: sequentialLock
     * @tc.desc: checks sequentially acquiring locks
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sequentialLock', 0, async (done: Function) => {
      let result: Object = await sequentialLock();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_017
     * @tc.name: sequentialLockWorkerTest
     * @tc.desc: checks sequentially acquiring locks in workers
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sequentialLockWorkerTest', 0, async (done: Function) => {
      let result: Object = await sequentialLockWorkerTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_018
     * @tc.name: sequentialLockInf
     * @tc.desc: checks use of sequentially acquiring locks in Atomics
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sequentialLockInf', 0, async (done: Function) => {
      let result: Object = await sequentialLockInf();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_019
     * @tc.name: sequentialLockUnlocked
     * @tc.desc: checks sequentially acquiring unlocked lock
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sequentialLockUnlocked', 0, async (done: Function) => {
      let result: Object = await sequentialLockUnlocked();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_020
     * @tc.name: sequentialLockUnlocked1
     * @tc.desc: checks sequentially acquiring unlocked lock in a special case
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sequentialLockUnlocked1', 0, async (done: Function) => {
      let result: Object = await sequentialLockUnlocked1();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_021
     * @tc.name: sequentialLockUnlocked3
     * @tc.desc: checks sequentially acquiring unlocked lock in yet another special case
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('sequentialLockUnlocked3', 0, async (done: Function) => {
      let result: Object = await sequentialLockUnlocked3();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_022
     * @tc.name: fourThreadsApplyForSameLockExclusive
     * @tc.desc: checks four threads applying same exclusive lock
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('fourThreadsApplyForSameLockExclusive', 0, async (done: Function) => {
      let result: Object = await fourThreadsApplyForSameLockExclusive();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_023
     * @tc.name: fourThreadsApplyForSameLockShared
     * @tc.desc: checks four threads applying same shared lock
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('fourThreadsApplyForSameLockShared', 0, async (done: Function) => {
      let result: Object = await fourThreadsApplyForSameLockShared();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_024
     * @tc.name: acquireLockTwiceSharedSharedAvailable
     * @tc.desc: checks acquiring lock twice with inner and outer mode shared and option isAvailable true
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceSharedSharedAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceSharedSharedAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_025
     * @tc.name: acquireLockTwiceSharedSharedNotAvailable
     * @tc.desc: checks acquiring lock twice with inner and outer mode shared and option isAvailable false
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceSharedSharedNotAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceSharedSharedNotAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_026
     * @tc.name: acquireLockTwiceSharedExclusiveAvailable
     * @tc.desc: checks acquiring lock twice with inner mode exclusive, outer mode shared and option isAvailable true
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceSharedExclusiveAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceSharedExclusiveAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_027
     * @tc.name: acquireLockTwiceSharedExclusiveNotAvailable
     * @tc.desc: checks acquiring lock twice with inner mode exclusive, outer mode shared and option isAvailable false
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceSharedExclusiveNotAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceSharedExclusiveNotAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_028
     * @tc.name: acquireLockTwiceExclusiveSharedAvailable
     * @tc.desc: checks acquiring lock twice with outer mode exclusive, inner mode shared and option isAvailable true
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceExclusiveSharedAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceExclusiveSharedAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_029
     * @tc.name: acquireLockTwiceExclusiveSharedNotAvailable
     * @tc.desc: checks acquiring lock twice with outer mode exclusive, inner mode shared and option isAvailable false
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceExclusiveSharedNotAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceExclusiveSharedNotAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_030
     * @tc.name: acquireLockTwiceExclusiveExclusiveAvailable
     * @tc.desc: checks acquiring lock twice with inner and outer mode exclusive and option isAvailable true
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceExclusiveExclusiveAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceExclusiveExclusiveAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_031
     * @tc.name: acquireLockTwiceExclusiveExclusiveNotAvailable
     * @tc.desc: checks acquiring lock twice with inner and outer mode exclusive and option isAvailable true
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('acquireLockTwiceExclusiveExclusiveNotAvailable', 0, async (done: Function) => {
      let result: Object = await acquireLockTwiceExclusiveExclusiveNotAvailable();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_032
     * @tc.name: pressureTest
     * @tc.desc: checks many threads using async lock simultaneously 
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('pressureTest', 0, async (done: Function) => {
      let result: Object = await pressureTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_033
     * @tc.name: disarmTimeoutTest
     * @tc.desc: checks that callback function is executed without errors after timeout
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('disarmTimeoutTest', 0, async (done: Function) => {
      let result: Object = await disarmTimeoutTest();
      expect(result).assertEqual("PASSED");
      done();
    })

    /**
     * @tc.number: SUB_COMMONLIBRARY_ETSUTILS_CONCURRENCYBASE_ASYNCLOCK_034
     * @tc.name: disarmTimeoutLongAwaitTest
     * @tc.desc: checks that callback function can be properly executed and ends after 3 sec not rejected after 1 sec
     * @tc.author: konstantin-grebenschikov
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level 2
     */
    it('disarmTimeoutLongAwaitTest', 0, async (done: Function) => {
      let result: Object = await disarmTimeoutLongAwaitTest();
      expect(result).assertEqual("PASSED");
      done();
    })

  })
}
