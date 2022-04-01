// @ts-nocheck
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
import router from '@system.router'
import commonEvent from '@ohos.commonevent'
export default {
    data: {
        title: "help"
    },
    onInit() {
        this.title = this.$t('strings.world');
    },
    onShow(){
        commonEvent.publish("help_mainAbility2_onShow", () => {
            console.log("Help_MainAbility2 Publish CallBack mainAbility2_onShow")
        });
    },
    onActive(){
        commonEvent.publish("help_mainAbility2_onActive", () => {
            console.log("Help_MainAbility2 Publish CallBack mainAbility2_onActive")
        });
    },
    onInactive(){
        commonEvent.publish("help_mainAbility2_onInactive", () => {
            console.log("Help_MainAbility2 Publish CallBack mainAbility2_onInactive")
        });
    },
    onHide(){
        commonEvent.publish("help_mainAbility2_onHide", () => {
            console.log("Help_MainAbility2 Publish CallBack mainAbility2_onHide")
        });
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    }
}



