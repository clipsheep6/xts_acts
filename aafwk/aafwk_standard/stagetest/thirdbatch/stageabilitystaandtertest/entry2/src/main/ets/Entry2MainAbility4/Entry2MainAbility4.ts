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

export default class Entry2MainAbility4 extends Ability {

  onCreate(want, launchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("Entry2MainAbility4 onCreate");
    globalThis.entry2Ability4Want = want;
    globalThis.resultCode = 1;
    globalThis.abilityName = "com.example.entry2.Entry2MainAbility4";
    globalThis.bundleName = "com.example.etsmyapplication";
    var resultCodeWithResult = globalThis.resultCode;
    var abilityNameWithResult = globalThis.abilityName;
    var bundleNameWithResult = globalThis.bundleName;

    commonEvent.publish("entry2MainAbility4_onCreate", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility4_onCreate")
    });

    this.context.terminateSelfWithResult({
      resultCode: resultCodeWithResult,
      want:
      {
        abilityName : abilityNameWithResult,
        bundleName : bundleNameWithResult
      },
    }).then((data) => {
      console.log("entryMainAbility4WithResultEventTest terminateSelf onCreate data: " +
      JSON.stringify(data))
      commonEvent.publish("entryMainAbility4WithResult", {
        parameters:{
          resultCode: resultCodeWithResult,
          abilityName: abilityNameWithResult,
          bundleName: bundleNameWithResult
        }
      }, () => {
        console.log("entryMainAbility4WithResultWithResult Publish CallBack success")
      });
    }).catch((error) => {
      console.log("entryMainAbility4WithResultEventTest terminateSelf onCreate error: " +
      JSON.stringify(error))
    })
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("Entry2MainAbility4 onDestroy");
    commonEvent.publish("entry2MainAbility4_onDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility4_onDestroy")
    });

  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log("Entry2MainAbility4 onWindowStageCreate");
    globalThis.entry2Ability4Context = this.context;
    windowStage.setUIContent(this.context, "pages/index", null);
    commonEvent.publish("entry2MainAbility4_onWindowStageCreate", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility4_onWindowStageCreate")
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("Entry2MainAbility4 onWindowStageDestroy") ;
    commonEvent.publish("entry2MainAbility4_onWindowStageDestroy", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility4_onWindowStageDestroy")
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("Entry2MainAbility4 onForeground");
    commonEvent.publish("entry2MainAbility4_onForeground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility4_onForeground")
    });
  }

  onBackground() {
    // Ability has back to background
    console.log("Entry2MainAbility4 onBackground");
    commonEvent.publish("entry2MainAbility4_onBackground", () => {
      console.log("MainAbility Publish CallBack entry2MainAbility4_onBackground")
    });
  }
};
