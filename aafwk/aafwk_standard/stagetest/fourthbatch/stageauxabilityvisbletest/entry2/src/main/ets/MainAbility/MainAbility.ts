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
        console.log("entry2_MainAbility onCreate")
        commonEvent.publish("entry2_MainAbility_onCreat", () => {
            console.log("entrr2_MainAbility Publish CallBack MyServiceExtension_onCreate")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("entry2_MainAbility onForeground")
        commonEvent.publish("entry2_MainAbility_onForeground", () => {
            console.log("entry2_MainAbility Publish CallBack MyServiceExtension_onForeground")
        });
    }

    onDestroy() {
        console.log("entry2_MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        console.log("entry2_MainAbility onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null);
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("entry2_MainAbility onWindowStageDestroy")
    }

    onBackground() {
        // Ability has back to background
        console.log("entry2_MainAbility onBackground")
    }
};
