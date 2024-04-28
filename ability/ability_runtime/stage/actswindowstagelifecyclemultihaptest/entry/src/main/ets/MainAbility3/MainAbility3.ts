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

import commonEvent from '@ohos.commonEvent';
import Ability from '@ohos.app.ability.UIAbility';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import Want from '@ohos.app.ability.Want';
import window from '@ohos.window';
import common from '@ohos.app.ability.common';


export default class MainAbility3 extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    console.log("[Demo] MainAbility3 onCreate");
    globalThis.abilityWant = want;

    let getauxMainAbilityContext = {
      events: ["auxMainAbilityContext"]
    }


    let a;


    commonEvent.createSubscriber(getauxMainAbilityContext).then(async (data) => {
      console.debug('====>Create Subscriber====>');
      var Subscriber = data;
      await commonEvent.subscribe(Subscriber, (err, data) => {
        console.log(' Subscribe CallBack data:' + JSON.stringify(data));
        a = data.parameters;
        if (data.event != "") {
          for (var key in data.parameters) {
            console.log("data.parameters[key] is :" + data.parameters[key]);
          }
        }
      });
    });

    let listKey = [];
    let abilityName = "";
    let AbilityLifecycleCallback = {
      onAbilityCreate(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onAbilityCreate');
      },
      onWindowStageCreate(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + ' onWindowStageCreate');
        listKey.push(abilityName + ' onWindowStageCreate');
        console.log('listKey is :' + listKey);
      },
      onWindowStageActive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageActive");
        listKey.push(abilityName + " onWindowStageActive");
        console.log("listKey is :" + listKey);
      },
      onWindowStageInactive(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageInactive");
        listKey.push(abilityName + " onWindowStageInactive");
        console.log("listKey is :" + listKey);
      },
      onWindowStageDestroy(ability, windowStage) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onWindowStageDestroy");
        listKey.push(abilityName + " onWindowStageDestroy");
        console.log("listKey is :" + listKey);
      },
      onAbilityForeground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityForeground");
      },
      onAbilityBackground(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityBackground");
      },
      onAbilityDestroy(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityDestroy");
      },
      onAbilityContinue(ability) {
        abilityName = ability.context.abilityInfo.name;
        console.log(abilityName + " onAbilityContinue");
      }
    }

    setTimeout(() => {
      console.log("mainAbility3ListKey a is : " + JSON.stringify(a));
      //TODO:
      AppStorage.setOrCreate<common.ApplicationContext>("ApplicationContext3", this.context.getApplicationContext());
      let callBackId = AppStorage.get<common.ApplicationContext>('ApplicationContext3')!.on("abilityLifecycle", AbilityLifecycleCallback);
      console.log("mainAbility3ListKey callBackId is : " + callBackId);
      AppStorage.setOrCreate<string[]>("mainAbility3ListKey", listKey);
      console.log("mainAbility3ListKey mainAbility3ListKey is : " + AppStorage.get<string[]>("mainAbility3ListKey")!)
      AppStorage.setOrCreate<number>("mainAbility3CallBackId", callBackId);
      console.log("mainAbility3ListKey listKey is :" + listKey);
      console.log("mainAbility3ListKey AppStorage.get<number>('mainAbility3CallBackId')! is :" + AppStorage.get<number>("mainAbility3CallBackId")!);
    }, 3000)

  }

  onDestroy() {
    console.log("[Demo] MainAbility3 onDestroy");
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("[Demo] MainAbility3 onWindowStageCreate");

    windowStage.loadContent("MainAbility/pages/MainAbility3_pages", null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log("[Demo] MainAbility3 onWindowStageDestroy");
  }

  onForeground() {
    // Ability has brought to foreground
    console.log("[Demo] MainAbility3 onForeground");
  }

  onBackground() {
    // Ability has back to background
    console.log("[Demo] MainAbility3 onBackground");
  }
};
