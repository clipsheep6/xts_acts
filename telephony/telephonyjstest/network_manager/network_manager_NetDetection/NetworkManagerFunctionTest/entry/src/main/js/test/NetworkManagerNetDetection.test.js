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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('NetworkManagerNetDetectionTest', function () {

    const NETID_INVALID = -1;
    const NETID_OUT = 1001;
    const NET_CONN_ERR_NETID_NOT_FOUND = -8;

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0100
     * @tc.name    The netId is "NetType" get,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            console.log(`${caseName} get handle: ${handle.netId}`);
            connection.reportNetConnected(handle).then((data)=> {
                console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                expect(data).assertEqual(connection.NET_CONN_SUCCESS);
                done();
            }).catch((error) => {
                console.log(`${caseName} reportNetConnected fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} get handle_fail: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetConnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0200';
        var handle = new connection.NetHandle(NETID_INVALID);
        console.log(`${caseName} set netId : ${handle.netId}`);
        connection.reportNetConnected(handle).then((data)=> {
            console.log(`${caseName} fail: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Promise_0300
     * @tc.name    The netId is Outside the scope of,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Promise_0300';
        var handle = new connection.NetHandle(NETID_OUT);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetConnected(handle).then((data)=> {
            console.log(`${caseName} get netId: ${handle.netId}`);
            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0100
     * @tc.name    The netId is "NetType" get,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0100';
        connection.getDefaultNet((error, handle) => {
            if (error) {
                console.log(`${caseName} get handle fail: ${error}`);
                expect().assertFail();
                done();
            } else {
                connection.reportNetConnected(handle, (error, value) => {
                    if (error) {
                        console.log(`${caseName} reportNetConnected fail: ${error}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} end value: ${JSON.stringify(value)}`);
                    expect(value).assertEqual(connection.NET_CONN_SUCCESS);
                    done();
                });
            }
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetConnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0200';
        var handle = new connection.NetHandle(NETID_INVALID);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetConnected(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
        });

    });

    /* @tc.number  Telephony_NetworkManager_reportNetConnected_Async_0300
     * @tc.name    The netId is Outside the scope of,test reportNetConnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetConnected_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetConnected_Async_0300';
        var handle = new connection.NetHandle(NETID_OUT);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetConnected(handle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0100
     * @tc.name    The netId is "NetType" get,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            console.log(`${caseName} get handle: ${handle}`);
            connection.reportNetDisconnected(handle).then((data)=> {
                console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                expect(data).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} get handle_fail: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetDisconnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0200';
        var handle = new connection.NetHandle(NETID_INVALID);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetDisconnected(handle).then((data)=> {
            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0300
     * @tc.name    The netId is Outside the scope of,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0300';
        connection.NetHandle.netId = NETID_OUT;
        var handle = new connection.NetHandle(NETID_OUT);
        console.log(`${caseName} set netId: ${handle.netId}`);
        connection.reportNetDisconnected(handle).then((data)=> {
            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
            expect().assertFail();
            done();
        }).catch((error) => {
            console.log(`${caseName} ERR_NETID: ${error}`);
            expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0400
     * @tc.name    The netId is supported Network detection ,
     *             test reportNetDisconnected(), no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Promise_0400';
        connection.getDefaultNet().then((handle) => {
            console.log(`${caseName} get handle: ${handle}`);
            connection.reportNetConnected(handle).then((data)=> {
                console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                connection.reportNetDisconnected(handle).then((value)=> {
                    console.log(`${caseName} end value: ${JSON.stringify(value)}`);
                    expect(value).assertTrue();
                    done();
                }).catch((error) => {
                    console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                    expect().assertFail();
                    done();
                });
            }).catch((error) => {
                console.log(`${caseName} reportNetConnected fail: ${error}`);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName} get handle_fail: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0100
     * @tc.name    The netId is "NetType" get,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0100';
        connection.getDefaultNet((error, handle) => {
            if (error) {
                console.log(`${caseName} get handle fail: ${error}`);
                expect().assertFail();
                done();
            } else {
                console.log(`${caseName} get netId: ${handle.netId}`);
                connection.reportNetDisconnected(handle, (error, value) => {
                    if (error) {
                        console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                        expect().assertFail();
                        done();
                        return;
                    }
                    console.log(`${caseName} end value: ${JSON.stringify(value)}`);
                    expect(value).assertEqual(connection.NET_CONN_SUCCESS);
                    done();
                });
            }
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Async_0200
     * @tc.name    The netId is "NETID_INVALID",test reportNetDisconnected() to check the
     *             result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0200';
        connection.NetHandle.netId = NETID_INVALID;
        console.log(`${caseName} set netId: ${JSON.stringify(connection.NetHandle.netId)}`);
        connection.reportNetDisconnected(connection.NetHandle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0300
     * @tc.name    The netId is Outside the scope of,test reportNetDisconnected()
     *             to check the result,no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0300';
        connection.NetHandle.netId = NETID_OUT;
        console.log(`${caseName} set netId: ${JSON.stringify(connection.NetHandle.netId)}`);
        connection.reportNetDisconnected(connection.NetHandle, (error, value) => {
            if (error) {
                console.log(`${caseName} ERR_NETID: ${error}`);
                expect(error).assertEqual(NET_CONN_ERR_NETID_NOT_FOUND);
                done();
                return;
            }
            console.log(`${caseName} end value: ${JSON.stringify(value)}`);
            expect().assertFail();
            done();
        });
    });

    /* @tc.number  Telephony_NetworkManager_reportNetDisconnected_Promise_0400
     * @tc.name    The netId is supported Network detection ,
     *             test reportNetDisconnected(), no return value,Don't enter error
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_reportNetDisconnected_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_reportNetDisconnected_Async_0400';
        connection.getDefaultNet((error, handle) => {
            if (error) {
                console.log(`${caseName} get handle fail: ${error}`);
                expect().assertFail();
                done();
            } else {
                connection.reportNetConnected(handle, (error, value) => {
                    if (error) {
                        console.log(`${caseName} reportNetConnected fail: ${error}`);
                        expect().assertFail();
                        done();
                    }else{
                        connection.reportNetDisconnected(handle, (error, data) => {
                            if(error){
                                console.log(`${caseName} reportNetDisconnected fail: ${error}`);
                                expect().assertFail();
                                done();
                                return;
                            }
                            console.log(`${caseName} end data: ${JSON.stringify(data)}`);
                            expect(value).assertEqual(connection.NET_CONN_SUCCESS);
                            done();
                        })
                    }
                });
            }
        });
    });

});