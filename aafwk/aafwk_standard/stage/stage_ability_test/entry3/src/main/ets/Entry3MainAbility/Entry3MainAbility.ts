/**
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

export default class Entry3MainAbility extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry3MainAbility onCreate");
    commonEvent.publish("entry3MainAbility_onCreate", () => {
      console.log("MainAbility Publish CallBack entry3MainAbility_onCreate")
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry3MainAbility onDestroy");
    commonEvent.publish("entry3MainAbility_onDestroy", () => {
      console.log("MainAbility Publish CallBack entry3MainAbility_onDestroy")
    });
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry3MainAbility onWindowStageCreate");
    globalThis.entry3AbilityContext = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("entry3MainAbility_onWindowStageCreate",
      {
        parameters: {
          entry3AbilityContext:
          globalThis.entry3AbilityContext,
          entry3stageContext:
          globalThis.entry3stageContext
        }
      },() => {
      console.log("MainAbility Publish CallBack entry3MainAbility_onWindowStageCreate")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("EntryAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("EntryAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 500)
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry3MainAbility onWindowStageDestroy") ;
    commonEvent.publish("entry3MainAbility_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack entry3MainAbility_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry3MainAbility onForeground");
    commonEvent.publish("entry3MainAbility_onForeground", () => {
      console.log("MainAbility Publish CallBack entry3MainAbility_onForeground")
    });
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry3MainAbility onBackground");
    commonEvent.publish("entry3MainAbility_onBackground", () => {
      console.log("MainAbility Publish CallBack entry3MainAbility_onBackground")
    });
  }
};
