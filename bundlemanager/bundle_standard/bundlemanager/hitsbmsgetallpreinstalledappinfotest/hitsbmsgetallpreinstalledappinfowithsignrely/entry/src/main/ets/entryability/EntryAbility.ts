/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import Base from '@ohos.base';
import bundleManager from '@ohos.bundle.bundleManager';
import hilog from '@ohos.hilog';
import window from '@ohos.window';

export default class EntryAbility extends UIAbility {
  onCreate(want, launchParam) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
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
    });
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    console.info("ActsBmsGetAllPreinstalledAppinfoWithSignRely is on onForeground");
    let typeBundleName: string;
    let typeModuleName: string;
    let typeIconId: string;
    let typeLabelId: string;
    let errCode: number = 0;
    bundleManager.getAllPreinstalledApplicationInfo().then((data: Array<bundleManager.PreinstalledApplicationInfo>) => {
      console.info("GetAllPreinstalledApplicationInfo success");
      data.forEach(element => {
        typeBundleName = typeof (element.bundleName);
        typeModuleName = typeof (element.moduleName);
        typeIconId = typeof (element.iconId);
        typeLabelId = typeof (element.labelId);
      });
    }).catch((err: Base.BusinessError) => {
      console.error("GetAllPreinstalledApplicationInfo success errCode is :" + JSON.stringify(err.code));
      errCode = err.code;
    });

    setTimeout(() => {
      console.info("ActsBmsGetAllPreinstalledAppinfoWithSignRely start terminateSelfWithResult");
      console.info("ActsBmsGetAllPreinstalledAppinfoWithSignRely typeBundleName is :" + typeBundleName);
      console.info("ActsBmsGetAllPreinstalledAppinfoWithSignRely typeModuleName is :" + typeModuleName);
      console.info("ActsBmsGetAllPreinstalledAppinfoWithSignRely typeLabelId is :" + typeIconId);
      console.info("ActsBmsGetAllPreinstalledAppinfoWithSignRely typeLabelId is :" + typeLabelId);
      this.context.terminateSelfWithResult({
        resultCode: 0,
        want: {
          parameters: {
            ErrCode: errCode,
            TypeBundleName: typeBundleName,
            TypeModuleName: typeModuleName,
            TypeIconId: typeIconId,
            TypeLabelId: typeLabelId,
          }
        }
      }, (err: Base.BusinessError) => {
        console.info("ActsBmsGetAllPreinstalledAppinfoRely err is :" + JSON.stringify(err));
      });
    }, 1000);

  }

  onBackground() {
    // Ability has back to background
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
  }
}
