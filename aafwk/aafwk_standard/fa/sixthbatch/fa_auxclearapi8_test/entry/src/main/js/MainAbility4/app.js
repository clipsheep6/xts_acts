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

import ability_featureAbility from '@ohos.ability.featureAbility';
import commonEvent from '@ohos.commonEvent';

export default {
    onCreate() {
        commonEvent.publish("Application2MainAbility4_onCreate",()=>{
            console.log("Application2MainAbility4_onCreate publish callBack ApplicationMainAbility2_onCreate");
        });
        console.info("Application2MainAbility4 onCreate");
            setTimeout(()=>{
                console.info("ApplicationMainAbility2 terminateSelf");
                ability_featureAbility.terminateSelf().then((data)=>{
                    console.log("ApplicationMainAbility2 terminateSelf data：" + JSON.stringify(data) )
                }).catch((error)=>{
                    console.log("ApplicationMainAbility2 terminateSelf error：" + JSON.stringify(error) )
                })
            },1000);
    },
    onDestroy() {
        console.log("singletonEntryAbulity_onDestroy222");
        commonEvent.publish("Application2MainAbility4_onDestroy",()=>{
            console.log("singletonEntryAbulity4_onDestroy publish callBack singletonEntryAbulity2onDestroy");
        });
    },
};

