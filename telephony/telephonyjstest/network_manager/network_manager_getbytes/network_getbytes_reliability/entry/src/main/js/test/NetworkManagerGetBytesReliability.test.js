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

describe('NetworkManagerGetBytesReliabilityTest', function () {
    const TEST_RUN_TIME = 1000;
    const FLOW_DATA_0=0;

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Async_0200
     * @tc.name    The APP calls getCellularRxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getCellularRxBytes((err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Promise_0200
     * @tc.name    The APP calls getCellularTxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getCellularRxBytes();
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Async_0200
     * @tc.name    The APP calls getCellularTxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getCellularTxBytes((err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Promise_0200
     * @tc.name    The APP calls getCellularTxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getCellularTxBytes();
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Async_0300
     * @tc.name    Set a valid application UID and call getUidRxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Async_0300';
        let app_uid = 567;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getUidRxBytes(app_uid,(err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Promise_0300
     * @tc.name    Set a valid application UID and call getUidRxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Promise_0300';
        let app_uid = 567;
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getUidRxBytes(app_uid);
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Async_0300
     * @tc.name    Set a valid application UID and call getUidTxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Async_0300';
        let app_uid = 567;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getUidTxBytes(app_uid,(err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Promise_0300
     * @tc.name    Set a valid application UID and call getUidTxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Promise_0300';
        let app_uid = 567;
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getUidTxBytes(app_uid);
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0500
     * @tc.name    Set the network interface to an Ethernet interface and call getIfaceRxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0500';
        let iface_name = "eth0";
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getIfaceRxBytes(iface_name,(err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0500
     * @tc.name    Set the network interface to an Ethernet interface and call getIfaceRxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0500';
        let iface_name = "eth0";
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getIfaceRxBytes(iface_name);
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0500
     * @tc.name    Set the network interface to an Ethernet interface and call getIfaceTxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0500';
        let iface_name = "eth0";
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getIfaceTxBytes(iface_name,(err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0500
     * @tc.name    Set the network interface to an Ethernet interface and call getIfaceTxBytes() TEST_RUN_TIME times,
     *             each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0500';
        let iface_name = "eth0";
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getIfaceTxBytes(iface_name);
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0200
     * @tc.name    The APP calls getAllRxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getAllRxBytes((err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Promise_0200
     * @tc.name    The APP calls getAllRxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getAllRxBytes();
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAllTxBytes_Async_0200
     * @tc.name    The APP calls getAllTxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Async_0200';
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            statistics.getAllTxBytes((err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err.code}`);
                    expect().assertFail();
                    done();
                    return;
                }
                console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
                expect(data.code >= FLOW_DATA_0).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_getAllTxBytes_Promise_0200
     * @tc.name    The APP calls getAllTxBytes() TEST_RUN_TIME times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await statistics.getAllTxBytes();
                expect(data.code >= FLOW_DATA_0).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    })
})
