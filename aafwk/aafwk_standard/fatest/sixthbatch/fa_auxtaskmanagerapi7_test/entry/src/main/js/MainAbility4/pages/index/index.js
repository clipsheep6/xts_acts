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
    onShow(){
        console.info('AuxApplication1 ability4 onShow');
        commonEvent.publish("Ability4_onShow", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onShow Publish success");
        });
        setTimeout(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication2",
                abilityName: "com.example.auxapplication2.MainAbility"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0800 - startAbility1: ' + JSON.stringify(error))
            });
        },500)
        setTimeout(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication",
                abilityName: "com.example.entry2.MainAbility"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0900 - startAbility1: ' + JSON.stringify(error))
            });
        },500)
        setTimeout(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication",
                abilityName: "com.example.auxapplication.MainAbility4"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_1000 - startAbility1: ' + JSON.stringify(error))
            });
        },500)
        setTimeout(() => {
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication",
                abilityName: "com.example.auxapplication.MainAbility5"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_1100 - startAbility1: ' + JSON.stringify(error))
            });
        },500)
    },
    onActive(){
        console.info('AuxApplication1 ability4 onActive');
        commonEvent.publish("Ability4_onActive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onActive Publish success");
        });
    },
    onInactive(){
        console.info('AuxApplication1 ability4 onInactive');
        commonEvent.publish("Ability4_onInactive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onInactive Publish success");
        });
    },
    onHide(){
        console.info('AuxApplication1 ability4 onHide');
        commonEvent.publish("Ability4_onHide", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onHide Publish success");
        });
    }
}



