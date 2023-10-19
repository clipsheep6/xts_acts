/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import hilog from '@ohos.hilog';
import Ability from '@ohos.app.ability.UIAbility'
import Window from '@ohos.window'
import CommonEventManager from '@ohos.commonEventManager'
import notificationManager from '@ohos.notificationManager'

var message
var commonEventData = {
    parameters:{
        message: message
    }
}
export default class EntryAbility extends Ability {
    onCreate(want, launchParam) {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
        hilog.info(0x0000, 'testTag', '%{public}s', 'want param:' + JSON.stringify(want) ?? '');
        hilog.info(0x0000, 'testTag', '%{public}s', 'launchParam:' + JSON.stringify(launchParam) ?? '');
        globalThis.terminate = () => {
            setTimeout(() => {
                this.context.terminateSelf().then(() => {
                    console.info("====>EntryAbility terminateSelf end");
                }).catch((err) => {
                    console.info("====>EntryAbility terminateSelf err:" + JSON.stringify(err));
                });
            }, 30)
        }

        if (want.parameters.action === "Acts_PushCheck_0300") {
            try{
                notificationManager.on("checkNotification", OnCheckNotification);
                console.info(`====>Acts_PushCheck_0300 notificationManager.on end`);
                setTimeout(() => {
                    this.context.startAbility({
                        bundleName: 'com.example.pushcheckpublisher',
                        abilityName: 'EntryAbility',
                        parameters: {
                            action: 'Acts_PushCheck_0300',
                            id: 1,
                            slotType: notificationManager.SlotType.CONTENT_INFORMATION
                        }
                    },(err) => {
                        console.info(`====>Acts_PushCheck_0300 startAbility err: ${JSON.stringify(err)}`);
                        globalThis.terminate();
                    })
                }, 100)
            } catch (error){
                console.info(`====>Acts_PushCheck_0300 notificationManager.on error: ${JSON.stringify(error)}`);
                commonEventData.parameters.message = error
                CommonEventManager.publish('ACTS_START_ABILITY_EVENT', commonEventData, (err) => {
                    console.info(`====>Acts_PushCheck_0300 publish, err: ${JSON.stringify(err)}`)
                })
            }
            function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
                console.info(`====>Acts_PushCheck_0300 OnCheckNotification info: ${JSON.stringify(info)}`);
                if(info.notificationId == 1){
                    return { code: 1, message: "testMsg1"}
                } else {
                    return { code: 0, message: "testMsg0"}
                }
            }
        }

        if (want.parameters.action === "Acts_PushCheck_0700") {
            try{
                notificationManager.on("checkNotification", OnCheckNotification);
                console.info(`====>Acts_PushCheck_0700 notificationManager.on end`);
                try{
                    notificationManager.off("checkNotification");
                    console.info(`====>Acts_PushCheck_0700 notificationManager.off end`);
                    setTimeout(() => {
                        this.context.startAbility({
                            bundleName: 'com.example.pushcheckpublisher',
                            abilityName: 'EntryAbility',
                            parameters: {
                                action: 'Acts_PushCheck_0700',
                                id: 1,
                                slotType: notificationManager.SlotType.CONTENT_INFORMATION
                            }
                        },(err) => {
                            console.info(`====>Acts_PushCheck_0700 startAbility err: ${JSON.stringify(err)}`);
                            globalThis.terminate();
                        })
                    }, 100)
                } catch (error){
                    console.info(`====>Acts_PushCheck_0700 notificationManager.off error: ${JSON.stringify(error)}`);
                }
            } catch (error){
                console.info(`====>Acts_PushCheck_0700 notificationManager.on error: ${JSON.stringify(error)}`);
            }

            function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
                console.info(`====>Acts_PushCheck_0700 OnCheckNotification info: ${JSON.stringify(info)}`);
                if(info.notificationId == 1){
                    return { code: 1, message: "testMsg1"}
                } else {
                    return { code: 0, message: "testMsg0"}
                }
            }
        }

    }

    onDestroy() {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
    }

    onWindowStageCreate(windowStage: Window.WindowStage) {
        // Main window is created, set main page for this ability
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageCreate');

        windowStage.loadContent('pages/Index', (err, data) => {
            if (err.code) {
                hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.ERROR);
                hilog.error(0x0000, 'testTag', 'Failed to load the content. Cause: %{public}s', JSON.stringify(err) ?? '');
                return;
            }
            hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
            hilog.info(0x0000, 'testTag', 'Succeeded in loading the content. Data: %{public}s', JSON.stringify(data) ?? '');
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onWindowStageDestroy');
    }

    onForeground() {
        // Ability has brought to foreground
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onForeground');
    }

    onBackground() {
        // Ability has back to background
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
    }
}
