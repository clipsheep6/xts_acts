// @ts-nocheck
/**
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

import ServiceExtension from "@ohos.application.ServiceExtension"
import commonEvent from '@ohos.commonevent'

export default class MyServiceAbility extends ServiceExtension {
    onCreate(want) {
        console.log('MyApplication.MyServiceExtension onCreate' + JSON.stringify(want));
        globalThis.extensionContext = this.context;
        commonEvent.publish("AuxiliaryServiceAbility_onCreate", () => {
            console.log("AuxiliaryServiceAbility Publish CallBack AuxiliaryServiceAbility_onCreate")
        });
    }

    onDestroy() {
        console.log('[MyApplication] MyServiceExtension onDestroy');
        commonEvent.publish("AuxiliaryServiceAbility_onDestroy", () => {
            console.log("AuxiliaryServiceAbility Publish CallBack AuxiliaryServiceAbility_onDestroy")
        });
    }

    onRequest(want, startId) {
        console.log('[MyApplication] MyServiceExtension onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        commonEvent.publish("AuxiliaryServiceAbility_onRequest", () => {
            console.log("AuxiliaryServiceAbility Publish CallBack AuxiliaryServiceAbility_onRequest")
        });
    }

    onConnect(want) {
        console.log('[MyApplication] MyServiceExtension onConnect' + JSON.stringify(want));
        commonEvent.publish("AuxiliaryServiceAbility_onConnect", () => {
            console.log("AuxiliaryServiceAbility Publish CallBack AuxiliaryServiceAbility_onConnect")
        });
    }

    onDisconnect(want) {
        console.log('[MyApplication] MyServiceExtension onConnect' + JSON.stringify(want));
        commonEvent.publish("AuxiliaryServiceAbility_onDisconnect", () => {
            console.log("AuxiliaryServiceAbility Publish CallBack AuxiliaryServiceAbility_onDisconnect")
        });
    }

    onReconnect(want) {
        console.log('[MyApplication] MyServiceExtension onConnect' + JSON.stringify(want));
        commonEvent.publish("AuxiliaryServiceAbility_onReconnect", () => {
            console.log("AuxiliaryServiceAbility Publish CallBack AuxiliaryServiceAbility_onReconnect")
        });
    }
}
