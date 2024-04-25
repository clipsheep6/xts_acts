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
import { describe, afterAll, it, expect } from '@ohos/hypium'

import { check } from './utils.ets';
import { BypassFunctionType, fillAndBypass, allocateAndBypassFunction } from './BypassFunction.ets';
import { Allocator } from './Ring.ets'
import { NumberContainer, NumberContainerArray, ValuedNumberContainer } from './Containers.ets'

export default function SendableGroupWithAllocTest() {
    let printLog = 'SendableGroupWithAllocTest:';
    describe('SendableGroupWithAllocTest', () => {

        afterAll(() => {
            console.info(printLog + 'total case over');
        })

        /**
         * @tc.name: testManySendablesToGroup
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('testManySendablesToGroup', 0, async (done: Function) => {
           let result = await testManySendablesToGroup();
           expect(result).assertEqual("PASSED");
           done();
        })

        /**
         * @tc.name: testManySendablesToGroupWithAlloc
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it("Excluded_" + "testSendableToGroupAndUpdateWithAlloc", 0, async (done: Function) => {
           let result = await testSendableToGroupAndUpdate();
           expect(result).assertEqual("PASSED");
           done();
        })

        /**
         * @tc.name: testManySendablesToGroupWithAlloc
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it("Excluded_" + "testSendablesFromOtherTaskWithAlloc", 0, async (done: Function) => {
           let result = await testSendablesFromOtherTaskWithAlloc();
           expect(result).assertEqual("PASSED");
           done();
        })

    })
}


function testSendablesFromOtherTaskWithAlloc() {
  let p = testSendablesFromOtherTaskWithAllocImpl();
  return check("testSendablesFromOtherTaskWithAlloc", p);
}

function allocateAndPrepareTaskGroup(): taskpool.TaskGroup {
  "use concurrent"
  Allocator.allocate();
  let group = new taskpool.TaskGroup();
  let data = new NumberContainer();
  let job: BypassFunctionType<NumberContainer> = allocateAndBypassFunction;
  for(let i = 0; i < 20; i++) {
    group.addTask(new taskpool.Task(job, data))
  }
  return group;
  return group;
}

async function testSendablesFromOtherTaskWithAllocImpl() {
  let tasks = 20;
  let root = new taskpool.Task(allocateAndPrepareTaskGroup);
  let tasksGroup: taskpool.TaskGroup = await taskpool.execute(root) as taskpool.TaskGroup;

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  let tr: NumberContainer[] = await (p) as NumberContainer[];

  if(tr.length != tasks) throw new Error("Mismatch passed and promised length...");
  for(let i = 0; i < tasks; i++) {
    if(tr[i].data == 123) continue;
    throw new Error("Data Mismatch passed and promised")
  }
  return "Test passed";
}

function testManySendablesToGroup() {
  let p = taskpool.execute(testManySendablesToGroupImpl)
  return check("testManySendablesToGroup", p);
}

async function testManySendablesToGroupImpl(): Promise<string> {
  "use concurrent"
  let data: ValuedNumberContainer[] = [];
  let tasks = 20;
  let tasksGroup: taskpool.TaskGroup = new taskpool.TaskGroup();
  let job: BypassFunctionType<ValuedNumberContainer> = allocateAndBypassFunction;

  for(let i = 0; i < tasks; i++) {
    let vc = new ValuedNumberContainer(i);
    data.push(vc);
    tasksGroup.addTask(new taskpool.Task(job, vc));

  }

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  let tr: ValuedNumberContainer[] = await (p) as ValuedNumberContainer[];
  if(tr.length != tasks) throw new Error("Mismatch passed and promised length...");
  for(let i = 0; i < tasks; i++) {
    if(tr[i].data == data[i].data) continue;
    throw new Error("Data Mismatch passed and promised")
  }

  return "Test passed";
}

function testSendableToGroupAndUpdate() {
  let p = taskpool.execute(testSendableToGroupAndUpdateImpl)
  return check("testSendableToGroupAndUpdate", p);
}

async function testSendableToGroupAndUpdateImpl(): Promise<string> {
  "use concurrent"
  let tasks = 20;
  let data: NumberContainerArray = new NumberContainerArray();
  let containersArray: NumberContainer[] = new Array(tasks);
  for(let i = 0; i < tasks; i++) {
    containersArray[i] = new NumberContainer();
  }
  data.data = containersArray;

  let tasksGroup: taskpool.TaskGroup = new taskpool.TaskGroup();
  for(let i = 0; i < tasks; i++) {
    tasksGroup.addTask(new taskpool.Task(fillAndBypass, data, i));
  }

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);

  let tr: NumberContainer[] = await (p) as NumberContainer[];
  if(tr.length != tasks) throw new Error("Mismatch passed and promised length...");
  for(let i = 0; i < tasks; i++) {
    if(tr[i].data == containersArray[i].data) continue;
    throw new Error("Data Mismatch at " + i + ", expected " + containersArray[i].data + " and got " + tr[i].data);
  }
  return "Test passed";
}
