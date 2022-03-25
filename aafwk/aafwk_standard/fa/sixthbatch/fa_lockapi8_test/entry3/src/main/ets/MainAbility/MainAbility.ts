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
        console.log("MainAbility2 onDestroy");
        commonEvent.publish("mainAbility2_onDestroy_help_api7", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onDestroy_help_api7")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("MainAbility2 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("mainAbility2_onWindowStageCreate_help_api7", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageCreate_help_api7")
        });
        globalThis.abilityContext = this.context
    }

    onWindowStageDestroy() {
        console.log("MainAbility2 onWindowStageDestroy");
        commonEvent.publish("mainAbility2_onWindowStageDestroy_help_api8", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageDestroy_help_api8")
        });
    }

    onForeground() {
        console.log("MainAbility2 onForeground");
        commonEvent.publish("mainAbility2_onForeground_help_api8", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onForeground_help_api8")
        });
    }

    onBackground() {
        console.log("MainAbility2 onBackground");
        commonEvent.publish("mainAbility2_onBackground_help_api8", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onBackground_help_api8")
        });
    }
};