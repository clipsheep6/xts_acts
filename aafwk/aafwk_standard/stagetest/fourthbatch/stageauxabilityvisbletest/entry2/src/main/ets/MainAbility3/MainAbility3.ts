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

export default class MainAbility3 extends Ability {
    onCreate() {
        console.log("FourEtsAbility_entry2_MainAbility3 onCreate")
        commonEvent.publish("FourEtsAbility_entry2_MainAbility3_onCreate", () => {
            console.log("FourEtsAbility_entry2_MainAbility3 Publish CallBack " +
            "FourEtsAbility_entry2_MainAbility3_onCreat")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("FourEtsAbility_entry2_MainAbility3 onForeground")
        commonEvent.publish("FourEtsAbility_entry2_MainAbility3_onForeground", () => {
            console.log("FourEtsAbility_entry2_MainAbility3 Publish CallBack " +
            "FourEtsAbility_entry2_MainAbility3_onForeground")
        });
    }

    onDestroy() {
        console.log("FourEtsAbility_entry2_MainAbility3 onDestroy")
    }

    onWindowStageCreate(windowStage) {
        console.log("FourEtsAbility_entry2_MainAbility3 onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null);
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("FourEtsAbility_entry2_MainAbility3 onWindowStageDestroy")
    }

    onBackground() {
        // Ability has back to background
        console.log("FourEtsAbility_entry2_MainAbility3 onBackground")
    }
};
