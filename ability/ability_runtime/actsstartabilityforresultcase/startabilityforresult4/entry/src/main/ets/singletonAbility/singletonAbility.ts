/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import hilog from '@ohos.hilog';
import UIAbility from '@ohos.app.ability.UIAbility';
import Want from '@ohos.app.ability.Want';
import window from '@ohos.window';
import CommonEventManager from '@ohos.commonEventManager';

const TAG: string = 'StartAbilityForResult4 EntryAbility';
const TEST_SUITE_NAME: string = 'ActsStartAbilityForResultTest';

const TEST_CASE_NAME: string = 'SingletonAbility4';

function sleep(time) {
  return new Promise((resolve) => setTimeout(resolve, time));
}

export default class singletonAbility extends UIAbility {
  resultNum: number = 0;
  optionsData = '';
  optionsData2 = '';

  subscriber;

  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): void {
    hilog.info(0x0000, TEST_CASE_NAME, '%{public}s', 'Ability onCreate');
    this.resultNum++;
    this.optionsData = this.optionsData + '_onCreate';

    let subscribeInfo = {
      events: ["EVENT_START_ABILITY5", "EVENT_TERMINATE_SELF_ABILITY4"]
    };

    let that = this
    CommonEventManager.createSubscriber(subscribeInfo, (err, commonEventSubscriber) => {
      if (!err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber success " ${JSON.stringify(err)}`);
        this.subscriber = commonEventSubscriber;
        CommonEventManager.subscribe(this.subscriber, (err, data) => {
          if (err) {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "callback failed  " ${JSON.stringify(err)}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "callback success  " ${JSON.stringify(data)}`);
            if (data.event === "EVENT_TERMINATE_SELF_ABILITY4") {
              that.terminateSelfWithResult()
            } else {
              that.startAbility()
            }
          }
        });
      } else {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber failed " ${JSON.stringify(err)}`);
      }
    });

  }

  onDestroy(): void {
    hilog.info(0x0000, TEST_CASE_NAME, '%{public}s', 'Ability onDestroy',);
    this.optionsData2 += "_onDestroy"
    let options = {
      code: 0, //公共事件的初始代码
      data: this.optionsData2, //公共事件的初始数据
      isOrdered: true   //有序公共事件
    }

    CommonEventManager.publish("EVENT_SingletonAbility4_onDestroy", options, (err) => {
      console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} publish EVENT_SingletonAbility4_onDestroy err ${JSON.stringify(err)}`);
    });
    if (this.subscriber) {
      CommonEventManager.unsubscribe(this.subscriber);
    }

  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    this.optionsData = this.optionsData + '_onWindowStageCreate';
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    windowStage.loadContent('singletonAbility/pages/singletonIndex', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
    this.resultNum++;


  }

  onWindowStageDestroy(): void {
    // Main window is destroyed, release UI related resources
    this.optionsData2 += "_onWindowStageDestroy"
    hilog.info(0x0000, TEST_CASE_NAME, '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    this.resultNum++;
    this.optionsData = this.optionsData + '_onForeground';
    //公共事件相关信息
    let options = {
      code: 0, //公共事件的初始代码
      data: this.optionsData, //公共事件的初始数据
      isOrdered: true   //有序公共事件
    }

    setTimeout(() => {
      CommonEventManager.publish("auxiliary_siginevent1", options, (err) => {
        if (err) {
          console.error("testTag publish failed " + JSON.stringify(err));
        } else {
          console.info("testTag publish");
        }
      });
    }, 1000)

  }

  terminateSelfWithResult() {
    let terwant25: Want = {
      bundleName: 'com.acts.startabilityforresult4',
      abilityName: 'singletonAbility',
    };

    this.context.terminateSelfWithResult({
      resultCode: 699,
      want: terwant25
    })
      .then((result) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
      })
      .catch((err) => {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
      });
  }

  startAbility() {
    let want25: Want = {
      bundleName: 'com.acts.startabilityforresult5',
      abilityName: 'EntryAbility'
    }

    this.context.startAbilityForResult(want25)
      .then((result) => {
        console.info(`${TEST_CASE_NAME} result is ${JSON.stringify(result)}`);
      })
      .catch((err) => {
        console.info(`${TEST_CASE_NAME}  err is ${JSON.stringify(err)}`);
      });
  }


  onBackground(): void {
    // Ability has back to background
    this.optionsData2 += "_onBackground"
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
