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
const TEST_CASE_NAME: string = 'SUB_Ability_AbilityRuntime_StartAndTerminate_StartAbilityForResult_0300';
export default class EntryAbility extends UIAbility {
  resultNum: number = 0;
  optionsData = '';

  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
    this.resultNum++;
  }
  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy',);
    this.optionsData = this.optionsData + 'onDestroy';
    //公共事件相关信息
    var options = {
      code: 0,			 //公共事件的初始代码
      data: this.optionsData,//公共事件的初始数据
      isOrdered: true	 //有序公共事件
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
      CommonEventManager.publish("com.acts.startabilityforresult.event", options, publishCallBack);
    } catch (err) {
      console.error('publish failed, catch error' + JSON.stringify(err));
    }

  }
  onWindowStageCreate(windowStage: window.WindowStage): void {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');
    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    });
    this.resultNum++;


  }

  onWindowStageDestroy(): void {
    this.optionsData = this.optionsData + 'onWindowStageDestroy'
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground(): void {
    this.resultNum++;
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    let want22: Want = {
      bundleName: 'com.acts.startabilityforresult4',
      abilityName: 'EntryAbility',
    };

    setTimeout(() => {
      this.context.terminateSelfWithResult({
        resultCode: this.resultNum,
        want: want22
      })
        .then((result) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult succeed, result is ${JSON.stringify(result)}`);
        })
        .catch((err) => {
          console.info(`${TAG}`, `${TEST_SUITE_NAME}#${TEST_CASE_NAME} terminateSelfWithResult catch err=============, err is ${JSON.stringify(err)}`);
        });
    }, 1000)

  }

  onBackground(): void {
    // Ability has back to background
    this.optionsData = this.optionsData + 'onBackground'
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
