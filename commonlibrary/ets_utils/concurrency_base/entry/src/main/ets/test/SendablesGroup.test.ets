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

import { bypassFunction, BypassFunctionType, fillAndBypass } from './BypassFunction.ets';
import { check } from './utils.ets';
import { NumberContainer, NumberContainerArray, ValuedNumberContainer } from './Containers.ets'

export default function SendableGroupTest() {
    let printLog = 'SendableGroupTest:';
    describe('SendableGroupTest', () => {

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
         * @tc.name: testSendablesFromOtherTask
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('Excluded_testSendablesFromOtherTask', 0, async (done: Function) => {
           let result = await testSendablesFromOtherTask();
           expect(result).assertEqual("PASSED");
           done();
        })

        /**
         * @tc.name: testSendablesFromOtherTask_1
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('Excluded_testSendablesFromOtherTask_1', 0, async (done: Function) => {
           let result = await testSendablesFromOtherTask_1();
           expect(result).assertEqual("PASSED");
           done();
        })

        /**
         * @tc.name: testSendableToGroupAndUpdate
         * @tc.desc: checks Sendable with primitive type
         * @tc.author: oleg-ignatenko
         */
        it('Excluded_testSendableToGroupAndUpdate', 0, async (done: Function) => {
           let result = await testSendableToGroupAndUpdate();
           expect(result).assertEqual("PASSED");
           done();
        })
    })
}

function testSendablesFromOtherTask() {
  let p = testSendablesFromOtherTaskImpl();
  return check("testSendablesFromOtherTask", p);
}

function prepareTaskGroup(tasks: number): taskpool.TaskGroup {
  "use concurrent"
  hilog.info(0x0000, 'UDAV', 'Start prepareTaskGroup, tasks number: ' + tasks);
  let group = new taskpool.TaskGroup();
  hilog.info(0x0000, 'UDAV', 'created group in prepareTaskGroup');
  for(let i = 0; i < tasks; i++) {
    hilog.info(0x0000, 'UDAV', 'adding task to group in prepareTaskGroup');
    group.addTask(new taskpool.Task(() => {
      hilog.info(0x0000, 'UDAV', 'creating NumberContainer');
      let data = new NumberContainer();
      return data;
    }));
    hilog.info(0x0000, 'UDAV', 'done adding task to group in prepareTaskGroup');
  }
  hilog.info(0x0000, 'UDAV', 'done prepareTaskGroup');
  return group;
}

async function testSendablesFromOtherTaskImpl() {
  hilog.info(0x0000, 'UDAV', 'Start testSendablesFromOtherTaskImpl');
  let tasks = 20;
  let promiseGroup: Promise<Object> = taskpool.execute(prepareTaskGroup, tasks) as Promise<Object>;
  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(prepareTaskGroup, tasks)');
  let tasksGroup: taskpool.TaskGroup = await (promiseGroup) as taskpool.TaskGroup;
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(prepareTaskGroup, tasks)');

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(tasksGroup)');
  let tr: Object[] = await (p) as Object[];
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed and promised length...");
  hilog.info(0x0000, 'UDAV', 'after checking if tr.length != tasks');
  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 123) continue;
    throw new Error("Data Mismatch passed " + 123 + " and promised " + res);
  }
  return "Test passed";
}

function testSendablesFromOtherTask_1() {
  let p = testSendablesFromOtherTaskImpl_1();
  return check("testSendablesFromOtherTask_1", p);
}

function prepareTaskGroup_1(tasks: number): taskpool.TaskGroup {
  "use concurrent"
  hilog.info(0x0000, 'UDAV', 'Start prepareTaskGroup_1, tasks number: ' + tasks);
  let group = new taskpool.TaskGroup();
  hilog.info(0x0000, 'UDAV', 'created group in prepareTaskGroup_1');
  let data: NumberContainer = new NumberContainer();
  hilog.info(0x0000, 'UDAV', 'created number container in prepareTaskGroup_1');
  for(let i = 0; i < tasks; i++) {
    hilog.info(0x0000, 'UDAV', 'adding task to group in prepareTaskGroup_1');
    group.addTask(new taskpool.Task((data1: NumberContainer) => {
      hilog.info(0x0000, 'UDAV', 'passing NumberContainer');
      return data1;
    }, data));
    hilog.info(0x0000, 'UDAV', 'done adding task to group in prepareTaskGroup_1');
  }
  hilog.info(0x0000, 'UDAV', 'done prepareTaskGroup_1');
  return group;
}

async function testSendablesFromOtherTaskImpl_1() {
  hilog.info(0x0000, 'UDAV', 'Start testSendablesFromOtherTaskImpl_1');
  let tasks = 20;
  let promiseGroup: Promise<Object> = taskpool.execute(prepareTaskGroup_1, tasks) as Promise<Object>;
  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(prepareTaskGroup_1, tasks)');
  let tasksGroup: taskpool.TaskGroup = await (promiseGroup) as taskpool.TaskGroup;
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(prepareTaskGroup_1, tasks)');

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(tasksGroup)');
  let tr: Object[] = await (p) as Object[];
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed and promised length...");
  hilog.info(0x0000, 'UDAV', 'after checking if tr.length != tasks');
  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 123) continue;
    throw new Error("Data Mismatch passed " + 123 + " and promised " + res);
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
  let job: BypassFunctionType<ValuedNumberContainer> = bypassFunction;

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
