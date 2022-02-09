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

describe('NetworkManagerGetFlowBytesFunction.test', function () {
    const DATA_0 = 0;

    /**
     * @tc.number  Telephony_NetworkManager_getCellularRxBytes_Async_0100
     * @tc.name    The APP calls getCellularRxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularRxBytes_Async_0100';
        console.log(`${caseName} done`);
        statistics.getCellularRxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        statistics.getCellularRxBytes().then((data) => {
            console.log(`${caseName} get data = ${data.message}:${ data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getCellularTxBytes_Async_0100
     * @tc.name    The APP calls getCellularTxBytes() and gets traffic successfully (>=DATA_0).
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getCellularTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getCellularTxBytes_Async_0100';
        statistics.getCellularTxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        statistics.getCellularTxBytes().then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "usb0";
        statistics.getIfaceRxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        let ifaceName = "wlan0";
        statistics.getIfaceRxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        let ifaceName = "eth0";
        statistics.getIfaceRxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        let ifaceName = "xlan0";
        statistics.getIfaceRxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
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
        let ifaceName = "usb0";
        statistics.getIfaceRxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "wlan0";
        statistics.getIfaceRxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "eth0";
        statistics.getIfaceRxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "xlan0";
        statistics.getIfaceRxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "usb0";
        statistics.getIfaceTxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        let ifaceName = "wlan0";
        statistics.getIfaceTxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        let ifaceName = "eth0";
        statistics.getIfaceTxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        let ifaceName = "xlan0";
        statistics.getIfaceTxBytes(ifaceName, (err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
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
        let ifaceName = "usb0";
        statistics.getIfaceTxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "wlan0";
        statistics.getIfaceTxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "eth0";
        statistics.getIfaceTxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
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
        let ifaceName = "xlan0";
        statistics.getIfaceTxBytes(ifaceName).then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code == DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0100
     * @tc.name    Call getAllRxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllRxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllRxBytes_Async_0100';
        statistics.getAllRxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();
            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        statistics.getAllRxBytes().then((data) => {
            console.log(`${caseName} get data = ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get erro = ` + err);
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllRxBytes_Async_0100
     * @tc.name    Call getAllTxBytes() and get traffic successfully (>=DATA_0)
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllTxBytes_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllTxBytes_Async_0100';
        statistics.getAllTxBytes((err, data) => {
            if (err) {
                console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
                done();

            }
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
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
        statistics.getAllTxBytes().then((data) => {
            console.log(`${caseName}  get data: ${data.message} + ${data.code}`);
            expect(data.code >= DATA_0).assertTrue();
            done();
        }).catch((err) => {
            console.log(`${caseName} get data fail: ${err.message} ${err.code}`);
            done();
        });
    });
});
