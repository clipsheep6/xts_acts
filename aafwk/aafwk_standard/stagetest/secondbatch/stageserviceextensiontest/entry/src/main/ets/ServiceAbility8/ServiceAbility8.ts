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
        console.log('[MyApplication] MyServiceExtension8 onCreate' + JSON.stringify(want));
        globalThis.extensionContext = this.context;
        commonEvent.publish('entry_ServiceExtension8_onCreate', () => {
            console.log('MyServiceExtension8-- onCreate publish event: MyApplication_ServiceExtension8_onCreate ');
        })
    }

    onDestroy() {
        console.log('[MyApplication] MyServiceExtension8 onDestroy');
    }

    onRequest(want, startId) {
        console.log('[MyApplication] MyServiceExtension8-- onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        globalThis.startId = startId
        commonEvent.publish('entry_ServiceExtension8_onRequest', () => {
            console.log('MyServiceExtension8-- onRequest publish event: MyApplication_ServiceExtension8_onRequest ');
        })
    }
}
