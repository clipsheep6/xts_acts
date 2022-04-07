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

export default class MainAbility4 extends Ability {
    onCreate() {
        console.log("MainAbility4 onCreate");
        commonEvent.publish("mainAbility4_onCreate", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onCreate")
        });

        this.context.startAbilityForResult({
            abilityName: "com.example.etsmyapplication.MainAbility5",
            bundleName: "com.example.etsmyapplication"
        }, (error, data) => {
            console.log(": startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            commonEvent.publish("mainAbility5_data", {
                parameters:{
                    mainAbility5_resultCode: data.resultCode,
                    mainAbility5_bundleName: data.want.bundleName,
                    mainAbility5_abilityName: data.want.abilityName,
                }
            }, () => {
                console.log("mainAbility5_data send success!")
            });
        });

    }

    onDestroy() {
        console.log("MainAbility4 onDestroy");
        commonEvent.publish("mainAbility4_onDestroy", () => {
            console.log("MainAbility4 Publish CallBack MainAbility4_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("MainAbility4 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("mainAbility4_onWindowStageCreate", () => {
            console.log("MainAbility4 Publish CallBack MainAbility4_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        console.log("MainAbility4 onWindowStageDestroy");
        commonEvent.publish("mainAbility4_onWindowStageDestroy", () => {
            console.log("MainAbility4 Publish CallBack MainAbility4_onWindowStageDestroy")
        });
    }

    onForeground() {
        console.log("MainAbility4 onForeground");
        commonEvent.publish("mainAbility4_onForeground", () => {
            console.log("MainAbility4 Publish CallBack MainAbility4_onForeground")
        });
    }

    onBackground() {
        console.log("MainAbility4 onBackground");
        commonEvent.publish("mainAbility4_onBackground", () => {
            console.log("MainAbility4 Publish CallBack MainAbility4_onBackground")
        });
    }
};
