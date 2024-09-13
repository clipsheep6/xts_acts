/*
 * Copyright (C) 2024 HiHope Open Source Organization.
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
import commonEvent from '@ohos.commonEventManager';
import { AbilityConstant, common } from '@kit.AbilityKit';
import { hilog } from '@kit.PerformanceAnalysisKit';
import { window } from '@kit.ArkUI';
import { BusinessError } from '@kit.BasicServicesKit';
let ON_FOREGROUND = "on_foreground";
let SHOW_ABILITY_EVENT = "show_ability_event";
let HIDE_ABILITY_EVENT = "hide_ability_event";
let START_ABILITY_IN_NEW_PROCESS_EVENT = "start_ability_in_new_process_event";
let tag = '[ACTS_StartAbilityInNewProcess MainAbility1]';
let commonEventData: commonEvent.CommonEventPublishData = {
  parameters: {
    num: -1,
  }
};

export default class MainAbility1 extends Ability {
  async onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): Promise<void> {
    console.log(`${tag} onCreate`);
    let subscribeInfo:commonEvent.CommonEventSubscribeInfo  = {
      events: [SHOW_ABILITY_EVENT, HIDE_ABILITY_EVENT],
    };
    let subscriber = await commonEvent.createSubscriber(subscribeInfo);
    commonEvent.subscribe(subscriber, async (err, data) => {
      console.log(`${tag} data: ${JSON.stringify(data)}}`);
      commonEvent.unsubscribe(subscriber, (err, data) => {
        console.info(`${tag} unsubscribe success`);
      })
      switch (data.event) {
        case SHOW_ABILITY_EVENT: {
          console.log(`${tag} showAbility`);
          try {
            await this.context.showAbility();
          } catch (err) {
            console.log(`${tag} showAbility err: ${JSON.stringify(err)}`);
            commonEventData.parameters!.num = err.code;
            commonEvent.publish(START_ABILITY_IN_NEW_PROCESS_EVENT, commonEventData, (err)=>{
              console.log(`${tag} publish err: ${JSON.stringify(err)}`);
            });
          }
        }
          break;
        case HIDE_ABILITY_EVENT: {
          try {
            await this.context.hideAbility();
          } catch (err) {
            console.log(`${tag} showAbility err: ${JSON.stringify(err)}`);
            commonEventData.parameters!.num = err.code;
            commonEvent.publish(START_ABILITY_IN_NEW_PROCESS_EVENT, commonEventData, (err)=>{
              console.log(`${tag} publish err: ${JSON.stringify(err)}`);
            });
          }
        }
          break;
        default:
          break;
      }
    });
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    AppStorage.setOrCreate('pageContent', 'IndexTwo');

    windowStage.loadContent('pages/Index', (err) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content.');
    });
  }

  onWindowStageDestroy(): void {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    commonEvent.publish(ON_FOREGROUND, (err)=>{
      console.log(`${tag} publish err: ${JSON.stringify(err)}`);
    });
    setTimeout(()=>{
      this.terminalSelf()
    },2000)
  }
  async terminalSelf(){
    let resultCode = 100;
    let want: Want = {
      bundleName: 'com.acts.appclonedemo',
      abilityName: 'MainAbility1',
    };
    let abilityResult: common.AbilityResult = {
      want,
      resultCode
    };
    await this.context.terminateSelfWithResult(abilityResult).then((data) => {
      hilog.info(0x0000, 'testTag', '%{public}s', 'EntryAbility terminateSelf sucess' + JSON.stringify(data));
    }).catch((err: BusinessError) => {
      hilog.info(0x0000, 'testTag', '%{public}s', 'EntryAbility terminateSelf errCode:' + JSON.stringify(err.code) +
        'errMessage:' + JSON.stringify(err.message));
    });
  }


  onBackground(): void {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }

}