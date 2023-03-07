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
import commonEvent from '@ohos.commonEvent'
var count = 0;

export default class FormAbility extends FormExtension {
    onCreate(want) {
        count ++;
        console.debug(`ACTS_InAppLoadCard FormAbility onCreate, want:${count} ${JSON.stringify(want)}`)
        console.debug(`ACTS_InAppLoadCard FormAbility onCreate, want:${count} ${want}`)
        console.debug(`ACTS_InAppLoadCard FormAbility onCreate, want:${count} ${want.bundleName}`)
        console.debug(`ACTS_InAppLoadCard FormAbility onCreate, count: ${count}`)
        let obj = {
            "bundleName": want.bundleName,
            "abilityName": want.abilityName,
            "temperature": "11",
            "time": "12:11:00",
            "imageSrc": "/common/cold.png"
        };

        let formData = formBindingData.createFormBindingData(obj);
        console.debug(`ACTS_InAppLoadCard FormAbility onCreate, want.parameters: ${JSON.stringify(want.parameters)}`)
        commonEvent.publish("onCreate_want_count",  (err, data) => {
                console.log('ACTS_InAppCardLoadCard_0200 ====>publish: errdata:' + JSON.stringify(data));
                console.log('ACTS_InAppCardLoadCard_0200 ====>publish: errcode:' + JSON.stringify(err));
            });
        return formData;
}
    onCastToNormal(formId) {
        // Called when the form provider is notified that a temporary form is successfully
        // converted to a normal form.
    }

    onUpdate(formId) {
        // Called to notify the form provider to update a specified form.
    }

    onVisibilityChange(newStatus) {
        // Called when the form provider receives form events from the system.
    }

    onEvent(formId, message) {
        // Called when a specified message event defined by the form provider is triggered.
    }

    onDestroy(formId) {
        // Called to notify the form provider that a specified form has been destroyed.
    }

    onAcquireFormState(want) {
        // Called to return a {@link FormState} object.
        return formInfo.FormState.READY;
    }
};