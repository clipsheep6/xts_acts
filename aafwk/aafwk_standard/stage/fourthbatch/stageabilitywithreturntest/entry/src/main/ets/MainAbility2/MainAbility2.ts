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
export default class MainAbility2 extends Ability {
    onCreate() {
        console.log("MainAbility2 onCreate");
        commonEvent.publish("mainAbility2_onCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onCreate")
        });

        var lifecycleList = globalThis.lifecyleList;
        var callback_resultCode = lifecycleList[0];
        var callback_want = lifecycleList[1];
        if (callback_resultCode[0] == "resultCode") {
            var resultCode = callback_resultCode[1];
        }
        if (callback_want[0] == "want") {
            var want = callback_want[1];
        }
        console.log("terminateSelfWithResult_want: " + JSON.stringify(want));
        console.log("terminateSelfWithResult_resultCode: " + JSON.stringify(resultCode));

        setTimeout(() => {
            this.context.terminateSelfWithResult({
                resultCode: resultCode,
                want: want
            }).then((data) => {
                console.log("MainAbility2EventTest terminateSelf onCreate data: " + JSON.stringify(data));
            }).catch((error) => {
                console.log("MainAbility2EventTest terminateSelf onCreate error: " + JSON.stringify(error));
            })
        }, 2000)

    }

    onDestroy() {
        console.log("MainAbility2 onDestroy");
        commonEvent.publish("mainAbility2_onDestroy", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("MainAbility2 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("mainAbility2_onWindowStageCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        console.log("MainAbility2 onWindowStageDestroy");
        commonEvent.publish("mainAbility2_onWindowStageDestroy", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        console.log("MainAbility2 onForeground");
        commonEvent.publish("mainAbility2_onForeground", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onForeground")
        });
    }

    onBackground() {
        console.log("MainAbility2 onBackground");
        commonEvent.publish("mainAbility2_onBackground", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onBackground")
        });
    }
};
