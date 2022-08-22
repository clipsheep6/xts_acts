// @ts-nocheck
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
import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility extends Ability {

    onCreate() {
        console.log("MainAbility onCreate");
        commonEvent.publish("mainAbility_onCreate", () => {
            console.log("MainAbility Publish CallBack mainAbility_onCreate")
        });
    }

    onDestroy() {
        console.log("MainAbility onDestroy");
        commonEvent.publish("mainAbility_onDestroy", () => {
            console.log("MainAbility Publish CallBack mainAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("MainAbility onWindowStageCreate");
        globalThis.abilityContext = this.context;
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("mainAbility_onWindowStageCreate", () => {
            console.log("MainAbility Publish CallBack mainAbility_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        console.log("MainAbility onWindowStageDestroy") ;
        commonEvent.publish("mainAbility_onWindowStageDestroy", () => {
            console.log("MainAbility Publish CallBack mainAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        console.log("MainAbility onForeground");
        commonEvent.publish("mainAbility_onForeground", () => {
            console.log("MainAbility Publish CallBack mainAbility_onForeground")
        });
    }

    onBackground() {
        console.log("MainAbility onBackground");
        commonEvent.publish("mainAbility_onBackground", () => {
            console.log("MainAbility Publish CallBack mainAbility_onBackground")
        });
    }
};
