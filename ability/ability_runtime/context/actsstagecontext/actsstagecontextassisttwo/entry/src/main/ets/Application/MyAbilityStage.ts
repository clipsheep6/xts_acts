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

import AbilityStage from "@ohos.app.ability.AbilityStage";
import commonEvent from '@ohos.commonEvent';
import common from '@ohos.app.ability.common';

function sleep(delay) {
  let start = new Date().getTime();
  while (true) {
    if (new Date().getTime() - start > delay) {
      break;
    }
  }
}

export default class MyAbilityStage extends AbilityStage {
  onCreate() {
    console.info("ActsStageContextAssistTwo AbilityStage onCreate");
    AppStorage.setOrCreate<common.AbilityStageContext>("abilityStageContextB", this.context);
    AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!
  }

  onAcceptWant(want) {
    console.log("ActsStageContextAssistTwo onAcceptWant called want:" + JSON.stringify(want));

    async function publishContext() {
      let stageContextJson = {
        'cacheDir': AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.cacheDir,
        'tempDir': AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.tempDir,
        'filesDir': AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.filesDir,
        'distributedFilesDir': AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.distributedFilesDir,
        'databaseDir': AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.databaseDir,
        'preferencesDir': AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.preferencesDir,
        'bundleCodeDir': AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.bundleCodeDir
      };

      let stageAppContext = AppStorage.get<common.AbilityStageContext>("abilityStageContextB")!.getApplicationContext();

      let stageAppContextJson = {
        'cacheDir': stageAppContext.cacheDir,
        'tempDir': stageAppContext.tempDir,
        'filesDir': stageAppContext.filesDir,
        'distributedFilesDir': stageAppContext.distributedFilesDir,
        'databaseDir': stageAppContext.databaseDir,
        'preferencesDir': stageAppContext.preferencesDir,
        'bundleCodeDir': stageAppContext.bundleCodeDir
      };

      let commonEventData = {
        parameters: {
          abilityStageContextAssistOne: stageContextJson,
          abilityStageAppContextAssistOne: stageAppContextJson,
        }
      }
      commonEvent.publish("AssistContextTwo_StageAbilityA_Start_CommonEvent", commonEventData, () => {
        console.log("Publish AssistContextTwo_StageAbilityA_Start_CommonEvent callback");
      })
    }

    publishContext();
    sleep(500);
    let abilityId = want.parameters.startId.toString();
    return abilityId;
  }
}