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
import { describe, it, expect, beforeAll, afterAll, afterEach } from 'deccjsunit/index';

describe('NetworkManagerGetSpecifiNetFunction.test', function () {
    const DEFAULT_NET_ID = 100;
    //==================================getDefaultNet==================================
    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Promise_0100
     * @tc.name    Test getDefaultNet() to check the default net id
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getDefaultNet_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Promise_0100';
        connection.getDefaultNet().then((data) => {
            console.log(`${caseName}` + "getDefaultNet promiss = " + data.netId);
            expect(data.netId).assertEqual(DEFAULT_NET_ID);
            done();
        }).catch(error => {
            console.log(`${caseName}` + "getDefaultNet promiss error = " + error);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Async_0100
     * @tc.name    Test getDefaultNet() to check the default net id
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getDefaultNet_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Async_0100'
        connection.getDefaultNet((error, data) => {
            if (error) {
                console.log(`${caseName}` + "getDefaultNet callback error = " + error);
                expect().assertFail();
                done();
            } else {
                console.log(`${caseName}` + "getDefaultNet callback = " + data.netId);
                expect(data.netId).assertEqual(DEFAULT_NET_ID);
                done();
            }
        });
    });
    //==================================getDefaultNet==================================
    //==================================hasDefaultNet==================================
    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Promise_0100
     * @tc.name    Test hasDefaultNet() to check whether the default net active or not
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Promise_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Promise_0100';
        connection.hasDefaultNet().then((data) => {
            console.log(`${caseName} end data: ${data}`);
            expect(data).assertTrue();
            done();
        }).catch(error => {
            console.log(`${caseName} get fail: ${error}`);
            expect().assertFail();
            done();
        });
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Async_0100
     * @tc.name    Test hasDefaultNet() to check whether the default net active or not
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Async_0100', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Async_0100'
        connection.hasDefaultNet((error, value) => {
            if (error) {
                console.log(`${caseName}` + "hasDefaultNet callback error = " + error);
                expect().assertFail();
                done();
            } else {
                console.log(`${caseName}` + "hasDefaultNet callback value = " + value);
                expect(value).assertTrue();
                done();
            }
        });
    });
    //==================================HasDefaultNet==================================
});