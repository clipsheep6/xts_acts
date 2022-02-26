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
import appManager from '@ohos.application.appManager'

var subscribeInfo = {
    events: ["event_from_ProcessManage_SystemTest",
    "event_SystemAppBToSystemAppA",
    "event_VendorAppAToSystemAppA",
    "event_SystemAppAMultiToSystemAppA",
    "event_VendorAppServiceToSystemAppA"
    ],
};
var publishEventName = "event_from_ProcessManage_SystemAppA";
var eventFromSystemAMulti = "event_SystemAppAMultiToSystemAppA";
var testAction;
var testTarget;
var subscriber;
var systemABundleName = "com.acts.pmsystemappa";
var systemBBundleName = "com.acts.pmsystemappb";
var vendorABundleName = "com.acts.pmvendorappa";
var vendorServiceBundleName = "com.acts.pmvendorappservice";
var systemBAbilityName = "com.acts.pmsystemappb.MainAbility";
var vendorAAbilityName = "com.acts.pmvendorappa.MainAbility";
var multiAAbilityName = "com.acts.pmsystemappamulti.MainAbility";
var vendorServiceAbilityName = "com.acts.pmvendorappservice.ServiceAbility";

function onReceivedPublishCallBack() {
    console.log("ACTS_ProcessManage SystemAppA onReceivedPublishCallBack");
}

function publishResultEvent(testResult) {
    console.log("ACTS_ProcessManage SystemAppA publishResultEvent testAction:" + testAction);
    console.log("ACTS_ProcessManage SystemAppA publishResultEvent testTarget:" + testTarget);
    console.log("ACTS_ProcessManage SystemAppA publishResultEvent testResult:" + testResult);
    let publishData = { data: testResult.toString() };
    console.log("ACTS_ProcessManage SystemAppA publishResultEvent publishData:"
    + JSON.stringify(publishData));
    commonEvent.publish(publishEventName, publishData, onReceivedPublishCallBack);

}

function onReceivedHandleCallback(err, data) {
    publishResultEvent(data);
    console.log("ACTS_ProcessManage SystemAppA onReceivedHandleCallback data:"
    + JSON.stringify(data));
}

async function onShowProcess() {

    var abilityWant = globalThis.abilityWant;
    console.log("ACTS_ProcessManage SystemAppA onShowProcess abilityWant:"
    + JSON.stringify(abilityWant));
    testAction = abilityWant.action;
    console.log("ACTS_ProcessManage SystemAppA onShowProcess testAction:" + testAction);
    testTarget = abilityWant.parameters.testTarget;
    console.log("ACTS_ProcessManage SystemAppA onShowProcess testTarget:" + testTarget);


    if (testTarget == systemABundleName) {

        if (testAction == "promiseKill") {
            console.log("ACTS_ProcessManage SystemAppA onShowProcess testAction:" + testAction);
            var result = await appManager.killProcessesByBundleName(testTarget);
            console.log("ACTS_ProcessManage SystemAppA onShowProcess result:" + result);
            publishResultEvent(result);
        } else if (testAction == "asyncKill") {
            console.log("ACTS_ProcessManage SystemAppA onShowProcess testAction:" + testAction);
            appManager.killProcessesByBundleName(testTarget, onReceivedHandleCallback);
        } else if (testAction == "promiseCleanup") {
            console.log("ACTS_ProcessManage SystemAppA onShowProcess testAction:" + testAction);
            var result = await appManager.clearUpApplicationData(testTarget);
            console.log("ACTS_ProcessManage SystemAppA onShowProcess result:" + result);
            publishResultEvent(result);
        } else if (testAction == "asyncCleanup") {
            console.log("ACTS_ProcessManage SystemAppA onShowProcess testAction:" + testAction);
            appManager.clearUpApplicationData(testTarget, onReceivedHandleCallback);
        }

    }
    else {
        try {
            subscriber = await commonEvent.createSubscriber(subscribeInfo)
            console.debug("ACTS_ProcessManage SystemAppA onShowProcess subscriber:"
            + JSON.stringify(subscriber));
            commonEvent.subscribe(subscriber, subscribeCallBack);
        } catch (err) {
            console.debug("ACTS_ProcessManage SystemAppA onShowProcess err:" + err);
        }

        if (testTarget == systemBBundleName) {
            await globalThis.abilityContext.startAbility({
                bundleName: systemBBundleName,
                abilityName: systemBAbilityName,
            }, (error, data) => {
                console.log('ACTS_ProcessManage SystemAppA onShowProcess startAbility systemBBundleName: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
        else if (testTarget == vendorABundleName) {
            await globalThis.abilityContext.startAbility({
                bundleName: vendorABundleName,
                abilityName: vendorAAbilityName,
                action: "promiseCleanup",
                parameters: {
                    testTarget: vendorABundleName
                }
            }, (error, data) => {
                console.log('ACTS_ProcessManage SystemAppA onShowProcess startAbility vendorABundleName: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
        else if (testTarget == multiAAbilityName) {
            await globalThis.abilityContext.startAbility({
                bundleName: systemABundleName,
                abilityName: multiAAbilityName,
            }, (error, data) => {
                console.log('ACTS_ProcessManage SystemAppA onShowProcess startAbility multiAAbilityName: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
        else if (testTarget == vendorServiceBundleName) {
            console.debug('ACTS_ProcessManage SystemAppA onShowProcess testTarget:' + testTarget);
            globalThis.abilityContext.connectAbility({
                bundleName: vendorServiceBundleName,
                abilityName: vendorServiceAbilityName,
            }, (error, data) => {
                console.log('ACTS_ProcessManage SystemAppA onShowProcess startAbility startServiceAbility: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
    }

    async function subscribeCallBack(err, data) {
        console.debug("ACTS_ProcessManage SystemAppA subscribeCallBack SubscribeCallBack data:====>"
        + JSON.stringify(data));
        console.debug("ACTS_ProcessManage SystemAppA subscribeCallBack SubscribeCallBack data.event:====>"
        + JSON.stringify(data.event));

        if (data.event == eventFromSystemAMulti) {
            testTarget = systemABundleName;
        }
        if (testAction == "promiseKill") {
            console.log("ACTS_ProcessManage SystemAppA subscribeCallBack testAction:" + testAction);
            var result = await appManager.killProcessesByBundleName(testTarget);
            console.log("ACTS_ProcessManage SystemAppA subscribeCallBack result:" + result);
            publishResultEvent(result);
        } else if (testAction == "asyncKill") {
            console.log("ACTS_ProcessManage SystemAppA subscribeCallBack testAction:" + testAction);
            await appManager.killProcessesByBundleName(testTarget, onReceivedHandleCallback);
        } else if (testAction == "promiseCleanup") {
            console.log("ACTS_ProcessManage SystemAppA subscribeCallBack testAction:" + testAction);
            var result = await appManager.clearUpApplicationData(testTarget);
            console.log("ACTS_ProcessManage SystemAppA subscribeCallBack result:" + result);
            publishResultEvent(result);
        } else if (testAction == "asyncCleanup") {
            console.log("ACTS_ProcessManage SystemAppA subscribeCallBack testAction:" + testAction);
            await appManager.clearUpApplicationData(testTarget, onReceivedHandleCallback);
        } else if (testAction == "promiseCleanupTentimes") {
            for (var i = 0; i < 10; i++) {
                console.log("ACTS_ProcessManage SystemAppA subscribeCallBack testAction:" + testAction);
                var result = await appManager.clearUpApplicationData(testTarget);
                console.log("ACTS_ProcessManage SystemAppA subscribeCallBack result:" + result);
            }
            publishResultEvent(result);
        }
    }
}

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("ACTS_ProcessManage SystemAppA MainAbility onCreate")
        globalThis.abilityWant = want;
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("ACTS_ProcessManage SystemAppA MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("ACTS_ProcessManage SystemAppA MainAbility onWindowStageCreate")
        globalThis.abilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index", null)

    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("ACTS_ProcessManage SystemAppA MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("ACTS_ProcessManage SystemAppA MainAbility onForeground")
        onShowProcess();
    }

    onBackground() {
        // Ability has back to background
        console.log("ACTS_ProcessManage SystemAppA MainAbility onBackground")
    }
};
