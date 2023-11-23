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

export default class EntryFormAbility extends FormExtensionAbility {
  onAddForm(want) {
    console.info(`====> FormAbility onAddForm, want = ${want}`);
    let formData = {};
    return formBindingData.createFormBindingData(formData);
  }

  onCastToNormalForm(formId) {
    console.info(`====> FormAbility onCastToNormalForm, formId = ${formId}`);
  }

  onUpdateForm(formId) {
    console.info(`====> FormAbility onUpdateForm, formId = ${formId}`);
  }

  onChangeFormVisibility(newStatus) {
    console.info(`====> FormAbility onChangeFormVisibility, newStatus = ${newStatus}`);
  }

  onFormEvent(formId, message) {
    console.info(`====> FormAbility onEvent, formId = ${formId}, message: ${JSON.stringify(message)}`);
  }

  onRemoveForm(formId) {
    console.info(`====> FormAbility onRemoveForm, formId = ${formId}`);
  }

  onAcquireFormState(want) {
    console.info(`====> FormAbility onAcquireFormState, want = ${want}`);
    return formInfo.FormState.READY;
  }
};