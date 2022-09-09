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
    * @tc.number: ACTS_JsServiceAbility_0100
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0100', 0, async function (done) {
        console.debug('ACTS_JsServiceAbility_0100====<begin');
        try {
            await commonEvent.createSubscriber(CommonEventSubscribeInfo0100).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_0100 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber0100 = data;
                commonEvent.subscribe(subscriber0100, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0100 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    expect("ACTS_SerivceAbilityServer_onCommand_PageStartService_0100").assertEqual(
                        data.event);
                    unsubscribe("ACTS_JsServiceAbility_0100_unsubscribe", subscriber0100);
                    console.debug('ACTS_JsServiceAbility_0100====<end');
                    done();
                });
            })
            featureAbility.startAbility(
                {
                    want:
                    {
                        bundleName: bundleName,
                        abilityName: abilityName,
                        action: "PageStartService_0100",
                    },
                }
            ).then(data => {
                console.debug("=ACTS_JsServiceAbility_0100 .then(data)=======>"
                    + ("abilityStartSetting json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
            }).catch(err => {
                expect(".catch").assertEqual(err);
                console.debug('ACTS_JsServiceAbility_0100====<end .catch(err):'+ JSON.stringify(err));
                done();
            })
        } catch (err) {
            expect("catch").assertEqual(err);
            console.debug('ACTS_JsServiceAbility_0100====<end catch(err)');
            done();
        }
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_0200
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by AsyncCallback)
    */
    it('ACTS_JsServiceAbility_0200', 0, async function (done) {
        console.debug('ACTS_JsServiceAbility_0200====<begin');
        try {
            await commonEvent.createSubscriber(CommonEventSubscribeInfo0200).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_0200 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber0200 = data;
                commonEvent.subscribe(subscriber0200, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0200 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    expect("ACTS_SerivceAbilityServer_onCommand_PageStartService_0200").assertEqual(
                        data.event);
                    unsubscribe("ACTS_JsServiceAbility_0200_unsubscribe", subscriber0200);
                    console.debug('ACTS_JsServiceAbility_0200====<end');
                    done()
                });
            })
            featureAbility.startAbility(
                {
                    want:
                    {
                        bundleName: bundleName,
                        abilityName: abilityName,
                        action: "PageStartService_0200",
                    },
                }, (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0200 startAbility (err,data)=======>"
                        + ("abilityStartSetting json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                }
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.debug('ACTS_JsServiceAbility_0200====<end catch(err)');
            done();
        }
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_0300
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0300', 0, async function (done) {
        console.debug('ACTS_JsServiceAbility_0300====<begin');
        try {
            await commonEvent.createSubscriber(CommonEventSubscribeInfo0300).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_0300 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber0300 = data;
                commonEvent.subscribe(subscriber0300, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0300 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    if (data.event == "ACTS_SerivceAbilityServer_onCommand_PageStartService_0300") {
                        expect("ACTS_SerivceAbilityServer_onCommand_PageStartService_0300").assertEqual(
                            data.event);
                        featureAbility.startAbility(
                            {
                                want:
                                {
                                    bundleName: bundleName,
                                    abilityName: abilityName,
                                    action: "PageStartService_0301",
                                },
                            }
                        ).then(data => {
                            console.debug("=ACTS_JsServiceAbility_0300 .then(data) 2=======>"
                                + ("json data【") + JSON.stringify(data) + (" 】")
                                + " ,data=" + data);
                        }).catch(err => {
                            expect(".catch").assertEqual(err);
                            console.debug('ACTS_JsServiceAbility_0300====<end .catch(err) 2');
                            done();
                        })
                    } else {
                        expect("ACTS_SerivceAbilityServer_onCommand_PageStartService_0301").assertEqual(
                            data.event);
                        unsubscribe("ACTS_JsServiceAbility_0300_unsubscribe", subscriber0300);
                        console.debug('ACTS_JsServiceAbility_0300====<end');
                        done();
                    }
                });
            })
            featureAbility.startAbility(
                {
                    want:
                    {
                        bundleName: bundleName,
                        abilityName: abilityName,
                        action: "PageStartService_0300",
                    },
                }
            ).then(data => {
                console.debug("=ACTS_JsServiceAbility_0300 .then(data) 1=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
            }).catch(err => {
                expect(".catch").assertEqual(err);
                console.debug('ACTS_JsServiceAbility_0300====<end .catch(err) 1');
                done();
            })
        } catch (err) {
            expect("catch").assertEqual(err);
            console.debug('ACTS_JsServiceAbility_0300====<end catch(err)');
            done();
        }
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_0400
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by AsyncCallback)
    */
    it('ACTS_JsServiceAbility_0400', 0, async function (done) {
        console.debug('ACTS_JsServiceAbility_0400====<begin');
        try {
            await commonEvent.createSubscriber(CommonEventSubscribeInfo0400).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_0400 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber0400 = data;
                commonEvent.subscribe(subscriber0400, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0400 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    if (data.event == "ACTS_SerivceAbilityServer_onCommand_PageStartService_0400") {
                        expect("ACTS_SerivceAbilityServer_onCommand_PageStartService_0400").assertEqual(
                            data.event);
                        featureAbility.startAbility(
                            {
                                want:
                                {
                                    bundleName: bundleName,
                                    abilityName: abilityName,
                                    action: "PageStartService_0401",
                                },
                            }, (err, data) => {
                                console.debug("=ACTS_JsServiceAbility_0400 startAbility (err,data) 2=======>"
                                    + ("json err【") + JSON.stringify(err) + (" 】")
                                    + ("json data【") + JSON.stringify(data) + (" 】")
                                    + " ,err=" + err + " ,data=" + data);
                            }
                        )
                    } else {
                        expect("ACTS_SerivceAbilityServer_onCommand_PageStartService_0401").assertEqual(
                            data.event);
                        unsubscribe("ACTS_JsServiceAbility_0400_unsubscribe", subscriber0400);
                        console.debug('ACTS_JsServiceAbility_0400====<end');
                        done();
                    }
                });
            })
            featureAbility.startAbility(
                {
                    want:
                    {
                        bundleName: bundleName,
                        abilityName: abilityName,
                        action: "PageStartService_0400",
                    },
                }, (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0400 startAbility (err,data) 1=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                }
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.debug('ACTS_JsServiceAbility_0400====<end catch(err)');
            done();
        }
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_0500
    * @tc.name: featureAbility.ConnectAbility : Connects an ability to a Service ability.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0500', 0, async function (done) {
        console.log('ACTS_JsServiceAbility_0500====<begin');
        try {
            var mConnIdJsPromise;
            await commonEvent.createSubscriber(CommonEventSubscribeInfo0500).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_0500 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber0500 = data;
                commonEvent.subscribe(subscriber0500, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0500 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    if (data.event != "ACTS_SerivceAbilityServer_onDisConnect") {
                        expect("ACTS_SerivceAbilityServer_onConnect_PageConnectService_0500").assertEqual(
                            data.event);
                        featureAbility.disconnectAbility(mConnIdJsPromise).then(() => {
                        }).catch(err => {
                            expect(".catch").assertEqual(err);
                            console.debug('ACTS_JsServiceAbility_0500====<end .catch(err)');
                            done();
                        })
                    } else {
                        expect("ACTS_SerivceAbilityServer_onDisConnect").assertEqual(data.event);
                        unsubscribe("ACTS_JsServiceAbility_0500_unsubscribe", subscriber0500);
                        console.debug('ACTS_JsServiceAbility_0500====<end');
                        done();
                    }
                });
            })
            function onConnectCallback(element, remote) {
                console.debug('ACTS_JsServiceAbility_0500_onConnectCallback ====> mConnIdJsPromise='
                    + JSON.stringify(mConnIdJsPromise) + " , " + mConnIdJsPromise);
                console.debug('ACTS_JsServiceAbility_0500_onConnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
                console.debug('ACTS_JsServiceAbility_0500_onConnectCallback ====> remote='
                    + JSON.stringify(remote) + " , " + remote);
                console.debug('ACTS_JsServiceAbility_0500_onConnectCallback ====> remote is proxy:'
                    + (remote instanceof rpc.RemoteProxy));
            }

            function onDisconnectCallback(element) {
                console.debug('ACTS_JsServiceAbility_0500_onDisconnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
            }

            function onFailedCallback(code) {
                console.debug('ACTS_JsServiceAbility_0500_onFailedCallback ====> code='
                    + JSON.stringify(code) + " , " + code)
            }

            mConnIdJsPromise = featureAbility.connectAbility(
                {
                    bundleName: bundleName,
                    abilityName: abilityName,
                    action: "PageConnectService_0500",
                },
                {
                    onConnect: onConnectCallback,
                    onDisconnect: onDisconnectCallback,
                    onFailed: onFailedCallback,
                },
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.log('ACTS_JsServiceAbility_0500====<end err')
            done();
        }
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_0600
    * @tc.name: featureAbility.ConnectAbility : Connects an ability to a Service ability.
    * @tc.desc: Check the return value of the interface (by AsyncCallback)
    */
    it('ACTS_JsServiceAbility_0600', 0, async function (done) {
        console.log('ACTS_JsServiceAbility_0600====<begin');
        try {
            var currentAlertTimeout;
            var mConnIdJsAsyncCallback;
            await commonEvent.createSubscriber(CommonEventSubscribeInfo0600).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_0600 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber0600 = data;
                commonEvent.subscribe(subscriber0600, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0600 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    if (data.event != "ACTS_SerivceAbilityServer_onDisConnect") {
                        expect("ACTS_SerivceAbilityServer_onConnect_PageConnectService_0600").assertEqual(
                            data.event);
                        featureAbility.disconnectAbility(mConnIdJsAsyncCallback, (err) => {
                            console.debug("=ACTS_JsServiceAbility_0600 disconnectAbility err====>"
                                + ("json err=") + JSON.stringify(err));
                        })
                        currentAlertTimeout = setTimeout(() => {
                            console.log('ACTS_JsServiceAbility_0600====<end steTimeout')
                            unsubscribe("ACTS_JsServiceAbility_0600_unsubscribe", subscriber0600);
                            done();
                        }, gSetTimeout);
                    } else {
                        clearTimeout(currentAlertTimeout);
                        expect("ACTS_SerivceAbilityServer_onDisConnect").assertEqual(
                            data.event);
                        unsubscribe("ACTS_JsServiceAbility_0600_unsubscribe", subscriber0600);
                        console.log('ACTS_JsServiceAbility_0600====<end')
                        done();
                    }
                });
            })
            function onConnectCallback(element, remote) {
                console.debug('ACTS_JsServiceAbility_0600_onConnectCallback ====> mConnIdJsAsyncCallback='
                    + JSON.stringify(mConnIdJsAsyncCallback) + " , " + mConnIdJsAsyncCallback);
                console.debug('ACTS_JsServiceAbility_0600_onConnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
                console.debug('ACTS_JsServiceAbility_0600_onConnectCallback ====> remote='
                    + JSON.stringify(remote) + " , " + remote);
                console.debug('ACTS_JsServiceAbility_0600_onConnectCallback ====> remote is proxy:'
                    + (remote instanceof rpc.RemoteProxy));
            }

            function onDisconnectCallback(element) {
                console.debug('ACTS_JsServiceAbility_0600_onDisconnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
            }

            function onFailedCallback(code) {
                console.debug('ACTS_JsServiceAbility_0600_onFailedCallback ====> code='
                    + JSON.stringify(code) + " , " + code)
                    expect(code==featureAbility.ErrorCode.ABILITY_NOT_FOUND 
                        || (code!=featureAbility.ErrorCode.NO_ERROR 
                            || code!=featureAbility.ErrorCode.INVALID_PARAMETER
                            || code!=featureAbility.ErrorCode.PERMISSION_DENY
                    )).assertTrue();
            }

            mConnIdJsAsyncCallback = featureAbility.connectAbility(
                {
                    bundleName: bundleName,
                    abilityName: abilityName,
                    action: "PageConnectService_0600",
                },
                {
                    onConnect: onConnectCallback,
                    onDisconnect: onDisconnectCallback,
                    onFailed: onFailedCallback,
                },
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.log('ACTS_JsServiceAbility_0600====<end err')
            done();
        }
    })

    /*
     * @tc.number: ACTS_JsServiceAbility_0900
     * @tc.name: particleability.startAbility : Use page to test startAbiltiy service.
     * @tc.desc: Check the return value of the interface (by Promise)
     */
    it('ACTS_JsServiceAbility_0900', 0, async function (done) {
        console.debug('ACTS_JsServiceAbility_0900====<begin');
        try {
            await commonEvent.createSubscriber(CommonEventSubscribeInfo0900).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_0900 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber0900 = data;
                commonEvent.subscribe(subscriber0900, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_0900 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    expect("ACTS_SerivceAbilityServerSecond_onCommand_ServiceStartService_0900").assertEqual(
                        data.event);
                        await sleep(1000)
                    unsubscribe("ACTS_JsServiceAbility_0900_unsubscribe", subscriber0900);
                    console.debug('ACTS_JsServiceAbility_0900====<end');
                    done();
                });
            })
            await sleep(500)
            featureAbility.startAbility(
                {
                    want:
                    {
                        bundleName: bundleName,
                        abilityName: abilityName,
                        action: "ServiceStartService_0900",
                    },
                }
            ).then(data => {
                console.debug("=ACTS_JsServiceAbility_0900 .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
            }).catch(err => {
                expect(".catch").assertEqual(err);
                console.debug('ACTS_JsServiceAbility_0900====<end .catch(err)');
                done();
            })
        } catch (err) {
            expect("catch").assertEqual(err);
            console.debug('ACTS_JsServiceAbility_0900====<end catch(err)');
            done();
        }
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_1000
    * @tc.name: particleability.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by AsyncCallback)
    */
    it('ACTS_JsServiceAbility_1000', 0, async function (done) {
        console.debug('ACTS_JsServiceAbility_1000====<begin');
        try {
            await commonEvent.createSubscriber(CommonEventSubscribeInfo1000).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_1000 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber1000 = data;
                commonEvent.subscribe(subscriber1000, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_1000 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    expect("ACTS_SerivceAbilityServerSecond_onCommand_ServiceStartService_1000").assertEqual(
                        data.event);
                        await sleep(1000)
                    unsubscribe("ACTS_JsServiceAbility_1000_unsubscribe", subscriber1000);
                    console.debug('ACTS_JsServiceAbility_1000====<end');
                    done()
                });
            })
            await sleep(500)
            featureAbility.startAbility(
                {
                    want:
                    {
                        bundleName: bundleName,
                        abilityName: abilityName,
                        action: "ServiceStartService_1000",
                    },
                }, (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_1000 startAbility (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                }
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.debug('ACTS_JsServiceAbility_1000====<end catch(err)');
            done();
        }
    })

    /*
     * @tc.number: ACTS_JsServiceAbility_1300
     * @tc.name: particleability.ConnectAbility : Connects an ability to a Service ability.
     * @tc.desc: Check the return value of the interface (by Promise)
     */
    it('ACTS_JsServiceAbility_1300', 0, async function (done) {
        console.log('ACTS_JsServiceAbility_1300====<begin');
        try {
            var mConnIdJsPromise;
            await commonEvent.createSubscriber(CommonEventSubscribeInfo1300).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_1300 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber1300 = data;
                commonEvent.subscribe(subscriber1300, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_1300 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    if (data.event != "ACTS_SerivceAbilityServerSecond_onDisConnect") {
                        expect("ACTS_SerivceAbilityServerSecond_onConnect_ServiceConnectService_1300"
                        ).assertEqual(data.event);
                        featureAbility.disconnectAbility(mConnIdJsPromise).then((err) => {
                            console.debug("=ACTS_JsServiceAbility_1300 disconnectAbility err====>"
                                + ("json err=") + JSON.stringify(err));
                        })
                    } else {
                        expect("ACTS_SerivceAbilityServerSecond_onDisConnect").assertEqual(
                            data.event);
                        unsubscribe("ACTS_JsServiceAbility_1300_unsubscribe", subscriber1300);
                        console.log('ACTS_JsServiceAbility_1300====<end')
                        done();
                    }
                });
            })
            function onConnectCallback(element, remote) {
                console.debug('ACTS_JsServiceAbility_1300_onConnectCallback ====> mConnIdJsPromise='
                    + JSON.stringify(mConnIdJsPromise) + " , " + mConnIdJsPromise);
                console.debug('ACTS_JsServiceAbility_1300_onConnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
                console.debug('ACTS_JsServiceAbility_1300_onConnectCallback ====> remote='
                    + JSON.stringify(remote) + " , " + remote);
                console.debug('ACTS_JsServiceAbility_1300_onConnectCallback ====> remote is proxy:'
                    + (remote instanceof rpc.RemoteProxy));
            }

            function onDisconnectCallback(element) {
                console.debug('ACTS_JsServiceAbility_1300_onDisconnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
                unsubscribe("ACTS_JsServiceAbility_1300_unsubscribe", subscriber1300);
                console.log('ACTS_JsServiceAbility_1300====<end onDisconnectCallback')
                done();
            }

            function onFailedCallback(code) {
                console.debug('ACTS_JsServiceAbility_1300_onFailedCallback ====> code='
                    + JSON.stringify(code) + " , " + code)
            }

            mConnIdJsPromise = featureAbility.connectAbility(
                {
                    bundleName: bundleName,
                    abilityName: abilityName,
                    action: "ServiceConnectService_1300",
                },
                {
                    onConnect: onConnectCallback,
                    onDisconnect: onDisconnectCallback,
                    onFailed: onFailedCallback,
                },
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.log('ACTS_JsServiceAbility_1300====<end err')
            done();
        }
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_1400
    * @tc.name: particleability.ConnectAbility : Connects an ability to a Service ability.
    * @tc.desc: Check the return value of the interface (by AsyncCallback)
    */
    it('ACTS_JsServiceAbility_1400', 0, async function (done) {
        console.log('ACTS_JsServiceAbility_1400====<begin');
        try {
            var currentAlertTimeout;
            var mConnIdJsAsyncCallback;
            await commonEvent.createSubscriber(CommonEventSubscribeInfo1400).then(async (data) => {
                console.debug("=ACTS_JsServiceAbility_1400 createSubscriber .then(data)=======>"
                    + ("json data【") + JSON.stringify(data) + (" 】")
                    + " ,data=" + data);
                subscriber1400 = data;
                commonEvent.subscribe(subscriber1400, async (err, data) => {
                    console.debug("=ACTS_JsServiceAbility_1400 subscribe (err,data)=======>"
                        + ("json err【") + JSON.stringify(err) + (" 】")
                        + ("json data【") + JSON.stringify(data) + (" 】")
                        + " ,err=" + err + " ,data=" + data);
                    if (data.event != "ACTS_SerivceAbilityServerSecond_onDisConnect") {
                        expect("ACTS_SerivceAbilityServerSecond_onConnect_ServiceConnectService_1400"
                        ).assertEqual(data.event);
                        featureAbility.disconnectAbility(mConnIdJsAsyncCallback, (err) => {
                            console.debug("=ACTS_JsServiceAbility_1400 disconnectAbility err====>"
                                + ("json err=") + JSON.stringify(err));
                        })
                        currentAlertTimeout = setTimeout(() => {
                            console.log('ACTS_JsServiceAbility_1400====<end steTimeout')
                            unsubscribe("ACTS_JsServiceAbility_1400_unsubscribe", subscriber1400);
                            done();
                        }, gSetTimeout);
                    } else {
                        clearTimeout(currentAlertTimeout);
                        expect("ACTS_SerivceAbilityServerSecond_onDisConnect").assertEqual(
                            data.event);
                        unsubscribe("ACTS_JsServiceAbility_1400_unsubscribe", subscriber1400);
                        console.log('ACTS_JsServiceAbility_1400====<end')
                        done();
                    }
                });
            })
            function onConnectCallback(element, remote) {
                console.debug('ACTS_JsServiceAbility_1400_onConnectCallback ====> mConnIdJsAsyncCallback='
                    + JSON.stringify(mConnIdJsAsyncCallback) + " , " + mConnIdJsAsyncCallback);
                console.debug('ACTS_JsServiceAbility_1400_onConnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
                console.debug('ACTS_JsServiceAbility_1400_onConnectCallback ====> remote='
                    + JSON.stringify(remote) + " , " + remote);
                console.debug('ACTS_JsServiceAbility_1400_onConnectCallback ====> remote is proxy:'
                    + (remote instanceof rpc.RemoteProxy));
            }

            function onDisconnectCallback(element) {
                console.debug('ACTS_JsServiceAbility_1400_onDisconnectCallback ====> element='
                    + JSON.stringify(element) + " , " + element);
            }

            function onFailedCallback(code) {
                console.debug('ACTS_JsServiceAbility_1400_onFailedCallback ====> code='
                    + JSON.stringify(code) + " , " + code)
            }

            mConnIdJsAsyncCallback = featureAbility.connectAbility(
                {
                    bundleName: bundleName,
                    abilityName: abilityName,
                    action: "ServiceConnectService_1400",
                },
                {
                    onConnect: onConnectCallback,
                    onDisconnect: onDisconnectCallback,
                    onFailed: onFailedCallback,
                },
            )
        } catch (err) {
            expect("catch").assertEqual(err);
            console.log('ACTS_JsServiceAbility_1400====<end err')
            done();
        }
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