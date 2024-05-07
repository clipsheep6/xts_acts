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
import taskpool from '@ohos.taskpool'
import hilog from '@ohos.hilog';
import { describe, afterAll, it, expect } from '@ohos/hypium'

import { check } from './utils.ets';
import {
  taskTaskFunction0,
  DataChainedPath0,
  DataChainedPath2,
  taskTaskFunction2
} from './SendablesChainTestImport.ets';
import { DataChainedPath1, extractDataJob } from './SendablesChainTestImport2.ets';


export default function SendableChainTest() {
    let printLog = 'SendableChainTest:';
    describe('SendableChainTest', () => {

        afterAll(() => {
            console.info(printLog + 'total case over');
        })

        /**
         * @tc.name: testChainedPath0
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('testChainedPath0', 0, async (done: Function) => {
           let result = await testChainedPath0();
           expect(result).assertEqual("PASSED");
           done();
        })

        /**
         * @tc.name: testChainedPath1
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('testChainedPath1', 0, async (done: Function) => {
           let result = await testChainedPath1();
           expect(result).assertEqual("PASSED");
           done();
        })

        /**
         * @tc.name: testChainedPath0Negative
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('testChainedPath0Negative', 0, async (done: Function) => {
           let result = await testChainedPath0Negative();
           expect(result).assertEqual("PASSED");
           done();
        })

        /**
         * @tc.name: testChainedPath0Negative
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('In_Progress_testChainedPath2', 0, async (done: Function) => {
           let result = await testChainedPath2();
           expect(result).assertEqual("PASSED");
           done();
        })
    })
}

/// TESTS IMPLEMENTATION ///

function testChainedPath0(): Promise<string> {
  let p = taskpool.execute(testChainedPath0Impl)
  return check("testChainedPath0", p);
}

async function testChainedPath0Impl() {
  "use concurrent"
  let input: DataChainedPath0 = new DataChainedPath0();
  let taskOne: Promise<taskpool.Task> = taskpool.execute(taskTaskFunction0, input) as Promise<taskpool.Task>;

  let taskTwo = await (taskOne);
  let res1 = taskpool.execute(taskTwo);
  let res = await (res1);
  if (res == 123) {
    return "Test passed";
  }
  throw new Error("Test failed Expected " + 123 + ", but was " + res);
}

function testChainedPath0Negative(): Promise<string> {
  let p = taskpool.execute(testChainedPath0ImplNegative)
  return check("testChainedPath0Negative", p);
}

async function testChainedPath0ImplNegative() {
  "use concurrent"
  let input: DataChainedPath0 = new DataChainedPath0();
  let taskOne: Promise<taskpool.Task> = taskpool.execute(taskTaskFunction0, input) as Promise<taskpool.Task>;

  let taskTwo = await (taskOne);
  let res1 = taskpool.execute(taskTwo);
  let res = await (res1);
  if (res == 321) {
    throw new Error("Test failed expected not " + 321 + ", but was " + res);
  }
  return "Test passed, as expected " + 321 + " not equals " + res;
}

function taskDataFunction1(): DataChainedPath1 {
  "use concurrent"
  let result: DataChainedPath1 = new DataChainedPath1();
  return result;
}

function testChainedPath1(): Promise<string> {
  let p = testChainedPath1Impl()
  return check("testChainedPath1", p);
}

async function testChainedPath1Impl() {
  hilog.info(0x0000, 'UDAV', 'Start testChainedPath1Impl');
  let task1: taskpool.Task = new taskpool.Task(taskDataFunction1);
  hilog.info(0x0000, 'UDAV', 'after new taskpool.Task(taskDataFunction1)');
  let task: Promise<DataChainedPath1> = taskpool.execute(task1) as Promise<DataChainedPath1>;

  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(task1)');
  let input: DataChainedPath1 = await (task) as DataChainedPath1;
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(task1)');
  let res1 = taskpool.execute(extractDataJob, input);
  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(taskTwo)');
  let res: number = await (res1) as number;
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(taskTwo)');
  if (res == 123) {
    hilog.info(0x0000, 'UDAV', 'passed internal check for res == 123');
    return "Test passed";
  }
  hilog.info(0x0000, 'UDAV', 'failed internal check for res == 123');
  throw new Error("Test failed Expected " + 123 + ", but was " + res);
}

function testChainedPath2(): Promise<string> {
  let p = taskpool.execute(testChainedPath2Impl)
  return check("testChainedPath2", p);
}

async function testChainedPath2Impl() {
  "use concurrent"
  let input: DataChainedPath2 = new DataChainedPath2();

  let taskOne: Promise<taskpool.Task> = taskpool.execute(taskTaskFunction2, input) as  Promise<taskpool.Task>;

  let taskTwo = await (taskOne);
  let res1 = taskpool.execute(taskTwo);
  let res = await (res1);
  if (res == 123) {
    return "Test passed";
  }
  throw new Error("Test failed Expected " + 123 + ", but was " + res);
}
