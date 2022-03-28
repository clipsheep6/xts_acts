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
        console.log('[MyApplication2] MyServiceExtension2 onCreate' + JSON.stringify(want));
        commonEvent.publish('MyApplication2_ServiceExtension2_onCreate', () => {
            console.log('[MyApplication2] MyServiceExtension2-- onCreate publish event: MyApplication2_onCreate ');
        })
    }

    onDestroy() {
        console.log('[MyApplication2] MyServiceExtension2 onDestroy');
        globalThis.lifecycleList.push(['MyApplication2.MyServiceExtension', 'onDestroy']);
    }

    onRequest(want, startId) {
        console.log('MyServiceExtension2-- onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        globalThis.startId = startId
        commonEvent.publish('MyApplication2_ServiceExtension2_onRequest', () => {
            console.log('[MyApplication2] MyServiceExtension2-- onRequest  publish event: MyApplication2_OnRequest ');
        })
    }
}
