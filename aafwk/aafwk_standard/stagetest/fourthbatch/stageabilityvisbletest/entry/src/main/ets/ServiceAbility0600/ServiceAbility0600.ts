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


class ServiceAbility0600 extends ServiceExtension {
    onCreate(want) {
        console.log('FourthAuxiliaryability_entry_ServiceAbility0600 onCreate' + JSON.stringify(want));
        commonEvent.publish("FourthAuxiliaryability_entry_ServiceAbility0600_onCreate", () => {
            console.log("FourthAuxiliaryability_entry_ServiceAbility0600 Publish CallBack")
        });
    }

    onDestroy() {
        console.log('FourthAuxiliaryability_entry_ServiceAbility0600 onDestroy');
    }

    onRequest(want, startId) {
        console.log('FourthAuxiliaryability_entry_ServiceAbility0600 onRequest' + JSON.stringify(want));
    }

    onConnect(want) {
        console.log('FourthAuxiliaryability_entry_ServiceAbility0600 onConnect' + JSON.stringify(want));
        commonEvent.publish("FourthAuxiliaryability_entry_ServiceAbility0600_onConnect", () => {
            console.log("Fourthetsability_entry_ServiceAbility Publish CallBack " +
            "Fourthetsability_entry_ServiceAbility_onConnect")
        });
    }

    onDisconnect(want) {
        console.log('FourthAuxiliaryability_entry_ServiceAbility0600 onDisConnect' + JSON.stringify(want));
    }

    onReconnect(want) {
        console.log('FourthAuxiliaryability_entry_ServiceAbility0600 onReconnect' + JSON.stringify(want));
    }
}

export default ServiceAbility0600