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
import commonEvent from '@ohos.commonevent'
import featureAbility from '@ohos.ability.featureability'

export default {
    onCreate() {
        console.info("Application onCreate3");
        commonEvent.publish("help_mainAbility3_onCreate", () => {
            console.log("Help_MainAbility3 Publish CallBack mainAbility3_onCreate");
        })
        setTimeout(()=>{
            featureAbility.terminateSelfWithResult({
                resultCode: 1,
                want: {
                    abilityName: "com.example.jsmyapplicationhelp7.MainAbility3",
                    bundleName: "com.example.jsmyapplicationhelp7"
                }
            }).then((data) => {
                console.log("MainAbility3 EventTest terminateSelf onCreate data: " + JSON.stringify(data));
            }).catch((error) => {
                console.log("MainAbility3 EventTest terminateSelf onCreate error: " + JSON.stringify(error));
            })
        }, 2000)

    },
    onDestroy() {
        console.info("Application onDestroy3");
        commonEvent.publish("help_mainAbility3_onDestroy", () => {
            console.log("Help_MainAbility3 Publish CallBack mainAbility3_onDestroy");
        })
    }
};
