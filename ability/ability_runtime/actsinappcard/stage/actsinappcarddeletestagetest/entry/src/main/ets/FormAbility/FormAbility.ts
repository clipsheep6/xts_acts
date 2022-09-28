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

var destroyCount = 0

export default class FormAbility extends FormExtension {
    onCreate(want) {
        console.log(`InAppCardDeleteStage FormAbility onCreate, want: ${JSON.stringify(want)}`);
        let obj = {
            "temperature": "11",
            "time": "12:11:00",
            "imageSrc": "/common/cold.png"
        };
        return formBindingData.createFormBindingData(obj);
    }

    onUpdate(formId) {
        // Called to notify the form provider to update a specified form.
        console.log(`InAppCardDeleteStage FormAbility onUpdate begin, formId: ${formId}`);
    }

    onDestroy(formId) {
        // Called to notify the form provider that a specified form has been destroyed.
        console.log(`InAppCardDeleteStage FormAbility onDestroy, formId = ${formId}`);
        destroyCount++;
        commonEvent.publish("ACTS_FORM_ONDestroy",{
            parameters: {
                "formId":formId,
                "destroyCount":destroyCount
            }
        },(err,data)=>{
            console.log(`ACTS_InAppCardDeleteCard onDestroy====>publish:data:` + JSON.stringify(data));
            console.log(`ACTS_InAppCardDeleteCard onDestroy====>publish:err:` + JSON.stringify(err));
        })
    }

    onCastToNormal(formId) {
        console.log(`InAppCardDeteleFa FormAbility onCastToNormal, formId: ${formId}`);
    }

    onVisibilityChange(newStatus) {
        console.log(`InAppCardDeteleFa FormAbility onVisibilityChange`);
    }

    onEvent(formId, message) {
        console.log(`InAppCardDeteleFa FormAbility onEvent, formId = ${formId}, message: ${JSON.stringify(message)}`);
    }

    onAcquireFormState(want) {
        console.log(`InAppCardDeteleFa FormAbility onAcquireFormState`);
        return formInfo.FormState.READY;
    }
};