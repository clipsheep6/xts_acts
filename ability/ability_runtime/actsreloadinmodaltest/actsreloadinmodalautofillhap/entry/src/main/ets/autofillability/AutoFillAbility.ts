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
import commonEvent from '@ohos.commonEventManager';
import { BusinessError } from '@ohos.base';


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

  onFillRequest(session: UIExtensionContentSession, request: autoFillManager.FillRequest, callback: autoFillManager.FillRequestCallback) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'autofill onFillRequest');
    hilog.info(0x0000, 'testTag', 'customData', JSON.stringify(request.customData));
    hilog.info(0x0000, 'testTag', 'viewData', JSON.stringify(request.viewData));
    let storage_fill: LocalStorage = new LocalStorage();
    let size: autoFillManager.PopupSize = {
      width: 400,
      height: 200
    }
    callback.setAutoFillPopupConfig({
      popupSize: size
    });
    if (request.customData == undefined) {
      session.loadContent('pages/SelectorList', storage_fill);

      let want: Record<string, Object> = {
        'bundleName': 'com.samples.passwordvalue',
        'abilityName': 'ReloadInModal',
      };
      this.context.reloadInModal({ data: {text: 'HelloWorld987654', want}}).then(() => {
        console.info('testTag', 'reloadInModal successfully.')
      }).catch((err: BusinessError) => {
        console.error('testTag', 'reloadInModal failed.')
      })
    } else {
      commonEvent.publish('0100', (err, data)=>{
        hilog.info(0x0000, 'testTag', 'customData, publish msg, err=' + JSON.stringify(err));
        hilog.info(0x0000, 'testTag', 'customData, publish msg, data=' + JSON.stringify(data));
      })
    }
  }
}