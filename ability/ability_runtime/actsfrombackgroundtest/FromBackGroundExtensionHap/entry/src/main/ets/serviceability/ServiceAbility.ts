/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import ServiceExtensionAbility from '@ohos.app.ability.ServiceExtensionAbility';
import rpc from '@ohos.rpc';
import commonEvent from '@ohos.commonEvent'

function PublishCallBack() {
    console.debug("====>Publish CallBack ACTS_ConnectServiceExtension_CommonEvent====>");
}

class StubTest extends rpc.RemoteObject {
  constructor(des) {
    super(des);
  }

  onRemoteRequest(code, data, reply, option): boolean {
    return true;
  }
}

export default class ServiceAbility extends ServiceExtensionAbility {
  onCreate(want) {
    Logger.debug('ServiceExtensionAbility has been onCreate');
  }

  onDestroy() {
    Logger.debug('ServiceExtensionAbility has been onDestroy');
  }

  onRequest(want, startId) {
    Logger.debug('ServiceExtensionAbility has been onRequest');
  }

  onConnect(want) {
    console.info('ServiceAbility onConnect');
    commonEvent.publish("ACTS_ConnectServiceExtension_CommonEvent", PublishCallBack);
    return new StubTest('test');
  }
}
