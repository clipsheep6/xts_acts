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
import formProvider from '@ohos.application.formProvider';
import commonEvent from '@ohos.commonEvent'

const FORM_PARAM_IDENTITY_KEY = "ohos.extra.param.key.form_identity";
const FORM_PARAM_NAME_KEY = "ohos.extra.param.key.form_name";
const FORM_PARAM_TEMPORARY_KEY = "ohos.extra.param.key.form_temporary";
const PARAM_DEVICE_ID_KEY = "ohos.extra.param.key.device_id";

let message;
let commonEventData={
    parameters:{
        message:message
    }
}

function upDateForm(formId) {
    console.log(`FormMgrService FormAbility upDateForm, formId: ${formId}`);
    const date = new Date();
    let newFormInfo = new formDate();
    newFormInfo.updateCount = date.getSeconds();
    newFormInfo.temperature = "22";
    newFormInfo.time ="12:36:00";
    newFormInfo.imageSrc = "/common/hot.png";

    formInfoMap.set(formId, newFormInfo);
    for( let key of formInfoMap.keys()){
        console.log(`FormMgrService FormAbility formInfoMap key ：`+ JSON.stringify(key));
    }
    let obj = {
        "temperature": "22",
        "time": "12:36:00",
        "imageSrc": "/common/hot.png"
    };
    let formData = formBindingData.createFormBindingData(obj);
    formProvider.updateForm(formId, formData).catch((err) => {
        console.error(`FormMgrService updateForm, err: ${JSON.stringify(err)}`);
    });
    console.log(`FormMgrService FormAbility upDateForm success, formId = ${formId}`);
}

class formDate{
    formName:string;
    tempFlag:boolean;
    updateCount:number;
    temperature:string;
    time:string;
    imageSrc:string;
}

var formInfoMap:Map<string,formDate> = new Map();

export default class FormAbility extends FormExtension {
    onCreate(want) {
        console.log(`FormMgrService FormAbility onCreate, want: ${JSON.stringify(want)}`);

        let formId = want.parameters[FORM_PARAM_IDENTITY_KEY];
        let formName = want.parameters[FORM_PARAM_NAME_KEY];
        let tempFlag = want.parameters[FORM_PARAM_TEMPORARY_KEY];
        let deviceId = want.parameters[PARAM_DEVICE_ID_KEY];
        console.log(`likx deviceId ：`+ deviceId);

        let obj = {
            "temperature": "11",
            "time": "12:11:00",
            "imageSrc": "/common/cold.png"
        };
        if(want.parameters["temperature"] != undefined) {
            console.log(`FormMgrService FormAbility onCreate, get share form info`);
            obj.temperature = want.parameters["temperature"];
            obj.time = want.parameters["time"]
            obj.imageSrc = want.parameters["imageSrc"]
        }

        let formInfo = new formDate();
        formInfo.formName = formName;
        formInfo.tempFlag = tempFlag;
        formInfo.updateCount = 0;
        formInfo.temperature = obj.temperature;
        formInfo.time = obj.time;
        formInfo.imageSrc = obj.imageSrc;

        formInfoMap.set(formId, formInfo);
        for( let key of formInfoMap.keys()){
            console.log(`FormMgrService FormAbility formInfoMap key ：`+ JSON.stringify(key));
        }
        let formData = formBindingData.createFormBindingData(obj);
        return formData;
    }

    onUpdate(formId) {
        console.log(`FormMgrService FormAbility onUpdate begin, formId: ${formId}`);
    }

    onDestroy(formId) {
        // Called to notify the form provider that a specified form has been destroyed.
        console.log(`FormMgrService FormAbility onDestroy, formId = ${formId}`);
        let hasFormInfo: boolean = formInfoMap.has(formId);
        if(hasFormInfo){
            formInfoMap.delete(formId);
            console.log(`FormMgrService FormAbility delete formInfo success, formId = ${formId}`);
        } else {
            console.log(`FormMgrService FormAbility delete formInfo failed, formId = ${formId}`);
        }
    }
    onEvent(formId,message){
        console.debug(`FormMgrService FormAbility onEvent, formId`);
        console.debug(`FormMgrService FormAbility onEvent, message=${message}`);
        console.debug(`FormMgrService FormAbility onEvent, formId = ${formId}`);
        commonEventData.parameters.message=message
        if(commonEventData.parameters.message == '{"action":"message","params":{"message":"MessageEvent_0100"}}'){
            commonEvent.publish("ACTS_MESSAGE_ID1",commonEventData,(err)=>{
                console.debug(`ACTS_InAppCardMessageEvent_0100====>publish err:` + JSON.stringify(err));
            })
        }
        if(commonEventData.parameters.message == '{"action":"message","params":{}}'){
            commonEvent.publish("ACTS_MESSAGE_ID2",commonEventData,(err)=>{
                console.debug(`ACTS_InAppCardMessageEvent_0200====>publish err:` + JSON.stringify(err));
            })
        }
        if(commonEventData.parameters.message == '{"action":"message","params":{"message":""}}'){
            commonEvent.publish("ACTS_MESSAGE_ID3",commonEventData,(err)=>{
                console.debug(`ACTS_InAppCardMessageEvent_0300====>publish err:` + JSON.stringify(err));
            })
        }
    }
};