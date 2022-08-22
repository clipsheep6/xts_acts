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

export default class Entry2MainAbility2 extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MainAbility2 onCreate");
    globalThis.entry2Ability2Want = want;
    commonEvent.publish("entry2MainAbility2_onCreate", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility2_onCreate")
    });

    this.context.startAbility({
      abilityName: "com.example.entry3.Entry3MainAbility2",
      bundleName: "com.example.etsmyapplication",
    }, (error, data) => {
      console.log("Entry3MainAbility2 success, err: " +
      JSON.stringify(error) + ",data: " + JSON.stringify(data));
      commonEvent.publish("Entry3MainAbility2_Event", () => {
        console.log("Entry3MainAbility2_Event publish success!")
      });
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2MainAbility2 onDestroy");
    commonEvent.publish("entry2MainAbility2_onDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility2_onDestroy")
    });

  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2MainAbility2 onWindowStageCreate");
    globalThis.entry2Ability2Context = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("entry2MainAbility2_onWindowStageCreate", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility2_onWindowStageCreate")
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2MainAbility2 onWindowStageDestroy") ;
    commonEvent.publish("entry2MainAbility2_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility2_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2MainAbility2 onForeground");
    commonEvent.publish("entry2MainAbility2_onForeground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility2_onForeground")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("Entry2MainAbility2EventTest terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2MainAbility2EventTest terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 5000)
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2MainAbility2 onBackground");
    commonEvent.publish("entry2MainAbility2_onBackground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility2_onBackground")
    });
  }
};
