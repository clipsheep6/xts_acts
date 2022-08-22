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

export default class Entry2MulMainAbility extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MulMainAbility onCreate");
    globalThis.entry2MulAbilityWant = want;
    commonEvent.publish("entry2MulMainAbility_onCreate", () => {
      console.log("MainAbility Publish CallBack entry2MulMainAbility_onCreate")
    });

    this.context.startAbility({
      abilityName: "com.example.etsmyapplication.MultiAbility",
      bundleName: "com.example.etsmyapplication",
    }, (error, data) => {
      console.log("MultiAbility success, err: " +
      JSON.stringify(error) + ",data: " + JSON.stringify(data));
      commonEvent.publish("MultiAbility_Event", () => {
        console.log("MultiAbility_Event publish success!")
      });
    });
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2MulMainAbility onDestroy");
    commonEvent.publish("entry2MulMainAbility_onDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MulMainAbility_onDestroy")
    });
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2MulMainAbility onWindowStageCreate");
    globalThis.entry2MulAbilityContext = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("entry2MulMainAbility_onWindowStageCreate",
      {
        parameters: {
          entry2MulAbilityContext:
          globalThis.entry2MulAbilityContext,
          entry2MulStageContext:
          globalThis.entry2MulStageContext
        }
      },() => {
      console.log("MainAbility Publish CallBack entry2MulMainAbility_onWindowStageCreate")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("Entry2MulAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2MulAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 500)
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2MulMainAbility onWindowStageDestroy") ;
    commonEvent.publish("entry2MulMainAbility_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MulMainAbility_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2MulMainAbility onForeground");
    commonEvent.publish("entry2MulMainAbility_onForeground", () => {
      console.log("MainAbility Publish CallBack entry2MulMainAbility_onForeground")
    });
    setTimeout(()=>{
      this.context.terminateSelf().then((data) => {
        console.log("Entry2MulMainAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
      }).catch((error) => {
        console.log("Entry2MulMainAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
      })
    }, 5000)
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2MulMainAbility onBackground");
    commonEvent.publish("entry2MulMainAbility_onBackground", () => {
      console.log("MainAbility Publish CallBack entry2MulMainAbility_onBackground")
    });
  }
};
