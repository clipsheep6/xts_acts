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

import statistics from '@ohos.net.statistics';
import { describe, it, expect } from 'deccjsunit/index';

describe('NetworkManagerGetFlowBytesPerformanceTest', function () {
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 1000;

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Async_0300
     * @tc.name    The APP calls getCellularRxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Async_0300'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
            }
            startTime = new Date().getTime();
            statistics.getCellularRxBytes((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                }
                console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Promise_0300
     * @tc.name    The APP calls getCellularRxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getCellularRxBytes();
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
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Async_0300
     * @tc.name    The APP calls getCellularTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Async_0300'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
            }
            startTime = new Date().getTime();
            statistics.getCellularTxBytes((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                }
                console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Promise_0300
     * @tc.name    The APP calls getCellularTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getCellularTxBytes();
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
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0600
     * @tc.name    The APP calls getIfaceRxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0600'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let ifaceName = "eth0";
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
            }
            startTime = new Date().getTime();
            statistics.getIfaceRxBytes(ifaceName, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                }
                console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0600
     * @tc.name    The APP calls getIfaceRxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0600';
        let startTime = new Date().getTime();
        let ifaceName = "eth0";
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getIfaceRxBytes(ifaceName);
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
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0600
     * @tc.name    The APP calls getIfaceTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0600'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let ifaceName = "eth0";
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
            }
            startTime = new Date().getTime();
            statistics.getIfaceTxBytes(ifaceName, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                }
                console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0600
     * @tc.name    The APP calls getIfaceTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0600';
        let startTime = new Date().getTime();
        let ifaceName = "eth0";
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getIfaceTxBytes(ifaceName);
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
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0300
     * @tc.name    The APP calls getIfaceTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Async_0300'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
            }
            startTime = new Date().getTime();
            statistics.getAllRxBytes((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                }
                console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Promise_0300
     * @tc.name    The APP calls getAllRxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getAllRxBytes();
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
     * @tc.number  Telephony_NetworkManager_getAllTxBytes_Async_0300
     * @tc.name    The APP calls getAllTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Async_0300'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
            }
            startTime = new Date().getTime();

            statistics.getAllTxBytes((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                }
                console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAllTxBytes_Promise_0300
     * @tc.name    The APP calls getAllTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getAllTxBytes();
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
