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

let lifelist = [];
function PublishCallBackOne() {
    console.debug("====>Publish CallBack ACTS_Start_CommonEvent====>");
    console.debug("====>close this context====>3====>");
}
function sleep(time) {
    return new Promise((resolve)=>setTimeout(resolve,time));
}
export default class MainAbility2 extends Ability {

    onCreate(want, launchParam) {
        console.log("MainAbility2 onCreate");
        globalThis.abilityWant2 = want;
        lifelist.push("MainAbility2_onCreate");
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility2 onDestroy");
        lifelist.push("MainAbility2_onDestroy")
        commonEvent.publish("ACTS_Start_CommonEvent", {
            parameters:{
                "lifList" : lifelist
            }
        }, PublishCallBackOne);
        sleep(2000)
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility2 onWindowStageCreate");
        lifelist.push("MainAbility2_onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index2", null);
        globalThis.ability3Context = this.context;
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility2 onWindowStageDestroy");
        lifelist.push("MainAbility2_onWindowStageDestroy");
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility2 onForeground");
        lifelist.push("MainAbility2_onForeground");
        sleep(1000);
        this.context.terminateSelf((err, data)=>{
            console.log("MainAbility2 onForeground terminateSelf:" + JSON.stringify(err));
        })
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility2 onBackground");
        lifelist.push("MainAbility2_onBackground");
    }
};
