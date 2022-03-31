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
import ServiceExtension from '@ohos.application.ServiceExtensionAbility'
import Want from "@ohos.application.Want"
import commonEvent from '@ohos.commonevent'


class ServiceAbility extends ServiceExtension {
    onCreate(want) {
        console.log('Fourthetsability_entry_ServiceAbility onCreate' + JSON.stringify(want));
        commonEvent.publish("Fourthetsability_entry_ServiceAbility_onCreate", () => {
            console.log("Fourthetsability_entry_ServiceAbility Publish Fourthetsability_entry_ServiceAbility_onCreate")
        });
    }

    onDestroy() {
        console.log('Fourthetsability_entry_ServiceAbility onDestroy');
    }

    onRequest(want, startId) {
        console.log('Fourthetsability_entry_ServiceAbility onRequest' + JSON.stringify(want) + JSON.stringify(startId));
    }

    onConnect(want) {
        console.log('Fourthetsability_entry_ServiceAbility onConnect' + JSON.stringify(want));
        commonEvent.publish("Fourthetsability_entry_ServiceAbility_onConnect", () => {
            console.log("Fourthetsability_entry_ServiceAbility Publish Fourthetsability_entry_ServiceAbility_onConnect")
        });
    }

    onDisconnect(want) {
        console.log('Fourthetsability_entry_ServiceAbility onDisConnect' + JSON.stringify(want));
        //        globalThis.lifecyleList.push(['MyApplication.MyServiceExtension','onDisconnect']);
    }

    onReconnect(want) {
        console.log('Fourthetsability_entry_ServiceAbility onReconnect' + JSON.stringify(want));
        //        globalThis.lifecyleList.push(['MyApplication.MyServiceExtension','onReconnect']);
    }
}

export default ServiceAbility