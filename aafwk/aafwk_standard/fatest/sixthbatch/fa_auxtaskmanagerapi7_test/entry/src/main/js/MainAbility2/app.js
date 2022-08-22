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
    onCreate() {
        console.info("AuxApplication1 ability72 onCreate");
        commonEvent.publish("Ability72_onCreate", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onCreate Publish success");
        });
    },
    onDestroy() {
        console.info("AuxApplication1 ability72 onDestroy");
        commonEvent.publish("Ability72_onDestroy", () => {
            console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onDestroy Publish success");
        });
    }
};
