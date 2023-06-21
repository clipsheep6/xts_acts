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
import commonEvent from '@ohos.commonEventManager'
import formHost from '@ohos.app.form.formHost'
import Window from '@ohos.window'
var ACTS_FormEvent = {
    events: ['ACTS_SecondAppFirstAbilitySecond', 'ACTS_SecondAppFirstAbilityThird']
};
export default class FeatureAbility extends Ability {
    async onCreate(want, launchParam) {
        var abilityContext = this.context;
        var testCase = want.parameters.case;
        var callbackFormId;
        var count = 0;
        var dataSize = 0;
        let callback = function (data) {
            dataSize = data.length;
            callbackFormId = data[0].formId;
            console.log(`====>secondModule secondTestCallback data: ${JSON.stringify(data)}`);
            count++;
        }
        try {
            switch (testCase) {
                case 'a' :
                case 'c' :
                    formHost.on('notifyInvisible', callback);
                    break;
                case 'b' :
                    formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtestb');
                    break;
                default :
                    formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtestb');
                    break;
            }
        } catch (error) {
            console.log('====>secondModule Form on catch err:' + JSON.stringify(error));
        }

        await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
            var subscriber = data;
            var flag = false;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            abilityContext.startAbility({
                bundleName: 'com.example.queryforminfobypushtestb',
                abilityName: 'EntryAbility',
                parameters: {
                    'isVisible': want.parameters.isVisible
                }}, () => {});
            function subscribeCallBack(err, data) {
                console.info('====>secondModule subscribeCallBack data:' + JSON.stringify(data));
                if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
                    flag = true;
                    try {
                        switch (testCase) {
                            case 'a' :
                                formHost.off('notifyInvisible', callback);
                                break;
                            case 'b' :
                                formHost.off('notifyVisible', null, 'com.example.queryforminfobypushtestb');
                                break;
                            case 'c' :
                                formHost.off('notifyInvisible');
                                break;
                            default :
                                formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtestb');
                                break;
                        }
                    } catch (error) {
                        console.log('====>secondModule Form off catch err:' + JSON.stringify(error));
                    }
                    let commonEventData = {
                        parameters: {
                            "callbackFormId": callbackFormId,
                            "dataSize": dataSize
                        }
                    };
                    commonEvent.publish("ACTS_FirstAppSecondModuleFirst", commonEventData, () => {});
                }
                if (data.event == 'ACTS_SecondAppFirstAbilityThird') {
                    let commonEventData = {
                        parameters: {
                            "count": count
                        }
                    };
                    commonEvent.publish("ACTS_FirstAppSecondModuleSecond", commonEventData, () => {});
                    setTimeout(() => {
                        commonEvent.unsubscribe(subscriber, function () {});
                    }, 50);
                }
            }
            setTimeout(() => {
                if (flag == false) {
                    commonEvent.unsubscribe(subscriber, function () {});
                }
            }, 2000);
        })
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
        setTimeout(() => {
            this.context.terminateSelf();
        }, 3000)
    }
}
