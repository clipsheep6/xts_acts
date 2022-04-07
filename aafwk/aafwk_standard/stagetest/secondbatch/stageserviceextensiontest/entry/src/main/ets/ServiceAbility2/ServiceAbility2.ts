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


export default class MyServiceExtension extends ServiceExtension {
    onCreate(want) {
        globalThis.extensionContext = this.context;
        console.log('[MyApplication] MyServiceExtension2 onCreate' + JSON.stringify(want));
        commonEvent.publish('MyApplication_ServiceExtension2_onCreate', () => {
            console.log('[MyApplication] MyServiceExtension2-- onCreate publish event:' +
            ' MyApplication_ServiceExtension2_onCreate ');
        })
        this.context.startAbility({
            bundleName: "ohos.acts.aufwk.pldtest.myapplication",
            abilityName: "ohos.acts.aufwk.pldtest.myapplication.ServiceAbility2"
        }, (error, data) => {
            console.log('SUB_AA_Extension_ServiceExtensionContext_0200 startAbility(ServiceAbility2): '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        })
    }

    onDestroy() {
        console.log('[MyApplication] MyServiceExtension2 onDestroy');
    }

    onRequest(want, startId) {
        console.log('[MyApplication] MyServiceExtension2 onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        globalThis.startId = startId
        commonEvent.publish('MyApplication_ServiceExtension2_onRequest', () => {
            console.log('MyServiceExtension2-- onRequest publish event: MyApplication_ServiceExtension2_onRequest ');
        })
        setTimeout(function () {
            globalThis.extensionContext.startAbility({
                bundleName: "ohos.acts.aufwk.pldtest.myapplication",
                abilityName: "ohos.acts.aufwk.pldtest.myapplication.ServiceAbility2"
            }, (error, data) => {
                console.log('SUB_AA_Extension_ServiceExtensionContext_0200 -- restartAbility(ServiceAbility2): '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }, 2000);
    }
}
