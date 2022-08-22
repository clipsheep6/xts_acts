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
import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        console.log("MainAbility onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        console.log("Ability2 onDestroy");
    }

    onWindowStageCreate(windowStage) {
        console.log("Ability2 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("Ability2_onActive", () =>{
            console.log("Ability2_onActive publish success");
        });
        globalThis.abilityContext = this.context
    }

    onWindowStageDestroy() {
    }

    onForeground() {
        console.info("Ability2_onForeground");
        commonEvent.publish("Ability2_onForeground", () =>{
            console.log("Ability2_onForeground publish success");
        });
    }

    onBackground() {
        console.info("Ability2_onBackground");
        commonEvent.publish("Ability2_onBackground", () =>{
            console.log("Ability2_onBackground publish success");
        });
    }
};