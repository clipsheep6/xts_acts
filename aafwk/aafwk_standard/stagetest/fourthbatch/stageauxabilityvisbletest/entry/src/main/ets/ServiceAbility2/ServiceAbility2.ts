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


class ServiceAbility2 extends ServiceExtension {
    onCreate(want) {
        console.log('Fourthetsability_entry_ServiceAbility2 onCreate' + JSON.stringify(want));
        commonEvent.publish("Fourthetsability_entry_ServiceAbility2_onCreate", () => {
            console.log("Fourthetsability_entry_ServiceAbility2 Publish " +
            "Fourthetsability_entry_ServiceAbility2_onCreate")
        });
    }

    onDestroy() {
        console.log('Fourthetsability_entry_ServiceAbility2 onDestroy');
    }

    onRequest(want, startId) {
        console.log('Fourthetsability_entry_ServiceAbility2 onRequest' + JSON.stringify(want));
    }

    onConnect(want) {
        console.log('Fourthetsability_entry_ServiceAbility2 onConnect' + JSON.stringify(want));
        commonEvent.publish("Fourthetsability_entry_ServiceAbility2_onConnect", () => {
            console.log("Fourthetsability_entry_ServiceAbility2 Publish " +
            "Fourthetsability_entry_ServiceAbility2_onConnect")
        });
    }

    onDisconnect(want) {
        console.log('Fourthetsability_entry_ServiceAbility2 onDisConnect' + JSON.stringify(want));
    }

    onReconnect(want) {
        console.log('Fourthetsability_entry_ServiceAbility2 onReconnect' + JSON.stringify(want));
    }
}

export default ServiceAbility2