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

export default class Entry2MainAbility extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MainAbility onCreate");
    globalThis.abilityWant = want;
    commonEvent.publish("Entry2MainAbility_onCreate", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onCreate")
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2MainAbility onDestroy");
    commonEvent.publish("Entry2MainAbility_onDestroy", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onDestroy")
    });
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2MainAbility onWindowStageCreate");
    globalThis.abilityContext = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("Entry2MainAbility_onWindowStageCreate", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onWindowStageCreate")
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2MainAbility onWindowStageDestroy") ;
    commonEvent.publish("Entry2MainAbility_onWindowStageDestroy", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2MainAbility onForeground");
    commonEvent.publish("Entry2MainAbility_onForeground", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onForeground")
    });
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2MainAbility onBackground");
    commonEvent.publish("Entry2MainAbility_onBackground", () => {
      console.log("Entry2MainAbility Publish CallBack Entry2MainAbility_onBackground")
    });
  }
};
