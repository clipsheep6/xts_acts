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
import netstats from '@ohos.netmanager.netstats';
import { describe, it, expect, beforeAll, afterAll, afterEach } from 'deccjsunit/index';

describe('NetworkManagerGetFlowBytesFunction.test', function () {
    const DATA_0 = 0;
    const DATA_LOWER_1 = -1;

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Async_0100
     * @tc.name    The APP calls getCellularRxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Async_0100';
        console.log(`${caseName} done`);
        netstats.getCellularRxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Promise_0100
     * @tc.name    The APP calls getCellularRxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Promise_0100';
        netstats.getCellularRxBytes().then((data) => {
            console.log("${caseName} get data = " + data.message + " " + data.code);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Async_0100
     * @tc.name    The APP calls getCellularTxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Async_0100';
        netstats.getCellularTxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Promise_0100
     * @tc.name    The APP calls getCellularTxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Promise_0100';
        netstats.getCellularTxBytes().then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Async_0100
     * @tc.name    Set a valid application UID, call getUidRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Async_0100';
        let app_uid = 567;
        netstats.getUidRxBytes(app_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Async_0200
     * @tc.name    Set the invalid application UID by calling getUidRxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Async_0200';
        let app_useless_uid = 10000;
        netstats.getUidRxBytes(app_useless_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Promise_0100
     * @tc.name    Set a valid application UID, call getUidRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Promise_0100';
        let app_uid = 567;
        netstats.getUidRxBytes(app_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidRxBytes_Promise_0200
     * @tc.name    Set the invalid application UID by calling getUidRxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidRxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidRxBytes_Promise_0200';
        let app_uid = 10000;
        netstats.getUidRxBytes(app_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Async_0100
     * @tc.name    Set a valid application UID, call getUidTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Async_0100';
        let app_uid = 567;
        netstats.getUidTxBytes(app_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Async_0200
     * @tc.name    Set the invalid application UID by calling getUidTxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Async_0200';
        let app_useless_uid = 10000;
        netstats.getUidRxBytes(app_useless_uid,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Promise_0100
     * @tc.name    Set a valid application UID, call getUidTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Promise_0100';
        let app_uid = 567;
        netstats.getUidTxBytes(app_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getUidTxBytes_Promise_0200
     * @tc.name    Set the invalid application UID by calling getUidTxBytes(), which gets the traffic value DATA_LOWER_1
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getUidTxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getUidTxBytes_Promise_0200';
        let app_useless_uid = 10000;
        netstats.getUidTxBytes(app_useless_uid).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0100';
        let iface_name = "usb0";
        netstats.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceRxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0200';
        let iface_name = "wlan0";
        netstats.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceRxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0300';
        let iface_name = "eth0";
        netstats.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Async_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceRxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Async_0400';
        let iface_name = "xlan0";
        netstats.getIfaceRxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceRxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0100';
        let iface_name = "usb0";
        netstats.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceRxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0200';
        let iface_name = "wlan0";
        netstats.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceRxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0300';
        let iface_name = "eth0";
        netstats.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceRxBytes_Promise_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceRxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceRxBytes_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceRxBytes_Promise_0400';
        let iface_name = "xlan0";
        netstats.getIfaceRxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0100';
        let iface_name = "usb0";
        netstats.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceTxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0200';
        let iface_name = "wlan0";
        netstats.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceTxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0300';
        let iface_name = "eth0";
        netstats.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Async_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceTxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Async_0400';
        let iface_name = "xlan0";
        netstats.getIfaceTxBytes(iface_name,(err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0100
     * @tc.name    Set the network interface to cellular,
     *             call getIfaceTxBytes() and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0100';
        let iface_name = "usb0";
        netstats.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0200
     * @tc.name    Set network interface to WIFI network interface,
     *             call getIfaceTxBytes(), successfully obtain traffic value (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0200';
        let iface_name = "wlan0";
        netstats.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0300
     * @tc.name    Set the network interface to an Ethernet interface,
     *             call getIfaceTxBytes(), and get the traffic value successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0300';
        let iface_name = "eth0";
        netstats.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getIfaceTxBytes_Promise_0400
     * @tc.name    Set the network interface to a nonexistent one, call getIfaceTxBytes(),
     *             and get a traffic value of DATA_0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getIfaceTxBytes_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getIfaceTxBytes_Promise_0400';
        let iface_name = "xlan0";
        netstats.getIfaceTxBytes(iface_name).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertEqual(DATA_LOWER_1);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0100
     * @tc.name    Call getAllRxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Async_0100';
        netstats.getAllRxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Promise_0100
     * @tc.name    Call getAllRxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Promise_0100';
        netstats.getAllRxBytes().then((data) => {
            console.log("${caseName} get data = " + data.message + " " + data.code);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0100
     * @tc.name    Call getAllTxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Async_0100';
        netstats.getAllTxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
                return;
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllTxBytes_Promise_0100
     * @tc.name    Call getAllTxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Promise_0100';
        netstats.getAllTxBytes().then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code).assertLarger(DATA_0);
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
            return;
        });
    });
});
