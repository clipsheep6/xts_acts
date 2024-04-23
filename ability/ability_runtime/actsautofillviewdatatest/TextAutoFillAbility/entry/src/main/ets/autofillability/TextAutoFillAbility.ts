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


import autoFillManager from '@ohos.app.ability.autoFillManager'
import hilog from '@ohos.hilog';
import UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession';
import AutoFillExtensionAbility from '@ohos.app.ability.AutoFillExtensionAbility';
import commonEventManager from '@ohos.commonEventManager';


export default class AutoFillAbility extends AutoFillExtensionAbility {
  onCreate(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onCreate');
  }

  onDestroy(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onDestroy');
  }

  onSessionDestroy(session: UIExtensionContentSession) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onSessionDestroy');
    hilog.info(0x0000, 'testTag', 'session content: %{public}s', JSON.stringify(session));
  }

  onForeground(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onForeground');
  }

  onBackground(): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onBackground');
  }

  onUpdateRequest(request: autoFillManager.UpdateRequest): void {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onUpdateRequest');
    console.log("get fill request viewData: ", JSON.stringify(request.viewData));
  }

  onFillRequest(session: UIExtensionContentSession, request: autoFillManager.FillRequest, callback: autoFillManager.FillRequestCallback) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onFillRequest');
    hilog.info(0x0000, 'testTag', 'fill requestCallback: %{public}s', JSON.stringify(callback));
    console.log('testTag', "get fill request viewData: ", JSON.stringify(request.viewData));

    let options: commonEventManager.CommonEventPublishData = {
      parameters: {
        'ViewData': request
      }
    }
    commonEventManager.publish('AutoFillViewData_commonEvent', options, (err) => {
      console.info('ActsAutoFillViewDataTest-----publish')
    })

    try {
      let storage_fill = new LocalStorage(
        {
          'session': session,
          'message': "AutoFill Page",
          'fillCallback': callback,
          'viewData': request.viewData,
          'pageNodeInfos': request.viewData.pageNodeInfos,
        });
      session.loadContent('pages/SelectorList', storage_fill);
    } catch (err) {
      hilog.error(0x0000, 'testTag', '%{public}s', 'autofill failed to load content');
    }
  }

  onSaveRequest(session: UIExtensionContentSession, request: autoFillManager.SaveRequest, callback: autoFillManager.SaveRequestCallback) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onSaveRequest');
    let storage_save = new LocalStorage(
      {
        'session': session,
        'message': "AutoFill Page",
        'saveCallback': callback,
        'viewData': request.viewData
      });
    session.loadContent('pages/SavePage', storage_save);
  }
}
