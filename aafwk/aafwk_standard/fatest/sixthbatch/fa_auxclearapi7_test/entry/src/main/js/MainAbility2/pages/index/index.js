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
import commonEvent from '@ohos.commonEvent';
import router from '@system.router'

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = "API72";
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow() {
        console.log("Api7ApplicationMainAbility2_onShow")
        commonEvent.publish("Api7ApplicationMainAbility2_onShow",()=>{
            console.log("Api7ApplicationMainAbility2_onShow publish callBack Api7ApplicationMainAbility2_onShow");
        });
    },
    onHide(){
        console.log("Api7ApplicationMainAbility2_onHide")
        commonEvent.publish("Api7ApplicationMainAbility2_onHide",()=>{
            console.log("Api7ApplicationMainAbility2_onHide publish callBack Api7ApplicationMainAbility2onHide");
        });
    },
    onActive(){
        console.log("Api7ApplicationMainAbility2_onActive")
        commonEvent.publish("Api7ApplicationMainAbility2_onActive",()=>{
            console.log("Api7ApplicationMainAbility2_onActive publish callBack Api7ApplicationMainAbility2_onActive");
        });
    },
    onInactive(){
        console.log("Api7ApplicationMainAbility2_onInactive");
        commonEvent.publish("Api7ApplicationMainAbility2_onInactive",()=>{
            console.log("Api7ApplicationMainAbility2_onInactive publish callBack "
            + "Api7ApplicationMainAbility2_onInactive");
        });
    }
}



