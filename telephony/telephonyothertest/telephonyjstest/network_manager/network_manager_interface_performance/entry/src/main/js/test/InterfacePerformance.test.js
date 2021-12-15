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

describe('NetworkManagerInterfacePerformanceTest', function () {
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 500
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
     * @tc.number  Telephony_NetworkManager_setInterfaceConfiguration_Async_0400
     * @tc.name    Test setInterfaceConfiguration() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setInterfaceConfiguration_Async_0400', 0, async function (done) {
        let caseName ='Telephony_NetworkManager_setInterfaceConfiguration_Async_0400';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            ethernet.setInterfaceConfiguration(IFACE_0,0,mockData,(err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }else{
                    console.log(`${caseName} data: ${JSON.stringify(data)}`);
                }
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_setInterfaceConfiguration_Promise_0400
     * @tc.name    Test setInterfaceConfiguration() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_setInterfaceConfiguration_Promise_0400', 0, async function (done) {
        let caseName ='Telephony_NetworkManager_setInterfaceConfiguration_Promise_0400';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.setInterfaceConfiguration(IFACE_0,0,mockData);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getInterfaceConfiguration_Async_0400
     * @tc.name    Test getInterfaceConfiguration() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getInterfaceConfiguration_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getInterfaceConfiguration_Async_0400';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            ethernet.getInterfaceConfiguration(IFACE_0,(err,data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }else{
                    console.log(`${caseName} data: ${JSON.stringify(data)}`);
                }
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getInterfaceConfiguration_Promise_0400
     * @tc.name    Test getInterfaceConfiguration() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getInterfaceConfiguration_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getInterfaceConfiguration_Promise_0400';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.getInterfaceConfiguration(IFACE_0);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getActivateInterfaces_Async_0300
     * @tc.name    Test getInterfaceConfiguration() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
     it('Telephony_NetworkManager_getActivateInterfaces_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getActivateInterfaces_Async_0300';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            ethernet.getActivateInterfaces((err,data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }else{
                    console.log(`${caseName} data: ${JSON.stringify(data)}`);
                }
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getActivateInterfaces_Promise_0300
     * @tc.name    Test getInterfaceConfiguration() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getActivateInterfaces_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getActivateInterfaces_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.getActivateInterfaces();
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAddressesByName_Async_0400
     * @tc.name    Test getAddressesByName() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
     it('Telephony_NetworkManager_getAddressesByName_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAddressesByName_Async_0400';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            ethernet.getAddressesByName(mockHostName,(err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail err: ${err}`);
                }else{
                    console.log(`${caseName} data: ${JSON.stringify(data)}`);
                }
                recursive(n - 1);
            })

        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAddressesByName_Promise_0400
     * @tc.name    Test getAddressesByName() is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT ms
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getAddressesByName_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAddressesByName_Promise_0400';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await ethernet.getAddressesByName(mockHostName);
                console.log(`${caseName} data: ${JSON.stringify(data)}`);
            } catch (err) {
                console.log(`${caseName} fail `);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })
})
