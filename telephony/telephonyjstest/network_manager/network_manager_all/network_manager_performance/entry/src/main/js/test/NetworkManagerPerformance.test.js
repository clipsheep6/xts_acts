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

import policy from '@ohos.net.policy';
import connection from '@ohos.net.connection';
import statistics from '@ohos.net.statistics';
import {describe, it, expect} from 'deccjsunit/index';

describe('NetworkManagerUidPolicyPerformanceTest', function () {
    const TEST_RUN_TIME = 1000;
    const DELAYL_LIMIT = 1000;
    const DEFAULT_NET_ID = 100;

    /*******************************************************************lichao****************************************/
    /**
     * @tc.number  Telephony_NetworkManager_on_Async_1300
     * @tc.name    APP calls on()1000 times, and the output delay is less than 1000000us
     * @tc.desc    Performance test
     */
     it('Telephony_NetworkManager_on_Async_1300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1300';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let times = 0;
        console.log(`${caseName} running ===========`);
        async function  recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            await policy.on('netUidPolicyChange');
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            times++;
            console.log(`${caseName} data: ${times}`);
            recursive(n - 1);

        }
        recursive(TEST_RUN_TIME);
    });

    /**
     * @tc.number  Telephony_NetworkManager_off_Async_0400
     * @tc.name    APP calls off()1000 times, and the output delay is less than 1000000us
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_off_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_off_Async_0400';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let times = 0;
        console.log(`${caseName} running ===========`);
        async function  recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            await policy.off('netUidPolicyChange');
            endTime = new Date().getTime();
            totalTime += endTime - startTime;
            times++;
            console.log(`${caseName} data: ${times}`);
            recursive(n - 1);

        }
        recursive(TEST_RUN_TIME);
    });
    /*******************************************************************lichao****************************************/

    /*******************************************************************liuxin****************************************/
    /**
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0500
     * @tc.name    The reportNetConnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0500';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await connection.reportNetConnected(handle);
                console.log(`${caseName} : SUCCESS`);
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0500
     * @tc.name    The reportNetConnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0500'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            connection.reportNetConnected(handle, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail : ${err}`);
                } else {
                    console.log(`${caseName} : SUCCESS`);
                }
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0600
     * @tc.name    The reportNetDisconnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0600';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                await connection.reportNetDisconnected(handle);
                console.log(`${caseName} : SUCCESS`);
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0600
     * @tc.name    The reportNetDisconnected() test is executed TEST_RUN_TIME times,
     *             and the output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0600'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            connection.reportNetDisconnected(handle, (err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} fail : ${err}`);
                } else {
                    console.log(`${caseName} : SUCCESS`);
                }
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    });
    /*******************************************************************liuxin****************************************/

    /*******************************************************************xinglekang************************************/
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
                return;
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
                let data= await statistics.getCellularRxBytes();
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
                return;
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
                let data= await statistics.getCellularTxBytes();
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
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Async_0400
     * @tc.name    The APP calls getUidRxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Async_0400'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let app_uid = 567;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            statistics.getUidRxBytes(app_uid,(err, data) => {
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
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Promise_0400
     * @tc.name    The APP calls getUidRxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Promise_0400';
        let startTime = new Date().getTime();
        let app_uid = 567;
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await statistics.getUidRxBytes(app_uid);
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
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Async_0400
     * @tc.name    The APP calls getUidTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Async_0400'
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        let app_uid = 567;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            statistics.getUidTxBytes(app_uid,(err, data) => {
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
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Promise_0400
     * @tc.name    The APP calls getUidTxBytes() TEST_RUN_TIME times. The output delay is less than DELAYL_LIMIT
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Promise_0400';
        let startTime = new Date().getTime();
        let app_uid = 567;
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await statistics.getUidTxBytes(app_uid);
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
        let iface_name = "eth0";
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            statistics.getIfaceRxBytes(iface_name,(err, data) => {
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
        let iface_name = "eth0";
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await statistics.getIfaceRxBytes(iface_name);
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
        let iface_name = "eth0";
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} done useTime: ${totalTime}`);
                expect(totalTime).assertLess(DELAYL_LIMIT);
                done();
                return;
            }
            startTime = new Date().getTime();
            statistics.getIfaceTxBytes(iface_name,(err, data) => {
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
        let iface_name = "eth0";
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await statistics.getIfaceTxBytes(iface_name);
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
                return;
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
                let data= await statistics.getAllRxBytes();
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
                return;
            }
            startTime = new Date().getTime();

            statistics.getIfaceTxBytes((err, data) => {
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
                let data= await statistics.getAllTxBytes();
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
    /*******************************************************************xinglekang************************************/

    /*******************************************************************yaomintao************************************/
    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Promise_0300
     * @tc.name    The test GetDefaultNet() was executed 1000 times with
     *             an output delay of less than 1000000us
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getDefaultNet_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await connection.getDefaultNet();
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
            } catch (err) {
                console.log(`${caseName}` + err );
                expect().assertFail();
                done();
                return;
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Async_0300
     * @tc.name    The test GetDefaultNet() was executed 1000 times with
     *             an output delay of less than 1000000us
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getDefaultNet_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Async_0300'
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
            connection.getDefaultNet((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Promise_0300
     * @tc.name    Test HasDefaultNet() is executed 1000 times with an
     *             output latency of less than 1000000us
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Promise_0300';
        let startTime = new Date().getTime();
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await connection.hasDefaultNet();
                expect(data).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail:${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        let endTime = new Date().getTime();
        console.log(`${caseName} done useTime: ${endTime - startTime}`);
        expect(endTime - startTime).assertLess(DELAYL_LIMIT);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Async_0300
     * @tc.name    Test HasDefaultNet() is executed 1000 times with an
     *             output latency of less than 1000000us
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Async_0300'
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
            connection.hasDefaultNet((err, data) => {
                endTime = new Date().getTime();
                totalTime += endTime - startTime;
                if (err) {
                    console.log(`${caseName} get data fail:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertTrue();
                recursive(n - 1);
            });
        }
        recursive(TEST_RUN_TIME);
    });
    /*******************************************************************yaomintao************************************/

    /*******************************************************************xuyuangao*************************************/
    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                    return;
                }
                startTime = new Date().getTime();
                handle.getAddressesByName("www.baidu.com", (error, value) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    if (error) {
                        console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                        expect().assertFail();
                        done();
                        return;
                    } else {
                        console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                        recursive(n - 1);
                        done();
                    }
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                    return;
                }
                startTime = new Date().getTime();
                handle.getAddressByName("www.baidu.com", (error, value) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    if (error) {
                        console.log(`${caseName}`+"getAddressByName callback error = " + error);
                        expect().assertFail();
                        done();
                        return;
                    } else {
                        console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                        recursive(n - 1);
                        done();
                    }
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                    return;
                }
                startTime = new Date().getTime();
                handle.bindSocket(1, (error, value) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    if (error) {
                        console.log(`${caseName}`+"bindSocket callback error = " + error);
                        expect().assertFail();
                        done();
                        return;
                    } else {
                        console.log(`${caseName}`+"bindSocket callback = " + value);
                        recursive(n - 1);
                        done();
                    }
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                    return;
                }
                startTime = new Date().getTime();
                handle.getAddressesByName("www.baidu.com").then((data) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                    recursive(n - 1);
                    done();
                }).catch((error) => {
                    console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                    expect().assertFail();
                    done();
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0800', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0800';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                    return;
                }
                startTime = new Date().getTime();
                handle.getAddressByName("www.baidu.com").then((data) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                    recursive(n - 1);
                    done();
                }).catch((error) => {
                    console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                    expect().assertFail();
                    done();
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0800
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test setUidPolicy() to check the result of the callback
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0700';
        let totalTime = 0;
        let startTime = 0;
        let endTime = 0;
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} done useTime: ${totalTime}`);
                    expect(totalTime).assertLess(DELAYL_LIMIT);
                    done();
                    return;
                }
                startTime = new Date().getTime();
                handle.bindSocket(1).then((data) => {
                    endTime = new Date().getTime();
                    totalTime += endTime - startTime;
                    console.log(`${caseName}`+"bindSocket promiss = " + data);
                    recursive(n - 1);
                    done();
                }).catch((error) => {
                    console.log(`${caseName}`+"bindSocket promiss error = " + error);
                    expect().assertFail();
                    done();
                });
            }
            recursive(TEST_RUN_TIME);
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });
    /*******************************************************************xuyuangao*************************************/

});
