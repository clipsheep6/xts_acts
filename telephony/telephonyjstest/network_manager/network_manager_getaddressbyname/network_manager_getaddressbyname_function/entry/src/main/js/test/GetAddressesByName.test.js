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
import { describe, it, expect, beforeAll, afterAll, beforeEach, afterEach } from 'deccjsunit/index';

describe('NetworkManagerUidPolicyTest', function () {
    let ERR_NONE = 0;
    let NETID_100 = 100;
    let TIME_RADIO_TURNON = 5000;

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0100
     * @tc.name    TVerify hostName is "www.baidu.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_066600';
        connection.getDefaultNet().then((handle) => {
            console.log("handle=" + handle.id);
            handle.getAddressesByName("www.baidu.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressByName() to check the return value and
 *                 resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0200';
        connection.getDefaultNet().then((handle) => {
            console.log("handle=" + handle.id);
            handle.getAddressesByName("www.taobao.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0300
     * @tc.name    TVerify hostName is "www.csdn.net" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.csdn.net", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0400
     * @tc.name    TVerify hostName is "" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect(error!=0).assertTrue();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0500
     * @tc.name    TVerify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("666", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0500
     * @tc.name    TVerify hostName is "AAA" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("AAA", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });


    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0100
     * @tc.name    Verify hostName is "www.baidu.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0100';
        connection.getDefaultNet().then((handle) => {
            console.log("handle=" + handle.id);
            handle.getAddressByName("www.baidu.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0200';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.taobao.com", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0300
     * @tc.name    Verify hostName is "www.csdn.net" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.csdn.net", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(value.length>0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0400
     * @tc.name    Verify hostName is "" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0500
     * @tc.name    Verify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("666", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0500
     * @tc.name    Verify hostName is "AAA" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0600';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("AAA", (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"getAddressByName callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value));
                }
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0100
     * @tc.name    Verify hostName is "1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0100';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(1, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0200
     * @tc.name    Verify hostName is "2" test BindSocket() to check the return value and
 *              resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0200';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(2, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0300
     * @tc.name    Verify hostName is "100" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(100, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0400
     * @tc.name    Verify hostName is "0" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(0, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value==0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0600
     * @tc.name    Verify hostName is "-1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0600';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(-1, (error, value) => {
                if (error) {
                    console.log(`${caseName}`+"bindSocket callback error = " + error);
                    expect().assertFail();
                    done();
                    return;
                } else {
                    console.log(`${caseName}`+"bindSocket callback = " + value);
                }
                expect(value!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });


    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0100
     * @tc.name    Verify hostName is "www.baidu.com" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.baidu.com").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0200';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.taobao.com").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0300
     * @tc.name    Verify hostName is "www.csdn.net" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("www.csdn.net").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0400
     * @tc.name    Verify hostName is "" test GetAddressesByName() to check the return value and
 *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0500
     * @tc.name    Verify hostName is "666" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("666").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0600
     * @tc.name    Verify hostName is "AAA" test GetAddressesByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0600';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressesByName("AAA").then((data) => {
                console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressesByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0100
     * @tc.name    Verify hostName is "www.baidu.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0100';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.baidu.com").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect().assertFail();
                done();
                });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
         });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0200
     * @tc.name    Verify hostName is "www.taobao.com" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0200';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.taobao.com").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0300
     * @tc.name    Verify hostName is "www.csdn.net" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0300';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("www.csdn.net").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                expect(data.length>0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0400
     * @tc.name    Verify hostName is "" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0400';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName(" ").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0500
     * @tc.name    Verify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0500', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0500';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("666").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0600
     * @tc.name    Verify hostName is "666" test GetAddressByName() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0600', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0600';
        connection.getDefaultNet().then((handle) => {
            handle.getAddressByName("AAA").then((data) => {
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
            }).catch((error) => {
                console.log(`${caseName}`+"getAddressByName promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0100
     * @tc.name    Verify hostName is "1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0100';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(1).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
                expect(data==0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0200
     * @tc.name    Verify hostName is "2" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0200';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(2).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
                expect(data==0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0300
     * @tc.name    Verify hostName is "100" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0300';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(100).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
                expect(data==0).assertTrue();
                done();
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect().assertFail();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0400
     * @tc.name    Verify hostName is "-1" test BindSocket() to check the return value and
     *             resolution result. NET_CONN_SUCCESS is returned with 0
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0400', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0400';
        connection.getDefaultNet().then((handle) => {
            handle.bindSocket(-1).then((data) => {
                console.log(`${caseName}`+"bindSocket promiss = " + data);
            }).catch((error) => {
                console.log(`${caseName}`+"bindSocket promiss error = " + error);
                expect(error!=0).assertTrue();
                done();
            });
        }).catch((error) => {
            console.log(`${caseName}`+"getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });
});