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
import featureAbility from '@ohos.ability.featureAbility';
export default {
    onCreate() {
        console.info("---fz ability Application onCreate");
        setTimeout(() => {
            featureAbility.startAbility({
                want: {
                    "bundleName": "com.example.statelistener_fz_2",
                    "abilityName": "com.example.statelistener_fz_2.MainAbility"
                }
            }, (error, data) => {
                console.log('fz_2==error2:' + JSON.stringify(error) + ',' + 'fz_z data2==>' + JSON.stringify(data))

            })
        },500)

    },
    onDestroy() {
        console.info("---fz ability Application onDestroy");
    }
};
