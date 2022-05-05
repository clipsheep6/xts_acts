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
export default class MainAbility5 extends Ability {
    onCreate() {
        console.log("MainAbility5 onCreate");
        commonEvent.publish("mainAbility5_onCreate", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onCreate")
        });

        setTimeout(() => {
            this.context.terminateSelfWithResult({
                resultCode: 1,
                want: {
                    abilityName: "com.example.etsmyapplication.MainAbility5",
                    bundleName: "com.example.etsmyapplication"
                }
            }).then((data) => {
                console.log("MainAbility5 EventTest terminateSelf onCreate data: " + JSON.stringify(data));
            }).catch((error) => {
                console.log("MainAbility5 EventTest terminateSelf onCreate error: " + JSON.stringify(error));
            })
        }, 2000)
    }

    onDestroy() {
        console.log("MainAbility5 onDestroy");
        commonEvent.publish("mainAbility5_onDestroy", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("MainAbility5 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("mainAbility5_onWindowStageCreate", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        console.log("MainAbility5 onWindowStageDestroy");
        commonEvent.publish("mainAbility5_onWindowStageDestroy", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onWindowStageDestroy")
        });
    }

    onForeground() {
        console.log("MainAbility5 onForeground");
        commonEvent.publish("mainAbility5_onForeground", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onForeground")
        });
    }

    onBackground() {
        console.log("MainAbility5 onBackground");
        commonEvent.publish("mainAbility5_onBackground", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onBackground")
        });
    }
};
