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

export default {
    onCreate() {
        commonEvent.publish("Application2MainAbility2_onCreate",()=>{
            console.log("Application2MainAbility2_onCreate publish callBack ApplicationMainAbility1_onCreate");
        });

        console.info("Application onCreate");
    },
    onDestroy() {
        console.info("Application onDestroy");
        commonEvent.publish("Application2MainAbility2_onDestroy",()=>{
            console.log("Application2MainAbility2_onDestroy publish callBack ApplicationMainAbility1_onDestroy");
        });
    },
};

