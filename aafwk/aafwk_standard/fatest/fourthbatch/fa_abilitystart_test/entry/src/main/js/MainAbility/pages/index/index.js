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
import {Core} from 'deccjsunit/index'
import commonEvent from '@ohos.commonevent'
export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = this.$t('strings.world');
    },
    onShow(){
        const core = Core.getInstance();
        core.init();
        const configService = core.getDefaultService('config');
        configService.setConfig(this);
        require('../../../test/List.test');
        core.execute();
        commonEvent.publish("mainAbility1_onShow", () => {
            console.log("MainAbility1 Publish CallBack mainAbility1_onShow")
        });
    },
    onActive(){
        commonEvent.publish("mainAbility1_onActive", () => {
            console.log("MainAbility1 Publish CallBack mainAbility1_onActive")
        });
    },
    onInactive(){
        commonEvent.publish("mainAbility1_onInactive", () => {
            console.log("MainAbility1 Publish CallBack mainAbility1_onInactive")
        });
    },
    onHide(){
        commonEvent.publish("mainAbility1_onHide", () => {
            console.log("MainAbility1 Publish CallBack mainAbility1_onHide")
        });
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    }
}



