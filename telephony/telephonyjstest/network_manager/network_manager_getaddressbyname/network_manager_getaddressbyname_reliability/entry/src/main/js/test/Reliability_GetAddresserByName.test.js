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

import { describe, it, expect } from 'deccjsunit/index';
import connection from '@ohos.net.connection';

describe('NetworkManagerGetBytesReliabilityTest', function () {
    let addressBaidu ="www.baidu.com";
    let addressTaobao ="www.taobao.com";
    const TEST_RUN_TIME = 1000;

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Async_0700
     * @tc.name    Test GetAddressesesByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */

    it('Telephony_NetworkManager_GetAddressesByName_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Async_0700';
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} finish`);
                    done();
                }
                handle.getAddressesByName(addressBaidu, (error, value) => {
                    if (error) {
                        console.log(`${caseName}`+"getAddressesesByName callback error = " + error);
                        expect().assertFail();
                        done();
                    }
                    console.log(`${caseName}`+"getAddressesByName callback = " + JSON.stringify(value))
                    expect(value.length > 0).assertTrue();
                    recursive(n - 1);
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
     * @tc.number  Telephony_NetworkManager_GetAddressesByName_Promise_0200
     * @tc.name    Test GetAddressesByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_GetAddressesByName_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressesByName_Promise_0700';
        let handle = await connection.getDefaultNet()
        console.log(`${caseName} get netId : ${handle.netId}`);
            for (let index = 0; index < TEST_RUN_TIME; index++) {
                try {
                    let data = await handle.getAddressesByName(addressTaobao)
                    console.log(`${caseName}`+"getAddressesByName promiss = " + JSON.stringify(data));
                    expect(data.length > 0).assertTrue();
                }catch (err) {
                    console.log(`${caseName} fail : ${err}`);
                    expect().assertFail();
                    done();
                }
            }
        console.log(`${caseName} finish`);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Async_0700
     * @tc.name    Test GetAddressByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_GetAddressByName_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Async_0700';
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} finish`);
                    done();
                }
                handle.getAddressesByName(addressBaidu, (error, value) => {
                    if (error) {
                        console.log(`${caseName}`+"getAddressesByName callback error = " + error);
                        expect().assertFail();
                        done();
                    }
                    console.log(`${caseName}`+"getAddressByName callback = " + JSON.stringify(value))
                    expect(value.length > 0).assertTrue();
                    recursive(n - 1);
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
     * @tc.number  Telephony_NetworkManager_GetAddressByName_Promise_0700
     * @tc.name    Test GetAddressByName() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_GetAddressByName_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_GetAddressByName_Promise_0700';
        let handle = await connection.getDefaultNet()
        console.log(`${caseName} get netId : ${handle.netId}`);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await handle.getAddressByName(addressTaobao)
                console.log(`${caseName}`+"getAddressByName promiss = " + JSON.stringify(data));
                expect(data.length > 0).assertTrue();
            }catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
            }
        }
        console.log(`${caseName} finish`);
        done();
    });


    /**
     * @tc.number  Telephony_NetworkManager_BindSocket_Async_0700
     * @tc.name    Test bindSocket() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_BindSocket_Async_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Async_0700';
        connection.getDefaultNet().then((handle) => {
            function recursive(n) {
                if (n <= 0) {
                    console.log(`${caseName} finish`);
                    done();
                }
                handle.bindSocket(1, (error, value) => {
                    if (error) {
                        console.log(`${caseName}`+"bindSocket callback error = " + error);
                        expect().assertFail();
                        done();
                    }
                    console.log(`${caseName}`+"bindSocket callback = " + JSON.stringify(value))
                    expect(value == 0).assertTrue();
                    recursive(n - 1);
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
     * @tc.number  Telephony_NetworkManager_BindSocket_Promise_0700
     * @tc.name    Test bindSocket() 1000 times and return data successfully each time
     * @tc.desc    Reliability test
     */
    it('Telephony_NetworkManager_BindSocket_Promise_0700', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_BindSocket_Promise_0700';
        let handle = await connection.getDefaultNet()
        console.log(`${caseName} get netId : ${handle.netId}`);
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data = await handle.bindSocket(1)
                console.log(`${caseName}`+"bindSocket promiss = " + data);
                expect(data == 0).assertTrue();
            }catch (err) {
                console.log(`${caseName} fail : ${err}`);
                expect().assertFail();
                done();
            }
        }
        console.log(`${caseName} finish`);
        done();
    });
});







