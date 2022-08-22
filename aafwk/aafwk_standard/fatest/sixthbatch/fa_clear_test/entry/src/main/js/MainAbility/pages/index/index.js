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
import {Core} from 'deccjsunit/index'

export default {
    data: {
        title: ""
    },
    onInit() {
        this.title = 'yingyong1 yemian1';
    },
    onclick: function () {
        router.replace({
            uri: "pages/second/second"
        })
    },
    onShow() {
        console.log("ApplicationMainAbility1_onShow")
        commonEvent.publish("ApplicationMainAbility1_onShow",()=>{
            console.log("ApplicationMainAbility1_onShow publish callBack singletonEntryAbulity1_onHide");
        });
        const core = Core.getInstance()
        core.init()
        const configService = core.getDefaultService('config')
        console.info('onShow')
        require('../../../test/List.test')
        console.info('onShow start5')
        core.execute()
    },
    onHide(){
        console.log("ApplicationMainAbility1_onHide")
        commonEvent.publish("ApplicationMainAbility1_onHide",()=>{
            console.log("ApplicationMainAbility1_onHide publish callBack singletonEntryAbulity1_onHide");
        });
    },
    onActive(){
        console.log("ApplicationMainAbility1_onActive")
        commonEvent.publish("ApplicationMainAbility1_onActive",()=>{
            console.log("ApplicationMainAbility1_onActive publish callBack singletonEntryAbulity1_onActive");
        });
    },
    onInactive(){
        console.log("ApplicationMainAbility1_onInactive")
        commonEvent.publish("ApplicationMainAbility1_onInactive",()=>{
            console.log("ApplicationMainAbility1_onInactive publish callBack singletonEntryAbulity1_onInactive");
        });
    }
}



