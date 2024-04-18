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

const TAG: string = 'StartAbilityForResult4 MainAbility1';
const TEST_SUITE_NAME: string = 'ActsStartAbilityForResultTest';
const TEST_CASE_NAME: string = 'APP_multitonAbility';

export default class multitonAbility extends UIAbility {
  resultNum: number = 0;
  optionsData1 = '';
  subscriber;

  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    this.optionsData1 += "_onCreate";
    let subscribeInfo = {
      events: ["call_MainAbility1"]
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
            console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "callback start_MainAbility1 success  " ${JSON.stringify(data)}`);
            if (data.event === "call_MainAbility1") {
              console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "走这里了  " ${JSON.stringify(data)}`);
              that.startAbility();
            }
          }
        });
      } else {
        console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "createSubscriber failed " ${JSON.stringify(err)}`);
      }
    });

  }

  startAbility() {
    let want: Want = {
      bundleName: 'com.acts.startabilityforresult',
      abilityName: 'MainAbility1'
    }

    console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "startAbility.。。`);

    this.context.startAbilityForResult(want)
      .then((result) => {
        console.info(`${TEST_CASE_NAME} result is ${JSON.stringify(result)}`);
      })
      .catch((err) => {
        console.info(`${TEST_CASE_NAME}  err is ${JSON.stringify(err)}`);
      });

    console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} "end。。`);
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy',);
  }

  onWindowStageCreate(windowStage: window.WindowStage): void {
    // Main window is created, set main page for this ability
    this.optionsData1 += "_onWindowStageCreate";

    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    windowStage.loadContent('multitonAbility/pages/multitonIndex', (err, data) => {
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
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    this.optionsData1 += "_onForeground";
    //公共事件相关信息
    var options = {
      code: 0, //公共事件的初始代码
      data: this.optionsData1, //公共事件的初始数据
      isOrdered: true   //有序公共事件
    }

    //发布公共事件回调
    function publishCallBack(err) {
      if (err) {
        console.error("testTag publish failed " + JSON.stringify(err));
      } else {
        console.info("testTag publish");
      }
    }

    //发布公共事件
    try {
      CommonEventManager.publish("start_mutiton_event", options, publishCallBack);
    } catch (err) {
      console.error('publish failed, catch error' + JSON.stringify(err));
    }
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');

  }

  onBackground(): void {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
