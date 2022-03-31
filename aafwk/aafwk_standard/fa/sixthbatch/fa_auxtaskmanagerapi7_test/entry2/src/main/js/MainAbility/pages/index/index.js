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
import abilityFeatureAbility from '@ohos.ability.featureAbility';
import router from '@system.router';
import commonEvent from '@ohos.commonEvent';

export default {
    data: {
        title: ""
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
        console.info('AuxApplication1 ability3 onShow');
        commonEvent.publish("Ability3_onShow", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onShow Publish success");
        });
        sleep(500).then(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication",
                abilityName: "com.example.auxapplication.MainAbility"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0100 - startAbility1: ' + JSON.stringify(error))
            });
        })
        setTimeout(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication2",
                abilityName: "com.example.auxapplication2.MainAbility"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0200 - startAbility1: ' + JSON.stringify(error))
            });
        },500)
        setTimeout(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication",
                abilityName: "com.example.entry2.MainAbility"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0600 - startAbility1: ' + JSON.stringify(error))
            });
        },500)
        setTimeout(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication",
                abilityName: "com.example.auxapplication.MainAbility4"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0700 - startAbility1: ' + JSON.stringify(error))
            });
        },500)
        
        function sleep (time) {
            return new Promise((resolve) => setTimeout(resolve, time));
        };
    },
    onActive(){
        console.info('AuxApplication1 ability3 onActive');
        commonEvent.publish("Ability3_onActive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onActive Publish success");
        });
    },
    onInactive(){
        console.info('AuxApplication1 ability3 onInactive');
        commonEvent.publish("Ability3_onInactive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onInactive Publish success");
        });
    },
    onHide(){
        console.info('AuxApplication1 ability3 onHide');
        commonEvent.publish("Ability3_onHide", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onHide Publish success");
        });
    }
}



