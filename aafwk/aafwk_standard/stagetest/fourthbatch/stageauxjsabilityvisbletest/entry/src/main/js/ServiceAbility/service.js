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

import commonEvent from '@ohos.commonevent'

export default {
    onStart(want) {
        console.info('ServiceAbility onStart');
        commonEvent.publish("servicejsability_ServiceAbility_onStart", () => {
            console.log("ServiceAbility Publish CallBack ServiceAbility_onCreate")
        });
    },
    onStop() {
        console.info('ServiceAbility onStop');
        commonEvent.publish("servicejsability_ServiceAbility_onStop", () => {
            console.log("ServiceAbility Publish CallBack ServiceAbility_onCreate")
        });
    },
    onConnect(want) {
        console.info('ServiceAbility onConnect');
        commonEvent.publish("servicejsability_ServiceAbility_onConnect", () => {
            console.log("ServiceAbility Publish CallBack ServiceAbility_onCreate")
        });
        return {};
    },
    onReconnect(want) {
        console.info('ServiceAbility onReconnect');
    },
    onDisconnect() {
        console.info('ServiceAbility onDisconnect');
        commonEvent.publish("servicejsability_ServiceAbility_onDisconnect", () => {
            console.log("ServiceAbility Publish CallBack ServiceAbility_onCreate")
        });
    },
    onCommand(want, restart, startId) {
        console.info('ServiceAbility onCommand');
    }
};