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

export default class Entry2SingleMainAbility extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MainAbility onCreate");
    globalThis.entry2SingleAbilityWant = want;
    commonEvent.publish("entry2SingleMainAbility_onCreate", () => {
      console.log("MainAbility Publish CallBack entry2SingleMainAbility_onCreate")
    });

    this.context.startAbility({
      abilityName: "com.example.etsmyapplication.SingletonAbility",
      bundleName: "com.example.etsmyapplication",
    }, (error, data) => {
      console.log("SingletonAbility success, err: " +
      JSON.stringify(error) + ",data: " + JSON.stringify(data));
      commonEvent.publish("SingletonAbility_Event", () => {
        console.log("SingletonAbility_Event publish success!")
      });
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2SingleMainAbility onDestroy");
    commonEvent.publish("entry2SingleMainAbility_onDestroy", () => {
      console.log("MainAbility Publish CallBack entry2SingleMainAbility_onDestroy")
    });
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2SingleMainAbility onWindowStageCreate");
    globalThis.entry2SingleAbilityContext = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("entry2SingleMainAbility_onWindowStageCreate",
      {
        parameters: {
          entry2SingleAbilityContext:
          globalThis.entry2SingleAbilityContext,
          entry2SingleStageContext:
          globalThis.entry2SingleStageContext
        }
      },() => {
      console.log("MainAbility Publish CallBack entry2SingleMainAbility_onWindowStageCreate")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("Entry2SingleAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2SingleAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 500)
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2SingleMainAbility onWindowStageDestroy") ;
    commonEvent.publish("entry2SingleMainAbility_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack entry2SingleMainAbility_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2SingleMainAbility onForeground");
    commonEvent.publish("entry2SingleMainAbility_onForeground", () => {
      console.log("MainAbility Publish CallBack entry2SingleMainAbility_onForeground")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("Entry2SingleMainAbilityEventTest terminateSelf windowStage data: " +
        JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2SingleMainAbilityEventTest terminateSelf windowStage error: " +
        JSON.stringify(error))
      })
    }, 5000)
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2SingleMainAbility onBackground");
    commonEvent.publish("entry2SingleMainAbility_onBackground", () => {
      console.log("MainAbility Publish CallBack entry2SingleMainAbility_onBackground")
    });
  }
};
