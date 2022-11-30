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

import AbilityStage from "@ohos.app.ability.AbilityStage"
import commonEvent from '@ohos.commonEvent'

function sleep(delay) {
    let start = new Date().getTime();
    while (true) {
        if (new Date().getTime() - start > delay) {
            break;
        }
    }
}

export default class MyAbilityStage extends AbilityStage {
    onCreate() {
        console.info("ActsUserContextAssistTwo AbilityStage onCreate")
        globalThis.abilityStageContextB = this.context
    }

    onAcceptWant(want) {
        console.log("ActsUserContextAssistTwo onAcceptWant called want:" + JSON.stringify(want));
        async function publishContext() {
            let stageAppContext = globalThis.abilityStageContextB.getApplicationContext()

            let stageAppContextJson = {
                'cacheDir': stageAppContext.cacheDir, 'tempDir': stageAppContext.tempDir, 'filesDir': stageAppContext.filesDir,
                'distributedFilesDir': stageAppContext.distributedFilesDir, 'databaseDir': stageAppContext.databaseDir,
                'preferencesDir': stageAppContext.preferencesDir, 'bundleCodeDir': stageAppContext.bundleCodeDir
            };

            let bundleContext = globalThis.abilityStageContextB.createBundleContext("com.example.actsusercontextassisttwo");

            let appBundleContext = stageAppContext.createBundleContext("com.example.actsusercontextassisttwo");

            let stageBundleContextJson = {
                'cacheDir': bundleContext.cacheDir, 'tempDir': bundleContext.tempDir, 'filesDir': bundleContext.filesDir,
                'distributedFilesDir': bundleContext.distributedFilesDir, 'databaseDir': bundleContext.databaseDir,
                'preferencesDir': bundleContext.preferencesDir, 'bundleCodeDir': bundleContext.bundleCodeDir
            };

            let commonEventData = {
                parameters: {
                    abilityStageAppContextAssistOne: stageAppContextJson,
                    abilityStageBundleContxtAssistOne: stageBundleContextJson
                }
            }
            commonEvent.publish("AssistContextTwo_StageAbilityA_Start_CommonEvent", commonEventData, () => {
                console.log("Publish AssistContextTwo_StageAbilityA_Start_CommonEvent callback")
            })
        }
        publishContext()
        sleep(500)
        let abilityId = want.parameters.startId.toString();
        return abilityId;
    }
}