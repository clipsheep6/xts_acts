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

import ethernet from '@ohos.netmanager.ethernet';
import { describe, it, expect } from 'deccjsunit/index';

describe('NetworkManagerInterfaceReliabilityTest', function () {
    const TEST_RUN_TIME = 1000;
    const IFACE_0 ='eth0';
    const mockHostName = 'www.baidu.com';

    let mockData = {
        ipAddr:"192.168.1.123", 
        routeAddr:"192.168.1.1",
        gateAddr:"192.168.1.1",
        maskAddr:"255.255.255.0",
        dnsAddr0:"1.1.1.1",
        dnsAddr1:"2.2.2.2"
    }

    /**
     * @tc.number  Telephony_NetworkManager_setInterfaceConfiguration_Async_0300
     * @tc.name    Test setInterfaceConfiguration() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_setInterfaceConfiguration_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setInterfaceConfiguration_Async_0300';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            ethernet.setInterfaceConfiguration(IFACE_0,0,mockData,(err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(0);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setInterfaceConfiguration_Promise_0300
     * @tc.name    Test setInterfaceConfiguration() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkManager_setInterfaceConfiguration_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_setInterfaceConfiguration_Promise_0300';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.setInterfaceConfiguration(IFACE_0,0,mockData);
                expect(data).assertEqual(0);
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getInterfaceConfiguration_Async_0300
     * @tc.name    Test getInterfaceConfiguration() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkManager_getInterfaceConfiguration_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getInterfaceConfiguration_Async_0300';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            ethernet.getInterfaceConfiguration(IFACE_0,(err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(0);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getInterfaceConfiguration_Promise_0300
     * @tc.name    Test getInterfaceConfiguration() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkManager_getInterfaceConfiguration_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getInterfaceConfiguration_Promise_0300';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.getInterfaceConfiguration(IFACE_0);
                expect(data).assertEqual(0);
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getActivateInterfaces_Async_0200
     * @tc.name    Test getActivateInterfaces() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkManager_getActivateInterfaces_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getActivateInterfaces_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            ethernet.getActivateInterfaces((err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(0);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getActivateInterfaces_Promise_0200
     * @tc.name    Test getActivateInterfaces() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkManager_getActivateInterfaces_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getActivateInterfaces_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.getActivateInterfaces(IFACE_0);
                expect(data).assertEqual(0);
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAddressesByName_Async_0300
     * @tc.name    Test getAddressesByName() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkManager_getAddressesByName_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAddressesByName_Async_0300';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            ethernet.getAddressesByName(mockHostName,(err, data) => {
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(0);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAddressesByName_Promise_0300
     * @tc.name    Test getAddressesByName() The query function is executed TEST_RUN_TIME times,
     *             and the cellInformation can be called back successfully every time
     * @tc.desc    Reliability test
     */
     it('Telephony_NetworkManager_getAddressesByName_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAddressesByName_Promise_0300';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.getAddressesByName(mockHostName);
                expect(data).assertEqual(0);
            } catch (err) {
                console.log(`${caseName} fail err: ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })
})
