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
        commonEvent.publish("entry2_mainAbility_onCreate_help", () => {
            console.log("MainAbility Publish CallBack mainAbility_onCreate")
        });

        setTimeout(() => {
            this.context.terminateSelfWithResult({
                resultCode: 1,
                want: {
                    abilityName : "com.example.entry2.MainAbility",
                    bundleName : "com.example.etsmyapplicationhelp"
                }
            }).then((data) => {
                console.log("MainAbility3EventTest terminateSelf onCreate data: " + JSON.stringify(data));
            }).catch((error) => {
                console.log("MainAbility3EventTest terminateSelf onCreate error: " + JSON.stringify(error));
            })
        }, 1000)

    }

    onDestroy() {
        console.log("MainAbility onDestroy");
        commonEvent.publish("entry2_mainAbility_onDestroy_help", () => {
            console.log("MainAbility Publish CallBack mainAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("MainAbility onWindowStageCreate");
        globalThis.abilityContext = this.context;
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("entry2_mainAbility_onWindowStageCreate_help", () => {
            console.log("MainAbility Publish CallBack mainAbility_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        console.log("MainAbility onWindowStageDestroy") ;
        commonEvent.publish("entry2_mainAbility_onWindowStageDestroy_help", () => {
            console.log("MainAbility Publish CallBack mainAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        console.log("MainAbility onForeground");
        commonEvent.publish("entry2_mainAbility_onForeground_help", () => {
            console.log("MainAbility Publish CallBack mainAbility_onForeground")
        });
    }

    onBackground() {
        console.log("MainAbility onBackground");
        commonEvent.publish("entry2_mainAbility_onBackground_help", () => {
            console.log("MainAbility Publish CallBack mainAbility_onBackground")
        });
    }
};
