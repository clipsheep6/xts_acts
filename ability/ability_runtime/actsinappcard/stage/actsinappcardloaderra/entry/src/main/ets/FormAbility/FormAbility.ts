/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import FormExtension from '@ohos.application.FormExtension';
import formBindingData from '@ohos.application.formBindingData';
import formInfo from '@ohos.application.formInfo';
import formProvider from '@ohos.application.formProvider';
var updateCount = 0;

export default class FormAbility extends FormExtension {
    onCreate(want) {
        console.info(`Stage FormAbility onCreate, want: ${JSON.stringify(want)}`)
        updateCount = 0;
        let obj = {
            "temperature": "11",
            "imageSrc": "/common/cold.png"
        };
        return formBindingData.createFormBindingData(obj);
    }

    onCastToNormal(formId) {
        console.info("Stage FormAbility onCastToNormal, formId:" + formId);
        // Called when the form provider is notified that a temporary form is successfully
    }

    async onUpdate(formId) {
        console.info("Stage FormAbility onUpdate, formId:" + formId);
        // Called to notify the form provider to update a specified form.
        updateCount = updateCount + 1;
        let obj = {
            "updateCount": updateCount
        };
        let formData = formBindingData.createFormBindingData(obj);
        await formProvider.updateForm(formId, formData).then((data)=>{
            console.info("Stage FormAbility updateForm, data:" + data);
        }).catch((err) => {
            console.error(`Stage FormAbility updateForm, err: ${JSON.stringify(err)}`);
        });
    }

    onVisibilityChange(newStatus) {
        console.info("Stage FormAbility onVisibilityChange, newStatus:" + newStatus);
        // Called when the form provider receives form events from the system.
    }

    onEvent(formId, message) {
        console.info("Stage FormAbility onVisibilityChange, formId:" + formId);
        console.info("Stage FormAbility onVisibilityChange, message:" + message);
        // Called when a specified message event defined by the form provider is triggered.
    }

    onDestroy(formId) {
        console.info("Stage FormAbility onVisibilityChange, formId:" + formId);
        // Called to notify the form provider that a specified form has been destroyed.
    }

    onAcquireFormState(want) {
        console.info(`Stage FormAbility onCreate, want: ${JSON.stringify(want)}`);
        // Called to return a {@link FormState} object.
        return formInfo.FormState.READY;
    }
};