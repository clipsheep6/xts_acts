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
import commonEvent from '@ohos.commonEvent'

var subscriber = null;
var subscribeInfo = {
    events: ["active_refresh_to_provider","active_refresh_error_code"],
}

function unsubscribeCallback() {
    console.log("InAppCardActiveRefreshStageTest FormAbility unsubscribeCallback");
}

async function updateForm(formId) {
    let obj = {
        "updateCount": 2,
    };
    let formData = formBindingData.createFormBindingData(obj);
    formProvider.updateForm(formId, formData).catch((err) => {
        console.error(`InAppCardActiveRefreshStageTest FormAbility updateForm, err: ${JSON.stringify(err)}`);
        let commonEventData = {
            parameters: {
                "errCode": err
            }
        };
        commonEvent.publish("active_refresh_error_code", commonEventData, (err, data) => {
            console.log('InAppCardActiveRefreshStageTest ====>publish: errdata:' + JSON.stringify(data));
            console.log('InAppCardActiveRefreshStageTest ====>publish: errcode:' + JSON.stringify(err));

        })
    });
}

async function subscribeCallback(err, data) {
    console.log("InAppCardActiveRefreshStageTest FormAbility subscribeCallback data:" + JSON.stringify(data));
    if (data.event == subscribeInfo.events[0]) {
        await updateForm(data.parameters['formId'])

        let commonEventData = {};
        commonEvent.publish('after_active_refresh_from_provider', commonEventData, (err) => {
            console.info(`InAppCardActiveRefreshStageTest FormAbility publish event: ${JSON.stringify(err)}`);
        })
        commonEvent.unsubscribe(subscriber, unsubscribeCallback);
    }
}

var updateCount = 0;

export default class FormAbility extends FormExtension {
    onCreate(want) {
        // Called to return a FormBindingData object.
        console.info(`InAppCardActiveRefreshStageTest FormAbility onCreate, want: ${JSON.stringify(want)}`)
        commonEvent.createSubscriber(subscribeInfo).then((data) => {
            console.log("InAppCardActiveRefreshStageTest FormAbility  createSubscriber");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallback);
        });

        updateCount = 0;
        let obj = {
            "updateCount": updateCount
        };
        return formBindingData.createFormBindingData(obj);
    }

    onCastToNormal(formId) {
        // Called when the form provider is notified that a temporary form is successfully
        // converted to a normal form.
    }

    onUpdate(formId) {
        console.info("InAppCardActiveRefreshStageTest FormAbility onUpdate, formId:" + formId);
        // Called to notify the form provider to update a specified form.
        updateCount = updateCount + 1;
        let obj = {
            "updateCount": updateCount
        };
        let formData = formBindingData.createFormBindingData(obj);
        formProvider.updateForm(formId, formData).catch((err) => {
            console.error(`Stage FormAbility updateForm, err: ${JSON.stringify(err)}`);
        });
    }

    onVisibilityChange(newStatus) {
        // Called when the form provider receives form events from the system.
    }

    onEvent(formId, message) {
        // Called when a specified message event defined by the form provider is triggered.
    }

    onDestroy(formId) {
        // Called to notify the form provider that a specified form has been destroyed.
        console.log(`FormMgrService FormAbility onDestroy, formId = ${formId}`);
        let obj = {
            "updateCount": updateCount
        };
        let formData = formBindingData.createFormBindingData(obj);
        formProvider.updateForm(formId, formData).catch(async(err) => {
            console.error(`InAppCardActiveRefreshStageTest FormAbility updateForm, err: ${JSON.stringify(err)}`);
            let commonEventData = {
                parameters: {
                    "errCode": err
                }
            };
            commonEvent.publish("active_refresh_error_code", commonEventData, (err, data) => {
                console.log('InAppCardActiveRefreshStageTest ====>publish: errdata:' + JSON.stringify(data));
                console.log('InAppCardActiveRefreshStageTest ====>publish: errcode:' + JSON.stringify(err));
            })
        });
        commonEvent.unsubscribe(subscriber, unsubscribeCallback);
    }

    onAcquireFormState(want) {
        // Called to return a {@link FormState} object.
        return formInfo.FormState.READY;
    }
};