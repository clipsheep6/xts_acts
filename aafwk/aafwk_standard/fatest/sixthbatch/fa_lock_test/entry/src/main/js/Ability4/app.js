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

import commonEvent from '@ohos.commonEvent';
import featureAbility from '@ohos.ability.featureAbility';
export default {
    onCreate() {
        console.info("Application onCreate");
        commonEvent.publish("Ability4_onCreate", () => {
            console.log("Ability4_onCreate Publish success");
        });
        setTimeout(() => {
            featureAbility.terminateSelf().then((data) => {
                console.log("Stop Ability4 data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("Stop Ability4 error: " + JSON.stringify(error))
            })
        }, 1000)
    },
    onDestroy() {
        console.info("Ability4_onDestroy");
        commonEvent.publish("Ability4_onDestroy", () => {
            console.log("Ability4_onDestroy Publish success");
        });
    }
};
