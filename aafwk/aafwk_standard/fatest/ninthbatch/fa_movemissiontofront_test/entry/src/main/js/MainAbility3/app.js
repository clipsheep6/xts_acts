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
import missionManager  from '@ohos.application.missionManager';

export default {
    onCreate() {
        commonEvent.publish("ApplicationMainAbility3_onCreate",()=>{
            console.log(" ApplicationMainAbility3_onCreate");
        });
        console.info("ApplicationMainAbility3 onCreate");
        var mainAbility1missinds = []
        missionManager.getMissionInfos("", 100, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MoveMissionToFront_2900'+ JSON.stringify(err) + 
            " data: " + JSON.stringify(data));
            for (var i = 0;i < data.length; i++) {
                if(data[i].want["abilityName"] == "com.example.abilitydisable.MainAbility"){
                    console.log(data[i].want["abilityName"]);
                    mainAbility1missinds.push(data[i]["missionId"])
                }
            }
            console.log("mainAbility1missinds:"+mainAbility1missinds[0] + typeof mainAbility1missinds[0]);
            console.log('SUB_AA_OpenHarmony_MoveMissionToFront_2900 moveMissionToFront dataCode');
            missionManager.moveMissionToFront(parseInt(mainAbility1missinds[0]),
                { "windowMode":1 }).then((data)=>{
                console.log('SUB_AA_OpenHarmony_MoveMissionToFront_2900'+ " data:"
                + JSON.stringify(data));
            }).catch((err)=>{
                console.log('SUB_AA_OpenHarmony_MoveMissionToFront_2900'+ " err:"
                + JSON.stringify(err));
            });
        });
    },
    onDestroy(){
        console.log("singletonEntryAbulity_onDestroy");
        commonEvent.publish("ApplicationMainAbility3_onDestroy",()=>{
            console.log("singletonEntryAbulity3onDestroy");
        });
    },
};

