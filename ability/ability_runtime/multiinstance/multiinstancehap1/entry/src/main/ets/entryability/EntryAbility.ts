/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import UIAbility from '@ohos.app.ability.UIAbility';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import Want from '@ohos.app.ability.Want';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import wantConstant from '@ohos.app.ability.wantConstant';
// import appManager from '@ohos.app.ability.appManager';
// import commonEventManager from '@ohos.commonEventManager';

const TEST_SUITE_NAME: string = 'cloneUIAbilityStarted';

export default class EntryAbility extends UIAbility {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', '${JSON.stringify(appCloneIndex)} Ability onCreate');
    if (want.parameters.testCase == 300) {
      let localWant: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          [wantConstant.Params.CREATE_APP_INSTANCE_KEY]: true,
          [wantConstant.Params.APP_INSTANCE_KEY]: "app_instance_0",
        }
      }
      try {
        this.context.startAbility(localWant).then(() => {
          console.info('startAbility succeed');
        }).catch((err: BusinessError) => {
          console.error(`startAbility failed, cause: ${JSON.stringify(err)}`);
          let errCode = err.code;
          let resultWant: Want = {};
          let abilityResult: common.AbilityResult = {
            resultCode: errCode,
            want: resultWant
          };
          this.context.terminateSelfWithResult(abilityResult)
        });
      } catch (err) {
        console.error(`errorCode: ${JSON.stringify(err)}`);
      }
    }
    if (want.parameters.testCase == 400) {
      let localWant: Want = {
        bundleName: "com.ohos.multiinstancehap1",
        abilityName: 'EntryAbility',
        parameters: {
          [wantConstant.Params.CREATE_APP_INSTANCE_KEY]: true,
        }
      }
      try {
        this.context.startAbility(localWant).then(() => {
          console.info('startAbility succeed');
        }).catch((err: BusinessError) => {
          console.error(`startAbility failed, cause: ${JSON.stringify(err)}`);
          let errCode = err.code;
          let resultWant: Want = {};
          let abilityResult: common.AbilityResult = {
            resultCode: errCode,
            want: resultWant
          };
          this.context.terminateSelfWithResult(abilityResult)
        });
      } catch (err) {
        console.error(`errorCode: ${JSON.stringify(err)}`);
      }
    }
    if (want.parameters.testCase == 600) {
          let resultWant: Want = {};
          let resultCode = 600;
          let abilityResult: common.AbilityResult = {
            resultCode: resultCode,
            want: resultWant
          };
          this.context.terminateSelfWithResult(abilityResult)
    }
    if (want.parameters.testCase == 301) {
      let resultWant: Want = {};
      let resultCode = 301;
      let abilityResult: common.AbilityResult = {
        resultCode: resultCode,
        want: resultWant
      };
      this.context.terminateSelfWithResult(abilityResult)
    }
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

    windowStage.loadContent('pages/Index', (err, data) => {
      if (err.code) {
        hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
        return;
      }
      hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
    })
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
  }

  onBackground() {
    // Ability has back to background
    // let appCloneIndex = this.context.getApplicationContext().getCurrentAppCloneIndex();
    hilog.info(0x0000, 'testTag', '%{public}s', '${JSON.stringify(appCloneIndex)} Ability onBackground');
    // let parameters: commonEventManager.CommonEventPublishData = {
    //   parameters: {
    //     "appCloneIndex": appCloneIndex,
    //   }
    // }
    // if (AppStorage.get<Want>("recvWant").parameters.testCase == 900) {
    //   commonEventManager.publish('start_appClone_0900', parameters, (err, data) => {
    //     hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}-${JSON.stringify(parameters)} start_appClone_0900 publish success`);
    //   })
    //   this.context.terminateSelf();
    // }
    // if (AppStorage.get<Want>("recvWant").parameters.testCase == 1100) {
    //   commonEventManager.publish('start_appClone_1100', parameters, (err, data) => {
    //     hilog.info(0x0000, 'testTag', '%{public}s', `${TEST_SUITE_NAME}-${JSON.stringify(parameters)} start_appClone_1100 publish success`);
    //   })
    //   this.context.terminateSelf();
    // }
  }
}
