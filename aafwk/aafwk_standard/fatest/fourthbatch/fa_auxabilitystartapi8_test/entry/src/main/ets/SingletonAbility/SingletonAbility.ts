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

export default class SingletonAbility extends Ability {

    onCreate() {
        console.log("SingletonAbility onCreate");
        commonEvent.publish("singletonAbility_onCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onCreate")
        });

        setTimeout(()=>{
            this.context.terminateSelfWithResult({
                resultCode: 1,
                want:
                {
                    abilityName : "com.example.etsmyapplicationhelp.SingletonAbility",
                    bundleName : "com.example.etsmyapplicationhelp"
                },}).then((data) => {
                console.log("SingletonAbilityEventTest terminateSelf onCreate data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("SingletonAbilityEventTest terminateSelf onCreate error: " + JSON.stringify(error))
            })
        }, 1000)
    }

    onDestroy() {
        console.log("SingletonAbility onDestroy");
        commonEvent.publish("singletonAbility_onDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        console.log("SingletonAbility onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("singletonAbility_onWindowStageCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onWindowStageCreate")
        });

    }

    onWindowStageDestroy() {
        console.log("SingletonAbility onWindowStageDestroy") ;
        commonEvent.publish("singletonAbility_onWindowStageDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        console.log("SingletonAbility onForeground");
        commonEvent.publish("singletonAbility_onForeground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onForeground")
        });
    }

    onBackground() {
        console.log("SingletonAbility onBackground");
        commonEvent.publish("singletonAbility_onBackground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onBackground")
        });
    }
};
