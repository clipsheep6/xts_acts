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
import dialogRequest from '@ohos.app.ability.dialogRequest'

async function publishEvent() {
    var event = 'ACTS_REQUEST_DIALOG_EVENT1';

    var commonEventPublishData = {
        parameters: {
            instanceCount: 1,
        }
    };

    commonEvent.publish(event, commonEventPublishData, () => {
        console.log('============>publish event success.==========>>')
    });

}

export default class MainAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility3 onCreate");
        globalThis.abilityWant3 = want;
        globalThis.requestDialogSuccess = true;

        try {
            let requestInfo = dialogRequest.getRequestInfo(want);
            if (requestInfo) {
                globalThis.validRequestInfo = true;
                console.log("MainAbility3 requestInfo is valid, requestInfo = " + JSON.stringify(requestInfo));
            } else {
                console.log("MainAbility3 requestInfo is invalid");
            }
            publishEvent();
        } catch {
            console.log("MainAbility3 testRequest fail");
        }

        console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify( globalThis.abilityWant3));
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility3 onDestroy");
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility3 onWindowStageCreate")
        globalThis.abilityContext2 = this.context;
        windowStage.setUIContent(this.context, "MainAbility/pages/third/third", null);
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility3 onWindowStageDestroy");
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility3 onForeground");
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility3 onBackground");
    }
};
