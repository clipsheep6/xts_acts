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

import hilog from '@ohos.hilog';
import type autoFillManager from '@ohos.app.ability.autoFillManager';
import AutoFillExtensionAbility from '@ohos.app.ability.AutoFillExtensionAbility';
import commonEventManager from '@ohos.commonEventManager';
import type UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession';
import emitter from '@ohos.events.emitter';

let onCreate = 0;
let onFillRequest = 0;
let onForeground = 0;
let onSaveRequest = 0;
let onSessionDestroy = 0;
let onDestroy = 0;
let onBackground = 0;
let commonEventData = {
  parameters: {
    onCreate: onCreate,
    onFillRequest: onFillRequest,
    onForeground: onForeground,
    onSaveRequest: onSaveRequest,
    onSessionDestroy: onSessionDestroy,
    onDestroy: onDestroy,
    onBackground: onBackground,
  }
};

export default class TextAutoFillAbility extends AutoFillExtensionAbility {
  storage: LocalStorage;
  message: string;

  onCreate(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension onCreate====');
    commonEventData.parameters.onCreate = 1;
  }

  onFillRequest(session: UIExtensionContentSession, request: autoFillManager.FillRequest,
    callback: autoFillManager.FillRequestCallback): void {
    hilog.info(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension onFillRequest====');
    hilog.info(0x0000, 'testTag', 'fill requestCallback: %{public}s', JSON.stringify(callback));
    console.log('get request viewData: ', JSON.stringify(request.viewData));
    commonEventData.parameters.onFillRequest = 1;
    let focus = request.viewData.pageNodeInfos.find((node)=>{
      return node.isFocus;
    })
    try {
      let fillStorage = new LocalStorage(
        {
          'session': session,
          'message': 'AutoFill Page',
          'fillCallback': callback,
          'viewData': request.viewData,
	  'autoFillType': focus.autoFillType
        });
      session.loadContent('pages/SelectorList', fillStorage);
    } catch (err) {
      hilog.error(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension failed to load content====');
    }
  }

  onSaveRequest(session: UIExtensionContentSession, request: autoFillManager.SaveRequest,
    callback: autoFillManager.SaveRequestCallback): void {
    hilog.info(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension onSaveRequest====');
    commonEventData.parameters.onSaveRequest = 1;
    let saveStorage = new LocalStorage(
      {
        'session': session,
        'message': 'AutoFill Page',
        'saveCallback': callback,
        'viewData': request.viewData
      });
    session.loadContent('pages/SavePage', saveStorage);
  }

  onForeground(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension onForeground====');
    commonEventData.parameters.onForeground = 1;
    commonEventManager.publish('AutoFillExtensionTest0100', commonEventData, (err) => {
      console.info('====>AutoFillExtensionTest0100 publish err: ' + JSON.stringify(err));
    });
  }

  onBackground(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension onBackground====');
    commonEventData.parameters.onBackground = 1;
    commonEventManager.publish('AutoFillExtensionTest0300', commonEventData, (err) => {
      console.info('====>AutoFillExtensionTest0200 publish err: ' + JSON.stringify(err));
    });
  }

  onSessionDestroy(session: UIExtensionContentSession): void {
    hilog.info(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension onSessionDestroy====');
    commonEventData.parameters.onSessionDestroy = 1;
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', '====ActsAutoFillExtension onDestroy====');
    commonEventData.parameters.onDestroy = 1;
    commonEventManager.publish('AutoFillExtensionTest0200', commonEventData, (err) => {
      console.info('====>AutoFillExtensionTest0200 publish err: ' + JSON.stringify(err));
    });
  }
}
