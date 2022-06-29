/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import ServiceExtension from '@ohos.application.ServiceExtensionAbility'
import commonEvent from '@ohos.commonevent'
import rpc from '@ohos.rpc';
class Stub extends rpc.RemoteObject {
  constructor(des) {
    super(des);
  }
  // process client's request
  onRemoteRequest(code, data, reply, option) {
    reply.writeNoException();
    reply.writeString("success");
    return true;
  }
}
function PublishCallBackOne8() {
  console.debug("====>Publish CallBack ACTS_AbilityPermission_0400====>");
  console.debug("====>close this context====>0400====>")
}
export default class ServiceAbility extends ServiceExtension {
  onCreate(want) {
    console.log('ServiceAbility onCreate, want: ' + want.abilityName);
  }

  onRequest(want, startId) {
    console.log('ServiceAbility onRequest, want: ' + want.abilityName + ', startId: ' + startId);
  }

  onConnect(want) {
    console.log('ServiceAbility onConnect, want:' + want.abilityName);
    console.log('ServiceAbility onConnect, action:' + want.action);
    if (want.action == 'StartAbilityPromise') {
      commonEvent.publish("ACTS_AbilityPermission_0400_Start_CommonEvent", PublishCallBackOne8);
      var myStub = new Stub("com.example.actsabilitypermissiontest.ServiceAbility");
      console.log('ThirdAbility onConnect before returnU100:')
      return myStub;
      console.log('after return')
    }
  }

  onDisconnect(want) {
    console.log('ServiceAbility onDisconnect, want:' + want.abilityName);
  }

  onDestroy() {
    console.log('ServiceAbility onDestroy');
  }
}