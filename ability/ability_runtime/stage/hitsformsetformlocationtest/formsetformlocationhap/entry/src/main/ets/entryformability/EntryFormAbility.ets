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

import formInfo from '@ohos.app.form.formInfo';
import formBindingData from '@ohos.app.form.formBindingData';
import FormExtensionAbility from '@ohos.app.form.FormExtensionAbility';
import Want from '@ohos.app.ability.Want';
import hilog from '@ohos.hilog';
import commonEventManager from '@ohos.commonEventManager';

export default class EntryFormAbility extends FormExtensionAbility {
  onAddForm(want: Want) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'EntryFormAbility onAddForm' + JSON.stringify(want));
    let formLocation = want.parameters?.['ohos.extra.param.key.form_location'];
    let options: commonEventManager.CommonEventPublishData = {
      parameters: {
        formLocation
      }
    }
    hilog.info(0x0000, 'testTag', 'onAddForm formLocation value: %{public}s', JSON.stringify(want.parameters));
    commonEventManager.publish('Get_Form_FormLocation_OnAddForm', options, () => {
      hilog.info(0x0000, 'testTag', '%{public}s', 'onAddForm publish Get_Form_FormLocation_OnAddForm');
    });
    return formBindingData.createFormBindingData({});
  }

  onCastToNormalForm(formId: string) {
  }

  onUpdateForm(formId: string) {
    console.log(`EntryFormAbility onUpdateForm, formId: ${formId}`);
  }

  onChangeFormVisibility(newStatus: Record<string, number>) {
  }

  onFormEvent(formId: string, message: string) {
  }

  onRemoveForm(formId: string) {
  }

  onAcquireFormState(want: Want) {
    return formInfo.FormState.READY;
  }
};