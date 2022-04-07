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
        console.info("===Application onCreate===>>>>> ABILITY3");
        setTimeout(() => {
            var connId = featureAbility.connectAbility(
                {
                    bundleName: "com.example.sum_statelistener",
                    abilityName: "com.example.sum_statelistener.ServiceAbility",
                },
                {
                    onConnect: (elementName, remoteObject) => {
                        console.log('==elementName=>' + JSON.stringify(elementName))
                        console.log('==remoteObject=>' + JSON.stringify(remoteObject))
                    },
                    onDisconnect: (elementName) => {
                        console.log('==elementName=>' + JSON.stringify(elementName))
                    },
                    onFailed: (code) => {
                        console.log('===code>' + JSON.stringify(code))
                    }
                },
            );
            console.log('ABILITY3 connId==>' + JSON.stringify(connId))
        },500)
        setTimeout(()=>{
            featureAbility.startAbility({
                want: {
                    "bundleName": "com.example.statelistener_fz_2",
                    "abilityName": "com.example.statelistener_fz_2.MainAbility2"
                }
            }, (error, data) => {
                console.log('==error_fz_2:' + JSON.stringify(error) + '===data22==>' + JSON.stringify(data));
            })
        },800)

    },
    onDestroy() {
        console.info("ABILITY3 Application onDestroy");
    }
};
