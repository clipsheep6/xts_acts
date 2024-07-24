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
 
import { Want,ServiceExtensionAbility } from '@kit.AbilityKit';
import { hilog } from '@kit.PerformanceAnalysisKit';
import { rpc } from '@kit.IPCKit';

class StubTest extends rpc.RemoteObject {
  constructor(des: string) {
    super(des)
  }
}

let remoteOBJ = new StubTest('test');

export default class ServiceAbility extends ServiceExtensionAbility {

  onCreate(want: Want): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'ServiceAbility onCreate');
  }

  onDisconnect(want: Want): void | Promise<void> {
    hilog.info(0x0000, 'testTag', '%{public}s', 'ServiceAbility onDisconnect');
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'ServiceAbility onDestroy');
  }

  onConnect(want: Want): rpc.RemoteObject | Promise<rpc.RemoteObject> {
    hilog.info(0x0000, 'testTag', '%{public}s', 'ServiceAbility onConnect');
    return remoteOBJ;
  }
};
