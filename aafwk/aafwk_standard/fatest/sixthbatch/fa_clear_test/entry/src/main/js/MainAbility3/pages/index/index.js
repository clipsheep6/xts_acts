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
        this.title = 'yingyong1 yemian3';
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow() {
        console.log("ApplicationMainAbility3_onShow")
        commonEvent.publish("ApplicationMainAbility3_onShow",()=>{
            console.log("ApplicationMainAbility3_onShow publish callBack ApplicationMainAbility3_onShow");
        });
    },
    onHide(){
        console.log("ApplicationMainAbility3_onHide")
        commonEvent.publish("ApplicationMainAbility3_onHide",()=>{
            console.log("ApplicationMainAbility3_onHide publish callBack ApplicationMainAbility3onHide");
        });
    },
    onActive(){
        console.log("ApplicationMainAbility3_onActive")
        commonEvent.publish("ApplicationMainAbility3_onActive",()=>{
            console.log("ApplicationMainAbility3_onActive publish callBack ApplicationMainAbility3_onActive");
        });
    },
    onInactive(){
        console.log("ApplicationMainAbility3_onInactive");
        commonEvent.publish("ApplicationMainAbility3_onInactive",()=>{
            console.log("ApplicationMainAbility3_onInactive publish callBack ApplicationMainAbility3_onInactive");
        });
    }
}



