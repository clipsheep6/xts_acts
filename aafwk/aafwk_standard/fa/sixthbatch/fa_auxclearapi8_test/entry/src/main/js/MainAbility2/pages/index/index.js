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
        this.title = 'yingyong2 yemian2';
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow() {
        console.log("Application2MainAbility2_onShow")
        commonEvent.publish("Application2MainAbility2_onShow",()=>{
            console.log("Application2MainAbility2_onShow publish callBack singletonEntryAbulity2_onShow");
        });
    },
    onHide(){
        console.log("Application2MainAbility2_onHide")
        commonEvent.publish("Application2MainAbility2_onHide",()=>{
            console.log("Application2MainAbility2 publish callBack singletonEntryAbulity1_onHide");
        });
    },
    onActive(){
        console.log("Application2MainAbility2_onActive")
        commonEvent.publish("Application2MainAbility2_onActive",()=>{
            console.log("Application2MainAbility2_onActive publish callBack singletonEntryAbulity1_onActive");
        });
    },
    onInactive(){
        console.log("Application2MainAbility2_onInactive")
        commonEvent.publish("Application2MainAbility2_onInactive",()=>{
            console.log("Application2MainAbility2_onInactive publish callBack singletonEntryAbulity1_onInactive");
        });
    }

}



