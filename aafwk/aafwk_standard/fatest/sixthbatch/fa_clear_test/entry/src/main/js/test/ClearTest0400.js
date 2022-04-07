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
// @ts-nocheck
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import abilityFeatureAbility from '@ohos.ability.featureAbility';
import commonEvent from '@ohos.commonEvent';

describe('clearTests0400', function () {
    let lists = new Array()
    var ability2LifeEvents = {
        events:["Application2MainAbility3_onShow",
        "Application2MainAbility3_onHide",
        "Application2MainAbility3_onActive",
        "Application2MainAbility3_onInactive",
        "Application2MainAbility3_onDestroy",
        "ApplicationMainAbility1_onShow",
        "ApplicationMainAbility1_onHide",
        "ApplicationMainAbility1_onActive",
        "ApplicationMainAbility1_onInactive"
        ]
    };

    function subscriberCallBackMainAbility2Destory(err,data){
        console.log("SUB_AA_OpenHarmony_Clear_0400 Subscribe2 CallBack data:" + JSON.stringify(data));
        lists.push(data["event"]);
        console.log("SUB_AA_OpenHarmony_Clear_0400 subscriberCallBackMainAbility2Destory lists:"+lists);
    };

    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0400
     * @tc.name    Start ability1-2. For different applications, back closes ability2
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Clear_0400', 0, async function (done) {
        var subscriber2 = "";
        console.log("SUB_AA_OpenHarmony_Clear_0400 --- start")
        setTimeout(()=>{
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.otherabilitydisable",
                abilityName: "com.example.otherabilitydisable.MainAbility3"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Clear_0400 - startMainAbility1: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
                expect(err.code == 0).assertTrue();
            });
        },100)

        commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
            console.log("SUB_AA_OpenHarmony_Clear_0400 Create subscriber2=======>：" + JSON.stringify(data));
            subscriber2 = data;
            console.log("SUB_AA_OpenHarmony_Clear_0400 data2 is:" + JSON.stringify(subscriber2));
            await commonEvent.subscribe(subscriber2, subscriberCallBackMainAbility2Destory)
        })
        console.log("SUB_AA_OpenHarmony_Clear_0400 --- end")
        expect(true).assertTrue();
        done()
    });
})