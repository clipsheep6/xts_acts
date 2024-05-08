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

import formInfo from '@ohos.app.form.formInfo';
import formBindingData from '@ohos.app.form.formBindingData';
import FormExtensionAbility from '@ohos.app.form.FormExtensionAbility';
import hilog from '@ohos.hilog';
import formProvider from '@ohos.app.form.formProvider';
import Want from '@ohos.app.ability.Want';
import Base from '@ohos.base';

const TAG: string = 'EntryFormAbility';
const DOMAIN_NUMBER: number = 0xFF00;

export default class EntryFormAbility extends FormExtensionAbility {
  onAddForm(want: Want) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'onAddForm ' + JSON.stringify(want));
    let formname = want.parameters?.['ohos.extra.param.key.form_name'];
    if (formname === 'widget3') {
      let delay = 10000;
      let start = new Date().getTime();
      while (true) {
        if (new Date().getTime() - start > delay) {
          break;
        }
      }
    }
    return formBindingData.createFormBindingData({
      'text': 'onAddForm'
    });
  }

  onCastToNormalForm(formId: string) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'onCastToNormalForm ' + JSON.stringify(formId));
  }

  onUpdateForm(formId: string) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'onUpdateForm ' + JSON.stringify(formId));
    let date = new Date();
    let currentTime = `${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}:${date.getMilliseconds()}`;
    let obj = formBindingData.createFormBindingData({
      'text': currentTime
    });
    formProvider.updateForm(formId, obj);
    let nowTime = new Date()
    let hour_ = nowTime.getHours().toString()
    let minute_ = nowTime.getMinutes().toString()
    let second_ = nowTime.getSeconds().toString()

    class FormDataClass {
      hour: string = hour_; // 和卡片布局中对应
      minute: string = minute_; // 和卡片布局中对应
      second: string = second_;
    }

    let formData = new FormDataClass();
    let formInfo: formBindingData.FormBindingData = formBindingData.createFormBindingData(formData);
    formProvider.updateForm(formId, formInfo).then(() => {
      hilog.info(DOMAIN_NUMBER, TAG, 'FormAbility updateForm success.');
    }).catch((error: Base.BusinessError) => {
      hilog.info(DOMAIN_NUMBER, TAG, `Operation updateForm failed. Cause: ${JSON.stringify(error)}`);
    })
  }

  onChangeFormVisibility(newStatus: Record<string, number>) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'onChangeFormVisibility ' + JSON.stringify(newStatus));
  }

  onFormEvent(formId: string, message: string) {
    console.info(`FormAbility onEvent, formId = ${formId}, message: ${JSON.stringify(message)}`);

    let date = new Date();
    let currentTime = `${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}:${date.getMilliseconds()}`;
    let formInfo = formBindingData.createFormBindingData({
      'text': currentTime
    });
    // let formInfo = formBindingData.createFormBindingData({
    //   'title': '6*4卡片刷新.',
    //   'detail': '刷新成功.',
    // })
    formProvider.updateForm(formId, formInfo).then((data) => {
      console.info('FormAbility updateForm success.' + JSON.stringify(data));
    }).catch((error: Base.BusinessError) => {
      console.error('FormAbility updateForm failed: ' + JSON.stringify(error));
    })

    let nowTime = new Date()
    let hour_ = nowTime.getHours().toString()
    let minute_ = nowTime.getMinutes().toString()
    let second_ = nowTime.getSeconds().toString()

    class FormDataClass {
      hour: string = hour_; // 和卡片布局中对应
      minute: string = minute_; // 和卡片布局中对应
      second: string = second_;
    }

    let formData = new FormDataClass();
    let formInfo1: formBindingData.FormBindingData = formBindingData.createFormBindingData(formData);
    formProvider.updateForm(formId, formInfo1).then(() => {
      hilog.info(DOMAIN_NUMBER, TAG, 'FormAbility updateForm success.');
    }).catch((error: Base.BusinessError) => {
      hilog.info(DOMAIN_NUMBER, TAG, `Operation updateForm failed. Cause: ${JSON.stringify(error)}`);
    })
  }

  onRemoveForm(formId: string) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'onRemoveForm ' + JSON.stringify(formId));
  }

  onAcquireFormState(want: Want) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'onAcquireFormState ' + JSON.stringify(want));
    return formInfo.FormState.READY;
  }
};