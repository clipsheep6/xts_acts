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

export default class Entry2MainAbility3 extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MainAbility3 onCreate");
    globalThis.entry2Ability3Want = want;
    commonEvent.publish("entry2MainAbility3_onCreate", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility3_onCreate")
    });

    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("Entry2MainAbility3 terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2MainAbility3 terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 5000)
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2MainAbility3 onDestroy");
    commonEvent.publish("entry2MainAbility3_onDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility3_onDestroy")
    });

  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2MainAbility3 onWindowStageCreate");
    globalThis.entry2Ability3Context = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("entry2MainAbility3_onWindowStageCreate", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility3_onWindowStageCreate")
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2MainAbility3 onWindowStageDestroy") ;
    commonEvent.publish("entry2MainAbility3_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility3_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2MainAbility3 onForeground");
    commonEvent.publish("entry2MainAbility3_onForeground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility3_onForeground")
    });
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2MainAbility3 onBackground");
    commonEvent.publish("entry2MainAbility3_onBackground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility3_onBackground")
    });
  }
};
