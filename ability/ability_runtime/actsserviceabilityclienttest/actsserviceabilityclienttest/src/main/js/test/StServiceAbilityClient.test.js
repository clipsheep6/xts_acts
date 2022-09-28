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
import featureAbility from '@ohos.ability.featureAbility'
import commonEvent from '@ohos.commonEvent'

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
export default function ActsStServiceAbilityTest() {
describe('ActsStServiceAbilityTest', function () {
    let bundleName = "com.amsst.stserviceabilityserver";
    let abilityName = "com.amsst.stserviceabilityserver.ServiceAbility";

    var subscriber0100;
    var CommonEventSubscribeInfo0100 = {
        events: ["ACTS_SerivceAbilityServer_onCommand_PageStartService_0100",
        ],
    };
    var subscriber0200;
    var CommonEventSubscribeInfo0200 = {
        events: ["ACTS_SerivceAbilityServer_onCommand_PageStartService_0200",
        ],
    };
    var subscriber0300;
    var CommonEventSubscribeInfo0300 = {
        events: ["ACTS_SerivceAbilityServer_onCommand_PageStartService_0300",
            "ACTS_SerivceAbilityServer_onCommand_PageStartService_0301",
        ],
    };
    var subscriber0400;
    var CommonEventSubscribeInfo0400 = {
        events: ["ACTS_SerivceAbilityServer_onCommand_PageStartService_0400",
            "ACTS_SerivceAbilityServer_onCommand_PageStartService_0401",
        ],
    };
    var subscriber0500;
    var CommonEventSubscribeInfo0500 = {
        events: ["ACTS_SerivceAbilityServer_onConnect_PageConnectService_0500",
            "ACTS_SerivceAbilityServer_onDisConnect",
        ],
    };
    var subscriber0600;
    var CommonEventSubscribeInfo0600 = {
        events: ["ACTS_SerivceAbilityServer_onConnect_PageConnectService_0600",
            "ACTS_SerivceAbilityServer_onDisConnect",
        ],
    };
    var subscriber0900;
    var CommonEventSubscribeInfo0900 = {
        events: ["ACTS_SerivceAbilityServerSecond_onCommand_ServiceStartService_0900",
        ],
    };
    var subscriber1000;
    var CommonEventSubscribeInfo1000 = {
        events: ["ACTS_SerivceAbilityServerSecond_onCommand_ServiceStartService_1000",
        ],
    };
    var subscriber1300;
    var CommonEventSubscribeInfo1300 = {
        events: ["ACTS_SerivceAbilityServerSecond_onConnect_ServiceConnectService_1300",
            "ACTS_SerivceAbilityServerSecond_onDisConnect",
        ],
    };
    var subscriber1400;
    var CommonEventSubscribeInfo1400 = {
        events: ["ACTS_SerivceAbilityServerSecond_onConnect_ServiceConnectService_1400",
            "ACTS_SerivceAbilityServerSecond_onDisConnect",
        ],
    };
    var subscriber1500;
    var CommonEventSubscribeInfo1500 = {
        events: ["ACTS_SerivceAbilityServerSecond_onConnect_ServiceConnectService_1500",
            "ACTS_SerivceAbilityServer_onDisConnect",
        ],
    };

    function unsubscribe(caller, subscriber) {
        commonEvent.unsubscribe(subscriber, (err, data) => {
            console.debug("=ACTS_unsubscribe (err,data)=======>"
                + (caller)
                + (" , json err【") + JSON.stringify(err) + (" 】")
                + ("json data【") + JSON.stringify(data) + (" 】")
                + " ,err=" + err + " ,data=" + data);
        });
    }
    function sleep(ms) {
        return new Promise(resolve => setTimeout(resolve, ms));
    }
    let gSetTimeout = 1000
    beforeAll(async (done) => {
        console.debug('= ACTS_beforeAll ====<begin');
        console.debug('= ACTS_beforeAll ====<end');
        done();
    })
    beforeEach(async (done) => {
        setTimeout(function () {
            done();
        }, gSetTimeout);
    })
    afterEach(async (done) => {
        setTimeout(function () {
            done();
        }, gSetTimeout);
    })
    afterAll((done) => {
        console.debug('= ACTS_afterAll ====<begin');
        setTimeout(function () {
            console.debug('= ACTS_afterAll ====<end');
            featureAbility.terminateSelf();
            done();
        }, gSetTimeout);
    })

    /*
     * @tc.number: ACTS_JsServiceAbility_1500
     * @tc.name: particleability.ConnectAbility : Connects an ability to a Service ability.
     * @tc.desc: Check the return value of the interface (by Promise)
     */
    it('ACTS_JsServiceAbility_1500', 0, async function (done) {
        console.log('ACTS_JsServiceAbility_1500====<begin');
        try {
            var mConnIdJsPromise;
            await commonEvent.createSubscriber(CommonEventSubscribeInfo1500).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_1500 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber1500 = data;
                commonEvent.subscribe(subscriber1500, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_1500 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    if (data.event != "ACTS_SerivceAbilityServer_onDisConnect") {
                        expect("ACTS_SerivceAbilityServerSecond_onConnect_ServiceConnectService_1500").assertEqual(
                            data.event);
                        featureAbility.disconnectAbility(mConnIdJsPromise).then(() => {
                        }).catch(err => {
                            expect(".catch").assertEqual(err);
                            console.debug('ACTS_JsServiceAbility_1500====<end .catch(err)');
                            done();
                        })
                    } else {
                        expect("ACTS_SerivceAbilityServer_onDisConnect").assertEqual(
                            data.event);
                        unsubscribe("ACTS_JsServiceAbility_1500_unsubscribe", subscriber1500);
                        console.log('ACTS_JsServiceAbility_1500====<end')
                        done();
                    }
                });
            })
            function onConnectCallback(element, remote) {
                console.debug('ACTS_JsServiceAbility_1500_onConnectCallback ====> mConnIdJsPromise='
                    + JSON.stringify(mConnIdJsPromise) + " , " + mConnIdJsPromise);
                console.debug('ACTS_JsServiceAbility_1500_onConnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
                console.debug('ACTS_JsServiceAbility_1500_onConnectCallback ====> remote='
                    + JSON.stringify(remote) + " , " + remote);
            }

            function onDisconnectCallback(element) {
                console.debug('ACTS_JsServiceAbility_1500_onDisconnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
                unsubscribe("ACTS_JsServiceAbility_1500_unsubscribe", subscriber1500);
                console.log('ACTS_JsServiceAbility_1500====<end onDisconnectCallback')
                done();
            }

            function onFailedCallback(code) {
                console.debug('ACTS_JsServiceAbility_1500_onFailedCallback ====> code='
                    + JSON.stringify(code) + " , " + code)
            }

            mConnIdJsPromise = featureAbility.connectAbility(
                {
                    bundleName: bundleName,
                    abilityName: abilityName,
                    action: "ServiceConnectService_1500",
                },
                {
                    onConnect: onConnectCallback,
                    onDisconnect: onDisconnectCallback,
                    onFailed: onFailedCallback,
                },
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.log('ACTS_JsServiceAbility_1500====<end err')
            done();
        }
    })
})
}