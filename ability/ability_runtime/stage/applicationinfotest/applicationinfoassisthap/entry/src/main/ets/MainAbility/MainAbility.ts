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
  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("ActsApplicationInfoAssist  MainAbility onCreate")
    globalThis.abilityWant = want;

    let context = this.context;
    console.log("context: " + JSON.stringify(context))
    console.log("getApplicationInfo success" + JSON.stringify(context.applicationInfo));
    console.log("context.applicationInfo.codePath is : " + JSON.stringify(context.applicationInfo.codePath))
    console.log("context.applicationInfo.removable is : " + JSON.stringify(context.applicationInfo.removable))
    console.log("context.applicationInfo.accessTokenId is : " + JSON.stringify(context.applicationInfo.accessTokenId))
    console.log("context.applicationInfo.codePath is : " + JSON.stringify(context.applicationInfo.codePath))
    commonEvent.publish("contextApplicationInfo", {
      parameters: {
        codePath: context.applicationInfo.codePath,
        removable: context.applicationInfo.removable,
        accessTokenId: context.applicationInfo.accessTokenId

      }
    }, () => {
      console.log("AUX MainAbility Publish CallBack data.codePath")
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("ActsApplicationInfoAssist  MainAbility onDestroy")
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("ActsApplicationInfoAssist  MainAbility onWindowStageCreate")

    windowStage.setUIContent(this.context, "pages/index/index", null)
    console.log("ActsApplicationInfoAssist  MainAbility onWindowStageCreate finish")
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("ActsApplicationInfoAssist  MainAbility onWindowStageDestroy")
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("ActsApplicationInfoAssist  MainAbility onForeground")
  }

  onBackground() {
    // Ability has back to background
    console.log("ActsApplicationInfoAssist  MainAbility onBackground")
  }
};