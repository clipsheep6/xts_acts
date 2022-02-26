/*
* Copyright (c) 2021 Huawei Device Co., Ltd.
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
import ServiceExtension from '@ohos.application.ServiceExtension'
import commonEvent from '@ohos.commonevent'

var publishEventName = "event_VendorAppServiceToSystemAppA";

function onReceivedPublishCallBack() {
    console.log("ACTS_ProcessManage VendorAppService ServiceAbility onReceivedPublishCallBack");
}

export default class ServiceAbility extends ServiceExtension {
    onCreate(want,startId) {
        globalThis.abilityWant = want;
        console.log('ACTS_ProcessManage VendorAppService ServiceAbility onCreate, want: ' + want.abilityName);
    }

    onRequest(want, startId) {
        console.log('ACTS_ProcessManage VendorAppService ServiceAbility onRequest, want: ' + want.abilityName
        + ', startId: ' + startId);
    }

    onConnect(want) {
        var connId;
        console.log('ACTS_ProcessManage VendorAppService ServiceAbility onConnect, want:' + want.abilityName);
        globalThis.extensionContext = this.context

        commonEvent.publish(publishEventName,onReceivedPublishCallBack);

    }

    onDisconnect(want) {
        console.log('ACTS_ProcessManage VendorAppService ServiceAbility onDisconnect, want:' + want.abilityName);
    }

    onDestroy() {
        console.log('AACTS_ProcessManage VendorAppService ServiceAbility onDestroy');
    }
};
