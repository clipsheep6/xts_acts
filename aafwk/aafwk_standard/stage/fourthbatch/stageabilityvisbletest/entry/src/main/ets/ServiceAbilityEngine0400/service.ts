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
        console.info('ServiceAbilityEngine0400 onStart');
        commonEvent.publish("fourthauxiliaryability_ServiceAbilityEngine0400_onStart", () => {
            console.log("ServiceAbilityEngine0400 Publish CallBack ServiceAbilityEngine0300_onCreate")
        });
    },
    onStop() {
        console.info('ServiceAbilityEngine0400 onStop');
    },
    onConnect(want) {
        console.info('ServiceAbilityEngine0400 onConnect');
        commonEvent.publish("fourthauxiliaryability_ServiceAbilityEngine0400_onConnect", () => {
            console.log("ServiceAbilityEngine0400 Publish CallBack ServiceAbilityEngine0400_onCreate")
        });
        return {};
    },
    onReconnect(want) {
        console.info('ServiceAbilityEngine0400 onReconnect');
    },
    onDisconnect() {
        console.info('ServiceAbilityEngine0400 onDisconnect');
    },
    onCommand(want, restart, startId) {
        console.info('ServiceAbilityEngine0400 onCommand');
    }
};