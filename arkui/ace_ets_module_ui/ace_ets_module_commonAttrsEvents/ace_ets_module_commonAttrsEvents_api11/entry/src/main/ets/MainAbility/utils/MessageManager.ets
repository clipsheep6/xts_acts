/**
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
import { ESObject } from '../common/types';

export type Callback = (message: ESObject) => void;

export class MessageManager {
  callback: Callback;
  callbacks: Map<string, Callback> = new Map();

  constructor() {
    this.callback = null;
  }

  registerCallback(callback: Callback, type?: string): void {
    if (type === undefined) {
      console.error('registerCallback callback set');
      this.callback = callback;
    } else {
      this.callbacks.set(type, callback);
    }
  }

  notify(message: any, type?: string): void {
    if (type === undefined) {
      if (this.callback) {
        this.callback(message);
      } else {
        console.error('No callback registered for default type.');
      }
    } else {
      let tmpCallback: Callback | undefined = this.callbacks.get(type);
      if (tmpCallback) {
        tmpCallback(message);
      } else {
        console.error(`No callback registered for type '${type}'.`);
      }
    }
  }

  clear(): void {
    this.callbacks.clear();
    this.callback = null;
  }
}
