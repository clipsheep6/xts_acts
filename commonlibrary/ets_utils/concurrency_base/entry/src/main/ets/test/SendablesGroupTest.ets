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
import { bypassFunction, BypassFunctionType, fillAndBypassContainer } from './BypassFunction';
import { check } from './utils';
import { NumberContainer, ValuedNumberContainer } from './Containers'
import { createNumberContainer, bypassNumberContainer } from './SendablesGroupTestImport'

export function testSendablesFromOtherTask() {
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
    let task: taskpool.Task = new taskpool.Task((): NumberContainer => {
      hilog.info(0x0000, 'UDAV', 'creating NumberContainer');
      let data = new NumberContainer();
      return data;
    });
    hilog.info(0x0000, 'UDAV', 'done creating task in prepareTaskGroup');
    group.addTask(task);
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
  let tr: NumberContainer[] = await (p) as NumberContainer[];
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  hilog.info(0x0000, 'UDAV', 'after checking if tr.length != tasks');
  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 12345678) continue;
    throw new Error("Data Mismatch passed " + 12345678 + " and promised " + res.data);
  }
  return "Test passed";
}

export function testSendablesFromOtherTask_1() {
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
    let task: taskpool.Task = new taskpool.Task((data1: NumberContainer) => {
      hilog.info(0x0000, 'UDAV', 'passing NumberContainer');
      return data1;
    }, data);
    hilog.info(0x0000, 'UDAV', 'done creating task in prepareTaskGroup_1');
    group.addTask(task);
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
  let tr: NumberContainer[] = await (p) as NumberContainer[];
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  hilog.info(0x0000, 'UDAV', 'after checking if tr.length != tasks');
  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 12345678) continue;
    throw new Error("Data Mismatch passed " + 12345678 + " and promised " + res.data);
  }
  return "Test passed";
}

export function testSendablesFromOtherTask_2() {
  let p = testSendablesFromOtherTaskImpl_2();
  return check("testSendablesFromOtherTask_2", p);
}

function prepareTaskGroup_2(tasks: number): taskpool.TaskGroup {
  "use concurrent"
  hilog.info(0x0000, 'UDAV', 'Start prepareTaskGroup_2, tasks number: ' + tasks);
  let group = new taskpool.TaskGroup();
  hilog.info(0x0000, 'UDAV', 'created group in prepareTaskGroup');
  for(let i = 0; i < tasks; i++) {
    hilog.info(0x0000, 'UDAV', 'adding task to group in prepareTaskGroup');
    let task: taskpool.Task = new taskpool.Task(createNumberContainer);
    hilog.info(0x0000, 'UDAV', 'done creating task in prepareTaskGroup');
    group.addTask(task);
    hilog.info(0x0000, 'UDAV', 'done adding task to group in prepareTaskGroup');
  }
  hilog.info(0x0000, 'UDAV', 'done prepareTaskGroup_2');
  return group;
}

async function testSendablesFromOtherTaskImpl_2() {
  hilog.info(0x0000, 'UDAV', 'Start testSendablesFromOtherTaskImpl_2');
  let tasks = 20;
  let promiseGroup: Promise<Object> = taskpool.execute(prepareTaskGroup_2, tasks) as Promise<Object>;
  hilog.info(0x0000, 'UDAV', 'after_2 taskpool.execute(prepareTaskGroup_2, tasks)');
  let tasksGroup: taskpool.TaskGroup = await (promiseGroup) as taskpool.TaskGroup;
  hilog.info(0x0000, 'UDAV', 'after_2 await taskpool.execute(prepareTaskGroup, tasks)');

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  hilog.info(0x0000, 'UDAV', 'after_2 taskpool.execute(tasksGroup)');
  let tr: NumberContainer[] = await (p) as NumberContainer[];
  hilog.info(0x0000, 'UDAV', 'after_2 await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  hilog.info(0x0000, 'UDAV', 'after_2 checking if tr.length != tasks');
  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 12345678) continue;
    throw new Error("Data Mismatch passed " + 12345678 + " and promised " + res);
  }
  return "Test passed";
}

export function testSendablesFromOtherTask_2_1() {
  let p = testSendablesFromOtherTaskImpl_2_1();
  return check("testSendablesFromOtherTask_2_1", p);
}

function prepareTaskGroup_2_1(tasks: number): taskpool.TaskGroup {
  hilog.info(0x0000, 'UDAV', 'Start prepareTaskGroup_2_1, tasks number: ' + tasks);
  let group = new taskpool.TaskGroup();
  hilog.info(0x0000, 'UDAV', 'created group in prepareTaskGroup');
  for(let i = 0; i < tasks; i++) {
    hilog.info(0x0000, 'UDAV', 'adding task to group in prepareTaskGroup');
    let task: taskpool.Task = new taskpool.Task(createNumberContainer);
    hilog.info(0x0000, 'UDAV', 'done creating task in prepareTaskGroup');
    group.addTask(task);
    hilog.info(0x0000, 'UDAV', 'done adding task to group in prepareTaskGroup');
  }
  hilog.info(0x0000, 'UDAV', 'done prepareTaskGroup_2_1');
  return group;
}

async function testSendablesFromOtherTaskImpl_2_1() {
  hilog.info(0x0000, 'UDAV', 'Start testSendablesFromOtherTaskImpl_2_1');
  let tasks = 20;

  let tasksGroup: taskpool.TaskGroup = prepareTaskGroup_2_1(tasks) as taskpool.TaskGroup;
  hilog.info(0x0000, 'UDAV', 'after_2_1 await taskpool.execute(prepareTaskGroup, tasks)');

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  hilog.info(0x0000, 'UDAV', 'after_2_1 taskpool.execute(tasksGroup)');

  let tr: NumberContainer[] = await (p) as NumberContainer[];
  hilog.info(0x0000, 'UDAV', 'after_2_1 await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  hilog.info(0x0000, 'UDAV', 'after_2_1 checking if tr.length != tasks');

  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 12345678) continue;
    throw new Error("Data Mismatch passed " + 12345678 + " and promised " + res.data);
  }
  return "Test passed";
}

export function testSendablesFromOtherTask_3() {
  let p = testSendablesFromOtherTaskImpl_3();
  return check("testSendablesFromOtherTask_3", p);
}

function prepareTaskGroup_3(tasks: number): taskpool.TaskGroup {
  "use concurrent"
  hilog.info(0x0000, 'UDAV', 'Start prepareTaskGroup_3, tasks number: ' + tasks);
  let group = new taskpool.TaskGroup();
  hilog.info(0x0000, 'UDAV', 'created group in prepareTaskGroup_3');
  let data: NumberContainer = new NumberContainer();
  hilog.info(0x0000, 'UDAV', 'created number container in prepareTaskGroup_3');
  for(let i = 0; i < tasks; i++) {
    hilog.info(0x0000, 'UDAV', 'adding task to group in prepareTaskGroup_3');
    let task: taskpool.Task = new taskpool.Task(bypassNumberContainer, data);
    hilog.info(0x0000, 'UDAV', 'done creating task in prepareTaskGroup_3');
    group.addTask(task);
    hilog.info(0x0000, 'UDAV', 'done adding task to group in prepareTaskGroup_3');
  }
  hilog.info(0x0000, 'UDAV', 'done prepareTaskGroup_3');
  return group;
}

async function testSendablesFromOtherTaskImpl_3() {
  hilog.info(0x0000, 'UDAV', 'Start testSendablesFromOtherTaskImpl_3');
  let tasks = 20;
  let promiseGroup: Promise<Object> = taskpool.execute(prepareTaskGroup_3, tasks) as Promise<Object>;
  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(prepareTaskGroup_1, tasks)');
  hilog.info(0x0000, 'UDAV', 'after_3 taskpool.execute(prepareTaskGroup_3, tasks)');
  let tasksGroup: taskpool.TaskGroup = await (promiseGroup) as taskpool.TaskGroup;
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(prepareTaskGroup_1, tasks)');
  hilog.info(0x0000, 'UDAV', 'after_3 await taskpool.execute(prepareTaskGroup_3, tasks)');

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  hilog.info(0x0000, 'UDAV', 'after taskpool.execute(tasksGroup)');
  hilog.info(0x0000, 'UDAV', 'after_3 taskpool.execute(tasksGroup)');
  let tr: NumberContainer[] = await (p) as NumberContainer[];
  hilog.info(0x0000, 'UDAV', 'after await taskpool.execute(tasksGroup)');
  hilog.info(0x0000, 'UDAV', 'after_3 await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  hilog.info(0x0000, 'UDAV', 'after checking if tr.length != tasks');
  hilog.info(0x0000, 'UDAV', 'after_3 checking if tr.length != tasks');
  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 12345678) continue;
    throw new Error("Data Mismatch passed " + 12345678 + " and promised " + res.data);
  }
  return "Test passed";
}

export function testSendablesFromOtherTask_3_1() {
  let p = testSendablesFromOtherTaskImpl_3_1();
  return check("testSendablesFromOtherTask_3_1", p);
}

function prepareTaskGroup_3_1(tasks: number): taskpool.TaskGroup {
  "use concurrent"
  hilog.info(0x0000, 'UDAV', 'Start prepareTaskGroup_3_1, tasks number: ' + tasks);
  let group = new taskpool.TaskGroup();
  hilog.info(0x0000, 'UDAV', 'created group in prepareTaskGroup_3_1');
  let data: NumberContainer = new NumberContainer();
  hilog.info(0x0000, 'UDAV', 'created number container in prepareTaskGroup_3_1');
  for(let i = 0; i < tasks; i++) {
    hilog.info(0x0000, 'UDAV', 'adding task to group in prepareTaskGroup_3_1');
    let task: taskpool.Task = new taskpool.Task(bypassFunction, data);
    hilog.info(0x0000, 'UDAV', 'done creating task in prepareTaskGroup_3_1');
    group.addTask(task);
    hilog.info(0x0000, 'UDAV', 'done adding task to group in prepareTaskGroup_3_1');
  }
  hilog.info(0x0000, 'UDAV', 'done prepareTaskGroup_3_1');
  return group;
}

async function testSendablesFromOtherTaskImpl_3_1() {
  hilog.info(0x0000, 'UDAV', 'Start testSendablesFromOtherTaskImpl_3_1');
  let tasks = 20;
  let promiseGroup: Promise<Object> = taskpool.execute(prepareTaskGroup_3_1, tasks) as Promise<Object>;
  hilog.info(0x0000, 'UDAV', 'after_3_1 taskpool.execute(prepareTaskGroup_3_1, tasks)');
  let tasksGroup: taskpool.TaskGroup = await (promiseGroup) as taskpool.TaskGroup;
  hilog.info(0x0000, 'UDAV', 'after_3_1 await taskpool.execute(prepareTaskGroup_3_1, tasks)');

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);
  hilog.info(0x0000, 'UDAV', 'after_3_1 taskpool.execute(tasksGroup)');
  let tr: NumberContainer[] = await (p) as NumberContainer[];
  hilog.info(0x0000, 'UDAV', 'after_3_1 await taskpool.execute(tasksGroup)');

  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  hilog.info(0x0000, 'UDAV', 'after_3_1 checking if tr.length != tasks');
  for(let i = 0; i < tasks; i++) {
    let res: NumberContainer = tr[i] as NumberContainer;
    if(res.data == 12345678) continue;
    throw new Error("Data Mismatch passed " + 12345678 + " and promised " + res.data);
  }
  return "Test passed";
}

export function testManySendablesToGroup() {
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
  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  for(let i = 0; i < tasks; i++) {
    if(tr[i].data == data[i].data) continue;
    throw new Error("Data Mismatch at " + i + " passed " + data[i].data + " and promised " + tr[i].data)
  }

  return "Test passed";
}

export function testSendableToGroupAndUpdate() {
  let p = testSendableToGroupAndUpdateImpl();
  return check("testSendableToGroupAndUpdate", p);
}

async function testSendableToGroupAndUpdateImpl() {
  let tasks = 20;
  let containersArray: NumberContainer[] = new Array(tasks) as NumberContainer[];
  for(let i = 0; i < tasks; i++) {
    containersArray[i] = new NumberContainer();
  }

  let tasksGroup: taskpool.TaskGroup = new taskpool.TaskGroup();
  for(let i = 0; i < tasks; i++) {
    let container: NumberContainer = containersArray[i] as NumberContainer;
    tasksGroup.addTask(new taskpool.Task(fillAndBypassContainer, container, i));
  }

  let p: Promise<Object[]> = taskpool.execute(tasksGroup);

  let tr: number[] = await (p) as number[];
  if(tr.length != tasks) throw new Error("Mismatch passed " + tasks + " and promised length " + tr.length);
  for(let i = 0; i < tasks; i++) {
    if(tr[i] == containersArray[i].data) continue;
    throw new Error("Data Mismatch at " + i + ", expected " + containersArray[i].data + " and got " + tr[i]);
  }
  return "Test passed";
}
