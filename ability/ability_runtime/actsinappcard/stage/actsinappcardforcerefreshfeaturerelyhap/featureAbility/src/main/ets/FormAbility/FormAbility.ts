// @ts-nocheck
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
import commonEvent from '@ohos.commonEvent';
import formProvider from '@ohos.application.formProvider';
var updateCount = 0;

export default class FormAbility extends FormExtension {
    onCreate(want) {
        console.info(`Stage FormAbility onCreate, want: ${JSON.stringify(want)}`)
        updateCount = 0;
        let obj = {
            "updateCount": updateCount
        };
        return formBindingData.createFormBindingData(obj);
    }

    async onUpdate(formId) {
        // Called to notify the form provider to update a specified form.
        console.log(`FormMgrService FormAbility onUpdate begin, formId: ${formId}`);
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
        commonEvent.publish("ACTS_FORM_DATA",{
            parameters: {
                formId:formId
            }
        },(err,data)=>{
            console.log(`ACTS_InAppCardRouterEvent ====>publish:data:` + JSON.stringify(data));
            console.log(`ACTS_InAppCardRouterEvent ====>publish:err:` + JSON.stringify(err));
        })
    }

    onDestroy(formId) {
        // Called to notify the form provider that a specified form has been destroyed.
        console.log(`FormMgrService FormAbility onDestroy, formId = ${formId}`);
    }

    onEvent(formId,message){
        console.log(`FormMgrService FormAbility onEvent, formId`);
        console.log(`FormMgrService FormAbility onEvent, message=${message}`);
        console.log(`FormMgrService FormAbility onEvent, formId = ${formId}`);
    }
};