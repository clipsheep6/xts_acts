/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import connection from '@ohos.net.connection'
import { describe, it, expect, beforeAll, afterAll, beforeEach, afterEach } from 'deccjsunit/index';

describe('NetworkManagerRegisterTest', function () {

    const TEST_RUN_TIME_50 = 50;
    const DELAY = 1000;
    const DELAY_TIME = 500;
    const TIMEOUT = 100;
    const SLEEP_TIME = 500000;
    function sleep_1(timeout) {
        for(var t = Date.now();Date.now() - t <= timeout;);
    }
    /**
     * @tc.number  Telephony_NetworkManager_register_Async_2800
     * @tc.name    Enter bearerTypes and networkCap as empty, set class NetConnection,
     *             call Register () to activate the default network, and see if the callback information is generated
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_register_Async_2800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_register_Async_2800';
        console.log(`${caseName} start: `);
        let netSpecifier = {netCapabilities: {
            linkUpBandwidthKbps: 0,
            linkDownBandwidthKbps: 0,
            bearerTypes: [0],
            networkCap: [0],
        },  bearerPrivateIdentifier: '123'}
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAY);
                done();
                return;
            }
            startTime = new Date().getTime();
            let netConn = connection.createNetConnection(netSpecifier, TIMEOUT);
            netConn.on('netAvailable', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netAvailable : ` + value.netId);
                    done();
                }
            });
            netConn.on('netBlockStatusChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netBlockStatusChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netCapabilitiesChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netCapabilitiesChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netConnectionPropertiesChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netConnectionPropertiesChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netLost', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netLost : ` + value.netId);
                    done();
                }
            });
            netConn.on('netUnavailable', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netUnavailable : ` + value);
                    done();
                }
            });
            netConn.register((err) => {
                if (err) {
                    console.log(`${caseName} register err : ${err}`);
                    expect().assertFail();
                    done();
                }
                done();
            });
            sleep_1(DELAY_TIME)
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME_50);
        done();
    });
    /**
     * @tc.number  Telephony_NetworkManager_register_Async_2900
     * @tc.name    Enter bearerTypes and networkCap as empty, set class NetConnection,
     *             call Register () to activate the default network, and see if the callback information is generated
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_register_Async_2900', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_register_Async_2900';
        console.log(`${caseName} start: `);
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAY);
                done();
                return;
            }
            let netConn = connection.createNetConnection();
            netConn.on('netAvailable', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netAvailable : ` + value.netId);
                    done();
                }
            });
            netConn.on('netBlockStatusChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netBlockStatusChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netCapabilitiesChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netCapabilitiesChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netConnectionPropertiesChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netConnectionPropertiesChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netLost', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netLost : ` + value.netId);
                    done();
                }
            });
            netConn.on('netUnavailable', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netUnavailable : ` + value);
                    done();
                }
            });
            netConn.register((err) => {
                if (err) {
                    console.log(`${caseName} register err : ${err}`);
                    expect().assertFail();
                    done();
                }
                done();
            });
            sleep_1(500)
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME_50);
        done();
    });
    /**
     * @tc.number  Telephony_NetworkManager_unregister_Async_0500
     * @tc.name    Enter bearerTypes and networkCap as empty, set class NetConnection,
     *             call Register () to activate the default network, and see if the callback information is generated
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_unregister_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_unregister_Async_0500';
        console.log(`${caseName} start: `);
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAY);
                done();
                return;
            }
            let netConn = connection.createNetConnection();
            netConn.on('netAvailable', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netAvailable : ` + value.netId);
                    done();
                }
            });
            netConn.on('netBlockStatusChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netBlockStatusChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netCapabilitiesChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netCapabilitiesChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netConnectionPropertiesChange', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netConnectionPropertiesChange handle = : ` + value.handle.netId);
                    done();
                }
            });
            netConn.on('netLost', (error, value) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netLost : ` + value.netId);
                    done();
                }
            });
            netConn.on('netUnavailable', (error) => {
                if (error) {
                    console.log(`${caseName} register fail: ${error}`);
                    expect().assertFail();
                    done();
                } else {
                    console.log(`${caseName} netUnavailable : `);
                    done();
                }
            });
            netConn.register((err) => {
                if (err) {
                    expect().assertTrue();
                    done();
                }
                done();
            });
            sleep_1(500)
            netConn.unregister((err) => {
                if (err) {
                    expect().assertTrue();
                    done();
                }
                done();
            });
            endTime = new Date().getTime();
            totalTime += endTime - startTime - SLEEP_TIME;
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME_50);
        done();
    });
});