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

import Ability from '@ohos.app.ability.UIAbility'
import commonEvent from '@ohos.commonEvent'

export default class MainAbility extends Ability {
    onCreate(want: any, launchParam: any) {
        console.info('ActsUserContextAssistTwo MainAbility4 onCreate')
    }

    onDestroy() {
        console.info('MainAbilityMonitor onDestroy')
    }

    onWindowStageCreate(windowStage) {
        console.info('ActsUserContextAssistTwo MainAbility4 onWindowStageCreate')
        windowStage.setUIContent(this.context, 'MainAbility/pages/index', null)
    }

    onWindowStageDestroy() {
        console.info('ActsUserContextAssistTwo MainAbility4 onWindowStageDestroy')
    }

    async onForeground() {
        console.info('ActsUserContextAssistTwo MainAbility4 onForeground')
        let abilityAppContext = this.context.getApplicationContext()

        let appContextJson = {
            'cacheDir': abilityAppContext.cacheDir, 'tempDir': abilityAppContext.tempDir, 'filesDir': abilityAppContext.filesDir,
            'distributedFilesDir': abilityAppContext.distributedFilesDir, 'databaseDir': abilityAppContext.databaseDir,
            'preferencesDir': abilityAppContext.preferencesDir, 'bundleCodeDir': abilityAppContext.bundleCodeDir
        };

        let bundleContext = this.context.createBundleContext("com.example.actsusercontextassisttwo")

        let bundleContextJson = {
            'cacheDir': bundleContext.cacheDir, 'tempDir': bundleContext.tempDir, 'filesDir': bundleContext.filesDir,
            'distributedFilesDir': bundleContext.distributedFilesDir, 'databaseDir': bundleContext.databaseDir,
            'preferencesDir': bundleContext.preferencesDir, 'bundleCodeDir': bundleContext.bundleCodeDir
        };

        let commonEventData = {
            parameters: {
                abilityAppContextAssistTwo: appContextJson,
                abilityBundleContextAssistTwo: bundleContextJson
            }
        }
        commonEvent.publish("StartMainAbility4_CommonEvent_ContextOne", commonEventData, () => {
            console.log("Publish StartMainAbility4_CommonEvent_ContextOne callback")
        })
    }

    onBackground() {
        console.info('ActsUserContextAssistTwo MainAbility4 onBackground')
    }
};