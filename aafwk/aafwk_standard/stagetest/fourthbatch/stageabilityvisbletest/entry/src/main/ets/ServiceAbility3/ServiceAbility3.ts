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
        console.log('Fourthauxiliary_Eentry_ServiceAbility3 onCreate' + JSON.stringify(want));
        commonEvent.publish("Fourthauxiliary_Eentry_ServiceAbility3_onCreate", () => {
            console.log("Fourthauxiliary_Eentry_ServiceAbility3 Publish CallBack " +
            "Fourthauxiliary_Eentry_ServiceAbility3_onCreate")
        });
    }

    onDestroy() {
        console.log('Fourthauxiliary_Eentry_ServiceAbility3 onDestroy');
    }

    onRequest(want, startId) {
        console.log('Fourthauxiliary_Eentry_ServiceAbility3 onRequest' + JSON.stringify(want));
    }

    onConnect(want) {
        console.log('Fourthauxiliary_Eentry_ServiceAbility3 onConnect' + JSON.stringify(want));
        commonEvent.publish("Fourthauxiliary_entry_ServiceAbility_onConnect", () => {
            console.log("Fourthauxiliary_Eentry_ServiceAbility3 Publish CallBack " +
            "Fourthauxiliary_Eentry_ServiceAbility3")
        });
    }

    onDisconnect(want) {
        console.log('Fourthauxiliary_Eentry_ServiceAbility3 onDisConnect' + JSON.stringify(want));
    }

    onReconnect(want) {
        console.log('Fourthauxiliary_Eentry_ServiceAbility3 onReconnect' + JSON.stringify(want));
    }
}

export default ServiceAbility