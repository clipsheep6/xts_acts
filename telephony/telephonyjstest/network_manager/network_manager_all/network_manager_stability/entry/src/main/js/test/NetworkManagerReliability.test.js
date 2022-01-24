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
import { describe, it, expect } from 'deccjsunit/index';

describe('NetworkManagerOnOffTest', function () {
    const TEST_RUN_TIME = 1000;
    let DELAY = 1000;
    const FLOW_DATA_0=0;
    const DEFAULT_NET_ID = 100;

    function sleep(timeout) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, timeout);
        })
    }

    /*******************************************************************lichao****************************************/
    /**
     * @tc.number  Telephony_NetworkManager_on_Async_1200
     * @tc.name    APP called on (),SetPolicyByUid sets Policy to NET_POLICY_ALLOW_METERED_BACKGROUND and UID to 1.
     *             NetUidPolicyChanged is triggered each time.  The return value is
     *             NET_POLICY_ALLOW_METERED_BACKGROUND, UID: 1
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_on_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1200';
        let times = 0;
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            policy.on('netUidPolicyChange', (err, value) => {
                if (err) {
                    console.log(`${caseName} register fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                } else {

                }
            });
            sleep(DELAY);
            times++;
            console.log(`${caseName} on success: ${times}`);
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_off_Async_0300
     * @tc.name    APP calls off()1000 times, each time successfully returning ERR_NONE
     * @tc.desc    Performance test
     */
     it('Telephony_NetworkManager_on_Async_1200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_on_Async_1200';
        let times = 0;
        async function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            policy.off('netUidPolicyChange', (err) => {
                if (err) {
                    console.log(`${caseName}  Unregister err: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                } else {
                }
            });
            times++;
            console.log(`${caseName} off success: ${times}`);
            recursive(n - 1);
        }
        recursive(TEST_RUN_TIME);
    })
    /*******************************************************************lichao****************************************/

    /*******************************************************************liuxin****************************************/
    /**
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0400
     * @tc.name    Test reportNetConnected() to set the UID network access policy TEST_RUN_TIME times.
     *             Each time, data is returned successfully
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0400';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await connection.reportNetConnected(handle);
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
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
     * @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0400
     * @tc.name    Test reportNetConnected() to set the UID network access policy TEST_RUN_TIME times,
     *             and successfully callback data each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0400';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            connection.reportNetConnected(handle, (err, data) => {
                if (err) {
                    console.log(`${caseName} erro data:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })

    /**
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0500
     * @tc.name    Test reportNetDisconnected() to set the UID network access policy TEST_RUN_TIME times.
     *             Each time, data is returned successfully
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0500';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await connection.reportNetDisconnected(handle);
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
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
     * @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0500
     * @tc.name    Test reportNetDisconnected() to set the UID network access policy TEST_RUN_TIME times,
     *             and successfully callback data each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0500';
        let handle = await connection.getDefaultNet();
        console.log(`${caseName} get netId : ${handle.netId}`);
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
            }
            connection.reportNetDisconnected(handle, (err, data) => {
                if (err) {
                    console.log(`${caseName} erro data:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    })
    /*******************************************************************liuxin****************************************/

    /*******************************************************************xinglekang************************************/
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
    /*******************************************************************xinglekang************************************/

    /*******************************************************************yaomintao*************************************/
    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Promise_0200
     * @tc.name    Test GetDefaultNet() 1000 times, each time can successfully return data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getDefaultNet_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await connection.getDefaultNet();
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Async_0200
     * @tc.name    Test GetDefaultNet() 1000 times, each time can successfully return data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_getDefaultNet_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Async_0200'
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
            }
            connection.getDefaultNet((err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Promise_0200
     * @tc.name    Test HasDefaultNet() 1000 times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await connection.hasDefaultNet();
                expect(data).assertTrue();
            } catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Async_0200
     * @tc.name    Test HasDefaultNet() 1000 times, each time successfully returning data
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Async_0200'
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
            }
            connection.hasDefaultNet((err,data)=>{
                if (err) {
                    console.log(`${caseName} erro data:${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data).assertTrue();
                recursive(n - 1);
            })
        }
        recursive(TEST_RUN_TIME);
    });
    /*******************************************************************yaomintao*************************************/

    /*******************************************************************xuyuangao*************************************/
    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0700
     * @tc.name    Test GetAddressesByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0700';
        let flag = true;
        connection.getDefaultNet().then((handle) => {
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                handle.getAddressesByName("www.baidu.com", (error, value) => {
                    if (error) {
                        console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                        flag = false;
                        expect().assertFail();
                        done();
                        return;
                    } else {
                        console.log(`${caseName}`+" getAddressesByName callback = " + JSON.stringify(value));
                        expect(flag).assertTrue();
                        done();
                        return;
                    }
                });
            }
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
        console.log(`${caseName} finish`);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0200
     * @tc.name    Test GetAddressesByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0700';
        connection.getDefaultNet().then((handle) => {
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                handle.getAddressesByName("www.taobao.com").then((data) => {
                    console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                    expect(data.length > 0).assertTrue();
                    done();
                    return;
                }).catch((error) => {
                    console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                    expect().assertFail();
                    done();
                });
            }
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0700
     * @tc.name    Test GetAddressByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0300';
        connection.getDefaultNet().then((handle) => {
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                handle.getAddressByName("www.csdn.net", (error, value) => {
                    if (error) {
                        console.log(`${caseName}`+"getAddressByName callback error = " + error);
                        expect().assertFail();
                        done();
                        return;
                    } else {
                        console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                        expect(value.length > 0).assertTrue();
                        done();
                    }
                });
            }
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0700
     * @tc.name    Test GetAddressByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0700';
        connection.getDefaultNet().then((handle) => {
            for(let index = 0; index < TEST_RUN_TIME; index++) {
                handle.getAddressByName("www.taobao.com").then((data) => {
                    console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                    expect(data.length > 0).assertTrue();
                    done();
                }).catch((error) => {
                    console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                    expect().assertFail();
                    done();
                });
            }
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0700
     * @tc.name    Test bindSocket() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_bindSocket_Async_0700';
        connection.getDefaultNet().then((handle) => {
            for(let index = 0; index < TEST_RUN_TIME; index++) {
                handle.bindSocket(1, (error, value) => {
                    if (error) {
                        console.log(`${caseName}`+"bindSocket callback error = " + error);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}`+"bindSocket callback = " + value);
                    }
                    expect(value == 0).assertTrue();
                    done();
                });
            }
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0700
     * @tc.name    Test bindSocket() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Promise_0700';
        connection.getDefaultNet().then((handle) => {
            for(let index = 0; index < TEST_RUN_TIME; index++) {
                handle.bindSocket(1).then((data) => {
                    console.log(`${caseName}`+"bindSocket promiss = " + data);
                    expect(data == 0).assertTrue();
                    done();
                }).catch((error) => {
                    expect().assertFail();
                    done();
                });
            }
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });
    /*******************************************************************xuyuangao*************************************/
});
