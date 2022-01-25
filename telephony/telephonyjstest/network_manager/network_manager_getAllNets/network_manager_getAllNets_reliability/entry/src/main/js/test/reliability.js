/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License')
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import connection from '@ohos.net.connection';
import {describe, it, expect} from 'deccjsunit/index';

describe('reliability.test', function () {
    const DEFAULT_NET_ID = 100;
    const TEST_RUN_TIME = 1000;
    var DEFAULT_NET_OBJ = new connection.NetHandle(DEFAULT_NET_ID);

    /**
     * @tc.number  Telephony_NetworkManager_getAllNets_Async_0200
     * @tc.name    The test getAllNets() was executed 1000 times with
     *             an output return data normally.
     * @tc.desc    Function test
     */
     it('Telephony_NetworkManager_getAllNets_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllNets_Async_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            connection.getAllNets((err, data) => {
                if (err) {
                    console.log(`${caseName} get data fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data != undefined).assertTrue();
            });
        }
        console.log(`${caseName} finish`);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_getAllNets_Promise_0200
     * @tc.name    The test getAllNets() was executed 1000 times with
     *             an output return data normally.
     * @tc.desc    Performance test
     */
     it('Telephony_NetworkManager_getAllNets_Promise_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getAllNets_Promise_0200';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await connection.getAllNets();
                expect(data != undefined).assertTrue();
            } catch (err) {
                console.log(`${caseName}` + err );
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    });

    //==================================getConnectionProperties==================================
    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Async_0300
     * @tc.name    The test getConnectionProperties() was executed 1000 times with
     *             an output return data normally.
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getConnectionProperties_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Async_0300';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            connection.getConnectionProperties(DEFAULT_NET_OBJ, (err, data) => {
                if (err) {
                    console.log(`${caseName} get data fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data != undefined).assertTrue();
            });
        }
        console.log(`${caseName} finish`);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_getConnectionProperties_Promise_0300
     * @tc.name    The test getConnectionProperties() was executed 1000 times with
     *             an output return data normally.
     * @tc.desc    Performance test
     */
     it('Telephony_NetworkManager_getConnectionProperties_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getConnectionProperties_Promise_0300';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await connection.getConnectionProperties(DEFAULT_NET_OBJ);
                expect(data != undefined).assertTrue();
            } catch (err) {
                console.log(`${caseName}` + err );
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    });

    //==================================getNetCapabilities==================================
    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Async_0300
     * @tc.name    The test getNetCapabilities() was executed 1000 times with
     *             an output return data normally.
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Async_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Async_0300';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            connection.getNetCapabilities(DEFAULT_NET_OBJ, (err, data) => {
                if (err) {
                    console.log(`${caseName} get data fail: ${err}`);
                    expect().assertFail();
                    done();
                    return;
                }
                expect(data != undefined).assertTrue();
            });
        }
        console.log(`${caseName} finish`);
        done();
    });

    /**
     * @tc.number  Telephony_NetworkManager_getNetCapabilities_Promise_0300
     * @tc.name    The test getNetCapabilities() was executed 1000 times with
     *             an output return data normally.
     * @tc.desc    Performance test
     */
    it('Telephony_NetworkManager_getNetCapabilities_Promise_0300', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getNetCapabilities_Promise_0300';
        for (let index = 0; index < TEST_RUN_TIME; index++) {
            try {
                let data= await connection.getNetCapabilities(DEFAULT_NET_OBJ);
                expect(data != undefined).assertTrue();
            } catch (err) {
                console.log(`${caseName}` + err );
                expect().assertFail();
                done();
                return;
            }
        }
        console.log(`${caseName} finish`);
        done();
    });
});