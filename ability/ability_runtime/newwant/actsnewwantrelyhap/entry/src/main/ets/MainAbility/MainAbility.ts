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

import Ability from '@ohos.app.ability.UIAbility'
import commonEvent from '@ohos.commonEvent'

function sleep(delay) {
    let start = new Date().getTime();
    while (true) {
        if (new Date().getTime() - start > delay) {
            break;
        }
    }
}

export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("ACTS_NewWant MainAbility onCreate")
        globalThis.abilityWant = want;
        commonEvent.publish("onCreateMain_To_Test_CommonEvent", () => {
            console.log("ACTS_NewWant Publish CallBack onCreateMain_To_Test_CommonEvent")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("ACTS_NewWant MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("ACTS_NewWant MainAbility onWindowStageCreate")
        globalThis.hapMainAbilityContext = this.context
        windowStage.setUIContent(this.context, "pages/index/index", null)

        commonEvent.publish("onWindowStageCreateMain_To_Test_CommonEvent", () => {
            console.log("ACTS_NewWant Publish CallBack onWindowStageCreateMain_To_Test_CommonEvent")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("ACTS_NewWant MainAbility onWindowStageDestroy")
    }

    onForeground() {
        sleep(1000)
        // Ability has brought to foreground
        console.log("ACTS_NewWant MainAbility onForeground")
        if (globalThis.abilityWant.action == 'startStandard0400') {
            globalThis.hapMainAbilityContext.startAbility({
                bundleName: "com.example.newwanthap",
                abilityName: "com.example.newwanthapa.SecondAbility",
                action: "restartSingleton"
            }, (error, data) => {
                console.log('ACTS_NewWant MainAbility onForeground - startAbility restart singleton: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
        if (globalThis.abilityWant.action == 'startStandard0300') {
            globalThis.hapMainAbilityContext.startAbility({
                bundleName: "com.example.newwanthap",
                abilityName: "com.example.newwanthapa.SecondAbility",
                action: "startSingleton0300"
            }, (error, data) => {
                console.log('ACTS_NewWant MainAbility onForeground - startAbility restart singleton: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
        if (globalThis.abilityWant.action == 'startMainAbility0700') {
            globalThis.hapMainAbilityContext.startAbility({
                bundleName: "com.example.newwanthap",
                abilityName: "com.example.newwanthapa.SecondAbility",
                action: "restartSecondAbility0700"
            }, (error, data) => {
                console.log('ACTS_NewWant MainAbility onForeground - startAbility startServiceAbility: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
        if (globalThis.abilityWant.action == 'startMainAbility0800') {
            globalThis.hapMainAbilityContext.startAbility({
                bundleName: "com.example.newwanthap",
                abilityName: "com.example.newwanthapa.SecondAbility",
                action: "startSecondAbility0800"
            }, (error, data) => {
                console.log('ACTS_NewWant MainAbility onForeground - startAbility startServiceAbility: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            })
        }
        commonEvent.publish("onForegroundMain_To_Test_CommonEvent", () => {
            console.log("ACTS_NewWant MainAbility Publish CallBack onForegroundMain_To_Test_CommonEvent")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("ACTS_NewWant MainAbility onBackground")
    }

    onNewWant(want) {
        // Ability has brought to foreground when it already in foreground
        console.log("ACTS_NewWant MainAbility onNewWant")
        globalThis.abilityWant = want;
        console.log("ACTS_NewWant MainAbility onNewWant deviceId :" + want)
        console.log("ACTS_NewWant MainAbility onNewWant deviceId :" + want.deviceId)
        console.log("ACTS_NewWant MainAbility onNewWant bundleName :" + want.bundleName)
        console.log("ACTS_NewWant MainAbility onNewWant abilityName :" + want.abilityName)
        console.log("ACTS_NewWant MainAbility onNewWant uri :" + want.uri)
        console.log("ACTS_NewWant MainAbility onNewWant type :" + want.type)
        console.log("ACTS_NewWant MainAbility onNewWant flags :" + want.flags)
        console.log("ACTS_NewWant MainAbility onNewWant action :" + want.action)
        var publishData = {
            data: want.action
        }
        commonEvent.publish("onNewWantMain_To_Test_CommonEvent",  () => {
            console.log("ACTS_NewWant MainAbility Publish CallBack onNewWantMain_To_Test_CommonEvent")
        });
        switch (want.action) {
            case 'restartHapB':
              commonEvent.publish("onNewWantSecond1_To_Test_CommonEvent", publishData,() => {
                  console.log("ACTS_NewWant SecondAbility Publish CallBack onNewWantSecond1_To_Test_CommonEvent")
              });
              break;
            case 'restartSecondAbility0700':
              commonEvent.publish("onNewWantSecond2_To_Test_CommonEvent", publishData,() => {
                  console.log("ACTS_NewWant SecondAbility Publish CallBack onNewWantSecond2_To_Test_CommonEvent")
              });
              break;
          }
    }
};
