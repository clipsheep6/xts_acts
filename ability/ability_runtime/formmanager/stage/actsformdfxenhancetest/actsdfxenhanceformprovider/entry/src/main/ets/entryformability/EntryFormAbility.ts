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
import FormExtensionAbility from '@ohos.app.form.FormExtensionAbility';
import dataShare from '@ohos.data.dataShare';

let dataShareHelper;

export default class EntryFormAbility extends FormExtensionAbility {
  onAddForm(want) {
    let subscriberId = '';
    let formName = '';
    if (want.parameters) {
      subscriberId = want.parameters["ohos.extra.param.key.form_identity"].toString();
      formName = want.parameters["ohos.extra.param.key.form_name"].toString();
    }

    let processFormData = {};
    let processFormProxies = [];
    if (formName === "publishproxyform") {
      processFormProxies = [
        {
          'key': 'cityName',
          'subscriberId': subscriberId
        },
        {
          'key': 'cityTemperature',
          'subscriberId': subscriberId
        }
      ];
    } else if (formName === "publishandrdbproxyform") {
      let template = {
        predicates: {
          'list': `select cityTemperature as cityTemperature from TBL00`
        },
        scheduler: ''
      };
      dataShare.createDataShareHelper(this.context, "datashareproxy://com.acts.actsdfxenhanceformprovider", {
        isProxy: true
      }).then((data) => {
        dataShareHelper = data;
        dataShareHelper.addTemplate("datashareproxy://com.acts.actsdfxenhanceformprovider/test", subscriberId, template);
      });
      processFormProxies = [
        {
          'key': 'cityName',
          'subscriberId': subscriberId
        },
        {
          'key': 'datashareproxy://com.acts.actsdfxenhanceformprovider/test',
          'subscriberId': subscriberId
        }
      ];
    }

    let processFormBinding = {
      data: JSON.stringify(processFormData),
      proxies: processFormProxies
    };

    return processFormBinding;
  }

  onCastToNormalForm(formId) {
    // Called when the form provider is notified that a temporary form is successfully
    // converted to a normal form.
  }

  onUpdateForm(formId) {
    // Called to notify the form provider to update a specified form.
  }

  onChangeFormVisibility(newStatus) {
    // Called when the form provider receives form events from the system.
  }

  onFormEvent(formId, message) {
    // Called when a specified message event defined by the form provider is triggered.
  }

  onRemoveForm(formId) {
    // Called to notify the form provider that a specified form has been destroyed.
  }

  onAcquireFormState(want) {
    // Called to return a {@link FormState} object.
    return formInfo.FormState.READY;
  }
};