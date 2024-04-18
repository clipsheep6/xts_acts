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
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';
const TAG = "assistant 5800:"
const TEST_SUITE_NAME = "assistant 5800:"
const TEST_CASE_NAME = "assistant 5800:"

export default class EntryAbility extends UIAbility {
  subscriber;
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    globalThis.context = this.context
    commonEventManager.publish("AbilityOncreate5800", (err) => {
      console.log("AbilityOncreate publish");
    });
    let subscribeInfo = {
      events: ["EVENT_TERMINATE_SELF_ABILITY5800"]
    };

    let that = this
    commonEventManager.createSubscriber(subscribeInfo, (err, commonEventSubscriber) => {
      if (!err) {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber success " ${JSON.stringify(err)}`);
        this.subscriber = commonEventSubscriber;
        commonEventManager.subscribe(this.subscriber, (err, data) => {
          if (err) {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "callback failed  " ${JSON.stringify(err)}`);
          } else {
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "callback success  " ${JSON.stringify(data)}`);
            if (data.event === "EVENT_TERMINATE_SELF_ABILITY5800") {
              that.terminateSelfWithResult()
            } else {
              // that.startAbility()
            }
          }
        });
      } else {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber failed " ${JSON.stringify(err)}`);
      }
    });
  }
  terminateSelfWithResult() {
    let terwant25: Want = {
      bundleName: 'com.example.assistant5800',
      abilityName: 'EntryAbility',
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
  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    commonEventManager.publish("AbilityOnWindowStageCreate5800", (err) => {
      console.log("AbilityStageOncreate publish");
    });
    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
  }

  onWindowStageDestroy(): void {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    commonEventManager.publish("AbilityOnForeground5800", (err) => {
      console.log("AbilityStageOncreate publish");
    });

  }

  onBackground(): void {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
