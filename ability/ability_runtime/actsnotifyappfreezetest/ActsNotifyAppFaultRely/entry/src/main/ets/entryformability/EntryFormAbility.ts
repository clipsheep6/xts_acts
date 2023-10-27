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
import hilog from '@ohos.hilog';

const TAG = '[ActsNotifyAppFault_Rely]';
const DOMAIN = 0xF811;
const ABILITY = 'EntryFormAbility';
const APP_FREEZE_TIME_OUT = 300;

export default class EntryFormAbility extends FormExtensionAbility {
  onAddForm(want) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onAddForm, want: ${JSON.stringify(want)}`);
    let formData = {};
    globalThis.context = this.context;
    setTimeout(() => {
      globalThis.contest.terminateSelf();
    }, APP_FREEZE_TIME_OUT);
    return formBindingData.createFormBindingData(formData);
  }

  onCastToNormalForm(formId) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onCastToNormalForm, formId: ${JSON.stringify(formId)}`);
  }

  onUpdateForm(formId) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onUpdateForm, formId: ${JSON.stringify(formId)}`);
  }

  onChangeFormVisibility(newStatus) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onChangeFormVisibility, newStatus: ${JSON.stringify(newStatus)}`);
  }

  onFormEvent(formId, message) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onFormEvent, formId: ${JSON.stringify(formId)}`);
  }

  onRemoveForm(formId) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onRemoveForm, formId: ${JSON.stringify(formId)}`);
  }

  onAcquireFormState(want) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onAcquireFormState, want: ${JSON.stringify(want)}`);
    return formInfo.FormState.READY;
  }
};