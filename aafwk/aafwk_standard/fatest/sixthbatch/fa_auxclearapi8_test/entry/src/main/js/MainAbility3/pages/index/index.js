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
import commonEvent from '@ohos.commonEvent';

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = 'yingyong2 yemian3';
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow() {
        console.info('onShow start')
    },
    onHide(){
        console.log("Application2MainAbility3_onHide")
        commonEvent.publish("Application2MainAbility3_onHide",()=>{
            console.log("Application2MainAbility3_onHide publish callBack Application2MainAbility3_onHide");
        });
    },
    onActive(){
        console.log("Application2MainAbility3_onActive")
        commonEvent.publish("Application2MainAbility3_onActive",()=>{
            console.log("Application2MainAbility3_onActive publish callBack Application2MainAbility3_onActive");
        });
    },
    onInactive(){
        console.log("Application2MainAbility3_onInactive")
        commonEvent.publish("Application2MainAbility3_onInactive",()=>{
            console.log("Application2MainAbility3_onInactive publish callBack Application2MainAbility3_onInactive");
        });
    }
}



