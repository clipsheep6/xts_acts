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
        console.log('FourthauxiliaryApplication.MyServiceExtension onCreate' + JSON.stringify(want));
        commonEvent.publish("fourthauxiliary_ServiceExtension_onCreate", () => {
            console.log("FourthauxiliaryApplication Publish CallBack fourthauxiliary_ServiceExtension_onCreate")
        });
    }

    onDestroy() {
        console.log('[FourthauxiliaryApplication] FourthauxiliaryApplication.MyServiceExtension onDestroy');
    }

    onRequest(want, startId) {
        console.log('[FourthauxiliaryApplication] FourthauxiliaryApplication.MyServiceExtension onRequest'
        + JSON.stringify(want) + JSON.stringify(startId));
        commonEvent.publish("fourthauxiliary_ServiceExtension_onRequest", () => {
            console.log("FourthauxiliaryApplication Publish CallBack fourthauxiliary_ServiceExtension_onRequest")
        });
    }

    onConnect(want) {
        console.log('[FourthauxiliaryApplication] FourthauxiliaryApplication.MyServiceExtension onConnect'
        + JSON.stringify(want));
        commonEvent.publish("fourthauxiliary_ServiceExtension_onConnect", () => {
            console.log("FourthauxiliaryApplication Publish CallBack fourthauxiliary_ServiceExtension_onConnect")
        });
    }

    onDisconnect(want) {
        console.log('[FourthauxiliaryApplication] FourthauxiliaryApplication.MyServiceExtension onConnect'
        + JSON.stringify(want));
    }

    onReconnect(want) {
        console.log('[FourthauxiliaryApplication] FourthauxiliaryApplication.MyServiceExtension onConnect'
        + JSON.stringify(want));
    }
}

export default ServiceAbility