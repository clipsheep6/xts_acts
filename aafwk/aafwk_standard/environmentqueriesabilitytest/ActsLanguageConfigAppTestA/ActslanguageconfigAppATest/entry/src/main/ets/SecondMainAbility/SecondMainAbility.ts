/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

var callBackSeq = "";
function publishCallBack() {
    console.debug("====>LanguageConfigAppA Sec Publish CallBack ====>");
}
function sleep(delay : number) {
    console.info("==========================> sleep start : duration : =======================> " + delay)
    var start = (new Date()).getTime();
    while ((new Date()).getTime() - start < delay) { }
    console.info("==========================> sleep stop  =======================>")
}
async function onShowProcess() {
    var abilityWant = globalThis.abilityWant;
    var callBackData = "AppD:";
    callBackData += callBackSeq;
    var commonEventPublishData = {
        data: callBackData,
        parameters: abilityWant.parameters
    };

    console.log("LanguageConfigAppA Sec abilityWant = " + JSON.stringify(abilityWant));
    if (abilityWant.parameters.nextStep >= abilityWant.parameters.stepNum) {
        commonEvent.publish("MultiInstanceStartFinish", commonEventPublishData, publishCallBack);
    } else {
        commonEvent.publish("MultiInstanceStartNext", commonEventPublishData, () => {
            startAbilityProcess(globalThis.abilityContext, abilityWant.parameters);
        });
    }
    callBackSeq = "";
}

async function startAbilityProcess(abilityContext, parameters) {
    let bundleName;
    let abilityName;

    let idx = parameters.nextStep;
    switch (parameters.step[idx]) {
        case "StartA1":
            bundleName = "com.example.actslanguageconfigappatest";
            abilityName = "com.example.actslanguageconfigappatest.MainAbility";
            break;
        case "StartA2":
            bundleName = "com.example.actslanguageconfigappatest";
            abilityName = "com.example.actslanguageconfigappatest.SecondAbility";
            break;
        case "StartB":
            bundleName = "com.example.actslanguageconfigappbtest";
            abilityName = "com.example.actslanguageconfigapbtest.MainAbility";
            break;

        default:
            break;
    }
    parameters.nextStep = ++idx;
    abilityContext.startAbility({
        bundleName: bundleName,
        abilityName: abilityName,
        parameters: parameters
    }, (error, data) => {
        console.log('AppA sec startAbilityProcess result: ' + JSON.stringify(error) + ", " + JSON.stringify(data))
    })
}

export default class SecondMainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("LanguageConfigAppA Sec onCreate")
        callBackSeq += "onCreate";
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("LanguageConfigAppA Sec onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("LanguageConfigAppA Sec onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("LanguageConfigAppA Sec onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("LanguageConfigAppA Sec onForeground")
        callBackSeq += "onForeground";
        onShowProcess();
    }

    onBackground() {
        // Ability has back to background
        console.log("LanguageConfigAppA Sec onBackground")
    }
    onConfigurationUpdated(config) {
        console.log("LanguageConfigAppA onConfigurationUpdated called" + JSON.stringify(config));
        console.log("LanguageConfigAppA  configuration:" +
        JSON.stringify(globalThis.abilityContext.configuration));
        sleep(500);

    }
};
