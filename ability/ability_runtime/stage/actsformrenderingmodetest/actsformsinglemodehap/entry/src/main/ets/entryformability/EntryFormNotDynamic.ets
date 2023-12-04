/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import formInfo from '@ohos.app.form.formInfo';
import formBindingData from '@ohos.app.form.formBindingData';
import FormExtensionAbility from '@ohos.app.form.FormExtensionAbility';
import Want from '@ohos.app.ability.Want';
import hilog from '@ohos.hilog';
import commonEventManager from '@ohos.commonEventManager';

export default class EntryFormAbility extends FormExtensionAbility {
  onAddForm(want: Want) {
    hilog.info(0x0000, 'COLOR_Form', 'onAddForm string want %{public}s', JSON.stringify(want));
    let renderingModeArr = ['FULL_COLOR', 'SINGLE_COLOR']
    let renderingMode: number = want.parameters ? (Number(want.parameters['ohos.extra.param.key.form_rendering_mode'])) : 0;
    let MODE_NAME = renderingModeArr[renderingMode]
    let param: Record<string, string> = {
      'MODE_NAME': MODE_NAME
    }
    hilog.info(0x0000, 'COLOR_Form', 'onAddForm color mode %{public}s', MODE_NAME);
    if (want.parameters?.renderingType !== undefined) {
      let renderingType = want.parameters?.renderingType.toString();
      let createSubscriberEvents: string[] = [
        'SINGLE_COLOR_RENDERING_TYPE',
        'FULL_COLOR_RENDERING_TYPE',
        'DEFAULT_RENDERING_TYPE'
      ]
      let createSubscriberIndex: Record<string, number> = {
        'SINGLE_COLOR': 0,
        'FULL_COLOR': 1,
        'DEFAULT': 2,
      };
      let createIndex = createSubscriberIndex[renderingType];
      hilog.info(0x0000, 'COLOR_Form', 'commonEventManager  event %{public}s', createSubscriberEvents[createIndex]);
      let options: commonEventManager.CommonEventPublishData = {
        parameters: {
          form_rendering_mode: want.parameters['ohos.extra.param.key.form_rendering_mode']
        }
      }
      commonEventManager.publish(createSubscriberEvents[createIndex], options, () => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'EntryFormAbility onAddForm publish LockScreenCard_onAddForm');
      })
    }
    return formBindingData.createFormBindingData(param);
  }

  onAcquireFormState(want: Want) {
    // Called to return a {@link FormState} object.
    return formInfo.FormState.READY;
  }
};