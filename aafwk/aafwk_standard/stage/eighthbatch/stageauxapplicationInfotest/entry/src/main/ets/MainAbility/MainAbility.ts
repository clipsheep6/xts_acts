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
        console.log("AUX MainAbility onCreate")
        globalThis.abilityWant = want;

        var context = this.context;
        console.log("context: " + JSON.stringify(context))
        if(context.applicationInfo != "") {
            console.log("getApplicationInfo success" + JSON.stringify(context.applicationInfo));
            console.log("context.applicationInfo.codePath is : " + JSON.stringify(context.applicationInfo.codePath))
            console.log("context.applicationInfo.removable is : " + JSON.stringify(context.applicationInfo.removable))
            console.log("context.applicationInfo.accessTokenId is : " + JSON.stringify(context.applicationInfo.accessTokenId))
            console.log("context.applicationInfo.entityType is : " + JSON.stringify(context.applicationInfo.entityType))
            if(context.applicationInfo.codePath != "") {
                console.log("context.applicationInfo.codePath is : " + JSON.stringify(context.applicationInfo.codePath))
                commonEvent.publish("getCodePath", {
                    parameters:{
                        codePath: context.applicationInfo.codePath
                    }
                }, () => {
                    console.log("AUX MainAbility Publish CallBack data.codePath")
                });
            } else if(context.applicationInfo.removable != "") {
                console.log("context.applicationInfo.removable is : " + JSON.stringify(context.applicationInfo.removable))
                commonEvent.publish("getRemovable", {
                    parameters:{
                        removable: context.applicationInfo.removable
                    }
                }, () => {
                    console.log("AUX MainAbility Publish CallBack data.removable")
                });
            }else if(context.applicationInfo.accessTokenId != "") {
                console.log("context.applicationInfo.accessTokenId is : " + JSON.stringify(context.applicationInfo.accessTokenId))
                commonEvent.publish("getAccessTokenId", {
                    parameters:{
                        accessTokenId: context.applicationInfo.accessTokenId
                    }
                }, () => {
                    console.log("AUX MainAbility Publish CallBack data.accessTokenId")
                });
            }else if(context.applicationInfo.entityType != "") {
                console.log("context.applicationInfo.entityType is : " + JSON.stringify(context.applicationInfo.entityType))
                commonEvent.publish("getEntityType", {
                    parameters:{
                        entityType: context.applicationInfo.entityType
                    }
                }, () => {
                    console.log("AUX MainAbility Publish CallBack data.entityType")
                });
            }

        }
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("AUX MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("AUX MainAbility onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("AUX MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("AUX MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("AUX MainAbility onBackground")
    }
};
