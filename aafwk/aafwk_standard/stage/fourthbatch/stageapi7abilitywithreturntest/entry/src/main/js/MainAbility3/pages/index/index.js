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
        title: "help m3"
    },
    onInit() {
        this.title = this.$t('strings.world');
    },
    onShow(){
        commonEvent.publish("help_mainAbility3_onShow", () => {
            console.log("Help_MainAbility3 Publish CallBack mainAbility3_onShow")
        });
    },
    onActive(){
        commonEvent.publish("help_mainAbility3_onActive", () => {
            console.log("Help_MainAbility3 Publish CallBack mainAbility3_onActive")
        });
    },
    onInactive(){
        commonEvent.publish("help_mainAbility3_onInactive", () => {
            console.log("Help_MainAbility3 Publish CallBack mainAbility3_onInactive")
        });
    },
    onHide(){
        commonEvent.publish("help_mainAbility3_onHide", () => {
            console.log("Help_MainAbility3 Publish CallBack mainAbility3_onHide")
        });
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    }
}



