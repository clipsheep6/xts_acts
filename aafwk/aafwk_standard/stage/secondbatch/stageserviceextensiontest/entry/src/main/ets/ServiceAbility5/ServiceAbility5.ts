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

export default class MyServiceAbility extends ServiceExtension {
    onCreate(want) {
        console.log('[MyApplication] MyServiceExtension5 onCreate' + JSON.stringify(want));
        globalThis.extensionContext = this.context;
        globalThis.lifecycleList.push(['MyApplication.MyServiceExtension5', 'onCreate']);
//        this.context.startAbility({
//            bundleName: "ohos.acts.aafwk.pldtest.myapplication",
//            abilityName: "com.example.entry2.ServiceAbility2"
//        }, (error, data) => {
//            console.log('SUB_AA_Extension_ServiceExtensionContext_0500 -- startAbility(ServiceAbility): '
//            + JSON.stringify(error) + ", " + JSON.stringify(data))
//        })
    }

    onDestroy() {
        console.log('[MyApplication] MyServiceExtension5 onDestroy');
    }

    onRequest(want, startId) {
        console.log('[MyApplication] MyServiceExtension5-- onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        globalThis.lifecycleList.push(['MyApplication.MyServiceExtension5', 'onRequest']);
        globalThis.startId = startId
//        setTimeout(function () {
//            this.context.startAbility({
//                bundleName: "ohos.acts.aafwk.pldtest.myapplication",
//                abilityName: "com.example.entry2.ServiceAbility2"
//            }, (error, data) => {
//                console.log('SUB_AA_Extension_ServiceExtensionContext_0500 -- restartAbility(ServiceAbility): '
//                + JSON.stringify(error) + ", " + JSON.stringify(data))
//            })
//        }, 2000);
    }

}
