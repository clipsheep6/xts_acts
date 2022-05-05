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
import missionManager from '@ohos.application.missionManager'

var missionId2 = 0;
export default class MainAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility3 onCreate");
        commonEvent.publish("mainAbility3_onCreate", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onCreate")
        });

        function SubscribeCallBack(err, data){
            console.log("Entry2MainAbility2_missionId CallBack data:" + JSON.stringify(data));
            if(data.event == "Entry2MainAbility2_lockMission"){
                missionId2 = data.parameters.missionId
                console.log("SUB_AA_OpenHarmony_Lock_1300 Entry2MainAbility2_lockMission missionId2:" + missionId2);
                missionManager.lockMission(missionId2, (error, resData) => {
                    console.log( "SUB_AA_OpenHarmony_Lock_1300 lockMission success, error: "
                    + JSON.stringify(error) + ", data: " + JSON.stringify(resData));
                    commonEvent.publish("Entry2MainAbility2_lockMissionRes",  {
                        parameters:{resData:resData}
                    }, () => {
                        console.log("SUB_AA_OpenHarmony_Lock_1300 Publish CallBack Entry2MainAbility2_lockMissionRes")
                    });
                });
            }else if(data.event == "Entry2MainAbility2_unlockMission"){
                missionManager.unlockMission(missionId2, (error, resData) => {
                    console.log( "SUB_AA_OpenHarmony_Lock_1300 unlockMission: "
                    + JSON.stringify(error) + ", data: " + JSON.stringify(resData));
                    commonEvent.publish("Entry2MainAbility2_unlockMissionRes",  {
                        parameters:{resData:resData}
                    }, () => {
                        console.log("SUB_AA_OpenHarmony_Lock_1300 Publish CallBack Entry2MainAbility2_unlockMissionRes")
                    });
                });
            }
        }
        var Subscriber = '';
        var subscriberMissionEvent = {
            events: ["Entry2MainAbility2_lockMission","Entry2MainAbility2_unlockMission"]
        };
        commonEvent.createSubscriber(subscriberMissionEvent).then(async (data) => {
            console.log("====>Create Entry2MainAbility2_lockMission====>");
            Subscriber = data;
            console.log("Entry2MainAbility2_lockMission data is : " + JSON.stringify(Subscriber))
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility3 onDestroy");
        commonEvent.publish("mainAbility3_onDestroy", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility3 onWindowStageCreate");
        commonEvent.publish("MainAbility3_onWindowStageCreate", () => {
            console.log("MainAbility3 Publish CallBack MainAbility3_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility3 onWindowStageDestroy") ;
        commonEvent.publish("MainAbility3_onWindowStageDestroy", () => {
            console.log("MainAbility3 Publish CallBack MainAbility3_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility3 onForeground");
        commonEvent.publish("mainAbility3_onForeground", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility3 onBackground");
        commonEvent.publish("mainAbility3_onBackground", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onBackground")
        });
    }
};
