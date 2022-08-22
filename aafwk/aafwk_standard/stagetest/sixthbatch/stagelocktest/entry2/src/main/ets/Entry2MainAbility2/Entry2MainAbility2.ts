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
export default class Entry2MainAbility2 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("Entry2MainAbility2 onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("Entry2MainAbility2_onCreate", () => {
            console.log("Entry2MainAbility2 Publish CallBack Entry2MainAbility2_onCreate")
        });

        function SubscribeCallBack(err, data){
            console.log("Entry2MainAbility2_missionId CallBack data:" + JSON.stringify(data));
            if(data.event == "Entry2MainAbility2_lockMission"){
                missionId2 = data.parameters.missionId
                console.log("SUB_AA_OpenHarmony_Lock_1200 Entry2MainAbility2_lockMission missionId2:" + missionId2);
                missionManager.lockMission(missionId2, (error, resData) => {
                    console.log( "SUB_AA_OpenHarmony_Lock_1200 lockMission success, error: "
                    + JSON.stringify(error) + ", data: " + JSON.stringify(resData));
                    commonEvent.publish("Entry2MainAbility2_lockMissionRes",  {
                        parameters:{resData:resData}
                    }, () => {
                        console.log("SUB_AA_OpenHarmony_Lock_1200 Publish CallBack Entry2MainAbility2_lockMissionRes")
                    });
                });
            }else if(data.event == "Entry2MainAbility2_unlockMission"){
                missionManager.unlockMission(missionId2, (error, resData) => {
                    console.log( "SUB_AA_OpenHarmony_Lock_1200 unlockMission: "
                    + JSON.stringify(error) + ", data: " + JSON.stringify(resData));
                    commonEvent.publish("Entry2MainAbility2_unlockMissionRes",  {
                        parameters:{resData:resData}
                    }, () => {
                        console.log("SUB_AA_OpenHarmony_Lock_1200 Publish CallBack Entry2MainAbility2_unlockMissionRes")
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
        console.log("Entry2MainAbility2 onDestroy");
        commonEvent.publish("Entry2MainAbility2_onDestroy", () => {
            console.log("Entry2MainAbility2 Publish CallBack Entry2MainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("Entry2MainAbility2 onWindowStageCreate");
        commonEvent.publish("Entry2MainAbility2_onWindowStageCreate", () => {
            console.log("Entry2MainAbility2 Publish CallBack Entry2MainAbility2_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("Entry2MainAbility2 onWindowStageDestroy") ;
        commonEvent.publish("Entry2MainAbility2_onWindowStageDestroy", () => {
            console.log("Entry2MainAbility2 Publish CallBack Entry2MainAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("Entry2MainAbility2 onForeground");
        commonEvent.publish("Entry2MainAbility2_onForeground", () => {
            console.log("Entry2MainAbility2 Publish CallBack Entry2MainAbility2_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("Entry2MainAbility2 onBackground");
        commonEvent.publish("Entry2MainAbility2_onBackground", () => {
            console.log("Entry2MainAbility2 Publish CallBack Entry2MainAbility2_onBackground")
        });
    }
};
