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

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("assist_app_MainAbility onCreate")
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("assist_app_MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("assist_app_MainAbility onWindowStageCreate")
        globalThis.assistAppAbilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null);
        var abilityContextDir = {
            "cacheDir" : globalThis.assistAppAbilityContext.cacheDir,
            "tempDir" : globalThis.assistAppAbilityContext.tempDir,
            "filesDir" : globalThis.assistAppAbilityContext.filesDir,
            "distributedFilesDir" : globalThis.assistAppAbilityContext.distributedFilesDir,
            "databaseDir" : globalThis.assistAppAbilityContext.databaseDir,
            "storageDir" : globalThis.assistAppAbilityContext.storageDir,
            "bundleCodeDir" : globalThis.assistAppAbilityContext.bundleCodeDir
        };

        var abilityStageContextDir = {
            "cacheDir" : globalThis.assistAppStageContext.cacheDir,
            "tempDir" : globalThis.assistAppStageContext.tempDir,
            "filesDir" : globalThis.assistAppStageContext.filesDir,
            "distributedFilesDir" : globalThis.assistAppStageContext.distributedFilesDir,
            "databaseDir" : globalThis.assistAppStageContext.databaseDir,
            "storageDir" : globalThis.assistAppStageContext.storageDir,
            "bundleCodeDir" : globalThis.assistAppStageContext.bundleCodeDir
        };

        var abilityApplicationDir = {
            "cacheDir" : globalThis.assistAppAbilityContext.getApplicationContext().cacheDir,
            "tempDir" : globalThis.assistAppAbilityContext.getApplicationContext().tempDir,
            "filesDir" : globalThis.assistAppAbilityContext.getApplicationContext().filesDir,
            "distributedFilesDir" : globalThis.assistAppAbilityContext.getApplicationContext().distributedFilesDir,
            "databaseDir" : globalThis.assistAppAbilityContext.getApplicationContext().databaseDir,
            "storageDir" : globalThis.assistAppAbilityContext.getApplicationContext().storageDir,
            "bundleCodeDir" : globalThis.assistAppAbilityContext.getApplicationContext().bundleCodeDir
        }

        var abilityStageApplicationDir = {
            "cacheDir" : globalThis.assistAppStageContext.getApplicationContext().cacheDir,
            "tempDir" : globalThis.assistAppStageContext.getApplicationContext().tempDir,
            "filesDir" : globalThis.assistAppStageContext.getApplicationContext().filesDir,
            "distributedFilesDir" : globalThis.assistAppStageContext.getApplicationContext().distributedFilesDir,
            "databaseDir" : globalThis.assistAppStageContext.getApplicationContext().databaseDir,
            "storageDir" : globalThis.assistAppStageContext.getApplicationContext().storageDir,
            "bundleCodeDir" : globalThis.assistAppStageContext.getApplicationContext().bundleCodeDir
        };

        var abilityBundleContextDir = {
            "cacheDir" : globalThis.assistAppAbilityContext.createBundleContext("com.example.assistmyapplication").cacheDir,
            "tempDir" : globalThis.assistAppAbilityContext.createBundleContext("com.example.assistmyapplication").tempDir,
            "filesDir" : globalThis.assistAppAbilityContext.createBundleContext("com.example.assistmyapplication").filesDir,
            "distributedFilesDir" : globalThis.assistAppAbilityContext.createBundleContext("com.example.assistmyapplication").distributedFilesDir,
            "databaseDir" : globalThis.assistAppAbilityContext.createBundleContext("com.example.assistmyapplication").databaseDir,
            "storageDir" : globalThis.assistAppAbilityContext.createBundleContext("com.example.assistmyapplication").storageDir,
            "bundleCodeDir" : globalThis.assistAppAbilityContext.createBundleContext("com.example.assistmyapplication").bundleCodeDir
        }

        var abilityStageBundleContextDir = {
            "cacheDir" : globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication").cacheDir,
            "tempDir" : globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication").tempDir,
            "filesDir" : globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication").filesDir,
            "distributedFilesDir" : globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication").distributedFilesDir,
            "databaseDir" : globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication").databaseDir,
            "storageDir" : globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication").storageDir,
            "bundleCodeDir" : globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication").bundleCodeDir
        };

        var abilityApplicationBundleContextDir = {
            "cacheDir" : globalThis.assistAppAbilityContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").cacheDir,
            "tempDir" : globalThis.assistAppAbilityContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").tempDir,
            "filesDir" : globalThis.assistAppAbilityContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").filesDir,
            "distributedFilesDir" : globalThis.assistAppAbilityContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").distributedFilesDir,
            "databaseDir" : globalThis.assistAppAbilityContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").databaseDir,
            "storageDir" : globalThis.assistAppAbilityContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").storageDir,
            "bundleCodeDir" : globalThis.assistAppAbilityContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").bundleCodeDir
        }

        var abilityStageApplicationBundleContextDir = {
            "cacheDir" : globalThis.assistAppStageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").cacheDir,
            "tempDir" : globalThis.assistAppStageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").tempDir,
            "filesDir" : globalThis.assistAppStageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").filesDir,
            "distributedFilesDir" : globalThis.assistAppStageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").distributedFilesDir,
            "databaseDir" : globalThis.assistAppStageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").databaseDir,
            "storageDir" : globalThis.assistAppStageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").storageDir,
            "bundleCodeDir" : globalThis.assistAppStageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication").bundleCodeDir
        };

        var  mainHapBundleContextDir= {
            "cacheDir" : globalThis.assistAppAbilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication").cacheDir,
            "tempDir" : globalThis.assistAppAbilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication").tempDir,
            "filesDir" : globalThis.assistAppAbilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication").filesDir,
            "distributedFilesDir" : globalThis.assistAppAbilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication").distributedFilesDir,
            "databaseDir" : globalThis.assistAppAbilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication").databaseDir,
            "storageDir" : globalThis.assistAppAbilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication").storageDir,
            "bundleCodeDir" : globalThis.assistAppAbilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication").bundleCodeDir
        };

        commonEvent.publish("assist_app_MainAbility_Start_CommonEvent",
            {
                parameters: {
                    assistAbilityContext: abilityContextDir,
                    assistAbilityStageContext: abilityStageContextDir,
                    assistAbilityApplicationContext: abilityApplicationDir,
                    assistStageApplicationContext: abilityStageApplicationDir,
                    assistBundleContext: abilityBundleContextDir,
                    assistStageBundleContext: abilityStageBundleContextDir,
                    assistApplicationBundleContext: abilityApplicationBundleContextDir,
                    assistStageApplicationBundleContext: abilityStageApplicationBundleContextDir,
                    assistMainHapBundleContext: mainHapBundleContextDir
                }
            }, () => {
                console.log("assist_app_MainAbility Publish CallBack assist_app_MainAbility_Start_CommonEvent")
            });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("assist_app_MainAbility terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("assist_app_MainAbility terminateSelf error: " + JSON.stringify(error))
            })
        }, 500)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("assist_app_MainAbility onWindowStageDestroy")
        commonEvent.publish("assist_app_MainAbility_Destroy_CommonEvent", () => {
            console.log("assist_app_MainAbility Publish CallBack assist_app_MainAbility_Destroy_CommonEvent")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("assist_app_MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("assist_app_MainAbility onBackground")
    }
};
