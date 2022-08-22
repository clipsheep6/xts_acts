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
import {Core} from 'deccjsunit/index'
import commonEvent from '@ohos.commonEvent';
import featureAbility from '@ohos.ability.featureAbility';

export default {
    data: {
        title: "",
        text: ""
    },
    onInit() {
        this.title = this.$t('strings.world22222');
        this.text = "This is entry MainAbility"
    },

    onShow() {
        console.info("Ability2_onShow");
        commonEvent.publish("Ability2_onShow", () =>{
            console.log("Ability2_onShow publish success");
        });
    },

    onHide(){
        console.info("Ability2_onHide");
        commonEvent.publish("Ability2_onHide", () =>{
            console.log("Ability2_onHide publish success");
        });
    },

    onActive(){
        console.info("Ability2_onActive");
        commonEvent.publish("Ability2_onActive", () =>{
            console.log("Ability2_onActive publish success");
        });

    },

    onInactive(){
    },

    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    }
}



