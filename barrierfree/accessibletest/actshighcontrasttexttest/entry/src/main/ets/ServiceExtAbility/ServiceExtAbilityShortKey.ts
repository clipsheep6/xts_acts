/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import commonEvent from '@ohos.commonEvent'
import AccessibilityExtensionAbility from '@ohos.application.AccessibilityExtensionAbility'
const log = "[xtsLog] "

class ServiceExtAbilityRegister extends AccessibilityExtensionAbility {
    onConnect() {
        console.info(log + " onConnect")
        var commonEventPublishData = {
            data: "on_connect_success"
        }
        commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
        function publishCallback(err){
            console.info("====>on_assist_change_extra onAbilityConnected publish call back result:" + JSON.stringify(err));
        }
    }
    onDisconnect() {
        console.info(log + " onDisconnect")
        var commonEventPublishData = {
            data: "on_disconnect_success"
        }
        commonEvent.publish("on_assist_change_extra", commonEventPublishData, publishCallback);
        function publishCallback(err){
            console.info("====>on_assist_change_extra onAbilityDisconnected publish call back result:" + JSON.stringify(err));
        }
    }
}

export default ServiceExtAbilityRegister