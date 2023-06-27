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
import missionManager from '@ohos.application.missionManager'
export default class EntryAbility extends Ability {
    onCreate(want, launchParam) {
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
        hilog.info(0x0000, 'testTag', '%{public}s', 'want param:' + JSON.stringify(want) ?? '');
        hilog.info(0x0000, 'testTag', '%{public}s', 'launchParam:' + JSON.stringify(launchParam) ?? '');
        globalThis.want = want;
        if (want.action == 'Terminate') {
            this.context.terminateSelf().then(() => {
                console.log('Terminate_success');
            }).catch((error) => {
                console.log('Terminate_failed:' + JSON.stringify(error));
            });
        }
        else if (globalThis.want.action == "ClearMission") {
            console.log("ClearMissions entered!");
            missionManager.getMissionInfos("", 10, (error, missions) => {
                console.log("getMissionInfos is called, error.code = " + JSON.stringify(error));
                console.log("size = " + missions.length);
                console.log("missions = " + JSON.stringify(missions));
                for (let i = 0; i < missions.length; i++) {
                    if (missions[i].want.bundleName == 'com.example.appexitreasonrely') {
                        missionManager.clearMission(missions[i].missionId).then(() => {
                            console.log("clearMission is called ");
                        });
                        break;
                    }
                }
            });
        }
        else if (want.action == 'Normal') {

            let wantValue = {
                bundleName: "com.example.xtsappexitreasontest",
                abilityName: "TestAbility"
            }
            let resultCode = launchParam.lastExitReason;
            console.info('AbilityResult' + JSON.stringify(resultCode));
            var abilityResult = {
                wantValue,
                resultCode
            }
            setTimeout(() => {
                this.context.terminateSelfWithResult(abilityResult, (error) => {
                    console.log("terminateSelfWithResult is called = " + error.code)
                });
            },200)
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
        if (globalThis.want.action == 'Jserror') {
            setTimeout(() => {
                console.info("JsError logic !")
                globalThis.contest.startAbilityMM();
            }, 500);
        }
    }

    onBackground() {
        // Ability has back to background
        hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
        hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onBackground');
    }
}
