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
import Ability from '@ohos.app.ability.UIAbility'
import commonEvent from '@ohos.commonEvent'

async function onShowProcess() {
    var abilityWant = globalThis.abilityWant5;
    var event = abilityWant.parameters['commonEvent'];

    var commonEventPublishData = {
        parameters: {
            test: "test",
        }
    };

    console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify(abilityWant));

    commonEvent.publish(event, commonEventPublishData, () => {
        console.log('============>publish event success.==========>>')
    });

}

async function sendTerminateEvent() {
    var event = "ACTS_StartRecent_0400_3";

    var commonEventPublishData = {
        parameters: {
            test: "test",
        }
    };

    commonEvent.publish(event, commonEventPublishData, () => {
        console.log('============>publish event success.==========>>')
    });

}

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility5 onCreate")
        globalThis.abilityWant5 = want;
        console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify( globalThis.abilityWant5));
    }

    onNewWant(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility5 onNewWant")
        globalThis.abilityWant5 = want;
        onShowProcess();
        console.log("AbilityMultiInstanceAppA new want abilityWant = " + JSON.stringify( globalThis.abilityWant5));
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility5 onDestroy")
        sendTerminateEvent();
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility5 onWindowStageCreate")
        globalThis.abilityContext5 = this.context;
        windowStage.setUIContent(this.context, "MainAbility/pages/fifth/fifth", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility5 onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility5 onForeground")
        onShowProcess();
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility5 onBackground")
    }
};
