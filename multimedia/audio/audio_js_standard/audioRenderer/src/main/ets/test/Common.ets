/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// 枚举，音频状态
export class AudioState {
  static readonly STATE_INVALID: number = -1; //无效状态。
  static readonly STATE_NEW: number = 0; //创建新实例状态
  static readonly STATE_PREPARED: number = 1; //准备状态
  static readonly STATE_RUNNING: number = 2; //运行状态
  static readonly STATE_STOPPED: number = 3; //停止状态
  static readonly STATE_RELEASED: number = 4; //释放状态
  static readonly STATE_PAUSED: number = 5; //暂停状态
}
/**
 * 定义常量类
 */
export class Constant {
  static readonly SLEEP_TIME_100: number = 100;
  static readonly EORRCODE: number = 6800301;
}

export function sleep(ms: number): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, ms);
  });
}
export function rand_sleep(ms: number): Promise<string> {
  let random:number = Math.floor(Math.random()*ms);
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, random);
  });
}
