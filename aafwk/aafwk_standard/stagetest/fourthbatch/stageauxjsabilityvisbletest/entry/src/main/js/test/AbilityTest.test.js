/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import ability from '@ohos.application.Ability'
import featureAbility from '@ohos.ability.featureAbility'

describe('HiAppEventApiTest', function () {

    var mRemote;

    function onConnectCallback(element, remote) {
        console.log('StartMultiAppTester ConnectAbility onConnect element.deviceId : ' + element.deviceId)
        console.log('StartMultiAppTester ConnectAbility onConnect element.bundleName : ' + element.bundleName)
        console.log('StartMultiAppTester ConnectAbility onConnect element.abilityName : ' + element.abilityName)
        console.log('StartMultiAppTester ConnectAbility onConnect element.uri : ' + element.uri)
        console.log('StartMultiAppTester ConnectAbility onConnect element.shortName : ' + element.shortName)
        console.log('StartMultiAppTester ConnectAbility onConnect remote : ' + remote);
        mRemote = remote;
    }

    function onDisconnectCallback(element) {
        commonEvent.publish("DISCONNECT", () => {
            console.log('disconnect finish1')
        });
        console.log('StartMultiAppTester ConnectAbility onDisconnect element.deviceId : ' + element.deviceId)
        console.log('StartMultiAppTester ConnectAbility onDisconnect element.bundleName : ' + element.bundleName)
        console.log('StartMultiAppTester ConnectAbility onDisconnect element.abilityName : ' + element.abilityName)
        console.log('StartMultiAppTester ConnectAbility onDisconnect element.uri : ' + element.uri)
        console.log('StartMultiAppTester ConnectAbility onDisconnect element.shortName : ' + element.shortName)
    }

    function onFailedCallback(code) {
        console.log('StartMultiAppTester ConnectAbility onFailed errCode : ' + code)
    }

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0100
     * @tc.name    Validate binding and unbind services
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0100', 0, async function (done) {
        console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0100 start -------------");
        let connectCode = featureAbility.connectAbility({
            bundleName: "com.example.servicejsability",
            abilityName: "com.example.servicejsability.ServiceAbility" },
            {
                onConnect: onConnectCallback,
                onDisconnect: onDisconnectCallback,
                onFailed: onFailedCallback,
            },)
        setTimeout(function () {
            featureAbility.disconnectAbility(connectCode, (err) => {
                if (err) {
                    console.log('SUB_AA_OpenHarmoy_ArkEngine_0100 disconnectAbility err : ' + JSON.stringify(err))
                }
            })
        }, 2000);
        var Subscriber = "";
        var listKey = ["", ""];
        var subscriberInfoMyServiceExtension = {
            events: ["servicejsability_ServiceAbility_onStart",
            "servicejsability_ServiceAbility_onConnect",
            "servicejsability_ServiceAbility_onDisconnect",
            "servicejsability_ServiceAbility_onStop"]
        }

        function SubscribeCallBack(err, data) {
            console.log("SUB_AA_OpenHarmoy_ArkEngine_0100 SubscribeCallBack data:" + JSON.stringify(data));
            if (data.event == "servicejsability_ServiceAbility_onStart") {
                listKey[0] = "onStart";
                expect(listKey[0]).assertEqual("onStart");
            } else if (data.event == "servicejsability_ServiceAbility_onConnect") {
                listKey[1] = "onConnect";
                expect(listKey[1]).assertEqual("onConnect");
            } else if (data.event == "servicejsability_ServiceAbility_onDisconnect") {
                listKey[2] = "onDisconnect";
                expect(listKey[2]).assertEqual("onDisconnect");
            } else if (data.event == "servicejsability_ServiceAbility_onStop") {
                listKey[3] = "onStop";
                expect(listKey[3]).assertEqual("onStop");
                done();
            }
        }

        commonEvent.createSubscriber(subscriberInfoMyServiceExtension).then(async (data) => {
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })
        console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0100 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0200
     * @tc.name    Verify the data server callback insert
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0200', 0, async function (done) {
        console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0200 start -------------");
        var urivar = "dataability:///com.example.servicejsability.DataAbility"
        let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
            urivar
        );
        let valuesBuckets = { "name": "gaolu" }
        try {
            dataAbilityHelper.insert(urivar, valuesBuckets, (err, data) => {
                if (err) {
                    console.log('SUB_AA_OpenHarmoy_ArkEngine_0200 insert error : ' + JSON.stringify(err))
                    expect().assertFail();
                } else {
                    console.log('SUB_AA_OpenHarmoy_ArkEngine_0200 insert success : ' + JSON.stringify(err))
                    if (data >= 0) {
                        expect(true).assertTrue();
                    } else {
                        expect().assertFail();
                    }
                }
                done();
            });
        } catch (exception) {
            console.log('SUB_AA_OpenHarmoy_ArkEngine_0200 insert exception : ' + JSON.stringify(exception))
            expect().assertFail();
            done()
        }
        console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0200 end -------------");
    })


})
