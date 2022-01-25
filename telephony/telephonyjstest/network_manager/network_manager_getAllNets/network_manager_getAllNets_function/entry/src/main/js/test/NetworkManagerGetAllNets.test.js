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

import connection from '@ohos.net.connection';
import {describe, it, expect} from 'deccjsunit/index';

describe('NetworkManagerGetSpecifiNetFunction.test', function () {

    const NETID_IVVALID = 99;
    const ERR_NO_NETWORK = -11;

    /**
     * @tc.number  Telephony_NetworkManager_getAllNets_Async_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllNets_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllNets_Async_0100';
        connection.getAllNets((error, value) => {
            if (error) {
                console.log(`${caseName}  get data fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`${caseName}  get value : ${JSON.stringify(value[0])}`);
                connection.getNetCapabilities(value[0], (error, value_2) => {
                    if (error) {
                        console.log(`${caseName}  get ID fail: ${error}`);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}  get value success: ${JSON.stringify(value_2)}`);
                        expect(value[0].netId != "").assertTrue();
                        done();
                    }
                });
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Async_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Async_0100';
        connection.getAllNets((error, value) => {
            if (error) {
                console.log(`${caseName}  get data fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`getAllNets get netID value : ${JSON.stringify(value[0])}`);
                connection.getConnectionProperties(value[0], (error, value_2) => {
                    if (error) {
                        console.log(`${caseName}  get ID fail: ${error}`);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}  get value success: ${JSON.stringify(value_2)}`);
                        expect(value_2.ifaceName != "").assertTrue();
                        done();
                    }
                });
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Async_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Async_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getConnectionProperties(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} set not-exitst netId get value fail: ${error}`);
                expect(error == ERR_NO_NETWORK).assertTrue();
                done();
                return;
            } else {
                console.log(`${caseName} set not-exitst netId get value success: ${JSON.stringify(value)}`);
                expect().assertFail();
                done();
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Async_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Async_0100';
        connection.getAllNets((error, value) => {
            if (error) {
                console.log(`${caseName}  get data fail: ${error}`);
                expect().assertFail();
                done();
                return;
            } else {
                console.log(`Telephony_NetworkManager getAllNets netID value : ${JSON.stringify(value[0].netId)}`);
                connection.getNetCapabilities(value[0], (error, data) => {
                    if (error) {
                        console.log(`${caseName}  get ID fail: ${error}`);
                        expect().assertFail();
                        done();
                    } else {
                        console.log(`${caseName}  get value success: ${JSON.stringify(data)}`);
                        console.log(`${caseName}  get value success123456: ${JSON.stringify(data.netCaps_)}`);
                        console.log(`${caseName}  get value success122222: ${JSON.stringify(data.netCaps_[0].netCap)}`);
                        expect(data.netCaps_[0].netCap != "").assertTrue();
                        done();
                    }
                });
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Async_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Async_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getNetCapabilities(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} set not-exitst netId get value fail: ${error}`);
                expect(error == ERR_NO_NETWORK).assertTrue();
                done();
                return;
            } else {
                console.log(`${caseName} set not-exitst netId get value success: ${JSON.stringify(value)}`);
                expect().assertFail();
                done();
            }
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllNets_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getAllNets_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllNets_Promise_0100';
        connection.getAllNets().then((data) => {
            for (let i = 0; i < data.length; i++) {
                console.log(`${caseName}  getAllNets promiss success: ${data[i]}`);
                expect(data[i].netId != "").assertTrue();
                done();
            }
        }).catch((error) => {
            console.log(`${caseName} getAllNets promiss error: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Promise_0100';
        connection.getAllNets().then((handle) => {
            connection.getConnectionProperties(handle[0]).then((data) => {
                console.log(`${caseName} getConnectionProperties promiss success: ${JSON.stringify(data)}`);
                expect(data.ifaceName != "").assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName} getConnectionProperties promiss fail: ${error}`);
            });
        }).catch((error) => {
            console.log(`${caseName} getAllNets promiss error: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Promise_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getConnectionProperties(handle).then((data) => {
            console.log(`${caseName} getConnectionProperties promiss fail: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} getConnectionProperties promiss error: ${error}`);
            expect(error== ERR_NO_NETWORK).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0100
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Promise_0100';
        connection.getAllNets().then((handle) => {
            connection.getNetCapabilities(handle[0]).then((data) => {
                console.log(`${caseName} getNetCapabilities promiss data suceess: ${JSON.stringify(data)}`);
                expect(data.netCaps_[0].netCap != "").assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName} getNetCapabilities promiss fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} getAllNets promiss error: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Promise_0200
     * @tc.name    The policy is "NET_POLICY_ALLOW_METERED_BACKGROUND",
     *             test getConnectionProperties() to check the result of the callback
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Promise_0200';
        var handle = new connection.NetHandle(NETID_IVVALID);
        connection.getNetCapabilities(handle).then((data) => {
            console.log(`${caseName} getNetCapabilities promiss data fail: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} getNetCapabilities promiss error: ${error}`);
            expect(error== ERR_NO_NETWORK).assertTrue();
            done();
        });
    });
});
