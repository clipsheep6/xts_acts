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

import ServiceExtension from "@ohos.application.ServiceExtension"
import commonEvent from '@ohos.commonevent'

export default class MyServiceAbility extends ServiceExtension {
    onCreate(want) {
        globalThis.extensionContext = this.context;
        console.log('[MyApplication] MyServiceExtension-- onCreate' + JSON.stringify(want));
        commonEvent.publish('MyApplication_ServiceExtension_onCreate', () => {
            console.log('[MyApplication] MyServiceExtension-- onCreate publish event: MyApplication_ServiceExtension_onCreate ');
        })
        this.context.startAbility({
            bundleName: "ohos.acts.aufwk.pldtest.myapplication",
            abilityName: "ohos.acts.aufwk.pldtest.myapplication.ServiceAbility"
        }, (error, data) => {
            console.log('MyServiceExtension SUB_AA_Extension_ServiceExtensionContext_0100 -- startAbility(ServiceAbility): '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
    }

    onDestroy() {
        console.log('[MyApplication] MyServiceExtension onDestroy');
    }

    onRequest(want, startId) {
        console.log('[MyApplication] MyServiceExtension-- onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        globalThis.startId = startId
        commonEvent.publish('MyApplication_ServiceExtension_onRequest', () => {
            console.log('[MyApplication] MyServiceExtension-- onRequest publish event: MyApplication_ServiceExtension_onRequest ');
        })
    }
}
