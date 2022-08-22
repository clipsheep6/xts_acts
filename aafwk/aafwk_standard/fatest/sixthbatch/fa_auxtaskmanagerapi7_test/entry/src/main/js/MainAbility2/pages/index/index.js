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
        console.info('AuxApplication1 ability2 onShow');
        commonEvent.publish("Ability2_onShow", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0500 Ability2_onShow Publish success");
        });
    },
    onActive(){
        console.info('AuxApplication1 ability2 onActive');
        commonEvent.publish("Ability2_onActive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onActive Publish success");
        });
    },
    onInactive(){
        console.info('AuxApplication1 ability2 onInactive');
        commonEvent.publish("Ability2_onInactive", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onInactive Publish success");
        });
    },
    onHide(){
        console.info('AuxApplication1 ability2 onHide');
        commonEvent.publish("Ability2_onHide", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onHide Publish success");
        });
    }
}



