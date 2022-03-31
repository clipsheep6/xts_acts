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
        console.log('[entry2] MyServiceExtension2 onCreate' + JSON.stringify(want));
        commonEvent.publish('entry2_ServiceExtension2_onCreate', () => {
            console.log('[entry2] MyServiceExtension2-- onCreate publish event: entry2_ServiceExtension2_onCreate ');
        })
    }

    onDestroy() {
        console.log('[entry2] MyServiceExtension onDestroy');
    }

    onRequest(want, startId) {
        console.log('[entry2] MyServiceExtension2 onRequest' + JSON.stringify(want) + JSON.stringify(startId));
        commonEvent.publish('entry2_ServiceExtension2_onRequest', () => {
            console.log('[entry2] MyServiceExtension2-- onRequest publish event: entry2_ServiceExtension2_onRequest ');
        })
    }
}
