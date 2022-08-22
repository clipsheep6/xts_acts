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

export default class MainAbility3 extends Ability {
    onCreate() {
        console.log("MainAbility3 onCreate");
        commonEvent.publish("mainAbility3_onCreate_test_api8", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onCreate_test_api8")
        });
    }

    onDestroy() {
        console.log("MainAbility3 onDestroy");
        commonEvent.publish("mainAbility3_onDestroy_test_api8", () => {
            console.log("MainAbility3 Publish CallBack MainAbility3_onDestroy_test_api8")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("MainAbility3 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("mainAbility3_onWindowStageCreate_test_api8", () => {
            console.log("MainAbility3 Publish CallBack MainAbility3_onWindowStageCreate_test_api8")
        });
    }

    onWindowStageDestroy() {
        console.log("MainAbility3 onWindowStageDestroy");
        commonEvent.publish("mainAbility3_onWindowStageDestroy_test_api8", () => {
            console.log("MainAbility3 Publish CallBack MainAbility3_onWindowStageDestroy_test_api8")
        });
    }

    onForeground() {
        console.log("MainAbility3 onForeground");
        commonEvent.publish("mainAbility3_onForeground_test_api8", () => {
            console.log("MainAbility3 Publish CallBack MainAbility3_onForeground_test_api8")
        });
    }

    onBackground() {
        console.log("MainAbility3 onBackground");
        commonEvent.publish("mainAbility3_onBackground_test_api8", () => {
            console.log("MainAbility3 Publish CallBack MainAbility3_onBackground_test_api8")
        });
    }
};
