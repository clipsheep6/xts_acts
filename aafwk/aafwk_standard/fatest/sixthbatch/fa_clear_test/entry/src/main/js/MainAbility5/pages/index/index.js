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
import commonEvent from '@ohos.commonEvent';

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = 'yingyong1 yemian5';
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow() {
        console.log("ApplicationMainAbility5_onShow")
        commonEvent.publish("ApplicationMainAbility5_onShow",()=>{
            console.log("ApplicationMainAbility5_onShow publish callBack ApplicationMainAbility5_onShow");
        });
    },
    onHide(){
        console.log("ApplicationMainAbility5_onHide")
        commonEvent.publish("ApplicationMainAbility5_onHide",()=>{
            console.log("ApplicationMainAbility5_onHide publish callBack ApplicationMainAbility5onHide");
        });
    },
    onActive(){
        console.log("ApplicationMainAbility5_onActive")
        commonEvent.publish("ApplicationMainAbility5_onActive",()=>{
            console.log("ApplicationMainAbility5_onActive publish callBack ApplicationMainAbility5_onActive");
        });
    },
    onInactive(){
        console.log("ApplicationMainAbility5_onInactive");
        commonEvent.publish("ApplicationMainAbility5_onInactive",()=>{
            console.log("ApplicationMainAbility5_onInactive publish callBack ApplicationMainAbility5_onInactive");
        });
    }
}



