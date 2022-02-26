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
    console.debug("====>querytestfour CallBack ====>");
}

async function startAbilityProcess(abilityContext, parameters) {
    let bundleName;
    let abilityName;

    let idx = parameters.nextStep;
    switch (parameters.step[idx]) {
        case "querytestone":
            bundleName = "com.example.querytestone";
            abilityName = "com.example.querytestone.MainAbility";
            break;
        case "querytesttwo":
            bundleName = "com.example.querytesttwo";
            abilityName = "com.example.querytesttwo.MainAbility";
            break;
        case "querytestfour":
            bundleName = "com.example.querytestfour";
            abilityName = "com.example.querytestfour.MainAbility";
        case "querytestfour2":
            bundleName = "com.example.querytestfour";
            abilityName = "com.example.querytestfour.MainAbility2";
            break;
        case "querytestmulti":
            bundleName = "com.example.querytestmulti";
            abilityName = "com.example.querytestmulti.MainAbility";
            break;
        case "querytestmultifeature":
            bundleName = "com.example.querytestmultifeature";
            abilityName = "com.example.querytestmultifeature.MainAbility";
            break;
        case "querytestfive":
            bundleName = "com.example.querytestfive";
            abilityName = "com.example.querytestfive.MainAbility";
            break;
        case "querytestfeature":
            bundleName = "com.example.querytestfive";
            abilityName = "com.example.feature.MainAbility";
            break;
        case "querytestsix":
            bundleName = "com.example.querytestsix";
            abilityName = "com.example.querytestsix.MainAbility";
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
        console.log('startAbilityProcess result: ' + JSON.stringify(error) + ", " + JSON.stringify(data))
    })
}


async function onShowProcess() {
    var abilityWant = globalThis.abilityWant;
    var callBackData = "querytestfour:"
    callBackData += callBackSeq;

    var commonEventPublishData = {
        data: callBackData,
        parameters: abilityWant.parameters
    };

    console.log("querytestfour abilityWant = " + JSON.stringify(abilityWant));
    if (abilityWant.parameters.nextStep >= abilityWant.parameters.stepNum) {
        commonEvent.publish("MultiInstanceStartFinish", commonEventPublishData, publishCallBack);
        console.log("==querytestfour=====> ");
        callBackSeq = "";
    } else {
        commonEvent.publish("MultiInstanceStartNext", commonEventPublishData, () => {
            callBackSeq = "";
            console.log("==querytestfour Next=====> ");
            startAbilityProcess(globalThis.abilityContext, abilityWant.parameters);
        });
    }
}

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("querytestfour onCreate")
        callBackSeq += "onCreate";
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("querytestfour onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("querytestfour onWindowStageCreate")
        //       callBackSeq += "onWindowStageCreate";
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)
        console.log("querytestfour onWindowStageCreate finish")
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("querytestfour onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("querytestfour onForeground")
        callBackSeq += "onForeground";
        onShowProcess();
    }

    onBackground() {
        // Ability has back to background
        console.log("querytestfour onBackground")
    }
};
