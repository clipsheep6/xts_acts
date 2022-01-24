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
    const TEST_RUN_TIME = 1000;
    //==================================getDefaultNet==================================
    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Promise_0200
     * @tc.name    Test GetDefaultNet() 1000 times, each time can successfully return data
     * @tc.desc    Function test
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
        return;
    });

    /**
     * @tc.number  Telephony_NetworkManager_getDefaultNet_Async_0200
     * @tc.name    Test GetDefaultNet() 1000 times, each time can successfully return data
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_getDefaultNet_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_getDefaultNet_Async_0200'
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
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
    //==================================getDefaultNet==================================
    //==================================hasDefaultNet==================================
    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Promise_0200
     * @tc.name    Test HasDefaultNet() 1000 times, each time successfully returning data
     * @tc.desc    Function test
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
        return;
    });

    /**
     * @tc.number  Telephony_NetworkManager_hasDefaultNet_Async_0200
     * @tc.name    Test HasDefaultNet() 1000 times, each time successfully returning data
     * @tc.desc    Function test
     */
    it('Telephony_NetworkManager_hasDefaultNet_Async_0200', 0, async function (done) {
        let caseName = 'Telephony_NetworkManager_hasDefaultNet_Async_0200'
        function recursive(n) {
            if (n <= 0) {
                console.log(`${caseName} finish`);
                done();
                return;
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
    //==================================HasDefaultNet==================================
});