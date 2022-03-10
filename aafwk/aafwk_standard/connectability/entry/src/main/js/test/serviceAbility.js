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
import rpc from './../@ohos.rpc';

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'

var mConnIdJsPromise
var bundleName = "com.amsst.stserviceabilityserversecond"
var abilityName = "com.amsst.stserviceabilityserversecond.ServiceAbility"

describe('ActsStServiceAbilityTest', function () {
    
    /*
    * @tc.number: ACTS_JsServiceAbility_0100
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0100', 0, async function (done) {
        function onConnectCallback(element, remote) {
            console.debug('ACTS_JsServiceAbility_0100_onConnectCallback ====> element='
            + JSON.stringify(element) + " , " + element);
            console.debug('ACTS_JsServiceAbility_0100_onConnectCallback ====> remote='
            + JSON.stringify(remote) + " , " + remote);
            console.debug('ACTS_JsServiceAbility_0100_onConnectCallback ====> remote is proxy:'
            + (remote instanceof rpc.RemoteProxy));
        }

        function onDisconnectCallback(element) {
            console.debug('ACTS_JsServiceAbility_0100_onDisconnectCallback ====> element='
            + JSON.stringify(element) + " , " + element);
        }

        function onFailedCallback(code) {
            console.debug('ACTS_JsServiceAbility_0100_onFailedCallback ====> code='
            + JSON.stringify(code) + " , " + code)
            expect(code).assertEqual(0)
        }
        console.debug('ACTS_JsServiceAbility_0100====<begin');
              featureAbility.connectAbility(
                {
                    bundleName: bundleName,
                    abilityName: abilityName,
                },
                {
                    onConnect: onConnectCallback,
                    onDisconnect: onDisconnectCallback,
                    onFailed: onFailedCallback,
                },
            )
            console.debug('ACTS_JsServiceAbility_0100====<end');
            done();
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_0100
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0200', 0, async function (done) {
        function onConnectCallback(element, remote) {
            console.debug('ACTS_JsServiceAbility_0200_onConnectCallback ====> element='
            + JSON.stringify(element) + " , " + element);
            console.debug('ACTS_JsServiceAbility_0200_onConnectCallback ====> remote='
            + JSON.stringify(remote) + " , " + remote);
            console.debug('ACTS_JsServiceAbility_0200_onConnectCallback ====> remote is proxy:'
            + (remote instanceof rpc.RemoteProxy));
        }

        function onDisconnectCallback(element) {
            console.debug('ACTS_JsServiceAbility_0200_onDisconnectCallback ====> element='
            + JSON.stringify(element) + " , " + element);
        }

        function onFailedCallback(code) {
            console.debug('ACTS_JsServiceAbility_0200_onFailedCallback ====> code='
            + JSON.stringify(code) + " , " + code)
            expect(code).assertEqual(0)
        }
        console.debug('ACTS_JsServiceAbility_0200====<begin');
        featureAbility.connectAbility(
        {
          bundleName: "wrongBundleName",
          abilityName: "wrongAbilityName",
        },
        {
          onConnect: onConnectCallback,
          onDisconnect: onDisconnectCallback,
          onFailed: onFailedCallback,
        },
    )
         console.debug('ACTS_JsServiceAbility_0200====<end');
        done();
    })
    
    /*
    * @tc.number: ACTS_JsServiceAbility_0300
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0300', 0, async function (done) {
        function onConnectCallback(element, remote) {
            console.debug('ACTS_JsServiceAbility_0300_onConnectCallback ====> element='
            + JSON.stringify(element) + " , " + element);
            console.debug('ACTS_JsServiceAbility_0300_onConnectCallback ====> remote='
            + JSON.stringify(remote) + " , " + remote);
            console.debug('ACTS_JsServiceAbility_0300_onConnectCallback ====> remote is proxy:'
            + (remote instanceof rpc.RemoteProxy));
        }
        function onFailedCallback(code) {
            console.debug('ACTS_JsServiceAbility_0300_onFailedCallback ====> code='
            + JSON.stringify(code) + " , " + code)
            expect(code).assertEqual(0)
        }
        console.debug('ACTS_JsServiceAbility_0300====<begin');
        featureAbility.connectAbility(
            {
                bundleName: bundleName,
                abilityName: abilityName,
            },
            {
                onConnect: onConnectCallback,
            //                onDisconnect: onDisconnectCallback,
                onFailed: onFailedCallback,
            },
        )
        console.debug('ACTS_JsServiceAbility_0300====<end');
        done();
    })
    
    /*
    * @tc.number: ACTS_JsServiceAbility_0400
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0400', 0, async function (done) {
        function onConnectCallback(element, remote) {
            console.debug('ACTS_JsServiceAbility_0400_onConnectCallback ====> element='
            + JSON.stringify(element) + " , " + element);
            console.debug('ACTS_JsServiceAbility_0400_onConnectCallback ====> remote='
            + JSON.stringify(remote) + " , " + remote);
            console.debug('ACTS_JsServiceAbility_0400_onConnectCallback ====> remote is proxy:'
            + (remote instanceof rpc.RemoteProxy));
        }
        function onDisconnectCallback(element) {
            console.debug('ACTS_JsServiceAbility_0400_onDisconnectCallback ====> element='
            + JSON.stringify(element) + " , " + element);
        }
        function onFailedCallback(code) {
            console.debug('ACTS_JsServiceAbility_0400_onFailedCallback ====> code='
            + JSON.stringify(code) + " , " + code)
            expect(code).assertEqual(0)
        }
        console.debug('ACTS_JsServiceAbility_0400====<begin');
        featureAbility.connectAbility({},
            {
                onConnect: onConnectCallback,
                onDisconnect: onDisconnectCallback,
                onFailed: onFailedCallback,
            },
        )
        console.debug('ACTS_JsServiceAbility_0400====<end');
        done();
    })

    /*
    * @tc.number: ACTS_JsServiceAbility_0500
    * @tc.name: featureAbility.startAbility : Use page to test startAbiltiy service.
    * @tc.desc: Check the return value of the interface (by Promise)
    */
    it('ACTS_JsServiceAbility_0500', 0, async function (done) {
        function onConnectCallback(element, remote) {
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
            expect(code).assertEqual(0)
        }
        console.debug('ACTS_JsServiceAbility_0500====<begin');
        mConnIdJsPromise = featureAbility.connectAbility(
            {
                bundleName: bundleName,
                abilityName: abilityName,
            },
            {
                onConnect: onConnectCallback,
                onDisconnect: onDisconnectCallback,
                onFailed: onFailedCallback,
            },
        )
        featureAbility.disconnectAbility(mConnIdJsPromise,(err) => {
            console.debug('ACTS_JsServiceAbility_0500====<end err'+err.code);
            expect(err.code).assertEqual(0)
            done();
        })
    })
})
