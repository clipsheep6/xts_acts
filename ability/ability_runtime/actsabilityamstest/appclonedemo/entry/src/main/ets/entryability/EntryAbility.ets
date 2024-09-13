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
import { BusinessError } from '@ohos.base';
import commonEvent from '@ohos.commonEventManager';
import process from '@ohos.process';
import { AbilityConstant, common, UIAbility } from '@kit.AbilityKit';
import { hilog } from '@kit.PerformanceAnalysisKit';
import { window } from '@kit.ArkUI';
let START_ABILITY_EVENT = 'start_ability_event';
let FOREGROUND_EVENT = 'foreground_event'
let NOTIFY_PID_EVENT = 'notify_pid_event';
let KILL_PROCESS_EVENT = 'kill_process_event';
let tag = '[ACTS_StartAbilityInNewProcess EntryAbility]';
let commonEventData: commonEvent.CommonEventPublishData = {
  parameters: {
    num: -1,
    pid: -1
  }
};

export default class EntryAbility extends UIAbility {
  async onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): Promise<void> {
    console.log(`${tag} onCreate, ${JSON.stringify(want)}`);
    let subscribeInfo: commonEvent.CommonEventSubscribeInfo = {
      events: [START_ABILITY_EVENT, KILL_PROCESS_EVENT],
    };
    let subscriber = await commonEvent.createSubscriber(subscribeInfo);
    commonEvent.subscribe(subscriber, (err, data) => {
      console.log(`${tag} data: ${JSON.stringify(data)}}`);
      let dataObj = data.parameters as Map<string,object>
      switch (data.event) {
        case START_ABILITY_EVENT: {
          if (dataObj['targetPid'] !== process.pid) {
            return;
          }
          if (dataObj['isDone'] as number == 1) {
            commonEvent.unsubscribe(subscriber, (err, data) => {
              console.info(`${tag} unsubscribe success`);
            })
          }
        }
          break;
        case KILL_PROCESS_EVENT: {
          if (dataObj['targetPid'] !== process.pid) {
            return;
          }
          if (dataObj['isDone'] as number == 1) {
            commonEvent.unsubscribe(subscriber, (err, data) => {
              console.info(`${tag} unsubscribe success`);
            })
          }
          this.context.terminateSelf();
        }
          break;
        default:
          break;
      }
    });
    commonEventData.parameters!.pid = process.pid;
    console.log(`${tag} pid: ${commonEventData.parameters!.pid}`);
    commonEvent.publish(NOTIFY_PID_EVENT, commonEventData, (err)=>{
      console.log(`${tag} publish NOTIFY_PID_EVENT err: ${JSON.stringify(err)}`);
    });
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    AppStorage.setOrCreate('pageContent', 'IndexOne');

    windowStage.loadContent('pages/Index', (err) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content.');
    });


  }

  onWindowStageDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  async onForeground() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    commonEventData.parameters!.pid = process.pid;
    commonEvent.publish(FOREGROUND_EVENT, commonEventData, (err) => {
      console.log(`${tag} publish FOREGROUND_EVENT err: ${JSON.stringify(err)}`);
    });
   setTimeout(()=>{
     this.terminalSelf();
   },2000);
  }

  async terminalSelf(){
    let resultCode = 100;
    let want: Want = {
      bundleName: 'com.acts.appclonedemo',
      abilityName: 'EntryAbility',
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
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
