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
import router from '@system.router'
import commonEvent from '@ohos.commonEvent';
import missionManager  from '@ohos.application.missionManager';

export default {
    data: {
        title: "",
    },
    onInit() {
        this.title = this.$t('strings.world');
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow() {
        console.info('AuxApplication2 ability2 onShow');
        commonEvent.publish("Ability2_onShow", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onShow Publish success");
        });
        setTimeout(() => {
            missionManager.getMissionInfos('', 20, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_3600 AsyncCallback errCode : ' +
                    JSON.stringify(error.code) + " data: " + JSON.stringify(data));
                commonEvent.publish("uri",{
                    parameters:{
                        data:error.code
                    }
                },()=>{
                    console.log("Ability2_data")
                })
            })
        }, 1000)
        setTimeout(() => {
            missionManager.getMissionInfo('', 1, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_3700 AsyncCallback errCode : ' +
                    JSON.stringify(error.code) + " data: " + JSON.stringify(data));
                commonEvent.publish("missionId",{
                    parameters:{
                        data:error.code
                    }
                },()=>{
                    console.log("Ability2_data")
                })
            })
        }, 1000)
        setTimeout(() => {
            var result
            result = missionManager.registerMissionListener({
                onMissionCreated: function onMissionCreated(number) {
                    console.log("SUB_onForegroundApplicationChanged")
                },
                onMissionDestroyed: function onMissionDestroyed(number) {
                    console.log("SUB_onAbilityStateChanged")
                },
                onMissionSnapshotChanged: function onMissionSnapshotChanged(number) {
                    console.log("SUB_onProcessCreated")
                },
                onMissionMovedToFront: function onMissionMovedToFront(number) {
                    console.log("SUB_onProcessDied")
                },
            });
            console.log('SUB_AA_OpenHarmony_MissionManager_3800 result ### ' + JSON.stringify(result));
            if(JSON.stringify(result) == undefined) {
                commonEvent.publish("register",{
                    parameters:{
                        data: 0
                    }
                },()=>{
                    console.log("result_data")
                })
            }
            console.log('SUB_AA_OpenHarmony_MissionManager_3800 result *** ' + JSON.stringify(result));
        }, 1000)
        setTimeout(() => {
            var test
            test = missionManager.registerMissionListener({
                onMissionCreated: function onMissionCreated(number) {
                    console.log("SUB_onForegroundApplicationChanged")
                },
                onMissionDestroyed: function onMissionDestroyed(number) {
                    console.log("SUB_onAbilityStateChanged")
                },
                onMissionSnapshotChanged: function onMissionSnapshotChanged(number) {
                    console.log("SUB_onProcessCreated")
                },
                onMissionMovedToFront: function onMissionMovedToFront(number) {
                    console.log("SUB_onProcessDied")
                },
            });
            missionManager.unregisterMissionListener(test, (err, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_3900 AsyncCallback errCode : ' +
                    JSON.stringify(err) + " data: " + JSON.stringify(data));
                commonEvent.publish("listener",{
                    parameters:{
                        data:err.code
                    }
                },()=>{
                    console.log("listener_data" + err.code)
                })
            })
        }, 1000)
    },
    onActive(){
        console.info('AuxApplication2 ability2 onActive');
        commonEvent.publish("Ability2_onActive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onActive Publish success");
        });
    },
    onInactive(){
        console.info('AuxApplication2 ability2 onInactive');
        commonEvent.publish("Ability2_onInactive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onInactive Publish success");
        });
    },
    onHide(){
        console.info('AuxApplication2 ability2 onHide');
        commonEvent.publish("Ability2_onHide", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onHide Publish success");
        });
    }
}



